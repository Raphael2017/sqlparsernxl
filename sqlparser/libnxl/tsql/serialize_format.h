#ifndef SERIALIZE_FORMAT_H
#define SERIALIZE_FORMAT_H

#include <list>
#include <string>
#define S_F_2


/* do not use */
#ifdef S_F_0
typedef const std::list<std::string> Form;
Form SELECT_SERIALIZE_FORMAT                    {"{16}", " ", "SELECT ", "{13}", " ", "{0}", " ", "{15}", " ", "{1}", " ", "{2}", " ", "{3}",  " ",  \
    "{4}", " ", "{5}", " ", "{8}", " ", "{6}", " ", "{7}", " ", "{9}", " ", "{10}", " ", "{11}", " ", "{12}", " ", "{14}"};
Form STMT_LIST_SERIALIZE_FORMAT                 {"{0}", "; ", "{1}"};
Form SELECT_WITH_PARENS_SERIALIZE_FORMAT        {"( ", "{0}", " )"};
Form SELECT_UNION_SERIALIZE_FORMAT              {"{8}", " UNION ", "{7}", " ", "{9}"};
Form SELECT_INTERSECT_SERIALIZE_FORMAT          {"{8}", " INTERSECT ", "{7}", " ", "{9}"};
Form SELECT_EXCEPT_SERIALIZE_FORMAT             {"{8}", " EXCEPT ", "{7}", " ", "{9}"};
Form TOP_SERIALIZE_FORMAT                       {"TOP ", "{0}"};
Form TOP_TIES_SERIALIZE_FORMAT                  {"TOP ", "{0}", " WITH TIES"};
Form TOP_PCT_SERIALIZE_FORMAT                   {"TOP ", "{0}", " PERCENT"};
Form TOP_PCT_TIES_SERIALIZE_FORMAT              {"TOP ", "{0}", " PERCENT WITH TIES"};
Form EXPR_WITH_PARENS_SERIALIZE_FORMAT          {"(", "{0}", ")"};
Form WHERE_SERIALIZE_FORMAT                     {"WHERE ", "{0}"};
Form FROM_DUAL_SERIALIZE_FORMAT                 {"FROM ", "DUAL"};
Form FROM_SERIALIZE_FORMAT                      {"FROM ", "{0}"};
Form LIMIT_1_SERIALIZE_FORMAT                   {"LIMIT ", "{0}", " OFFSET ", "{1}"};
Form LIMIT_2_SERIALIZE_FORMAT                   {"OFFSET ", "{1}", " LIMIT ", "{0}"};
Form LIMIT_3_SERIALIZE_FORMAT                   {"LIMIT ", "{0}"};
Form LIMIT_4_SERIALIZE_FORMAT                   {"OFFSET ", "{1}"};
Form LIMIT_5_SERIALIZE_FORMAT                   {"LIMIT ", "{1}", ", ", "{0}"};
Form GROUP_BY_SERIALIZE_FORMAT                  {"GROUP", " BY ", "{0}"};
Form ORDER_BY_SERIALIZE_FORMAT                  {"ORDER", " BY ", "{0}"};
Form SORT_LIST_SERIALIZE_FORMAT                 {"{0}", ", ", "{1}"};
Form SORT_KEY_SERIALIZE_FORMAT                  {"{0}", " ", "{1}"};
Form HAVING_SERIALIZE_FORMAT                    {"HAVING ", "{0}"};
Form SELECT_EXPR_LIST_SERIALIZE_FORMAT          {"{0}", ", ", "{1}"};
Form PROJECTION_SERIALIZE_FORMAT                {"{0}"};
Form ALIAS_1_SERIALIZE_FORMAT                   {"{0}", " ", "{1}"};
Form ALIAS_2_SERIALIZE_FORMAT                   {"{0}", " AS ", "{1}"};
Form ALIAS_3_SERIALIZE_FORMAT                   {"{0}", " AS ", "{1}", " ", "{2}"};
Form ALIAS_4_SERIALIZE_FORMAT                   {"{0}", " ", "{1}", " ", "{2}"};
Form FORM_LIST_SERIALIZE_FORMAT                 {"{0}", ", ", "{1}"};
Form JOINED_TB_WITH_PARENS_SERIALIZE_FORMAT     {"(", "{0}", ")"};
Form JOINED_TB_1_SERIALIZE_FORMAT               {"{1}", " ", "{0}", " JOIN ", "{2}", " ON ", "{3}"};
Form JOINED_TB_2_SERIALIZE_FORMAT               {"{1}", " ", "{0}", " JOIN ", "{2}"};
Form JOINED_TB_3_SERIALIZE_FORMAT               {"{1}", " ", "{0}", " JOIN ", "{2}", " USING ", "(", "{3}", ")"};
Form EXPR_LIST_SERIALIZE_FORMAT                 {"{0}", ", ", "{1}"};
Form NAME_FIELD_SERIALIZE_FORMAT                {"{0}", ".", "{1}"};
Form EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT     {"(", "{0}", ")"};
Form OP_EXISTS_SERIALIZE_FORMAT                 {"EXISTS ", "{0}"};
Form OP_POS_SERIALIZE_FORMAT                    {"+", "{0}"};
Form OP_NEG_SERIALIZE_FORMAT                    {"-", "{0}"};
Form OP_ADD_SERIALIZE_FORMAT                    {"{0}", " + ", "{1}"};
Form OP_MINUS_SERIALIZE_FORMAT                  {"{0}", " - ", "{1}"};
Form OP_MUL_SERIALIZE_FORMAT                    {"{0}", " * ", "{1}"};
Form OP_DIV_SERIALIZE_FORMAT                    {"{0}", " / ", "{1}"};
Form OP_REM_SERIALIZE_FORMAT                    {"{0}", " % ", "{1}"};
Form OP_POW_SERIALIZE_FORMAT                    {"{0}", " ^ ", "{1}"};
Form OP_MOD_SERIALIZE_FORMAT                    {"{0}", " MOD ", "{1}"};
Form OP_LE_SERIALIZE_FORMAT                     {"{0}", " <= ", "{1}"};
Form OP_LT_SERIALIZE_FORMAT                     {"{0}", " < ", "{1}"};
Form OP_EQ_SERIALIZE_FORMAT                     {"{0}", " = ", "{1}"};
Form OP_GE_SERIALIZE_FORMAT                     {"{0}", " >= ", "{1}"};
Form OP_GT_SERIALIZE_FORMAT                     {"{0}", " > ", "{1}"};
Form OP_NE_SERIALIZE_FORMAT                     {"{0}", " <> ", "{1}"};
Form OP_LIKE_SERIALIZE_FORMAT                   {"{0}", " LIKE ", "{1}"};
Form OP_NOT_LIKE_SERIALIZE_FORMAT               {"{0}", " NOT LIKE ", "{1}"};
Form OP_AND_SERIALIZE_FORMAT                    {"{0}", " AND ", "{1}"};
Form OP_OR_SERIALIZE_FORMAT                     {"{0}", " OR ", "{1}"};
Form OP_NOT_SERIALIZE_FORMAT                    {"NOT ", "{0}"};
Form OP_IS_SERIALIZE_FORMAT                     {"{0}", " IS ", "{1}"};
Form OP_IS_NOT_SERIALIZE_FORMAT                 {"{0}", " IS NOT ", "{1}"};
Form OP_BETWEEN_SERIALIZE_FORMAT                {"{0}", " BETWEEN ", "{1}", " AND ", "{2}"};
Form OP_NOT_BETWEEN_SERIALIZE_FORMAT            {"{0}", " NOT BETWEEN ", "{1}", " AND ", "{2}"};
Form OP_IN_SERIALIZE_FORMAT                     {"{0}", " IN ", "{1}"};
Form OP_NOT_IN_SERIALIZE_FORMAT                 {"{0}", " NOT IN ", "{1}"};
Form OP_CNN_SERIALIZE_FORMAT                    {"{0}", " || ", "{1}"};
Form CASE_SERIALIZE_FORMAT                      {"CASE ", "{0}", " ", "{1}", " ", "{2}", " END"};
Form WHEN_LIST_SERIALIZE_FORMAT                 {"{0}", " ", "{1}"};
Form WHEN_SERIALIZE_FORMAT                      {"WHEN ", "{0}", " THEN ", "{1}"};
Form ELSE_SERIALIZE_FORMAT                      {"ELSE ", "{0}"};
Form FUN_CALL_1_SERIALIZE_FORMAT                {"{0}", "(", "{1}", ")"};
Form FUN_CALL_2_SERIALIZE_FORMAT                {"{0}", "(", "{2}", " ", "{1}", ")"};
Form FUN_CALL_3_SERIALIZE_FORMAT                {"{0}", "(", "{1}", " AS ", "{2}", ")"};
Form FUN_CALL_4_SERIALIZE_FORMAT                {"{0}", "()"};
Form WITH_CLAUSE_SERIALIZE_FORMAT               {"WITH ", "{0}"};
Form COMMON_TABLE_EXPR_SERIALIZE_FORMAT         {"{0}", "{1}", " AS ", "{2}"};
#endif

