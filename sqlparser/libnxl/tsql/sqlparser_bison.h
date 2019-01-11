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
    TEMP_VARIABLE = 266,
    COLLATE = 267,
    CONDITIONLESS_JOIN = 268,
    CROSS = 269,
    FULL = 270,
    INNER = 271,
    JOIN = 272,
    LEFT = 273,
    NATURAL = 274,
    RIGHT = 275,
    ON = 276,
    USING = 277,
    OUTER = 278,
    PIVOT = 279,
    UNPIVOT = 280,
    UNION = 281,
    EXCEPT = 282,
    INTERSECT = 283,
    OR = 284,
    AND = 285,
    NOT = 286,
    COMP_LE = 287,
    COMP_LT = 288,
    COMP_EQ = 289,
    COMP_GT = 290,
    COMP_GE = 291,
    COMP_NE = 292,
    CNNOP = 293,
    LIKE = 294,
    BETWEEN = 295,
    IN = 296,
    IS = 297,
    MOD = 298,
    UMINUS = 299,
    WITH = 300,
    FOR = 301,
    ADD = 302,
    ANY = 303,
    ALL = 304,
    ALTER = 305,
    AS = 306,
    ASC = 307,
    BEGI = 308,
    BIGINT = 309,
    BINARY = 310,
    BOTH = 311,
    BROWSE = 312,
    BY = 313,
    CASCADE = 314,
    CASE = 315,
    CHARACTER = 316,
    CLUSTER = 317,
    COMMENT = 318,
    COMMIT = 319,
    CONSISTENT = 320,
    COLUMN = 321,
    COLUMNS = 322,
    CREATE = 323,
    CREATETIME = 324,
    CURRENT_USER = 325,
    CHANGE_OBI = 326,
    SWITCH_CLUSTER = 327,
    DATE = 328,
    DATETIME = 329,
    DEALLOCATE = 330,
    DECIMAL = 331,
    DEFAULT = 332,
    DELETE = 333,
    DESC = 334,
    DESCRIBE = 335,
    DISTINCT = 336,
    DOUBLE = 337,
    DROP = 338,
    DUAL = 339,
    ELSE = 340,
    END = 341,
    END_P = 342,
    ERROR = 343,
    EXECUTE = 344,
    EXISTS = 345,
    EXPLAIN = 346,
    FETCH = 347,
    FIRST = 348,
    FLOAT = 349,
    FROM = 350,
    FROZEN = 351,
    FORCE = 352,
    GLOBAL = 353,
    GLOBAL_ALIAS = 354,
    GRANT = 355,
    GROUP = 356,
    HAVING = 357,
    HINT_BEGIN = 358,
    HINT_END = 359,
    HOTSPOT = 360,
    IDENTIFIED = 361,
    IF = 362,
    INSERT = 363,
    INTO = 364,
    KEY = 365,
    LEADING = 366,
    LIMIT = 367,
    LOCAL = 368,
    LOCKED = 369,
    MEMORY = 370,
    MODIFYTIME = 371,
    MASTER = 372,
    NEXT = 373,
    NOEXPAND = 374,
    NUMERIC = 375,
    OFFSET = 376,
    ONLY = 377,
    ORDER = 378,
    OPTION = 379,
    PARAMETERS = 380,
    PERCENT = 381,
    PASSWORD = 382,
    PRECISION = 383,
    PREPARE = 384,
    PRIMARY = 385,
    READ_STATIC = 386,
    REAL = 387,
    RENAME = 388,
    REPLACE = 389,
    RESTRICT = 390,
    PRIVILEGES = 391,
    REVOKE = 392,
    ROLLBACK = 393,
    ROW = 394,
    ROWS = 395,
    KILL = 396,
    READ_CONSISTENCY = 397,
    SCHEMA = 398,
    SCOPE = 399,
    SELECT = 400,
    SESSION = 401,
    SESSION_ALIAS = 402,
    SET = 403,
    SHOW = 404,
    SMALLINT = 405,
    SNAPSHOT = 406,
    SPFILE = 407,
    START = 408,
    STATIC = 409,
    SYSTEM = 410,
    STRONG = 411,
    SET_MASTER_CLUSTER = 412,
    SET_SLAVE_CLUSTER = 413,
    SLAVE = 414,
    TABLE = 415,
    TABLES = 416,
    THEN = 417,
    TIES = 418,
    TIME = 419,
    TIMESTAMP = 420,
    TINYINT = 421,
    TRAILING = 422,
    TRANSACTION = 423,
    TO = 424,
    TOP = 425,
    UPDATE = 426,
    USER = 427,
    VALUES = 428,
    VARCHAR = 429,
    VARBINARY = 430,
    WHERE = 431,
    WHEN = 432,
    WORK = 433,
    PROCESSLIST = 434,
    QUERY = 435,
    CONNECTION = 436,
    WEAK = 437,
    LOOP = 438,
    HASH = 439,
    MERGE = 440,
    REMOTE = 441,
    CONCAT = 442,
    OPTIMIZE = 443,
    EXPAND = 444,
    VIEWS = 445,
    FAST = 446,
    DISABLE = 447,
    EXTERNALPUSHDOWN = 448,
    IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX = 449,
    KEEP = 450,
    PLAN = 451,
    KEEPFIXED = 452,
    MAX_GRANT_PERCENT = 453,
    MIN_GRANT_PERCENT = 454,
    MAXDOP = 455,
    MAXRECURSION = 456,
    NO_PERFORMANCE_SPOOL = 457,
    PARAMETERIZATION = 458,
    SIMPLE = 459,
    FORCED = 460,
    RECOMPILE = 461,
    ROBUST = 462,
    CHECKSUM = 463,
    BINARY_CHECKSUM = 464,
    RANK = 465,
    DENSE_RANK = 466,
    ROW_NUMBER = 467,
    NTILE = 468,
    PARTITION = 469,
    RANGE = 470,
    UNBOUNDED = 471,
    PRECEDING = 472,
    CURRENT = 473,
    FOLLOWING = 474,
    OVER = 475,
    VARP = 476,
    VAR = 477,
    SUM = 478,
    STDEVP = 479,
    STDEV = 480,
    MIN = 481,
    MAX = 482,
    LEAD = 483,
    LAST_VALUE = 484,
    LAG = 485,
    GROUPING_ID = 486,
    GROUPING = 487,
    FIRST_VALUE = 488,
    COUNT_BIG = 489,
    COUNT = 490,
    CHECKSUM_AGG = 491,
    AVG = 492,
    SYSTEM_USER = 493,
    STUFF = 494,
    SESSION_USER = 495,
    NULLIF = 496,
    MIN_ACTIVE_ROWVERSION = 497,
    ISNULL = 498,
    IDENTITY = 499,
    GETUTCDATE = 500,
    GETDATE = 501,
    DATEPART = 502,
    DATENAME = 503,
    DATEDIFF = 504,
    DATEADD = 505,
    CURRENT_TIMESTAMP = 506,
    CONVERT = 507,
    COALESCE = 508,
    CAST = 509,
    BIT = 510,
    CHAR = 511,
    DATETIME2 = 512,
    DATETIMEOFFSET = 513,
    INT = 514,
    MONEY = 515,
    NCHAR = 516,
    NVARCHAR = 517,
    SMALLDATETIME = 518,
    SMALLMONEY = 519,
    TEXT = 520,
    APPLY = 521,
    SYSTEM_TIME = 522,
    OF = 523,
    CONTAINED = 524
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "sqlparser.y" /* yacc.c:1909  */

    struct Node* node;
    int    ival;

#line 337 "sqlparser_bison.h" /* yacc.c:1909  */
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
