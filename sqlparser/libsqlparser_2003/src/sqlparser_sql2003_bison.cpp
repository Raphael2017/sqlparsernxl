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
#define YYSTYPE         SQL2003_STYPE
#define YYLTYPE         SQL2003_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         sql2003_parse
#define yylex           sql2003_lex
#define yyerror         sql2003_error
#define yydebug         sql2003_debug
#define yynerrs         sql2003_nerrs


/* Copy the first part of user declarations.  */
#line 1 "./sqlparser_sql2003.y" /* yacc.c:339  */

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

#include "sqlparser_sql2003_bison.h"
#include "sqlparser_sql2003_flex.h"

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


#line 109 "sqlparser_sql2003_bison.cpp" /* yacc.c:339  */

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
   by #include "sqlparser_sql2003_bison.h".  */
#ifndef YY_SQL2003_SQLPARSER_SQL2003_BISON_H_INCLUDED
# define YY_SQL2003_SQLPARSER_SQL2003_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef SQL2003_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define SQL2003_DEBUG 1
#  else
#   define SQL2003_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define SQL2003_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined SQL2003_DEBUG */
#if SQL2003_DEBUG
extern int sql2003_debug;
#endif
/* "%code requires" blocks.  */
#line 41 "./sqlparser_sql2003.y" /* yacc.c:355  */

// %code requires block

#include "node.h"

#line 153 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef SQL2003_TOKENTYPE
# define SQL2003_TOKENTYPE
  enum sql2003_tokentype
  {
    SQL2003_NAME = 258,
    SQL2003_STRING = 259,
    SQL2003_INTNUM = 260,
    SQL2003_BOOL = 261,
    SQL2003_APPROXNUM = 262,
    SQL2003_NULLX = 263,
    SQL2003_UNKNOWN = 264,
    SQL2003_QUESTIONMARK = 265,
    SQL2003_COLLATE = 266,
    SQL2003_CROSS = 267,
    SQL2003_FULL = 268,
    SQL2003_INNER = 269,
    SQL2003_JOIN = 270,
    SQL2003_LEFT = 271,
    SQL2003_NATURAL = 272,
    SQL2003_RIGHT = 273,
    SQL2003_UNION = 274,
    SQL2003_EXCEPT = 275,
    SQL2003_INTERSECT = 276,
    SQL2003_OR = 277,
    SQL2003_AND = 278,
    SQL2003_NOT = 279,
    SQL2003_COMP_LE = 280,
    SQL2003_COMP_LT = 281,
    SQL2003_COMP_EQ = 282,
    SQL2003_COMP_GT = 283,
    SQL2003_COMP_GE = 284,
    SQL2003_COMP_NE = 285,
    SQL2003_CNNOP = 286,
    SQL2003_LIKE = 287,
    SQL2003_BETWEEN = 288,
    SQL2003_IN = 289,
    SQL2003_IS = 290,
    SQL2003_MOD = 291,
    SQL2003_UMINUS = 292,
    SQL2003_ALL = 293,
    SQL2003_ANY = 294,
    SQL2003_ARRAY = 295,
    SQL2003_AS = 296,
    SQL2003_ASC = 297,
    SQL2003_AVG = 298,
    SQL2003_BIGINT = 299,
    SQL2003_BINARY = 300,
    SQL2003_BLOB = 301,
    SQL2003_BOOLEAN = 302,
    SQL2003_BY = 303,
    SQL2003_CASE = 304,
    SQL2003_CAST = 305,
    SQL2003_CHAR = 306,
    SQL2003_CHARACTER = 307,
    SQL2003_CHARACTERS = 308,
    SQL2003_CLOB = 309,
    SQL2003_COALESCE = 310,
    SQL2003_CODE_UNITS = 311,
    SQL2003_CONVERT = 312,
    SQL2003_CORRESPONDING = 313,
    SQL2003_COUNT = 314,
    SQL2003_CURRENT = 315,
    SQL2003_CURRENT_TIMESTAMP = 316,
    SQL2003_CURRENT_USER = 317,
    SQL2003_DATE = 318,
    SQL2003_DAY = 319,
    SQL2003_DEC = 320,
    SQL2003_DECIMAL = 321,
    SQL2003_DEFAULT = 322,
    SQL2003_DELETE = 323,
    SQL2003_DENSE_RANK = 324,
    SQL2003_DESC = 325,
    SQL2003_DISTINCT = 326,
    SQL2003_DOUBLE = 327,
    SQL2003_ELSE = 328,
    SQL2003_END = 329,
    SQL2003_END_P = 330,
    SQL2003_ERROR = 331,
    SQL2003_EXISTS = 332,
    SQL2003_FLOAT = 333,
    SQL2003_FOLLOWING = 334,
    SQL2003_FOR = 335,
    SQL2003_FROM = 336,
    SQL2003_G = 337,
    SQL2003_GROUP = 338,
    SQL2003_GROUPING = 339,
    SQL2003_HAVING = 340,
    SQL2003_HOUR = 341,
    SQL2003_INT = 342,
    SQL2003_INTEGER = 343,
    SQL2003_INTERVAL = 344,
    SQL2003_K = 345,
    SQL2003_LARGE = 346,
    SQL2003_M = 347,
    SQL2003_MAX = 348,
    SQL2003_MIN = 349,
    SQL2003_MINUTE = 350,
    SQL2003_MONTH = 351,
    SQL2003_MULTISET = 352,
    SQL2003_NATIONAL = 353,
    SQL2003_NCHAR = 354,
    SQL2003_NCLOB = 355,
    SQL2003_NULLIF = 356,
    SQL2003_NUMERIC = 357,
    SQL2003_OBJECT = 358,
    SQL2003_OCTETS = 359,
    SQL2003_OF = 360,
    SQL2003_ON = 361,
    SQL2003_ONLY = 362,
    SQL2003_ORDER = 363,
    SQL2003_OUTER = 364,
    SQL2003_OVER = 365,
    SQL2003_PARTITION = 366,
    SQL2003_PRECEDING = 367,
    SQL2003_PRECISION = 368,
    SQL2003_RANGE = 369,
    SQL2003_RANK = 370,
    SQL2003_READ = 371,
    SQL2003_REAL = 372,
    SQL2003_RECURSIVE = 373,
    SQL2003_REF = 374,
    SQL2003_ROW = 375,
    SQL2003_ROWS = 376,
    SQL2003_ROW_NUMBER = 377,
    SQL2003_SCOPE = 378,
    SQL2003_SECOND = 379,
    SQL2003_SELECT = 380,
    SQL2003_SESSION_USER = 381,
    SQL2003_SET = 382,
    SQL2003_SMALLINT = 383,
    SQL2003_SOME = 384,
    SQL2003_STDDEV_POP = 385,
    SQL2003_STDDEV_SAMP = 386,
    SQL2003_SUM = 387,
    SQL2003_SYSTEM_USER = 388,
    SQL2003_THEN = 389,
    SQL2003_TIME = 390,
    SQL2003_TIMESTAMP = 391,
    SQL2003_TO = 392,
    SQL2003_UNBOUNDED = 393,
    SQL2003_UPDATE = 394,
    SQL2003_USING = 395,
    SQL2003_VARCHAR = 396,
    SQL2003_VARYING = 397,
    SQL2003_VAR_POP = 398,
    SQL2003_VAR_SAMP = 399,
    SQL2003_WHEN = 400,
    SQL2003_WHERE = 401,
    SQL2003_WITH = 402,
    SQL2003_WITHOUT = 403,
    SQL2003_YEAR = 404,
    SQL2003_ZONE = 405
  };
#endif

/* Value type.  */
#if ! defined SQL2003_STYPE && ! defined SQL2003_STYPE_IS_DECLARED

union SQL2003_STYPE
{
#line 84 "./sqlparser_sql2003.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 321 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */
};

typedef union SQL2003_STYPE SQL2003_STYPE;
# define SQL2003_STYPE_IS_TRIVIAL 1
# define SQL2003_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined SQL2003_LTYPE && ! defined SQL2003_LTYPE_IS_DECLARED
typedef struct SQL2003_LTYPE SQL2003_LTYPE;
struct SQL2003_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define SQL2003_LTYPE_IS_DECLARED 1
# define SQL2003_LTYPE_IS_TRIVIAL 1
#endif



int sql2003_parse (ParseResult* result, yyscan_t scanner);

#endif /* !YY_SQL2003_SQLPARSER_SQL2003_BISON_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 351 "sqlparser_sql2003_bison.cpp" /* yacc.c:358  */

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
         || (defined SQL2003_LTYPE_IS_TRIVIAL && SQL2003_LTYPE_IS_TRIVIAL \
             && defined SQL2003_STYPE_IS_TRIVIAL && SQL2003_STYPE_IS_TRIVIAL)))

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
#define YYLAST   2643

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  162
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  95
/* YYNRULES -- Number of rules.  */
#define YYNRULES  419
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  821

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

