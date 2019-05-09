#include "thirdparty/microtest.h"
#include "Interface.h"
#include <time.h>
#include <fstream>
#include <iostream>
#include <thread>

std::string readFileContents(const std::string& file_path)
{
    std::ifstream t(file_path);
    std::string text((std::istreambuf_iterator<char>(t)),
        std::istreambuf_iterator<char>());
    return text;
}

std::string TTT(const std::string& concatenated)
{
    std::string result;
    int testsFailed = 0;
    clock_t start, end;
    int tks_count = 0;
    IParseResult* parseResult = ParseSql(concatenated, DBMS_SQL2003);

    INode* tree = parseResult->GetParseTree();
    if (parseResult->IsAccept() && tree)
    {
        result  = tree->Serialize();
        auto t = tree->GetType();
        IPlan* plan = CreatePlan([](IPlan* plan, ITableItem* tbi){},
                                 [](IPlan* plan, ITableColumnRefItem* cli){},
                                 [](IPlan* plan, uint64_t last_stmt_id){
                                     auto last_stmt = plan->GetQuery(last_stmt_id);
                                     switch (last_stmt->GetStmtType())
                                     {
                                         case E_STMT_TYPE_INSERT:
                                         {
                                             ITableItem* tbi = dynamic_cast<IInsertStmt*>(last_stmt)->GetInsertTable();
                                             //printf("INSERT TARGET %s", tbi->GetTableObject().c_str());
                                         }
                                             break;
                                         default:
                                             break;
                                     }
                                     printf("\n");
                                 }, [](IPlan* plan, IWhereCluase* wc){
                    uint64_t query_id = wc->GetQueryID();
                    IStmt* stmt = plan->GetQuery(query_id);
                    ITableItem* tbi = nullptr;
                    switch (stmt->GetStmtType())
                    {
                        case E_STMT_TYPE_UPDATE:
                        {
                            ITableItem* tbi = dynamic_cast<IUpdateStmt*>(stmt)->GetUpdateTable();
                            std::string cond = "";
                            switch (tbi->GetTableItemType())
                            {
                                case E_BASIC_TABLE:
                                {
                                    if (true)
                                    {
                                        cond += "(" + tbi->GetTableObject() + ".Qty IS NULL OR ";
                                        cond += tbi->GetTableObject() + ".Qty > 3)";
                                    }
                                }
                                    break;
                                case E_BASIC_TABLE_WITH_ALIAS:
                                {
                                    if (true)
                                    {
                                        cond += "(" + tbi->GetTableAliasName() + ".Qty IS NULL OR ";
                                        cond += tbi->GetTableAliasName() + ".Qty > 3)";
                                    }
                                }
                                    break;
                                default:
                                {
                                    /*do nothing*/
                                }
                                    break;
                            }
                            wc->AddCondition(cond);
                        }
                            break;
                        case E_STMT_TYPE_DELETE:
                        {
                            ITableItem* tbi = dynamic_cast<IDeleteStmt*>(stmt)->GetDeleteTable();
                            std::string cond = "";
                            switch (tbi->GetTableItemType())
                            {
                                case E_BASIC_TABLE:
                                {
                                    if (true)
                                    {
                                        cond += "(" + tbi->GetTableObject() + ".Qty IS NULL OR ";
                                        cond += tbi->GetTableObject() + ".Qty > 3)";
                                    }
                                }
                                    break;
                                case E_BASIC_TABLE_WITH_ALIAS:
                                {
                                    if (true)
                                    {
                                        cond += "(" + tbi->GetTableAliasName() + ".Qty IS NULL OR ";
                                        cond += tbi->GetTableAliasName() + ".Qty > 3)";
                                    }
                                }
                                    break;
                                default:
                                {
                                    /*do nothing*/
                                }
                                    break;
                            }
                            wc->AddCondition(cond);
                        }
                            break;
                        case E_STMT_TYPE_SELECT:
                        {
                            size_t cnt = stmt->GetTableItemCount();
                            std::string cond = "";
                            size_t t = 0;
                            for (size_t i = 0; i < cnt; ++i)
                            {
                                ITableItem* tbi = stmt->GetTableItem(i);
                                if (!tbi) continue;

                                if (t > 0)
                                    cond += " AND ";

                                switch (tbi->GetTableItemType())
                                {
                                    case E_BASIC_TABLE:
                                    {
                                        if (true)
                                        {
                                            t++;
                                            cond += "(" + tbi->GetTableObject() + ".Qty IS NULL OR ";
                                            cond += tbi->GetTableObject() + ".Qty > 3)";
                                        }
                                    }
                                        break;
                                    case E_BASIC_TABLE_WITH_ALIAS:
                                    {
                                        if (true)
                                        {
                                            t++;

                                            cond += "(" + tbi->GetTableAliasName() + ".Qty IS NULL OR ";
                                            cond += tbi->GetTableAliasName() + ".Qty > 3)";
                                        }
                                    }
                                        break;
                                    default:
                                    {
                                        /*do nothing*/
                                    }
                                        break;
                                }
                            }
                            if (t > 0)
                            {
                                wc->AddCondition(cond);
                            }
                        }
                            break;
                        default:
                            int a;/* do nothing */
                    }
                }, [](IPlan* plan){
                    printf("%s\n", plan->GetErrorDetail().c_str());
                }, nullptr, parseResult);
        VisitPlan(plan);
        auto ssss = tree->Serialize();
        //printf("%s\n", concatenated.c_str());
        //printf("%s\n", tree->Serialize().c_str());
        DestroyParseResult(parseResult);
        DestroyPlan(plan);
    }
    return result;
}

