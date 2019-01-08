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
#line 1 "sqlparser.y" /* yacc.c:339  */

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "sqlparser_bison.h"
#include "sqlparser_flex.h"

#include <stdio.h>
#include <string.h>
#include <strings.h>

int yyerror(YYLTYPE* llocp, ParseResult* result, yyscan_t scanner, const char *msg) {
    result->accept = false;
    result->errFirstLine = llocp->first_line;
    result->errFirstColumn = llocp->first_column;
    result->errDetail = msg;
	return 0;
}


#line 96 "sqlparser_bison.cpp" /* yacc.c:339  */

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
#line 36 "sqlparser.y" /* yacc.c:355  */

// %code requires block

#include "node.h"

#line 132 "sqlparser_bison.cpp" /* yacc.c:355  */

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
    ROBUST = 461
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 80 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 356 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 386 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   753

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  218
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  442

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   461

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    42,     2,     2,
      47,    48,    40,    38,   217,    39,    49,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    44,     2,     2,     2,     2,     2,
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
      35,    36,    37,    43,    45,    46,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
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
     215,   216
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   193,   193,   203,   204,   212,   213,   214,   219,   223,
     228,   236,   243,   255,   256,   264,   265,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   305,   306,   310,   335,   360,   385,
     414,   415,   420,   425,   430,   438,   439,   447,   448,   449,
     458,   459,   467,   468,   476,   477,   485,   489,   490,   498,
     499,   503,   508,   517,   522,   527,   532,   537,   542,   547,
     552,   557,   562,   570,   571,   579,   588,   591,   595,   602,
     603,   611,   619,   620,   628,   636,   637,   641,   649,   650,
     658,   659,   663,   670,   671,   679,   686,   694,   702,   711,
     712,   720,   721,   725,   730,   735,   740,   745,   753,   754,
     762,   763,   768,   778,   787,   800,   801,   802,   810,   811,
     816,   817,   822,   827,   832,   837,   842,   847,   855,   860,
     865,   871,   876,   882,   895,   906,   917,   928,   935,   936,
     937,   938,   939,   944,   945,   950,   951,   959,   960,   965,
     971,   976,   982,   987,   993,   998,  1004,  1009,  1015,  1020,
    1026,  1031,  1037,  1042,  1051,  1052,  1053,  1054,  1055,  1056,
    1061,  1062,  1063,  1069,  1070,  1071,  1072,  1081,  1082,  1087,
    1092,  1097,  1102,  1107,  1112,  1117,  1122,  1130,  1131,  1136,
    1141,  1146,  1151,  1156,  1161,  1166,  1171,  1176,  1181,  1186,
    1191,  1196,  1201,  1206,  1211,  1216,  1221,  1226,  1231,  1236,
    1244,  1245,  1253,  1261,  1262,  1266,  1267,  1275,  1283,  1284,
    1292,  1303,  1313,  1326,  1338,  1346,  1350,  1358,  1362,  1366,
    1368,  1370,  1372,  1374,  1376,  1378,  1380
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "CONDITIONLESS_JOIN",
  "CROSS", "FULL", "INNER", "JOIN", "LEFT", "NATURAL", "RIGHT", "ON",
  "USING", "UNION", "EXCEPT", "INTERSECT", "OR", "AND", "NOT", "COMP_LE",
  "COMP_LT", "COMP_EQ", "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE",
  "BETWEEN", "IN", "IS", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'",
  "UMINUS", "WITH", "'('", "')'", "'.'", "';'", "ADD", "ANY", "ALL",
  "ALTER", "AS", "ASC", "BEGI", "BIGINT", "BINARY", "BOOLEAN", "BOTH",
  "BROWSE", "BY", "CASCADE", "CASE", "CHARACTER", "CLUSTER", "COMMENT",
  "COMMIT", "CONSISTENT", "COLUMN", "COLUMNS", "CREATE", "CREATETIME",
  "CURRENT_USER", "CHANGE_OBI", "SWITCH_CLUSTER", "DATE", "DATETIME",
  "DEALLOCATE", "DECIMAL", "DEFAULT", "DELETE", "DESC", "DESCRIBE",
  "DISTINCT", "DOUBLE", "DROP", "DUAL", "ELSE", "END", "END_P", "ERROR",
  "EXECUTE", "EXISTS", "EXPLAIN", "FETCH", "FIRST", "FLOAT", "FOR", "FROM",
  "FROZEN", "FORCE", "GLOBAL", "GLOBAL_ALIAS", "GRANT", "GROUP", "HAVING",
  "HINT_BEGIN", "HINT_END", "HOTSPOT", "IDENTIFIED", "IF", "INTEGER",
  "INSERT", "INTO", "KEY", "LEADING", "LIMIT", "LOCAL", "LOCKED",
  "MEDIUMINT", "MEMORY", "MODIFYTIME", "MASTER", "NEXT", "NOEXPAND",
  "NUMERIC", "OFFSET", "ONLY", "ORDER", "OPTION", "OUTER", "PARAMETERS",
  "PERCENT", "PASSWORD", "PRECISION", "PREPARE", "PRIMARY", "READ_STATIC",
  "REAL", "RENAME", "REPLACE", "RESTRICT", "PRIVILEGES", "REVOKE",
  "ROLLBACK", "ROW", "ROWS", "KILL", "READ_CONSISTENCY", "SCHEMA", "SCOPE",
  "SELECT", "SESSION", "SESSION_ALIAS", "SET", "SHOW", "SMALLINT",
  "SNAPSHOT", "SPFILE", "START", "STATIC", "SYSTEM", "STRONG",
  "SET_MASTER_CLUSTER", "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES",
  "THEN", "TIES", "TIME", "TIMESTAMP", "TINYINT", "TRAILING",
  "TRANSACTION", "TO", "TOP", "UPDATE", "USER", "VALUES", "VARCHAR",
  "VARBINARY", "WHERE", "WHEN", "WORK", "PROCESSLIST", "QUERY",
  "CONNECTION", "WEAK", "LOOP", "HASH", "MERGE", "REMOTE", "CONCAT",
  "OPTIMIZE", "EXPAND", "VIEWS", "FAST", "DISABLE", "EXTERNALPUSHDOWN",
  "IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX", "KEEP", "PLAN", "KEEPFIXED",
  "MAX_GRANT_PERCENT", "MIN_GRANT_PERCENT", "MAXDOP", "MAXRECURSION",
  "NO_PERFORMANCE_SPOOL", "PARAMETERIZATION", "SIMPLE", "FORCED",
  "RECOMPILE", "ROBUST", "','", "$accept", "sql_stmt", "stmt_list", "stmt",
  "select_stmt", "select_with_parens", "select_no_parens",
  "opt_option_query_hint", "query_hint_list", "query_hint",
  "select_clause", "simple_select", "opt_top", "top_count", "top_percent",
  "opt_for_clause", "opt_where", "opt_from_clause", "opt_hint",
  "opt_groupby", "opt_order_by", "order_by", "offset_fetch", "sort_list",
  "sort_key", "opt_asc_desc", "opt_having", "with_clause", "with_list",
  "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_factor",
  "table_factor_non_join", "opt_with_table_hint", "table_hint_list",
  "table_hint", "table_hint_expr", "opt_simple_ident_list_with_parens",
  "relation_factor", "joined_table", "join_type", "join_hint",
  "join_outer", "expr_list", "column_ref", "expr_const", "simple_expr",
  "arith_expr", "expr", "in_expr", "case_expr", "case_arg",
  "when_clause_list", "when_clause", "case_default", "func_expr",
  "distinct_or_all", "relation_name", "column_label", "data_type", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    43,    45,
      42,    47,    37,   293,    94,   294,   295,    40,    41,    46,
      59,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
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
     455,   456,   457,   458,   459,   460,   461,    44
};
# endif