#if SQL2003_DEBUG
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
     789,   794,   802,   807,   812,   818,   823,   829,   835,   844,
     855,   866,   877,   885,   889,   890,   895,   896,   905,   911,
     917,   924,   930,   937,   943,   950,   956,   963,   969,   976,
     982,   989,   995,  1002,  1008,  1018,  1019,  1020,  1021,  1022,
    1023,  1024,  1028,  1029,  1030,  1036,  1037,  1038,  1039,  1047,
    1048,  1053,  1058,  1063,  1068,  1073,  1078,  1083,  1088,  1096,
    1097,  1098,  1103,  1108,  1133,  1138,  1163,  1168,  1193,  1198,
    1223,  1228,  1253,  1258,  1283,  1288,  1293,  1298,  1303,  1308,
    1313,  1318,  1323,  1328,  1333,  1338,  1343,  1348,  1353,  1358,
    1366,  1367,  1376,  1384,  1385,  1389,  1390,  1398,  1406,  1407,
    1416,  1417,  1418,  1419,  1420,  1427,  1436,  1443,  1450,  1457,
    1464,  1473,  1480,  1491,  1498,  1505,  1512,  1519,  1526,  1533,
    1540,  1547,  1554,  1561,  1568,  1575,  1582,  1589,  1596,  1603,
    1610,  1617,  1624,  1631,  1638,  1645,  1652,  1659,  1666,  1673,
    1680,  1687,  1694,  1701,  1708,  1715,  1722,  1729,  1736,  1743,
    1751,  1759,  1769,  1776,  1783,  1793,  1801,  1809,  1817,  1825,
    1833,  1839,  1846,  1853,  1861,  1869,  1877,  1885,  1893,  1903,
    1912,  1917,  1922,  1927,  1932,  1937,  1942,  1947,  1955,  1961,
    1970,  1972,  1974,  1976,  1978,  1980,  1982,  1984,  1986,  1988,
    1990,  1992,  1994,  1996,  1998,  2000,  2002,  2004,  2006,  2008,
    2010,  2012,  2014,  2016,  2018,  2020,  2022,  2024,  2029,  2030,
    2031,  2032,  2036,  2044,  2052,  2058,  2063,  2071,  2076,  2081,
    2086,  2087,  2092,  2093,  2094,  2095,  2096,  2097,  2101,  2109,
    2114,  2118,  2123,  2127,  2128,  2133,  2140,  2145,  2146,  2151,
    2156,  2163,  2167,  2171,  2175,  2179,  2186,  2193,  2197,  2202,
    2207,  2212,  2216,  2220,  2224,  2229,  2234,  2239,  2243,  2247,
    2254,  2255,  2259,  2264,  2269,  2273,  2278,  2283,  2287,  2292,
    2297,  2301,  2305,  2309,  2313,  2320,  2325,  2329,  2333,  2340,
    2345,  2349,  2354,  2358,  2363,  2368,  2373,  2378,  2382,  2387,
    2391,  2396,  2403,  2408,  2412,  2417,  2424,  2429,  2433,  2438,
    2442,  2447,  2451,  2456,  2461,  2466,  2471,  2475,  2480,  2484,
    2489,  2496,  2501,  2506,  2511,  2519,  2523,  2527,  2534,  2538,
    2542,  2549,  2553,  2560,  2561,  2562,  2565,  2569,  2570,  2575
};
#endif

#if SQL2003_DEBUG || YYERROR_VERBOSE || 1
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
  "ranking_windowed_function", "scalar_function", "function_call_keyword",
  "over_clause", "row_or_range_clause", "window_frame_extent", "data_type",
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

#define YYPACT_NINF -535

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-535)))

