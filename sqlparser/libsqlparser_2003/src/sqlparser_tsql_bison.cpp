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

/* Substitute the type names.  */
#define YYSTYPE         TSQL_STYPE
#define YYLTYPE         TSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         tsql_parse
#define yylex           tsql_lex
#define yyerror         tsql_error
#define yydebug         tsql_debug
#define yynerrs         tsql_nerrs


/* Copy the first part of user declarations.  */
#line 1 "./sqlparser_tsql.y" /* yacc.c:339  */

/**
 * This Grammar is designed for sql2003.
 * https://github.com/Raphael2017/SQL/blob/master/sql-2003-2.bnf
 * sqlparser.y
 * defines sqlparser_sql2003_bison.h
 * outputs sqlparser_sql2003_bison.cpp
 *
 * Bison Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "sqlparser_tsql_bison.h"
#include "sqlparser_tsql_flex.h"

#include <stdio.h>
#include <string.h>
//#include <strings.h>

/*
 * We provide parse error includes error message, first line, first column of error lex for debug
 */
int tsql_error(YYLTYPE* llocp, ParseResult* result, yyscan_t scanner, const char *msg) {
    result->accept = false;
    result->errFirstLine = llocp->first_line;
    result->errFirstColumn = llocp->first_column;
    result->errDetail = msg;
	return 0;
}


#line 109 "sqlparser_tsql_bison.cpp" /* yacc.c:339  */

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
   by #include "sqlparser_tsql_bison.h".  */
#ifndef YY_TSQL_SQLPARSER_TSQL_BISON_H_INCLUDED
# define YY_TSQL_SQLPARSER_TSQL_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef TSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define TSQL_DEBUG 1
#  else
#   define TSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define TSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined TSQL_DEBUG */
#if TSQL_DEBUG
extern int tsql_debug;
#endif
/* "%code requires" blocks.  */
#line 41 "./sqlparser_tsql.y" /* yacc.c:355  */

// %code requires block

#include "node.h"

#line 153 "sqlparser_tsql_bison.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef TSQL_TOKENTYPE
# define TSQL_TOKENTYPE
  enum tsql_tokentype
  {
    TSQL_NAME = 258,
    TSQL_STRING = 259,
    TSQL_INTNUM = 260,
    TSQL_BOOL = 261,
    TSQL_APPROXNUM = 262,
    TSQL_NULLX = 263,
    TSQL_UNKNOWN = 264,
    TSQL_QUESTIONMARK = 265,
    TSQL_COLLATE = 266,
    TSQL_CROSS = 267,
    TSQL_FULL = 268,
    TSQL_INNER = 269,
    TSQL_JOIN = 270,
    TSQL_LEFT = 271,
    TSQL_NATURAL = 272,
    TSQL_RIGHT = 273,
    TSQL_UNION = 274,
    TSQL_EXCEPT = 275,
    TSQL_INTERSECT = 276,
    TSQL_OR = 277,
    TSQL_AND = 278,
    TSQL_NOT = 279,
    TSQL_COMP_LE = 280,
    TSQL_COMP_LT = 281,
    TSQL_COMP_EQ = 282,
    TSQL_COMP_GT = 283,
    TSQL_COMP_GE = 284,
    TSQL_COMP_NE = 285,
    TSQL_CNNOP = 286,
    TSQL_LIKE = 287,
    TSQL_BETWEEN = 288,
    TSQL_IN = 289,
    TSQL_IS = 290,
    TSQL_MOD = 291,
    TSQL_UMINUS = 292,
    TSQL_ALL = 293,
    TSQL_ANY = 294,
    TSQL_ARRAY = 295,
    TSQL_AS = 296,
    TSQL_ASC = 297,
    TSQL_AVG = 298,
    TSQL_BIGINT = 299,
    TSQL_BINARY = 300,
    TSQL_BLOB = 301,
    TSQL_BOOLEAN = 302,
    TSQL_BY = 303,
    TSQL_CASE = 304,
    TSQL_CAST = 305,
    TSQL_CHAR = 306,
    TSQL_CHARACTER = 307,
    TSQL_CHARACTERS = 308,
    TSQL_CLOB = 309,
    TSQL_COALESCE = 310,
    TSQL_CODE_UNITS = 311,
    TSQL_CONVERT = 312,
    TSQL_CORRESPONDING = 313,
    TSQL_COUNT = 314,
    TSQL_CURRENT = 315,
    TSQL_CURRENT_TIMESTAMP = 316,
    TSQL_CURRENT_USER = 317,
    TSQL_DATE = 318,
    TSQL_DAY = 319,
    TSQL_DEC = 320,
    TSQL_DECIMAL = 321,
    TSQL_DEFAULT = 322,
    TSQL_DELETE = 323,
    TSQL_DENSE_RANK = 324,
    TSQL_DESC = 325,
    TSQL_DISTINCT = 326,
    TSQL_DOUBLE = 327,
    TSQL_ELSE = 328,
    TSQL_END = 329,
    TSQL_END_P = 330,
    TSQL_ERROR = 331,
    TSQL_EXISTS = 332,
    TSQL_FLOAT = 333,
    TSQL_FOLLOWING = 334,
    TSQL_FOR = 335,
    TSQL_FROM = 336,
    TSQL_G = 337,
    TSQL_GROUP = 338,
    TSQL_GROUPING = 339,
    TSQL_HAVING = 340,
    TSQL_HOUR = 341,
    TSQL_INT = 342,
    TSQL_INTEGER = 343,
    TSQL_INTERVAL = 344,
    TSQL_K = 345,
    TSQL_LARGE = 346,
    TSQL_M = 347,
    TSQL_MAX = 348,
    TSQL_MIN = 349,
    TSQL_MINUTE = 350,
    TSQL_MONTH = 351,
    TSQL_MULTISET = 352,
    TSQL_NATIONAL = 353,
    TSQL_NCHAR = 354,
    TSQL_NCLOB = 355,
    TSQL_NULLIF = 356,
    TSQL_NUMERIC = 357,
    TSQL_OBJECT = 358,
    TSQL_OCTETS = 359,
    TSQL_OF = 360,
    TSQL_ON = 361,
    TSQL_ONLY = 362,
    TSQL_ORDER = 363,
    TSQL_OUTER = 364,
    TSQL_OVER = 365,
    TSQL_PARTITION = 366,
    TSQL_PRECEDING = 367,
    TSQL_PRECISION = 368,
    TSQL_RANGE = 369,
    TSQL_RANK = 370,
    TSQL_READ = 371,
    TSQL_REAL = 372,
    TSQL_RECURSIVE = 373,
    TSQL_REF = 374,
    TSQL_ROW = 375,
    TSQL_ROWS = 376,
    TSQL_ROW_NUMBER = 377,
    TSQL_SCOPE = 378,
    TSQL_SECOND = 379,
    TSQL_SELECT = 380,
    TSQL_SESSION_USER = 381,
    TSQL_SET = 382,
    TSQL_SMALLINT = 383,
    TSQL_SOME = 384,
    TSQL_STDDEV_POP = 385,
    TSQL_STDDEV_SAMP = 386,
    TSQL_SUM = 387,
    TSQL_SYSTEM_USER = 388,
    TSQL_THEN = 389,
    TSQL_TIME = 390,
    TSQL_TIMESTAMP = 391,
    TSQL_TO = 392,
    TSQL_UNBOUNDED = 393,
    TSQL_UPDATE = 394,
    TSQL_USING = 395,
    TSQL_VARCHAR = 396,
    TSQL_VARYING = 397,
    TSQL_VAR_POP = 398,
    TSQL_VAR_SAMP = 399,
    TSQL_WHEN = 400,
    TSQL_WHERE = 401,
    TSQL_WITH = 402,
    TSQL_WITHOUT = 403,
    TSQL_YEAR = 404,
    TSQL_ZONE = 405
  };
#endif

/* Value type.  */
#if ! defined TSQL_STYPE && ! defined TSQL_STYPE_IS_DECLARED

union TSQL_STYPE
{
#line 84 "./sqlparser_tsql.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 321 "sqlparser_tsql_bison.cpp" /* yacc.c:355  */
};

typedef union TSQL_STYPE TSQL_STYPE;
# define TSQL_STYPE_IS_TRIVIAL 1
# define TSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined TSQL_LTYPE && ! defined TSQL_LTYPE_IS_DECLARED
typedef struct TSQL_LTYPE TSQL_LTYPE;
struct TSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define TSQL_LTYPE_IS_DECLARED 1
# define TSQL_LTYPE_IS_TRIVIAL 1
#endif



int tsql_parse (ParseResult* result, yyscan_t scanner);

#endif /* !YY_TSQL_SQLPARSER_TSQL_BISON_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 351 "sqlparser_tsql_bison.cpp" /* yacc.c:358  */

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
         || (defined TSQL_LTYPE_IS_TRIVIAL && TSQL_LTYPE_IS_TRIVIAL \
             && defined TSQL_STYPE_IS_TRIVIAL && TSQL_STYPE_IS_TRIVIAL)))

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2624

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  162
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  415
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  810

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   405

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    40,     2,     2,
      44,    45,    38,    36,   160,    37,   161,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   159,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    42,     2,     2,     2,     2,     2,
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
      35,    41,    43,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158
};

