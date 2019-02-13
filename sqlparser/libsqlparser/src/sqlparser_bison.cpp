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
    DOLLAR_ACTION = 536,
    SOME = 537,
    USE = 538
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "./sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 438 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 468 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6501

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  296
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  501
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1106

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   538

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   295,    56,     2,     2,
      61,    62,    54,    52,   294,    53,    63,    55,     2,     2,
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
     285,   286,   287,   288,   289,   290,   291,   292,   293
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   230,   230,   240,   241,   253,   254,   255,   256,   257,
     261,   262,   266,   270,   279,   295,   311,   327,   346,   347,
     352,   357,   362,   370,   371,   379,   393,   394,   399,   404,
     412,   413,   421,   426,   431,   440,   444,   449,   457,   464,
     476,   477,   485,   486,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   525,   526,   530,   556,   582,   608,   637,   638,   647,
     648,   653,   658,   663,   671,   672,   680,   681,   682,   691,
     692,   700,   701,   709,   710,   718,   719,   727,   728,   732,
     737,   746,   751,   756,   761,   766,   771,   776,   781,   786,
     791,   799,   800,   808,   817,   820,   824,   831,   832,   840,
     848,   849,   857,   865,   866,   870,   878,   879,   887,   888,
     892,   899,   900,   908,   915,   923,   931,   940,   941,   949,
     950,   955,   960,   965,   970,   975,   980,   985,   990,   995,
    1000,  1005,  1010,  1015,  1020,  1025,  1030,  1037,  1044,  1054,
    1055,  1063,  1068,  1074,  1080,  1086,  1091,  1099,  1107,  1112,
    1122,  1123,  1131,  1132,  1137,  1147,  1156,  1169,  1170,  1171,
    1179,  1180,  1185,  1190,  1195,  1200,  1205,  1210,  1215,  1220,
    1228,  1233,  1238,  1244,  1250,  1256,  1262,  1267,  1272,  1277,
    1282,  1287,  1295,  1303,  1311,  1322,  1333,  1344,  1351,  1352,
    1353,  1354,  1355,  1359,  1360,  1365,  1366,  1374,  1380,  1386,
    1393,  1399,  1406,  1412,  1419,  1425,  1432,  1438,  1445,  1451,
    1458,  1464,  1471,  1477,  1487,  1488,  1489,  1490,  1491,  1492,
    1493,  1494,  1495,  1499,  1500,  1501,  1502,  1508,  1509,  1510,
    1511,  1520,  1521,  1526,  1531,  1536,  1541,  1546,  1551,  1556,
    1561,  1569,  1570,  1571,  1576,  1581,  1606,  1611,  1636,  1641,
    1666,  1671,  1696,  1701,  1726,  1731,  1756,  1761,  1766,  1771,
    1776,  1781,  1786,  1791,  1796,  1801,  1806,  1811,  1816,  1821,
    1826,  1831,  1836,  1841,  1846,  1851,  1856,  1861,  1866,  1871,
    1879,  1880,  1888,  1896,  1897,  1901,  1902,  1910,  1918,  1919,
    1928,  1929,  1930,  1931,  1932,  1940,  1947,  1956,  1967,  1975,
    1982,  1989,  1996,  2007,  2018,  2027,  2036,  2043,  2050,  2061,
    2068,  2075,  2084,  2097,  2104,  2111,  2123,  2130,  2137,  2144,
    2151,  2158,  2165,  2172,  2179,  2186,  2193,  2200,  2207,  2214,
    2221,  2228,  2235,  2242,  2249,  2256,  2263,  2270,  2277,  2284,
    2291,  2298,  2305,  2312,  2319,  2326,  2333,  2340,  2347,  2354,
    2361,  2368,  2375,  2383,  2391,  2398,  2405,  2412,  2419,  2427,
    2435,  2442,  2449,  2456,  2466,  2473,  2480,  2487,  2496,  2507,
    2514,  2523,  2536,  2543,  2550,  2557,  2567,  2575,  2583,  2591,
    2599,  2607,  2613,  2620,  2627,  2634,  2641,  2649,  2657,  2665,
    2673,  2681,  2687,  2694,  2701,  2708,  2717,  2722,  2727,  2732,
    2737,  2742,  2747,  2752,  2760,  2766,  2775,  2777,  2779,  2781,
    2783,  2785,  2787,  2789,  2791,  2793,  2795,  2797,  2799,  2801,
    2803,  2805,  2807,  2809,  2811,  2813,  2815,  2817,  2819,  2821,
    2823,  2825,  2827,  2829,  2833,  2837,  2845,  2849,  2850,  2855,
    2857,  2859,  2861,  2863,  2865,  2867,  2869,  2871,  2873,  2875,
    2877,  2879,  2881,  2883,  2885,  2887,  2889,  2891,  2893,  2895,
    2897,  2899,  2901,  2903,  2905,  2907,  2909,  2911,  2913,  2915,
    2917,  2919,  2921,  2923,  2925,  2927,  2929,  2931,  2933,  2938,
    2939,  2940
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
  "OUTPUT", "DELETED", "INSERTED", "DOLLAR_ACTION", "SOME", "USE", "','",
  "'$'", "$accept", "sql_stmt", "stmt_list", "stmt", "dml_stmt",
  "another_stmt", "use_stmt", "update_stmt", "opt_update_where",
  "update_elem_list", "update_elem", "opt_output_clause",
  "dml_select_list", "dml_select_item", "select_stmt",
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
  "relation_name", "column_label", "data_type", "all_some_any", YY_NULLPTR
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
     535,   536,   537,   538,    44,    36
};
# endif

#define YYPACT_NINF -715

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-715)))

