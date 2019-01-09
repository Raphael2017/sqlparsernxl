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
#line 41 "sqlparser.y" /* yacc.c:1909  */

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
    WITH = 295,
    ADD = 296,
    ANY = 297,
    ALL = 298,
    ALTER = 299,
    AS = 300,
    ASC = 301,
    BEGI = 302,
    BIGINT = 303,
    BINARY = 304,
    BOOLEAN = 305,
    BOTH = 306,
    BROWSE = 307,
    BY = 308,
    CASCADE = 309,
    CASE = 310,
    CHARACTER = 311,
    CLUSTER = 312,
    COMMENT = 313,
    COMMIT = 314,
    CONSISTENT = 315,
    COLUMN = 316,
    COLUMNS = 317,
    CREATE = 318,
    CREATETIME = 319,
    CURRENT_USER = 320,
    CHANGE_OBI = 321,
    SWITCH_CLUSTER = 322,
    DATE = 323,
    DATETIME = 324,
    DEALLOCATE = 325,
    DECIMAL = 326,
    DEFAULT = 327,
    DELETE = 328,
    DESC = 329,
    DESCRIBE = 330,
    DISTINCT = 331,
    DOUBLE = 332,
    DROP = 333,
    DUAL = 334,
    ELSE = 335,
    END = 336,
    END_P = 337,
    ERROR = 338,
    EXECUTE = 339,
    EXISTS = 340,
    EXPLAIN = 341,
    FETCH = 342,
    FIRST = 343,
    FLOAT = 344,
    FOR = 345,
    FROM = 346,
    FROZEN = 347,
    FORCE = 348,
    GLOBAL = 349,
    GLOBAL_ALIAS = 350,
    GRANT = 351,
    GROUP = 352,
    HAVING = 353,
    HINT_BEGIN = 354,
    HINT_END = 355,
    HOTSPOT = 356,
    IDENTIFIED = 357,
    IF = 358,
    INTEGER = 359,
    INSERT = 360,
    INTO = 361,
    KEY = 362,
    LEADING = 363,
    LIMIT = 364,
    LOCAL = 365,
    LOCKED = 366,
    MEDIUMINT = 367,
    MEMORY = 368,
    MODIFYTIME = 369,
    MASTER = 370,
    NEXT = 371,
    NOEXPAND = 372,
    NUMERIC = 373,
    OFFSET = 374,
    ONLY = 375,
    ORDER = 376,
    OPTION = 377,
    OUTER = 378,
    PARAMETERS = 379,
    PERCENT = 380,
    PASSWORD = 381,
    PRECISION = 382,
    PREPARE = 383,
    PRIMARY = 384,
    READ_STATIC = 385,
    REAL = 386,
    RENAME = 387,
    REPLACE = 388,
    RESTRICT = 389,
    PRIVILEGES = 390,
    REVOKE = 391,
    ROLLBACK = 392,
    ROW = 393,
    ROWS = 394,
    KILL = 395,
    READ_CONSISTENCY = 396,
    SCHEMA = 397,
    SCOPE = 398,
    SELECT = 399,
    SESSION = 400,
    SESSION_ALIAS = 401,
    SET = 402,
    SHOW = 403,
    SMALLINT = 404,
    SNAPSHOT = 405,
    SPFILE = 406,
    START = 407,
    STATIC = 408,
    SYSTEM = 409,
    STRONG = 410,
    SET_MASTER_CLUSTER = 411,
    SET_SLAVE_CLUSTER = 412,
    SLAVE = 413,
    TABLE = 414,
    TABLES = 415,
    THEN = 416,
    TIES = 417,
    TIME = 418,
    TIMESTAMP = 419,
    TINYINT = 420,
    TRAILING = 421,
    TRANSACTION = 422,
    TO = 423,
    TOP = 424,
    UPDATE = 425,
    USER = 426,
    VALUES = 427,
    VARCHAR = 428,
    VARBINARY = 429,
    WHERE = 430,
    WHEN = 431,
    WORK = 432,
    PROCESSLIST = 433,
    QUERY = 434,
    CONNECTION = 435,
    WEAK = 436,
    LOOP = 437,
    HASH = 438,
    MERGE = 439,
    REMOTE = 440,
    CONCAT = 441,
    OPTIMIZE = 442,
    EXPAND = 443,
    VIEWS = 444,
    FAST = 445,
    DISABLE = 446,
    EXTERNALPUSHDOWN = 447,
    IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX = 448,
    KEEP = 449,
    PLAN = 450,
    KEEPFIXED = 451,
    MAX_GRANT_PERCENT = 452,
    MIN_GRANT_PERCENT = 453,
    MAXDOP = 454,
    MAXRECURSION = 455,
    NO_PERFORMANCE_SPOOL = 456,
    PARAMETERIZATION = 457,
    SIMPLE = 458,
    FORCED = 459,
    RECOMPILE = 460,
    ROBUST = 461,
    CHECKSUM = 462,
    BINARY_CHECKSUM = 463,
    RANK = 464,
    DENSE_RANK = 465,
    ROW_NUMBER = 466,
    NTILE = 467,
    PARTITION = 468,
    RANGE = 469,
    UNBOUNDED = 470,
    PRECEDING = 471,
    CURRENT = 472,
    FOLLOWING = 473,
    OVER = 474,
    VARP = 475,
    VAR = 476,
    SUM = 477,
    STDEVP = 478,
    STDEV = 479,
    MIN = 480,
    MAX = 481,
    LEAD = 482,
    LAST_VALUE = 483,
    LAG = 484,
    GROUPING_ID = 485,
    GROUPING = 486,
    FIRST_VALUE = 487,
    COUNT_BIG = 488,
    COUNT = 489,
    CHECKSUM_AGG = 490,
    AVG = 491,
    SYSTEM_USER = 492,
    STUFF = 493,
    SESSION_USER = 494,
    NULLIF = 495,
    MIN_ACTIVE_ROWVERSION = 496,
    ISNULL = 497,
    IDENTITY = 498,
    GETUTCDATE = 499,
    GETDATE = 500,
    DATEPART = 501,
    DATENAME = 502,
    DATEDIFF = 503,
    DATEADD = 504,
    CURRENT_TIMESTAMP = 505,
    CONVERT = 506,
    COALESCE = 507,
    CAST = 508
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "sqlparser.y" /* yacc.c:1909  */

    struct Node* node;
    int    ival;

#line 321 "sqlparser_bison.h" /* yacc.c:1909  */
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
