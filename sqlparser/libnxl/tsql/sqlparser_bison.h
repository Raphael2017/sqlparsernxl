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
    ON = 274,
    USING = 275,
    UNION = 276,
    EXCEPT = 277,
    INTERSECT = 278,
    OR = 279,
    AND = 280,
    NOT = 281,
    COMP_LE = 282,
    COMP_LT = 283,
    COMP_EQ = 284,
    COMP_GT = 285,
    COMP_GE = 286,
    COMP_NE = 287,
    CNNOP = 288,
    LIKE = 289,
    BETWEEN = 290,
    IN = 291,
    IS = 292,
    MOD = 293,
    UMINUS = 294,
    ADD = 295,
    ANY = 296,
    ALL = 297,
    ALTER = 298,
    AS = 299,
    ASC = 300,
    BEGI = 301,
    BIGINT = 302,
    BINARY = 303,
    BOOLEAN = 304,
    BOTH = 305,
    BY = 306,
    CASCADE = 307,
    CASE = 308,
    CHARACTER = 309,
    CLUSTER = 310,
    COMMENT = 311,
    COMMIT = 312,
    CONSISTENT = 313,
    COLUMN = 314,
    COLUMNS = 315,
    CREATE = 316,
    CREATETIME = 317,
    CURRENT_USER = 318,
    CHANGE_OBI = 319,
    SWITCH_CLUSTER = 320,
    DATE = 321,
    DATETIME = 322,
    DEALLOCATE = 323,
    DECIMAL = 324,
    DEFAULT = 325,
    DELETE = 326,
    DESC = 327,
    DESCRIBE = 328,
    DISTINCT = 329,
    DOUBLE = 330,
    DROP = 331,
    DUAL = 332,
    ELSE = 333,
    END = 334,
    END_P = 335,
    ERROR = 336,
    EXECUTE = 337,
    EXISTS = 338,
    EXPLAIN = 339,
    FLOAT = 340,
    FOR = 341,
    FROM = 342,
    FROZEN = 343,
    FORCE = 344,
    GLOBAL = 345,
    GLOBAL_ALIAS = 346,
    GRANT = 347,
    GROUP = 348,
    HAVING = 349,
    HINT_BEGIN = 350,
    HINT_END = 351,
    HOTSPOT = 352,
    IDENTIFIED = 353,
    IF = 354,
    INTEGER = 355,
    INSERT = 356,
    INTO = 357,
    KEY = 358,
    LEADING = 359,
    LIMIT = 360,
    LOCAL = 361,
    LOCKED = 362,
    MEDIUMINT = 363,
    MEMORY = 364,
    MODIFYTIME = 365,
    MASTER = 366,
    NUMERIC = 367,
    OFFSET = 368,
    ORDER = 369,
    OPTION = 370,
    OUTER = 371,
    PARAMETERS = 372,
    PERCENT = 373,
    PASSWORD = 374,
    PRECISION = 375,
    PREPARE = 376,
    PRIMARY = 377,
    READ_STATIC = 378,
    REAL = 379,
    RENAME = 380,
    REPLACE = 381,
    RESTRICT = 382,
    PRIVILEGES = 383,
    REVOKE = 384,
    ROLLBACK = 385,
    KILL = 386,
    READ_CONSISTENCY = 387,
    SCHEMA = 388,
    SCOPE = 389,
    SELECT = 390,
    SESSION = 391,
    SESSION_ALIAS = 392,
    SET = 393,
    SHOW = 394,
    SMALLINT = 395,
    SNAPSHOT = 396,
    SPFILE = 397,
    START = 398,
    STATIC = 399,
    SYSTEM = 400,
    STRONG = 401,
    SET_MASTER_CLUSTER = 402,
    SET_SLAVE_CLUSTER = 403,
    SLAVE = 404,
    TABLE = 405,
    TABLES = 406,
    THEN = 407,
    TIES = 408,
    TIME = 409,
    TIMESTAMP = 410,
    TINYINT = 411,
    TRAILING = 412,
    TRANSACTION = 413,
    TO = 414,
    TOP = 415,
    UPDATE = 416,
    USER = 417,
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
    WEAK = 428,
    AVG = 429,
    BROWSE = 430,
    CHECKSUM_AGG = 431,
    COUNT = 432,
    COUNT_BIG = 433,
    GROUPING = 434,
    GROUPING_ID = 435,
    HASH = 436,
    MAX = 437,
    MIN = 438,
    NOLOCK = 439,
    NOWAIT = 440,
    SOME = 441,
    STDEV = 442,
    STDEVP = 443,
    SUM = 444,
    TABLESAMPLE = 445,
    VAR = 446,
    VARP = 447
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 80 "sqlparser.y" /* yacc.c:1909  */

    struct Node* node;
    int    ival;

#line 260 "sqlparser_bison.h" /* yacc.c:1909  */
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