#define YYTABLE_NINF -89

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,     7,    56,  -715,    26,  -166,    85,    41,   -11,    15,
      27,    34,  -715,  -715,  -715,  -715,  -715,    86,  -715,   -30,
      76,  -715,  -192,   156,   226,   -36,  -715,  -715,  -166,   120,
     394,  -715,  -715,  -715,  -715,  -715,  -715,    26,    26,    26,
     247,   286,  -715,  -166,    86,   376,   290,  -715,     7,  -715,
    -715,  1985,   249,  -715,  3434,   331,   274,   379,   391,   391,
     -36,   -36,   -36,  3434,   381,   296,   403,   286,   167,   402,
     407,  -715,   361,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
     408,   450,  3434,  3494,  3494,  -715,  1522,  3434,  -715,  -715,
     407,   478,   500,   501,   527,   538,   564,   582,   583,   592,
     596,   607,   610,   611,   646,   671,   685,   688,   693,   697,
     700,   702,   703,   706,   713,  -715,   716,  -715,   720,  -715,
     721,   738,   739,   740,   741,   742,   743,   744,  -715,   745,
     746,   748,   424,  -715,   337,   179,  -715,  -715,  -715,   472,
    4848,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  4970,   401,
     519,    60,   749,   621,   644,   784,   784,  -715,   673,   532,
    4758,  -715,   758,  -715,   391,   391,   296,   376,  -715,  -715,
    2255,    70,  2315,  2378,   679,   539,   539,   301,   754,  3574,
    6450,   625,  -715,  1582,  1645,   759,   765,   766,  3434,   163,
    1915,  1915,  1915,  1915,  1915,  1915,  1915,  3434,  3434,  3434,
    3434,  3434,  3434,   839,   909,  1915,  1915,  3434,  3434,  3434,
    3995,   767,   770,   828,   830,   831,   832,  3995,  3434,  3434,
    -715,  -715,   833,   723,  1985,  3494,  3494,  3494,  3494,  3494,
    3494,  3494,  -715,  -715,   835,  3434,  3434,  3434,  3434,  3434,
    3434,  3434,  3434,  3434,  3434,   360,  1179,  1179,  1179,  1179,
    1179,  1179,  3434,  3434,  3494,   778,   353,   115,  -715,   695,
    -715,   659,   790,   108,  4149,  3434,  3434,  3434,  -715,  3434,
    -715,  -715,  -715,   421,   687,   689,  -715,  -715,  -715,   793,
     397,  -715,   229,  -715,   796,  -715,   798,  -715,  3434,  3434,
     757,   625,   800,  -715,   803,   804,  -715,   806,   632,   632,
     632,  5010,  -715,    38,   794,    38,     2,   810,  -715,  -715,
    5050,  3434,  5090,  3434,  5130,  3434,  5170,  3434,  5210,  3434,
    5250,  3434,  5290,  3434,   570,  5330,   643,   811,  5370,  5410,
     812,  5450,  3434,   813,  5490,  3434,  5530,  3434,  5570,  3434,
    3839,  3879,  3919,  -715,   815,  -715,  -715,   816,   819,   820,
    -715,  -715,   821,  -715,   822,   823,  -715,   824,   825,   826,
    -715,  -715,   827,   829,  -715,  -715,  -715,   -51,  -715,  -715,
     600,   601,   602,   604,   605,   840,  4889,  -715,  4102,   707,
    -715,   539,   539,   845,   845,   845,   845,  -715,  -715,  1082,
    1082,  1082,  1082,  1082,  1082,  1082,  1082,   505,   679,  3434,
    3494,   778,  -715,  -715,  -715,   653,   407,   653,   407,   653,
     407,   653,   407,   653,   407,   653,   407,   483,   404,   431,
    1522,  -715,  -715,  -715,  -715,  -715,   429,  -715,  -715,   292,
     834,   886,   357,  4200,   842,  3569,  -715,  -715,   617,   612,
    6450,   617,  4548,  -715,  -115,   788,   892,    45,   207,   884,
     846,   714,   916,  -715,   711,   712,   887,   888,   927,   929,
    -715,   -91,  -715,   722,   876,   647,  3434,  3434,  -715,  2648,
     263,   413,   937,  -715,  -715,  -715,  4508,  3434,   837,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,   632,   708,    11,
     709,   787,  -715,  3434,  -715,  -715,   885,  -715,   632,  5610,
     632,  5650,   632,  5690,   632,  5730,   632,  5770,   632,  5810,
     632,  5850,   632,  3434,   632,   632,  3434,  -715,  -715,   632,
     632,   632,  5890,   632,   632,  5930,  -715,  5970,   632,  6010,
     941,  3434,  3434,   946,   947,   948,   949,   950,     9,    13,
     951,   952,   953,   954,    23,  -715,   955,  3434,  3434,  3434,
    3434,  3434,  -715,  3995,   449,    30,  4055,   102,  -715,    36,
    -715,   246,   899,  -715,    98,  3434,   847,   404,   438,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  3494,   903,  -715,  -715,
    -715,   905,   963,   966,  -715,  3434,   308,  -715,  -715,  4149,
    -715,  1249,   723,  3434,   723,   860,   861,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  3434,  -715,  -715,
    -715,  -715,   515,   531,  -715,  -715,  -715,  -715,  -715,  -715,
     421,   617,   617,  -715,   911,   479,  -715,   971,  2708,    75,
     912,  3434,  6450,  -715,  -715,  -715,   323,   334,   818,  -715,
    -715,   -38,  -715,  -715,   632,  -715,   632,  -715,   632,  -715,
     632,  -715,   632,  -715,   632,  -715,   632,  -715,   989,  -715,
    -715,  1329,  -715,  -715,  -715,   632,  -715,  -715,   632,  -715,
    -715,   632,   684,  6050,  6090,   917,   -32,   918,   -24,   919,
     920,   921,   922,   923,   924,   925,   928,   930,   931,   932,
     701,  6130,  6170,  3959,  3999,  2065,   934,   312,  -715,  4247,
     986,  -715,   936,   307,   769,   938,   940,   986,  -715,  -715,
      76,    -8,   968,   363,  4102,   968,   968,   715,   942,   943,
    4102,   990,   986,  -715,    76,   725,   106,   986,  -715,  6450,
     935,   890,  3494,   472,  -715,  1003,  -715,  -715,  6450,   509,
    1005,  -715,   978,   979,   889,   719,  -715,   849,  -715,   849,
     -15,   241,  6450,  -715,  -715,  -715,  -715,  -715,   723,   723,
    -715,  2771,    82,   514,  -715,   982,   983,  -715,   177,  6450,
     975,   976,   977,  1006,  1008,  -715,     8,   987,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,   632,  3434,   632,  3434,  -715,
    -715,  -715,  1043,  -715,  -715,  -715,  -715,  1045,  -715,  -715,
    1047,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  1048,  -715,  -715,  3434,  3434,  -715,  3434,  -715,
     517,   318,   523,   276,  -715,  3434,  -715,  -715,  -715,    76,
    -715,  4102,  4102,  -715,   363,  -715,  -715,  -715,  -715,  -715,
     727,   363,   363,  4102,   264,   100,  3434,   112,  -715,  4102,
      76,  -715,    16,   986,  -715,   391,  -715,  3434,  3434,  -715,
     472,  -715,   322,   993,  1985,  1985,   412,  1249,  3041,   296,
    -715,   296,  3434,  3434,  3434,  3434,   849,   849,  -715,   994,
     526,  -715,  3101,   320,  -715,   333,  -715,  -715,    50,    63,
      44,    78,    84,  -715,   995,  -715,  -715,  6210,  -715,  6250,
     761,   996,   997,   998,  6290,  6330,  6370,   336,   568,   986,
    -715,    76,   999,  -715,  -715,  -715,  -715,  3434,  -715,  -715,
    -715,  1007,   986,  -715,  4930,   986,  -715,   755,  -715,  1058,
    -715,   785,  1069,  1024,  -715,   391,  -715,  -715,  6450,   595,
    1072,  -715,  -715,    76,    76,  -715,   855,  -715,  -715,  4588,
    4628,  4678,  4718,   296,   296,  -715,  3164,   335,  -715,  1014,
    -715,  -715,  -715,  -715,   428,   460,   984,   461,   498,   985,
     910,   907,   502,   988,   518,   522,  1030,   525,   560,  1033,
    -715,   632,   632,  3434,  -715,  -715,  -715,  -715,  -715,  -715,
     603,  1189,    76,  -715,   900,  6450,  1190,  -715,  1190,  -715,
    3434,  1156,  1192,  1010,  1139,  -715,  1198,  1141,  -715,  -715,
      66,  1062,  1064,  1065,  1066,  1067,  1068,  1070,  1071,  -715,
    -715,  -715,  1148,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  6410,  1210,  1141,  -715,   936,  1151,  1165,
    1166,  6450,  1213,  -715,  1214,  1216,  1160,  -715,  -715,   422,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    1160,  -715,   278,    76,    76,  -715,  -715,   933,  -715,  -715,
    1159,   339,  1161,  1162,  1221,   293,  1163,  -715,  -715,  1167,
    1170,  1225,  -715,   349,  1171,  1172
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     5,   128,    79,     0,     0,     0,     3,
       7,     9,    12,    11,    10,    72,    35,    97,    71,     0,
     123,   119,   120,    72,     0,     0,   129,   130,    79,     0,
       0,    13,     1,     2,     4,     6,     8,   128,   128,   128,
       0,    89,    98,    79,    97,     0,     0,   124,     0,    37,
      36,     0,    84,    86,     0,    80,     0,   182,   170,   170,
       0,     0,     0,     0,     0,    40,     0,    89,   126,     0,
       0,   121,   217,   234,   235,   237,   236,   238,   239,   244,
       0,     0,     0,     0,     0,   136,     0,   303,   321,   240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   334,     0,   333,     0,   330,
       0,     0,     0,     0,     0,     0,     0,     0,   320,     0,
       0,     0,     0,   249,    77,   131,   243,   245,   251,   261,
     133,   247,   248,   312,   313,   311,   310,   262,     0,     0,
      82,     0,     0,     0,     0,    74,    76,    75,    99,   111,
     114,    90,     0,    38,   170,   170,    40,     0,   125,   122,
       0,     0,     0,     0,   288,   252,   253,   249,     0,   215,
     304,     0,   250,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     241,   242,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,   457,   458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,    85,
      81,     0,   183,     0,     0,     0,     0,     0,   100,     0,
     115,   116,   113,     0,     0,     0,    39,   127,   401,     0,
     218,   219,     0,   403,     0,   402,     0,   246,     0,     0,
     308,   305,     0,   405,     0,     0,   404,     0,     0,     0,
       0,     0,   423,     0,     0,     0,     0,     0,   454,   455,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   459,   495,   474,   480,   465,     0,   468,
     472,   461,   482,   462,   487,   498,   469,   484,   478,   476,
     460,   470,   490,   493,   479,   471,   488,     0,   327,   326,
       0,     0,     0,     0,     0,     0,     0,    78,     0,    91,
     132,   254,   255,   256,   257,   258,   260,   259,   263,   280,
     281,   282,   283,   284,   285,   286,   287,   279,   278,     0,
       0,     0,   501,   499,   500,   264,     0,   266,     0,   268,
       0,   272,     0,   270,     0,   274,     0,   299,   276,     0,
       0,   300,   297,   291,   289,   293,     0,   135,    83,     0,
     185,     0,   178,     0,     0,   172,   175,   177,    26,    23,
      25,    26,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     0,
      65,     0,    69,     0,     0,    42,     0,     0,   411,     0,
       0,     0,     0,   413,   412,   216,     0,     0,     0,   306,
     318,   415,   314,   414,   392,   393,   394,     0,     0,     0,
       0,     0,   424,     0,   425,   421,     0,   422,   365,     0,
     361,     0,   349,     0,   357,     0,   353,     0,   345,     0,
     341,     0,     0,     0,     0,     0,     0,   383,   382,     0,
     379,   375,     0,   373,   369,     0,   380,     0,   337,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   329,     0,     0,     0,     0,
       0,     0,   319,     0,   182,   155,     0,   180,    94,   137,
     139,   180,   159,   140,   152,     0,    95,   277,     0,   298,
     265,   267,   269,   273,   271,   275,     0,     0,   292,   290,
     294,   184,     0,     0,   189,     0,     0,   176,   171,     0,
     174,     0,    93,     0,    93,   101,   102,    54,    55,    45,
      49,    51,    47,    44,    50,    48,    46,     0,    52,    53,
      57,    58,     0,     0,    63,    64,    67,    68,    70,    41,
       0,    26,    26,   400,     0,   220,   221,     0,     0,     0,
       0,     0,   309,   302,   395,   427,     0,     0,     0,   426,
     428,     0,   417,   364,   367,   360,   363,   348,   351,   356,
     359,   352,   355,   344,   347,   340,   343,   389,     0,   385,
     386,     0,   384,   378,   374,   377,   372,   368,   371,   381,
     336,   339,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   456,     0,
       0,   154,     0,   180,     0,     0,   140,     0,   181,   146,
     180,     0,   213,   208,     0,   213,   213,     0,     0,     0,
       0,     0,     0,   149,   180,     0,   170,     0,   151,    92,
       0,   117,     0,   295,   301,     0,   188,   187,   179,     0,
       0,   173,     0,     0,    27,    30,    34,    91,    24,    91,
       0,     0,    66,    60,    59,    62,    61,    43,    93,    93,
     410,     0,     0,     0,   399,     0,   224,   225,     0,   307,
       0,     0,     0,     0,     0,   420,     0,     0,   366,   362,
     350,   358,   354,   346,   342,     0,     0,     0,     0,   376,
     370,   338,     0,   331,   335,   494,   464,     0,   473,   467,
       0,   481,   485,   486,   496,   497,   483,   477,   475,   489,
     491,   492,     0,   325,   324,     0,     0,   316,     0,   315,
     183,     0,     0,   180,   153,     0,   167,   166,   190,   180,
     145,     0,     0,   214,   208,   209,   210,   211,   212,   207,
       0,   208,   208,     0,     0,   198,     0,   201,   138,     0,
     180,   148,     0,     0,   141,   170,   150,     0,     0,    73,
     296,   186,     0,     0,     0,     0,     0,     0,     0,    40,
      18,    40,     0,     0,     0,     0,    91,    91,   398,     0,
     222,   223,     0,     0,   409,     0,   232,   233,     0,     0,
       0,     0,     0,   419,     0,   418,   390,     0,   387,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   185,     0,
     158,   180,     0,   144,   193,   194,   204,     0,   205,   206,
     195,     0,     0,   197,     0,     0,   200,     0,   147,     0,
     165,     0,     0,     0,   160,   170,   143,    96,   118,     0,
       0,    32,    33,   123,   123,    31,     0,    17,    16,     0,
       0,     0,     0,    40,    40,   408,     0,     0,   397,     0,
     230,   231,   228,   229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     416,     0,     0,     0,   463,   466,   328,   323,   322,   317,
     184,     0,   180,   157,   168,   192,     0,   196,     0,   199,
       0,     0,     0,     0,     0,   142,     0,     0,    29,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
      14,   396,     0,   226,   227,   407,   435,   450,   430,   445,
     440,   438,   453,   433,   448,   443,   434,   449,   429,   444,
     439,   437,   452,   432,   447,   442,   436,   451,   431,   446,
     441,   391,   388,     0,     0,   188,   156,     0,   217,     0,
       0,   191,     0,   161,     0,     0,     0,    21,    22,     0,
     103,   105,   104,   106,   107,   109,   108,   110,   406,   332,
     186,   169,     0,     0,     0,   163,   162,     0,    19,    20,
     218,     0,     0,     0,     0,     0,     0,   202,   203,     0,
     220,     0,   164,     0,     0,   222
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -715,  -715,  1227,  -715,  -715,  -715,  -715,  -715,  -650,  -245,
    -715,  -369,   370,  -715,  -715,    20,   345,  -163,   618,  -715,
     351,  -715,  -715,   107,  -715,  -715,  1174,   851,  -552,  -715,
    1195,  -182,  -715,   973,  -715,  -715,  -715,   364,  1196,  -715,
    -714,   -20,  1076,   441,  1021,  -574,   528,  -530,  -715,  -715,
    -715,  -715,  -715,   192,   -57,  -416,  -715,   817,  -546,   -18,
     705,  -715,  -715,  -715,  -484,  -268,  -126,  -282,  -715,  -715,
     -17,   -50,   850,  -715,  -715,   972,  -715,  -715,  -258,   418,
    -715,  -715,  -715,  -264,  -301,   959,   456,  -255,  1009,  -209,
     462
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,   869,   438,
     439,   592,   744,   745,    14,   133,    24,   163,   464,   465,
      17,    18,   223,    30,    55,    56,    65,   870,   379,   731,
      41,    42,   268,   158,   159,   272,   859,    25,    21,    22,
      46,   708,    69,    28,   134,   135,   558,   559,   560,   726,
     934,   561,   705,   826,   153,   434,   435,   436,   709,   562,
     563,   845,   847,   721,   839,   834,   178,   136,   137,   138,
     139,   179,   422,   141,   181,   290,   291,   478,   142,   143,
     144,   145,   146,   147,   307,   492,   311,   710,   258,   367,
     406
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,   140,   154,   276,   148,   496,   437,   306,   374,   831,
      20,   545,    59,   160,   680,   723,   636,   746,   682,   590,
      15,   441,    23,    29,   775,     2,   704,   597,   688,    15,
     796,     2,   174,   698,   484,   485,   486,   180,   799,    15,
     747,    32,   749,   488,   279,    15,   284,   286,   165,   970,
     711,   712,   713,   714,   715,   964,   716,   294,   297,   717,
     718,   719,   601,   262,   495,   929,   175,   176,   967,  1067,
     893,   602,   594,   280,   327,     1,     2,  1068,   766,     3,
      15,    15,    15,   974,   930,   880,   931,   489,    31,   977,
     169,    35,   375,   699,    26,    33,   598,   872,    36,   871,
     700,   698,    48,   698,    40,   698,   177,   274,   275,   698,
     182,   430,    37,    38,    39,   698,     1,     2,   232,   233,
     564,   303,   873,   263,   281,    52,    27,    53,     4,   767,
     932,   616,   617,   282,     4,    51,   881,    45,   301,   971,
     310,   312,   314,   316,   318,   320,   322,   324,   325,   326,
      66,   328,   329,   331,   334,   336,   338,   340,   341,   342,
      43,   303,   475,    45,   830,   603,   152,   303,   727,   376,
     922,   431,   707,   741,   140,   437,   853,   437,   851,     4,
     886,    54,   925,  1069,   840,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   305,   405,   407,   409,   411,
     413,   415,   417,   418,   377,     5,   876,   877,   381,   382,
     383,   384,   385,   386,   387,   440,   440,   442,    49,   160,
       4,   621,   622,   634,   604,   302,   953,   954,    40,  1008,
    1009,   887,   471,   605,   643,   305,   645,   419,   647,   476,
     649,   305,   651,   546,   653,   637,   655,   638,   657,   698,
     659,   660,   758,   759,   681,   662,   663,   664,   683,   666,
     667,   499,   797,   501,   670,   503,   625,   505,   689,   507,
     800,   509,   490,   511,   491,   421,   832,   910,   972,   698,
     973,  1090,   522,   913,   965,   525,   966,   527,    50,   529,
     941,   942,   472,   746,   577,   581,  1100,   968,   564,   969,
     701,   914,   915,   933,   928,    40,   724,    45,     6,   728,
     698,   739,   975,   920,   976,   820,   722,   626,   978,   927,
     979,   908,   303,   960,    63,   939,   627,   -72,   -72,   -72,
     720,   437,   281,   -72,   -72,   -72,   962,    45,  1023,   990,
     777,  1091,  1096,   624,   696,    16,   909,   626,   748,   567,
     916,    64,  1105,   874,    16,   582,  1101,   918,   919,   423,
      70,   424,   425,    49,    19,   993,   -72,   641,    45,    49,
      44,   740,   -72,    19,   961,   821,    44,   707,   875,    68,
     778,   431,   779,   568,   780,   940,   781,   963,   782,  1024,
     783,   149,   784,   426,   -87,   304,   305,    57,   557,   991,
     585,   789,   472,   881,   790,    58,    57,   791,   399,   400,
     401,   155,   156,   157,   164,    57,   440,   440,   170,   150,
     586,   421,   170,   943,   171,  1088,   570,   632,   571,   220,
     572,   221,   573,  1089,   574,   578,   575,   579,   580,   162,
     177,   823,   151,   -72,   -72,   824,  1056,   841,   842,   -72,
     -72,   152,   829,   254,   255,   256,   564,   161,   469,   776,
     470,   167,   564,   658,   168,   222,   661,   850,     2,   172,
     576,   855,   856,   224,   628,   894,   629,   732,    60,    61,
      62,   673,   674,   225,   226,   227,   228,   229,   230,   231,
     225,   226,   227,   228,   229,   230,   231,   691,   692,   693,
     694,   695,   765,    98,    99,   100,   101,   102,   103,   104,
     170,   173,   697,   108,   109,   729,   111,   112,   113,   114,
     753,   896,   754,   898,   225,   226,   227,   228,   229,   230,
     231,   253,   254,   255,   256,   738,   755,   444,   756,   183,
     761,   140,   762,   440,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   752,   770,   733,
     771,   184,   185,   445,   835,   836,   837,   838,   911,   772,
     469,   773,   862,   564,   564,   882,   703,   883,   469,   261,
     907,   769,   234,   260,   170,   564,   586,   956,   186,   957,
     923,   564,   926,   227,   228,   229,   230,   231,   935,   187,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   446,   447,   448,   188,   449,   450,   451,   628,
     452,   583,   512,   453,   454,   879,   455,   456,   457,   458,
     459,   460,   461,   189,   190,   462,   463,   313,   315,   317,
     319,   321,   323,   191,   992,   234,   761,   192,  1006,   332,
     335,   337,   339,  1026,   761,  1027,  1054,   997,   193,   854,
     999,   194,   195,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,  1028,  1031,  1029,  1032,   912,
     252,   253,   254,   255,   256,   515,   947,   196,   948,   408,
     410,   412,   414,   416,  1059,   860,  1060,  1051,  1052,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   937,   197,  1033,   557,  1034,   897,  1038,   899,  1039,
     557,   711,   712,   713,   714,   715,   198,   716,   917,   199,
     717,   718,   719,  1041,   200,  1042,   959,  1043,   201,  1044,
    1046,   202,  1047,   203,   204,   904,   905,   205,   906,   711,
     712,   713,   714,   715,   206,   716,  1000,   207,   717,   718,
     719,   208,   209,   711,   712,   713,   714,   715,   265,   716,
    1019,  1020,   717,   718,   719,  1048,   924,  1049,   936,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   938,   219,
     264,   266,    39,   267,   140,   140,   287,   140,   729,   273,
     289,   298,   949,   950,   951,   952,   269,   299,   300,   368,
    1022,   370,   369,   371,   372,   373,    57,   378,   388,   420,
     -88,   428,    72,    73,    74,    75,    76,    77,   944,    78,
      79,   557,   557,   429,   466,   468,   467,    80,   473,    81,
     474,   477,   480,   557,   513,   481,   482,   995,   483,   557,
      97,   493,   497,   517,   520,   523,   533,   534,  1005,    82,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   584,
     544,    83,    84,   330,   547,   548,   549,   583,   550,   551,
      86,   565,   552,   231,   588,   591,   593,   308,   599,   600,
     606,   607,    72,    73,    74,    75,    76,    77,    87,    78,
      79,   609,   608,    47,    47,   610,   611,    80,    88,    81,
     612,   613,   614,  1053,   615,    89,   618,   516,   619,   309,
     630,   620,   633,   635,   639,   640,   672,   642,    90,    82,
    1061,   675,   676,   677,   678,   679,   684,   685,   686,   687,
     690,    83,    84,   333,   725,   734,   736,   730,   735,   737,
      86,   750,   751,   760,   763,   768,   774,   308,   792,   795,
     798,   801,   802,   803,   804,   805,   806,   807,    87,   698,
     808,   833,   809,   810,   811,   812,   819,   825,    88,   843,
     827,   234,   828,   844,   846,    89,   861,   849,   863,   309,
     852,   858,   857,   867,   888,   889,   890,   866,    90,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   864,   865,   868,   884,   891,   885,   892,   900,   895,
     901,   785,   902,   903,   628,   983,   955,   980,   984,   985,
     986,   994,  1001,  1092,  1093,    91,    92,    93,    94,    95,
      96,  1002,   996,  1003,  1004,  1007,  1025,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   132,    91,    92,    93,    94,    95,
      96,  1010,  1030,  1035,  1037,  1036,  1040,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    72,    73,    74,    75,    76,    77,  1045,    78,
      79,  1050,  1055,  1058,  1057,  1062,  1063,    80,  1064,    81,
    1065,  1066,   882,  1070,   132,  1071,  1072,  1073,  1074,  1075,
    1078,  1076,  1077,  1080,  1082,  1083,  1084,  1085,  1086,    82,
    1087,   956,  1095,  1097,  1098,  1099,   629,  1094,  1104,  1102,
     566,    83,    84,  1103,   883,   957,    34,   945,   757,    67,
      86,   166,   443,   277,    71,   380,   402,   403,   848,  1081,
     587,   569,    72,    73,    74,    75,    76,    77,    87,    78,
      79,   706,   921,   479,   494,     0,   427,    80,    88,    81,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,   786,     0,     0,     0,     0,    90,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,    84,    85,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,   234,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   787,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
      96,     0,     0,     0,     0,     0,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   404,     0,     0,   132,    91,    92,    93,    94,    95,
      96,     0,     0,     0,     0,     0,     0,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,     0,     0,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,     0,     0,     0,   742,   743,
      80,     0,    81,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    84,     0,     0,     0,     0,
       0,     0,     1,    86,     0,    72,    73,    74,    75,    76,
      77,     0,    78,    79,     0,     0,     0,     0,     0,     0,
      80,    87,    81,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,    89,     0,
       0,     0,    82,   788,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,    83,    84,   292,     0,     0,     0,
       0,     0,     0,    86,   293,     0,     0,     0,    72,    73,
      74,    75,    76,    77,     0,    78,    79,     0,     0,     0,
       0,    87,     0,    80,     0,    81,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,    82,     4,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,    83,    84,   295,
       0,     0,     0,     0,     0,     0,    86,   296,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,    90,     0,     0,     0,     0,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    91,    92,
      93,    94,    95,    96,     0,     0,     0,   132,     0,     0,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,   132,     0,     0,
       0,     0,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    72,    73,
      74,    75,    76,    77,     0,    78,    79,     0,     0,     0,
       0,     0,     0,    80,     0,    81,     0,     0,     0,     0,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,   308,     0,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    87,    78,    79,     0,     0,     0,
       0,     0,     0,    80,    88,    81,     0,     0,     0,     0,
       0,    89,     0,     0,     0,   309,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,   234,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   817,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    72,    73,
      74,    75,    76,    77,     0,    78,    79,     0,     0,     0,
       0,     0,     0,    80,     0,    81,     0,     0,     0,     0,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,    86,   278,    72,    73,
      74,    75,    76,    77,     0,    78,    79,     0,     0,     0,
       0,     0,     0,    80,    87,    81,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,    82,     0,     0,     0,   818,
       0,     0,     0,     0,    90,     0,     0,    83,    84,     0,
       0,     0,     0,     0,     0,     0,    86,   283,     0,     0,
       0,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,     0,     0,     0,    87,     0,    80,     0,    81,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    89,     0,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,    86,
     285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,    90,     0,     0,
       0,     0,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,    93,    94,    95,    96,     0,     0,     0,
     132,     0,     0,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
     132,     0,     0,     0,     0,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,     0,     0,     0,     0,     0,    80,     0,    81,     0,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,    86,
     623,    72,    73,    74,    75,    76,    77,     0,    78,    79,
       0,     0,     0,     0,     0,     0,    80,    87,    81,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      83,    84,     0,     0,     0,     0,     0,     0,     0,    86,
     764,     0,     0,     0,    72,    73,    74,    75,    76,    77,
       0,    78,    79,     0,     0,     0,     0,    87,     0,    80,
       0,    81,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,    83,    84,     0,     0,     0,     0,     0,
       0,     0,    86,   878,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      90,     0,     0,     0,     0,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
       0,     0,     0,   132,     0,     0,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,   132,     0,     0,     0,     0,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,    72,    73,    74,    75,    76,    77,
       0,    78,    79,     0,     0,     0,     0,     0,     0,    80,
       0,    81,     0,     0,     0,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,    84,     0,     0,     0,     0,     0,
       0,     0,    86,     0,    72,    73,    74,    75,    76,    77,
       0,    78,    79,     0,     0,     0,     0,     0,     0,    80,
      87,    81,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
      90,     0,     0,    83,    84,     0,     0,     0,     0,     0,
       0,     0,    86,   958,     0,     0,     0,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,     0,     0,     0,
      87,     0,    80,     0,    81,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,    83,    84,     0,     0,
       0,     0,     0,     0,     0,    86,  1021,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,    90,     0,     0,     0,   946,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
      94,    95,    96,     0,     0,     0,   132,     0,     0,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,   132,     0,     0,     0,
       0,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,     0,     0,     0,
       0,     0,    80,     0,    81,     0,     0,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    84,     0,     0,
       0,     0,     0,     0,     0,    86,     0,    72,    73,    74,
      75,    76,    77,     0,    78,    79,     0,     0,     0,     0,
       0,     0,    80,    87,    81,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,    83,    84,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   432,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,   234,    80,     0,    81,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   433,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,    93,    94,    95,    96,     0,     0,     0,   132,
       0,     0,     0,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,     0,     0,     0,    91,    92,    93,    94,    95,
      96,     0,     0,     0,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   589,     0,     0,     0,     0,   288,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,     0,     0,     0,     0,     0,     0,     0,   554,     0,
       0,     0,     0,     0,     0,     0,   555,     0,   343,   344,
       0,     0,     0,    80,     0,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   345,   346,     0,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   554,     0,     0,   348,     0,
       0,     0,     0,   555,     0,     1,   556,     0,     0,     0,
      80,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   530,   349,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,   350,     0,     0,     0,
       0,     0,   432,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   556,   351,     0,     0,    80,     0,    81,
       0,     0,     0,   531,     0,     0,     0,     0,   352,     0,
     353,     0,     0,     0,     0,     0,     0,   354,   355,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   432,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   532,     0,     0,     0,     0,    80,     4,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,   702,     0,     0,     0,
     822,     0,     0,   815,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,     0,    81,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,     0,
       0,    91,    92,    93,    94,    95,    96,   433,     0,    88,
       0,     0,     0,   816,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    91,    92,
      93,    94,    95,    96,     0,     0,    88,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,    91,    92,    93,    94,    95,
      96,     0,     0,     0,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,     0,     0,     0,    91,    92,    93,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    91,    92,    93,    94,    95,    96,     0,
       0,     0,     0,     0,     0,     0,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   631,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   595,   596,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1011,  1012,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1013,  1014,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   270,
       0,     0,     0,     0,     0,     0,  1015,  1016,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   232,   233,     0,     0,     0,   271,     0,     0,     0,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1017,  1018,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
       0,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,     0,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   553,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   998,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   487,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   500,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   502,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   504,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   506,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   508,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   510,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   514,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   518,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   519,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   521,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   524,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   526,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   528,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   644,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   646,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   648,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   650,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   652,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   654,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   656,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   665,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   668,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   669,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   671,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   793,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   794,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   813,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   814,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   981,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   982,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   987,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   988,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   989,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1079,     0,     0,     0,     0,     0,     0,     0,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256
};

