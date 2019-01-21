/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "./sqlparser.y" /* yacc.c:339  */

/**
 * This Grammar is designed for Transact-SQL.
 * Most grammar rules refer to Microsoft's official documents.
 * sqlparser.y
 * defines sqlparser_bison.h
 * outputs sqlparser_bison.cpp
 *
 * Bison Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "sqlparser_bison.h"
#include "sqlparser_flex.h"

#include <stdio.h>
#include <string.h>
//#include <strings.h>

/*
 * We provide parse error includes error message, first line, first column of error lex for debug
 */
int yyerror(YYLTYPE* llocp, ParseResult* result, yyscan_t scanner, const char *msg) {
    result->accept = false;
    result->errFirstLine = llocp->first_line;
    result->errFirstColumn = llocp->first_column;
    result->errDetail = msg;
	return 0;
}


#line 101 "sqlparser_bison.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sqlparser_bison.h".  */
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
#line 41 "./sqlparser.y" /* yacc.c:355  */

// %code requires block

#include "node.h"

#line 137 "sqlparser_bison.cpp" /* yacc.c:355  */

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
#line 86 "./sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 436 "sqlparser_bison.cpp" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 466 "sqlparser_bison.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  294
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  488
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1086

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   536

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   293,    56,     2,     2,
      61,    62,    54,    52,   292,    53,    63,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    64,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    57,    59,    60,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   226,   226,   236,   237,   249,   250,   251,   255,   256,
     261,   277,   293,   309,   328,   329,   334,   339,   344,   352,
     353,   361,   374,   375,   380,   385,   393,   394,   402,   407,
     412,   421,   425,   430,   438,   445,   457,   458,   466,   467,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   506,   507,   511,
     537,   563,   589,   618,   619,   628,   629,   634,   639,   644,
     652,   653,   661,   662,   663,   672,   673,   681,   682,   690,
     691,   699,   700,   708,   709,   713,   718,   727,   732,   737,
     742,   747,   752,   757,   762,   767,   772,   780,   781,   789,
     798,   801,   805,   812,   813,   821,   829,   830,   838,   846,
     847,   851,   859,   860,   868,   869,   873,   880,   881,   889,
     896,   904,   912,   921,   922,   930,   931,   936,   941,   946,
     951,   956,   961,   966,   971,   976,   981,   986,   991,   996,
    1001,  1006,  1011,  1018,  1025,  1035,  1036,  1044,  1049,  1055,
    1061,  1067,  1072,  1080,  1088,  1093,  1103,  1104,  1112,  1113,
    1118,  1128,  1137,  1150,  1151,  1152,  1160,  1161,  1166,  1171,
    1176,  1181,  1186,  1191,  1196,  1201,  1209,  1214,  1219,  1225,
    1231,  1237,  1243,  1248,  1253,  1258,  1263,  1268,  1276,  1284,
    1292,  1303,  1314,  1325,  1332,  1333,  1334,  1335,  1336,  1340,
    1341,  1346,  1347,  1355,  1360,  1365,  1371,  1376,  1382,  1387,
    1393,  1398,  1404,  1409,  1415,  1420,  1426,  1431,  1437,  1442,
    1451,  1452,  1453,  1454,  1455,  1456,  1457,  1458,  1459,  1463,
    1464,  1465,  1466,  1472,  1473,  1474,  1475,  1484,  1485,  1490,
    1495,  1500,  1505,  1510,  1515,  1520,  1525,  1533,  1534,  1535,
    1540,  1545,  1550,  1555,  1560,  1565,  1570,  1575,  1580,  1585,
    1590,  1595,  1600,  1605,  1610,  1615,  1620,  1625,  1630,  1635,
    1640,  1645,  1650,  1655,  1660,  1665,  1670,  1675,  1680,  1685,
    1693,  1694,  1702,  1710,  1711,  1715,  1716,  1724,  1732,  1733,
    1742,  1743,  1744,  1745,  1746,  1753,  1759,  1767,  1777,  1784,
    1790,  1796,  1802,  1812,  1822,  1830,  1838,  1844,  1850,  1860,
    1866,  1872,  1880,  1892,  1898,  1904,  1915,  1921,  1927,  1933,
    1939,  1945,  1951,  1957,  1963,  1969,  1975,  1981,  1987,  1993,
    1999,  2005,  2011,  2017,  2023,  2029,  2035,  2041,  2047,  2053,
    2059,  2065,  2071,  2077,  2083,  2089,  2095,  2101,  2107,  2113,
    2119,  2125,  2131,  2138,  2145,  2151,  2157,  2163,  2169,  2176,
    2183,  2189,  2195,  2201,  2210,  2216,  2222,  2228,  2236,  2246,
    2252,  2260,  2272,  2278,  2284,  2290,  2299,  2306,  2313,  2320,
    2327,  2334,  2339,  2345,  2351,  2357,  2363,  2370,  2377,  2384,
    2391,  2398,  2403,  2409,  2415,  2421,  2429,  2434,  2439,  2444,
    2449,  2454,  2459,  2464,  2472,  2478,  2487,  2489,  2491,  2493,
    2495,  2497,  2499,  2501,  2503,  2505,  2507,  2509,  2511,  2513,
    2515,  2517,  2519,  2521,  2523,  2525,  2527,  2529,  2531,  2533,
    2535,  2537,  2539,  2541,  2545,  2549,  2557,  2561,  2562,  2567,
    2569,  2571,  2573,  2575,  2577,  2579,  2581,  2583,  2585,  2587,
    2589,  2591,  2593,  2595,  2597,  2599,  2601,  2603,  2605,  2607,
    2609,  2611,  2613,  2615,  2617,  2619,  2621,  2623,  2625,  2627,
    2629,  2631,  2633,  2635,  2637,  2639,  2641,  2643,  2645
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "TEMP_VARIABLE",
  "COLLATE", "CONDITIONLESS_JOIN", "CROSS", "FULL", "INNER", "JOIN",
  "LEFT", "NATURAL", "RIGHT", "ON", "USING", "OUTER", "PIVOT", "UNPIVOT",
  "UNION", "EXCEPT", "INTERSECT", "ASSIGN", "ASSIGN_ADD", "ASSGIN_MINUS",
  "ASSIGN_MUL", "ASSIGN_DIV", "ASSIGN_REM", "ASSIGN_BITWISE_AND",
  "ASSIGN_BITWISE_OR", "ASSIGN_BITWISE_XOR", "OR", "AND", "NOT", "COMP_LE",
  "COMP_LT", "COMP_EQ", "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE",
  "BETWEEN", "IN", "IS", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'",
  "UMINUS", "WITH", "'('", "')'", "'.'", "';'", "FOR", "ADD", "ANY", "ALL",
  "ALTER", "AS", "ASC", "BEGI", "BIGINT", "BINARY", "BOTH", "BROWSE", "BY",
  "CASCADE", "CASE", "CHARACTER", "CLUSTER", "COMMENT", "COMMIT",
  "CONSISTENT", "COLUMN", "COLUMNS", "CREATE", "CREATETIME",
  "CURRENT_USER", "CHANGE_OBI", "SWITCH_CLUSTER", "DATE", "DATETIME",
  "DEALLOCATE", "DECIMAL", "DEFAULT", "DELETE", "DESC", "DESCRIBE",
  "DISTINCT", "DOUBLE", "DROP", "DUAL", "ELSE", "END", "END_P", "ERROR",
  "EXECUTE", "EXISTS", "EXPLAIN", "FETCH", "FIRST", "FLOAT", "FROM",
  "FROZEN", "FORCE", "GLOBAL", "GLOBAL_ALIAS", "GRANT", "GROUP", "HAVING",
  "HINT_BEGIN", "HINT_END", "HOTSPOT", "IDENTIFIED", "IF", "INSERT",
  "INTO", "KEY", "LEADING", "LIMIT", "LOCAL", "LOCKED", "MEMORY",
  "MODIFYTIME", "MASTER", "NEXT", "NOEXPAND", "NUMERIC", "OFFSET", "ONLY",
  "ORDER", "OPTION", "PARAMETERS", "PERCENT", "PASSWORD", "PRECISION",
  "PREPARE", "PRIMARY", "READ_STATIC", "REAL", "RENAME", "REPLACE",
  "RESTRICT", "PRIVILEGES", "REVOKE", "ROLLBACK", "ROW", "ROWS", "KILL",
  "READ_CONSISTENCY", "SCHEMA", "SCOPE", "SELECT", "SESSION",
  "SESSION_ALIAS", "SET", "SHOW", "SMALLINT", "SNAPSHOT", "SPFILE",
  "START", "STATIC", "SYSTEM", "STRONG", "SET_MASTER_CLUSTER",
  "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES", "THEN", "TIES", "TIME",
  "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO", "TOP", "UPDATE",
  "VALUES", "VARCHAR", "VARBINARY", "WHERE", "WHEN", "WORK", "PROCESSLIST",
  "QUERY", "CONNECTION", "WEAK", "LOOP", "HASH", "MERGE", "REMOTE",
  "CONCAT", "OPTIMIZE", "EXPAND", "VIEWS", "FAST", "DISABLE",
  "EXTERNALPUSHDOWN", "IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX", "KEEP",
  "PLAN", "KEEPFIXED", "MAX_GRANT_PERCENT", "MIN_GRANT_PERCENT", "MAXDOP",
  "MAXRECURSION", "NO_PERFORMANCE_SPOOL", "PARAMETERIZATION", "SIMPLE",
  "FORCED", "RECOMPILE", "ROBUST", "CHECKSUM", "BINARY_CHECKSUM", "RANK",
  "DENSE_RANK", "ROW_NUMBER", "NTILE", "PARTITION", "RANGE", "UNBOUNDED",
  "PRECEDING", "CURRENT", "FOLLOWING", "OVER", "VARP", "VAR", "SUM",
  "STDEVP", "STDEV", "MIN", "MAX", "LEAD", "LAST_VALUE", "LAG",
  "GROUPING_ID", "GROUPING", "FIRST_VALUE", "COUNT_BIG", "COUNT",
  "CHECKSUM_AGG", "AVG", "SYSTEM_USER", "STUFF", "SESSION_USER", "NULLIF",
  "MIN_ACTIVE_ROWVERSION", "ISNULL", "IDENTITY", "GETUTCDATE", "GETDATE",
  "DATEPART", "DATENAME", "DATEDIFF", "DATEADD", "CURRENT_TIMESTAMP",
  "CONVERT", "COALESCE", "CAST", "BIT", "CHAR", "DATETIME2",
  "DATETIMEOFFSET", "INT", "MONEY", "NCHAR", "NVARCHAR", "SMALLDATETIME",
  "SMALLMONEY", "TEXT", "APPLY", "SYSTEM_TIME", "OF", "CONTAINED",
  "OUTPUT", "DELETED", "INSERTED", "DOLLAR_ACTION", "','", "'$'",
  "$accept", "sql_stmt", "stmt_list", "stmt", "dml_stmt", "update_stmt",
  "opt_update_where", "update_elem_list", "update_elem",
  "opt_output_clause", "dml_select_list", "dml_select_item", "select_stmt",
  "select_with_parens", "select_no_parens", "opt_option_query_hint",
  "query_hint_list", "query_hint", "select_clause", "simple_select",
  "opt_into_clause", "opt_top", "top_count", "top_percent",
  "opt_for_clause", "opt_where", "opt_from_clause", "opt_groupby",
  "opt_order_by", "order_by", "offset_fetch", "sort_list", "sort_key",
  "opt_asc_desc", "opt_having", "with_clause", "with_list",
  "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_factor",
  "table_factor_non_join", "opt_for_system_time", "system_time",
  "table_value_constructor_parens", "table_value_constructor",
  "row_value_expression_list_parens_list", "opt_with_table_hint",
  "table_hint_list", "table_hint", "table_hint_expr",
  "opt_simple_ident_list_with_parens", "relation_factor", "joined_table",
  "pivot_clause", "unpivot_clause", "join_type", "join_hint", "join_outer",
  "expr_list", "column_ref", "expr_const", "simple_expr", "arith_expr",
  "expr", "in_expr", "case_expr", "case_arg", "when_clause_list",
  "when_clause", "case_default", "func_expr",
  "aggregate_windowed_function", "analytic_windowed_function",
  "ranking_windowed_function", "scalar_function", "over_clause",
  "row_or_range_clause", "window_frame_extent", "distinct_or_all",
  "relation_name", "column_label", "data_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    43,    45,    42,    47,    37,   307,    94,   308,
     309,    40,    41,    46,    59,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,    44,    36
};
# endif

