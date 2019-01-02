/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SQLPARSER_BISON_H_INCLUDED
# define YY_YY_SQLPARSER_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 36 "sqlparser.y" /* yacc.c:1909  */

// %code requires block

#include "node.h"

#line 50 "sqlparser_bison.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    STRING = 259,
    INTNUM = 260,
    BOOL = 261,
    APPROXNUM = 262,
    NULLX = 263,
    UNKNOWN = 264,
    QUESTIONMARK = 265,
    CONDITIONLESS_JOIN = 266,
    CROSS = 267,
    FULL = 268,
    INNER = 269,
    JOIN = 270,
    LEFT = 271,
    NATURAL = 272,
    RIGHT = 273,
    UNION = 274,
    EXCEPT = 275,
    INTERSECT = 276,
    OR = 277,
    AND = 278,
    NOT = 279,
    COMP_LE = 280,
    COMP_LT = 281,
    COMP_EQ = 282,
    COMP_GT = 283,
    COMP_GE = 284,
    COMP_NE = 285,
    CNNOP = 286,
    LIKE = 287,
    BETWEEN = 288,
    IN = 289,
    IS = 290,
    MOD = 291,
    UMINUS = 292,
    ADD = 293,
    ANY = 294,
    ALL = 295,
    ALTER = 296,
    AS = 297,
    ASC = 298,
    BEGI = 299,
    BIGINT = 300,
    BINARY = 301,
    BOOLEAN = 302,
    BOTH = 303,
    BY = 304,
    CASCADE = 305,
    CASE = 306,
    CHARACTER = 307,
    CLUSTER = 308,
    COMMENT = 309,
    COMMIT = 310,
    CONSISTENT = 311,
    COLUMN = 312,
    COLUMNS = 313,
    CREATE = 314,
    CREATETIME = 315,
    CURRENT_USER = 316,
    CHANGE_OBI = 317,
    SWITCH_CLUSTER = 318,
    DATE = 319,
    DATETIME = 320,
    DEALLOCATE = 321,
    DECIMAL = 322,
    DEFAULT = 323,
    DELETE = 324,
    DESC = 325,
    DESCRIBE = 326,
    DISTINCT = 327,
    DOUBLE = 328,
    DROP = 329,
    DUAL = 330,
    ELSE = 331,
    END = 332,
    END_P = 333,
    ERROR = 334,
    EXECUTE = 335,
    EXISTS = 336,
    EXPLAIN = 337,
    FLOAT = 338,
    FOR = 339,
    FROM = 340,
    FROZEN = 341,
    FORCE = 342,
    GLOBAL = 343,
    GLOBAL_ALIAS = 344,
    GRANT = 345,
    GROUP = 346,
    HAVING = 347,
    HINT_BEGIN = 348,
    HINT_END = 349,
    HOTSPOT = 350,
    IDENTIFIED = 351,
    IF = 352,
    INTEGER = 353,
    INSERT = 354,
    INTO = 355,
    KEY = 356,
    LEADING = 357,
    LIMIT = 358,
    LOCAL = 359,
    LOCKED = 360,
    MEDIUMINT = 361,
    MEMORY = 362,
    MODIFYTIME = 363,
    MASTER = 364,
    NUMERIC = 365,
    OFFSET = 366,
    ON = 367,
    ORDER = 368,
    OPTION = 369,
    OUTER = 370,
    PARAMETERS = 371,
    PERCENT = 372,
    PASSWORD = 373,
    PRECISION = 374,
    PREPARE = 375,
    PRIMARY = 376,
    READ_STATIC = 377,
    REAL = 378,
    RENAME = 379,
    REPLACE = 380,
    RESTRICT = 381,
    PRIVILEGES = 382,
    REVOKE = 383,
    ROLLBACK = 384,
    KILL = 385,
    READ_CONSISTENCY = 386,
    SCHEMA = 387,
    SCOPE = 388,
    SELECT = 389,
    SESSION = 390,
    SESSION_ALIAS = 391,
    SET = 392,
    SHOW = 393,
    SMALLINT = 394,
    SNAPSHOT = 395,
    SPFILE = 396,
    START = 397,
    STATIC = 398,
    SYSTEM = 399,
    STRONG = 400,
    SET_MASTER_CLUSTER = 401,
    SET_SLAVE_CLUSTER = 402,
    SLAVE = 403,
    TABLE = 404,
    TABLES = 405,
    THEN = 406,
    TIES = 407,
    TIME = 408,
    TIMESTAMP = 409,
    TINYINT = 410,
    TRAILING = 411,
    TRANSACTION = 412,
    TO = 413,
    TOP = 414,
    UPDATE = 415,
    USER = 416,
    USING = 417,
    VALUES = 418,
    VARCHAR = 419,
    VARBINARY = 420,
    WHERE = 421,
    WHEN = 422,
    WITH = 423,
    WORK = 424,
    PROCESSLIST = 425,
    QUERY = 426,
    CONNECTION = 427,
    WEAK = 428
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 80 "sqlparser.y" /* yacc.c:1909  */

    struct Node* node;
    int    ival;

#line 241 "sqlparser_bison.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (ParseResult* result, yyscan_t scanner);

#endif /* !YY_YY_SQLPARSER_BISON_H_INCLUDED  */