static const yytype_int16 yycheck[] =
{
      20,    51,    59,   166,    54,   306,   264,   189,   217,    17,
       3,    62,    30,    63,     5,   561,     5,   591,     5,   435,
       0,   266,     2,   189,    62,    61,   556,   142,     5,     9,
      62,    61,    82,     3,   298,   299,   300,    87,    62,    19,
     592,     0,   594,     5,   170,    25,   172,   173,    66,     5,
      14,    15,    16,    17,    18,     5,    20,   183,   184,    23,
      24,    25,    17,     3,    62,    49,    83,    84,     5,     3,
      62,    26,   441,     3,   200,    60,    61,    11,     3,    64,
      60,    61,    62,     5,    68,     3,    70,    49,     3,     5,
      70,    64,   218,    63,    68,   106,   211,   112,    64,   749,
      70,     3,   294,     3,   142,     3,    86,   164,   165,     3,
      90,     3,    26,    27,    28,     3,    60,    61,     3,     4,
     378,   159,   137,    63,    54,     5,   100,     7,   164,    54,
     114,   222,   223,    63,   164,    28,    54,    61,   188,    95,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      43,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     190,   159,   288,    61,   710,   120,    60,   159,    70,   219,
      70,    63,    70,   589,   224,   433,    70,   435,   724,   164,
       3,    61,    70,   117,   714,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   233,   246,   247,   248,   249,
     250,   251,   252,   253,   222,   190,   758,   759,   225,   226,
     227,   228,   229,   230,   231,   265,   266,   267,    62,   269,
     164,   466,   467,   487,    17,    62,   876,   877,   142,   943,
     944,    54,     3,    26,   498,   233,   500,   254,   502,   289,
     504,   233,   506,   294,   508,   234,   510,   236,   512,     3,
     514,   515,   621,   622,   245,   519,   520,   521,   245,   523,
     524,   311,   294,   313,   528,   315,     3,   317,   245,   319,
     294,   321,   234,   323,   236,   255,   284,   823,   234,     3,
     236,     3,   332,   829,   234,   335,   236,   337,    62,   339,
     864,   865,    63,   867,   420,     3,     3,   234,   556,   236,
     555,   831,   832,   287,   850,   142,   561,    61,   293,   564,
       3,     3,   234,   843,   236,     3,    70,    54,   234,   849,
     236,     3,   159,     3,    77,     3,    63,    26,    27,    28,
     294,   589,    54,    26,    27,    28,     3,    61,     3,     3,
     641,    63,     3,   469,   553,     0,    70,    54,   593,   399,
     834,    65,     3,   112,     9,    63,    63,   841,   842,     6,
      70,     8,     9,    62,     0,   911,    65,   493,    61,    62,
      19,    63,    65,     9,    54,    63,    25,    70,   137,     3,
     644,    63,   646,   400,   648,    63,   650,    54,   652,    54,
     654,    60,   656,    40,   145,   232,   233,     3,   378,    63,
      43,   665,    63,    54,   668,    11,     3,   671,    48,    49,
      50,    60,    61,    62,    11,     3,   466,   467,    61,   145,
      63,   401,    61,    11,    63,     3,   406,   477,   408,     5,
     410,     7,   412,    11,   414,     6,   416,     8,     9,   143,
     420,   699,    63,   142,   143,   700,   992,   715,   716,   142,
     143,    60,   707,    49,    50,    51,   714,    76,    61,   641,
      63,   294,   720,   513,    62,   128,   516,   722,    61,    61,
      39,   726,   727,   294,    61,   776,    63,    39,    37,    38,
      39,   531,   532,    52,    53,    54,    55,    56,    57,    58,
      52,    53,    54,    55,    56,    57,    58,   547,   548,   549,
     550,   551,   628,   239,   240,   241,   242,   243,   244,   245,
      61,    61,    63,   249,   250,   565,   252,   253,   254,   255,
       5,   785,     7,   787,    52,    53,    54,    55,    56,    57,
      58,    48,    49,    50,    51,   585,     5,   116,     7,    61,
      61,   591,    63,   593,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   607,   235,   576,
     237,    61,    61,   142,   201,   202,   203,   204,   823,   235,
      61,   237,    63,   831,   832,    61,   556,    63,    61,    60,
      63,   631,    12,   182,    61,   843,    63,    61,    61,    63,
     845,   849,   847,    54,    55,    56,    57,    58,   853,    61,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   201,   202,   203,    61,   205,   206,   207,    61,
     209,    63,    62,   212,   213,   761,   215,   216,   217,   218,
     219,   220,   221,    61,    61,   224,   225,   191,   192,   193,
     194,   195,   196,    61,   909,    12,    61,    61,    63,   203,
     204,   205,   206,   235,    61,   237,    63,   922,    61,   726,
     925,    61,    61,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   235,   235,   237,   237,   825,
      47,    48,    49,    50,    51,    62,   869,    61,   871,   247,
     248,   249,   250,   251,   996,   732,   998,   981,   982,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   857,    61,   235,   714,   237,   786,   235,   788,   237,
     720,    14,    15,    16,    17,    18,    61,    20,    21,    61,
      23,    24,    25,   235,    61,   237,   882,   235,    61,   237,
     235,    61,   237,    61,    61,   815,   816,    61,   818,    14,
      15,    16,    17,    18,    61,    20,    21,    61,    23,    24,
      25,    61,    61,    14,    15,    16,    17,    18,   167,    20,
     953,   954,    23,    24,    25,   235,   846,   237,   855,    61,
      61,    61,    61,    61,    61,    61,    61,    61,   858,    61,
      61,   167,    28,   140,   864,   865,    62,   867,   868,    61,
     195,    62,   872,   873,   874,   875,   294,    62,    62,    62,
     956,     3,    62,     3,     3,     3,     3,   114,     3,    61,
     145,   182,     3,     4,     5,     6,     7,     8,   866,    10,
      11,   831,   832,    63,   167,    62,   167,    18,    62,    20,
      62,   104,    62,   843,   294,    62,    62,   917,    62,   849,
     238,    77,    62,    62,    62,    62,    61,    61,   935,    40,
      61,    61,    61,    61,    61,    61,    61,    61,    61,     3,
      61,    52,    53,    54,   294,   294,   294,    63,   294,   294,
      61,   194,    62,    58,    62,   288,   294,    68,   120,    17,
      26,    65,     3,     4,     5,     6,     7,     8,    79,    10,
      11,     5,   208,   943,   944,   214,   214,    18,    89,    20,
      43,    43,     5,   983,     5,    96,   214,   294,    62,   100,
       3,   294,   105,   235,   235,   158,     5,    62,   109,    40,
    1000,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,    52,    53,    54,    65,    62,     3,   120,    63,     3,
      61,   111,   111,    62,     3,    63,   158,    68,   294,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    79,     3,
      62,    23,    62,    62,    62,   294,    62,    61,    89,   284,
      62,    12,    62,    61,    61,    96,     3,    17,     3,   100,
     285,   121,    77,   294,    39,    39,    39,   128,   109,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    63,    63,   194,    62,    39,    63,    39,     5,    62,
       5,    62,     5,     5,    61,   294,    62,    62,    62,    62,
      62,    62,     4,  1083,  1084,   226,   227,   228,   229,   230,
     231,   286,    65,     4,    50,     3,    62,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   295,   226,   227,   228,   229,   230,
     231,   286,   158,   158,   237,   235,   158,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     3,     4,     5,     6,     7,     8,   158,    10,
      11,   158,     3,     3,   294,    39,     4,    18,   188,    20,
      61,     3,    61,   141,   295,   141,   141,   141,   141,   141,
      62,   141,   141,     3,    63,    50,    50,     4,     4,    40,
       4,    61,    63,    62,    62,     4,    63,   294,     3,    62,
     379,    52,    53,    63,    63,    63,     9,   867,   620,    44,
      61,    67,   269,   167,    48,   224,    67,    68,   720,  1057,
     433,   401,     3,     4,     5,     6,     7,     8,    79,    10,
      11,   556,   844,   291,   305,    -1,   257,    18,    89,    20,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,   109,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,   295,   226,   227,   228,   229,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,   289,   290,
      18,    -1,    20,    -1,   295,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    79,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    40,   294,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    79,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    40,   164,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
     228,   229,   230,   231,   109,    -1,    -1,    -1,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
     228,   229,   230,   231,    -1,    -1,    -1,   295,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,   228,   229,   230,   231,   295,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,
     295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    79,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    89,    20,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    12,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     295,   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,
     295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    79,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    40,    -1,    -1,    -1,   294,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    79,    -1,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,   228,   229,   230,   231,   109,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,
     295,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
     295,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    79,    -1,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
     109,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,   295,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,
     229,   230,   231,   295,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    20,    -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      79,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      79,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,
     229,   230,   231,   109,    -1,    -1,    -1,   236,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,
     229,   230,   231,    -1,    -1,    -1,   295,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,   228,   229,   230,   231,   295,    -1,    -1,    -1,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,   295,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    79,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    12,    18,    -1,    20,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
     226,   227,   228,   229,   230,   231,    -1,    -1,    -1,    -1,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   138,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,   228,   229,   230,   231,    -1,    -1,    -1,   295,
      -1,    -1,    -1,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,
      -1,    -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,   294,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    73,    74,
      -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,   113,    -1,
      -1,    -1,    -1,    11,    -1,    60,    61,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,   151,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,   169,    -1,    -1,    18,    -1,    20,
      -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,   183,    -1,
     185,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,    18,   164,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,
       3,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    -1,
      -1,   226,   227,   228,   229,   230,   231,   138,    -1,    89,
      -1,    -1,    -1,   294,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   226,   227,
     228,   229,   230,   231,    -1,    -1,    89,    -1,    -1,    -1,
      -1,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   226,   227,   228,   229,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,    -1,    -1,   226,   227,   228,   229,
     230,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   226,   227,   228,   229,   230,   231,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   159,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    60,    61,    64,   164,   190,   293,   297,   298,   299,
     300,   301,   302,   303,   310,   311,   312,   316,   317,   333,
       3,   334,   335,   311,   312,   333,    68,   100,   339,   189,
     319,     3,     0,   106,   298,    64,    64,    26,    27,    28,
     142,   326,   327,   190,   316,    61,   336,   337,   294,    62,
      62,   319,     5,     7,    61,   320,   321,     3,    11,   355,
     339,   339,   339,    77,    65,   322,   319,   326,     3,   338,
      70,   334,     3,     4,     5,     6,     7,     8,    10,    11,
      18,    20,    40,    52,    53,    54,    61,    79,    89,    96,
     109,   226,   227,   228,   229,   230,   231,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   295,   311,   340,   341,   363,   364,   365,   366,
     367,   369,   374,   375,   376,   377,   378,   379,   367,    60,
     145,    63,    60,   350,   350,   316,   316,   316,   329,   330,
     367,    76,   143,   313,    11,   355,   322,   294,    62,   311,
      61,    63,    61,    61,   367,   366,   366,   311,   362,   367,
     367,   370,   311,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
       5,     7,   128,   318,   294,    52,    53,    54,    55,    56,
      57,    58,     3,     4,    12,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    70,   384,    62,
     182,    60,     3,    63,    61,   167,   167,   140,   328,   294,
      71,    98,   331,    61,   350,   350,   313,   338,    62,   362,
       3,    54,    63,    62,   362,    62,   362,    62,   294,   195,
     371,   372,    54,    62,   362,    54,    62,   362,    62,    62,
      62,   367,    62,   159,   232,   233,   327,   380,    68,   100,
     367,   382,   367,   382,   367,   382,   367,   382,   367,   382,
     367,   382,   367,   382,   367,   367,   367,   362,   367,   367,
      54,   367,   382,    54,   367,   382,   367,   382,   367,   382,
     367,   367,   367,    73,    74,    92,    93,    95,   113,   139,
     151,   169,   183,   185,   192,   193,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   385,    62,    62,
       3,     3,     3,     3,   385,   362,   367,   355,   114,   324,
     340,   366,   366,   366,   366,   366,   366,   366,     3,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,    48,
      49,    50,    67,    68,   292,   367,   386,   367,   386,   367,
     386,   367,   386,   367,   386,   367,   386,   367,   367,   366,
      61,   311,   368,     6,     8,     9,    40,   384,   182,    63,
       3,    63,     3,   138,   351,   352,   353,   374,   305,   306,
     367,   305,   367,   329,   116,   142,   201,   202,   203,   205,
     206,   207,   209,   212,   213,   215,   216,   217,   218,   219,
     220,   221,   224,   225,   314,   315,   167,   167,    62,    61,
      63,     3,    63,    62,    62,   362,   367,   104,   373,   371,
      62,    62,    62,    62,   379,   379,   379,    62,     5,    49,
     234,   236,   381,    77,   381,    62,   380,    62,    62,   367,
      62,   367,    62,   367,    62,   367,    62,   367,    62,   367,
      62,   367,    62,   294,    62,    62,   294,    62,    62,    62,
      62,    62,   367,    62,    62,   367,    62,   367,    62,   367,
     294,   294,   294,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    62,   294,   294,   294,   294,
     294,   294,    62,    70,     3,    11,    61,   311,   342,   343,
     344,   347,   355,   356,   374,   194,   323,   367,   366,   368,
     311,   311,   311,   311,   311,   311,    39,   362,     6,     8,
       9,     3,    63,    63,     3,    43,    63,   353,    62,   294,
     351,   288,   307,   294,   307,   158,   159,   142,   211,   120,
      17,    17,    26,   120,    17,    26,    26,    65,   208,     5,
     214,   214,    43,    43,     5,     5,   222,   223,   214,    62,
     294,   305,   305,    62,   362,     3,    54,    63,    61,    63,
       3,   181,   367,   105,   379,   235,     5,   234,   236,   235,
     158,   362,    62,   379,    62,   379,    62,   379,    62,   379,
      62,   379,    62,   379,    62,   379,    62,   379,   367,   379,
     379,   367,   379,   379,   379,    62,   379,   379,    62,    62,
     379,    62,     5,   367,   367,     5,     5,     5,     5,     5,
       5,   245,     5,   245,     5,     5,     5,     5,     5,   245,
       5,   367,   367,   367,   367,   367,   385,    63,     3,    63,
      70,   383,   191,   311,   343,   348,   356,    70,   337,   354,
     383,    14,    15,    16,    17,    18,    20,    23,    24,    25,
     294,   359,    70,   354,   383,    65,   345,    70,   383,   367,
     120,   325,    39,   366,    62,    63,     3,     3,   367,     3,
      63,   351,   289,   290,   308,   309,   341,   324,   305,   324,
     111,   111,   367,     5,     7,     5,     7,   314,   307,   307,
      62,    61,    63,     3,    62,   362,     3,    54,    63,   367,
     235,   237,   235,   237,   158,    62,   327,   380,   379,   379,
     379,   379,   379,   379,   379,    62,   294,    62,   294,   379,
     379,   379,   294,    62,    62,    62,    62,   294,    62,    62,
     294,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,   294,    62,    62,   294,   294,    62,   294,    62,
       3,    63,     3,   374,   383,    61,   349,    62,    62,   383,
     354,    17,   284,    23,   361,   201,   202,   203,   204,   360,
     343,   361,   361,   284,    61,   357,    61,   358,   342,    17,
     383,   354,   285,    70,   350,   383,   383,    77,   121,   332,
     366,     3,    63,     3,    63,    63,   128,   294,   194,   304,
     323,   304,   112,   137,   112,   137,   324,   324,    62,   362,
       3,    54,    61,    63,    62,    63,     3,    54,    39,    39,
      39,    39,    39,    62,   380,    62,   379,   367,   379,   367,
       5,     5,     5,     5,   367,   367,   367,    63,     3,    70,
     354,   383,   362,   354,   343,   343,   360,    21,   360,   360,
     343,   375,    70,   383,   367,    70,   383,   343,   354,    49,
      68,    70,   114,   287,   346,   383,   350,   362,   367,     3,
      63,   341,   341,    11,   355,   308,   236,   313,   313,   367,
     367,   367,   367,   304,   304,    62,    61,    63,    62,   362,
       3,    54,     3,    54,     5,   234,   236,     5,   234,   236,
       5,    95,   234,   236,     5,   234,   236,     5,   234,   236,
      62,    62,    62,   294,    62,    62,    62,    62,    62,    62,
       3,    63,   383,   354,    62,   367,    65,   383,    65,   383,
      21,     4,   286,     4,    50,   350,    63,     3,   336,   336,
     286,   158,   159,   158,   159,   158,   159,   158,   159,   313,
     313,    62,   362,     3,    54,    62,   235,   237,   235,   237,
     158,   235,   237,   235,   237,   158,   235,   237,   235,   237,
     158,   235,   237,   235,   237,   158,   235,   237,   235,   237,
     158,   379,   379,   367,    63,     3,   354,   294,     3,   363,
     363,   367,    39,     4,   188,    61,     3,     3,    11,   117,
     141,   141,   141,   141,   141,   141,   141,   141,    62,    62,
       3,   349,    63,    50,    50,     4,     4,     4,     3,    11,
       3,    63,   337,   337,   294,    63,     3,    62,    62,     4,
       3,    63,    62,    63,     3,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   296,   297,   298,   298,   299,   299,   299,   299,   299,
     300,   300,   301,   302,   303,   303,   303,   303,   304,   304,
     304,   304,   304,   305,   305,   306,   307,   307,   307,   307,
     308,   308,   309,   309,   309,   310,   311,   311,   312,   312,
     313,   313,   314,   314,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   316,   316,   317,   317,   317,   317,   318,   318,   319,
     319,   319,   319,   319,   320,   320,   321,   321,   321,   322,
     322,   323,   323,   324,   324,   325,   325,   326,   326,   327,
     327,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   329,   329,   330,   331,   331,   331,   332,   332,   333,
     334,   334,   335,   336,   336,   337,   338,   338,   339,   339,
     339,   340,   340,   341,   341,   341,   341,   342,   342,   343,
     343,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   345,
     345,   346,   346,   346,   346,   346,   347,   348,   349,   349,
     350,   350,   351,   351,   351,   352,   352,   353,   353,   353,
     354,   354,   355,   355,   355,   355,   355,   355,   355,   355,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   357,   358,   359,   359,   359,   359,   360,   360,
     360,   360,   360,   361,   361,   362,   362,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   365,   365,   365,   365,   365,   365,   365,
     365,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     368,   368,   369,   370,   370,   371,   371,   372,   373,   373,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   376,   376,   376,   376,   376,   376,
     376,   376,   377,   377,   377,   377,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   379,   379,   379,   379,
     379,   379,   379,   379,   380,   380,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
     381,   381,   381,   381,   382,   382,   383,   384,   384,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   385,   386,
     386,   386
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     2,    11,    11,    10,    10,     1,     5,
       5,     4,     4,     1,     3,     1,     0,     2,     5,     5,
       1,     3,     3,     3,     1,     1,     3,     3,     4,     5,
       0,     4,     1,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     3,
       3,     3,     3,     2,     2,     1,     3,     2,     2,     1,
       2,     1,     1,     9,     4,     4,     4,     0,     2,     0,
       2,     4,     3,     5,     1,     3,     1,     1,     3,     0,
       2,     0,     2,     0,     2,     0,     3,     0,     1,     3,
       4,     3,     3,     8,     8,     8,     8,     8,     8,     8,
       8,     1,     3,     2,     0,     1,     1,     0,     2,     2,
       1,     3,     4,     0,     1,     3,     1,     3,     0,     1,
       1,     1,     3,     1,     2,     3,     1,     1,     3,     1,
       1,     3,     5,     4,     4,     3,     2,     4,     3,     2,
       3,     2,     1,     3,     2,     1,     6,     5,     4,     0,
       3,     3,     4,     4,     7,     1,     3,     2,     3,     5,
       0,     4,     1,     3,     2,     1,     2,     1,     1,     3,
       0,     1,     1,     3,     5,     4,     7,     6,     6,     5,
       3,     6,     5,     4,     4,     4,     5,     4,     3,     5,
       4,     3,     7,     7,     3,     3,     3,     2,     0,     1,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     3,
       5,     5,     7,     7,     6,     6,     9,     9,     8,     8,
       8,     8,     7,     7,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     3,     1,     1,     1,
       2,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     4,     3,     4,     3,     4,
       3,     4,     3,     4,     3,     4,     3,     4,     3,     3,
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
       1,     4,     4,     1,     4,     1,     4,     4,     1,     1,
       1,     1
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
#line 3281 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3287 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3293 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3299 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3305 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3311 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3317 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3323 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TEMP_VARIABLE  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3329 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* sql_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3335 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* stmt_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3341 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3347 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* dml_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3353 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* another_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3359 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* use_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3365 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 303: /* update_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3371 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 304: /* opt_update_where  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3377 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 305: /* update_elem_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3383 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 306: /* update_elem  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3389 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 307: /* opt_output_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3395 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 308: /* dml_select_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3401 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 309: /* dml_select_item  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3407 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 310: /* select_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3413 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 311: /* select_with_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3419 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 312: /* select_no_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3425 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 313: /* opt_option_query_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3431 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 314: /* query_hint_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3437 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 315: /* query_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3443 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 316: /* select_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3449 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 317: /* simple_select  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3455 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 318: /* opt_into_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3461 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 319: /* opt_top  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3467 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 320: /* top_count  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3473 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 321: /* top_percent  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3479 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 322: /* opt_for_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3485 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 323: /* opt_where  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3491 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 324: /* opt_from_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3497 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 325: /* opt_groupby  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3503 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 326: /* opt_order_by  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3509 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 327: /* order_by  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3515 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 328: /* offset_fetch  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3521 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 329: /* sort_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3527 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 330: /* sort_key  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3533 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 331: /* opt_asc_desc  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3539 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 332: /* opt_having  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3545 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 333: /* with_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3551 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 334: /* with_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3557 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 335: /* common_table_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3563 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 336: /* opt_derived_column_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3569 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 337: /* simple_ident_list_with_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3575 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 338: /* simple_ident_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3581 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 339: /* opt_distinct  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3587 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 340: /* select_expr_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3593 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 341: /* projection  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3599 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 342: /* from_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3605 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 343: /* table_factor  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3611 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 344: /* table_factor_non_join  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3617 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 345: /* opt_for_system_time  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3623 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 346: /* system_time  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3629 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 347: /* table_value_constructor_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3635 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 348: /* table_value_constructor  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3641 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 349: /* row_value_expression_list_parens_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3647 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 350: /* opt_with_table_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3653 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 351: /* table_hint_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3659 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 352: /* table_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3665 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 353: /* table_hint_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3671 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 354: /* opt_simple_ident_list_with_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3677 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 355: /* relation_factor  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3683 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 356: /* joined_table  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3689 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 357: /* pivot_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3695 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 358: /* unpivot_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3701 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 359: /* join_type  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3707 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 362: /* expr_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3713 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 363: /* column_ref  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3719 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 364: /* expr_const  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3725 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 365: /* simple_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3731 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 366: /* arith_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3737 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 367: /* expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3743 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 368: /* in_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3749 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 369: /* case_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3755 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 370: /* case_arg  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3761 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 371: /* when_clause_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3767 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 372: /* when_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3773 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 373: /* case_default  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3779 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 374: /* func_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3785 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 375: /* aggregate_windowed_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3791 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 376: /* analytic_windowed_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3797 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 377: /* ranking_windowed_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3803 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 378: /* scalar_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3809 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 379: /* over_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3815 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 380: /* row_or_range_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3821 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 381: /* window_frame_extent  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3827 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 382: /* distinct_or_all  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3833 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 383: /* relation_name  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3839 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 384: /* column_label  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3845 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 385: /* data_type  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3851 "sqlparser_bison.cpp" /* yacc.c:1257  */
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

#line 3968 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 231 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 4162 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 242 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 4171 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 253 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4177 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 271 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_USE, E_USE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &E_USE_SERIALIZE_FORMAT;
}
#line 4186 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 282 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4204 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 298 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4222 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 314 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4240 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 330 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4258 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 348 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_GLO_SERIALIZE_FORMAT;
}
#line 4267 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 353 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_GLO_SERIALIZE_FORMAT;
}
#line 4276 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 358 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_SERIALIZE_FORMAT;
}
#line 4285 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 363 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_SERIALIZE_FORMAT;
}
#line 4294 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 372 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4303 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 380 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* t = nullptr;
    if (!Node::check_update_item((yyvsp[0].node), t))
    {
        yyerror(&(yylsp[0]), result, scanner, "update element format error");
    	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM, E_UPDATE_ELEM_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4318 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 393 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4324 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 395 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, E_OUTPUT_CLAUSE_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4333 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 400 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, E_OUTPUT_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4342 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 405 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, E_OUTPUT_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4351 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 414 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4360 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 422 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, E_DML_SELECT_ITEM_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DELETED_DML_SELECT_ITEM_SERIALIZE_FORMAT;
}
#line 4369 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 427 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, E_DML_SELECT_ITEM_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERTED_DML_SELECT_ITEM_SERIALIZE_FORMAT;
}
#line 4378 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 432 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, E_DML_SELECT_ITEM_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4387 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 445 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4396 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 450 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4405 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 458 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 4416 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 465 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-4].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 4428 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 476 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4434 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 478 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPTION_CLAUSE, E_OPTION_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OPTION_CLAUSE_SERIALIZE_FORMAT;
}
#line 4443 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 487 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_QUERY_HINT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4452 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 495 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH GROUP"); }
#line 4458 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 496 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ORDER GROUP"); }
#line 4464 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 497 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("CONCAT UNION"); }
#line 4470 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 498 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH UNION"); }
#line 4476 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 499 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE UNION"); }
#line 4482 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 500 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("LOOP JOIN"); }
#line 4488 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 501 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE JOIN"); }
#line 4494 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 502 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH JOIN"); }
#line 4500 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 503 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("EXPAND VIEWS"); }
#line 4506 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 504 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FAST", (yyvsp[0].node)); }
#line 4512 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 505 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE ORDER"); }
#line 4518 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 506 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE EXTERNALPUSHDOWN"); }
#line 4524 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 507 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX"); }
#line 4530 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 508 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 4536 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 509 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 4542 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 510 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4548 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 511 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4554 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 512 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4560 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 513 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4566 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 514 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXDOP", (yyvsp[0].node)); }
#line 4572 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 515 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXRECURSION", (yyvsp[0].node)); }
#line 4578 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 516 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("NO_PERFORMANCE_SPOOL"); }
#line 4584 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 517 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("OPTIMIZE FOR", (yyvsp[0].node)); }
#line 4590 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 518 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION SIMPLE"); }
#line 4596 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 519 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION FORCED"); }
#line 4602 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 520 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("RECOMPILE"); }
#line 4608 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 521 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ROBUST PLAN"); }
#line 4614 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 532 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4643 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 557 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4673 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 583 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4703 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 609 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4733 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 637 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4739 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 639 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INTO_CLAUSE, E_INTO_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &INTO_CLAUSE_SERIALIZE_FORMAT;
}
#line 4748 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 647 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4754 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 649 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, E_TOP_CNT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 4763 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 654 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, E_TOP_CNT_TIES_PROPERTY_CNT, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 4772 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 659 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, E_TOP_PCT_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 4781 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 664 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, E_TOP_PCT_TIES_PROPERTY_CNT, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 4790 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 673 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4799 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 683 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4808 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 691 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4814 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 693 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_CLAUSE, E_FOR_CLAUSE_PROPERTY_CNT, nullptr);
    (yyval.node)->serialize_format = &FOR_CLAUSE_1_SERIALIZE_FORMAT;
}
#line 4823 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 700 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4829 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 702 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4838 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 709 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4844 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 711 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4853 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 718 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4859 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 720 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4868 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 727 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4874 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 733 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4883 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 738 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4892 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 747 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_1;
}
#line 4901 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 752 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_2;
}
#line 4910 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 757 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_3;
}
#line 4919 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 762 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_4;
}
#line 4928 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 767 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_5;
}
#line 4937 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 772 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_6;
}
#line 4946 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 777 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_7;
}
#line 4955 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 782 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_8;
}
#line 4964 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 787 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_9;
}
#line 4973 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 792 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_10;
}
#line 4982 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 801 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4991 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 809 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 5000 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 817 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 5008 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 821 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 5016 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 825 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 5024 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 831 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5030 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 833 "./sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 5039 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 841 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 5048 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 850 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5057 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 858 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 5066 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 865 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5072 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 871 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5081 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 880 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5090 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 887 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5096 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 889 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 5104 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 893 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 5112 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 901 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5121 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 909 "./sqlparser.y" /* yacc.c:1646  */
    {
    // check sqlserver dialect
    Node* nd = Node::check_expr_is_column_alias((yyvsp[0].node));
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, nd);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5132 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 916 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5144 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 924 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5156 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 932 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5166 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 942 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5175 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 956 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 5184 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 961 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5193 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 966 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 5202 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 971 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5211 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 976 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5220 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 981 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5229 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 986 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5238 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 991 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5247 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 996 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5256 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1001 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5265 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1006 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5274 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1011 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5283 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1016 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5292 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1021 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5301 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1026 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5310 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1031 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, E_TEMP_VAR_FUN_CALL_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, nd, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5321 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1038 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, E_TEMP_VAR_FUN_CALL_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, nd, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5332 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1045 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, E_TEMP_VAR_FUN_CALL_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[-3].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, nd, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5343 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1054 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5349 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1056 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_SYSTEM_TIME, E_FOR_SYSTEM_TIME_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FOR_SYSTEM_TIME_SERIALIZE_FORMAT;
}
#line 5358 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1064 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "AS OF "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5367 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1069 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FROM "+(yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));
    delete((yyvsp[0].node));
}
#line 5377 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1075 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BETWEEN "+(yyvsp[-2].node)->text()+" AND "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));
    delete((yyvsp[0].node));
}
#line 5387 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1081 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CONTAINED IN("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));
    delete((yyvsp[-1].node));
}
#line 5397 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1087 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "ALL"); }
#line 5403 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1092 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5412 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1100 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR, E_TABLE_VALUE_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 5421 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1108 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5430 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1113 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-3].node));
    nd->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS_LIST, E_LIST_PROPERTY_CNT, nd, (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5441 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1122 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5447 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1124 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_TABLE_HINT, E_WITH_TABLE_HINT_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &WITH_TABLE_HINT_SERIALIZE_FORMAT;
}
#line 5456 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1133 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5465 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1138 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5474 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1148 "./sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[0]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = (yyvsp[0].node);
}
#line 5487 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1157 "./sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[-1]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_NOEXPAND, E_TABLE_HINT_NOEXPAND_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT;
}
#line 5501 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1172 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 5510 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1179 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5516 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1186 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5525 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1191 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 5534 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1196 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 5543 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1201 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 5552 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1206 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5561 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1211 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5570 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1216 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5579 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1221 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5588 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1229 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5597 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1234 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 5606 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1239 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 5616 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1245 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 5626 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1251 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 5636 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1257 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "OUTER");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 5646 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1263 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, E_PIVOT_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5655 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1268 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, E_PIVOT_TABLE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5664 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1273 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, E_PIVOT_TABLE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5673 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1278 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, E_UNPIVOT_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5682 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1283 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, E_UNPIVOT_TABLE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5691 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1288 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, E_UNPIVOT_TABLE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5700 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1296 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_CLAUSE, E_PIVOT_CLAUSE_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 5709 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1304 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_CLAUSE, E_UNPIVOT_CLAUSE_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 5718 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1312 "./sqlparser.y" /* yacc.c:1646  */
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
#line 5733 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1323 "./sqlparser.y" /* yacc.c:1646  */
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
#line 5748 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1334 "./sqlparser.y" /* yacc.c:1646  */
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
#line 5763 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1345 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 5771 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1351 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5777 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1352 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 5783 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1353 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 5789 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1354 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 3; }
#line 5795 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1355 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 4; }
#line 5801 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1359 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5807 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1360 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 5813 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1367 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5822 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1375 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5832 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1381 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 5842 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1387 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 5853 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1394 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 5863 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1400 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 5874 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1407 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5884 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1413 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5895 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1420 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5905 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1426 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5916 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1433 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5926 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1439 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5937 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1446 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5947 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1452 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5958 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1459 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5968 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1465 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5979 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1472 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5989 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1478 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 6000 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1493 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 6006 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1494 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 6012 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1495 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 6018 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1503 "./sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 6028 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1512 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 6037 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1522 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 6046 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1527 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 6055 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1532 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 6064 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1537 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 6073 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1542 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 6082 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1547 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 6091 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1552 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 6100 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1557 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 6109 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1562 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 6118 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1572 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_COLLATE_SERIALIZE_FORMAT;
}
#line 6127 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1577 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 6136 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1582 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_LE_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_LE_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_LE_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6165 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1607 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 6174 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1612 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_LT_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_LT_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_LT_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6203 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1637 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 6212 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1642 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_EQ_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_EQ_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_EQ_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6241 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1667 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 6250 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1672 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_GE_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_GE_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_GE_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6279 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1697 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 6288 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1702 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_GT_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_GT_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_GT_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6317 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1727 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 6326 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1732 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_NE_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_NE_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_NE_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6355 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1757 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 6364 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1762 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 6373 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1767 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 6382 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1772 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 6391 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1777 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_ADD_SERIALIZE_FORMAT;
}
#line 6400 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1782 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_MINUS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_MINUS_SERIALIZE_FORMAT;
}
#line 6409 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1787 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_MUL_SERIALIZE_FORMAT;
}
#line 6418 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1792 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_DIV, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_DIV_SERIALIZE_FORMAT;
}
#line 6427 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1797 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_REM, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_REM_SERIALIZE_FORMAT;
}
#line 6436 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1802 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_AND_SERIALIZE_FORMAT;
}
#line 6445 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1807 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_OR_SERIALIZE_FORMAT;
}
#line 6454 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1812 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_XOR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_XOR_SERIALIZE_FORMAT;
}
#line 6463 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1817 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 6472 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1822 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6481 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1827 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6490 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1832 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6499 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1837 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6508 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1842 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6517 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1847 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6526 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1852 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 6535 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1857 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 6544 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1862 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 6553 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1867 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 6562 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1872 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 6571 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1881 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 6580 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1889 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 6589 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1896 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6595 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1903 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 6604 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1911 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 6613 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1918 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6619 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1920 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 6628 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1933 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6640 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1941 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 6651 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1948 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6664 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1957 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6679 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1968 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6691 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1976 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6702 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1983 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6713 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1990 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6724 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1997 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEADD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6739 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 2008 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEDIFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6754 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 2019 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATENAME");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6767 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 2028 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEPART");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6780 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 2037 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6791 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 2044 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETUTCDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6802 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 2051 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6817 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 2062 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6828 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 2069 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN_ACTIVE_ROWVERSION");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6839 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 2076 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6852 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 2085 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list2 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list2->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-5].node), expr_list2);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-7].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STUFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6869 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 2098 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6880 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 2105 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6891 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 2112 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ISNULL");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6904 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 2124 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6915 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 2131 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6926 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 2138 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6937 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 2145 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6948 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 2152 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6959 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 2159 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6970 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 2166 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6981 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 2173 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6992 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 2180 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7003 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 2187 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7014 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 2194 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7025 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 2201 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7036 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2208 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7047 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2215 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7058 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 2222 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7069 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 2229 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7080 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2236 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7091 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2243 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7102 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2250 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7113 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2257 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7124 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2264 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7135 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2271 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7146 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2278 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7157 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2285 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7168 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2292 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7179 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2299 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7190 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2306 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7201 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2313 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7212 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2320 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7223 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2327 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7234 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2334 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7245 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2341 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7256 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2348 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7267 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2355 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7278 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2362 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7289 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2369 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7300 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2376 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7312 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2384 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7324 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2392 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7335 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2399 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7346 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2406 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7357 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2413 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7368 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2420 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7380 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2428 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7392 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2436 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7403 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2443 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7414 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2450 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7425 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2457 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING_ID");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7436 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2467 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "FIRST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7447 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2474 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7458 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2481 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7469 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2488 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7482 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2497 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7497 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2508 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7508 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2515 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7521 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2524 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7536 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2537 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7547 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2544 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7558 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2551 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7569 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2558 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NTILE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7580 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2568 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7592 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2576 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7604 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2584 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7616 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2592 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7628 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2600 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7640 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2608 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7650 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2614 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7661 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2621 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7672 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2628 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7683 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2635 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7694 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2642 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), (yyvsp[-9].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7706 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2650 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7718 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2658 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7730 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2666 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7742 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2674 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7754 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2682 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7764 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2688 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7775 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2695 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7786 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2702 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7797 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2709 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7808 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2718 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7817 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2723 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7826 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2728 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7835 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2733 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7844 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2738 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7853 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2743 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7862 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2748 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7871 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2753 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7880 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2761 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, E_ROWS_CLAUSE_PROPERTY_CNT, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 7890 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2767 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, E_RANGE_CLAUSE_PROPERTY_CNT, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 7900 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2776 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 7906 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2778 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 7912 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2780 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 7918 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2782 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 7924 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2784 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 7930 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2786 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 7936 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2788 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 7942 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2790 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 7948 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2792 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 7954 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2794 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 7960 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2796 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 7966 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2798 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 7972 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2800 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 7978 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2802 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 7984 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2804 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 7990 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2806 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 7996 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2808 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 8002 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2810 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 8008 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2812 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 8014 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2814 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 8020 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2816 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 8026 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2818 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 8032 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2820 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 8038 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2822 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 8044 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2824 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 8050 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 2826 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 8056 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2828 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 8062 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 2830 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 8068 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2834 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 8076 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 2838 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 8084 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 2856 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIGINT"); }
#line 8090 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 2858 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "INT"); }
#line 8096 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 2860 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLINT"); }
#line 8102 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 2862 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TINYINT"); }
#line 8108 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 2864 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-3].node)); delete((yyvsp[-1].node)); }
#line 8114 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 2866 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8120 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 2868 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL"); }
#line 8126 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 2870 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-3].node)); delete((yyvsp[-1].node)); }
#line 8132 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 2872 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8138 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 2874 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC"); }
#line 8144 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 2876 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIT"); }
#line 8150 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 2878 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "MONEY"); }
#line 8156 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 2880 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLMONEY"); }
#line 8162 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 2882 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "REAL"); }
#line 8168 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 2884 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "FLOAT("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8174 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 2886 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATE"); }
#line 8180 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 2888 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8186 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 2890 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET"); }
#line 8192 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 2892 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8198 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 2894 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2"); }
#line 8204 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 2896 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLDATETIME"); }
#line 8210 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 2898 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME"); }
#line 8216 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 2900 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8222 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 2902 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME"); }
#line 8228 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 2904 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8234 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 2906 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR"); }
#line 8240 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 2908 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8246 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 2910 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR(MAX)"); }
#line 8252 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 2912 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR"); }
#line 8258 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 2914 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TEXT"); }
#line 8264 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 2916 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8270 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 2918 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR"); }
#line 8276 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 2920 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8282 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 2922 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR(MAX)"); }
#line 8288 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 2924 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR"); }
#line 8294 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 2926 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8300 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 2928 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY"); }
#line 8306 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 2930 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8312 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 2932 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY(MAX)"); }
#line 8318 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 2934 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY"); }
#line 8324 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 2938 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 8330 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 2939 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 8336 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 2940 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 8342 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 8346 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 2942 "./sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