#define YYPACT_NINF -621

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-621)))

#define YYTABLE_NINF -85

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     150,    75,   -30,  -621,   -11,  -107,   170,    44,   150,   119,
    -621,  -621,  -621,  -621,    76,  -621,   169,   145,  -621,   -69,
     167,   176,   -28,  -621,  -621,  -107,   161,   237,  -621,  -621,
    -621,  -621,   -11,   -11,   -11,   165,   180,  -621,  -107,    76,
     246,   188,  -621,    75,  -621,  -621,  1928,   203,  -621,  3578,
     314,   225,   325,   334,   334,   -28,   -28,   -28,  3578,   330,
     257,   273,   180,   111,   369,   361,  -621,   324,  -621,  -621,
    -621,  -621,  -621,  -621,  -621,   391,   395,  3578,  3848,  3848,
    -621,  1258,  3578,  -621,  -621,   361,   399,   406,   410,   415,
     423,   426,   449,   457,   483,   497,   507,   571,   588,   592,
     629,   634,   644,   688,   694,   704,   715,   723,   724,   731,
    -621,   733,  -621,   734,  -621,   735,   736,   737,   740,   743,
     744,   745,   750,  -621,   751,   755,   756,   430,  -621,   312,
     223,  -621,  -621,  -621,   583,  4767,  -621,  -621,  -621,  -621,
    -621,  -621,  -621,  4889,   649,   646,    74,   762,   663,   673,
     816,   816,  -621,   705,   554,  4677,  -621,   786,  -621,   334,
     334,   257,   246,  -621,  -621,  2198,   256,  2258,  2528,   616,
     442,   442,   327,   788,    80,  6369,   658,  -621,  1528,  1588,
     792,   793,   794,  3578,   105,  1858,  1858,  1858,  1858,  1858,
    1858,  1858,  3578,  3578,  3578,  3578,  3578,  3578,   831,   918,
    1858,  1858,  3578,  3578,  3578,   674,   796,   798,   845,   858,
     859,   861,   674,  3578,  3578,  -621,  -621,   862,   754,  1928,
    3848,  3848,  3848,  3848,  3848,  3848,  3848,  -621,  -621,   866,
    3578,  3578,  3578,  3578,  3578,  3578,  3578,  3578,  3578,  3578,
     515,  3578,  3578,  3578,  3578,  3578,  3578,  3578,  3578,  3848,
     809,   455,    62,  -621,   728,  -621,   690,   811,   181,  4141,
    3578,  3578,  3578,  -621,  3578,  -621,  -621,  -621,   910,   708,
     709,  -621,  -621,  -621,   815,   458,  -621,   353,  -621,   817,
    -621,   818,  -621,  3578,  3578,   774,   658,   819,  -621,   820,
     824,  -621,   833,   662,   662,   662,  4929,  -621,    34,   825,
      34,   -24,   839,  -621,  -621,  4969,  3578,  5009,  3578,  5049,
    3578,  5089,  3578,  5129,  3578,  5169,  3578,  5209,  3578,   695,
    5249,  1338,   841,  5289,  5329,   842,  5369,  3578,   843,  5409,
    3578,  5449,  3578,  5489,  3578,  2668,  2998,  3328,  -621,   847,
    -621,  -621,   848,   850,   851,  -621,  -621,   852,  -621,   853,
     854,  -621,   855,   856,   869,  -621,  -621,   871,   872,  -621,
    -621,  -621,   -38,  -621,  -621,   627,   642,   650,   651,   654,
     875,  4808,  -621,  4062,   747,  -621,   442,   442,   881,   881,
     881,   881,  -621,  -621,  1701,  1701,  1701,  1701,  1701,  1701,
    1701,  1701,   630,   616,  3578,  3848,   809,   523,   523,   523,
     523,   523,   523,   454,   504,   478,  1258,  -621,  -621,  -621,
    -621,  -621,   505,  -621,  -621,   354,   882,   941,   416,  4246,
     897,   355,  -621,  -621,   672,   669,  6369,   672,  3991,  -621,
    -121,   844,   945,    45,    50,   937,   900,   758,   962,  -621,
     759,   760,   925,   926,   970,   971,  -621,  -123,  -621,   763,
     916,   689,  3578,  3578,  -621,  2588,   332,   462,   977,  -621,
    -621,  -621,  3949,  3578,   877,  -621,  -621,  -621,  -621,  -621,
    -621,  -621,  -621,   662,   748,    47,   749,   827,  -621,  3578,
    -621,  -621,   927,  -621,   662,  5529,   662,  5569,   662,  5609,
     662,  5649,   662,  5689,   662,  5729,   662,  5769,   662,  3578,
     662,   662,  3578,  -621,  -621,   662,   662,   662,  5809,   662,
     662,  5849,  -621,  5889,   662,  5929,   983,  3578,  3578,   985,
     986,   987,   988,   989,     7,    15,   990,   991,   993,   994,
      17,  -621,   995,  3578,  3578,  3578,  3578,  3578,  -621,   674,
     466,    69,  3957,   102,  -621,    26,  -621,   103,   936,  -621,
     271,  3578,   883,   504,   485,  -621,  3848,   940,  -621,  -621,
    -621,   942,  1001,  1003,  -621,  3578,   360,  -621,  -621,  4141,
    -621,  1188,   754,  3578,   754,   898,   899,  -621,  -621,  -621,
    -621,  -621,  -621,  -621,  -621,  -621,  -621,   999,  -621,  -621,
    -621,  -621,   641,   645,  -621,  -621,  -621,  -621,  -621,  -621,
     910,   672,   672,  -621,   949,   637,  -621,  1009,  2858,   342,
     950,  3578,  6369,  -621,  -621,  -621,   464,   467,   857,  -621,
    -621,   113,  -621,  -621,   662,  -621,   662,  -621,   662,  -621,
     662,  -621,   662,  -621,   662,  -621,   662,  -621,  1668,  -621,
    -621,  2008,  -621,  -621,  -621,   662,  -621,  -621,   662,  -621,
    -621,   662,   725,  5969,  6009,   954,   -35,   957,   -26,   958,
     959,   960,   961,   963,   966,   967,   968,   969,   972,   973,
     732,  6049,  6089,  3658,  3845,  2338,   974,   362,  -621,  4333,
    1029,  -621,   976,   340,   804,   978,   979,  1029,  -621,  -621,
     145,     9,  1010,   427,  4062,  1010,  1010,   761,   981,   982,
    4062,  1021,  1029,  -621,   145,   764,   274,  1029,  -621,  6369,
    1027,   923,  3848,   583,  -621,  1036,  -621,  -621,  6369,   647,
    1045,  -621,   992,  1000,   922,   772,  -621,   860,  -621,   860,
     -57,   -39,  -621,  -621,  -621,  -621,  -621,  -621,   754,   754,
    -621,  2918,   375,   648,  -621,  1004,  1002,  -621,   394,  6369,
    1012,  1014,  1017,  1028,  1066,  -621,     2,  1006,  -621,  -621,
    -621,  -621,  -621,  -621,  -621,   662,  3578,   662,  3578,  -621,
    -621,  -621,  1101,  -621,  -621,  -621,  -621,  1102,  -621,  -621,
    1103,  -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,
    -621,  -621,  1104,  -621,  -621,  3578,  3578,  -621,  3578,  -621,
     652,   376,   653,   323,  -621,  3578,  -621,  -621,  -621,   145,
    -621,  4062,  4062,  -621,   427,  -621,  -621,  -621,  -621,  -621,
     668,   427,   427,  4062,   307,   292,  3578,   310,  -621,  4062,
     145,  -621,   164,  1029,  -621,   334,  -621,  3578,  3578,  -621,
     583,  -621,   378,  1049,  1928,  1928,   339,  1188,  3188,   257,
    -621,   257,  3578,  3578,  3578,  3578,   860,   860,  -621,  1052,
     656,  -621,  3248,   401,  -621,   411,  -621,  -621,    70,    81,
      65,    88,    96,  -621,  1056,  -621,  -621,  6129,  -621,  6169,
     828,  1059,  1070,  1071,  6209,  6249,  6289,   379,   657,  1029,
    -621,   145,  1074,  -621,  -621,  -621,  -621,  3578,  -621,  -621,
    -621,  1072,  1029,  -621,  4849,  1029,  -621,   873,  -621,  1134,
    -621,   864,  1135,  1090,  -621,   334,  -621,  -621,  6369,   661,
    1138,  -621,  -621,   145,   145,  -621,   865,  -621,  -621,  4407,
    4507,  4594,  4637,   257,   257,  -621,  3518,   412,  -621,  1080,
    -621,  -621,  -621,  -621,   517,   521,   996,   524,   525,   997,
     908,   915,   533,  1039,   536,   537,  1042,   540,   545,  1043,
    -621,   662,   662,  3578,  -621,  -621,  -621,  -621,  -621,  -621,
     727,  1150,   145,  -621,   911,  6369,  1199,  -621,  1199,  -621,
    3578,  1165,  1201,  1019,  1148,  -621,  1207,  1151,  -621,  -621,
     222,  1073,  1075,  1076,  1077,  1078,  1079,  1081,  1082,  -621,
    -621,  -621,  1153,  -621,  -621,  -621,  -621,  -621,  -621,  -621,
    -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,
    -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,
    -621,  -621,  -621,  6329,  1210,  1151,  -621,   976,  1158,  1174,
    1175,  6369,  1222,  -621,  1223,  1225,  1169,  -621,  -621,   387,
    -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,  -621,
    1169,  -621,   357,   145,   145,  -621,  -621,   939,  -621,  -621,
    1170,   380,  1172,  1173,  1228,   358,  1176,  -621,  -621,  1181,
    1182,  1233,  -621,   421,  1183,  1184
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     5,   124,    75,     0,     0,     3,     7,
       9,     8,    68,    31,    93,    67,     0,   119,   115,   116,
      68,     0,     0,   125,   126,    75,     0,     0,     1,     2,
       4,     6,   124,   124,   124,     0,    85,    94,    75,    93,
       0,     0,   120,     0,    33,    32,     0,    80,    82,     0,
      76,     0,   178,   166,   166,     0,     0,     0,     0,     0,
      36,     0,    85,   122,     0,     0,   117,   213,   230,   231,
     233,   232,   234,   235,   240,     0,     0,     0,     0,     0,
     132,     0,   293,   311,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     324,     0,   323,     0,   320,     0,     0,     0,     0,     0,
       0,     0,     0,   310,     0,     0,     0,     0,   245,    73,
     127,   239,   241,   247,   257,   129,   243,   244,   302,   303,
     301,   300,   258,     0,     0,    78,     0,     0,     0,     0,
      70,    72,    71,    95,   107,   110,    86,     0,    34,   166,
     166,    36,     0,   121,   118,     0,     0,     0,     0,   278,
     248,   249,   245,     0,   211,   294,     0,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   238,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,   447,   448,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,    81,    77,     0,   179,     0,     0,
       0,     0,     0,    96,     0,   111,   112,   109,     0,     0,
       0,    35,   123,   391,     0,   214,   215,     0,   393,     0,
     392,     0,   242,     0,     0,   298,   295,     0,   395,     0,
       0,   394,     0,     0,     0,     0,     0,   413,     0,     0,
       0,     0,     0,   444,   445,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   449,   485,
     464,   470,   455,     0,   458,   462,   451,   472,   452,   477,
     488,   459,   474,   468,   466,   450,   460,   480,   483,   469,
     461,   478,     0,   317,   316,     0,     0,     0,     0,     0,
       0,     0,    74,     0,    87,   128,   250,   251,   252,   253,
     254,   256,   255,   259,   270,   271,   272,   273,   274,   275,
     276,   277,   269,   268,     0,     0,     0,   260,   261,   262,
     264,   263,   265,   289,   266,     0,     0,   290,   287,   281,
     279,   283,     0,   131,    79,     0,   181,     0,   174,     0,
       0,   168,   171,   173,    22,    19,    21,    22,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,    61,     0,    65,     0,
       0,    38,     0,     0,   401,     0,     0,     0,     0,   403,
     402,   212,     0,     0,     0,   296,   308,   405,   304,   404,
     382,   383,   384,     0,     0,     0,     0,     0,   414,     0,
     415,   411,     0,   412,   355,     0,   351,     0,   339,     0,
     347,     0,   343,     0,   335,     0,   331,     0,     0,     0,
       0,     0,     0,   373,   372,     0,   369,   365,     0,   363,
     359,     0,   370,     0,   327,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   319,     0,     0,     0,     0,     0,     0,   309,     0,
     178,   151,     0,   176,    90,   133,   135,   176,   155,   136,
     148,     0,    91,   267,     0,   288,     0,     0,   282,   280,
     284,   180,     0,     0,   185,     0,     0,   172,   167,     0,
     170,     0,    89,     0,    89,    97,    98,    50,    51,    41,
      45,    47,    43,    40,    46,    44,    42,     0,    48,    49,
      53,    54,     0,     0,    59,    60,    63,    64,    66,    37,
       0,    22,    22,   390,     0,   216,   217,     0,     0,     0,
       0,     0,   299,   292,   385,   417,     0,     0,     0,   416,
     418,     0,   407,   354,   357,   350,   353,   338,   341,   346,
     349,   342,   345,   334,   337,   330,   333,   379,     0,   375,
     376,     0,   374,   368,   364,   367,   362,   358,   361,   371,
     326,   329,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,     0,
       0,   150,     0,   176,     0,     0,   136,     0,   177,   142,
     176,     0,   209,   204,     0,   209,   209,     0,     0,     0,
       0,     0,     0,   145,   176,     0,   166,     0,   147,    88,
       0,   113,     0,   285,   291,     0,   184,   183,   175,     0,
       0,   169,     0,     0,    23,    26,    30,    87,    20,    87,
       0,     0,    62,    56,    55,    58,    57,    39,    89,    89,
     400,     0,     0,     0,   389,     0,   220,   221,     0,   297,
       0,     0,     0,     0,     0,   410,     0,     0,   356,   352,
     340,   348,   344,   336,   332,     0,     0,     0,     0,   366,
     360,   328,     0,   321,   325,   484,   454,     0,   463,   457,
       0,   471,   475,   476,   486,   487,   473,   467,   465,   479,
     481,   482,     0,   315,   314,     0,     0,   306,     0,   305,
     179,     0,     0,   176,   149,     0,   163,   162,   186,   176,
     141,     0,     0,   210,   204,   205,   206,   207,   208,   203,
       0,   204,   204,     0,     0,   194,     0,   197,   134,     0,
     176,   144,     0,     0,   137,   166,   146,     0,     0,    69,
     286,   182,     0,     0,     0,     0,     0,     0,     0,    36,
      14,    36,     0,     0,     0,     0,    87,    87,   388,     0,
     218,   219,     0,     0,   399,     0,   228,   229,     0,     0,
       0,     0,     0,   409,     0,   408,   380,     0,   377,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,     0,
     154,   176,     0,   140,   189,   190,   200,     0,   201,   202,
     191,     0,     0,   193,     0,     0,   196,     0,   143,     0,
     161,     0,     0,     0,   156,   166,   139,    92,   114,     0,
       0,    28,    29,   119,   119,    27,     0,    13,    12,     0,
       0,     0,     0,    36,    36,   398,     0,     0,   387,     0,
     226,   227,   224,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     406,     0,     0,     0,   453,   456,   318,   313,   312,   307,
     180,     0,   176,   153,   164,   188,     0,   192,     0,   195,
       0,     0,     0,     0,     0,   138,     0,     0,    25,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      10,   386,     0,   222,   223,   397,   425,   440,   420,   435,
     430,   428,   443,   423,   438,   433,   424,   439,   419,   434,
     429,   427,   442,   422,   437,   432,   426,   441,   421,   436,
     431,   381,   378,     0,     0,   184,   152,     0,   213,     0,
       0,   187,     0,   157,     0,     0,     0,    17,    18,     0,
      99,   101,   100,   102,   103,   105,   104,   106,   396,   322,
     182,   165,     0,     0,     0,   159,   158,     0,    15,    16,
     214,     0,     0,     0,     0,     0,     0,   198,   199,     0,
     216,     0,   160,     0,     0,   218
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -621,  -621,  1229,  -621,  -621,  -621,  -620,  -245,  -621,  -374,
     397,  -621,  -621,     3,    79,  -155,   638,  -621,   452,  -621,
    -621,    36,  -621,  -621,  1186,   876,  -518,  -621,  1212,  -176,
    -621,  1007,  -621,  -621,  -621,   419,  1209,  -621,  -443,   -17,
    1091,   610,  1035,  -524,   555,  -532,  -621,  -621,  -621,  -621,
    -621,   219,   -52,  -398,  -621,   838,  -478,   -13,   716,  -621,
    -621,  -621,  -336,  -103,  -150,  -187,  -621,  -621,   -44,   -45,
     863,  -621,  -621,   984,  -621,  -621,  -178,   436,  -621,  -621,
    -621,  -198,  -294,   975,   389,  -456,  1020,  -203
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,   849,   424,   425,   572,
     724,   725,    11,   128,    21,   158,   450,   451,    14,    15,
     218,    27,    50,    51,    60,   850,   374,   711,    36,    37,
     263,   153,   154,   267,   839,    22,    18,    19,    41,   688,
      64,    25,   129,   130,   544,   545,   546,   706,   914,   547,
     685,   806,   148,   420,   421,   422,   689,   548,   549,   825,
     827,   701,   819,   814,   173,   131,   132,   133,   134,   174,
     408,   136,   176,   285,   286,   464,   137,   138,   139,   140,
     141,   142,   302,   478,   306,   690,   253,   362
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   135,   149,    12,   143,    20,   271,   482,   301,   369,
     684,    12,   660,   155,    54,   274,   427,   279,   281,    12,
     662,   577,   668,   570,   531,    12,   811,   776,   289,   292,
       1,     2,   169,     2,   170,   171,   779,   175,   481,   474,
     691,   692,   693,   694,   695,   322,   696,   726,   160,   697,
     698,   699,   616,   574,   727,   852,   729,    23,    12,    12,
      12,    46,   581,   370,   873,   227,   228,   584,   164,   703,
     950,   582,   678,   854,    61,   944,   585,   257,    17,    13,
     853,   423,    26,   475,   172,   681,   947,    13,   177,    24,
     578,   704,   229,   954,   708,   470,   471,   472,   855,   596,
     597,   957,    32,    33,    34,   678,   678,   269,   270,   851,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   679,   461,     4,   298,     4,   258,   296,   680,
     305,   307,   309,   311,   313,   315,   317,   319,   320,   321,
      29,   323,   324,   326,   329,   331,   333,   335,   336,   337,
     951,   298,   820,    40,    40,   583,    47,   297,    48,   371,
      28,   721,   687,   702,   135,   755,   376,   377,   378,   379,
     380,   381,   382,    31,   416,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   550,   397,   398,   399,   400,
     401,   402,   403,   404,   372,   405,    40,   601,   602,   300,
       1,     2,   810,   909,     3,   426,   426,   428,    35,   155,
     856,   857,    49,    43,   804,  1047,   831,   738,   739,    44,
       2,   809,   910,  1048,   911,   300,   933,   934,    45,   462,
      52,   423,    58,   423,   417,    59,   830,    35,    53,    63,
     835,   836,   661,   407,   532,    35,   557,   777,    65,   275,
     663,   485,   669,   487,   298,   489,   780,   491,   476,   493,
     477,   495,   298,   497,   678,   614,    52,   678,   912,   894,
     895,   617,   508,   618,   159,   511,   623,   513,   625,   515,
     627,   900,   629,   812,   631,   678,   633,   907,   635,   952,
     637,   953,   639,   640,   945,   604,   946,   642,   643,   644,
     276,   646,   647,   678,     4,   948,   650,   949,   700,   277,
     921,   922,   955,   726,   956,   890,   678,   757,   728,   621,
     958,   893,   959,     4,   147,   605,   676,   299,   300,  1049,
       5,   707,    52,   678,   833,   746,   300,   891,   -83,   553,
     923,   554,   908,   -68,   -68,   -68,   457,   561,   418,    38,
    1070,  1080,   902,   719,   550,   800,   -68,   -68,   -68,   903,
     145,   906,   283,    75,   144,    76,   543,   915,   860,   888,
     905,   919,   970,  1076,    40,   165,   606,   166,   146,    44,
    1068,   423,   -68,   889,   147,   607,   747,   866,  1069,   407,
     157,    40,    44,   162,   940,   -68,   156,   426,   426,   172,
     687,   276,   606,   973,   942,  1003,   458,   562,   612,    16,
    1071,  1081,     2,   720,  1085,   801,   758,    16,   759,   861,
     760,   163,   761,   972,   762,   215,   763,   216,   764,   417,
     217,   920,   971,   458,    83,   756,   977,   769,   867,   979,
     770,   913,   167,   771,   638,   941,   168,   641,   745,   565,
     178,   409,   874,   410,   411,   943,  1004,   179,    39,   -68,
     -68,   180,   653,   654,    39,   861,   181,   165,   896,   566,
     988,   989,   -68,   -68,   182,   898,   899,   183,   671,   672,
     673,   674,   675,   419,  1036,   412,   222,   223,   224,   225,
     226,   803,   248,   249,   250,   251,   709,   150,   151,   152,
     184,   558,   713,   559,   560,   219,   550,   556,   185,   455,
     718,   456,   550,   608,   712,   609,   135,   165,   426,   677,
     220,   221,   222,   223,   224,   225,   226,   220,   221,   222,
     223,   224,   225,   226,   186,   683,    93,    94,    95,    96,
      97,    98,    99,   249,   250,   251,   103,   104,   187,   106,
     107,   108,   109,   394,   395,   396,   749,   876,   188,   878,
     247,   248,   249,   250,   251,   308,   310,   312,   314,   316,
     318,    86,    87,    88,    89,    90,    91,   327,   330,   332,
     334,   859,   821,   822,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   815,   816,
     817,   818,   189,   550,   550,   220,   221,   222,   223,   224,
     225,   226,    55,    56,    57,   550,   733,   569,   734,   190,
     735,   550,   736,   191,   834,   892,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   840,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   691,   692,   693,   694,   695,   917,   696,   897,
     192,   697,   698,   699,   927,   193,   928,   543,   741,   750,
     742,   751,   752,   543,   753,   194,   256,   229,   455,   862,
     842,   863,   939,   455,   165,   887,   566,   936,   608,   937,
     563,   877,   741,   879,   986,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   338,   339,   195,
     884,   885,  1006,   886,  1007,   196,  1008,   498,  1009,  1011,
    1013,  1012,  1014,  1031,  1032,   197,   340,   341,  1018,   342,
    1019,  1021,  1023,  1022,  1024,  1026,   198,  1027,   999,  1000,
    1028,   904,  1029,   916,   199,   200,  1002,   343,   741,  1039,
    1034,  1040,   201,   918,   202,   203,   204,   205,   206,   135,
     135,   207,   135,   709,   208,   209,   210,   929,   930,   931,
     932,   211,   212,   344,   543,   543,   213,   214,   691,   692,
     693,   694,   695,   259,   696,   345,   543,   697,   698,   699,
     260,   255,   543,   924,    67,    68,    69,    70,    71,    72,
     261,    73,    74,   346,    34,   262,   264,   268,   365,    75,
     282,    76,   975,   284,   293,   294,   295,   347,   363,   348,
     364,   366,   367,   985,   368,    52,   349,   350,   373,   383,
     406,    77,   414,   -84,   415,   452,   453,   454,   463,   459,
     460,   466,   467,    78,    79,   325,   468,   691,   692,   693,
     694,   695,    81,   696,   980,   469,   697,   698,   699,   303,
      92,   483,   479,   503,   506,   509,    42,    42,   519,   520,
      82,   521,   522,   523,   524,   525,   526,   527,  1033,   533,
      83,    67,    68,    69,    70,    71,    72,    84,    73,    74,
     528,   304,   529,   530,   534,  1041,    75,   538,    76,   226,
      85,   551,   535,   536,   564,   563,   537,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,    77,   568,
     571,   573,   580,   586,   579,   587,   588,   589,   592,   593,
      78,    79,   328,   590,   591,   594,   595,   598,   599,    81,
     610,   600,   613,   615,   619,   620,   303,   499,   652,   622,
     655,   656,   657,   658,   659,   664,   665,    82,   666,   667,
     670,   705,   714,   710,   716,   715,   717,    83,   732,   730,
     731,   740,   743,   748,    84,   754,   775,   772,   304,   778,
     781,   782,   783,   784,   792,   785,   430,    85,   786,   787,
     788,   789,   678,   813,   790,   791,   799,   805,   829,   841,
     807,   808,   824,   826,   838,   823,  1072,  1073,   843,   832,
     846,   868,   431,   869,   848,   844,   870,    86,    87,    88,
      89,    90,    91,   845,   847,   865,   864,   871,   875,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   837,   872,   880,   881,   882,   883,
     608,   432,   433,   434,   935,   435,   436,   437,   960,   438,
     963,   964,   439,   440,   127,   441,   442,   443,   444,   445,
     446,   447,   965,   966,   448,   449,   974,   976,   981,   983,
     984,   987,  1005,  1016,    86,    87,    88,    89,    90,    91,
     982,   990,  1017,  1035,  1010,  1015,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    67,    68,    69,    70,    71,    72,  1020,    73,    74,
    1025,  1030,  1038,  1037,  1042,  1043,    75,  1044,    76,  1045,
    1046,   127,   862,  1060,  1050,  1058,  1051,  1052,  1053,  1054,
    1055,  1062,  1056,  1057,  1063,  1064,  1065,  1066,    77,  1067,
     936,  1074,  1079,  1075,  1077,  1078,  1084,    30,   737,   609,
      78,    79,    80,  1082,   925,  1083,   863,   937,   161,    81,
     552,    62,    66,   272,   375,   828,  1061,   567,   686,   555,
     901,    67,    68,    69,    70,    71,    72,    82,    73,    74,
     465,   429,   413,     0,     0,   480,    75,    83,    76,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     1,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
     229,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     501,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     4,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   722,   723,     0,
       0,   127,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,   287,     0,     0,     0,     0,     0,     0,    81,
     288,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,    82,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,    77,     0,
     502,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      78,    79,   290,     0,     0,     0,     0,     0,     0,    81,
     291,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
     229,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     765,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,   127,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,     0,     0,   303,     0,     0,     0,
       0,    67,    68,    69,    70,    71,    72,    82,    73,    74,
       0,     0,     0,     0,     0,     0,    75,    83,    76,     0,
       0,     0,     0,     0,    84,     0,     0,     0,   304,     0,
     766,     0,     0,     0,     0,     0,     0,    85,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,    80,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
     229,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     767,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
     273,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,    82,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,    77,     0,
     768,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
     278,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
     229,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     797,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,   127,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
     280,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,    82,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,    77,     0,
     798,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
     603,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
     229,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,   127,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
     744,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,    82,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,    77,     0,
     516,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
     858,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
     229,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,   127,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
       0,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,    82,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,    77,     0,
     517,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
     938,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
     229,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,   926,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,   127,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
    1001,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,    82,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,    77,     0,
     518,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
     229,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,   127,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    67,    68,    69,    70,    71,    72,   229,    73,    74,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,   127,     0,     0,     0,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,     0,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,     0,     0,
     795,     0,     0,     0,     0,     0,     0,    85,     0,     0,
     540,   229,     0,     0,     0,     0,     0,     0,   541,     0,
       0,     0,     0,     0,     0,    75,     0,    76,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,     0,     0,   229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   542,     0,
       0,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   540,     0,     0,     0,     0,
       0,     0,     0,   541,    86,    87,    88,    89,    90,    91,
      75,     0,    76,     0,     0,     0,     0,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     4,     0,   542,     0,     0,     0,     0,     0,     0,
     611,     0,     0,     0,     0,     0,     0,   796,     0,     0,
       0,   127,     0,     0,   418,     0,     0,     0,   682,   575,
     576,    83,     0,     0,     0,     0,     0,     0,     0,    75,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,     0,
       0,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   418,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,    76,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   419,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    83,   802,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,     0,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,     0,     0,     0,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,     0,     0,     0,     0,   229,
       0,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,     0,     0,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,    86,
      87,    88,    89,    90,    91,   991,   992,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,     0,     0,     0,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   993,   994,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,     0,   995,   996,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     227,   228,     0,     0,     0,   266,     0,     0,     0,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   997,   998,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,     0,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   539,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   978,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   254,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   473,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   484,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   486,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   488,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   490,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   492,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   494,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   496,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   500,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   504,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   505,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   507,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   510,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   512,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   514,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   624,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   626,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   628,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   630,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   632,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   634,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   636,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   645,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   648,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   649,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   651,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   773,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   774,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   793,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   794,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   961,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   962,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   967,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   968,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   969,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1059,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251
};