#if TSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   214,   214,   224,   225,   233,   234,   235,   239,   243,
     244,   249,   266,   283,   284,   292,   307,   311,   316,   324,
     330,   340,   341,   345,   371,   402,   433,   467,   468,   472,
     479,   484,   488,   489,   493,   497,   504,   505,   514,   528,
     529,   537,   538,   542,   550,   551,   559,   568,   571,   575,
     582,   583,   593,   598,   606,   607,   616,   624,   625,   629,
     637,   638,   646,   647,   651,   658,   659,   667,   672,   680,
     688,   697,   698,   706,   707,   715,   720,   725,   730,   735,
     744,   749,   753,   754,   759,   764,   769,   774,   779,   784,
     789,   794,   802,   807,   812,   818,   823,   832,   843,   854,
     865,   873,   877,   878,   883,   884,   893,   899,   905,   912,
     918,   925,   931,   938,   944,   951,   957,   964,   970,   977,
     983,   990,   996,  1006,  1007,  1008,  1009,  1010,  1011,  1012,
    1016,  1017,  1018,  1024,  1025,  1026,  1027,  1035,  1036,  1041,
    1046,  1051,  1056,  1061,  1066,  1071,  1076,  1084,  1085,  1086,
    1091,  1096,  1121,  1126,  1151,  1156,  1181,  1186,  1211,  1216,
    1241,  1246,  1271,  1276,  1281,  1286,  1291,  1296,  1301,  1306,
    1311,  1316,  1321,  1326,  1331,  1336,  1341,  1346,  1354,  1355,
    1364,  1372,  1373,  1377,  1378,  1386,  1394,  1395,  1404,  1405,
    1406,  1407,  1414,  1423,  1430,  1437,  1444,  1451,  1460,  1467,
    1478,  1485,  1492,  1499,  1506,  1513,  1520,  1527,  1534,  1541,
    1548,  1555,  1562,  1569,  1576,  1583,  1590,  1597,  1604,  1611,
    1618,  1625,  1632,  1639,  1646,  1653,  1660,  1667,  1674,  1681,
    1688,  1695,  1702,  1709,  1716,  1723,  1730,  1738,  1746,  1756,
    1763,  1770,  1780,  1788,  1796,  1804,  1812,  1820,  1826,  1833,
    1840,  1848,  1856,  1864,  1872,  1880,  1889,  1894,  1899,  1904,
    1909,  1914,  1919,  1924,  1932,  1938,  1947,  1949,  1951,  1953,
    1955,  1957,  1959,  1961,  1963,  1965,  1967,  1969,  1971,  1973,
    1975,  1977,  1979,  1981,  1983,  1985,  1987,  1989,  1991,  1993,
    1995,  1997,  1999,  2001,  2006,  2007,  2008,  2009,  2013,  2021,
    2029,  2035,  2040,  2048,  2053,  2058,  2063,  2064,  2069,  2070,
    2071,  2072,  2073,  2074,  2078,  2086,  2091,  2095,  2100,  2104,
    2105,  2110,  2117,  2122,  2123,  2128,  2133,  2140,  2144,  2148,
    2152,  2156,  2163,  2170,  2174,  2179,  2184,  2189,  2193,  2197,
    2201,  2206,  2211,  2216,  2220,  2224,  2231,  2232,  2236,  2241,
    2246,  2250,  2255,  2260,  2264,  2269,  2274,  2278,  2282,  2286,
    2290,  2297,  2302,  2306,  2310,  2317,  2322,  2326,  2331,  2335,
    2340,  2345,  2350,  2355,  2359,  2364,  2368,  2373,  2380,  2385,
    2389,  2394,  2401,  2406,  2410,  2415,  2419,  2424,  2428,  2433,
    2438,  2443,  2448,  2452,  2457,  2461,  2466,  2473,  2478,  2483,
    2488,  2496,  2500,  2504,  2511,  2515,  2519,  2526,  2530,  2537,
    2538,  2539,  2542,  2546,  2547,  2552
};
#endif

#if TSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "COLLATE", "CROSS",
  "FULL", "INNER", "JOIN", "LEFT", "NATURAL", "RIGHT", "UNION", "EXCEPT",
  "INTERSECT", "OR", "AND", "NOT", "COMP_LE", "COMP_LT", "COMP_EQ",
  "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE", "BETWEEN", "IN", "IS",
  "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS", "'('", "')'",
  "ALL", "ANY", "ARRAY", "AS", "ASC", "AVG", "BIGINT", "BINARY", "BLOB",
  "BOOLEAN", "BY", "CASE", "CAST", "CHAR", "CHARACTER", "CHARACTERS",
  "CLOB", "COALESCE", "CODE_UNITS", "CONVERT", "CORRESPONDING", "COUNT",
  "CURRENT", "CURRENT_TIMESTAMP", "CURRENT_USER", "DATE", "DAY", "DEC",
  "DECIMAL", "DEFAULT", "DELETE", "DENSE_RANK", "DESC", "DISTINCT",
  "DOUBLE", "ELSE", "END", "END_P", "ERROR", "EXISTS", "FLOAT",
  "FOLLOWING", "FOR", "FROM", "G", "GROUP", "GROUPING", "HAVING", "HOUR",
  "INT", "INTEGER", "INTERVAL", "K", "LARGE", "M", "MAX", "MIN", "MINUTE",
  "MONTH", "MULTISET", "NATIONAL", "NCHAR", "NCLOB", "NULLIF", "NUMERIC",
  "OBJECT", "OCTETS", "OF", "ON", "ONLY", "ORDER", "OUTER", "OVER",
  "PARTITION", "PRECEDING", "PRECISION", "RANGE", "RANK", "READ", "REAL",
  "RECURSIVE", "REF", "ROW", "ROWS", "ROW_NUMBER", "SCOPE", "SECOND",
  "SELECT", "SESSION_USER", "SET", "SMALLINT", "SOME", "STDDEV_POP",
  "STDDEV_SAMP", "SUM", "SYSTEM_USER", "THEN", "TIME", "TIMESTAMP", "TO",
  "UNBOUNDED", "UPDATE", "USING", "VARCHAR", "VARYING", "VAR_POP",
  "VAR_SAMP", "WHEN", "WHERE", "WITH", "WITHOUT", "YEAR", "ZONE", "';'",
  "','", "'.'", "$accept", "sql_stmt", "stmt_list", "stmt", "dql_stmt",
  "dml_stmt", "delete_stmt", "update_stmt", "update_elem_list",
  "update_elem", "select_stmt", "select_with_parens", "select_no_parens",
  "select_clause", "simple_select", "opt_corresponding_spec",
  "opt_into_clause", "opt_top", "opt_for_clause", "opt_where",
  "opt_from_clause", "opt_groupby", "opt_order_by", "order_by",
  "sort_list", "sort_key", "opt_asc_desc", "opt_having", "with_clause",
  "with_list", "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_factor",
  "table_factor_non_join", "opt_for_system_time", "opt_with_table_hint",
  "opt_simple_ident_list_with_parens", "relation_factor", "joined_table",
  "join_type", "join_hint", "join_outer", "expr_list", "column_ref",
  "expr_const", "simple_expr", "arith_expr", "expr", "in_expr",
  "case_expr", "case_arg", "when_clause_list", "when_clause",
  "case_default", "func_expr", "aggregate_windowed_function",
  "ranking_windowed_function", "scalar_function", "over_clause",
  "row_or_range_clause", "window_frame_extent", "data_type",
  "user_defined_type_name", "reference_type", "collection_type",
  "predefined_type", "interval_type", "interval_qualifier", "start_field",
  "end_field", "single_datetime_field",
  "non_second_primary_datetime_field", "boolean_type", "datetime_type",
  "numeric_type", "exact_numeric_type", "approximate_numeric_type",
  "character_string_type", "binary_large_object_string_type",
  "national_character_string_type", "large_object_length",
  "char_length_units", "multiplier", "distinct_or_all", "all_some_any",
  "relation_name", "column_label", "collate_clause", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,    43,    45,    42,    47,
      37,   291,    94,   292,    40,    41,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,    59,
      44,    46
};
# endif

#define YYPACT_NINF -542

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-542)))