#define YYPACT_NINF -304

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-304)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,    32,   -24,  -304,  -304,    57,    23,    14,    96,  -304,
    -304,     4,  -304,   -41,   144,  -304,   -34,   182,   194,   -40,
    -304,  -304,  -304,  -304,   -40,   -40,   -40,   114,   169,  -304,
       4,   211,   172,  -304,    32,  -304,  -304,  -304,  -304,   107,
     -41,   -41,   -41,   580,   225,   157,   169,    73,   244,   251,
    -304,   116,   570,   276,   276,  -304,   198,  -304,  -304,  -304,
    -304,  -304,  -304,   580,   256,   256,   205,   580,   251,  -304,
     173,    87,  -304,  -304,  -304,   268,   437,  -304,  -304,  -304,
     266,  -304,   157,   211,  -304,  -304,   183,  -304,   580,   277,
     189,  -304,   221,   109,   622,   450,    67,   716,   192,   192,
      10,   288,   170,   704,   151,  -304,   580,  -304,   580,   256,
     256,   256,   256,   256,   256,   256,   580,   580,   131,   580,
     580,   580,   580,   580,   580,   580,   580,   256,   292,   220,
    -304,  -304,  -304,   356,  -304,  -304,   654,   168,   296,    65,
     158,   570,  -304,   342,  -304,   304,  -304,  -304,  -304,   305,
     124,   580,   306,  -304,    46,  -304,   580,   580,   267,   151,
     336,  -304,   192,   192,   372,   372,   372,   372,  -304,   349,
     716,   580,   256,   292,   414,   414,   414,   414,   414,   414,
     152,   187,   466,   205,  -304,  -304,  -304,  -304,  -304,   232,
    -102,   310,   460,    13,   104,   431,   382,   287,   487,  -304,
     289,   290,   467,   470,   495,   496,  -304,  -166,  -304,   297,
     463,   300,   379,  -304,   346,   471,     8,    41,  -304,     3,
    -304,     7,  -304,   580,   412,  -304,  -304,  -304,  -304,   179,
     679,   129,   473,   520,  -304,   247,   580,   433,  -304,   428,
     440,   187,   491,  -304,   256,   480,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,   529,
    -304,  -304,  -304,  -304,   166,   260,  -304,  -304,  -304,  -304,
    -304,  -304,   356,  -304,    48,    56,   465,   492,  -304,   536,
     144,   526,   413,   155,    65,   413,   413,    65,   527,   500,
     536,  -304,   144,   704,   488,   447,  -304,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,   513,  -304,   521,  -304,   566,   103,
     530,   580,   704,  -304,    66,   127,   256,   268,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,   532,    69,  -304,   144,  -304,
    -304,    65,  -304,   155,  -304,  -304,  -304,  -304,  -304,   315,
     155,   155,  -304,    65,     9,   144,   543,   580,   580,  -304,
    -304,   130,   533,   551,  -304,   135,   704,   580,   580,   580,
     580,   268,    88,   552,   599,  -304,  -304,  -304,   580,   556,
    -304,  -304,   579,   143,   601,   557,    -1,  -304,  -304,   543,
    -304,  -304,   704,   558,  -304,   136,   141,  -304,  -304,   364,
     378,   395,   409,   562,   609,   610,  -304,   704,   211,   580,
     567,   580,  -304,  -304,     9,  -304,  -304,   142,  -304,  -304,
    -304,  -304,   485,   486,   490,   493,   494,   498,   499,   501,
     618,  -304,  -304,   574,   704,   211,   704,  -304,  -304,  -304,
    -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,  -304,
     578,  -304
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     5,    66,     0,     0,     3,     7,    45,
       8,    69,    44,     0,    95,    91,    92,    45,     0,   100,
       1,     2,     4,     6,   100,   100,   100,     0,    60,    70,
      69,     0,     0,    96,     0,    10,     9,   101,   102,    50,
       0,     0,     0,     0,     0,    13,    60,    98,     0,     0,
      93,     0,     0,    47,    49,    48,   157,   174,   175,   177,
     176,   178,   179,     0,     0,     0,     0,   223,     0,   185,
      71,    83,   180,   181,   187,   197,    86,   183,   184,    61,
       0,    11,    13,     0,    97,    94,    55,    57,     0,    51,
       0,   108,    64,   103,   105,     0,     0,   208,   188,   189,
     185,     0,   155,   224,     0,   186,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    88,    85,     0,    12,    99,     0,     0,    53,     0,
      62,     0,   238,     0,   106,     0,   234,   235,   236,     0,
     155,     0,   158,   159,     0,   182,     0,     0,   228,   225,
       0,    84,   190,   191,   192,   193,   194,   196,   195,   207,
     206,     0,     0,     0,   198,   199,   200,   202,   201,   203,
     219,   204,     0,     0,   220,   217,   211,   209,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,    38,     0,    42,     0,
       0,    15,    56,    52,     0,   130,     0,     0,    65,   109,
     111,   118,   112,     0,    67,   104,   107,   230,   232,     0,
       0,     0,     0,     0,   156,     0,     0,     0,   226,    73,
      74,   205,     0,   218,     0,     0,   212,   210,   214,    27,
      28,    18,    22,    24,    20,    17,    23,    21,    19,     0,
      25,    26,    30,    31,     0,     0,    36,    37,    40,    41,
      43,    14,     0,    54,     0,    45,     0,   112,   237,     0,
     128,     0,   153,   148,     0,   153,   153,     0,     0,     0,
       0,   113,   128,    63,     0,    89,   243,   244,   246,   242,
     241,   245,   240,   239,     0,   231,   160,   161,     0,     0,
       0,     0,   229,   222,     0,     0,     0,   215,   221,    39,
      33,    32,    35,    34,    16,   131,     0,   138,   128,   129,
     117,     0,   154,   148,   149,   150,   151,   152,   147,     0,
     148,   148,   110,     0,     0,   128,   118,     0,     0,    46,
     233,     0,     0,   164,   165,     0,   227,     0,     0,     0,
       0,   216,     0,   133,     0,   115,   143,   144,     0,     0,
     145,   146,     0,   126,     0,     0,   120,   123,   125,   118,
     116,    68,    90,   162,   163,     0,     0,   172,   173,     0,
       0,     0,     0,   132,     0,     0,   137,   140,     0,     0,
       0,     0,   124,   119,     0,   122,   114,     0,   170,   171,
     168,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   136,   135,     0,   139,     0,   127,   121,   166,   167,
      75,    77,    76,    78,    79,    81,    80,    82,   134,   142,
       0,   141
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -304,  -304,   623,  -304,  -304,     1,   117,   550,   361,  -304,
     208,  -304,  -304,  -304,  -304,   588,  -304,  -304,  -304,  -304,
     606,  -304,  -304,   531,  -304,  -304,  -304,  -304,   603,  -304,
    -304,   624,   -79,   230,   502,  -304,   353,  -209,  -304,  -161,
    -277,  -304,   270,  -236,  -304,   425,  -304,  -303,    11,   -90,
    -304,  -304,  -304,   -25,   -43,   469,  -304,  -304,   503,  -304,
    -304,  -273,  -304,  -185,   517,  -304
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    69,    18,    81,   210,   211,
      11,    12,    52,    89,    90,    45,   224,   140,    19,   295,
      28,    29,   107,    70,    71,   132,   349,    13,    15,    16,
      32,   329,    48,    39,    92,    93,   218,   219,   220,   291,
     375,   376,   377,   330,   221,   222,   288,   338,   333,   101,
      72,    73,    74,    75,   102,   185,    77,   104,   158,   159,
     237,    78,   151,   280,   144,   304
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,     9,   373,    17,   135,   149,     2,   276,     9,    94,
     278,   215,   373,    37,     9,   281,   282,   283,   284,   285,
      97,   286,     1,     2,   103,    24,    25,    26,   253,   249,
     367,   -45,   -45,   -45,   254,    14,   292,   370,   371,    98,
      99,     9,     9,     9,   278,   136,    38,   268,   269,   232,
      85,   325,   150,   289,     1,   216,   346,    20,    35,   278,
       1,     2,   290,   160,     3,    76,   234,   100,   215,   105,
     152,   378,   363,   169,   170,   339,   174,   175,   176,   177,
     178,   179,   180,   181,   162,   163,   164,   165,   166,   167,
     168,   393,   365,   245,   328,   233,   279,   326,    94,   405,
     250,   378,   182,   378,    35,   345,   353,   153,   230,   379,
     -45,   279,   216,     4,   235,    21,   154,    10,   364,   256,
     255,    86,   366,    87,    10,   257,   374,   427,   241,   184,
       4,   378,   306,   383,   372,    27,   374,   394,   387,   408,
     217,   -45,   -45,   354,   410,   428,    23,   242,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,     4,    88,   357,   171,   172,   173,     4,   307,
     384,   320,   401,   321,   184,   388,   409,    43,   308,   229,
     293,   411,   429,    34,   100,   380,   126,   127,   128,   129,
      95,    31,   358,   312,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,    56,    57,
      58,    59,    60,    61,    47,    62,   404,   275,   406,   317,
     287,    30,   127,   128,   129,   359,   186,    49,   187,   188,
      35,    63,   111,   112,   113,   114,   115,   296,   246,   297,
     247,   248,    36,    64,    65,    95,   189,    96,    53,    54,
      55,     1,    66,   360,    40,    41,    42,   381,   298,    56,
      57,    58,    59,    60,    61,   322,    62,   323,   356,    44,
      67,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   217,    51,    79,   217,    80,
      83,   361,    84,   299,    64,    65,   340,   341,     2,    26,
      68,   300,   106,    66,   108,   382,   109,   110,   111,   112,
     113,   114,   115,   133,   389,   390,   391,   392,   -58,   423,
     301,    67,   139,   137,   138,   397,   141,   281,   282,   283,
     284,   285,   217,   286,   368,   369,   155,   157,   302,   183,
     213,   156,   214,   223,   217,   142,   440,   334,   335,   336,
     337,    68,   227,   228,   303,   231,   424,   236,   426,     4,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   156,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   115,   251,   311,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   125,   126,   127,
     128,   129,   258,    56,    57,    58,    59,    60,    61,   190,
      62,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   252,    63,   281,   282,   283,
     284,   285,   259,   286,   239,   240,   260,   191,    64,    65,
     145,   244,   261,   130,   262,   263,   264,    66,   146,   265,
     266,   267,   270,   147,   109,   110,   111,   112,   113,   114,
     115,   271,   412,   413,   -59,    67,   316,   272,   273,   294,
     274,   131,   309,   310,   313,   314,   414,   415,   318,   109,
     110,   111,   112,   113,   114,   115,   148,   315,   319,   278,
     327,   331,   343,   416,   417,    68,   332,   344,   192,   193,
     194,   347,   195,   196,   197,   348,   198,   418,   419,   199,
     200,   350,   201,   202,   203,   204,   205,   206,   207,   352,
     351,   208,   209,    56,    57,    58,    59,    60,    61,   355,
      62,   362,   385,    56,    57,    58,    59,    60,    61,   289,
      62,   281,   282,   283,   284,   285,    63,   286,   399,   400,
     386,   395,   396,   398,   373,   403,    63,   407,    64,    65,
      91,   420,   421,   422,   425,   430,   431,    66,    64,    65,
     432,   438,   439,   433,   434,   142,   441,    66,   435,   436,
      22,   437,   134,   324,    82,    67,    46,    50,    33,   161,
     342,   277,   243,   225,   402,    67,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     226,     0,   238,     0,     0,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,     0,   143,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   212,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   305,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129
};