static const yytype_int16 yycheck[] =
{
      17,    46,    54,     0,    49,     2,   161,   301,   184,   212,
     542,     8,     5,    58,    27,   165,   261,   167,   168,    16,
       5,   142,     5,   421,    62,    22,    17,    62,   178,   179,
      60,    61,    77,    61,    78,    79,    62,    82,    62,     5,
      14,    15,    16,    17,    18,   195,    20,   571,    61,    23,
      24,    25,     5,   427,   572,   112,   574,    68,    55,    56,
      57,    25,    17,   213,    62,     3,     4,    17,    65,   547,
       5,    26,     3,   112,    38,     5,    26,     3,     3,     0,
     137,   259,   189,    49,    81,   541,     5,     8,    85,   100,
     211,   547,    12,     5,   550,   293,   294,   295,   137,   222,
     223,     5,    26,    27,    28,     3,     3,   159,   160,   729,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    63,   283,   164,   159,   164,    63,   183,    70,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     106,   196,   197,   198,   199,   200,   201,   202,   203,   204,
      95,   159,   694,    61,    61,   120,     5,    62,     7,   214,
       0,   569,    70,    70,   219,    62,   220,   221,   222,   223,
     224,   225,   226,    64,     3,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   373,   241,   242,   243,   244,
     245,   246,   247,   248,   217,   249,    61,   452,   453,   233,
      60,    61,   690,    49,    64,   260,   261,   262,   142,   264,
     738,   739,    61,   292,   680,     3,   704,   601,   602,    62,
      61,   687,    68,    11,    70,   233,   856,   857,    62,   284,
       3,   419,    77,   421,    63,    65,   702,   142,    11,     3,
     706,   707,   245,   250,   292,   142,   406,   292,    70,     3,
     245,   306,   245,   308,   159,   310,   292,   312,   234,   314,
     236,   316,   159,   318,     3,   473,     3,     3,   114,   811,
     812,   234,   327,   236,    11,   330,   484,   332,   486,   334,
     488,   823,   490,   284,   492,     3,   494,   829,   496,   234,
     498,   236,   500,   501,   234,   455,   236,   505,   506,   507,
      54,   509,   510,     3,   164,   234,   514,   236,   292,    63,
     844,   845,   234,   847,   236,   803,     3,   621,   573,   479,
     234,   809,   236,   164,    60,     3,   539,   232,   233,   117,
     190,    70,     3,     3,    70,     3,   233,   803,   145,   394,
      11,   395,   830,    26,    27,    28,     3,     3,     3,   190,
       3,     3,    70,     3,   542,     3,    26,    27,    28,   825,
     145,   827,   292,    18,    60,    20,   373,   833,     3,     3,
      70,     3,     3,     3,    61,    61,    54,    63,    63,    62,
       3,   569,    65,    70,    60,    63,    54,     3,    11,   396,
     143,    61,    62,   292,     3,    65,    76,   452,   453,   406,
      70,    54,    54,   891,     3,     3,    63,    63,   463,     0,
      63,    63,    61,    63,     3,    63,   624,     8,   626,    54,
     628,    62,   630,   889,   632,     5,   634,     7,   636,    63,
     128,    63,    63,    63,    89,   621,   902,   645,    54,   905,
     648,   287,    61,   651,   499,    54,    61,   502,   608,    43,
      61,     6,   756,     8,     9,    54,    54,    61,    16,   142,
     143,    61,   517,   518,    22,    54,    61,    61,   814,    63,
     923,   924,   142,   143,    61,   821,   822,    61,   533,   534,
     535,   536,   537,   138,   972,    40,    54,    55,    56,    57,
      58,   679,    48,    49,    50,    51,   551,    55,    56,    57,
      61,     6,   556,     8,     9,   292,   694,    39,    61,    61,
     565,    63,   700,    61,    39,    63,   571,    61,   573,    63,
      52,    53,    54,    55,    56,    57,    58,    52,    53,    54,
      55,    56,    57,    58,    61,   542,   239,   240,   241,   242,
     243,   244,   245,    49,    50,    51,   249,   250,    61,   252,
     253,   254,   255,    48,    49,    50,   611,   765,    61,   767,
      47,    48,    49,    50,    51,   186,   187,   188,   189,   190,
     191,   226,   227,   228,   229,   230,   231,   198,   199,   200,
     201,   741,   695,   696,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   201,   202,
     203,   204,    61,   811,   812,    52,    53,    54,    55,    56,
      57,    58,    32,    33,    34,   823,     5,   292,     7,    61,
       5,   829,     7,    61,   706,   805,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   712,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    14,    15,    16,    17,    18,   837,    20,    21,
      61,    23,    24,    25,   849,    61,   851,   694,    61,   235,
      63,   237,   235,   700,   237,    61,    60,    12,    61,    61,
      63,    63,   862,    61,    61,    63,    63,    61,    61,    63,
      63,   766,    61,   768,    63,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    73,    74,    61,
     795,   796,   235,   798,   237,    61,   235,    62,   237,   235,
     235,   237,   237,   961,   962,    61,    92,    93,   235,    95,
     237,   235,   235,   237,   237,   235,    61,   237,   933,   934,
     235,   826,   237,   835,    61,    61,   936,   113,    61,   976,
      63,   978,    61,   838,    61,    61,    61,    61,    61,   844,
     845,    61,   847,   848,    61,    61,    61,   852,   853,   854,
     855,    61,    61,   139,   811,   812,    61,    61,    14,    15,
      16,    17,    18,    61,    20,   151,   823,    23,    24,    25,
     167,   182,   829,   846,     3,     4,     5,     6,     7,     8,
     167,    10,    11,   169,    28,   140,   292,    61,     3,    18,
      62,    20,   897,   195,    62,    62,    62,   183,    62,   185,
      62,     3,     3,   915,     3,     3,   192,   193,   114,     3,
      61,    40,   182,   145,    63,   167,   167,    62,   104,    62,
      62,    62,    62,    52,    53,    54,    62,    14,    15,    16,
      17,    18,    61,    20,    21,    62,    23,    24,    25,    68,
     238,    62,    77,    62,    62,    62,   923,   924,    61,    61,
      79,    61,    61,    61,    61,    61,    61,    61,   963,   292,
      89,     3,     4,     5,     6,     7,     8,    96,    10,    11,
      61,   100,    61,    61,   292,   980,    18,    62,    20,    58,
     109,   194,   292,   292,     3,    63,   292,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,    40,    62,
     288,   292,    17,    26,   120,    65,   208,     5,    43,    43,
      52,    53,    54,   214,   214,     5,     5,   214,    62,    61,
       3,   292,   105,   235,   235,   158,    68,   292,     5,    62,
       5,     5,     5,     5,     5,     5,     5,    79,     5,     5,
       5,    65,    62,   120,     3,    63,     3,    89,     9,   111,
     111,    62,     3,    63,    96,   158,    62,   292,   100,    62,
      62,    62,    62,    62,   292,    62,   116,   109,    62,    62,
      62,    62,     3,    23,    62,    62,    62,    61,    17,     3,
      62,    62,    61,    61,   121,   284,  1063,  1064,     3,   285,
     128,    39,   142,    39,   194,    63,    39,   226,   227,   228,
     229,   230,   231,    63,   292,    63,    62,    39,    62,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    77,    39,     5,     5,     5,     5,
      61,   201,   202,   203,    62,   205,   206,   207,    62,   209,
     292,    62,   212,   213,   293,   215,   216,   217,   218,   219,
     220,   221,    62,    62,   224,   225,    62,    65,     4,     4,
      50,     3,    62,   235,   226,   227,   228,   229,   230,   231,
     286,   286,   237,     3,   158,   158,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,   158,    10,    11,
     158,   158,     3,   292,    39,     4,    18,   188,    20,    61,
       3,   293,    61,     3,   141,    62,   141,   141,   141,   141,
     141,    63,   141,   141,    50,    50,     4,     4,    40,     4,
      61,   292,     4,    63,    62,    62,     3,     8,   600,    63,
      52,    53,    54,    62,   847,    63,    63,    63,    62,    61,
     374,    39,    43,   162,   219,   700,  1037,   419,   542,   396,
     824,     3,     4,     5,     6,     7,     8,    79,    10,    11,
     286,   264,   252,    -1,    -1,   300,    18,    89,    20,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,   164,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,   290,    -1,
      -1,   293,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,    -1,
     292,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,   293,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    79,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    89,    20,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,   100,    -1,
     292,    -1,    -1,    -1,    -1,    -1,    -1,   109,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,    -1,
     292,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,   293,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,    -1,
     292,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,   293,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,    -1,
     292,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,   293,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,    -1,
     292,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,    -1,   236,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,   293,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,    -1,
     292,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,   293,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,    12,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,   293,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
       3,    12,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,   226,   227,   228,   229,   230,   231,
      18,    -1,    20,    -1,    -1,    -1,    -1,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   164,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,   293,    -1,    -1,     3,    -1,    -1,    -1,   191,   158,
     159,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,   228,   229,   230,   231,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
     228,   229,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    89,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,
     229,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,   227,   228,   229,   230,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   226,
     227,   228,   229,   230,   231,   158,   159,    -1,    -1,    -1,
      -1,    -1,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,   159,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    -1,   158,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    98,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   158,   159,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    60,    61,    64,   164,   190,   295,   296,   297,   298,
     299,   306,   307,   308,   312,   313,   329,     3,   330,   331,
     307,   308,   329,    68,   100,   335,   189,   315,     0,   106,
     296,    64,    26,    27,    28,   142,   322,   323,   190,   312,
      61,   332,   333,   292,    62,    62,   315,     5,     7,    61,
     316,   317,     3,    11,   351,   335,   335,   335,    77,    65,
     318,   315,   322,     3,   334,    70,   330,     3,     4,     5,
       6,     7,     8,    10,    11,    18,    20,    40,    52,    53,
      54,    61,    79,    89,    96,   109,   226,   227,   228,   229,
     230,   231,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   293,   307,   336,
     337,   359,   360,   361,   362,   363,   365,   370,   371,   372,
     373,   374,   375,   363,    60,   145,    63,    60,   346,   346,
     312,   312,   312,   325,   326,   363,    76,   143,   309,    11,
     351,   318,   292,    62,   307,    61,    63,    61,    61,   363,
     362,   362,   307,   358,   363,   363,   366,   307,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,     5,     7,   128,   314,   292,
      52,    53,    54,    55,    56,    57,    58,     3,     4,    12,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    70,   380,    62,   182,    60,     3,    63,    61,
     167,   167,   140,   324,   292,    71,    98,   327,    61,   346,
     346,   309,   334,    62,   358,     3,    54,    63,    62,   358,
      62,   358,    62,   292,   195,   367,   368,    54,    62,   358,
      54,    62,   358,    62,    62,    62,   363,    62,   159,   232,
     233,   323,   376,    68,   100,   363,   378,   363,   378,   363,
     378,   363,   378,   363,   378,   363,   378,   363,   378,   363,
     363,   363,   358,   363,   363,    54,   363,   378,    54,   363,
     378,   363,   378,   363,   378,   363,   363,   363,    73,    74,
      92,    93,    95,   113,   139,   151,   169,   183,   185,   192,
     193,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   381,    62,    62,     3,     3,     3,     3,   381,
     358,   363,   351,   114,   320,   336,   362,   362,   362,   362,
     362,   362,   362,     3,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,    48,    49,    50,   363,   363,   363,
     363,   363,   363,   363,   363,   362,    61,   307,   364,     6,
       8,     9,    40,   380,   182,    63,     3,    63,     3,   138,
     347,   348,   349,   370,   301,   302,   363,   301,   363,   325,
     116,   142,   201,   202,   203,   205,   206,   207,   209,   212,
     213,   215,   216,   217,   218,   219,   220,   221,   224,   225,
     310,   311,   167,   167,    62,    61,    63,     3,    63,    62,
      62,   358,   363,   104,   369,   367,    62,    62,    62,    62,
     375,   375,   375,    62,     5,    49,   234,   236,   377,    77,
     377,    62,   376,    62,    62,   363,    62,   363,    62,   363,
      62,   363,    62,   363,    62,   363,    62,   363,    62,   292,
      62,    62,   292,    62,    62,    62,    62,    62,   363,    62,
      62,   363,    62,   363,    62,   363,   292,   292,   292,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,   292,   292,   292,   292,   292,   292,    62,    70,
       3,    11,    61,   307,   338,   339,   340,   343,   351,   352,
     370,   194,   319,   363,   362,   364,    39,   358,     6,     8,
       9,     3,    63,    63,     3,    43,    63,   349,    62,   292,
     347,   288,   303,   292,   303,   158,   159,   142,   211,   120,
      17,    17,    26,   120,    17,    26,    26,    65,   208,     5,
     214,   214,    43,    43,     5,     5,   222,   223,   214,    62,
     292,   301,   301,    62,   358,     3,    54,    63,    61,    63,
       3,   181,   363,   105,   375,   235,     5,   234,   236,   235,
     158,   358,    62,   375,    62,   375,    62,   375,    62,   375,
      62,   375,    62,   375,    62,   375,    62,   375,   363,   375,
     375,   363,   375,   375,   375,    62,   375,   375,    62,    62,
     375,    62,     5,   363,   363,     5,     5,     5,     5,     5,
       5,   245,     5,   245,     5,     5,     5,     5,     5,   245,
       5,   363,   363,   363,   363,   363,   381,    63,     3,    63,
      70,   379,   191,   307,   339,   344,   352,    70,   333,   350,
     379,    14,    15,    16,    17,    18,    20,    23,    24,    25,
     292,   355,    70,   350,   379,    65,   341,    70,   379,   363,
     120,   321,    39,   362,    62,    63,     3,     3,   363,     3,
      63,   347,   289,   290,   304,   305,   337,   320,   301,   320,
     111,   111,     9,     5,     7,     5,     7,   310,   303,   303,
      62,    61,    63,     3,    62,   358,     3,    54,    63,   363,
     235,   237,   235,   237,   158,    62,   323,   376,   375,   375,
     375,   375,   375,   375,   375,    62,   292,    62,   292,   375,
     375,   375,   292,    62,    62,    62,    62,   292,    62,    62,
     292,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,   292,    62,    62,   292,   292,    62,   292,    62,
       3,    63,     3,   370,   379,    61,   345,    62,    62,   379,
     350,    17,   284,    23,   357,   201,   202,   203,   204,   356,
     339,   357,   357,   284,    61,   353,    61,   354,   338,    17,
     379,   350,   285,    70,   346,   379,   379,    77,   121,   328,
     362,     3,    63,     3,    63,    63,   128,   292,   194,   300,
     319,   300,   112,   137,   112,   137,   320,   320,    62,   358,
       3,    54,    61,    63,    62,    63,     3,    54,    39,    39,
      39,    39,    39,    62,   376,    62,   375,   363,   375,   363,
       5,     5,     5,     5,   363,   363,   363,    63,     3,    70,
     350,   379,   358,   350,   339,   339,   356,    21,   356,   356,
     339,   371,    70,   379,   363,    70,   379,   339,   350,    49,
      68,    70,   114,   287,   342,   379,   346,   358,   363,     3,
      63,   337,   337,    11,   351,   304,   236,   309,   309,   363,
     363,   363,   363,   300,   300,    62,    61,    63,    62,   358,
       3,    54,     3,    54,     5,   234,   236,     5,   234,   236,
       5,    95,   234,   236,     5,   234,   236,     5,   234,   236,
      62,    62,    62,   292,    62,    62,    62,    62,    62,    62,
       3,    63,   379,   350,    62,   363,    65,   379,    65,   379,
      21,     4,   286,     4,    50,   346,    63,     3,   332,   332,
     286,   158,   159,   158,   159,   158,   159,   158,   159,   309,
     309,    62,   358,     3,    54,    62,   235,   237,   235,   237,
     158,   235,   237,   235,   237,   158,   235,   237,   235,   237,
     158,   235,   237,   235,   237,   158,   235,   237,   235,   237,
     158,   375,   375,   363,    63,     3,   350,   292,     3,   359,
     359,   363,    39,     4,   188,    61,     3,     3,    11,   117,
     141,   141,   141,   141,   141,   141,   141,   141,    62,    62,
       3,   345,    63,    50,    50,     4,     4,     4,     3,    11,
       3,    63,   333,   333,   292,    63,     3,    62,    62,     4,
       3,    63,    62,    63,     3,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   294,   295,   296,   296,   297,   297,   297,   298,   298,
     299,   299,   299,   299,   300,   300,   300,   300,   300,   301,
     301,   302,   303,   303,   303,   303,   304,   304,   305,   305,
     305,   306,   307,   307,   308,   308,   309,   309,   310,   310,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   312,   312,   313,
     313,   313,   313,   314,   314,   315,   315,   315,   315,   315,
     316,   316,   317,   317,   317,   318,   318,   319,   319,   320,
     320,   321,   321,   322,   322,   323,   323,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   325,   325,   326,
     327,   327,   327,   328,   328,   329,   330,   330,   331,   332,
     332,   333,   334,   334,   335,   335,   335,   336,   336,   337,
     337,   337,   337,   338,   338,   339,   339,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   341,   341,   342,   342,   342,
     342,   342,   343,   344,   345,   345,   346,   346,   347,   347,
     347,   348,   348,   349,   349,   349,   350,   350,   351,   351,
     351,   351,   351,   351,   351,   351,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   353,   354,
     355,   355,   355,   355,   356,   356,   356,   356,   356,   357,
     357,   358,   358,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   361,
     361,   361,   361,   361,   361,   361,   361,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     364,   364,   365,   366,   366,   367,   367,   368,   369,   369,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   370,   370,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   372,   372,   372,   372,   372,   372,
     372,   372,   373,   373,   373,   373,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   375,   375,   375,   375,
     375,   375,   375,   375,   376,   376,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   378,   378,   379,   380,   380,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     1,     1,
      11,    11,    10,    10,     1,     5,     5,     4,     4,     1,
       3,     1,     0,     2,     5,     5,     1,     3,     3,     3,
       1,     1,     3,     3,     4,     5,     0,     4,     1,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     3,     3,     3,     3,     2,
       2,     1,     3,     2,     2,     1,     2,     1,     1,     9,
       4,     4,     4,     0,     2,     0,     2,     4,     3,     5,
       1,     3,     1,     1,     3,     0,     2,     0,     2,     0,
       2,     0,     3,     0,     1,     3,     4,     3,     3,     8,
       8,     8,     8,     8,     8,     8,     8,     1,     3,     2,
       0,     1,     1,     0,     2,     2,     1,     3,     4,     0,
       1,     3,     1,     3,     0,     1,     1,     1,     3,     1,
       2,     3,     1,     1,     3,     1,     1,     3,     5,     4,
       4,     3,     2,     4,     3,     2,     3,     2,     1,     3,
       2,     1,     6,     5,     4,     0,     3,     3,     4,     4,
       7,     1,     3,     2,     3,     5,     0,     4,     1,     3,
       2,     1,     2,     1,     1,     3,     0,     1,     1,     3,
       5,     4,     7,     6,     6,     5,     3,     6,     5,     4,
       4,     4,     5,     4,     3,     5,     4,     3,     7,     7,
       3,     3,     3,     2,     0,     1,     1,     1,     1,     0,
       1,     1,     3,     1,     3,     3,     5,     5,     7,     7,
       6,     6,     9,     9,     8,     8,     8,     8,     7,     7,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     3,     1,     1,     1,     2,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       4,     3,     4,     3,     4,     5,     6,     3,     4,     3,
       1,     3,     5,     0,     1,     1,     2,     4,     0,     2,
       1,     1,     1,     1,     4,     6,     6,     8,     4,     4,
       1,     1,     8,     8,     6,     6,     3,     3,     8,     4,
       1,     6,    10,     1,     1,     6,     5,     4,     6,     5,
       5,     4,     6,     5,     5,     4,     6,     5,     5,     4,
       6,     5,     5,     4,     6,     5,     5,     4,     6,     5,
       5,     4,     6,     5,     5,     4,     6,     5,     5,     4,
       6,     5,     5,     4,     5,     4,     6,     5,     5,     4,
       4,     5,     4,     4,     5,     5,     5,     7,     9,     5,
       7,     9,     4,     4,     4,     5,     9,     8,     7,     6,
       5,     3,     3,     3,     3,     3,    10,     9,     8,     7,
       6,     4,     4,     4,     4,     4,     8,     5,     7,     7,
       6,     4,     4,     3,     2,     2,     2,     2,     2,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     4,     1,     6,     4,     1,     1,
       1,     1,     1,     4,     1,     4,     1,     4,     1,     1,
       1,     4,     1,     4,     1,     4,     4,     1,     1,     4,
       1,     4,     4,     1,     4,     1,     4,     4,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParseResult* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParseResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParseResult* result, yyscan_t scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParseResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* NAME  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3248 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3254 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3260 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3266 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3272 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3278 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3284 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3290 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TEMP_VARIABLE  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3296 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 295: /* sql_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3302 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 296: /* stmt_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3308 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3314 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* dml_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3320 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* update_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3326 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* opt_update_where  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3332 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* update_elem_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3338 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* update_elem  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3344 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 303: /* opt_output_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3350 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 304: /* dml_select_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3356 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 305: /* dml_select_item  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3362 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 306: /* select_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3368 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 307: /* select_with_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3374 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 308: /* select_no_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3380 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 309: /* opt_option_query_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3386 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 310: /* query_hint_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3392 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 311: /* query_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3398 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 312: /* select_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3404 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 313: /* simple_select  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3410 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 314: /* opt_into_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3416 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 315: /* opt_top  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3422 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 316: /* top_count  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3428 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 317: /* top_percent  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3434 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 318: /* opt_for_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3440 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 319: /* opt_where  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3446 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 320: /* opt_from_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3452 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 321: /* opt_groupby  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3458 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 322: /* opt_order_by  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3464 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 323: /* order_by  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3470 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 324: /* offset_fetch  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3476 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 325: /* sort_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3482 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 326: /* sort_key  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3488 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 327: /* opt_asc_desc  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3494 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 328: /* opt_having  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3500 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 329: /* with_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3506 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 330: /* with_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3512 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 331: /* common_table_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3518 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 332: /* opt_derived_column_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3524 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 333: /* simple_ident_list_with_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3530 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 334: /* simple_ident_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3536 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 335: /* opt_distinct  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3542 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 336: /* select_expr_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3548 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 337: /* projection  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3554 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 338: /* from_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3560 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 339: /* table_factor  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3566 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 340: /* table_factor_non_join  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3572 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 341: /* opt_for_system_time  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3578 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 342: /* system_time  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3584 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 343: /* table_value_constructor_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3590 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 344: /* table_value_constructor  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3596 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 345: /* row_value_expression_list_parens_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3602 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 346: /* opt_with_table_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3608 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 347: /* table_hint_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3614 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 348: /* table_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3620 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 349: /* table_hint_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3626 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 350: /* opt_simple_ident_list_with_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3632 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 351: /* relation_factor  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3638 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 352: /* joined_table  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3644 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 353: /* pivot_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3650 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 354: /* unpivot_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3656 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 355: /* join_type  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3662 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 358: /* expr_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3668 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 359: /* column_ref  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3674 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 360: /* expr_const  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3680 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 361: /* simple_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3686 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 362: /* arith_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3692 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 363: /* expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3698 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 364: /* in_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3704 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 365: /* case_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3710 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 366: /* case_arg  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3716 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 367: /* when_clause_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3722 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 368: /* when_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3728 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 369: /* case_default  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3734 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 370: /* func_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3740 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 371: /* aggregate_windowed_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3746 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 372: /* analytic_windowed_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3752 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 373: /* ranking_windowed_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3758 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 374: /* scalar_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3764 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 375: /* over_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3770 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 376: /* row_or_range_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3776 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 377: /* window_frame_extent  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3782 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 378: /* distinct_or_all  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3788 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 379: /* relation_name  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3794 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 380: /* column_label  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3800 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 381: /* data_type  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3806 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (ParseResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 65 "./sqlparser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 3923 "sqlparser_bison.cpp" /* yacc.c:1429  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 227 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 4117 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 238 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 4126 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 249 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4132 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 264 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		(yyvsp[-10].node),	/* E_UPDATE_OPT_WITH 0 */
    		(yyvsp[-8].node),	/* E_UPDATE_OPT_TOP 1 */
    		(yyvsp[-7].node),	/* E_UPDATE_UPDATE_RELATION 2 */
    		(yyvsp[-6].node),	/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-4].node),	/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		(yyvsp[-3].node),	/* E_UPDATE_OPT_OUTPUT 5 */
    		(yyvsp[-2].node),	/* E_UPDATE_FROM_LIST 6 */
    		(yyvsp[-1].node),	/* E_UPDATE_OPT_WHERE 7 */
    		(yyvsp[0].node)	/* E_UPDATE_OPT_QUERY_HINT 8 */);
    (yyval.node)->serialize_format = &E_UPDATE_SERIALIZE_FORMAT;
}
#line 4150 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 280 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		(yyvsp[-10].node),	/* E_UPDATE_OPT_WITH 0 */
    		(yyvsp[-8].node),	/* E_UPDATE_OPT_TOP 1 */
    		(yyvsp[-7].node),	/* E_UPDATE_UPDATE_RELATION 2 */
    		(yyvsp[-6].node),	/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-4].node),	/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		(yyvsp[-3].node),	/* E_UPDATE_OPT_OUTPUT 5 */
    		(yyvsp[-2].node),	/* E_UPDATE_FROM_LIST 6 */
    		(yyvsp[-1].node),	/* E_UPDATE_OPT_WHERE 7 */
    		(yyvsp[0].node)	/* E_UPDATE_OPT_QUERY_HINT 8 */);
    (yyval.node)->serialize_format = &E_UPDATE_SERIALIZE_FORMAT;
}
#line 4168 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 296 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		nullptr,	/* E_UPDATE_OPT_WITH 0 */
    		(yyvsp[-8].node),		/* E_UPDATE_OPT_TOP 1 */
    		(yyvsp[-7].node),		/* E_UPDATE_UPDATE_RELATION 2 */
    		(yyvsp[-6].node),		/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-4].node),		/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		(yyvsp[-3].node),		/* E_UPDATE_OPT_OUTPUT 5 */
    		(yyvsp[-2].node),		/* E_UPDATE_FROM_LIST 6 */
    		(yyvsp[-1].node),		/* E_UPDATE_OPT_WHERE 7 */
    		(yyvsp[0].node)		/* E_UPDATE_OPT_QUERY_HINT 8 */);
    (yyval.node)->serialize_format = &E_UPDATE_SERIALIZE_FORMAT;
}
#line 4186 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 312 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		nullptr,	/* E_UPDATE_OPT_WITH 0 */
    		(yyvsp[-8].node),		/* E_UPDATE_OPT_TOP 1 */
    		(yyvsp[-7].node),		/* E_UPDATE_UPDATE_RELATION 2 */
    		(yyvsp[-6].node),		/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-4].node),		/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		(yyvsp[-3].node),		/* E_UPDATE_OPT_OUTPUT 5 */
    		(yyvsp[-2].node),		/* E_UPDATE_FROM_LIST 6 */
    		(yyvsp[-1].node),		/* E_UPDATE_OPT_WHERE 7 */
    		(yyvsp[0].node)		/* E_UPDATE_OPT_QUERY_HINT 8 */);
    (yyval.node)->serialize_format = &E_UPDATE_SERIALIZE_FORMAT;
}
#line 4204 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 330 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_GLO_SERIALIZE_FORMAT;
}
#line 4213 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 335 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_GLO_SERIALIZE_FORMAT;
}
#line 4222 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 340 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_SERIALIZE_FORMAT;
}
#line 4231 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 345 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_SERIALIZE_FORMAT;
}
#line 4240 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 354 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4249 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 362 "./sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_update_item((yyvsp[0].node)))
    {
        yyerror(&(yylsp[0]), result, scanner, "update element format error");
    	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4263 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 374 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4269 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 376 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, 3, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4278 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 381 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4287 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 386 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4296 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 395 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4305 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 403 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DELETED_DML_SELECT_ITEM_SERIALIZE_FORMAT;
}
#line 4314 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 408 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERTED_DML_SELECT_ITEM_SERIALIZE_FORMAT;
}
#line 4323 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 413 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4332 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 426 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4341 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 431 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4350 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 439 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 4361 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 446 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-4].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 4373 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 457 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4379 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 459 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPTION_CLAUSE, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OPTION_CLAUSE_SERIALIZE_FORMAT;
}
#line 4388 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 468 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_QUERY_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4397 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 476 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH GROUP"); }
#line 4403 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 477 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ORDER GROUP"); }
#line 4409 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 478 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("CONCAT UNION"); }
#line 4415 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 479 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH UNION"); }
#line 4421 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 480 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE UNION"); }
#line 4427 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 481 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("LOOP JOIN"); }
#line 4433 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 482 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE JOIN"); }
#line 4439 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 483 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH JOIN"); }
#line 4445 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 484 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("EXPAND VIEWS"); }
#line 4451 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 485 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FAST", (yyvsp[0].node)); }
#line 4457 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 486 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE ORDER"); }
#line 4463 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 487 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE EXTERNALPUSHDOWN"); }
#line 4469 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 488 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX"); }
#line 4475 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 489 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 4481 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 490 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 4487 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 491 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4493 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 492 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4499 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 493 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4505 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 494 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4511 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 495 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXDOP", (yyvsp[0].node)); }
#line 4517 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 496 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXRECURSION", (yyvsp[0].node)); }
#line 4523 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 497 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("NO_PERFORMANCE_SPOOL"); }
#line 4529 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 498 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("OPTIMIZE FOR", (yyvsp[0].node)); }
#line 4535 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 499 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION SIMPLE"); }
#line 4541 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 500 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION FORCED"); }
#line 4547 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 501 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("RECOMPILE"); }
#line 4553 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 502 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ROBUST PLAN"); }
#line 4559 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 513 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                    (yyvsp[-7].node),             /* E_SELECT_DISTINCT 0 */
                    (yyvsp[-5].node),             /* E_SELECT_SELECT_EXPR_LIST 1 */
                    (yyvsp[-3].node),             /* E_SELECT_FROM_LIST 2 */
                    (yyvsp[-2].node),             /* E_SELECT_OPT_WHERE 3 */
                    (yyvsp[-1].node),             /* E_SELECT_GROUP_BY 4 */
                    (yyvsp[0].node),             /* E_SELECT_HAVING 5 */
                    nullptr,        /* E_SELECT_SET_OPERATION 6 */
                    nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
                    nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
                    nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
                    nullptr,        /* E_SELECT_ORDER_BY 10 */
                    nullptr,        /* E_SELECT_LIMIT 11 */
                    nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                    nullptr,        /* E_SELECT_HINTS 13 */
                    nullptr,        /* E_SELECT_WHEN 14 */
                    (yyvsp[-6].node),             /* E_SELECT_OPT_TOP 15 */
                    nullptr,        /* E_SELECT_OPT_WITH 16 */
                    nullptr,        /* E_SELECT_OPT_OPTION 17 */
	            (yyvsp[-4].node)              /* E_SELECT_OPT_INTO 18 */
                    );
    (yyval.node)->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
