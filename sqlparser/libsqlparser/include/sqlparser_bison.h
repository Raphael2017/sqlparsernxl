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
#line 41 "./sqlparser.y" /* yacc.c:1909  */

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
    ASSIGN = 284,
    ASSIGN_ADD = 285,
    ASSGIN_MINUS = 286,
    ASSIGN_MUL = 287,
    ASSIGN_DIV = 288,
    ASSIGN_REM = 289,
    ASSIGN_BITWISE_AND = 290,
    ASSIGN_BITWISE_OR = 291,
    ASSIGN_BITWISE_XOR = 292,
    OR = 293,
    AND = 294,
    NOT = 295,
    COMP_LE = 296,
    COMP_LT = 297,
    COMP_EQ = 298,
    COMP_GT = 299,
    COMP_GE = 300,
    COMP_NE = 301,
    CNNOP = 302,
    LIKE = 303,
    BETWEEN = 304,
    IN = 305,
    IS = 306,
    MOD = 307,
    UMINUS = 308,
    WITH = 309,
    FOR = 310,
    ADD = 311,
    ANY = 312,
    ALL = 313,
    ALTER = 314,
    AS = 315,
    ASC = 316,
    BEGI = 317,
    BIGINT = 318,
    BINARY = 319,
    BOTH = 320,
    BROWSE = 321,
    BY = 322,
    CASCADE = 323,
    CASE = 324,
    CHARACTER = 325,
    CLUSTER = 326,
    COMMENT = 327,
    COMMIT = 328,
    CONSISTENT = 329,
    COLUMN = 330,
    COLUMNS = 331,
    CREATE = 332,
    CREATETIME = 333,
    CURRENT_USER = 334,
    CHANGE_OBI = 335,
    SWITCH_CLUSTER = 336,
    DATE = 337,
    DATETIME = 338,
    DEALLOCATE = 339,
    DECIMAL = 340,
    DEFAULT = 341,
    DELETE = 342,
    DESC = 343,
    DESCRIBE = 344,
    DISTINCT = 345,
    DOUBLE = 346,
    DROP = 347,
    DUAL = 348,
    ELSE = 349,
    END = 350,
    END_P = 351,
    ERROR = 352,
    EXECUTE = 353,
    EXISTS = 354,
    EXPLAIN = 355,
    FETCH = 356,
    FIRST = 357,
    FLOAT = 358,
    FROM = 359,
    FROZEN = 360,
    FORCE = 361,
    GLOBAL = 362,
    GLOBAL_ALIAS = 363,
    GRANT = 364,
    GROUP = 365,
    HAVING = 366,
    HINT_BEGIN = 367,
    HINT_END = 368,
    HOTSPOT = 369,
    IDENTIFIED = 370,
    IF = 371,
    INSERT = 372,
    INTO = 373,
    KEY = 374,
    LEADING = 375,
    LIMIT = 376,
    LOCAL = 377,
    LOCKED = 378,
    MEMORY = 379,
    MODIFYTIME = 380,
    MASTER = 381,
    NEXT = 382,
    NOEXPAND = 383,
    NUMERIC = 384,
    OFFSET = 385,
    ONLY = 386,
    ORDER = 387,
    OPTION = 388,
    PARAMETERS = 389,
    PERCENT = 390,
    PASSWORD = 391,
    PRECISION = 392,
    PREPARE = 393,
    PRIMARY = 394,
    READ_STATIC = 395,
    REAL = 396,
    RENAME = 397,
    REPLACE = 398,
    RESTRICT = 399,
    PRIVILEGES = 400,
    REVOKE = 401,
    ROLLBACK = 402,
    ROW = 403,
    ROWS = 404,
    KILL = 405,
    READ_CONSISTENCY = 406,
    SCHEMA = 407,
    SCOPE = 408,
    SELECT = 409,
    SESSION = 410,
    SESSION_ALIAS = 411,
    SET = 412,
    SHOW = 413,
    SMALLINT = 414,
    SNAPSHOT = 415,
    SPFILE = 416,
    START = 417,
    STATIC = 418,
    SYSTEM = 419,
    STRONG = 420,
    SET_MASTER_CLUSTER = 421,
    SET_SLAVE_CLUSTER = 422,
    SLAVE = 423,
    TABLE = 424,
    TABLES = 425,
    THEN = 426,
    TIES = 427,
    TIME = 428,
    TIMESTAMP = 429,
    TINYINT = 430,
    TRAILING = 431,
    TRANSACTION = 432,
    TO = 433,
    TOP = 434,
    UPDATE = 435,
    VALUES = 436,
    VARCHAR = 437,
    VARBINARY = 438,
    WHERE = 439,
    WHEN = 440,
    WORK = 441,
    PROCESSLIST = 442,
    QUERY = 443,
    CONNECTION = 444,
    WEAK = 445,
    LOOP = 446,
    HASH = 447,
    MERGE = 448,
    REMOTE = 449,
    CONCAT = 450,
    OPTIMIZE = 451,
    EXPAND = 452,
    VIEWS = 453,
    FAST = 454,
    DISABLE = 455,
    EXTERNALPUSHDOWN = 456,
    IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX = 457,
    KEEP = 458,
    PLAN = 459,
    KEEPFIXED = 460,
    MAX_GRANT_PERCENT = 461,
    MIN_GRANT_PERCENT = 462,
    MAXDOP = 463,
    MAXRECURSION = 464,
    NO_PERFORMANCE_SPOOL = 465,
    PARAMETERIZATION = 466,
    SIMPLE = 467,
    FORCED = 468,
    RECOMPILE = 469,
    ROBUST = 470,
    CHECKSUM = 471,
    BINARY_CHECKSUM = 472,
    RANK = 473,
    DENSE_RANK = 474,
    ROW_NUMBER = 475,
    NTILE = 476,
    PARTITION = 477,
    RANGE = 478,
    UNBOUNDED = 479,
    PRECEDING = 480,
    CURRENT = 481,
    FOLLOWING = 482,
    OVER = 483,
    VARP = 484,
    VAR = 485,
    SUM = 486,
    STDEVP = 487,
    STDEV = 488,
    MIN = 489,
    MAX = 490,
    LEAD = 491,
    LAST_VALUE = 492,
    LAG = 493,
    GROUPING_ID = 494,
    GROUPING = 495,
    FIRST_VALUE = 496,
    COUNT_BIG = 497,
    COUNT = 498,
    CHECKSUM_AGG = 499,
    AVG = 500,
    SYSTEM_USER = 501,
    STUFF = 502,
    SESSION_USER = 503,
    NULLIF = 504,
    MIN_ACTIVE_ROWVERSION = 505,
    ISNULL = 506,
    IDENTITY = 507,
    GETUTCDATE = 508,
    GETDATE = 509,
    DATEPART = 510,
    DATENAME = 511,
    DATEDIFF = 512,
    DATEADD = 513,
    CURRENT_TIMESTAMP = 514,
    CONVERT = 515,
    COALESCE = 516,
    CAST = 517,
    BIT = 518,
    CHAR = 519,
    DATETIME2 = 520,
    DATETIMEOFFSET = 521,
    INT = 522,
    MONEY = 523,
    NCHAR = 524,
    NVARCHAR = 525,
    SMALLDATETIME = 526,
    SMALLMONEY = 527,
    TEXT = 528,
    APPLY = 529,
    SYSTEM_TIME = 530,
    OF = 531,
    CONTAINED = 532,
    OUTPUT = 533,
    DELETED = 534,
    INSERTED = 535,
    DOLLAR_ACTION = 536
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "./sqlparser.y" /* yacc.c:1909  */

    struct Node* node;
    int    ival;

#line 349 "sqlparser_bison.h" /* yacc.c:1909  */
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