#define YYTABLE_NINF -319

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     315,   -16,   -57,   342,    48,    34,    71,   -40,   -70,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,   219,  -542,   132,    66,
     138,    48,  -542,  -542,  -542,   -68,   -30,   133,   227,  -542,
      62,  -542,  -542,   315,   342,   342,   342,   214,   200,  -542,
     219,  -542,  -542,   145,   937,    19,  1700,   299,   259,  -542,
    -542,   227,  -542,   244,   244,   244,  1700,   -37,  -542,   200,
    1700,  -542,     1,  -542,  -542,  -542,  -542,  -542,  -542,   271,
     273,  1700,  1809,  1809,  -542,   422,   276,  1700,   287,   289,
     308,   310,   321,  -542,  -542,   324,   371,   390,   403,   407,
     410,   412,   417,   421,  -542,   427,   434,   452,  -542,   471,
     474,  -542,  -542,   210,  -542,  -542,  -542,   654,  2021,  -542,
    -542,  -542,  -542,  -542,  -542,   233,    21,   145,   360,  2577,
     367,   386,   371,  -542,   482,   132,   132,   132,  -542,   381,
    1988,   439,   459,  -542,  2577,  1046,    17,   530,   531,  2589,
     508,   508,   423,   533,    35,   828,  2577,   428,  1700,  1700,
    1700,   580,   575,   537,  -542,  1700,   828,   828,  1700,   152,
     544,   546,   828,   828,   828,   828,   828,   505,   937,  1809,
    1809,  1809,  1809,  1809,  1809,  1809,  -542,  -542,    48,  1700,
    1700,     7,   719,   719,   719,   719,   719,   719,  1700,  1700,
    1809,   549,   387,   224,  -542,  -542,    27,   451,   592,  -542,
    1700,   299,  -542,  -542,   570,   594,   594,  -542,  1700,  -542,
    -542,  -542,  -542,   299,  -542,   574,     4,  -542,    28,  -542,
    -542,  -542,  1700,  -542,  -542,  2077,  1700,  1700,   532,   428,
    2049,   576,   350,   577,  2102,  1700,   582,   502,  2127,  2152,
    1700,  2177,  1700,   314,  -542,   572,    11,    11,   184,   584,
     502,   502,  2202,  1700,  2227,  1700,  2252,  1700,  2277,  1700,
    2302,  1700,   272,   145,  -542,   508,   508,   583,   583,   583,
     583,  -542,  -542,  1948,  2589,  1700,  1809,   549,  -542,  -542,
    -542,   568,   371,   568,   371,   568,   371,   568,   371,   568,
     371,   568,   371,   501,   509,   569,   422,  -542,  -542,  -542,
    -542,  -542,   504,  -542,   469,   636,   638,  -542,  -542,  -542,
     299,  -542,  -542,  -542,  1155,    18,    10,   639,  -542,   502,
    2327,   375,  1700,   558,  -542,  1860,  -542,    48,   502,   502,
    2352,  -542,  -542,  -542,   502,  2377,   502,  2402,  1700,  1700,
     524,    29,   518,   528,  -542,  -542,  -542,   606,  -542,  -542,
    -542,   502,  2427,   502,  2452,   502,  2477,   502,  2502,   502,
    2527,    39,   243,  -542,    60,  -542,  -542,  -542,   561,   509,
     637,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  1809,   608,
    -542,  -542,  -542,   651,  -542,  -542,   611,  -542,   613,    38,
    -542,   658,  1264,   211,   503,  -542,   502,  1700,  2577,  -542,
    -542,   563,   619,  -542,    37,   164,   622,  -542,   623,   624,
     548,   626,  -542,  -542,   320,   353,   174,   627,   640,  -542,
     641,  -542,    50,    54,   642,  -542,     2,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,    75,  -542,   672,
     643,  -542,  -542,   502,  -542,   502,  -542,   502,  2552,   234,
    -542,   231,   559,   330,  -542,  -542,  -542,  -542,   502,  -542,
     502,  -542,   502,  -542,   502,  -542,   502,   241,   693,   655,
    -542,   696,   133,   686,   585,  -542,   272,   585,   585,   272,
     689,   263,   656,   620,  1809,   654,  -542,  -542,  -542,  -542,
    1373,   245,    40,  -542,   670,   555,  -542,   269,  -542,  2577,
     617,   712,   725,   625,   690,   728,   628,   694,   735,   736,
     737,  -542,   739,  -542,  -542,  -542,  -542,   701,  -542,  -542,
     601,  -542,    89,    81,   177,   743,   646,   705,   735,   745,
      48,   746,   609,   610,   749,   615,   616,   755,  -542,   717,
    -542,   629,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
     240,   722,   748,   750,   751,   752,   756,  -542,  -542,  -542,
    -542,  -542,  -542,   133,  -542,  -542,   272,  -542,  -542,  -542,
     246,  -542,  -542,  -542,   272,   696,  -542,  -542,   342,  1700,
    -542,   654,  -542,   723,    41,  -542,  1482,   281,  -542,   319,
    -542,  -542,   718,   724,   727,   734,   775,   738,   741,   776,
     355,   742,   -12,    32,   747,   785,   400,   786,   788,   753,
     790,   687,   757,   754,   758,   795,   760,    43,   761,   762,
     645,   650,   764,   652,   657,   767,   808,    48,  -542,   769,
    -542,    44,    95,    96,    99,    22,  -542,  -542,  -542,  1700,
    -542,  -542,   239,  -542,  -542,  1700,  2577,  -542,  1591,   326,
    -542,   771,  -542,  -542,  -542,  -542,   812,  -542,  -542,   735,
     773,  -542,   735,   774,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,   186,  -542,  -542,   817,  -542,   818,  -542,    47,   780,
    -542,  -542,   781,   782,   820,   784,   796,   825,  -542,   735,
     794,  -542,  -542,   836,   714,   345,  -542,  -542,   374,  -542,
    -542,  -542,   798,   672,  -542,   349,   720,   362,   370,   726,
     373,   388,   733,   389,   396,   740,   399,   730,   759,   768,
     401,  2577,  1700,   133,  -542,  -542,  -542,   802,  -542,  -542,
    -542,   806,   821,  -542,   822,  -542,  -542,   824,   830,  -542,
     857,   858,   731,  -542,   832,  -542,   735,   833,   835,  -542,
     837,    48,   763,   765,   766,   772,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,  -542,  -542,  2577,  -542,  -542,  -542,  -542,  -542,  -542,
    -542,   838,   839,  -542,   843,  -542,  -542,  -542,  -542,   715,
     732,   744,   770,  -542,  -542,  -542,  -542,  -542,  -542,  -542
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     0,    62,     0,     0,     0,     0,     3,     6,
       7,    10,     9,     8,    22,    16,    41,    21,     0,    22,
       0,     0,    63,    64,    31,    84,     0,    57,     0,    52,
      54,     1,     2,     5,    62,    62,    62,     0,    32,    42,
      41,    18,    17,    36,     0,     0,     0,     0,     0,    58,
      53,     0,     4,    27,    27,    27,     0,     0,    19,    32,
       0,    11,   106,   123,   124,   126,   125,   127,   128,     0,
       0,     0,     0,     0,    70,     0,     0,   181,     0,     0,
       0,     0,   194,   196,   129,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   198,     0,     0,     0,   199,     0,
       0,   135,    30,    65,   130,   131,   137,   147,    67,   133,
     134,   190,   189,   188,   148,    85,     0,    36,    13,    15,
      60,     0,     0,    55,    28,     0,     0,     0,    43,    44,
      47,     0,    33,    20,    37,     0,     0,     0,     0,   166,
     138,   139,   135,     0,   104,     0,   182,     0,     0,     0,
       0,     0,     0,     0,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   413,   414,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,   149,     0,    87,     0,    12,
       0,     0,    59,    56,     0,    24,    26,    25,     0,    48,
      49,    46,    35,     0,   247,     0,   107,   108,     0,   249,
     248,   132,     0,   407,   408,     0,     0,     0,   186,   183,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,    66,   140,   141,   142,   143,   144,
     146,   145,   415,   165,   164,     0,     0,     0,   409,   411,
     410,   150,     0,   152,     0,   154,     0,   158,     0,   156,
       0,   160,     0,   177,   162,     0,     0,   178,   175,   169,
     167,   171,     0,    69,    86,     0,     0,    91,    14,    61,
       0,    45,    34,   255,     0,     0,     0,     0,   105,   201,
       0,     0,     0,     0,   184,     0,   193,     0,   237,   233,
       0,   195,   240,   238,   205,     0,   209,     0,     0,     0,
       0,     0,     0,     0,   265,   264,   261,     0,   262,   239,
     241,   217,     0,   221,     0,   213,     0,   225,     0,   229,
       0,     0,     0,    38,    71,    73,    80,    74,    39,   163,
       0,   176,   151,   153,   155,   159,   157,   161,     0,     0,
     170,   168,   172,     0,    90,    89,     0,   246,     0,   109,
     110,     0,     0,     0,     0,   200,   203,     0,   187,   180,
     360,     0,   381,   332,   368,   366,   377,   333,   356,   353,
       0,   362,   359,   358,     0,     0,   387,   396,   350,   363,
       0,   357,   339,   345,     0,   298,     0,   295,   296,   297,
     294,   313,   311,   312,   310,   346,   347,   306,   309,   308,
       0,   236,   232,   235,   204,   207,   208,   211,     0,     0,
     267,     0,     0,     0,   268,   266,   257,   216,   219,   220,
     223,   212,   215,   224,   227,   228,   231,    22,     0,    74,
     412,     0,    82,     0,   102,   101,     0,   102,   102,     0,
       0,    81,     0,    50,     0,   173,   179,    88,    29,   254,
       0,     0,     0,   245,     0,   113,   114,     0,   202,   185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   364,     0,   329,   330,   331,   328,   326,   327,   314,
       0,   316,   323,   385,   383,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   191,   301,
     302,     0,   305,   307,   192,   234,   206,   210,   197,   260,
       0,     0,     0,     0,     0,     0,     0,   218,   222,   214,
     226,   230,    92,    82,    83,    79,     0,   103,   101,   100,
       0,   101,   101,    72,     0,     0,    75,    81,    62,     0,
      23,   174,   244,     0,   111,   112,     0,     0,   253,     0,
     121,   122,   379,     0,     0,   375,     0,     0,   373,     0,
     400,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   259,     0,
     258,     0,     0,     0,     0,     0,    78,    96,    97,     0,
      98,    99,     0,    81,    77,     0,    51,   252,     0,     0,
     243,     0,   119,   120,   117,   118,     0,   380,   367,     0,
       0,   365,     0,     0,   401,   402,   406,   404,   405,   403,
     399,   398,   376,   355,     0,   352,     0,   361,     0,   321,
     315,   319,     0,     0,     0,     0,   392,     0,   386,     0,
       0,   395,   349,     0,     0,   336,   337,   338,   342,   343,
     344,   371,     0,   304,   256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    76,    40,   242,     0,   115,   116,
     251,     0,     0,   370,     0,   369,   397,     0,     0,   325,
       0,     0,   322,   384,     0,   382,     0,     0,     0,   390,
       0,     0,     0,     0,     0,     0,   300,   303,   293,   278,
     283,   288,   273,   290,   275,   280,   285,   270,   291,   276,
     281,   286,   271,   292,   277,   282,   287,   272,   274,   279,
     289,   284,   269,    93,    95,   250,   378,   374,   372,   354,
     351,     0,     0,   389,     0,   388,   393,   348,   299,     0,
       0,     0,     0,   324,   320,   391,   334,   335,   340,   341
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -542,  -542,   848,  -542,  -542,  -542,  -542,  -542,   692,  -542,
    -542,     5,   495,   110,  -542,   335,  -542,  -542,   840,  -102,
    -542,  -542,   849,  -149,   688,  -542,  -542,  -542,  -542,    67,
    -542,  -542,   -26,   -32,   -27,   789,  -542,   415,  -342,  -542,
    -542,  -541,   337,    -4,   540,  -542,   -66,    92,  -123,  -542,
    -542,  -542,   -20,   -42,   633,  -542,  -542,   675,  -542,  -542,
    -542,  -542,  -542,  -542,   -25,  -245,   664,  -542,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -542,   306,  -542,  -542,
    -542,  -542,  -542,  -542,  -542,  -542,  -503,   247,  -542,   402,
     449,  -352,   721,  -426
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    11,    12,   117,   118,
      13,   101,    20,    16,    17,   125,   167,    44,    58,    61,
     263,   483,    38,    39,   128,   129,   211,   580,    18,    29,
      30,    48,   564,   121,    24,   102,   103,   363,   364,   365,
     481,   576,   565,   366,   367,   480,   569,   568,   143,   104,
     105,   106,   107,   144,   298,   109,   147,   228,   229,   323,
     110,   111,   112,   113,   114,   249,   344,   426,   427,   428,
     429,   430,   431,   519,   520,   680,   521,   522,   432,   433,
     434,   435,   436,   437,   438,   439,   601,   670,   671,   226,
     282,   472,   194,   195
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    49,   108,   347,   119,    14,    19,    53,    54,    55,
     248,   542,   215,   543,   130,   199,   340,    43,   134,   468,
     216,   389,   115,    14,   197,   616,   231,   717,     1,   139,
     304,   316,    21,   673,   451,   146,   644,    27,    14,   275,
     276,   277,    25,    32,   341,   135,   178,   538,   314,   705,
     539,    25,   140,   141,   392,   217,   390,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,    31,   473,   474,   475,   476,   477,   675,   478,   342,
     142,   502,   490,   361,   586,   648,   178,   131,   692,    33,
     718,   154,   739,    45,   531,    50,   719,   452,   534,   318,
     708,   711,   724,   225,   714,    46,   230,   540,   232,   234,
     132,    41,   706,   238,   239,   241,   243,     3,   123,   563,
     252,   254,   256,   258,   260,   608,   108,   203,    40,   577,
      14,    14,    14,   607,   570,   541,   503,   273,   274,     5,
     281,   283,   285,   287,   289,   291,   293,   294,   674,   265,
     266,   267,   268,   269,   270,   271,   732,   343,   119,   734,
      28,   368,   136,   709,   712,   315,   130,   715,   720,   309,
     295,   393,     3,   379,   272,   453,     1,    47,   218,   391,
     116,   312,   198,    42,   320,   321,   748,   504,   305,   317,
     707,   388,   676,   330,     5,   222,   297,   244,   335,   491,
     337,   587,   649,   693,   551,   532,   533,   740,   505,   535,
     536,   352,   332,   354,   495,   356,   449,   358,   525,   360,
     479,   610,    51,   643,   637,   349,   350,   176,   177,   346,
      27,   609,   642,   369,  -318,   205,   206,   207,    34,    35,
      36,   710,   713,   794,   470,   716,   470,   664,   584,   496,
     665,   473,   474,   475,   476,   477,   370,   478,   473,   474,
     475,   476,   477,   506,   478,     3,   470,   362,    37,   494,
      56,   245,   590,   526,   246,    25,   611,   757,   386,   549,
     398,   247,   297,   585,   652,   628,    41,   372,    57,   373,
     471,   374,   471,   375,   395,   376,   448,   377,   669,    60,
     550,   142,   120,   441,   442,   629,   246,   591,   122,   444,
     124,   446,   575,   247,   507,   137,   361,   138,   552,   653,
     145,   425,   654,   440,   527,   178,   457,   612,   459,   728,
     461,   148,   463,   149,   465,    37,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      37,   553,   150,   722,   151,   499,   246,   655,   485,     1,
     639,   178,   246,   247,   729,   152,   467,   583,   153,   247,
     168,   498,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   178,   723,    22,   126,
     127,     2,   513,   299,   196,   300,   301,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   302,   523,   524,   514,     1,   664,   555,   545,   665,
     546,    23,   547,   515,   516,    62,    63,    64,    65,    66,
      67,   202,    68,   557,   155,   558,   758,   559,    69,   560,
      70,   561,   -22,   -22,   -22,   666,    71,   156,     3,   761,
     556,   157,   517,   667,   158,   668,   159,   763,    72,    73,
     766,   160,     4,   651,   581,   161,    75,   669,    41,   759,
       5,   162,   513,    76,   338,   768,   771,   518,   163,    77,
      78,   362,   762,   773,   362,    79,   776,    80,   781,    81,
     764,    82,    83,   767,   514,    15,   164,    84,   327,    85,
     752,   753,   638,   515,   516,   640,   641,    86,   769,   772,
     380,   -22,   381,   382,    87,   165,   774,   397,   166,   777,
     200,   782,   725,    88,    89,   727,   618,   201,    15,   754,
     755,    90,   679,   189,   190,   191,   192,   646,   204,   -22,
      91,   208,   190,   191,   192,    92,   171,   172,   173,   174,
     175,   645,    93,   235,   212,     3,    94,   518,   240,   242,
      95,    96,    97,    98,   253,   255,   257,   259,   261,   571,
     572,   362,   213,    99,   100,   219,   220,     5,   221,   362,
     236,   227,   237,    62,    63,    64,    65,    66,    67,   250,
      68,   251,   378,   296,   262,   307,    69,   721,    70,   188,
     189,   190,   191,   192,    71,   169,   170,   171,   172,   173,
     174,   175,   306,   322,   310,    36,    72,    73,   233,   313,
      91,   326,   328,   703,    75,   175,   223,   331,   339,   348,
     383,    76,   284,   286,   288,   290,   292,    77,    78,   384,
     399,   385,   394,    79,   450,    80,   454,    81,   455,    82,
      83,   456,   482,   486,   487,    84,   488,    85,   489,   224,
     484,   492,   500,   501,   497,    86,   508,   509,   510,   511,
     512,   528,    87,   169,   170,   171,   172,   173,   174,   175,
     783,    88,    89,   178,   529,   530,   537,   554,   544,    90,
     169,   170,   171,   172,   173,   174,   175,   784,    91,   470,
     562,   566,   567,    92,   574,   473,   474,   475,   476,   477,
      93,   478,   578,   579,    94,   588,   589,   593,    95,    96,
      97,    98,    62,    63,    64,    65,    66,    67,   592,    68,
     594,    99,   100,   597,   596,    69,   595,    70,   599,   598,
     600,   602,   603,    71,   604,   605,   606,   798,   613,   615,
     617,   619,   620,   621,   622,    72,    73,   614,   623,   624,
     625,   626,   656,    75,   627,   278,   279,   630,   647,   657,
      76,   631,   658,   632,   633,   634,    77,    78,   659,   635,
     660,   663,    79,   661,    80,   662,    81,   672,    82,    83,
     678,   682,   677,   683,    84,   685,    85,   684,   686,   688,
     690,   687,   689,   696,    86,   691,   694,   695,   697,   698,
     699,    87,   701,   702,   704,   700,   730,   731,   733,   735,
      88,    89,   737,   738,   741,   744,   742,   743,    90,   745,
     747,    62,    63,    64,    65,    66,    67,    91,    68,   749,
     746,   750,    92,   756,    69,   751,    70,   785,   760,    93,
     778,   786,    71,    94,   765,   780,   280,    95,    96,    97,
      98,   770,   791,   792,    72,    73,   787,   788,   775,   789,
      99,   100,    75,   806,   223,   790,  -317,   793,   795,    76,
     796,    52,   797,   803,   804,    77,    78,   779,   805,    59,
     807,    79,   308,    80,   573,    81,   311,    82,    83,   133,
     636,   469,   808,    84,   324,    85,   799,   224,   800,   801,
     371,   345,   681,    86,   303,   802,     0,     0,   736,     0,
      87,     0,     0,     0,     0,     0,     0,     0,   809,    88,
      89,     0,     0,     0,     0,     0,     0,    90,     0,     0,
      62,    63,    64,    65,    66,    67,    91,    68,     0,     0,
       0,    92,     0,    69,     0,    70,     0,   264,    93,     0,
       0,    71,    94,     0,     0,     0,    95,    96,    97,    98,
       0,     0,     0,    72,    73,    74,     0,     0,     0,    99,
     100,    75,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,     0,     0,    77,    78,     0,     0,     0,     0,
      79,     0,    80,     0,    81,     0,    82,    83,     0,     0,
       0,     0,    84,     0,    85,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
       0,     0,     0,     0,     0,     0,    90,     0,     0,    62,
      63,    64,    65,    66,    67,    91,    68,     0,     0,     0,
      92,     0,    69,     0,    70,     0,     0,    93,     0,     0,
      71,    94,     0,     0,     0,    95,    96,    97,    98,     0,
       0,     0,    72,    73,     0,     0,     0,     0,    99,   100,
      75,   214,     0,     0,     0,     0,     0,    76,     0,     0,
       0,     0,     0,    77,    78,     0,     0,     0,     0,    79,
       0,    80,     0,    81,     0,    82,    83,     0,     0,     0,
       0,    84,     0,    85,     0,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    89,     0,
       0,     0,     0,     0,     0,    90,     0,     0,    62,    63,
      64,    65,    66,    67,    91,    68,     0,     0,     0,    92,
       0,    69,     0,    70,     0,     0,    93,     0,     0,    71,
      94,     0,     0,     0,    95,    96,    97,    98,     0,     0,
       0,    72,    73,     0,     0,     0,     0,    99,   100,    75,
     387,     0,     0,     0,     0,     0,    76,     0,     0,     0,
       0,     0,    77,    78,     0,     0,     0,     0,    79,     0,
      80,     0,    81,     0,    82,    83,     0,     0,     0,     0,
      84,     0,    85,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    88,    89,     0,     0,
       0,     0,     0,     0,    90,     0,     0,    62,    63,    64,
      65,    66,    67,    91,    68,     0,     0,     0,    92,     0,
      69,     0,    70,     0,     0,    93,     0,     0,    71,    94,
       0,     0,     0,    95,    96,    97,    98,     0,     0,     0,
      72,    73,     0,     0,     0,     0,    99,   100,    75,   493,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,    77,    78,     0,     0,     0,     0,    79,     0,    80,
       0,    81,     0,    82,    83,     0,     0,     0,     0,    84,
       0,    85,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,     0,     0,     0,
       0,     0,     0,    90,     0,     0,    62,    63,    64,    65,
      66,    67,    91,    68,     0,     0,     0,    92,     0,    69,
       0,    70,     0,     0,    93,     0,     0,    71,    94,     0,
       0,     0,    95,    96,    97,    98,     0,     0,     0,    72,
      73,     0,     0,     0,     0,    99,   100,    75,   582,     0,
       0,     0,     0,     0,    76,     0,     0,     0,     0,     0,
      77,    78,     0,     0,     0,     0,    79,     0,    80,     0,
      81,     0,    82,    83,     0,     0,     0,     0,    84,     0,
      85,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    89,     0,     0,     0,     0,
       0,     0,    90,     0,     0,    62,    63,    64,    65,    66,
      67,    91,    68,     0,     0,     0,    92,     0,    69,     0,
      70,     0,     0,    93,     0,     0,    71,    94,     0,     0,
       0,    95,    96,    97,    98,     0,     0,     0,    72,    73,
       0,     0,     0,     0,    99,   100,    75,   650,     0,     0,
       0,     0,     0,    76,     0,     0,     0,     0,     0,    77,
      78,     0,     0,     0,     0,    79,     0,    80,     0,    81,
       0,    82,    83,     0,     0,     0,     0,    84,     0,    85,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    89,     0,     0,     0,     0,     0,
       0,    90,     0,     0,    62,    63,    64,    65,    66,    67,
      91,    68,     0,     0,     0,    92,     0,    69,     0,    70,
       0,     0,    93,     0,     0,    71,    94,     0,     0,     0,
      95,    96,    97,    98,     0,     0,     0,    72,    73,     0,
       0,     0,     0,    99,   100,    75,   726,     0,     0,     0,
       0,     0,    76,     0,     0,     0,     0,     0,    77,    78,
       0,     0,     0,     0,    79,     0,    80,     0,    81,     0,
      82,    83,     0,     0,     0,     0,    84,     0,    85,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    89,     0,     0,     0,     0,     0,     0,
      90,     0,     0,    62,    63,    64,    65,    66,    67,    91,
      68,     0,     0,     0,    92,     0,    69,     0,    70,     0,
       0,    93,     0,     0,    71,    94,     0,     0,     0,    95,
      96,    97,    98,     0,     0,     0,    72,    73,     0,     0,
       0,     0,    99,   100,    75,     0,     0,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,    77,    78,     0,
       0,     0,     0,    79,     0,    80,     0,    81,     0,    82,
      83,     0,     0,     0,     0,    84,     0,    85,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,    88,    89,     0,     0,     0,     0,     0,     0,    90,
       0,     0,    62,    63,    64,    65,    66,    67,    91,    68,
       0,     0,     0,    92,     0,    69,     0,    70,     0,     0,
      93,     0,     0,     0,    94,     0,     0,     0,    95,    96,
      97,    98,     0,     0,     0,    72,    73,     0,     0,     0,
       0,    99,   100,    75,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    25,     0,     0,    77,    78,     0,     0,
       0,     0,    79,     0,    80,     0,    81,     0,    82,    83,
       0,     0,     0,     0,    84,     0,    85,     0,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,   400,   401,   402,   403,     0,     0,    90,   404,
     405,     0,   406,     0,     0,     0,     0,     0,     0,     0,
       0,   407,    92,   408,   409,     0,     0,     0,     0,    93,
     410,     0,     0,    94,     0,     0,   411,    95,    96,    97,
      98,     0,     0,     0,     0,   412,   413,   414,     0,     0,
      99,   100,     0,     0,     0,     0,   415,   416,   417,     0,
     418,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,     0,   419,     0,   420,     0,     0,
       0,     0,     0,     0,     0,     0,   421,     0,     0,   178,
       0,     0,     0,   422,   423,     0,     0,     0,     0,   424,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   176,   177,     0,     0,     0,     0,
       0,     0,   178,     0,     0,     0,     0,     0,   209,     0,
       0,     0,     0,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,     0,     0,     0,
     178,     0,     0,     0,     0,     0,   210,     0,     0,     0,
     193,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   325,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   319,     0,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   329,     0,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   333,     0,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   334,     0,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   336,     0,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   351,     0,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   353,     0,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   355,     0,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   357,     0,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   359,     0,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   396,     0,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   443,     0,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   445,     0,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   447,     0,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   458,     0,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   460,     0,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   462,     0,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   464,     0,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   466,     0,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   548,     0,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192
};