static const yytype_int16 yycheck[] =
{
      43,     0,     3,     2,    83,    95,    47,   216,     7,    52,
       3,     3,     3,    53,    13,    12,    13,    14,    15,    16,
      63,    18,    46,    47,    67,    21,    22,    23,    15,   131,
     333,    21,    22,    23,    21,     3,   221,   340,   341,    64,
      65,    40,    41,    42,     3,    88,    86,   213,   214,     3,
      49,     3,    95,    46,    46,    47,   292,     0,    48,     3,
      46,    47,    55,   106,    50,   108,   156,    66,     3,    68,
       3,   344,     3,   116,   117,   284,   119,   120,   121,   122,
     123,   124,   125,   126,   109,   110,   111,   112,   113,   114,
     115,     3,   328,   183,   279,    49,    55,    49,   141,   376,
     202,   374,   127,   376,    48,   290,     3,    40,   151,   345,
     100,    55,    47,   154,   157,    92,    49,     0,    49,    15,
     107,     5,   331,     7,     7,    21,   127,   404,   171,   128,
     154,   404,     3,     3,   343,   131,   127,    49,     3,     3,
     139,   131,   132,    40,     3,     3,    50,   172,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,   154,    47,    98,    34,    35,    36,   154,    40,
      40,     5,    29,     7,   173,    40,    40,    63,    49,    55,
     223,    40,    40,   217,   183,   346,    34,    35,    36,    37,
      47,    47,   126,   236,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,     3,     4,
       5,     6,     7,     8,     3,    10,   217,   216,   379,   244,
     217,    13,    35,    36,    37,    98,     6,    55,     8,     9,
      48,    26,    40,    41,    42,    43,    44,    58,     6,    60,
       8,     9,    48,    38,    39,    47,    26,    49,    40,    41,
      42,    46,    47,   126,    24,    25,    26,   347,    79,     3,
       4,     5,     6,     7,     8,     5,    10,     7,   311,   100,
      65,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   284,   179,    62,   287,   132,
     217,   316,    48,   114,    38,    39,   285,   286,    47,    23,
      95,   122,   129,    47,   217,   348,    38,    39,    40,    41,
      42,    43,    44,    47,   357,   358,   359,   360,   135,   398,
     141,    65,   101,    46,   135,   368,   217,    12,    13,    14,
      15,    16,   331,    18,    19,    20,    48,   186,   159,    47,
     172,   217,    46,   185,   343,     3,   425,   192,   193,   194,
     195,    95,    48,    48,   175,    49,   399,    90,   401,   154,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,   217,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    44,   107,   171,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    33,    34,    35,
      36,    37,    21,     3,     4,     5,     6,     7,     8,   103,
      10,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    15,    26,    12,    13,    14,
      15,    16,   100,    18,   148,   149,   199,   131,    38,    39,
      40,    25,     5,    56,   205,   205,    29,    47,    48,    29,
       5,     5,   205,    53,    38,    39,    40,    41,    42,    43,
      44,    48,   148,   149,   135,    65,    25,   217,   172,   107,
      49,    84,    49,     3,    91,    97,   148,   149,    48,    38,
      39,    40,    41,    42,    43,    44,    86,    97,     9,     3,
      48,    15,    15,   148,   149,    95,   133,    47,   192,   193,
     194,    63,   196,   197,   198,   108,   200,   148,   149,   203,
     204,    48,   206,   207,   208,   209,   210,   211,   212,     3,
      49,   215,   216,     3,     4,     5,     6,     7,     8,    49,
      10,    49,    49,     3,     4,     5,     6,     7,     8,    46,
      10,    12,    13,    14,    15,    16,    26,    18,    19,    20,
      49,    49,     3,    47,     3,    48,    26,    49,    38,    39,
      40,    49,     3,     3,    47,   130,   130,    47,    38,    39,
     130,     3,    48,   130,   130,     3,    48,    47,   130,   130,
       7,   130,    82,   272,    46,    65,    30,    34,    14,   108,
     287,   216,   173,   141,   374,    65,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     143,    -1,   159,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    55,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    46,    47,    50,   154,   219,   220,   221,   222,   223,
     224,   228,   229,   245,     3,   246,   247,   223,   224,   236,
       0,    92,   220,    50,    21,    22,    23,   131,   238,   239,
     228,    47,   248,   249,   217,    48,    48,    53,    86,   251,
     251,   251,   251,    63,   100,   233,   238,     3,   250,    55,
     246,   179,   230,   228,   228,   228,     3,     4,     5,     6,
       7,     8,    10,    26,    38,    39,    47,    65,    95,   223,
     241,   242,   268,   269,   270,   271,   272,   274,   279,    62,
     132,   225,   233,   217,    48,   223,     5,     7,    47,   231,
     232,    40,   252,   253,   272,    47,    49,   272,   271,   271,
     223,   267,   272,   272,   275,   223,   129,   240,   217,    38,
      39,    40,    41,    42,    43,    44,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      56,    84,   243,    47,   225,   250,   272,    46,   135,   101,
     235,   217,     3,    55,   282,    40,    48,    53,    86,   267,
     272,   280,     3,    40,    49,    48,   217,   186,   276,   277,
     272,   241,   271,   271,   271,   271,   271,   271,   271,   272,
     272,    34,    35,    36,   272,   272,   272,   272,   272,   272,
     272,   272,   271,    47,   223,   273,     6,     8,     9,    26,
     103,   131,   192,   193,   194,   196,   197,   198,   200,   203,
     204,   206,   207,   208,   209,   210,   211,   212,   215,   216,
     226,   227,    48,   172,    46,     3,    47,   223,   254,   255,
     256,   262,   263,   185,   234,   252,   282,    48,    48,    55,
     272,    49,     3,    49,   267,   272,    90,   278,   276,   148,
     149,   272,   271,   273,    25,   267,     6,     8,     9,   131,
     202,   107,    15,    15,    21,   107,    15,    21,    21,   100,
     199,     5,   205,   205,    29,    29,     5,     5,   213,   214,
     205,    48,   217,   172,    49,   223,   255,   263,     3,    55,
     281,    12,    13,    14,    15,    16,    18,   217,   264,    46,
      55,   257,   281,   272,   107,   237,    58,    60,    79,   114,
     122,   141,   159,   175,   283,    48,     3,    40,    49,    49,
       3,   171,   272,    91,    97,    97,    25,   271,    48,     9,
       5,     7,     5,     7,   226,     3,    49,    48,   281,   249,
     261,    15,   133,   266,   192,   193,   194,   195,   265,   255,
     266,   266,   254,    15,    47,   281,   261,    63,   108,   244,
      48,    49,     3,     3,    40,    49,   272,    98,   126,    98,
     126,   271,    49,     3,    49,   261,   255,   265,    19,    20,
     265,   265,   255,     3,   127,   258,   259,   260,   279,   261,
     257,   267,   272,     3,    40,    49,    49,     3,    40,   272,
     272,   272,   272,     3,    49,    49,     3,   272,    47,    19,
      20,    29,   260,    48,   217,   258,   257,    49,     3,    40,
       3,    40,   148,   149,   148,   149,   148,   149,   148,   149,
      49,     3,     3,   250,   272,    47,   272,   258,     3,    40,
     130,   130,   130,   130,   130,   130,   130,   130,     3,    48,
     250,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   218,   219,   220,   220,   221,   221,   221,   222,   223,
     223,   224,   224,   225,   225,   226,   226,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   228,   228,   229,   229,   229,   229,
     230,   230,   230,   230,   230,   231,   231,   232,   232,   232,
     233,   233,   234,   234,   235,   235,   236,   237,   237,   238,
     238,   239,   239,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   241,   241,   242,   243,   243,   243,   244,
     244,   245,   246,   246,   247,   248,   248,   249,   250,   250,
     251,   251,   251,   252,   252,   253,   253,   253,   253,   254,
     254,   255,   255,   256,   256,   256,   256,   256,   257,   257,
     258,   258,   258,   259,   259,   260,   260,   260,   261,   261,
     262,   262,   262,   262,   262,   262,   262,   262,   263,   263,
     263,   263,   263,   263,   264,   264,   264,   264,   265,   265,
     265,   265,   265,   266,   266,   267,   267,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   269,   269,   269,   269,   269,   269,
     270,   270,   270,   270,   270,   270,   270,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     273,   273,   274,   275,   275,   276,   276,   277,   278,   278,
     279,   279,   279,   279,   279,   280,   280,   281,   282,   283,
     283,   283,   283,   283,   283,   283,   283
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     1,     3,
       3,     4,     5,     0,     4,     1,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     3,     3,     3,     3,     2,     2,     1,     3,
       2,     2,     1,     2,     1,     1,     9,     4,     4,     4,
       0,     2,     4,     3,     5,     1,     3,     1,     1,     3,
       0,     2,     0,     2,     0,     2,     0,     0,     3,     0,
       1,     3,     4,     3,     3,     8,     8,     8,     8,     8,
       8,     8,     8,     1,     3,     2,     0,     1,     1,     0,
       2,     2,     1,     3,     4,     0,     1,     3,     1,     3,
       0,     1,     1,     1,     3,     1,     2,     3,     1,     1,
       3,     1,     1,     2,     5,     4,     4,     3,     0,     4,
       1,     3,     2,     1,     2,     1,     1,     3,     0,     1,
       1,     3,     5,     4,     7,     6,     6,     5,     3,     6,
       5,     8,     7,     4,     3,     3,     3,     2,     0,     1,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     3,
       5,     5,     7,     7,     6,     6,     9,     9,     8,     8,
       8,     8,     7,     7,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     2,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     3,     2,     3,
       4,     3,     4,     3,     4,     5,     6,     3,     4,     3,
       1,     3,     5,     0,     1,     1,     2,     4,     0,     2,
       4,     5,     4,     6,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1729 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1735 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1741 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1747 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1753 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1759 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1765 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1771 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* sql_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1777 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* stmt_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1783 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1789 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* select_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1795 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* select_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1801 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* select_no_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1807 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* opt_option_query_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1813 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* query_hint_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1819 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* query_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1825 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* select_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1831 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* simple_select  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1837 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* opt_top  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1843 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* top_count  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1849 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* top_percent  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1855 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* opt_for_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1861 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* opt_where  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1867 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* opt_from_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1873 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* opt_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1879 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* opt_groupby  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1885 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* opt_order_by  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1891 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* order_by  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1897 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* offset_fetch  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1903 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* sort_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1909 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* sort_key  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1915 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* opt_asc_desc  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1921 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* opt_having  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1927 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* with_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1933 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* with_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1939 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* common_table_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1945 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* opt_derived_column_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1951 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* simple_ident_list_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1957 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* simple_ident_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1963 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* opt_distinct  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1969 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* select_expr_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1975 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* projection  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1981 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* from_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1987 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* table_factor  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1993 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 256: /* table_factor_non_join  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1999 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 257: /* opt_with_table_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2005 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* table_hint_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2011 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* table_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2017 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 260: /* table_hint_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2023 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 261: /* opt_simple_ident_list_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2029 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 262: /* relation_factor  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2035 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 263: /* joined_table  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2041 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 264: /* join_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2047 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 267: /* expr_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2053 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 268: /* column_ref  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2059 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 269: /* expr_const  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2065 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 270: /* simple_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2071 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 271: /* arith_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2077 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 272: /* expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2083 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 273: /* in_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2089 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 274: /* case_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2095 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 275: /* case_arg  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2101 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 276: /* when_clause_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2107 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 277: /* when_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2113 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 278: /* case_default  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2119 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 279: /* func_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2125 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 280: /* distinct_or_all  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2131 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 281: /* relation_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2137 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 282: /* column_label  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2143 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 283: /* data_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2149 "sqlparser_bison.cpp" /* yacc.c:1257  */
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
#line 59 "sqlparser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 2266 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 194 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 2460 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 205 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &STMT_LIST_SERIALIZE_FORMAT;
}
#line 2469 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 212 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2475 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 224 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2484 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 229 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2493 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 237 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 2504 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 244 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-4].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 2516 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 255 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2522 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 257 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPTION_CLAUSE, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OPTION_CLAUSE_SERIALIZE_FORMAT;
}
#line 2531 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 266 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_QUERY_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 2540 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 274 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH GROUP"); }
#line 2546 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 275 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ORDER GROUP"); }
#line 2552 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 276 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("CONCAT UNION"); }
#line 2558 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 277 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH UNION"); }
#line 2564 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 278 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE UNION"); }
#line 2570 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 279 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("LOOP JOIN"); }
#line 2576 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 280 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE JOIN"); }
#line 2582 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 281 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH JOIN"); }
#line 2588 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 282 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("EXPAND VIEWS"); }
#line 2594 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 283 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FAST", (yyvsp[0].node)); }
#line 2600 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 284 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE ORDER"); }
#line 2606 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 285 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE EXTERNALPUSHDOWN"); }
#line 2612 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 286 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX"); }
#line 2618 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 287 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 2624 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 288 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 2630 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 289 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 2636 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 290 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 2642 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 291 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 2648 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 292 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 2654 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 293 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXDOP", (yyvsp[0].node)); }
#line 2660 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 294 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXRECURSION", (yyvsp[0].node)); }
#line 2666 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 295 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("NO_PERFORMANCE_SPOOL"); }
#line 2672 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 296 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("OPTIMIZE FOR", (yyvsp[0].node)); }
#line 2678 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 297 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION SIMPLE"); }
#line 2684 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 298 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION FORCED"); }
#line 2690 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 299 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("RECOMPILE"); }
#line 2696 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 300 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ROBUST PLAN"); }
#line 2702 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 312 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                    (yyvsp[-6].node),             /* E_SELECT_DISTINCT 0 */
                    (yyvsp[-4].node),             /* E_SELECT_SELECT_EXPR_LIST 1 */
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
                    (yyvsp[-7].node),             /* E_SELECT_HINTS 13 */
                    nullptr,        /* E_SELECT_WHEN 14 */
                    (yyvsp[-5].node),             /* E_SELECT_OPT_TOP 15 */
                    nullptr,        /* E_SELECT_OPT_WITH 16 */
                    nullptr	    /* E_SELECT_OPT_OPTION 17 */
                    );
    (yyval.node)->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