#define YYTABLE_NINF -323

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     318,     9,   -45,   334,    48,     0,    99,    53,    98,  -535,
    -535,  -535,  -535,  -535,  -535,  -535,   244,  -535,   154,   122,
     162,    48,  -535,  -535,  -535,    77,   134,   228,   291,  -535,
     158,  -535,  -535,   318,   334,   334,   334,   258,   243,  -535,
     244,  -535,  -535,   207,   917,    22,  1680,   368,   324,  -535,
    -535,   291,  -535,   313,   313,   313,  1680,   150,  -535,   243,
    1680,  -535,    -3,  -535,  -535,  -535,  -535,  -535,  -535,   337,
     354,  1680,  1789,  1789,  -535,   668,   374,  1680,   394,   398,
     419,   426,   437,  -535,  -535,  -535,   438,   451,   454,  -535,
     460,   462,  -535,  -535,   463,   466,   475,   477,  -535,   484,
     486,   487,  -535,   490,   491,  -535,  -535,  -535,   339,  -535,
    -535,  -535,   710,  2008,  -535,  -535,  -535,  -535,  -535,  -535,
    -535,   492,   363,    23,   207,   381,  2596,   382,   500,   451,
    -535,   493,   154,   154,   154,  -535,   388,  1975,   431,   445,
    -535,  2596,  1026,    10,   514,   516,  2608,   552,   552,   308,
     527,    36,   808,  2596,   417,  1680,  1680,  1680,   399,   568,
     531,  -535,  1680,   808,   808,  1680,   452,   535,   537,   808,
     808,   808,   808,   808,   495,   917,  1789,  1789,  1789,  1789,
    1789,  1789,  1789,  -535,  -535,    48,  1680,  1680,   400,   559,
     559,   559,   559,   559,   559,  1680,  1680,  1789,   541,   503,
     214,  -535,  -535,  1680,    24,   427,   599,  -535,  1680,   368,
    -535,  -535,   563,   587,   587,  -535,  1680,  -535,  -535,  -535,
    -535,   368,  -535,   564,    -2,  -535,    25,  -535,  -535,  -535,
    1680,  -535,  -535,  2071,  1680,  1680,   538,   417,  2036,   573,
    1925,   575,  2096,  1680,   590,   532,  2121,  2146,  1680,  2171,
    1680,   315,  -535,   596,    49,    49,   191,   598,   532,   532,
    2196,  1680,  2221,  1680,  2246,  1680,  2271,  1680,  2296,  1680,
      40,   207,  -535,   552,   552,   612,   612,   612,   612,  -535,
    -535,  1876,  2608,  1680,  1789,   541,  -535,  -535,  -535,   566,
     451,   566,   451,   566,   451,   566,   451,   566,   451,   566,
     451,   579,   480,   742,   668,  -535,  -535,  -535,  -535,  -535,
     346,  -535,  2321,   496,   653,   655,  -535,  -535,  -535,   368,
    -535,  -535,  -535,  1135,    17,     2,   656,  -535,   532,  2346,
    1950,  1680,   582,  -535,   304,  -535,    48,   532,   532,  2371,
    -535,  -535,  -535,   532,  2396,   532,  2421,  1680,  1680,   545,
      27,   542,   546,  -535,  -535,  -535,   622,  -535,  -535,  -535,
     532,  2446,   532,  2471,   532,  2496,   532,  2521,   532,  2546,
      13,    31,  -535,    60,  -535,  -535,  -535,   578,   480,   798,
    -535,  -535,  -535,  -535,  -535,  -535,  -535,  1789,   634,  -535,
    -535,  -535,  -535,   677,  -535,  -535,   636,  -535,   638,     8,
    -535,   682,  1244,    76,   526,  -535,   532,  1680,  2596,  -535,
    -535,   589,   646,  -535,   136,   138,   650,  -535,   651,   657,
     581,   659,  -535,  -535,   386,   -23,   159,   662,   663,  -535,
     665,  -535,    54,   111,   669,  -535,   230,  -535,  -535,  -535,
    -535,  -535,  -535,  -535,  -535,  -535,  -535,   188,  -535,   703,
     670,  -535,  -535,   532,  -535,   532,  -535,   532,  2571,   266,
    -535,   299,   592,   305,  -535,  -535,  -535,  -535,   532,  -535,
     532,  -535,   532,  -535,   532,  -535,   532,   250,   983,   672,
    -535,   715,   228,   706,   605,  -535,    40,   605,   539,   605,
      40,   708,   241,   671,   631,  1789,   710,  -535,  -535,  -535,
    -535,  1353,   221,    39,  -535,   683,   569,  -535,   277,  -535,
    2596,   618,   727,   729,   625,   695,   736,   633,   698,   749,
     750,   751,  -535,   752,   717,  -535,   614,  -535,   147,    90,
     172,   758,   664,   720,   749,   761,    48,   762,   630,   642,
     763,   644,   645,   769,  -535,   732,  -535,   654,  -535,  -535,
    -535,  -535,  -535,  -535,  -535,  -535,   338,   745,   770,   771,
     772,   773,   774,  -535,  -535,  -535,  -535,  -535,  -535,   228,
    -535,  -535,    40,  -535,  -535,  -535,    74,  -535,   777,  -535,
    -535,    40,   715,  -535,  -535,   334,  1680,  -535,   710,  -535,
     754,    41,  -535,  1462,   279,  -535,   330,  -535,  -535,   756,
     759,   760,   766,   812,   782,   778,   823,   525,   784,    66,
      87,   785,   826,   422,   828,   836,   799,   837,   692,   802,
     803,   805,   842,   806,    92,   810,   811,   699,   700,   815,
     704,   705,   816,   845,    48,  -535,   819,  -535,    33,    44,
      51,    97,    26,  -535,  -535,  -535,  1680,   228,  -535,    40,
    -535,    91,  -535,  -535,  1680,  2596,  -535,  1571,   331,  -535,
     822,  -535,  -535,  -535,  -535,   848,  -535,  -535,   749,   824,
    -535,   749,   825,  -535,  -535,  -535,  -535,  -535,  -535,  -535,
     209,  -535,  -535,   863,  -535,   867,  -535,    96,   830,  -535,
    -535,   831,   834,   876,   839,   838,   881,  -535,   749,   843,
    -535,  -535,   884,   764,   169,  -535,  -535,   271,  -535,  -535,
    -535,   846,   703,  -535,   310,   768,   321,   329,   775,   335,
     341,   776,   357,   359,   779,   365,   781,   780,   807,   367,
    2596,  -535,  -535,  1680,   228,  -535,  -535,  -535,   847,  -535,
    -535,  -535,   852,   853,  -535,   854,  -535,  -535,   860,   861,
    -535,   885,   908,   783,  -535,   869,  -535,   749,   870,   871,
    -535,   873,    48,   786,   787,   789,   791,  -535,  -535,  -535,
    -535,  -535,  -535,  -535,  -535,  -535,  -535,  -535,  -535,  -535,
    -535,  -535,  -535,  -535,  -535,  -535,  -535,  -535,  -535,  -535,
    -535,  -535,  -535,  -535,  2596,  -535,  -535,  -535,  -535,  -535,
    -535,  -535,   874,   891,  -535,   892,  -535,  -535,  -535,  -535,
     792,   793,   794,   800,  -535,  -535,  -535,  -535,  -535,  -535,
    -535
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
       0,    11,   108,   125,   126,   128,   127,   129,   130,     0,
       0,     0,     0,     0,    70,     0,     0,   183,     0,     0,
       0,     0,   197,   199,   333,   131,     0,     0,     0,   334,
       0,     0,   335,   332,     0,     0,     0,     0,   201,     0,
       0,     0,   202,     0,     0,   331,   137,    30,    65,   132,
     133,   139,   149,    67,   135,   136,   193,   192,   191,   190,
     150,     0,    85,     0,    36,    13,    15,    60,     0,     0,
      55,    28,     0,     0,     0,    43,    44,    47,     0,    33,
      20,    37,     0,     0,     0,     0,   168,   140,   141,   137,
       0,   106,     0,   184,     0,     0,     0,     0,     0,     0,
       0,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   417,   418,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,   151,     0,     0,    87,     0,    12,     0,     0,
      59,    56,     0,    24,    26,    25,     0,    48,    49,    46,
      35,     0,   250,     0,   109,   110,     0,   252,   251,   134,
       0,   411,   412,     0,     0,     0,   188,   185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   267,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    66,   142,   143,   144,   145,   146,   148,   147,
     419,   167,   166,     0,     0,     0,   413,   415,   414,   152,
       0,   154,     0,   156,     0,   160,     0,   158,     0,   162,
       0,   179,   164,     0,     0,   180,   177,   171,   169,   173,
       0,    69,     0,    86,     0,     0,    91,    14,    61,     0,
      45,    34,   258,     0,     0,     0,     0,   107,   204,     0,
       0,     0,     0,   186,     0,   196,     0,   240,   236,     0,
     198,   243,   241,   208,     0,   212,     0,     0,     0,     0,
       0,     0,     0,   269,   268,   265,     0,   266,   242,   244,
     220,     0,   224,     0,   216,     0,   228,     0,   232,     0,
       0,     0,    38,    71,    73,    80,    74,    39,   165,     0,
     178,   153,   155,   157,   161,   159,   163,     0,     0,   172,
     170,   174,   259,     0,    90,    89,     0,   249,     0,   111,
     112,     0,     0,     0,     0,   203,   206,     0,   189,   182,
     364,     0,   385,   336,   372,   370,   381,   337,   360,   357,
       0,   366,   363,   362,     0,     0,   391,   400,   354,   367,
       0,   361,   343,   349,     0,   302,     0,   299,   300,   301,
     298,   317,   315,   316,   314,   350,   351,   310,   313,   312,
       0,   239,   235,   238,   207,   210,   211,   214,     0,     0,
     271,     0,     0,     0,   272,   270,   261,   219,   222,   223,
     226,   215,   218,   227,   230,   231,   234,    22,     0,    74,
     416,     0,    82,     0,   104,   103,     0,   104,     0,   104,
       0,     0,    81,     0,    50,     0,   175,   181,    88,    29,
     257,     0,     0,     0,   248,     0,   115,   116,     0,   205,
     187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,     0,   330,   318,     0,   320,   327,   389,
     387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   194,   305,   306,     0,   309,   311,
     195,   237,   209,   213,   200,   264,     0,     0,     0,     0,
       0,     0,     0,   221,   225,   217,   229,   233,    92,    82,
      83,    79,     0,   105,   103,   102,     0,   103,     0,   103,
      72,     0,     0,    75,    81,    62,     0,    23,   176,   247,
       0,   113,   114,     0,     0,   256,     0,   123,   124,   383,
       0,     0,   379,     0,     0,   377,     0,   404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   263,     0,   262,     0,     0,
       0,     0,     0,    78,    97,    99,     0,     0,   100,     0,
     101,     0,    81,    77,     0,    51,   255,     0,     0,   246,
       0,   121,   122,   119,   120,     0,   384,   371,     0,     0,
     369,     0,     0,   405,   406,   410,   408,   409,   407,   403,
     402,   380,   359,     0,   356,     0,   365,     0,   325,   319,
     323,     0,     0,     0,     0,   396,     0,   390,     0,     0,
     399,   353,     0,     0,   340,   341,   342,   346,   347,   348,
     375,     0,   308,   260,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    96,    98,     0,     0,    76,    40,   245,     0,   117,
     118,   254,     0,     0,   374,     0,   373,   401,     0,     0,
     329,     0,     0,   326,   388,     0,   386,     0,     0,     0,
     394,     0,     0,     0,     0,     0,     0,   304,   307,   297,
     282,   287,   292,   277,   294,   279,   284,   289,   274,   295,
     280,   285,   290,   275,   296,   281,   286,   291,   276,   278,
     283,   293,   288,   273,    93,    95,   253,   382,   378,   376,
     358,   355,     0,     0,   393,     0,   392,   397,   352,   303,
       0,     0,     0,     0,   328,   324,   395,   338,   339,   344,
     345
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -535,  -535,   906,  -535,  -535,  -535,  -535,  -535,   735,  -535,
    -535,     6,   472,    79,  -535,   366,  -535,  -535,   886,   -94,
    -535,  -535,   900,  -151,   728,  -535,  -535,  -535,  -535,   265,
    -535,  -535,   -26,  -176,   -25,   788,  -535,   467,  -330,  -535,
    -535,  -534,   387,    -4,   594,   474,   -91,  -186,  -134,  -535,
    -535,  -535,    52,   -42,   681,  -535,  -535,   730,  -535,  -535,
    -535,  -535,  -535,  -535,  -535,   -83,  -244,   714,  -535,  -535,
    -535,  -535,  -535,  -535,  -535,  -535,  -535,  -535,  -419,  -535,
    -535,  -535,  -535,  -535,  -535,  -535,  -535,  -511,   290,  -535,
     469,   455,  -231,   790,  -428
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    11,    12,   124,   125,
      13,   106,    20,    16,    17,   132,   174,    44,    58,    61,
     271,   494,    38,    39,   135,   136,   219,   587,    18,    29,
      30,    48,   570,   128,    24,   107,   108,   372,   373,   374,
     492,   583,   571,   375,   376,   491,   575,   574,   150,   109,
     110,   111,   112,   151,   306,   114,   154,   236,   237,   332,
     115,   116,   117,   118,   119,   120,   257,   353,   436,   437,
     438,   439,   440,   441,   525,   526,   689,   527,   121,   442,
     443,   444,   445,   446,   447,   448,   449,   608,   679,   680,
     234,   290,   482,   201,   202
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    49,   113,    27,   126,   528,    14,    19,   223,    53,
      54,    55,   356,   224,   137,   256,    25,    43,   141,   548,
     399,   549,   239,   623,    14,   122,   205,   313,   325,   146,
     207,   726,   461,   318,   480,   153,   529,   530,   714,    14,
     478,   142,   323,    25,    21,   321,   402,   185,   225,   717,
     653,    25,   501,     1,   349,   400,   720,   370,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   483,   484,   485,   486,   487,   488,   489,   506,
     481,   149,   350,   593,   370,   657,   483,   484,   485,   486,
     487,   488,   489,   161,   727,   462,   327,    40,   537,    31,
     728,   715,   723,   483,   484,   485,   486,   487,   488,   489,
     233,   682,   718,   238,   507,   240,   242,   351,   735,   721,
     246,   247,   249,   251,   147,   148,    28,   260,   262,   264,
     266,   268,   684,   113,   615,   211,    32,   701,    14,    14,
      14,   750,     3,   396,   281,   282,     3,   289,   291,   293,
     295,   297,   299,   301,   302,   540,   576,   743,   143,   324,
     745,   312,   341,   403,     5,   724,   126,    41,     5,   502,
     388,   226,   729,   463,   137,   358,   359,   377,   401,   716,
     513,   280,   516,   123,   206,   314,   326,   759,   646,   398,
     719,   614,   329,   330,   690,   352,   230,   722,     1,   185,
     594,   339,   658,   531,   305,   733,   344,    42,   346,   538,
     539,   213,   214,   215,   459,   557,   617,   183,   184,   361,
     490,   363,   647,   365,   591,   367,   683,   369,   273,   274,
     275,   276,   277,   278,   279,   514,   355,   517,    45,   734,
     616,   378,   644,   725,   480,   405,   805,   685,   547,   303,
     569,   651,   702,   480,   451,   452,   751,    33,   532,   592,
     454,   584,   456,    34,    35,    36,   541,   542,   505,    46,
     673,   618,    47,   674,   138,   544,   371,   467,   545,   469,
     597,   471,   661,   473,   768,   475,   515,     3,   518,   408,
     582,   305,  -322,    50,    27,    41,   381,   139,   382,   481,
     383,   577,   384,   579,   385,   458,   386,    25,   556,   533,
     149,   555,   636,   254,    56,   598,   130,   662,    51,   732,
     255,   678,   619,   509,   763,   764,   185,   -22,   -22,   -22,
     435,    57,   450,   663,   739,   546,   379,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   652,   389,    41,   390,   391,   410,   411,   412,   413,
      37,    60,     1,   414,   415,   510,   416,   590,   664,   740,
     551,   127,   552,   129,   553,   417,   477,   418,   419,   131,
      22,   144,    37,   635,   420,   563,   558,   564,   254,   565,
     421,   566,   561,   567,     2,   255,   -22,   769,   145,   422,
     423,   424,    62,    63,    64,    65,    66,    67,   772,    68,
     425,   426,   427,    23,   428,    69,   774,    70,   152,   559,
     133,   134,   777,    71,   -22,   562,   765,   766,   779,   429,
     770,   430,   283,   284,   285,    72,    73,   241,   155,   496,
     431,   773,   156,    75,   782,   231,   784,   432,   433,   775,
      76,     3,   787,   434,   792,   778,    77,    78,    84,   660,
     254,   780,    79,   157,    80,     4,    81,   255,    82,    83,
     158,    84,    15,     5,    85,   347,    86,   783,   232,   785,
      89,   159,   160,   645,    87,   788,   648,   793,   650,    92,
      93,    88,   371,    89,    84,     1,   371,   252,   162,   175,
      90,    91,    92,    93,   163,    15,   164,   165,    94,   307,
     166,   308,   309,   197,   198,   199,    89,    95,   524,   167,
     736,   168,    96,   738,   204,    92,    93,   310,   169,    97,
     170,   171,   625,    98,   172,   173,   203,    99,   100,   101,
     102,   208,   209,   105,   655,   210,   220,   588,   216,   212,
     103,   104,   484,   485,   688,   487,   105,   489,   221,   227,
     654,   228,    62,    63,    64,    65,    66,    67,    37,    68,
     235,   253,   229,   244,   254,    69,   245,    70,   371,   105,
     258,   255,   259,    71,   270,   304,   673,   371,   315,   674,
     178,   179,   180,   181,   182,    72,    73,   195,   196,   197,
     198,   199,   316,    75,   730,   286,   287,   319,    36,   322,
      76,   196,   197,   198,   199,   675,    77,    78,   335,   331,
     337,   731,    79,   676,    80,   677,    81,   243,    82,    83,
     712,    84,   248,   250,    85,   340,    86,   678,   261,   263,
     265,   267,   269,   357,    87,   292,   294,   296,   298,   300,
      95,    88,   348,    89,   182,   371,   394,   393,   395,   404,
      90,    91,    92,    93,   409,   460,   465,   466,    94,   493,
     464,    62,    63,    64,    65,    66,    67,    95,    68,   497,
     498,   499,    96,   500,    69,   503,    70,   508,   511,    97,
     512,   794,    71,    98,   519,   520,   288,    99,   100,   101,
     102,   521,   522,   523,    72,    73,   534,   535,   795,   536,
     103,   104,    75,   543,   185,   550,   105,   568,   480,    76,
     560,   572,   573,   581,   586,    77,    78,   585,   595,   599,
     596,    79,   600,    80,   601,    81,   602,    82,    83,   603,
      84,   604,   606,    85,   605,    86,   176,   177,   178,   179,
     180,   181,   182,    87,   607,   609,   610,   611,   809,   613,
      88,   612,    89,   620,   622,   387,   624,   626,   629,    90,
      91,    92,    93,   627,   632,   621,   633,    94,   176,   177,
     178,   179,   180,   181,   182,   628,    95,   630,   631,   634,
     637,    96,   649,   638,   639,   640,   641,   642,    97,   656,
     665,     3,    98,   695,   666,   667,    99,   100,   101,   102,
     668,    62,    63,    64,    65,    66,    67,   669,    68,   103,
     104,   495,   671,     5,    69,   105,    70,   670,   672,   681,
     686,   687,    71,   691,   176,   177,   178,   179,   180,   181,
     182,   692,   694,   693,    72,    73,   696,   699,   697,   698,
     711,   700,    75,   742,   231,   703,   704,   705,   706,    76,
     707,   710,   708,   709,   713,    77,    78,   741,   748,   744,
     746,    79,   749,    80,   752,    81,   753,    82,    83,   754,
      84,   755,   757,    85,   756,    86,   758,   232,   760,   761,
     802,   767,   796,    87,   791,   762,   771,   797,   798,   799,
      88,   789,    89,   776,   781,   800,   801,   786,   790,    90,
      91,    92,    93,   803,   804,   806,   807,    94,   808,   814,
      62,    63,    64,    65,    66,    67,    95,    68,  -321,   810,
     811,    96,   812,    69,   813,    70,   815,   816,    97,    52,
      59,    71,    98,   317,   320,   140,    99,   100,   101,   102,
     817,   818,   819,    72,    73,    74,   643,   580,   820,   103,
     104,    75,   578,   272,   479,   105,   380,   333,    76,   354,
     747,     0,     0,     0,    77,    78,     0,     0,     0,     0,
      79,     0,    80,     0,    81,     0,    82,    83,     0,    84,
     311,     0,    85,     0,    86,   483,   484,   485,   486,   487,
     488,   489,    87,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,     0,     0,     0,     0,    94,     0,     0,    62,
      63,    64,    65,    66,    67,    95,    68,     0,     0,     0,
      96,     0,    69,     0,    70,     0,     0,    97,     0,     0,
      71,    98,     0,     0,     0,    99,   100,   101,   102,     0,
       0,     0,    72,    73,     0,     0,     0,     0,   103,   104,
      75,   222,     0,     0,   105,     0,     0,    76,     0,     0,
       0,     0,     0,    77,    78,     0,     0,     0,     0,    79,
       0,    80,     0,    81,     0,    82,    83,     0,    84,     0,
       0,    85,     0,    86,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,    88,     0,
      89,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,     0,     0,     0,     0,    94,     0,     0,    62,    63,
      64,    65,    66,    67,    95,    68,     0,     0,     0,    96,
       0,    69,     0,    70,     0,     0,    97,     0,     0,    71,
      98,     0,     0,     0,    99,   100,   101,   102,     0,     0,
       0,    72,    73,     0,     0,     0,     0,   103,   104,    75,
     397,     0,     0,   105,     0,     0,    76,     0,     0,     0,
       0,     0,    77,    78,     0,     0,     0,     0,    79,     0,
      80,     0,    81,     0,    82,    83,     0,    84,     0,     0,
      85,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
       0,     0,     0,     0,    94,     0,     0,    62,    63,    64,
      65,    66,    67,    95,    68,     0,     0,     0,    96,     0,
      69,     0,    70,     0,     0,    97,     0,     0,    71,    98,
       0,     0,     0,    99,   100,   101,   102,     0,     0,     0,
      72,    73,     0,     0,     0,     0,   103,   104,    75,   504,
       0,     0,   105,     0,     0,    76,     0,     0,     0,     0,
       0,    77,    78,     0,     0,     0,     0,    79,     0,    80,
       0,    81,     0,    82,    83,     0,    84,     0,     0,    85,
       0,    86,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,    88,     0,    89,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,     0,
       0,     0,     0,    94,     0,     0,    62,    63,    64,    65,
      66,    67,    95,    68,     0,     0,     0,    96,     0,    69,
       0,    70,     0,     0,    97,     0,     0,    71,    98,     0,
       0,     0,    99,   100,   101,   102,     0,     0,     0,    72,
      73,     0,     0,     0,     0,   103,   104,    75,   589,     0,
       0,   105,     0,     0,    76,     0,     0,     0,     0,     0,
      77,    78,     0,     0,     0,     0,    79,     0,    80,     0,
      81,     0,    82,    83,     0,    84,     0,     0,    85,     0,
      86,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,     0,     0,
       0,     0,    94,     0,     0,    62,    63,    64,    65,    66,
      67,    95,    68,     0,     0,     0,    96,     0,    69,     0,
      70,     0,     0,    97,     0,     0,    71,    98,     0,     0,
       0,    99,   100,   101,   102,     0,     0,     0,    72,    73,
       0,     0,     0,     0,   103,   104,    75,   659,     0,     0,
     105,     0,     0,    76,     0,     0,     0,     0,     0,    77,
      78,     0,     0,     0,     0,    79,     0,    80,     0,    81,
       0,    82,    83,     0,    84,     0,     0,    85,     0,    86,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,    88,     0,    89,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,     0,     0,     0,
       0,    94,     0,     0,    62,    63,    64,    65,    66,    67,
      95,    68,     0,     0,     0,    96,     0,    69,     0,    70,
       0,     0,    97,     0,     0,    71,    98,     0,     0,     0,
      99,   100,   101,   102,     0,     0,     0,    72,    73,     0,
       0,     0,     0,   103,   104,    75,   737,     0,     0,   105,
       0,     0,    76,     0,     0,     0,     0,     0,    77,    78,
       0,     0,     0,     0,    79,     0,    80,     0,    81,     0,
      82,    83,     0,    84,     0,     0,    85,     0,    86,     0,
       0,     0,     0,     0,     0,     0,    87,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,     0,     0,     0,     0,
      94,     0,     0,    62,    63,    64,    65,    66,    67,    95,
      68,     0,     0,     0,    96,     0,    69,     0,    70,     0,
       0,    97,     0,     0,    71,    98,     0,     0,     0,    99,
     100,   101,   102,     0,     0,     0,    72,    73,     0,     0,
       0,     0,   103,   104,    75,     0,     0,     0,   105,     0,
       0,    76,     0,     0,     0,     0,     0,    77,    78,     0,
       0,     0,     0,    79,     0,    80,     0,    81,     0,    82,
      83,     0,    84,     0,     0,    85,     0,    86,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,    88,     0,    89,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,     0,     0,     0,     0,    94,
       0,     0,    62,    63,    64,    65,    66,    67,    95,    68,
       0,     0,     0,    96,     0,    69,     0,    70,     0,     0,
      97,     0,     0,     0,    98,     0,     0,     0,    99,   100,
     101,   102,     0,     0,     0,    72,    73,     0,     0,     0,
       0,   103,   104,    75,     0,     0,     0,   105,     0,     0,
      76,     0,     0,     0,     0,     0,    77,    78,     0,     0,
       0,     0,    79,     0,    80,     0,    81,     0,    82,    83,
       0,    84,     0,     0,    85,     0,    86,     0,     0,     0,
       0,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,    88,     0,    89,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,     0,     0,     0,     0,    94,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    96,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,    98,     0,     0,     0,    99,   100,   101,
     102,     0,     0,     0,     0,     0,   185,     0,     0,     0,
     103,   104,     0,     0,     0,     0,   105,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   185,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   185,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   183,   184,     0,     0,     0,     0,     0,     0,   185,
       0,     0,     0,     0,     0,   217,     0,     0,     0,     0,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,     0,     0,     0,   185,     0,     0,
       0,     0,     0,   218,     0,     0,     0,   200,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,     0,   336,     0,     0,     0,     0,     0,     0,
       0,     0,   185,     0,     0,   334,     0,     0,     0,     0,
       0,     0,   407,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   328,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   185,     0,     0,     0,     0,     0,     0,     0,
       0,   338,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   342,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   185,     0,     0,     0,     0,     0,     0,     0,
       0,   343,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   345,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   185,     0,     0,     0,     0,     0,     0,     0,
       0,   360,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   362,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   185,     0,     0,     0,     0,     0,     0,     0,
       0,   364,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   366,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   185,     0,     0,     0,     0,     0,     0,     0,
       0,   368,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   392,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   185,     0,     0,     0,     0,     0,     0,     0,
       0,   406,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   453,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   185,     0,     0,     0,     0,     0,     0,     0,
       0,   455,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   457,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   185,     0,     0,     0,     0,     0,     0,     0,
       0,   468,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   185,     0,     0,     0,     0,     0,     0,     0,
       0,   472,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   474,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   185,     0,     0,     0,     0,     0,     0,     0,
       0,   476,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   185,     0,     0,
       0,     0,     0,     0,     0,     0,   554,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199
};