static const yytype_int16 yycheck[] =
{
       4,    27,    44,   248,    46,     0,     1,    34,    35,    36,
     159,   437,   135,   439,    56,   117,     5,    21,    60,   361,
       3,     3,     3,    18,     3,   528,   149,     5,    44,    71,
       3,     3,    89,    45,     5,    77,   577,     3,    33,    32,
      33,    34,     3,    83,    33,    44,    11,    45,    44,     5,
      48,     3,    72,    73,    44,    38,    38,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,    12,    13,    14,    15,    16,    45,    18,    68,
      75,    44,    44,    44,    44,    44,    11,   124,    45,   159,
      68,    86,    45,   161,    44,    28,    74,    68,    44,   222,
       5,     5,   643,   145,     5,   135,   148,   105,   150,   151,
     147,    45,    68,   155,   156,   157,   158,   133,    51,   471,
     162,   163,   164,   165,   166,    44,   168,   122,    18,   481,
     125,   126,   127,    44,   476,    60,    99,   179,   180,   155,
     182,   183,   184,   185,   186,   187,   188,   189,   160,   169,
     170,   171,   172,   173,   174,   175,   659,   146,   200,   662,
     126,   263,   161,    68,    68,   161,   208,    68,   146,   201,
     190,   161,   133,   296,   178,   146,    44,    44,   161,   161,
     161,   213,   161,    45,   226,   227,   689,   150,   161,   161,
     146,   314,   160,   235,   155,   160,   191,    45,   240,   161,
     242,   161,   161,   160,   449,   155,   156,   160,    44,   155,
     156,   253,   237,   255,     3,   257,   339,   259,    44,   261,
     160,    44,   160,   575,   566,   250,   251,     3,     4,    45,
       3,   150,   574,   275,   145,   125,   126,   127,    19,    20,
      21,   146,   146,   746,     3,   146,     3,    61,     3,    38,
      64,    12,    13,    14,    15,    16,   276,    18,    12,    13,
      14,    15,    16,    99,    18,   133,     3,   262,   116,   392,
      56,   119,     3,    99,   122,     3,    99,   703,   310,    45,
     322,   129,   277,    38,     3,    45,    45,   282,    88,   284,
      49,   286,    49,   288,   319,   290,   338,   292,   112,   154,
     449,   296,     3,   328,   329,   550,   122,    38,    49,   334,
      66,   336,    49,   129,   150,    44,    44,    44,    87,    38,
      44,   325,     3,   327,   150,    11,   351,   150,   353,     3,
     355,    44,   357,    44,   359,   116,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     116,   120,    44,   114,    44,   397,   122,    38,   378,    44,
     114,    11,   122,   129,    38,    44,   361,   490,    44,   129,
     160,   396,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    11,   148,    46,    54,
      55,    76,    72,     6,   161,     8,     9,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    24,    59,    60,    94,    44,    61,    87,   443,    64,
     445,    79,   447,   103,   104,     3,     4,     5,     6,     7,
       8,    45,    10,   458,    44,   460,    87,   462,    16,   464,
      18,   466,    19,    20,    21,    90,    24,    44,   133,    87,
     120,    44,   132,    98,    44,   100,    44,    87,    36,    37,
      87,    44,   147,   586,   484,    44,    44,   112,    45,   120,
     155,    44,    72,    51,   160,    87,    87,   157,    44,    57,
      58,   476,   120,    87,   479,    63,    87,    65,    87,    67,
     120,    69,    70,   120,    94,     0,    44,    75,   148,    77,
     155,   156,   568,   103,   104,   571,   572,    85,   120,   120,
       6,    88,     8,     9,    92,    44,   120,   142,    44,   120,
     160,   120,   645,   101,   102,   648,   530,   160,    33,   155,
     156,   109,   132,    32,    33,    34,    35,   579,    56,   116,
     118,   160,    33,    34,    35,   123,    38,    39,    40,    41,
      42,   578,   130,   151,   115,   133,   134,   157,   156,   157,
     138,   139,   140,   141,   162,   163,   164,   165,   166,   477,
     478,   566,   113,   151,   152,    45,    45,   155,    45,   574,
       5,   153,    45,     3,     4,     5,     6,     7,     8,    45,
      10,    45,    23,    44,    89,     3,    16,   639,    18,    31,
      32,    33,    34,    35,    24,    36,    37,    38,    39,    40,
      41,    42,   161,    81,    44,    21,    36,    37,    38,    45,
     118,    45,    45,   627,    44,    42,    46,    45,    56,    45,
     161,    51,   183,   184,   185,   186,   187,    57,    58,     3,
      82,     3,     3,    63,   120,    65,   128,    67,   120,    69,
      70,    45,    91,    45,     3,    75,    45,    77,    45,    79,
      23,     3,    99,    44,   161,    85,    44,    44,    44,   121,
      44,    44,    92,    36,    37,    38,    39,    40,    41,    42,
     722,   101,   102,    11,    44,    44,    44,   128,    45,   109,
      36,    37,    38,    39,    40,    41,    42,   723,   118,     3,
      45,    15,   117,   123,    15,    12,    13,    14,    15,    16,
     130,    18,    56,    93,   134,    45,   161,     5,   138,   139,
     140,   141,     3,     4,     5,     6,     7,     8,   111,    10,
       5,   151,   152,     5,    44,    16,   111,    18,    44,   111,
       5,     5,     5,    24,     5,    44,   145,   751,     5,    44,
       5,     5,   143,   143,     5,    36,    37,   111,   143,   143,
       5,    44,    44,    44,   135,    46,    47,    45,    45,    45,
      51,    23,    45,    23,    23,    23,    57,    58,    44,    23,
       5,     5,    63,    45,    65,    44,    67,    45,    69,    70,
       5,     5,    45,     5,    75,     5,    77,    44,   111,    45,
       5,    44,    44,   158,    85,    45,    45,    45,   158,    45,
     158,    92,    45,     5,    45,   158,    45,     5,    45,    45,
     101,   102,     5,     5,    44,     5,    45,    45,   109,    45,
       5,     3,     4,     5,     6,     7,     8,   118,    10,    45,
      44,     5,   123,    45,    16,   131,    18,    45,   128,   130,
     120,    45,    24,   134,   128,    87,   137,   138,   139,   140,
     141,   128,     5,     5,    36,    37,    45,    45,   128,    45,
     151,   152,    44,   158,    46,    45,   145,    45,    45,    51,
      45,    33,    45,    45,    45,    57,    58,   128,    45,    40,
     158,    63,   200,    65,   479,    67,   208,    69,    70,    59,
     563,   361,   158,    75,   229,    77,   143,    79,   143,   143,
     277,   247,   606,    85,   193,   143,    -1,    -1,   671,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   101,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
       3,     4,     5,     6,     7,     8,   118,    10,    -1,    -1,
      -1,   123,    -1,    16,    -1,    18,    -1,   168,   130,    -1,
      -1,    24,   134,    -1,    -1,    -1,   138,   139,   140,   141,
      -1,    -1,    -1,    36,    37,    38,    -1,    -1,    -1,   151,
     152,    44,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      63,    -1,    65,    -1,    67,    -1,    69,    70,    -1,    -1,
      -1,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,     3,
       4,     5,     6,     7,     8,   118,    10,    -1,    -1,    -1,
     123,    -1,    16,    -1,    18,    -1,    -1,   130,    -1,    -1,
      24,   134,    -1,    -1,    -1,   138,   139,   140,   141,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,   151,   152,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,     3,     4,
       5,     6,     7,     8,   118,    10,    -1,    -1,    -1,   123,
      -1,    16,    -1,    18,    -1,    -1,   130,    -1,    -1,    24,
     134,    -1,    -1,    -1,   138,   139,   140,   141,    -1,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,   151,   152,    44,
      45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,     3,     4,     5,
       6,     7,     8,   118,    10,    -1,    -1,    -1,   123,    -1,
      16,    -1,    18,    -1,    -1,   130,    -1,    -1,    24,   134,
      -1,    -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,   151,   152,    44,    45,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,    -1,     3,     4,     5,     6,
       7,     8,   118,    10,    -1,    -1,    -1,   123,    -1,    16,
      -1,    18,    -1,    -1,   130,    -1,    -1,    24,   134,    -1,
      -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,   151,   152,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      67,    -1,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,   109,    -1,    -1,     3,     4,     5,     6,     7,
       8,   118,    10,    -1,    -1,    -1,   123,    -1,    16,    -1,
      18,    -1,    -1,   130,    -1,    -1,    24,   134,    -1,    -1,
      -1,   138,   139,   140,   141,    -1,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,   151,   152,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,    67,
      -1,    69,    70,    -1,    -1,    -1,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,     3,     4,     5,     6,     7,     8,
     118,    10,    -1,    -1,    -1,   123,    -1,    16,    -1,    18,
      -1,    -1,   130,    -1,    -1,    24,   134,    -1,    -1,    -1,
     138,   139,   140,   141,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,   151,   152,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    70,    -1,    -1,    -1,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,     3,     4,     5,     6,     7,     8,   118,
      10,    -1,    -1,    -1,   123,    -1,    16,    -1,    18,    -1,
      -1,   130,    -1,    -1,    24,   134,    -1,    -1,    -1,   138,
     139,   140,   141,    -1,    -1,    -1,    36,    37,    -1,    -1,
      -1,    -1,   151,   152,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    65,    -1,    67,    -1,    69,
      70,    -1,    -1,    -1,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,     3,     4,     5,     6,     7,     8,   118,    10,
      -1,    -1,    -1,   123,    -1,    16,    -1,    18,    -1,    -1,
     130,    -1,    -1,    -1,   134,    -1,    -1,    -1,   138,   139,
     140,   141,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,   151,   152,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,     3,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    70,
      -1,    -1,    -1,    -1,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,    52,    53,    54,    55,    -1,    -1,   109,    59,
      60,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,   123,    73,    74,    -1,    -1,    -1,    -1,   130,
      80,    -1,    -1,   134,    -1,    -1,    86,   138,   139,   140,
     141,    -1,    -1,    -1,    -1,    95,    96,    97,    -1,    -1,
     151,   152,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
     110,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,   125,    -1,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    11,
      -1,    -1,    -1,   143,   144,    -1,    -1,    -1,    -1,   149,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      49,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    76,   133,   147,   155,   163,   164,   165,   166,
     167,   168,   169,   172,   173,   174,   175,   176,   190,   173,
     174,    89,    46,    79,   196,     3,   205,     3,   126,   191,
     192,     0,    83,   159,    19,    20,    21,   116,   184,   185,
     175,    45,    45,   205,   179,   161,   135,    44,   193,   194,
     191,   160,   164,   196,   196,   196,    56,    88,   180,   184,
     154,   181,     3,     4,     5,     6,     7,     8,    10,    16,
      18,    24,    36,    37,    38,    44,    51,    57,    58,    63,
      65,    67,    69,    70,    75,    77,    85,    92,   101,   102,
     109,   118,   123,   130,   134,   138,   139,   140,   141,   151,
     152,   173,   197,   198,   211,   212,   213,   214,   215,   217,
     222,   223,   224,   225,   226,     3,   161,   170,   171,   215,
       3,   195,    49,   191,    66,   177,   177,   177,   186,   187,
     215,   124,   147,   180,   215,    44,   161,    44,    44,   215,
     214,   214,   173,   210,   215,    44,   215,   218,    44,    44,
      44,    44,    44,    44,   173,    44,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,   178,   160,    36,
      37,    38,    39,    40,    41,    42,     3,     4,    11,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    49,   254,   255,   161,     3,   161,   181,
     160,   160,    45,   173,    56,   175,   175,   175,   160,    50,
      78,   188,   115,   113,    45,   210,     3,    38,   161,    45,
      45,    45,   160,    46,    79,   215,   251,   153,   219,   220,
     215,   210,   215,    38,   215,   251,     5,    45,   215,   215,
     251,   215,   251,   215,    45,   119,   122,   129,   185,   227,
      45,    45,   215,   251,   215,   251,   215,   251,   215,   251,
     215,   251,    89,   182,   197,   214,   214,   214,   214,   214,
     214,   214,   205,   215,   215,    32,    33,    34,    46,    47,
     137,   215,   252,   215,   252,   215,   252,   215,   252,   215,
     252,   215,   252,   215,   215,   214,    44,   173,   216,     6,
       8,     9,    24,   254,     3,   161,   161,     3,   170,   195,
      44,   186,   195,    45,    44,   161,     3,   161,   210,    45,
     215,   215,    81,   221,   219,    49,    45,   148,    45,    45,
     215,    45,   226,    45,    45,   215,    45,   215,   160,    56,
       5,    33,    68,   146,   228,   228,    45,   227,    45,   226,
     226,    45,   215,    45,   215,    45,   215,    45,   215,    45,
     215,    44,   173,   199,   200,   201,   205,   206,   181,   215,
     214,   216,   173,   173,   173,   173,   173,   173,    23,   210,
       6,     8,     9,   161,     3,     3,   195,    45,   210,     3,
      38,   161,    44,   161,     3,   226,    45,   142,   215,    82,
      52,    53,    54,    55,    59,    60,    62,    71,    73,    74,
      80,    86,    95,    96,    97,   106,   107,   108,   110,   125,
     127,   136,   143,   144,   149,   205,   229,   230,   231,   232,
     233,   234,   240,   241,   242,   243,   244,   245,   246,   247,
     205,   226,   226,    45,   226,    45,   226,    45,   215,   210,
     120,     5,    68,   146,   128,   120,    45,   226,    45,   226,
      45,   226,    45,   226,    45,   226,    45,   173,   200,   206,
       3,    49,   253,    12,    13,    14,    15,    16,    18,   160,
     207,   202,    91,   183,    23,   214,    45,     3,    45,    45,
      44,   161,     3,    45,   210,     3,    38,   161,   226,   215,
      99,    44,    44,    99,   150,    44,    99,   150,    44,    44,
      44,   121,    44,    72,    94,   103,   104,   132,   157,   235,
     236,   238,   239,    59,    60,    44,    99,   150,    44,    44,
      44,    44,   155,   156,    44,   155,   156,    44,    45,    48,
     105,    60,   255,   255,    45,   226,   226,   226,    45,    45,
     185,   227,    87,   120,   128,    87,   120,   226,   226,   226,
     226,   226,    45,   253,   194,   204,    15,   117,   209,   208,
     200,   209,   209,   199,    15,    49,   203,   253,    56,    93,
     189,   214,    45,   210,     3,    38,    44,   161,    45,   161,
       3,    38,   111,     5,     5,   111,    44,     5,   111,    44,
       5,   248,     5,     5,     5,    44,   145,    44,    44,   150,
      44,    99,   150,     5,   111,    44,   248,     5,   205,     5,
     143,   143,     5,   143,   143,     5,    44,   135,    45,   227,
      45,    23,    23,    23,    23,    23,   204,   200,   208,   114,
     208,   208,   200,   253,   203,   196,   215,    45,    44,   161,
      45,   210,     3,    38,     3,    38,    44,    45,    45,    44,
       5,    45,    44,     5,    61,    64,    90,    98,   100,   112,
     249,   250,    45,    45,   160,    45,   160,    45,     5,   132,
     237,   239,     5,     5,    44,     5,   111,    44,    45,    44,
       5,    45,    45,   160,    45,    45,   158,   158,    45,   158,
     158,    45,     5,   205,    45,     5,    68,   146,     5,    68,
     146,     5,    68,   146,     5,    68,   146,     5,    68,    74,
     146,   215,   114,   148,   203,   210,    45,   210,     3,    38,
      45,     5,   248,    45,   248,    45,   249,     5,     5,    45,
     160,    44,    45,    45,     5,    45,    44,     5,   248,    45,
       5,   131,   155,   156,   155,   156,    45,   255,    87,   120,
     128,    87,   120,    87,   120,   128,    87,   120,    87,   120,
     128,    87,   120,    87,   120,   128,    87,   120,   120,   128,
      87,    87,   120,   215,   194,    45,    45,    45,    45,    45,
      45,     5,     5,    45,   248,    45,    45,    45,   205,   143,
     143,   143,   143,    45,    45,    45,   158,   158,   158,   158
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   162,   163,   164,   164,   165,   165,   165,   166,   167,
     167,   168,   169,   170,   170,   171,   172,   173,   173,   174,
     174,   175,   175,   176,   176,   176,   176,   177,   177,   177,
     178,   179,   180,   180,   180,   180,   181,   181,   182,   183,
     183,   184,   184,   185,   186,   186,   187,   188,   188,   188,
     189,   189,   190,   190,   191,   191,   192,   193,   193,   194,
     195,   195,   196,   196,   196,   197,   197,   198,   198,   198,
     198,   199,   199,   200,   200,   201,   201,   201,   201,   201,
     202,   203,   204,   204,   205,   205,   205,   205,   205,   205,
     205,   205,   206,   206,   206,   206,   206,   207,   207,   207,
     207,   208,   209,   209,   210,   210,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   212,   212,   212,   212,   212,   212,   212,
     213,   213,   213,   213,   213,   213,   213,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   216,   216,
     217,   218,   218,   219,   219,   220,   221,   221,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   224,
     224,   224,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   226,   226,   226,   226,
     226,   226,   226,   226,   227,   227,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   229,   229,   229,   229,   230,   231,
     232,   232,   232,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   234,   235,   235,   236,   236,   237,
     237,   237,   238,   238,   238,   238,   238,   239,   239,   239,
     239,   239,   240,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   242,   242,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   244,   244,   244,   244,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   246,   246,
     246,   246,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   248,   248,   248,
     248,   249,   249,   249,   250,   250,   250,   251,   251,   252,
     252,   252,   253,   254,   254,   255
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     4,     5,     1,     3,     1,     1,     3,     3,     3,
       4,     1,     1,     9,     5,     5,     5,     0,     1,     5,
       0,     0,     0,     2,     4,     3,     0,     2,     2,     0,
       4,     0,     1,     3,     1,     3,     2,     0,     1,     1,
       0,     2,     2,     3,     1,     3,     4,     0,     1,     3,
       1,     3,     0,     1,     1,     1,     3,     1,     2,     3,
       1,     1,     3,     1,     1,     3,     5,     4,     4,     3,
       0,     0,     0,     1,     1,     3,     5,     4,     7,     6,
       6,     5,     3,     6,     5,     6,     4,     3,     3,     3,
       2,     0,     0,     1,     1,     3,     1,     3,     3,     5,
       5,     7,     7,     6,     6,     9,     9,     8,     8,     8,
       8,     7,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     2,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     2,
       3,     4,     3,     4,     3,     4,     3,     4,     3,     4,
       3,     4,     3,     4,     3,     3,     2,     3,     4,     3,
       4,     3,     4,     5,     6,     3,     4,     3,     1,     3,
       5,     0,     1,     1,     2,     4,     0,     2,     1,     1,
       1,     6,     6,     4,     1,     4,     1,     6,     1,     1,
       5,     4,     6,     5,     5,     4,     6,     5,     5,     4,
       6,     5,     5,     4,     6,     5,     5,     4,     6,     5,
       5,     4,     6,     5,     5,     4,     6,     5,     5,     4,
       6,     5,     5,     4,     6,     5,     5,     4,     4,     4,
       4,     4,     9,     8,     7,     6,     5,     3,     3,     3,
      10,     9,     8,     7,     6,     4,     8,     5,     7,     7,
       6,     4,     4,     3,     2,     2,     2,     2,     2,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     1,     1,     1,     1,     1,     6,
       5,     2,     2,     5,     4,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     4,     1,     1,
       4,     1,     4,     1,     6,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     7,     4,     4,     4,     1,
       7,     7,     4,     4,     4,     1,     1,     1,     6,     4,
       1,     6,     4,     1,     6,     4,     1,     1,     1,     1,
       1,     4,     1,     1,     2,     4,     1,     4,     1,     5,
       5,     4,     6,     3,     6,     3,     4,     1,     6,     3,
       4,     1,     5,     2,     5,     2,     4,     1,     6,     6,
       5,     7,     4,     6,     3,     4,     1,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2
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
#if TSQL_DEBUG

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
# if defined TSQL_LTYPE_IS_TRIVIAL && TSQL_LTYPE_IS_TRIVIAL

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
#else /* !TSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !TSQL_DEBUG */


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
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2221 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2227 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2233 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2239 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2245 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2251 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2257 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2263 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 163: /* sql_stmt  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2269 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 164: /* stmt_list  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2275 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 165: /* stmt  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2281 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 166: /* dql_stmt  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2287 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 167: /* dml_stmt  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2293 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 168: /* delete_stmt  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2299 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 169: /* update_stmt  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2305 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 170: /* update_elem_list  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2311 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 171: /* update_elem  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2317 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 172: /* select_stmt  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2323 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 173: /* select_with_parens  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2329 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 174: /* select_no_parens  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2335 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 175: /* select_clause  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2341 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 176: /* simple_select  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2347 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 177: /* opt_corresponding_spec  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2353 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 178: /* opt_into_clause  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2359 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* opt_top  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2365 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* opt_for_clause  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2371 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* opt_where  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2377 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* opt_from_clause  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2383 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_groupby  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2389 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* opt_order_by  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2395 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* order_by  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2401 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* sort_list  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2407 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* sort_key  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2413 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_asc_desc  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2419 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_having  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2425 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* with_clause  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2431 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* with_list  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2437 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* common_table_expr  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2443 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_derived_column_list  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2449 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* simple_ident_list_with_parens  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2455 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* simple_ident_list  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2461 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_distinct  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2467 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* select_expr_list  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2473 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* projection  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2479 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* from_list  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2485 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* table_factor  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2491 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* table_factor_non_join  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2497 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_for_system_time  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2503 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_with_table_hint  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2509 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_simple_ident_list_with_parens  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2515 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* relation_factor  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2521 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* joined_table  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2527 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* join_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2533 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* expr_list  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2539 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* column_ref  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2545 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* expr_const  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2551 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* simple_expr  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2557 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* arith_expr  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2563 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* expr  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2569 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* in_expr  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2575 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* case_expr  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2581 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* case_arg  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2587 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* when_clause_list  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2593 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* when_clause  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2599 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* case_default  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2605 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* func_expr  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2611 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* aggregate_windowed_function  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2617 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* ranking_windowed_function  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2623 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* scalar_function  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2629 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* over_clause  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2635 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* row_or_range_clause  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2641 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* window_frame_extent  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2647 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* data_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2653 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* user_defined_type_name  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2659 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* reference_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2665 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* collection_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2671 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* predefined_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2677 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* interval_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2683 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* interval_qualifier  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2689 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* start_field  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2695 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* end_field  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2701 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* single_datetime_field  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2707 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* non_second_primary_datetime_field  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2713 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* boolean_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2719 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* datetime_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2725 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* numeric_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2731 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* exact_numeric_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2737 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* approximate_numeric_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2743 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* character_string_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2749 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* binary_large_object_string_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2755 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* national_character_string_type  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2761 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* large_object_length  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2767 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* char_length_units  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2773 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* multiplier  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2779 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* distinct_or_all  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2785 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* relation_name  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2791 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* column_label  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2797 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* collate_clause  */
#line 93 "./sqlparser_tsql.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2803 "sqlparser_tsql_bison.cpp" /* yacc.c:1257  */
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
# if defined TSQL_LTYPE_IS_TRIVIAL && TSQL_LTYPE_IS_TRIVIAL
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
#line 63 "./sqlparser_tsql.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 2920 "sqlparser_tsql_bison.cpp" /* yacc.c:1429  */
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
#line 215 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 3114 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 226 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 3123 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 233 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3129 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 250 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		nullptr,	/* E_DELETE_OPT_TOP 1 */
    		(yyvsp[-1].node),		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		nullptr,        /* E_DELETE_OPT_OUTPUT 4 */
    		nullptr,	/* E_DELETE_FROM_LIST 5 */
    		(yyvsp[0].node),		/* E_DELETE_OPT_WHERE 6 */
    		nullptr 	/* E_DELETE_OPT_QUERY_HINT 7 */);
    (yyval.node)->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