/* do not use */
#ifdef S_F_1
typedef const std::list<std::string> Form;
Form SELECT_SERIALIZE_FORMAT                    {"{16} ", "SELECT ", "{13} ", "{0} ", "{15} ", "{1} ", "{2} ", "{3} ",  \
    "{4} ", "{5} ", "{8} ", "{6} ", "{7} ", "{9} ", "{10} ", "{11} ", "{12} ", "{14}"};
Form STMT_LIST_SERIALIZE_FORMAT                 {"{0}", "; ", "{1}"};
Form SELECT_WITH_PARENS_SERIALIZE_FORMAT        {"(", "{0}", ")"};
Form SELECT_UNION_SERIALIZE_FORMAT              {"{8}", " UNION ", "{7} ", "{9}"};
Form SELECT_INTERSECT_SERIALIZE_FORMAT          {"{8}", " INTERSECT ", "{7} ", "{9}"};
Form SELECT_EXCEPT_SERIALIZE_FORMAT             {"{8}", " EXCEPT ", "{7} ", "{9}"};
Form TOP_SERIALIZE_FORMAT                       {"TOP ", "{0}"};
Form TOP_TIES_SERIALIZE_FORMAT                  {"TOP ", "{0}", " WITH TIES"};
Form TOP_PCT_SERIALIZE_FORMAT                   {"TOP ", "{0}", " PERCENT"};
Form TOP_PCT_TIES_SERIALIZE_FORMAT              {"TOP ", "{0}", " PERCENT WITH TIES"};
Form EXPR_WITH_PARENS_SERIALIZE_FORMAT          {"(", "{0}", ")"};
Form WHERE_SERIALIZE_FORMAT                     {"WHERE ", "{0}"};
Form FROM_DUAL_SERIALIZE_FORMAT                 {"FROM ", "DUAL"};
Form FROM_SERIALIZE_FORMAT                      {"FROM ", "{0}"};
Form LIMIT_1_SERIALIZE_FORMAT                   {"LIMIT ", "{0}", " OFFSET ", "{1}"};
Form LIMIT_2_SERIALIZE_FORMAT                   {"OFFSET ", "{1}", " LIMIT ", "{0}"};
Form LIMIT_3_SERIALIZE_FORMAT                   {"LIMIT ", "{0}"};
Form LIMIT_4_SERIALIZE_FORMAT                   {"OFFSET ", "{1}"};
Form LIMIT_5_SERIALIZE_FORMAT                   {"LIMIT ", "{1}", ", ", "{0}"};
Form GROUP_BY_SERIALIZE_FORMAT                  {"GROUP", " BY ", "{0}"};
Form ORDER_BY_SERIALIZE_FORMAT                  {"ORDER", " BY ", "{0}"};
Form SORT_LIST_SERIALIZE_FORMAT                 {"{0}", ", ", "{1}"};
Form SORT_KEY_SERIALIZE_FORMAT                  {"{0}", " {1}"};
Form HAVING_SERIALIZE_FORMAT                    {"HAVING ", "{0}"};
Form SELECT_EXPR_LIST_SERIALIZE_FORMAT          {"{0}", ", ", "{1}"};
Form PROJECTION_SERIALIZE_FORMAT                {"{0}"};
Form ALIAS_1_SERIALIZE_FORMAT                   {"{0}", " {1}"};
Form ALIAS_2_SERIALIZE_FORMAT                   {"{0}", " AS ", "{1}"};
Form ALIAS_3_SERIALIZE_FORMAT                   {"{0}", " AS ", "{1}", " {2}"};
Form ALIAS_4_SERIALIZE_FORMAT                   {"{0}", " ", "{1}", " {2}"};
Form FORM_LIST_SERIALIZE_FORMAT                 {"{0}", ", ", "{1}"};
Form JOINED_TB_WITH_PARENS_SERIALIZE_FORMAT     {"(", "{0}", ")"};
Form JOINED_TB_1_SERIALIZE_FORMAT               {"{1}", " ", "{0}", " JOIN ", "{2}", " ON ", "{3}"};
Form JOINED_TB_2_SERIALIZE_FORMAT               {"{1}", " ", "{0}", " JOIN ", "{2}"};
Form JOINED_TB_3_SERIALIZE_FORMAT               {"{1}", " ", "{0}", " JOIN ", "{2}", " USING ", "(", "{3}", ")"};
Form EXPR_LIST_SERIALIZE_FORMAT                 {"{0}", ", ", "{1}"};
Form NAME_FIELD_SERIALIZE_FORMAT                {"{0}", ".", "{1}"};
Form NAME_FIELD_SERIALIZE_FORMAT_0              {"{1}"};
Form EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT     {"(", "{0}", ")"};
Form OP_EXISTS_SERIALIZE_FORMAT                 {"EXISTS ", "{0}"};
Form OP_POS_SERIALIZE_FORMAT                    {"+", "{0}"};
Form OP_NEG_SERIALIZE_FORMAT                    {"-", "{0}"};
Form OP_ADD_SERIALIZE_FORMAT                    {"{0}", " + ", "{1}"};
Form OP_MINUS_SERIALIZE_FORMAT                  {"{0}", " - ", "{1}"};
Form OP_MUL_SERIALIZE_FORMAT                    {"{0}", " * ", "{1}"};
Form OP_DIV_SERIALIZE_FORMAT                    {"{0}", " / ", "{1}"};
Form OP_REM_SERIALIZE_FORMAT                    {"{0}", " % ", "{1}"};
Form OP_POW_SERIALIZE_FORMAT                    {"{0}", " ^ ", "{1}"};
Form OP_MOD_SERIALIZE_FORMAT                    {"{0}", " MOD ", "{1}"};
Form OP_LE_SERIALIZE_FORMAT                     {"{0}", " <= ", "{1}"};
Form OP_LT_SERIALIZE_FORMAT                     {"{0}", " < ", "{1}"};
Form OP_EQ_SERIALIZE_FORMAT                     {"{0}", " = ", "{1}"};
Form OP_GE_SERIALIZE_FORMAT                     {"{0}", " >= ", "{1}"};
Form OP_GT_SERIALIZE_FORMAT                     {"{0}", " > ", "{1}"};
Form OP_NE_SERIALIZE_FORMAT                     {"{0}", " <> ", "{1}"};
Form OP_LIKE_SERIALIZE_FORMAT                   {"{0}", " LIKE ", "{1}"};
Form OP_NOT_LIKE_SERIALIZE_FORMAT               {"{0}", " NOT LIKE ", "{1}"};
Form OP_AND_SERIALIZE_FORMAT                    {"{0}", " AND ", "{1}"};
Form OP_OR_SERIALIZE_FORMAT                     {"{0}", " OR ", "{1}"};
Form OP_NOT_SERIALIZE_FORMAT                    {"NOT ", "{0}"};
Form OP_IS_SERIALIZE_FORMAT                     {"{0}", " IS ", "{1}"};
Form OP_IS_NOT_SERIALIZE_FORMAT                 {"{0}", " IS NOT ", "{1}"};
Form OP_BETWEEN_SERIALIZE_FORMAT                {"{0}", " BETWEEN ", "{1}", " AND ", "{2}"};
Form OP_NOT_BETWEEN_SERIALIZE_FORMAT            {"{0}", " NOT BETWEEN ", "{1}", " AND ", "{2}"};
Form OP_IN_SERIALIZE_FORMAT                     {"{0}", " IN ", "{1}"};
Form OP_NOT_IN_SERIALIZE_FORMAT                 {"{0}", " NOT IN ", "{1}"};
Form OP_CNN_SERIALIZE_FORMAT                    {"{0}", " || ", "{1}"};
Form CASE_SERIALIZE_FORMAT                      {"CASE ", "{0} ", "{1}", " {2}", " END"};
Form WHEN_LIST_SERIALIZE_FORMAT                 {"{0}", " ", "{1}"};
Form WHEN_SERIALIZE_FORMAT                      {"WHEN ", "{0}", " THEN ", "{1}"};
Form ELSE_SERIALIZE_FORMAT                      {"ELSE ", "{0}"};
Form FUN_CALL_1_SERIALIZE_FORMAT                {"{0}", "(", "{1}", ")"};
Form FUN_CALL_2_SERIALIZE_FORMAT                {"{0}", "(", "{2} ", "{1}", ")"};
Form FUN_CALL_3_SERIALIZE_FORMAT                {"{0}", "(", "{1}", " AS ", "{2}", ")"};
Form FUN_CALL_4_SERIALIZE_FORMAT                {"{0}", "()"};
Form WITH_CLAUSE_SERIALIZE_FORMAT               {"WITH ", "{0}"};
Form COMMON_TABLE_EXPR_SERIALIZE_FORMAT         {"{0}", "{1}", " AS ", "{2}"};