static const yytype_int16 yycheck[] =
{
       4,    27,    44,     3,    46,   424,     0,     1,   142,    34,
      35,    36,   256,     3,    56,   166,     3,    21,    60,   447,
       3,   449,   156,   534,    18,     3,     3,     3,     3,    71,
     124,     5,     5,   209,     3,    77,    59,    60,     5,    33,
     370,    44,    44,     3,    89,   221,    44,    11,    38,     5,
     584,     3,    44,    44,     5,    38,     5,    44,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    12,    13,    14,    15,    16,    17,    18,     3,
      49,    75,    33,    44,    44,    44,    12,    13,    14,    15,
      16,    17,    18,    87,    68,    68,   230,    18,    44,     0,
      74,    68,     5,    12,    13,    14,    15,    16,    17,    18,
     152,    45,    68,   155,    38,   157,   158,    68,   652,    68,
     162,   163,   164,   165,    72,    73,   126,   169,   170,   171,
     172,   173,    45,   175,    44,   129,    83,    45,   132,   133,
     134,    45,   133,   319,   186,   187,   133,   189,   190,   191,
     192,   193,   194,   195,   196,    44,   486,   668,   161,   161,
     671,   203,   245,   161,   155,    68,   208,    45,   155,   161,
     304,   161,   146,   146,   216,   258,   259,   271,   161,   146,
      44,   185,    44,   161,   161,   161,   161,   698,   114,   323,
     146,    44,   234,   235,   613,   146,   160,   146,    44,    11,
     161,   243,   161,    44,   198,   114,   248,    45,   250,   155,
     156,   132,   133,   134,   348,   459,    44,     3,     4,   261,
     160,   263,   148,   265,     3,   267,   160,   269,   176,   177,
     178,   179,   180,   181,   182,    99,    45,    99,   161,   148,
     150,   283,   572,   146,     3,   328,   757,   160,    60,   197,
     481,   581,   160,     3,   337,   338,   160,   159,    99,    38,
     343,   492,   345,    19,    20,    21,   155,   156,   402,   135,
      61,    99,    44,    64,   124,    45,   270,   360,    48,   362,
       3,   364,     3,   366,   712,   368,   150,   133,   150,   331,
      49,   285,   145,    28,     3,    45,   290,   147,   292,    49,
     294,   487,   296,   489,   298,   347,   300,     3,   459,   150,
     304,    45,   556,   122,    56,    38,    51,    38,   160,   649,
     129,   112,   150,   406,   155,   156,    11,    19,    20,    21,
     334,    88,   336,     3,     3,   105,   284,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   582,     6,    45,     8,     9,    52,    53,    54,    55,
     116,   154,    44,    59,    60,   407,    62,   501,    38,    38,
     453,     3,   455,    49,   457,    71,   370,    73,    74,    66,
      46,    44,   116,    45,    80,   468,    87,   470,   122,   472,
      86,   474,    87,   476,    76,   129,    88,    87,    44,    95,
      96,    97,     3,     4,     5,     6,     7,     8,    87,    10,
     106,   107,   108,    79,   110,    16,    87,    18,    44,   120,
      54,    55,    87,    24,   116,   120,   155,   156,    87,   125,
     120,   127,    32,    33,    34,    36,    37,    38,    44,   387,
     136,   120,    44,    44,    87,    46,    87,   143,   144,   120,
      51,   133,    87,   149,    87,   120,    57,    58,    72,   593,
     122,   120,    63,    44,    65,   147,    67,   129,    69,    70,
      44,    72,     0,   155,    75,   160,    77,   120,    79,   120,
      94,    44,    44,   574,    85,   120,   577,   120,   579,   103,
     104,    92,   486,    94,    72,    44,   490,    45,    44,   160,
     101,   102,   103,   104,    44,    33,    44,    44,   109,     6,
      44,     8,     9,    33,    34,    35,    94,   118,   132,    44,
     654,    44,   123,   657,   161,   103,   104,    24,    44,   130,
      44,    44,   536,   134,    44,    44,    44,   138,   139,   140,
     141,   160,   160,   157,   586,    45,   115,   495,   160,    56,
     151,   152,    13,    14,   132,    16,   157,    18,   113,    45,
     585,    45,     3,     4,     5,     6,     7,     8,   116,    10,
     153,   119,    45,     5,   122,    16,    45,    18,   572,   157,
      45,   129,    45,    24,    89,    44,    61,   581,   161,    64,
      38,    39,    40,    41,    42,    36,    37,    31,    32,    33,
      34,    35,     3,    44,   646,    46,    47,    44,    21,    45,
      51,    32,    33,    34,    35,    90,    57,    58,    45,    81,
      45,   647,    63,    98,    65,   100,    67,   158,    69,    70,
     634,    72,   163,   164,    75,    45,    77,   112,   169,   170,
     171,   172,   173,    45,    85,   190,   191,   192,   193,   194,
     118,    92,    56,    94,    42,   649,     3,   161,     3,     3,
     101,   102,   103,   104,    82,   120,   120,    45,   109,    91,
     128,     3,     4,     5,     6,     7,     8,   118,    10,    45,
       3,    45,   123,    45,    16,     3,    18,   161,    99,   130,
      44,   733,    24,   134,    44,    44,   137,   138,   139,   140,
     141,    44,   121,    44,    36,    37,    44,    44,   734,    44,
     151,   152,    44,    44,    11,    45,   157,    45,     3,    51,
     128,    15,   117,    15,    93,    57,    58,    56,    45,   111,
     161,    63,     5,    65,     5,    67,   111,    69,    70,    44,
      72,     5,    44,    75,   111,    77,    36,    37,    38,    39,
      40,    41,    42,    85,     5,     5,     5,     5,   762,   145,
      92,    44,    94,     5,    44,    23,     5,     5,     5,   101,
     102,   103,   104,   143,     5,   111,    44,   109,    36,    37,
      38,    39,    40,    41,    42,   143,   118,   143,   143,   135,
      45,   123,    15,    23,    23,    23,    23,    23,   130,    45,
      44,   133,   134,   111,    45,    45,   138,   139,   140,   141,
      44,     3,     4,     5,     6,     7,     8,     5,    10,   151,
     152,    23,    44,   155,    16,   157,    18,    45,     5,    45,
      45,     5,    24,     5,    36,    37,    38,    39,    40,    41,
      42,     5,     5,    44,    36,    37,    44,     5,    45,    44,
       5,    45,    44,     5,    46,    45,    45,   158,   158,    51,
      45,    45,   158,   158,    45,    57,    58,    45,     5,    45,
      45,    63,     5,    65,    44,    67,    45,    69,    70,    45,
      72,     5,    44,    75,    45,    77,     5,    79,    45,     5,
       5,    45,    45,    85,    87,   131,   128,    45,    45,    45,
      92,   120,    94,   128,   128,    45,    45,   128,   128,   101,
     102,   103,   104,     5,    45,    45,    45,   109,    45,    45,
       3,     4,     5,     6,     7,     8,   118,    10,   145,   143,
     143,   123,   143,    16,   143,    18,    45,    45,   130,    33,
      40,    24,   134,   208,   216,    59,   138,   139,   140,   141,
     158,   158,   158,    36,    37,    38,   569,   490,   158,   151,
     152,    44,   488,   175,   370,   157,   285,   237,    51,   255,
     680,    -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,
      63,    -1,    65,    -1,    67,    -1,    69,    70,    -1,    72,
     200,    -1,    75,    -1,    77,    12,    13,    14,    15,    16,
      17,    18,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
     103,   104,    -1,    -1,    -1,    -1,   109,    -1,    -1,     3,
       4,     5,     6,     7,     8,   118,    10,    -1,    -1,    -1,
     123,    -1,    16,    -1,    18,    -1,    -1,   130,    -1,    -1,
      24,   134,    -1,    -1,    -1,   138,   139,   140,   141,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,   151,   152,
      44,    45,    -1,    -1,   157,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    63,
      -1,    65,    -1,    67,    -1,    69,    70,    -1,    72,    -1,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,   109,    -1,    -1,     3,     4,
       5,     6,     7,     8,   118,    10,    -1,    -1,    -1,   123,
      -1,    16,    -1,    18,    -1,    -1,   130,    -1,    -1,    24,
     134,    -1,    -1,    -1,   138,   139,   140,   141,    -1,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,   151,   152,    44,
      45,    -1,    -1,   157,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,
      65,    -1,    67,    -1,    69,    70,    -1,    72,    -1,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
      -1,    -1,    -1,    -1,   109,    -1,    -1,     3,     4,     5,
       6,     7,     8,   118,    10,    -1,    -1,    -1,   123,    -1,
      16,    -1,    18,    -1,    -1,   130,    -1,    -1,    24,   134,
      -1,    -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,   151,   152,    44,    45,
      -1,    -1,   157,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,
      -1,    67,    -1,    69,    70,    -1,    72,    -1,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,    94,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,    -1,
      -1,    -1,    -1,   109,    -1,    -1,     3,     4,     5,     6,
       7,     8,   118,    10,    -1,    -1,    -1,   123,    -1,    16,
      -1,    18,    -1,    -1,   130,    -1,    -1,    24,   134,    -1,
      -1,    -1,   138,   139,   140,   141,    -1,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,   151,   152,    44,    45,    -1,
      -1,   157,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      67,    -1,    69,    70,    -1,    72,    -1,    -1,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,   103,   104,    -1,    -1,
      -1,    -1,   109,    -1,    -1,     3,     4,     5,     6,     7,
       8,   118,    10,    -1,    -1,    -1,   123,    -1,    16,    -1,
      18,    -1,    -1,   130,    -1,    -1,    24,   134,    -1,    -1,
      -1,   138,   139,   140,   141,    -1,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,   151,   152,    44,    45,    -1,    -1,
     157,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,    67,
      -1,    69,    70,    -1,    72,    -1,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,    -1,    -1,    -1,
      -1,   109,    -1,    -1,     3,     4,     5,     6,     7,     8,
     118,    10,    -1,    -1,    -1,   123,    -1,    16,    -1,    18,
      -1,    -1,   130,    -1,    -1,    24,   134,    -1,    -1,    -1,
     138,   139,   140,   141,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,   151,   152,    44,    45,    -1,    -1,   157,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,    63,    -1,    65,    -1,    67,    -1,
      69,    70,    -1,    72,    -1,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,   104,    -1,    -1,    -1,    -1,
     109,    -1,    -1,     3,     4,     5,     6,     7,     8,   118,
      10,    -1,    -1,    -1,   123,    -1,    16,    -1,    18,    -1,
      -1,   130,    -1,    -1,    24,   134,    -1,    -1,    -1,   138,
     139,   140,   141,    -1,    -1,    -1,    36,    37,    -1,    -1,
      -1,    -1,   151,   152,    44,    -1,    -1,    -1,   157,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,    63,    -1,    65,    -1,    67,    -1,    69,
      70,    -1,    72,    -1,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,    -1,    -1,    -1,    -1,   109,
      -1,    -1,     3,     4,     5,     6,     7,     8,   118,    10,
      -1,    -1,    -1,   123,    -1,    16,    -1,    18,    -1,    -1,
     130,    -1,    -1,    -1,   134,    -1,    -1,    -1,   138,   139,
     140,   141,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,   151,   152,    44,    -1,    -1,    -1,   157,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    63,    -1,    65,    -1,    67,    -1,    69,    70,
      -1,    72,    -1,    -1,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,    -1,    -1,    -1,    -1,   109,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   123,    -1,    -1,    -1,    -1,    -1,    -1,   130,
      -1,    -1,    -1,   134,    -1,    -1,    -1,   138,   139,   140,
     141,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
     151,   152,    -1,    -1,    -1,    -1,   157,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    49,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    44,    76,   133,   147,   155,   163,   164,   165,   166,
     167,   168,   169,   172,   173,   174,   175,   176,   190,   173,
     174,    89,    46,    79,   196,     3,   205,     3,   126,   191,
     192,     0,    83,   159,    19,    20,    21,   116,   184,   185,
     175,    45,    45,   205,   179,   161,   135,    44,   193,   194,
     191,   160,   164,   196,   196,   196,    56,    88,   180,   184,
     154,   181,     3,     4,     5,     6,     7,     8,    10,    16,
      18,    24,    36,    37,    38,    44,    51,    57,    58,    63,
      65,    67,    69,    70,    72,    75,    77,    85,    92,    94,
     101,   102,   103,   104,   109,   118,   123,   130,   134,   138,
     139,   140,   141,   151,   152,   157,   173,   197,   198,   211,
     212,   213,   214,   215,   217,   222,   223,   224,   225,   226,
     227,   240,     3,   161,   170,   171,   215,     3,   195,    49,
     191,    66,   177,   177,   177,   186,   187,   215,   124,   147,
     180,   215,    44,   161,    44,    44,   215,   214,   214,   173,
     210,   215,    44,   215,   218,    44,    44,    44,    44,    44,
      44,   173,    44,    44,    44,    44,    44,    44,    44,    44,
      44,    44,    44,    44,   178,   160,    36,    37,    38,    39,
      40,    41,    42,     3,     4,    11,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      49,   255,   256,    44,   161,     3,   161,   181,   160,   160,
      45,   173,    56,   175,   175,   175,   160,    50,    78,   188,
     115,   113,    45,   210,     3,    38,   161,    45,    45,    45,
     160,    46,    79,   215,   252,   153,   219,   220,   215,   210,
     215,    38,   215,   252,     5,    45,   215,   215,   252,   215,
     252,   215,    45,   119,   122,   129,   185,   228,    45,    45,
     215,   252,   215,   252,   215,   252,   215,   252,   215,   252,
      89,   182,   197,   214,   214,   214,   214,   214,   214,   214,
     205,   215,   215,    32,    33,    34,    46,    47,   137,   215,
     253,   215,   253,   215,   253,   215,   253,   215,   253,   215,
     253,   215,   215,   214,    44,   173,   216,     6,     8,     9,
      24,   255,   215,     3,   161,   161,     3,   170,   195,    44,
     186,   195,    45,    44,   161,     3,   161,   210,    45,   215,
     215,    81,   221,   219,    49,    45,   148,    45,    45,   215,
      45,   227,    45,    45,   215,    45,   215,   160,    56,     5,
      33,    68,   146,   229,   229,    45,   228,    45,   227,   227,
      45,   215,    45,   215,    45,   215,    45,   215,    45,   215,
      44,   173,   199,   200,   201,   205,   206,   181,   215,   214,
     216,   173,   173,   173,   173,   173,   173,    23,   210,     6,
       8,     9,    45,   161,     3,     3,   195,    45,   210,     3,
      38,   161,    44,   161,     3,   227,    45,   142,   215,    82,
      52,    53,    54,    55,    59,    60,    62,    71,    73,    74,
      80,    86,    95,    96,    97,   106,   107,   108,   110,   125,
     127,   136,   143,   144,   149,   205,   230,   231,   232,   233,
     234,   235,   241,   242,   243,   244,   245,   246,   247,   248,
     205,   227,   227,    45,   227,    45,   227,    45,   215,   210,
     120,     5,    68,   146,   128,   120,    45,   227,    45,   227,
      45,   227,    45,   227,    45,   227,    45,   173,   200,   206,
       3,    49,   254,    12,    13,    14,    15,    16,    17,    18,
     160,   207,   202,    91,   183,    23,   214,    45,     3,    45,
      45,    44,   161,     3,    45,   210,     3,    38,   161,   227,
     215,    99,    44,    44,    99,   150,    44,    99,   150,    44,
      44,    44,   121,    44,   132,   236,   237,   239,   240,    59,
      60,    44,    99,   150,    44,    44,    44,    44,   155,   156,
      44,   155,   156,    44,    45,    48,   105,    60,   256,   256,
      45,   227,   227,   227,    45,    45,   185,   228,    87,   120,
     128,    87,   120,   227,   227,   227,   227,   227,    45,   254,
     194,   204,    15,   117,   209,   208,   200,   209,   207,   209,
     199,    15,    49,   203,   254,    56,    93,   189,   214,    45,
     210,     3,    38,    44,   161,    45,   161,     3,    38,   111,
       5,     5,   111,    44,     5,   111,    44,     5,   249,     5,
       5,     5,    44,   145,    44,    44,   150,    44,    99,   150,
       5,   111,    44,   249,     5,   205,     5,   143,   143,     5,
     143,   143,     5,    44,   135,    45,   228,    45,    23,    23,
      23,    23,    23,   204,   200,   208,   114,   148,   208,    15,
     208,   200,   254,   203,   196,   215,    45,    44,   161,    45,
     210,     3,    38,     3,    38,    44,    45,    45,    44,     5,
      45,    44,     5,    61,    64,    90,    98,   100,   112,   250,
     251,    45,    45,   160,    45,   160,    45,     5,   132,   238,
     240,     5,     5,    44,     5,   111,    44,    45,    44,     5,
      45,    45,   160,    45,    45,   158,   158,    45,   158,   158,
      45,     5,   205,    45,     5,    68,   146,     5,    68,   146,
       5,    68,   146,     5,    68,   146,     5,    68,    74,   146,
     215,   194,   200,   114,   148,   203,   210,    45,   210,     3,
      38,    45,     5,   249,    45,   249,    45,   250,     5,     5,
      45,   160,    44,    45,    45,     5,    45,    44,     5,   249,
      45,     5,   131,   155,   156,   155,   156,    45,   256,    87,
     120,   128,    87,   120,    87,   120,   128,    87,   120,    87,
     120,   128,    87,   120,    87,   120,   128,    87,   120,   120,
     128,    87,    87,   120,   215,   194,    45,    45,    45,    45,
      45,    45,     5,     5,    45,   249,    45,    45,    45,   205,
     143,   143,   143,   143,    45,    45,    45,   158,   158,   158,
     158
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
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
     205,   205,   206,   206,   206,   206,   206,   206,   206,   207,
     207,   207,   207,   208,   209,   209,   210,   210,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   212,   212,   212,   212,   212,
     212,   212,   213,   213,   213,   213,   213,   213,   213,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     216,   216,   217,   218,   218,   219,   219,   220,   221,   221,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   224,   224,   224,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   226,
     227,   227,   227,   227,   227,   227,   227,   227,   228,   228,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   230,   230,
     230,   230,   231,   232,   233,   233,   233,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   235,   236,
     236,   237,   237,   238,   238,   238,   239,   239,   239,   239,
     239,   240,   240,   240,   240,   240,   241,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     243,   243,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   245,   245,   245,   245,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   247,   247,   247,   247,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   249,   249,   249,   249,   250,   250,   250,   251,   251,
     251,   252,   252,   253,   253,   253,   254,   255,   255,   256
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
       6,     5,     3,     6,     5,     6,     5,     4,     5,     3,
       3,     3,     2,     0,     0,     1,     1,     3,     1,     3,
       3,     5,     5,     7,     7,     6,     6,     9,     9,     8,
       8,     8,     8,     7,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     2,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     2,     3,     4,     3,     4,     3,     4,     3,     4,
       3,     4,     3,     4,     3,     4,     3,     3,     2,     3,
       4,     3,     4,     3,     4,     5,     6,     3,     4,     3,
       1,     3,     5,     0,     1,     1,     2,     4,     0,     2,
       1,     1,     1,     1,     6,     6,     4,     1,     4,     1,
       6,     1,     1,     5,     4,     6,     5,     5,     4,     6,
       5,     5,     4,     6,     5,     5,     4,     6,     5,     5,
       4,     6,     5,     5,     4,     6,     5,     5,     4,     6,
       5,     5,     4,     6,     5,     5,     4,     6,     5,     5,
       4,     4,     4,     4,     4,     9,     8,     7,     6,     5,
       3,     3,     3,    10,     9,     8,     7,     6,     4,     4,
       8,     5,     7,     7,     6,     4,     4,     3,     2,     2,
       2,     2,     2,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     1,     1,
       1,     1,     1,     6,     5,     2,     2,     5,     4,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     4,     1,     1,     4,     1,     4,     1,     6,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     7,
       4,     4,     4,     1,     7,     7,     4,     4,     4,     1,
       1,     1,     6,     4,     1,     6,     4,     1,     6,     4,
       1,     1,     1,     1,     1,     4,     1,     1,     2,     4,
       1,     4,     1,     5,     5,     4,     6,     3,     6,     3,
       4,     1,     6,     3,     4,     1,     5,     2,     5,     2,
       4,     1,     6,     6,     5,     7,     4,     6,     3,     4,
       1,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2
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
#if SQL2003_DEBUG

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
# if defined SQL2003_LTYPE_IS_TRIVIAL && SQL2003_LTYPE_IS_TRIVIAL

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
#else /* !SQL2003_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !SQL2003_DEBUG */


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
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2231 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2237 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2243 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2249 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2255 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2261 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2267 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2273 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 163: /* sql_stmt  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2279 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 164: /* stmt_list  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2285 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 165: /* stmt  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2291 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 166: /* dql_stmt  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2297 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 167: /* dml_stmt  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2303 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 168: /* delete_stmt  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2309 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 169: /* update_stmt  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2315 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 170: /* update_elem_list  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2321 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 171: /* update_elem  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2327 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 172: /* select_stmt  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2333 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 173: /* select_with_parens  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2339 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 174: /* select_no_parens  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2345 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 175: /* select_clause  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2351 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 176: /* simple_select  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2357 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 177: /* opt_corresponding_spec  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2363 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 178: /* opt_into_clause  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2369 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* opt_top  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2375 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* opt_for_clause  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2381 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* opt_where  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2387 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* opt_from_clause  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2393 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_groupby  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2399 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* opt_order_by  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2405 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* order_by  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2411 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* sort_list  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2417 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* sort_key  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2423 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_asc_desc  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2429 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_having  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2435 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* with_clause  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2441 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* with_list  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2447 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* common_table_expr  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2453 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_derived_column_list  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2459 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* simple_ident_list_with_parens  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2465 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* simple_ident_list  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2471 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_distinct  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2477 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* select_expr_list  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2483 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* projection  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2489 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* from_list  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2495 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* table_factor  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2501 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* table_factor_non_join  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2507 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_for_system_time  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2513 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_with_table_hint  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2519 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_simple_ident_list_with_parens  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2525 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* relation_factor  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2531 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* joined_table  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2537 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* join_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2543 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* expr_list  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2549 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* column_ref  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2555 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* expr_const  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2561 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* simple_expr  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2567 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* arith_expr  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2573 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* expr  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2579 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* in_expr  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2585 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* case_expr  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2591 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* case_arg  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2597 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* when_clause_list  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2603 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* when_clause  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2609 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* case_default  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2615 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* func_expr  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2621 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* aggregate_windowed_function  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2627 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* ranking_windowed_function  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2633 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* scalar_function  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2639 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* function_call_keyword  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2645 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* over_clause  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2651 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* row_or_range_clause  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2657 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* window_frame_extent  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2663 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* data_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2669 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* user_defined_type_name  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2675 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* reference_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2681 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* collection_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2687 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* predefined_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2693 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* interval_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2699 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* interval_qualifier  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2705 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* start_field  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2711 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* end_field  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2717 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* single_datetime_field  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2723 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* non_second_primary_datetime_field  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2729 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* boolean_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2735 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* datetime_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2741 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* numeric_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2747 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* exact_numeric_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2753 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* approximate_numeric_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2759 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* character_string_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2765 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* binary_large_object_string_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* national_character_string_type  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2777 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* large_object_length  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2783 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* char_length_units  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2789 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* multiplier  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* distinct_or_all  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2801 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* relation_name  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2807 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* column_label  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2813 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 256: /* collate_clause  */
#line 93 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
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
# if defined SQL2003_LTYPE_IS_TRIVIAL && SQL2003_LTYPE_IS_TRIVIAL
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
#line 63 "./sqlparser_sql2003.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 2936 "sqlparser_sql2003_bison.cpp" /* yacc.c:1429  */
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
#line 215 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 3130 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 226 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 3139 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 233 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3145 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 250 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3162 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 267 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3180 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 285 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3189 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 293 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3204 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 312 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3213 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 317 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3222 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 325 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[0].node));
}
#line 3232 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 331 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-3].node));
}
#line 3243 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 347 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3272 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 372 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3307 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 403 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3342 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 434 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3377 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 467 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3383 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 469 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CORRESPONDING");
}
#line 3391 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 473 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CORRESPONDING BY ("+(yyvsp[-1].node)->text()+")");
}
#line 3399 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 479 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3405 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 484 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3411 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 488 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3417 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 490 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FOR UPDATE");
}
#line 3425 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 494 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FOR UPDATE OF "+(yyvsp[0].node)->text());
}
#line 3433 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 498 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FOR READ ONLY");
}
#line 3441 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 504 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3447 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 506 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 3456 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 515 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 3465 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 528 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3471 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 530 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 3480 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 537 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3486 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 543 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 3495 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 552 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3504 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 560 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 3513 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 568 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 3521 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 572 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 3529 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 576 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 3537 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 582 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3543 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 584 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 3552 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 594 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 3561 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 599 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 3570 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 608 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3579 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 617 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 3588 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 624 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3594 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 630 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3603 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 639 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3612 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 646 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3618 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 648 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 3626 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 652 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 3634 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 660 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3643 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 668 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3652 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 673 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3664 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 681 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3676 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 689 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3686 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 699 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3695 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 716 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 3704 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 721 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 3713 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 726 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 3722 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 731 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 3731 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 736 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 3740 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 744 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3746 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 749 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3752 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 753 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3758 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 760 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3767 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 765 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 3776 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 770 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 3785 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 775 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 3794 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 780 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3803 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 785 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3812 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 790 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3821 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 795 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 3830 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 803 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3839 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 808 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3848 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 813 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3858 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 819 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 3867 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 824 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 3877 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 830 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 3887 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 836 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + (yyvsp[-2].node)->text());
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 3897 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 845 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3912 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 856 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3927 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 867 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3942 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 878 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 3950 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 885 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3956 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 889 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3962 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 890 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 3968 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 897 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3977 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 906 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 3987 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 912 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 3997 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 918 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4008 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 925 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4018 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 931 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4029 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 938 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4039 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 944 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4050 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 951 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4060 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 957 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4071 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 964 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4081 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 970 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4092 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 977 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4102 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 983 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4113 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 990 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4123 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 996 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4134 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1003 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4144 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1009 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4155 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1024 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 4161 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1031 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4171 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1040 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 4180 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1049 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 4189 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1054 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 4198 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1059 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 4207 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1064 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 4216 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1069 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 4225 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1074 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 4234 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1079 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 4243 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1084 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 4252 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1089 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 4261 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1099 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4270 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1104 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 4279 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1109 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4308 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1134 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 4317 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1139 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4346 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1164 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4355 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1169 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4384 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1194 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 4393 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1199 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4422 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1224 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 4431 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1229 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4460 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1254 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 4469 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1259 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4498 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1284 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 4507 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1289 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 4516 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1294 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 4525 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1299 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 4534 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1304 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 4543 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1309 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4552 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1314 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4561 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1319 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4570 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1324 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4579 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1329 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4588 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1334 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4597 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1339 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 4606 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1344 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 4615 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1349 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 4624 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1354 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 4633 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1359 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 4642 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1368 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4651 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1377 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 4660 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1384 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4666 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1391 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4675 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1399 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 4684 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1406 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4690 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1408 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 4699 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1421 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 4710 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1428 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 4723 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1437 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4734 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1444 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4745 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1451 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4756 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1458 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4767 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1465 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4780 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1474 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4791 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1481 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4802 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1492 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4813 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1499 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4824 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1506 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4835 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1513 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4846 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1520 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4857 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1527 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4868 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1534 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4879 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1541 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4890 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1548 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4901 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1555 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4912 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1562 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4923 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1569 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4934 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1576 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4945 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1583 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4956 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1590 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4967 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1597 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 4978 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1604 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4989 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1611 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5000 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1618 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5011 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1625 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5022 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1632 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5033 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1639 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5044 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1646 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5055 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1653 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5066 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1660 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5077 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1667 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5088 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1674 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5099 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1681 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5110 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1688 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5121 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1695 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5132 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1702 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5143 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1709 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5154 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1716 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5165 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1723 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5176 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1730 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5187 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1737 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5198 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1744 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5210 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1752 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5222 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1760 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5233 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1770 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5244 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1777 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5255 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1784 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5266 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1794 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5278 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1802 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1810 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1818 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5314 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1826 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5326 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1834 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5336 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1840 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5347 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1847 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5358 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1854 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), (yyvsp[-9].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5370 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1862 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5382 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1870 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5394 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1878 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5406 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1886 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5418 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1894 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5428 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1904 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5438 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1913 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5447 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1918 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5456 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1923 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5465 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1928 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5474 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1933 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5483 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1938 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5492 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1943 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5501 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1948 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5510 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1956 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, E_ROWS_CLAUSE_PROPERTY_CNT, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5520 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1962 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, E_RANGE_CLAUSE_PROPERTY_CNT, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5530 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1971 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 5536 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1973 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 5542 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1975 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 5548 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1977 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 5554 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1979 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5560 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1981 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 5566 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1983 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 5572 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1985 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5578 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1987 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 5584 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1989 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5590 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1991 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5596 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1993 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5602 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1995 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5608 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1997 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 5614 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1999 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5620 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 2001 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 5626 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 2003 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 5632 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 2005 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5638 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 2007 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 5644 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 2009 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5650 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 2011 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 5656 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 2013 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 5662 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 2015 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5668 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 2017 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 5674 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 2019 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5680 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 2021 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5686 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 2023 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5692 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 2025 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5698 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 2037 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5707 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 2045 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5716 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 2053 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 5726 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 2059 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 5735 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 2064 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 5744 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 2072 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5753 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 2077 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5762 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 2082 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 2088 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5780 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 2102 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5789 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 2110 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 5798 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 2119 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5807 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 2129 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5816 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 2134 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5824 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 2141 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5833 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 2147 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5842 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 2152 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5851 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 2157 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5859 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 2164 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 5867 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 2168 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 5875 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 2172 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 5883 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 2176 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 5891 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 2180 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 5899 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 2187 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 5907 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 2194 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 5915 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 2198 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5924 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 2203 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5933 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 2208 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5942 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 2213 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 5950 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 2217 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 5958 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 2221 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME");
}
#line 5966 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 2225 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5975 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 2230 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5984 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 2235 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5993 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 2240 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 6001 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2244 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 6009 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2248 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP");
}
#line 6017 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2260 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6026 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2265 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6035 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2270 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 6043 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2274 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6052 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2279 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6061 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2284 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 6069 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2288 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6078 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2293 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6087 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2298 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6095 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2302 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6103 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2306 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6111 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2310 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6119 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2314 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6127 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2321 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6136 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2326 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6144 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2330 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6152 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2334 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6160 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2341 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6169 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2346 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6177 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2350 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6186 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2355 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6194 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2359 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6203 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2364 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6212 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2369 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6221 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2374 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6230 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2379 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6238 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2383 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6247 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2388 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6255 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2392 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6264 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2397 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6272 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2404 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6281 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2409 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6289 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2413 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6298 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2418 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6306 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2425 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6315 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2430 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6323 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2434 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6332 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2439 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6340 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2443 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6349 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2448 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6357 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2452 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6366 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2457 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6375 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2462 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6384 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2467 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6393 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2472 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6401 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2476 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6410 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2481 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6418 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2485 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6427 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2490 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6435 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2497 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6444 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2502 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6453 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2507 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6462 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2512 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6471 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2520 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6479 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2524 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6487 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2528 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6495 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2535 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6503 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2539 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 6511 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2543 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 6519 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2550 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6527 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2554 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6535 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2560 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 6541 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2561 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 6547 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2562 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 6553 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2576 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6562 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;


#line 6566 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 2582 "./sqlparser_sql2003.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
