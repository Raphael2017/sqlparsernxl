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
    BROWSE = 306,
    BY = 307,
    CASCADE = 308,
    CASE = 309,
    CHARACTER = 310,
    CLUSTER = 311,
    COMMENT = 312,
    COMMIT = 313,
    CONSISTENT = 314,
    COLUMN = 315,
    COLUMNS = 316,
    CREATE = 317,
    CREATETIME = 318,
    CURRENT_USER = 319,
    CHANGE_OBI = 320,
    SWITCH_CLUSTER = 321,
    DATE = 322,
    DATETIME = 323,
    DEALLOCATE = 324,
    DECIMAL = 325,
    DEFAULT = 326,
    DELETE = 327,
    DESC = 328,
    DESCRIBE = 329,
    DISTINCT = 330,
    DOUBLE = 331,
    DROP = 332,
    DUAL = 333,
    ELSE = 334,
    END = 335,
    END_P = 336,
    ERROR = 337,
    EXECUTE = 338,
    EXISTS = 339,
    EXPLAIN = 340,
    FETCH = 341,
    FIRST = 342,
    FLOAT = 343,
    FOR = 344,
    FROM = 345,
    FROZEN = 346,
    FORCE = 347,
    GLOBAL = 348,
    GLOBAL_ALIAS = 349,
    GRANT = 350,
    GROUP = 351,
    HAVING = 352,
    HINT_BEGIN = 353,
    HINT_END = 354,
    HOTSPOT = 355,
    IDENTIFIED = 356,
    IF = 357,
    INTEGER = 358,
    INSERT = 359,
    INTO = 360,
    KEY = 361,
    LEADING = 362,
    LIMIT = 363,
    LOCAL = 364,
    LOCKED = 365,
    MEDIUMINT = 366,
    MEMORY = 367,
    MODIFYTIME = 368,
    MASTER = 369,
    NEXT = 370,
    NOEXPAND = 371,
    NUMERIC = 372,
    OFFSET = 373,
    ONLY = 374,
    ORDER = 375,
    OPTION = 376,
    OUTER = 377,
    PARAMETERS = 378,
    PERCENT = 379,
    PASSWORD = 380,
    PRECISION = 381,
    PREPARE = 382,
    PRIMARY = 383,
    READ_STATIC = 384,
    REAL = 385,
    RENAME = 386,
    REPLACE = 387,
    RESTRICT = 388,
    PRIVILEGES = 389,
    REVOKE = 390,
    ROLLBACK = 391,
    ROW = 392,
    ROWS = 393,
    KILL = 394,
    READ_CONSISTENCY = 395,
    SCHEMA = 396,
    SCOPE = 397,
    SELECT = 398,
    SESSION = 399,
    SESSION_ALIAS = 400,
    SET = 401,
    SHOW = 402,
    SMALLINT = 403,
    SNAPSHOT = 404,
    SPFILE = 405,
    START = 406,
    STATIC = 407,
    SYSTEM = 408,
    STRONG = 409,
    SET_MASTER_CLUSTER = 410,
    SET_SLAVE_CLUSTER = 411,
    SLAVE = 412,
    TABLE = 413,
    TABLES = 414,
    THEN = 415,
    TIES = 416,
    TIME = 417,
    TIMESTAMP = 418,
    TINYINT = 419,
    TRAILING = 420,
    TRANSACTION = 421,
    TO = 422,
    TOP = 423,
    UPDATE = 424,
    USER = 425,
    VALUES = 426,
    VARCHAR = 427,
    VARBINARY = 428,
    WHERE = 429,
    WHEN = 430,
    WITH = 431,
    WORK = 432,
    PROCESSLIST = 433,
    QUERY = 434,
    CONNECTION = 435,
    WEAK = 436
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 80 "sqlparser.y" /* yacc.c:1909  */

    struct Node* node;
    int    ival;

#line 249 "sqlparser_bison.h" /* yacc.c:1909  */
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