#line 4588 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 538 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_UNION, "UNION");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        (yyvsp[-1].node),                  /* E_SELECT_ALL_SPECIFIED 7 */
                        (yyvsp[-3].node),                  /* E_SELECT_FORMER_SELECT_STMT 8 */
                        (yyvsp[0].node),                  /* E_SELECT_LATER_SELECT_STMT 9 */
                        nullptr,             /* E_SELECT_ORDER_BY 10 */
                        nullptr,             /* E_SELECT_LIMIT 11 */
                        nullptr,             /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,             /* E_SELECT_WHEN 14 */
                        nullptr,             /* E_SELECT_OPT_TOP 15 */
                        nullptr,             /* E_SELECT_OPT_WITH 16 */
                        nullptr,             /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    (yyval.node)->serialize_format = &SELECT_UNION_SERIALIZE_FORMAT;
}
#line 4618 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 564 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_INTERSECT, "INTERSECT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        (yyvsp[-1].node),                  /* E_SELECT_ALL_SPECIFIED 7 */
                        (yyvsp[-3].node),                  /* E_SELECT_FORMER_SELECT_STMT 8 */
                        (yyvsp[0].node),                  /* E_SELECT_LATER_SELECT_STMT 9 */
                        nullptr,             /* E_SELECT_ORDER_BY 10 */
                        nullptr,             /* E_SELECT_LIMIT 11 */
                        nullptr,             /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,             /* E_SELECT_WHEN 14 */
                        nullptr,             /* E_SELECT_OPT_TOP 15 */
                        nullptr,             /* E_SELECT_OPT_WITH 16 */
                        nullptr,            /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    (yyval.node)->serialize_format = &SELECT_INTERSECT_SERIALIZE_FORMAT;
}
#line 4648 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 590 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_EXCEPT, "EXCEPT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        (yyvsp[-1].node),                  /* E_SELECT_ALL_SPECIFIED 7 */
                        (yyvsp[-3].node),                  /* E_SELECT_FORMER_SELECT_STMT 8 */
                        (yyvsp[0].node),                  /* E_SELECT_LATER_SELECT_STMT 9 */
                        nullptr,             /* E_SELECT_ORDER_BY 10 */
                        nullptr,             /* E_SELECT_LIMIT 11 */
                        nullptr,             /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,             /* E_SELECT_WHEN 14 */
                        nullptr,             /* E_SELECT_OPT_TOP 15 */
                        nullptr,             /* E_SELECT_OPT_WITH 16 */
                        nullptr,             /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    (yyval.node)->serialize_format = &SELECT_EXCEPT_SERIALIZE_FORMAT;
}
#line 4678 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 618 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4684 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 620 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INTO_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &INTO_CLAUSE_SERIALIZE_FORMAT;
}
#line 4693 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 628 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4699 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 630 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 4708 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 635 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 4717 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 640 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 4726 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 645 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 4735 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 654 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4744 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 664 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4753 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 672 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4759 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 674 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_CLAUSE, 1, nullptr);
    (yyval.node)->serialize_format = &FOR_CLAUSE_1_SERIALIZE_FORMAT;
}
#line 4768 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 681 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4774 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 683 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4783 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 690 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4789 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 692 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4798 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 699 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4804 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 701 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4813 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 708 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4819 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 714 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4828 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 719 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4837 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 728 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_1;
}
#line 4846 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 733 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_2;
}
#line 4855 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 738 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_3;
}
#line 4864 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 743 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_4;
}
#line 4873 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 748 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_5;
}
#line 4882 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 753 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_6;
}
#line 4891 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 758 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_7;
}
#line 4900 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 763 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_8;
}
#line 4909 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 768 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_9;
}
#line 4918 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 773 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_10;
}
#line 4927 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 782 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4936 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 790 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4945 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 798 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4953 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 802 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4961 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 806 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4969 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 812 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4975 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 814 "./sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4984 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 822 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4993 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 831 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5002 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 839 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 5011 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 846 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5017 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 852 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5026 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 861 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5035 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 868 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5041 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 870 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 5049 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 874 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 5057 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 882 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5066 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 890 "./sqlparser.y" /* yacc.c:1646  */
    {
    // check sqlserver dialect
    Node* nd = Node::check_expr_is_column_alias((yyvsp[0].node));
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, nd);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5077 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 897 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5089 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 905 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5101 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 913 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5111 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 923 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5120 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 937 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 5129 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 942 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5138 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 947 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-3].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 5147 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 952 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5156 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 957 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5165 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 962 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5174 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 967 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5183 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 972 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5192 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 977 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5201 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 982 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5210 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 987 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5219 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 992 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5228 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 997 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5237 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1002 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5246 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1007 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5255 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1012 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-5].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, nd, (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5266 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1019 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, 2, (yyvsp[-2].node), (yyvsp[-4].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, nd, (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5277 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1026 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, 2, (yyvsp[-1].node), (yyvsp[-3].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, nd, nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5288 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1035 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5294 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1037 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_SYSTEM_TIME, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FOR_SYSTEM_TIME_SERIALIZE_FORMAT;
}
#line 5303 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1045 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "AS OF "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5312 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1050 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FROM "+(yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));
    delete((yyvsp[0].node));
}
#line 5322 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1056 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BETWEEN "+(yyvsp[-2].node)->text()+" AND "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));
    delete((yyvsp[0].node));
}
#line 5332 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1062 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CONTAINED IN("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));
    delete((yyvsp[-1].node));
}
#line 5342 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1068 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "ALL"); }
#line 5348 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1073 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5357 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1081 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 5366 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1089 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5375 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1094 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, 1, (yyvsp[-3].node));
    nd->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS_LIST, 2, nd, (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5386 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1103 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5392 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1105 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_TABLE_HINT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &WITH_TABLE_HINT_SERIALIZE_FORMAT;
}
#line 5401 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1114 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5410 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1119 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5419 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1129 "./sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[0]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = (yyvsp[0].node);
}
#line 5432 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1138 "./sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[-1]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_NOEXPAND, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT;
}
#line 5446 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1153 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 5455 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1160 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5461 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1167 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5470 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1172 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 5479 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1177 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 5488 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1182 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 5497 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1187 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5506 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1192 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5515 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1197 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5524 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1202 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5533 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1210 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5542 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1215 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 5551 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1220 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 5561 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1226 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 5571 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1232 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 5581 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1238 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "OUTER");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 5591 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1244 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5600 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1249 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5609 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1254 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5618 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1259 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5627 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1264 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5636 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1269 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5645 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1277 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_CLAUSE, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 5654 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1285 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_CLAUSE, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 5663 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1293 "./sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL OUTER"+Node::convert_join_hint((yyvsp[0].ival)));
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL"+Node::convert_join_hint((yyvsp[0].ival)));
    }
}
#line 5678 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1304 "./sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT OUTER"+Node::convert_join_hint((yyvsp[0].ival)));
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT"+Node::convert_join_hint((yyvsp[0].ival)));
    }
}
#line 5693 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1315 "./sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT OUTER"+Node::convert_join_hint((yyvsp[0].ival)));
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT"+Node::convert_join_hint((yyvsp[0].ival)));
    }
}
#line 5708 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1326 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 5716 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1332 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5722 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1333 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 5728 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1334 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 5734 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1335 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 3; }
#line 5740 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1336 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 4; }
#line 5746 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1340 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5752 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1341 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 5758 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1348 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5767 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1356 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5776 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1361 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 5785 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1366 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nd, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 5795 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1372 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 5804 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1377 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, nd, (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 5814 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1383 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5823 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1388 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5833 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1394 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5842 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1399 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5852 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1405 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5861 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1410 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5871 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1416 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5880 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1421 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5890 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1427 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5899 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1432 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5909 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1438 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5918 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1443 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5928 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1457 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5934 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1458 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 5940 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1459 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 5946 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1467 "./sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5956 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1476 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 5965 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1486 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 5974 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1491 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 5983 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1496 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 5992 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1501 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 6001 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1506 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 6010 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1511 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 6019 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1516 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 6028 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1521 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 6037 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1526 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 6046 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1536 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_COLLATE_SERIALIZE_FORMAT;
}
#line 6055 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1541 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 6064 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1546 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 6073 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1551 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 6082 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1556 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 6091 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1561 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 6100 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1566 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 6109 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1571 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 6118 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1576 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 6127 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1581 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 6136 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1586 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 6145 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1591 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_ADD_SERIALIZE_FORMAT;
}
#line 6154 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1596 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_MINUS_SERIALIZE_FORMAT;
}
#line 6163 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1601 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_MUL_SERIALIZE_FORMAT;
}
#line 6172 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1606 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_DIV_SERIALIZE_FORMAT;
}
#line 6181 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1611 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_REM_SERIALIZE_FORMAT;
}
#line 6190 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1616 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_AND_SERIALIZE_FORMAT;
}
#line 6199 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1621 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_OR_SERIALIZE_FORMAT;
}
#line 6208 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1626 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_XOR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_XOR_SERIALIZE_FORMAT;
}
#line 6217 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1631 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 6226 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1636 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6235 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1641 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6244 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1646 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6253 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1651 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6262 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1656 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6271 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1661 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6280 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1666 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 6289 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1671 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 6298 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1676 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 6307 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1681 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 6316 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1686 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 6325 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1695 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 6334 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1703 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 6343 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1710 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6349 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1717 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 6358 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1725 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 6367 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1732 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6373 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1734 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 6382 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1747 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6393 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1754 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 5, fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 6403 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1760 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6415 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1768 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6429 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1778 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6440 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1785 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6450 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1791 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6460 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1797 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6470 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1803 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEADD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6484 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1813 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEDIFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6498 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1823 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATENAME");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6510 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1831 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEPART");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6522 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1839 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6532 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1845 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETUTCDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6542 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1851 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6556 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1861 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6566 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1867 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN_ACTIVE_ROWVERSION");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6576 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1873 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6588 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1881 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list2 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list2->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list2);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-7].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STUFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6604 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1893 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6614 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1899 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6624 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1905 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ISNULL");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6636 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1916 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6646 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1922 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6656 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1928 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6666 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1934 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6676 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1940 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6686 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1946 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6696 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1952 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6706 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1958 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6716 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1964 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6726 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1970 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6736 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1976 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6746 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1982 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6756 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1988 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6766 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1994 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6776 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 2000 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6786 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 2006 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6796 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 2012 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6806 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 2018 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6816 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 2024 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6826 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 2030 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6836 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 2036 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6846 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 2042 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6856 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2048 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6866 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2054 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6876 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 2060 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6886 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 2066 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6896 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2072 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6906 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2078 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6916 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2084 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6926 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2090 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6936 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2096 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6946 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2102 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6956 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2108 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6966 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2114 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6976 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2120 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6986 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2126 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6996 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2132 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7007 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2139 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7018 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2146 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7028 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2152 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7038 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2158 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7048 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2164 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7058 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2170 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7069 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2177 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7080 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2184 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7090 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2190 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7100 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2196 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7110 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2202 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING_ID");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7120 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2211 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "FIRST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7130 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2217 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7140 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2223 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7150 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2229 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7162 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2237 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7176 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2247 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7186 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2253 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7198 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2261 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7212 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2273 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7222 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2279 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7232 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2285 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7242 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2291 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NTILE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7252 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2300 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7263 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2307 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7274 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2314 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7285 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2321 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7296 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2328 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7307 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2335 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7316 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2340 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7326 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2346 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7336 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2352 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7346 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2358 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7356 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2364 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), (yyvsp[-9].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7367 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2371 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7378 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2378 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7389 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2385 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7400 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2392 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7411 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2399 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7420 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2404 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7430 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2410 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7440 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2416 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7450 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2422 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7460 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2430 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7469 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2435 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7478 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2440 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7487 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2445 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7496 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2450 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7505 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2455 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7514 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2460 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7523 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2465 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7532 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2473 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, 2, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 7542 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2479 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, 2, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 7552 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2488 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 7558 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2490 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 7564 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2492 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 7570 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2494 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 7576 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2496 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 7582 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2498 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 7588 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2500 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 7594 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2502 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 7600 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2504 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 7606 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2506 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 7612 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2508 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 7618 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2510 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 7624 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2512 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 7630 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2514 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 7636 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2516 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 7642 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2518 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 7648 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2520 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 7654 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2522 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 7660 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2524 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 7666 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2526 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 7672 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2528 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 7678 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2530 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 7684 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2532 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 7690 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2534 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 7696 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2536 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 7702 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2538 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 7708 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2540 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 7714 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2542 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 7720 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2546 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 7728 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2550 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 7736 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2568 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIGINT"); }
#line 7742 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2570 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "INT"); }
#line 7748 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 2572 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLINT"); }
#line 7754 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2574 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TINYINT"); }
#line 7760 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 2576 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-3].node)); delete((yyvsp[-1].node)); }
#line 7766 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2578 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7772 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 2580 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL"); }
#line 7778 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 2582 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-3].node)); delete((yyvsp[-1].node)); }
#line 7784 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 2584 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7790 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 2586 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC"); }
#line 7796 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 2588 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIT"); }
#line 7802 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 2590 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "MONEY"); }
#line 7808 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 2592 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLMONEY"); }
#line 7814 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 2594 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "REAL"); }
#line 7820 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 2596 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "FLOAT("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7826 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 2598 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATE"); }
#line 7832 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 2600 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7838 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 2602 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET"); }
#line 7844 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 2604 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7850 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 2606 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2"); }
#line 7856 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 2608 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLDATETIME"); }
#line 7862 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 2610 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME"); }
#line 7868 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 2612 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7874 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 2614 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME"); }
#line 7880 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 2616 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7886 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 2618 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR"); }
#line 7892 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 2620 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7898 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 2622 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR(MAX)"); }
#line 7904 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 2624 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR"); }
#line 7910 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 2626 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TEXT"); }
#line 7916 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 2628 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7922 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 2630 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR"); }
#line 7928 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 2632 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7934 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 2634 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR(MAX)"); }
#line 7940 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 2636 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR"); }
#line 7946 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 2638 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7952 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 2640 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY"); }
#line 7958 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 2642 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7964 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 2644 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY(MAX)"); }
#line 7970 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 2646 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY"); }
#line 7976 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 7980 "sqlparser_bison.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2649 "./sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
