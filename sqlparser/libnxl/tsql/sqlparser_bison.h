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
    COLLATE = 266,
    CONDITIONLESS_JOIN = 267,
    CROSS = 268,
    FULL = 269,
    INNER = 270,
    JOIN = 271,
    LEFT = 272,
    NATURAL = 273,
    RIGHT = 274,
    ON = 275,
    USING = 276,
    OUTER = 277,
    PIVOT = 278,
    UNPIVOT = 279,
    UNION = 280,
    EXCEPT = 281,
    INTERSECT = 282,
    OR = 283,
    AND = 284,
    NOT = 285,
    COMP_LE = 286,
    COMP_LT = 287,
    COMP_EQ = 288,
    COMP_GT = 289,
    COMP_GE = 290,
    COMP_NE = 291,
    CNNOP = 292,
    LIKE = 293,
    BETWEEN = 294,
    IN = 295,
    IS = 296,
    MOD = 297,
    UMINUS = 298,
    WITH = 299,
    FOR = 300,
    ADD = 301,
    ANY = 302,
    ALL = 303,
    ALTER = 304,
    AS = 305,
    ASC = 306,
    BEGI = 307,
    BIGINT = 308,
    BINARY = 309,
    BOTH = 310,
    BROWSE = 311,
    BY = 312,
    CASCADE = 313,
    CASE = 314,
    CHARACTER = 315,
    CLUSTER = 316,
    COMMENT = 317,
    COMMIT = 318,
    CONSISTENT = 319,
    COLUMN = 320,
    COLUMNS = 321,
    CREATE = 322,
    CREATETIME = 323,
    CURRENT_USER = 324,
    CHANGE_OBI = 325,
    SWITCH_CLUSTER = 326,
    DATE = 327,
    DATETIME = 328,
    DEALLOCATE = 329,
    DECIMAL = 330,
    DEFAULT = 331,
    DELETE = 332,
    DESC = 333,
    DESCRIBE = 334,
    DISTINCT = 335,
    DOUBLE = 336,
    DROP = 337,
    DUAL = 338,
    ELSE = 339,
    END = 340,
    END_P = 341,
    ERROR = 342,
    EXECUTE = 343,
    EXISTS = 344,
    EXPLAIN = 345,
    FETCH = 346,
    FIRST = 347,
    FLOAT = 348,
    FROM = 349,
    FROZEN = 350,
    FORCE = 351,
    GLOBAL = 352,
    GLOBAL_ALIAS = 353,
    GRANT = 354,
    GROUP = 355,
    HAVING = 356,
    HINT_BEGIN = 357,
    HINT_END = 358,
    HOTSPOT = 359,
    IDENTIFIED = 360,
    IF = 361,
    INSERT = 362,
    INTO = 363,
    KEY = 364,
    LEADING = 365,
    LIMIT = 366,
    LOCAL = 367,
    LOCKED = 368,
    MEMORY = 369,
    MODIFYTIME = 370,
    MASTER = 371,
    NEXT = 372,
    NOEXPAND = 373,
    NUMERIC = 374,
    OFFSET = 375,
    ONLY = 376,
    ORDER = 377,
    OPTION = 378,
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
    CAST = 508,
    BIT = 509,
    CHAR = 510,
    DATETIME2 = 511,
    DATETIMEOFFSET = 512,
    INT = 513,
    MONEY = 514,
    NCHAR = 515,
    NVARCHAR = 516,
    SMALLDATETIME = 517,
    SMALLMONEY = 518,
    TEXT = 519,
    APPLY = 520,
    SYSTEM_TIME = 521,
    OF = 522,
    CONTAINED = 523
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "sqlparser.y" /* yacc.c:1909  */

    struct Node* node;
    int    ival;

#line 336 "sqlparser_bison.h" /* yacc.c:1909  */
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