#endif

#ifdef S_F_2
/*
 * it seems to be more efficient
 * */
struct FormatDetail
{
    char is_simple;
    const std::string s0;
    int key;
    const std::string s2;
};
typedef const std::list<FormatDetail> Form;
Form SELECT_SERIALIZE_FORMAT                {{0,"",16," "}, {1,"SELECT "}, {0,"",13," "}, {0,"",0," "}, {0,"",15," "}, \
    {0,"",1," "}, {0,"",18," "}, {0,"",2," "}, {0,"",3," "}, {0,"",4," "}, {0,"",5," "}, {0,"",8," "}, {0,"",6," "},\
    {0,"",7," "}, {0,"",9," "}, {0,"",10," "}, {0,"",11," "}, {0,"",12," "}, {0,"",14," "}, {0,"",17,""}};
Form SEMICOLON_LIST_SERIALIZE_FORMAT        {{0,"",0,""}, {1,"; "}, {0,"",1,""}};
Form SINGLE_WITH_PARENS_SERIALIZE_FORMAT    {{1,"("}, {0,"",0,""}, {1,")"}};
Form SELECT_UNION_SERIALIZE_FORMAT          {{0,"",8,""}, {1, " UNION "}, {0,"",7," "}, {0,"",9,""}};
Form SELECT_INTERSECT_SERIALIZE_FORMAT      {{0,"",8,""}, {1, " INTERSECT "}, {0,"",7," "}, {0,"",9,""}};
Form SELECT_EXCEPT_SERIALIZE_FORMAT         {{0,"",8,""}, {1, " EXCEPT "}, {0,"",7," "}, {0,"",9,""}};
Form TOP_SERIALIZE_FORMAT                   {{1,"TOP "}, {0,"",0,""}};
Form TOP_TIES_SERIALIZE_FORMAT              {{1,"TOP "}, {0,"",0,""}, {1," WITH TIES"}};
Form TOP_PCT_SERIALIZE_FORMAT               {{1,"TOP "}, {0,"",0,""}, {1," PERCENT"}};
Form TOP_PCT_TIES_SERIALIZE_FORMAT          {{1,"TOP "}, {0,"",0,""}, {1," PERCENT WITH TIES"}};
Form WHERE_SERIALIZE_FORMAT                 {{1,"WHERE "}, {0,"",0,""}};
Form FROM_SERIALIZE_FORMAT                  {{1,"FROM "}, {0,"",0,""}};
Form GROUP_BY_SERIALIZE_FORMAT              {{1,"GROUP"}, {1," BY "}, {0,"",0,""}};
Form ORDER_BY_SERIALIZE_FORMAT              {{1,"ORDER"}, {1," BY "}, {0,"",0,""}, {0," ",1,""}};
Form SORT_LIST_SERIALIZE_FORMAT             {{0,"",0,""}, {1,", "}, {0,"",1,""}};
Form SORT_KEY_SERIALIZE_FORMAT              {{0,"",0,""}, {0," ",1,""}};
Form HAVING_SERIALIZE_FORMAT                {{1,"HAVING "}, {0,"",0,""}};
Form COMMA_LIST_SERIALIZE_FORMAT            {{0,"",0,""}, {1,", "}, {0,"",1,""}};
Form SINGLE_SERIALIZE_FORMAT                {{0,"",0,""}};
Form DOUBLE_SERIALIZE_FORMAT                {{0,"",0,""}, {0," ",1,""}};
Form AS_SERIALIZE_FORMAT                    {{0,"",0,""}, {0," ",4,""}, {1," AS "}, {0,"",1,""}, {0," ",2,""}, {0," ",3,""}};
Form QUADRUPLE_SERIALIZE_FORMAT             {{0,"",0,""}, {0," ",1,""}, {0," ",2,""}, {0," ",3,""}};
Form PENTA_SERIALIZE_FORMAT                 {{0,"",0,""}, {0," ",1,""}, {0," ",2,""}, {0," ",3,""}, {0," ",4,""}};
Form PENTA_SERIALIZE_FORMAT_0               {{0,"",0,""}, {0," ",4,""}, {0," ",1,""}, {0," ",2,""}, {0," ",3,""}};
Form JOINED_TB_1_SERIALIZE_FORMAT           {{0,"",1," "}, {0,"",0,""}, {1," JOIN "}, {0,"",2,""}, {1," ON "}, {0,"",3,""}};
Form JOINED_TB_2_SERIALIZE_FORMAT           {{0,"",1," "}, {0,"",0,""}, {1," JOIN "}, {0,"",2,""}};
Form JOINED_TB_3_SERIALIZE_FORMAT           {{0,"",1," "}, {0,"",0,""}, {1," JOIN "}, {0,"",2,""}, {1, " USING ("}, {0,"",3,""},{1,")"}};
Form APPLY_TB_SERIALIZE_FORMAT              {{0,"",1," "}, {0,"",0,""}, {1," APPLY "}, {0,"",2,""}};
Form OP_EXISTS_SERIALIZE_FORMAT             {{1,"EXISTS "}, {0,"",0,""}};
Form OP_POS_SERIALIZE_FORMAT                {{1,"+"}, {0,"",0,""}};
Form OP_NEG_SERIALIZE_FORMAT                {{1,"-"}, {0,"",0,""}};
Form OP_ADD_SERIALIZE_FORMAT                {{0,"",0,""}, {1," + "}, {0,"",1,""}};
Form OP_MINUS_SERIALIZE_FORMAT              {{0,"",0,""}, {1," - "}, {0,"",1,""}};
Form OP_MUL_SERIALIZE_FORMAT                {{0,"",0,""}, {1," * "}, {0,"",1,""}};
Form OP_DIV_SERIALIZE_FORMAT                {{0,"",0,""}, {1," / "}, {0,"",1,""}};
Form OP_REM_SERIALIZE_FORMAT                {{0,"",0,""}, {1," % "}, {0,"",1,""}};
Form OP_POW_SERIALIZE_FORMAT                {{0,"",0,""}, {1," ^ "}, {0,"",1,""}};
Form OP_MOD_SERIALIZE_FORMAT                {{0,"",0,""}, {1," MOD "}, {0,"",1,""}};
Form OP_LE_SERIALIZE_FORMAT                 {{0,"",0,""}, {1," <= "}, {0,"",1,""}};
Form OP_LT_SERIALIZE_FORMAT                 {{0,"",0,""}, {1," < "}, {0,"",1,""}};
Form OP_EQ_SERIALIZE_FORMAT                 {{0,"",0,""}, {1," = "}, {0,"",1,""}};
Form OP_GE_SERIALIZE_FORMAT                 {{0,"",0,""}, {1," >= "}, {0,"",1,""}};
Form OP_GT_SERIALIZE_FORMAT                 {{0,"",0,""}, {1," > "}, {0,"",1,""}};
Form OP_NE_SERIALIZE_FORMAT                 {{0,"",0,""}, {1," <> "}, {0,"",1,""}};
Form OP_LIKE_SERIALIZE_FORMAT               {{0,"",0,""}, {1," LIKE "}, {0,"",1,""}};
Form OP_NOT_LIKE_SERIALIZE_FORMAT           {{0,"",0,""}, {1," NOT LIKE "}, {0,"",1,""}};
Form OP_AND_SERIALIZE_FORMAT                {{0,"",0,""}, {1," AND "}, {0,"",1,""}};
Form OP_OR_SERIALIZE_FORMAT                 {{0,"",0,""}, {1," OR "}, {0,"",1,""}};
Form OP_NOT_SERIALIZE_FORMAT                {{1,"NOT "}, {0,"",0,""}};
Form OP_IS_SERIALIZE_FORMAT                 {{0,"",0,""}, {1," IS "}, {0,"",1,""}};
Form OP_IS_NOT_SERIALIZE_FORMAT             {{0,"",0,""}, {1," IS NOT "}, {0,"",1,""}};
Form OP_BETWEEN_SERIALIZE_FORMAT            {{0,"",0,""}, {1," BETWEEN "}, {0,"",1,""}, {1," AND "}, {0,"",2,""}};
Form OP_NOT_BETWEEN_SERIALIZE_FORMAT        {{0,"",0,""}, {1," NOT BETWEEN "}, {0,"",1,""}, {1," AND "}, {0,"",2,""}};
Form OP_IN_SERIALIZE_FORMAT                 {{0,"",0,""}, {1," IN "}, {0,"",1,""}};
Form OP_NOT_IN_SERIALIZE_FORMAT             {{0,"",0,""}, {1," NOT IN "}, {0,"",1,""}};
Form OP_CNN_SERIALIZE_FORMAT                {{0,"",0,""}, {1," || "}, {0,"",1,""}};
Form OP_COLLATE_SERIALIZE_FORMAT            {{0,"",0,""}, {1," COLLATE "}, {0,"",1,""}};
Form CASE_SERIALIZE_FORMAT                  {{1,"CASE "}, {0,"",0," "}, {0,"",1,""}, {0," ",2,""}, {1," END"}};
Form WHEN_SERIALIZE_FORMAT                  {{1,"WHEN "}, {0,"",0,""}, {1," THEN "}, {0,"",1,""}};
Form ELSE_SERIALIZE_FORMAT                  {{1,"ELSE "}, {0,"",0,""}};
Form FUN_CALL_1_OVER_SERIALIZE_FORMAT       {{0,"",0,""}, {1,"("}, {0,"",1,""}, {1,")"}, {0," ",2,""}};
Form FUN_CALL_DIS_OVER_SERIALIZE_FORMAT     {{0,"",0,""}, {1,"("}, {0,"",3," "}, {0,"",1,""}, {1,")"}, {0," ",2,""}};
Form FUN_CALL_AS_SERIALIZE_FORMAT           {{0,"",0,""}, {1,"("}, {0,"",1,""}, {1," AS "}, {0,"",4,""}, {1,")"}};
Form WITH_CLAUSE_SERIALIZE_FORMAT           {{1,"WITH "}, {0,"",0,""}};
Form COMMON_TABLE_EXPR_SERIALIZE_FORMAT     {{0,"",0,""}, {0,"",1,""}, {1," AS "}, {0,"",2,""}};
Form TABLE_IDENT_SERIALIZE_FORMAT_1         {{0,"",1,""}, {1,"."}, {0,"",0,""}};
Form TABLE_IDENT_SERIALIZE_FORMAT_2         {{0,"",2,""}, {1,"."}, {0,"",1,""}, {1,"."}, {0,"",0,""}};
Form TABLE_IDENT_SERIALIZE_FORMAT_3         {{0,"",3,""}, {1,"."}, {0,"",2,""}, {1,"."}, {0,"",1,""}, {1,"."}, {0,"",0,""}};
Form OP_NAME_FIELD_SERIALIZE_FORMAT_1       {{0,"",1,""}, {1,"."}, {0,"",0,""}};
Form OP_NAME_FIELD_SERIALIZE_FORMAT_2       {{0,"",2,""}, {1,"."}, {0,"",1,""}, {1,"."}, {0,"",0,""}};
Form OP_NAME_FIELD_SERIALIZE_FORMAT_3       {{0,"",3,""}, {1,"."}, {0,"",2,""}, {1,"."}, {0,"",1,""}, {1,"."}, {0,"",0,""}};
Form OP_NAME_FIELD_SERIALIZE_FORMAT_4       {{0,"",4,""}, {1,"."}, {0,"",3,""}, {1,"."}, {0,"",2,""}, {1,"."}, {0,"",1,""}, {1,"."}, {0,"",0,""}};
Form OFFSET_FETCH_SERIALIZE_FORMAT_1        {{1,"OFFSET "}, {0,"",0,""}, {1," ROW"}};
Form OFFSET_FETCH_SERIALIZE_FORMAT_2        {{1,"OFFSET "}, {0,"",0,""}, {1," ROWS"}};
Form OFFSET_FETCH_SERIALIZE_FORMAT_3        {{1,"OFFSET "}, {0,"",0,""}, {1," ROW FETCH FIRST "},  {0,"",1,""}, {1," ROW ONLY"}};
Form OFFSET_FETCH_SERIALIZE_FORMAT_4        {{1,"OFFSET "}, {0,"",0,""}, {1," ROW FETCH NEXT "},   {0,"",1,""}, {1," ROW ONLY"}};
Form OFFSET_FETCH_SERIALIZE_FORMAT_5        {{1,"OFFSET "}, {0,"",0,""}, {1," ROW FETCH FIRST "},  {0,"",1,""}, {1," ROWS ONLY"}};
Form OFFSET_FETCH_SERIALIZE_FORMAT_6        {{1,"OFFSET "}, {0,"",0,""}, {1," ROW FETCH NEXT "},   {0,"",1,""}, {1," ROWS ONLY"}};
Form OFFSET_FETCH_SERIALIZE_FORMAT_7        {{1,"OFFSET "}, {0,"",0,""}, {1," ROWS FETCH FIRST "}, {0,"",1,""}, {1," ROW ONLY"}};
Form OFFSET_FETCH_SERIALIZE_FORMAT_8        {{1,"OFFSET "}, {0,"",0,""}, {1," ROWS FETCH NEXT "},  {0,"",1,""}, {1," ROW ONLY"}};
Form OFFSET_FETCH_SERIALIZE_FORMAT_9        {{1,"OFFSET "}, {0,"",0,""}, {1," ROWS FETCH FIRST "}, {0,"",1,""}, {1," ROWS ONLY"}};
Form OFFSET_FETCH_SERIALIZE_FORMAT_10       {{1,"OFFSET "}, {0,"",0,""}, {1," ROWS FETCH NEXT "},  {0,"",1,""}, {1," ROWS ONLY"}};
Form FOR_CLAUSE_1_SERIALIZE_FORMAT          {{1,"FOR BROWSE"}};
Form WITH_TABLE_HINT_SERIALIZE_FORMAT       {{1,"WITH("}, {0,"",0,""}, {1,")"}};
Form TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT   {{1,"NOEXPAND "}, {0,"",0,""}};
Form OPTION_CLAUSE_SERIALIZE_FORMAT         {{1,"OPTION("}, {0,"",0,""}, {1,")"}};
Form OVER_CLAUSE_SERIALIZE_FORMAT           {{1,"OVER("}, {0,"PARTITION BY ",0,""}, {0," ",1,""}, {0," ",2,""}, {1, ")"}};
Form TABLE_VALUE_CTOR_SERIALIZE_FORMAT      {{1,"VALUES "}, {0,"",0,""}};
Form FOR_SYSTEM_TIME_SERIALIZE_FORMAT       {{1,"FOR SYSTEM_TIME "}, {0,"",0,""}};
Form PIVOT_TABLE_SERIALIZE_FORMAT           {{0,"",0,""}, {1," PIVOT "}, {0,"",1,""}, {0," AS ",2,""}};
Form UNPIVOT_TABLE_SERIALIZE_FORMAT         {{0,"",0,""}, {1," UNPIVOT "}, {0,"",1,""}, {0," AS ",2,""}};
Form PIVOT_CLAUSE_SERIALIZE_FORMAT          {{1,"("}, {0,"",0,""}, {1," FOR "}, {0,"",1,""}, {1," IN "}, {0,"",2,""}, {1,")"}};
Form INTO_CLAUSE_SERIALIZE_FORMAT           {{1,"INTO "}, {0,"",0,""}};
Form OP_ASS_ADD_SERIALIZE_FORMAT            {{0,"",0,""}, {1," += "}, {0,"",1,""}};
Form OP_ASS_MINUS_SERIALIZE_FORMAT          {{0,"",0,""}, {1," -= "}, {0,"",1,""}};
Form OP_ASS_MUL_SERIALIZE_FORMAT            {{0,"",0,""}, {1," *= "}, {0,"",1,""}};
Form OP_ASS_DIV_SERIALIZE_FORMAT            {{0,"",0,""}, {1," /= "}, {0,"",1,""}};
Form OP_ASS_REM_SERIALIZE_FORMAT            {{0,"",0,""}, {1," %= "}, {0,"",1,""}};
Form OP_ASS_BIT_AND_SERIALIZE_FORMAT        {{0,"",0,""}, {1," &= "}, {0,"",1,""}};
Form OP_ASS_BIT_OR_SERIALIZE_FORMAT         {{0,"",0,""}, {1," |= "}, {0,"",1,""}};
Form OP_ASS_BIT_XOR_SERIALIZE_FORMAT        {{0,"",0,""}, {1," ^= "}, {0,"",1,""}};
#endif


#endif