#line 2730 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 336 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr	             /* E_SELECT_OPT_OPTION 17 */
                        );
    (yyval.node)->serialize_format = &SELECT_UNION_SERIALIZE_FORMAT;
}
#line 2759 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 361 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr	             /* E_SELECT_OPT_OPTION 17 */
                        );
    (yyval.node)->serialize_format = &SELECT_INTERSECT_SERIALIZE_FORMAT;
}
#line 2788 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 386 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr	             /* E_SELECT_OPT_OPTION 17 */
                        );
    (yyval.node)->serialize_format = &SELECT_EXCEPT_SERIALIZE_FORMAT;
}
#line 2817 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 414 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2823 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 416 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 2832 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 421 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 2841 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 426 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 2850 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 431 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 2859 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 440 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2868 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 450 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2877 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 458 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2883 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 460 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_CLAUSE, 1, nullptr);
    (yyval.node)->serialize_format = &FOR_CLAUSE_1_SERIALIZE_FORMAT;
}
#line 2892 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 467 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2898 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 469 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 2907 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 476 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2913 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 478 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 2922 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 485 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2928 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 489 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2934 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 491 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 2943 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 498 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2949 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 504 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 2958 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 509 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT_0;
}
#line 2967 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 518 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_1;
}
#line 2976 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 523 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_2;
}
#line 2985 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 528 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_3;
}
#line 2994 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 533 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_4;
}
#line 3003 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 538 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_5;
}
#line 3012 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 543 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_6;
}
#line 3021 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 548 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_7;
}
#line 3030 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 553 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_8;
}
#line 3039 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 558 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_9;
}
#line 3048 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 563 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_10;
}
#line 3057 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 572 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 3066 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 580 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 3075 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 588 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 3083 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 592 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 3091 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 596 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 3099 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 602 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3105 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 604 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 3114 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 612 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 3123 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 621 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 3132 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 629 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 3141 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 636 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3147 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 642 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3156 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 651 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 3165 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 658 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3171 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 660 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 3179 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 664 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 3187 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 672 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SELECT_EXPR_LIST_SERIALIZE_FORMAT;
}
#line 3196 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 680 "sqlparser.y" /* yacc.c:1646  */
    {
    // check sqlserver dialect
    Node* nd = Node::check_expr_is_column_alias((yyvsp[0].node));
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, nd);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 3207 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 687 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = &ALIAS_1_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 3219 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 695 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 3231 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 703 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 3241 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 713 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FORM_LIST_SERIALIZE_FORMAT;
}
#line 3250 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 726 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_4_SERIALIZE_FORMAT;
}
#line 3259 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 731 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
#line 3268 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 736 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
#line 3277 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 741 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_4_SERIALIZE_FORMAT;
}
#line 3286 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 746 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ALIAS_4_SERIALIZE_FORMAT;
}
#line 3295 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 753 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3301 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 755 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_TABLE_HINT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &WITH_TABLE_HINT_SERIALIZE_FORMAT;
}
#line 3310 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 764 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 3319 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 769 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 3328 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 779 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[0]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = (yyvsp[0].node);
}
#line 3341 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 788 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[-1]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_NOEXPAND, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT;
}
#line 3355 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 803 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 3364 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 810 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3370 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 818 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 3379 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 823 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 3388 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 828 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 3397 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 833 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3406 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 838 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3415 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 843 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3424 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 848 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3433 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 856 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3442 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 861 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3451 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 866 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3461 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 872 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 3470 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 877 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 3480 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 883 "sqlparser.y" /* yacc.c:1646  */
    {
    //Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    //$$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, $1, $4, nullptr);
    //$$->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    Node* cj = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), nullptr, nullptr);
    cj->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
    (yyval.node) = Node::addjust_cross_join((yyvsp[0].node), cj);
}
#line 3494 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 896 "sqlparser.y" /* yacc.c:1646  */
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
#line 3509 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 907 "sqlparser.y" /* yacc.c:1646  */
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
#line 3524 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 918 "sqlparser.y" /* yacc.c:1646  */
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
#line 3539 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 929 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 3547 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 935 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3553 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 936 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 3559 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 937 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 3565 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 938 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 3; }
#line 3571 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 939 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 4; }
#line 3577 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 944 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3583 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 945 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 3589 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 952 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 3598 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 961 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 3607 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 966 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nd, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 3617 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 972 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 3626 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 977 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, nd, (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 3636 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 983 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 3645 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 988 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 3655 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 994 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 3664 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 999 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 3674 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1005 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 3683 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1010 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 3693 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1016 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 3702 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1021 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 3712 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1027 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 3721 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1032 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 3731 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1038 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 3740 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1043 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 3750 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1064 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3760 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1073 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 3769 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1083 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 3778 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1088 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 3787 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1093 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 3796 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1098 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 3805 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1103 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 3814 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1108 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 3823 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1113 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 3832 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1118 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 3841 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1123 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 3850 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1132 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 3859 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1137 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 3868 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1142 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 3877 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1147 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 3886 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1152 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 3895 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1157 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 3904 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1162 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 3913 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1167 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 3922 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1172 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 3931 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1177 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 3940 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1182 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 3949 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1187 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3958 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1192 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3967 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1197 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3976 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1202 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3985 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1207 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3994 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1212 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4003 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1217 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 4012 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1222 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 4021 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1227 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 4030 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1232 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 4039 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1237 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 4048 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1246 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4057 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1254 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 4066 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1261 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4072 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1268 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_LIST_SERIALIZE_FORMAT;
}
#line 4081 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1276 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 4090 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1283 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4096 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1285 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 4105 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1293 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::IS_CAN_WITH_STAR_FUNCTION((yyvsp[-3].node)->terminalToken_.str))
    {
    	yyerror(&(yylsp[-3]), result, scanner, "Only COUNT function can be with parameter '*'");
    	YYABORT;
    }
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), star);
    (yyval.node)->serialize_format = &FUN_CALL_1_SERIALIZE_FORMAT;
}
#line 4120 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1304 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::IS_AGGREGATE_FUNCTION((yyvsp[-4].node)->terminalToken_.str))
    {
    	yyerror(&(yylsp[-4]), result, scanner, "Only aggregate function can be with option distinct, all");
    	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_2_SERIALIZE_FORMAT;
}
#line 4134 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1314 "sqlparser.y" /* yacc.c:1646  */
    {
    if (Node::ListLength((yyvsp[-1].node)) > 1 &&
    	Node::IS_ONE_PARAM_FUNCTION((yyvsp[-3].node)->terminalToken_.str))
    {
    	std::string err = (yyvsp[-3].node)->terminalToken_.str;
    	err += " function only support 1 parameter";
	yyerror(&(yylsp[-3]), result, scanner, err.c_str());
	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_SERIALIZE_FORMAT;
}
#line 4151 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1327 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::IS_CAN_WITH_AS_FUNCTION((yyvsp[-5].node)->terminalToken_.str))
    {
    	std::string err = (yyvsp[-5].node)->terminalToken_.str;
	err += " function not support as option";
	yyerror(&(yylsp[-5]), result, scanner, err.c_str());
	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_3_SERIALIZE_FORMAT;
}
#line 4167 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1339 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_4_SERIALIZE_FORMAT;
}
#line 4176 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1347 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4184 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1351 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4192 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1367 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
#line 4198 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1369 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
#line 4204 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1371 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
#line 4210 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1373 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
#line 4216 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1375 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
#line 4222 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1377 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
#line 4228 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1379 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DOUBLE, "REAL"); }
#line 4234 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1381 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DATETIME, "DATETIME"); }
#line 4240 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 4244 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 1384 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
