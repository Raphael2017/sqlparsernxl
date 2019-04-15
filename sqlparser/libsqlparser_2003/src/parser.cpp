#include "parser.h"
#include "sqlparser_sql2003_bison.h"
#include "sqlparser_sql2003_flex.h"

#include "sqlparser_tsql_bison.h"
#include "sqlparser_tsql_flex.h"

#include "serialize_format.h"

struct _Buf {
    _Buf() : line_(0), col_(0) {}
    /* no \n */
    void append(const std::string& ap) {
        s_ += ap;
        col_ += ap.length();
    }
    void new_line() {
        s_ += "\n";
        line_++;
        col_ = 0;
    }
    void adjust_col(int n) {
        append(std::string(n, ' '));
    }
    int get_col() const { return col_; }
    std::string get_str() const { return s_; }
private:
    std::string s_;
    int line_;
    int col_;
};

void _beautify_sql(_Buf *buf, Node *node) {
    int col_f = buf->get_col();
    if (!node->isTerminalToken)
    {
        for (auto info : *(node->serialize_format->beautify_))
        {
            if (info.is_simple == 1)
            {
                if (info.s0 == "\n") {
                    buf->new_line();
                    buf->adjust_col(col_f);
                    buf->append(info.s2);
                }
                else {
                    buf->append(info.s0);
                }
            }
            else
            {
                Node* child = node->getChild(info.key);
                if (child)
                {
                    if (info.s0 == "\n") {
                        buf->new_line();
                        buf->adjust_col(col_f);
                    }
                    else
                        buf->append(info.s0);
                    _beautify_sql(buf, child);
                    if (info.s2 == "\n") {
                        buf->new_line();
                        buf->adjust_col(col_f);
                    }
                    else
                        buf->append(info.s2);
                }
            }
        }
    }
    else
    {
        buf->append(node->terminalToken_.yytex);
    }
}

bool parser::parse_sql2003(const std::string& sql, ParseResult* result)
{
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (sql2003_lex_init_extra(result, &scanner)) {
        //fprintf(stderr, "SQLParser2003: Error when initializing lexer!\n");
        return false;
    }

    const char* text = sql.c_str();
    state = sql2003__scan_string(text, scanner);

    // Parse the tokens.
    // If parsing fails, the result will contain an error object.
    sql2003_parse(result, scanner);
    sql2003__delete_buffer(state, scanner);
    sql2003_lex_destroy(scanner);

    return result->accept;
}

bool parser::parse_tsql(const std::string &sql, ParseResult *result)
{
    /* todo */
    return false;
    /*
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (tsql_lex_init_extra(result, &scanner)) {
        //fprintf(stderr, "SQLParser2003: Error when initializing lexer!\n");
        return false;
    }

    const char* text = sql.c_str();
    state = tsql__scan_string(text, scanner);

    // Parse the tokens.
    // If parsing fails, the result will contain an error object.
    tsql_parse(result, scanner);
    tsql__delete_buffer(state, scanner);
    tsql_lex_destroy(scanner);

    return result->accept;
     */
}

bool parser::compress_sql(const std::string& src, std::string& out) {
    ParseResult r;
    if (!parse_sql2003(src, &r))
        return false;
    if (!r.result_tree_)
        return true;
    out = r.result_tree_->serialize();
    return true;
}

bool parser::beautify_sql(const std::string& src, std::string& out) {
    ParseResult r;
    if (!parse_sql2003(src, &r))
        return false;
    if (!r.result_tree_)
        return true;
    _Buf b;
    _beautify_sql(&b, r.result_tree_);
    out = b.get_str();
    return true;
}