TEST(TPCHQueryGrammarTests)
{
    std::vector<std::string> files = {
        "test/queries/tpc-h-01.sql",
        "test/queries/tpc-h-02.sql",
        "test/queries/tpc-h-03.sql",
        "test/queries/tpc-h-04.sql",
        "test/queries/tpc-h-05.sql",
        "test/queries/tpc-h-06.sql",
        "test/queries/tpc-h-07.sql",
        "test/queries/tpc-h-08.sql",
        "test/queries/tpc-h-09.sql",
        "test/queries/tpc-h-10.sql",
        "test/queries/tpc-h-11.sql",
        "test/queries/tpc-h-12.sql",
        "test/queries/tpc-h-13.sql",
        "test/queries/tpc-h-14.sql",
        "test/queries/tpc-h-15.sql",
        "test/queries/tpc-h-16.sql",
        "test/queries/tpc-h-17.sql",
        "test/queries/tpc-h-18.sql",
        "test/queries/tpc-h-19.sql",
        "test/queries/tpc-h-20.sql",
        "test/queries/tpc-h-21.sql",
        "test/queries/tpc-h-22.sql",
        "test/queries/tpc-h-23.sql",
        "test/queries/tpc-h-24.sql",
        "test/queries/tpc-h-25.sql",
        "test/queries/tpc-h-26.sql",
        "test/queries/tpc-h-27.sql",
        "test/queries/tpc-h-28.sql",
        "test/queries/tpc-h-29.sql",
        "test/queries/tpc-h-30.sql",
        "test/queries/sql2003-ok.sql"
    };

    int testsFailed = 0;
    std::string concatenated = "";
    for (const std::string& file_path : files)
    {
        std::string query = readFileContents(file_path);

        IParseResult* parseResult = ParseSql(query, DBMS_SQL2003);
        INode* tree = parseResult->GetParseTree();
        if (!parseResult->IsAccept())
        {
            mt::printFailed(file_path.c_str());
            printf("\terror at(%d,%d): %s\n", parseResult->GetErrorLine(), parseResult->GetErrorColumn(), parseResult->GetErrorDetail().c_str());
            ++testsFailed;
        }
        else
        {
            mt::printOk(file_path.c_str());
            tree->Serialize();
        }
        if (parseResult->IsAccept())
        {
            if (concatenated.length() > 0 && concatenated.back() != ';')
                concatenated += ";";
            concatenated += query;
        }
        DestroyParseResult(parseResult);
    }

    auto t1 = TTT(concatenated);
    std::string tmp = "";
    CompressSql(concatenated, tmp);
    printf("\n#####################\n");
    printf(tmp.c_str());
    BeautifySql(concatenated, tmp);
    printf("\n#####################\n");
    printf(tmp.c_str());

    if (t1 != TTT(t1))
        mt::printFailed("SERIALIZE");
    else
        mt::printOk("SERIALIZE");

    std::vector<std::thread*> threads;
    size_t sz = 0;
    for (size_t i = 0; i < sz; ++i)
    {
        std::thread* t = new std::thread([concatenated](){
            TTT(concatenated);
        });
        threads.push_back(t);
    }
    for (size_t i = 0; i < sz; ++i)
    {
        threads[i]->join();
        delete(threads[i]);
    }

    {
        clock_t start, end;
        start = clock();
        size_t frequency = 10;

        for (size_t i = 0; i < frequency; ++i)
        {
            TTT(concatenated);
        }
        end = clock();
        double seconds  =(double)(end - start)/CLOCKS_PER_SEC;
        fprintf(stdout, "SQL LENGTH:%d Frequency %d,Use time is: %.8f\n",concatenated.size(), frequency, seconds);
    }

    ASSERT_EQ(testsFailed, 0);
}

TEST_MAIN()