#line 3146 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 267 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		nullptr,	/* E_UPDATE_OPT_WITH 0 */
    		nullptr,	/* E_UPDATE_OPT_TOP 1 */
    		(yyvsp[-3].node),		/* E_UPDATE_UPDATE_RELATION 2 */
    		nullptr,	/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-1].node),		/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		nullptr,	/* E_UPDATE_OPT_OUTPUT 5 */
    		nullptr,	/* E_UPDATE_FROM_LIST 6 */
    		(yyvsp[0].node),		/* E_UPDATE_OPT_WHERE 7 */
    		nullptr		/* E_UPDATE_OPT_QUERY_HINT 8 */);
    (yyval.node)->serialize_format = &UPDATE_SERIALIZE_FORMAT;
}
#line 3164 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 285 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3173 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 293 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* t = nullptr;
    if (!Node::check_update_item((yyvsp[0].node), t))
    {
        tsql_error(&(yylsp[0]), result, scanner, "update element format error");
    	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM, E_UPDATE_ELEM_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3188 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 312 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3197 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 317 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3206 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 325 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[0].node));
}
#line 3216 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 331 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-3].node));
}
#line 3227 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 347 "./sqlparser_tsql.y" /* yacc.c:1646  */
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
#line 3256 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 372 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].node))
    {
        (yyvsp[-2].node)->set_text((yyvsp[-2].node)->text() + " " + (yyvsp[-1].node)->text());
        delete((yyvsp[-1].node));
    }
    Node* set_op = Node::makeTerminalNode(E_SET_UNION, "UNION");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        (yyvsp[-2].node),                  /* E_SELECT_ALL_SPECIFIED 7 */
                        (yyvsp[-4].node),                  /* E_SELECT_FORMER_SELECT_STMT 8 */
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
#line 3291 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 403 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].node))
    {
        (yyvsp[-2].node)->set_text((yyvsp[-2].node)->text() + " " + (yyvsp[-1].node)->text());
        delete((yyvsp[-1].node));
    }
    Node* set_op = Node::makeTerminalNode(E_SET_INTERSECT, "INTERSECT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        (yyvsp[-2].node),                  /* E_SELECT_ALL_SPECIFIED 7 */
                        (yyvsp[-4].node),                  /* E_SELECT_FORMER_SELECT_STMT 8 */
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
#line 3326 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 434 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].node))
    {
        (yyvsp[-2].node)->set_text((yyvsp[-2].node)->text() + " " + (yyvsp[-1].node)->text());
        delete((yyvsp[-1].node));
    }
    Node* set_op = Node::makeTerminalNode(E_SET_EXCEPT, "EXCEPT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        (yyvsp[-2].node),                  /* E_SELECT_ALL_SPECIFIED 7 */
                        (yyvsp[-4].node),                  /* E_SELECT_FORMER_SELECT_STMT 8 */
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
#line 3361 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 467 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3367 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 469 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CORRESPONDING");
}
#line 3375 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 473 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CORRESPONDING BY ("+(yyvsp[-1].node)->text()+")");
}
#line 3383 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 479 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3389 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 484 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3395 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 488 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3401 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 490 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FOR UPDATE");
}
#line 3409 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 494 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FOR UPDATE OF "+(yyvsp[0].node)->text());
}
#line 3417 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 498 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FOR READ ONLY");
}
#line 3425 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 504 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3431 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 506 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 3440 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 515 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 3449 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 528 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3455 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 530 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 3464 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 537 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3470 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 543 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 3479 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 552 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3488 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 560 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 3497 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 568 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 3505 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 572 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 3513 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 576 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 3521 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 582 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3527 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 584 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 3536 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 594 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 3545 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 599 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 3554 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 608 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3563 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 617 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 3572 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 624 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3578 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 630 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3587 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 639 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3596 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 646 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3602 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 648 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 3610 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 652 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 3618 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 660 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3627 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 668 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3636 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 673 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3648 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 681 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3660 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 689 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3670 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 699 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3679 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 716 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 3688 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 721 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 3697 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 726 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 3706 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 731 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 3715 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 736 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 3724 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 744 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3730 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 749 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3736 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 753 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3742 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 760 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3751 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 765 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 3760 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 770 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 3769 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 775 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 3778 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 780 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3787 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 785 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3796 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 790 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3805 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 795 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3814 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 803 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3823 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 808 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3832 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 813 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3842 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 819 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 3851 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 824 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 3861 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 833 "./sqlparser_tsql.y" /* yacc.c:1646  */
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
#line 3876 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 844 "./sqlparser_tsql.y" /* yacc.c:1646  */
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
#line 3891 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 855 "./sqlparser_tsql.y" /* yacc.c:1646  */
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
#line 3906 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 866 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 3914 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 873 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3920 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 877 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3926 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 878 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 3932 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 885 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3941 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 894 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3951 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 900 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 3961 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 906 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 3972 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 913 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 3982 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 919 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 3993 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 926 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4003 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 932 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4014 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 939 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4024 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 945 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4035 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 952 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4045 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 958 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4056 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 965 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4066 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 971 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4077 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 978 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4087 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 984 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4098 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 991 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4108 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 997 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4119 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1012 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 4125 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1019 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4135 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1028 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 4144 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1037 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 4153 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1042 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 4162 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1047 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 4171 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1052 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 4180 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1057 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 4189 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1062 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 4198 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1067 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 4207 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1072 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 4216 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1077 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 4225 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1087 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4234 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1092 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 4243 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1097 "./sqlparser_tsql.y" /* yacc.c:1646  */
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
#line 4272 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1122 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 4281 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1127 "./sqlparser_tsql.y" /* yacc.c:1646  */
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
#line 4310 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1152 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4319 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1157 "./sqlparser_tsql.y" /* yacc.c:1646  */
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
#line 4348 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1182 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 4357 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1187 "./sqlparser_tsql.y" /* yacc.c:1646  */
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
#line 4386 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1212 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 4395 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1217 "./sqlparser_tsql.y" /* yacc.c:1646  */
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
#line 4424 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1242 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 4433 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1247 "./sqlparser_tsql.y" /* yacc.c:1646  */
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
#line 4462 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1272 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 4471 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1277 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 4480 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1282 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 4489 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1287 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 4498 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1292 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 4507 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1297 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4516 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1302 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4525 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1307 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4534 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1312 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4543 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1317 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4552 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1322 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4561 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1327 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 4570 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1332 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 4579 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1337 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 4588 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1342 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 4597 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1347 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 4606 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1356 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4615 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1365 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 4624 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1372 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4630 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1379 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4639 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1387 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 4648 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1394 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4654 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1396 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 4663 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1408 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 4674 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1415 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 4687 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1424 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4698 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1431 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4709 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1438 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4720 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1445 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4731 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1452 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4744 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1461 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4755 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1468 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4766 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1479 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4777 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1486 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4788 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1493 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4799 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1500 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4810 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1507 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4821 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1514 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4832 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1521 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4843 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1528 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4854 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1535 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4865 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1542 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4876 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1549 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4887 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1556 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4898 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1563 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4909 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1570 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4920 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1577 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4931 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1584 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4942 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1591 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4953 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1598 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4964 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1605 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4975 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1612 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4986 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1619 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4997 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1626 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5008 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1633 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5019 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1640 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5030 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1647 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5041 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1654 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5052 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1661 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5063 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1668 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5074 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1675 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5085 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1682 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5096 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1689 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5107 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1696 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5118 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1703 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5129 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1710 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5140 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1717 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5151 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1724 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5162 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1731 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5174 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1739 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5186 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1747 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5197 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1757 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5208 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1764 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5219 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1771 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5230 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1781 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5242 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1789 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5254 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1797 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5266 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1805 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5278 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1813 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5290 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1821 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5300 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1827 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5311 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1834 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5322 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1841 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), (yyvsp[-9].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5334 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1849 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5346 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1857 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5358 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1865 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5370 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1873 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5382 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1881 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5392 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1890 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5401 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1895 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5410 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1900 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5419 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1905 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5428 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1910 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5437 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1915 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5446 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1920 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5455 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1925 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5464 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1933 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, E_ROWS_CLAUSE_PROPERTY_CNT, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5474 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1939 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, E_RANGE_CLAUSE_PROPERTY_CNT, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5484 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1948 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 5490 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1950 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 5496 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1952 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 5502 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1954 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 5508 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1956 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5514 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1958 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 5520 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1960 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 5526 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1962 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5532 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1964 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 5538 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1966 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5544 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1968 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5550 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1970 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5556 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1972 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5562 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1974 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 5568 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1976 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5574 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1978 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 5580 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1980 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 5586 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1982 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5592 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1984 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 5598 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1986 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5604 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1988 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 5610 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1990 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 5616 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1992 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5622 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1994 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 5628 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1996 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5634 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1998 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5640 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 2000 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5646 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 2002 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5652 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 2014 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5661 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 2022 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5670 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 2030 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 5680 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 2036 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 5689 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 2041 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 5698 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 2049 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5707 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 2054 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5716 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 2059 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5725 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 2065 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5734 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 2079 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5743 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 2087 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 5752 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 2096 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5761 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 2106 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5770 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 2111 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5778 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 2118 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5787 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 2124 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5796 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 2129 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5805 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 2134 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5813 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 2141 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 5821 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 2145 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 5829 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 2149 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 5837 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 2153 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 5845 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 2157 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 5853 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 2164 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 5861 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 2171 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 5869 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 2175 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5878 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 2180 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5887 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 2185 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5896 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 2190 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 5904 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 2194 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 5912 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 2198 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME");
}
#line 5920 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 2202 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5929 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 2207 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5938 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 2212 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5947 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 2217 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 5955 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 2221 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 5963 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 2225 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP");
}
#line 5971 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2237 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5980 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2242 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5989 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 2247 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 5997 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 2251 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6006 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2256 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6015 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2261 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 6023 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2265 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6032 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2270 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6041 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2275 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6049 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2279 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6057 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2283 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6065 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2287 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6073 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2291 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6081 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2298 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6090 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2303 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6098 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2307 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6106 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2311 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6114 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2318 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6123 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2323 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6131 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2327 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6140 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2332 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6148 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2336 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6157 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2341 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6166 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2346 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6175 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2351 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6184 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2356 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6192 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2360 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6201 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2365 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6209 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2369 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6218 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2374 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6226 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2381 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6235 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2386 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6243 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2390 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6252 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2395 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6260 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2402 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6269 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2407 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6277 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2411 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6286 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2416 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6294 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2420 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6303 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2425 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6311 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2429 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6320 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2434 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6329 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2439 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6338 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2444 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6347 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2449 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6355 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2453 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6364 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2458 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6372 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2462 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6381 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2467 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6389 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2474 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6398 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2479 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6407 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2484 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6416 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2489 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6425 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2497 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6433 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2501 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6441 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2505 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6449 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2512 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6457 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2516 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 6465 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2520 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 6473 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2527 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6481 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2531 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6489 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2537 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 6495 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2538 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 6501 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2539 "./sqlparser_tsql.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 6507 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2553 "./sqlparser_tsql.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6516 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
    break;


#line 6520 "sqlparser_tsql_bison.cpp" /* yacc.c:1646  */
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
#line 2559 "./sqlparser_tsql.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
