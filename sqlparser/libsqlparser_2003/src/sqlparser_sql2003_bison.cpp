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
#include "serialize_format.h"

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


#line 110 "sqlparser_sql2003_bison.cpp" /* yacc.c:339  */

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
#line 42 "./sqlparser_sql2003.y" /* yacc.c:355  */

// %code requires block

#include "node.h"

#line 154 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */

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
    SQL2003_UMINUS = 266,
    SQL2003_ALL = 267,
    SQL2003_AND = 268,
    SQL2003_ANY = 269,
    SQL2003_ARRAY = 270,
    SQL2003_AS = 271,
    SQL2003_ASC = 272,
    SQL2003_AVG = 273,
    SQL2003_BETWEEN = 274,
    SQL2003_BIGINT = 275,
    SQL2003_BINARY = 276,
    SQL2003_BLOB = 277,
    SQL2003_BOOLEAN = 278,
    SQL2003_BY = 279,
    SQL2003_CASE = 280,
    SQL2003_CAST = 281,
    SQL2003_CHAR = 282,
    SQL2003_CHARACTER = 283,
    SQL2003_CHARACTERS = 284,
    SQL2003_CLOB = 285,
    SQL2003_CNNOP = 286,
    SQL2003_COALESCE = 287,
    SQL2003_CODE_UNITS = 288,
    SQL2003_COLLATE = 289,
    SQL2003_COMP_EQ = 290,
    SQL2003_COMP_GE = 291,
    SQL2003_COMP_GT = 292,
    SQL2003_COMP_LE = 293,
    SQL2003_COMP_LT = 294,
    SQL2003_COMP_NE = 295,
    SQL2003_CONVERT = 296,
    SQL2003_CORRESPONDING = 297,
    SQL2003_COUNT = 298,
    SQL2003_CROSS = 299,
    SQL2003_CUME_DIST = 300,
    SQL2003_CURRENT = 301,
    SQL2003_CURRENT_TIMESTAMP = 302,
    SQL2003_CURRENT_USER = 303,
    SQL2003_DATE = 304,
    SQL2003_DAY = 305,
    SQL2003_DEC = 306,
    SQL2003_DECIMAL = 307,
    SQL2003_DEFAULT = 308,
    SQL2003_DELETE = 309,
    SQL2003_DENSE_RANK = 310,
    SQL2003_DESC = 311,
    SQL2003_DISTINCT = 312,
    SQL2003_DOUBLE = 313,
    SQL2003_ELSE = 314,
    SQL2003_END = 315,
    SQL2003_END_P = 316,
    SQL2003_ESCAPE = 317,
    SQL2003_ERROR = 318,
    SQL2003_EXCEPT = 319,
    SQL2003_EXCLUDE = 320,
    SQL2003_EXISTS = 321,
    SQL2003_FLOAT = 322,
    SQL2003_FOLLOWING = 323,
    SQL2003_FOR = 324,
    SQL2003_FROM = 325,
    SQL2003_FULL = 326,
    SQL2003_G = 327,
    SQL2003_GROUP = 328,
    SQL2003_GROUPING = 329,
    SQL2003_HAVING = 330,
    SQL2003_HOUR = 331,
    SQL2003_IN = 332,
    SQL2003_INNER = 333,
    SQL2003_INSERT = 334,
    SQL2003_INT = 335,
    SQL2003_INTEGER = 336,
    SQL2003_INTERSECT = 337,
    SQL2003_INTERVAL = 338,
    SQL2003_INTO = 339,
    SQL2003_IS = 340,
    SQL2003_JOIN = 341,
    SQL2003_K = 342,
    SQL2003_LARGE = 343,
    SQL2003_LEFT = 344,
    SQL2003_LIKE = 345,
    SQL2003_M = 346,
    SQL2003_MAX = 347,
    SQL2003_MIN = 348,
    SQL2003_MINUTE = 349,
    SQL2003_MOD = 350,
    SQL2003_MONTH = 351,
    SQL2003_MULTISET = 352,
    SQL2003_NATIONAL = 353,
    SQL2003_NATURAL = 354,
    SQL2003_NCHAR = 355,
    SQL2003_NCLOB = 356,
    SQL2003_NO = 357,
    SQL2003_NOT = 358,
    SQL2003_NULLIF = 359,
    SQL2003_NUMERIC = 360,
    SQL2003_OBJECT = 361,
    SQL2003_OCTETS = 362,
    SQL2003_OF = 363,
    SQL2003_ON = 364,
    SQL2003_ONLY = 365,
    SQL2003_OR = 366,
    SQL2003_ORDER = 367,
    SQL2003_OTHERS = 368,
    SQL2003_OUTER = 369,
    SQL2003_OVER = 370,
    SQL2003_PARTITION = 371,
    SQL2003_PERCENT_RANK = 372,
    SQL2003_PRECEDING = 373,
    SQL2003_PRECISION = 374,
    SQL2003_RANGE = 375,
    SQL2003_RANK = 376,
    SQL2003_READ = 377,
    SQL2003_REAL = 378,
    SQL2003_RECURSIVE = 379,
    SQL2003_REF = 380,
    SQL2003_RIGHT = 381,
    SQL2003_ROW = 382,
    SQL2003_ROWS = 383,
    SQL2003_ROW_NUMBER = 384,
    SQL2003_SCOPE = 385,
    SQL2003_SECOND = 386,
    SQL2003_SELECT = 387,
    SQL2003_SESSION_USER = 388,
    SQL2003_SET = 389,
    SQL2003_SETS = 390,
    SQL2003_SMALLINT = 391,
    SQL2003_SOME = 392,
    SQL2003_STDDEV_POP = 393,
    SQL2003_STDDEV_SAMP = 394,
    SQL2003_SUM = 395,
    SQL2003_SYSTEM_USER = 396,
    SQL2003_THEN = 397,
    SQL2003_TIES = 398,
    SQL2003_TIME = 399,
    SQL2003_TIMESTAMP = 400,
    SQL2003_TO = 401,
    SQL2003_UNBOUNDED = 402,
    SQL2003_UNION = 403,
    SQL2003_UPDATE = 404,
    SQL2003_USING = 405,
    SQL2003_VALUES = 406,
    SQL2003_VARCHAR = 407,
    SQL2003_VARYING = 408,
    SQL2003_VAR_POP = 409,
    SQL2003_VAR_SAMP = 410,
    SQL2003_WHEN = 411,
    SQL2003_WHERE = 412,
    SQL2003_WITH = 413,
    SQL2003_WITHOUT = 414,
    SQL2003_YEAR = 415,
    SQL2003_ZONE = 416
  };
#endif

/* Value type.  */
#if ! defined SQL2003_STYPE && ! defined SQL2003_STYPE_IS_DECLARED

union SQL2003_STYPE
{
#line 85 "./sqlparser_sql2003.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;
    NodeType nodetype;

#line 334 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */
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

#line 364 "sqlparser_sql2003_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6132

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  454
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  771

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   416

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   171,     2,     2,     2,   174,     2,     2,
      12,    13,   167,   169,   166,   170,    14,   173,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   165,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   168,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   172,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164
};

#if SQL2003_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   229,   229,   239,   240,   248,   249,   250,   254,   258,
     259,   260,   264,   272,   277,   282,   287,   292,   301,   310,
     327,   344,   345,   353,   362,   370,   375,   382,   383,   409,
     438,   439,   468,   469,   484,   491,   493,   495,   498,   526,
     527,   536,   544,   545,   553,   554,   562,   563,   564,   574,
     575,   579,   587,   588,   596,   605,   608,   612,   619,   620,
     630,   635,   643,   644,   653,   661,   662,   666,   674,   675,
     683,   684,   688,   695,   696,   704,   718,   727,   728,   736,
     737,   741,   742,   754,   759,   767,   768,   773,   779,   785,
     792,   798,   805,   811,   818,   824,   831,   837,   844,   850,
     857,   863,   870,   876,   887,   892,   897,   902,   907,   912,
     917,   922,   931,   932,   933,   937,   942,   948,   953,   962,
     971,   980,   991,  1002,  1013,  1020,  1021,  1026,  1027,  1035,
    1036,  1044,  1045,  1053,  1054,  1059,  1067,  1068,  1086,  1087,
    1088,  1089,  1090,  1091,  1092,  1096,  1104,  1112,  1117,  1125,
    1130,  1135,  1140,  1148,  1153,  1161,  1166,  1174,  1183,  1184,
    1189,  1197,  1198,  1206,  1207,  1215,  1216,  1224,  1225,  1230,
    1238,  1239,  1240,  1241,  1246,  1247,  1251,  1252,  1260,  1261,
    1268,  1268,  1272,  1273,  1274,  1275,  1276,  1277,  1278,  1279,
    1280,  1281,  1285,  1286,  1291,  1298,  1299,  1303,  1304,  1305,
    1306,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1321,  1329,
    1330,  1334,  1335,  1343,  1348,  1356,  1357,  1366,  1367,  1368,
    1369,  1374,  1380,  1386,  1392,  1398,  1410,  1425,  1426,  1427,
    1428,  1429,  1430,  1431,  1432,  1433,  1434,  1438,  1447,  1448,
    1449,  1450,  1451,  1455,  1457,  1462,  1467,  1471,  1479,  1480,
    1484,  1485,  1490,  1491,  1500,  1501,  1505,  1506,  1510,  1511,
    1512,  1516,  1520,  1525,  1526,  1527,  1531,  1535,  1536,  1537,
    1538,  1539,  1543,  1549,  1561,  1567,  1574,  1581,  1588,  1597,
    1604,  1611,  1618,  1625,  1634,  1641,  1654,  1655,  1656,  1657,
    1661,  1669,  1677,  1683,  1688,  1696,  1701,  1706,  1711,  1712,
    1717,  1718,  1719,  1720,  1721,  1722,  1726,  1734,  1739,  1743,
    1748,  1752,  1753,  1758,  1765,  1770,  1771,  1776,  1781,  1788,
    1792,  1796,  1800,  1804,  1811,  1818,  1822,  1827,  1832,  1837,
    1841,  1845,  1850,  1855,  1860,  1864,  1871,  1872,  1876,  1881,
    1886,  1891,  1896,  1901,  1906,  1910,  1914,  1918,  1922,  1926,
    1930,  1937,  1942,  1946,  1950,  1957,  1962,  1967,  1972,  1977,
    1982,  1987,  1991,  1996,  2000,  2005,  2009,  2013,  2020,  2025,
    2029,  2034,  2041,  2046,  2050,  2055,  2059,  2064,  2069,  2074,
    2079,  2084,  2088,  2093,  2097,  2102,  2106,  2113,  2118,  2123,
    2128,  2136,  2140,  2144,  2151,  2155,  2159,  2166,  2170,  2177,
    2178,  2179,  2183,  2184,  2188,  2189,  2193,  2194,  2199,  2209,
    2210,  2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,
    2233,  2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,
    2243,  2244,  2245,  2246,  2247,  2248,  2249,  2250,  2251,  2252,
    2253,  2254,  2255,  2256,  2257
};
#endif

#if SQL2003_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "UMINUS", "'('", "')'",
  "'.'", "ALL", "AND", "ANY", "ARRAY", "AS", "ASC", "AVG", "BETWEEN",
  "BIGINT", "BINARY", "BLOB", "BOOLEAN", "BY", "CASE", "CAST", "CHAR",
  "CHARACTER", "CHARACTERS", "CLOB", "CNNOP", "COALESCE", "CODE_UNITS",
  "COLLATE", "COMP_EQ", "COMP_GE", "COMP_GT", "COMP_LE", "COMP_LT",
  "COMP_NE", "CONVERT", "CORRESPONDING", "COUNT", "CROSS", "CUME_DIST",
  "CURRENT", "CURRENT_TIMESTAMP", "CURRENT_USER", "DATE", "DAY", "DEC",
  "DECIMAL", "DEFAULT", "DELETE", "DENSE_RANK", "DESC", "DISTINCT",
  "DOUBLE", "ELSE", "END", "END_P", "ESCAPE", "ERROR", "EXCEPT", "EXCLUDE",
  "EXISTS", "FLOAT", "FOLLOWING", "FOR", "FROM", "FULL", "G", "GROUP",
  "GROUPING", "HAVING", "HOUR", "IN", "INNER", "INSERT", "INT", "INTEGER",
  "INTERSECT", "INTERVAL", "INTO", "IS", "JOIN", "K", "LARGE", "LEFT",
  "LIKE", "M", "MAX", "MIN", "MINUTE", "MOD", "MONTH", "MULTISET",
  "NATIONAL", "NATURAL", "NCHAR", "NCLOB", "NO", "NOT", "NULLIF",
  "NUMERIC", "OBJECT", "OCTETS", "OF", "ON", "ONLY", "OR", "ORDER",
  "OTHERS", "OUTER", "OVER", "PARTITION", "PERCENT_RANK", "PRECEDING",
  "PRECISION", "RANGE", "RANK", "READ", "REAL", "RECURSIVE", "REF",
  "RIGHT", "ROW", "ROWS", "ROW_NUMBER", "SCOPE", "SECOND", "SELECT",
  "SESSION_USER", "SET", "SETS", "SMALLINT", "SOME", "STDDEV_POP",
  "STDDEV_SAMP", "SUM", "SYSTEM_USER", "THEN", "TIES", "TIME", "TIMESTAMP",
  "TO", "UNBOUNDED", "UNION", "UPDATE", "USING", "VALUES", "VARCHAR",
  "VARYING", "VAR_POP", "VAR_SAMP", "WHEN", "WHERE", "WITH", "WITHOUT",
  "YEAR", "ZONE", "';'", "','", "'*'", "'^'", "'+'", "'-'", "'!'", "'|'",
  "'/'", "'%'", "$accept", "sql_stmt", "stmt_list", "stmt", "dql_stmt",
  "dml_stmt", "insert_stmt", "insert_columns_and_source",
  "from_constructor", "delete_stmt", "update_stmt", "update_elem_list",
  "update_elem", "select_stmt", "query_expression",
  "query_expression_body", "query_term", "query_primary",
  "select_with_parens", "subquery", "table_subquery", "row_subquery",
  "simple_table", "opt_where", "opt_from_clause", "opt_groupby",
  "grouping_element_list", "grouping_element", "opt_order_by", "order_by",
  "sort_list", "sort_key", "opt_asc_desc", "opt_having", "with_clause",
  "with_list", "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_reference",
  "table_primary", "table_primary_non_join",
  "opt_simple_ident_list_with_parens", "column_ref", "relation_factor",
  "joined_table", "qualified_join", "cross_join", "natural_join",
  "join_type", "join_outer", "search_condition", "boolean_term",
  "boolean_factor", "boolean_test", "boolean_primary", "predicate",
  "comparison_predicate", "quantified_comparison_predicate",
  "between_predicate", "like_predicate", "in_predicate", "null_predicate",
  "exists_predicate", "row_expr", "factor0", "factor1", "factor2",
  "factor3", "factor4", "row_expr_list", "in_expr", "truth_value",
  "comp_op", "cnn_op", "comp_all_some_any_op", "plus_minus_op",
  "star_div_percent_mod_op", "expr_const", "case_expr", "case_arg",
  "when_clause_list", "when_clause", "case_default", "func_expr",
  "aggregate_windowed_function", "aggregate_function_name",
  "ranking_windowed_function", "ranking_function_name", "over_clause",
  "window_specification", "window_name", "window_specification_details",
  "opt_existing_window_name", "opt_window_partition_clause",
  "opt_window_frame_clause", "window_frame_units", "window_frame_extent",
  "window_frame_start", "window_frame_preceding", "window_frame_between",
  "window_frame_bound", "window_frame_following",
  "opt_window_frame_exclusion", "scalar_function", "function_call_keyword",
  "data_type", "user_defined_type_name", "reference_type",
  "collection_type", "predefined_type", "interval_type",
  "interval_qualifier", "start_field", "end_field",
  "single_datetime_field", "non_second_primary_datetime_field",
  "boolean_type", "datetime_type", "numeric_type", "exact_numeric_type",
  "approximate_numeric_type", "character_string_type",
  "binary_large_object_string_type", "national_character_string_type",
  "large_object_length", "char_length_units", "multiplier",
  "distinct_or_all", "all_some_any", "opt_as_label", "as_label", "label",
  "collate_clause", "name_r", "reserved", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,    40,    41,    46,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,    59,    44,    42,    94,    43,
      45,    33,   124,    47,    37
};
# endif

#define YYPACT_NINF -608

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-608)))

#define YYTABLE_NINF -311

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,    63,   -41,    -9,    99,  5820,  5968,   106,    46,   -47,
    -608,  -608,  -608,  -608,  -608,  -608,    34,   -46,    38,  -608,
    -608,    28,   141,  5820,  5820,  -608,  -608,  2336,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
     108,  -608,  -608,  -608,   151,  -608,  5820,  -608,    98,   259,
    -608,  -608,    52,   250,  -608,  -608,    99,    99,    99,   -46,
    -608,   120,    68,  -608,  -608,  -608,  -608,  -608,  -608,  2000,
    2672,   284,   298,   311,   324,  -608,  -608,   342,   346,   349,
    -608,  -608,  -608,  2672,  2672,  -608,  -608,  -608,   308,   217,
    -608,   374,  1157,   158,   192,   221,  -608,  -608,  -608,  -608,
    -608,  -608,   380,  -608,   384,  -608,  -608,   385,    78,  2672,
    4775,  -608,  5820,  5820,   372,  -608,  -608,  2672,    28,    28,
      28,  2168,  -608,  4328,   244,  2672,  -608,  -608,  -608,    74,
    2000,   388,    42,   389,    65,   249,  2672,  2672,  2672,   398,
     392,  2672,   393,  -608,  -608,  4923,   120,  2336,  2504,  -608,
    5071,  -608,  5820,   235,  2672,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  2672,  -608,  -608,  -608,  -608,  2672,  2672,  1496,
     397,  2672,  2993,   120,   251,    35,  5222,   401,  -608,   399,
     254,   412,  -608,   261,    48,    38,    38,  -608,  1328,   412,
    2168,   316,   409,  -608,  -608,   343,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,   911,  -608,  -608,  -608,  -608,   420,
    -608,  2672,  -608,  2168,   375,   249,    33,   421,   104,   426,
    -608,    61,  -608,  4476,  -608,  4624,  -608,   211,  -608,  -608,
    4624,  -608,  -608,  -608,  -608,   365,  -608,  -608,   431,  -608,
    -608,  -608,   158,   192,   221,  -608,  -608,  -608,   432,     2,
    2672,   328,    13,  5373,  -608,   218,  -608,  2672,  2672,  5820,
     433,  5524,  -608,  5820,    63,  -608,  2672,  -608,  -608,  -608,
    1328,    29,   529,  -608,  -608,  2168,  2168,   130,  2672,  -608,
    -608,   410,  -608,   248,  -608,   437,    26,  2672,    24,   413,
    1664,   412,    95,  -608,   -61,   730,  2672,   395,  -608,  4180,
    -608,  5820,  -608,  2672,  4476,   379,   442,   259,   367,   344,
    -608,  4923,   344,   290,   344,  4923,   373,  -608,   436,   386,
    -608,   328,   328,    14,  5672,  -608,  -608,  5820,   451,  3144,
    -608,    65,  -608,  5820,  5820,   452,  -608,  -608,  -608,   409,
    -608,  -608,  -608,   238,  -608,     1,  -608,  -608,  -608,  2000,
    -608,  -608,  -608,   462,    82,  2672,   437,  2672,  -608,  -608,
    -608,  -608,    65,  -608,  -608,  2672,  2672,    65,  -608,  -608,
     381,   461,  -608,    59,    62,   464,  -608,   470,   471,   362,
     474,  -608,  -608,   236,   287,    69,   475,   477,  -608,   478,
    -608,     8,    16,   479,  -608,   143,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,   111,  -608,   455,   481,
      20,  -608,  -608,  -608,  4923,  -608,  -608,   340,  -608,   407,
    -608,  -608,  4923,    99,  2168,  -608,  -608,  -608,   328,  5820,
    -608,  -608,  -608,   483,  3292,  5820,  -608,   283,  -608,  -608,
    5820,  -608,  2672,   485,  -608,  2672,    21,  -608,   222,    65,
      65,   390,   495,   497,   396,   492,   501,   400,   500,   502,
     511,   514,  -608,   515,   510,  -608,   376,  -608,    91,    44,
      75,   521,   418,   516,   502,   525,  5820,   528,   387,   391,
     530,   402,   403,   531,  -608,   527,  -608,   405,  -608,  -608,
    -608,  -608,  -608,  2168,   259,  4923,   631,  2840,   316,  -608,
    -608,   532,   424,  3440,  -608,   297,   533,  3588,  -608,    65,
    -608,    65,  2672,  2672,   534,   541,   542,   544,   539,   545,
     547,   552,   247,   549,    10,    17,   551,   555,   246,   569,
     570,   564,   572,   469,   567,   568,   571,   575,   573,    18,
     574,   576,   427,   429,   584,   434,   435,   587,   577,  5820,
     316,  -608,  -608,  2168,   259,  1832,   447,  -608,   439,    65,
    -608,   579,    34,  -608,  -608,  3736,  3884,  -608,   312,    65,
      65,   596,  -608,  -608,   502,   589,  -608,   502,   590,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,   206,  -608,  -608,   602,
    -608,   603,  -608,    30,   600,  -608,  -608,   601,   606,   608,
     607,   604,   616,  -608,   502,   610,  -608,  -608,   620,   494,
     170,  -608,  -608,   223,  -608,  -608,  -608,   617,   455,   316,
    -608,  -608,   619,  2840,  2672,   -34,  -608,  -608,  -608,  -608,
    4032,   623,   624,  -608,   626,  -608,  -608,   627,   628,  -608,
     637,   638,   480,  -608,   632,  -608,   502,   633,   634,  -608,
     635,  5820,   486,   504,   505,   506,  -608,  -608,  2840,  -608,
    -608,  -608,  -608,  -608,   245,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,   636,   643,  -608,   644,  -608,  -608,  -608,  -608,
     468,   496,   498,   499,   645,   123,   535,   523,   538,   593,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,   139,   148,  -608,   651,  -608,  -608,  -608,  -608,   229,
    -608,  -608,  -608,   123,   543,  -608,   556,  -608,  -608,  -608,
    -608
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     0,     0,    70,     0,     0,     0,     0,     3,
       6,     7,    11,    10,     9,     8,    49,    25,    27,    30,
      32,     0,     0,     0,     0,    71,    72,     0,   409,   417,
     451,   227,   418,   419,   420,   452,   421,   453,   422,   235,
     241,   321,   239,   446,   450,   423,   441,   416,   236,   322,
     424,   414,   425,   415,   228,   229,   323,   320,   426,   454,
     427,   428,   442,   429,   449,   240,   430,   431,   238,   443,
     432,   433,   434,   242,   435,   436,   448,   231,   232,   230,
     447,   445,   444,   437,   438,   233,   234,   439,   319,   440,
       0,   411,   412,   413,   104,   410,   432,    60,    62,    65,
       1,     2,     5,     0,    24,    50,    70,    70,    70,    26,
      33,    39,     0,   201,   204,   202,   205,   203,   206,     0,
     209,   419,   452,   453,   280,   282,   207,     0,   454,     0,
     284,   285,    76,     0,     0,    35,    37,   172,     0,    73,
     170,     0,   402,   158,   161,   163,   165,   167,   171,   174,
     175,   220,   411,   219,   412,   218,   217,   413,    87,     0,
       0,    61,     0,     0,     0,    66,     4,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    12,    16,    13,     0,
       0,     0,   176,     0,   210,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,     0,    39,     0,     0,   407,
       0,   192,     0,     0,     0,    75,   403,   405,   159,   406,
     195,   196,     0,   200,   197,   198,   199,     0,     0,     0,
       0,     0,     0,    39,    21,     0,     0,   105,    63,     0,
      68,     0,    51,    52,    55,    29,    28,    31,     0,     0,
       0,    40,   127,   129,   131,   133,   136,   138,   143,   139,
     141,   140,   142,   144,     0,    17,    18,    15,    14,     0,
      34,     0,   173,     0,   215,   211,     0,     0,     0,     0,
     276,     0,   275,     0,    36,     0,    41,    77,    79,    81,
     402,    80,   112,   113,   114,    42,    74,   272,     0,   404,
     408,   193,   160,   162,   164,   166,   397,   398,     0,     0,
       0,     0,     0,     0,    89,    88,    20,     0,     0,     0,
     107,     0,    67,     0,     0,    64,     0,    56,    57,    54,
       0,     0,   176,   157,   132,     0,     0,     0,     0,   186,
     184,   185,   182,   183,   187,     0,     0,     0,     0,     0,
       0,     0,    34,   177,     0,     0,     0,     0,   212,     0,
     279,     0,   281,     0,     0,     0,    80,    85,     0,   125,
     124,     0,   125,     0,   125,     0,     0,    83,     0,    58,
     273,   226,   222,     0,     0,   237,   274,     0,   107,     0,
      22,    23,   111,     0,     0,   106,    69,    53,   137,   128,
     130,   180,   181,     0,   134,     0,   188,   189,   190,     0,
     178,   153,   155,     0,   149,     0,     0,     0,   191,   399,
     401,   400,   145,   194,   146,     0,     0,   216,   208,   348,
     418,   371,   324,   366,   367,   365,   325,   344,   350,     0,
     353,   347,   346,   424,     0,   386,   385,   349,   354,   433,
     345,   445,   444,   438,   290,     0,   287,   288,   289,   286,
     305,   303,   304,   302,   336,   337,   298,   301,   300,     0,
       0,    82,    86,    84,     0,   126,   121,     0,   122,     0,
     123,    78,     0,    70,     0,    38,   225,   221,   224,   248,
     244,   243,   246,   111,     0,     0,    91,    90,   109,   110,
       0,   135,     0,     0,   156,     0,     0,   154,   151,   213,
     214,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,     0,   318,   306,     0,   308,   315,   375,
     373,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   277,   293,   294,     0,   297,   299,
     278,   283,   119,     0,     0,     0,     0,     0,    59,   223,
     249,     0,   250,     0,    95,    94,   110,     0,   108,   147,
     179,   150,     0,     0,   369,     0,     0,   363,     0,     0,
     361,     0,   390,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   383,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,   118,   120,     0,     0,     0,   236,    43,    44,    47,
     245,     0,    49,   103,   102,     0,     0,    93,    92,   148,
     152,     0,   370,   356,     0,     0,   355,     0,     0,   391,
     392,   396,   394,   395,   393,   389,   388,   364,   343,     0,
     341,     0,   351,     0,   313,   307,   311,     0,     0,     0,
       0,   381,     0,   376,     0,     0,   384,   339,     0,     0,
     328,   329,   330,   333,   334,   335,   359,     0,   296,   115,
     117,    46,     0,     0,     0,   252,    99,    98,   101,   100,
       0,     0,     0,   358,     0,   357,   387,     0,     0,   317,
       0,     0,   314,   374,     0,   372,     0,     0,     0,   379,
       0,     0,     0,     0,     0,     0,   292,   295,     0,    45,
     251,   255,   254,   247,     0,    97,    96,   368,   362,   360,
     342,   340,     0,     0,   378,     0,   377,   382,   338,   291,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   267,
     256,   260,   257,   316,   312,   380,   326,   327,   331,   332,
      48,     0,     0,   263,     0,   265,   259,   258,   261,     0,
     253,   264,   266,     0,     0,   269,     0,   270,   262,   268,
     271
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -608,  -608,   580,  -608,  -608,  -608,  -608,  -608,   507,  -608,
    -608,   370,  -608,   -35,     9,   653,   199,   509,  -608,  -190,
    -215,  -608,  -608,    70,  -608,  -608,  -607,  -608,    71,  -608,
     369,  -608,  -608,  -608,  -608,   110,  -608,  -608,  -109,   377,
    -100,   490,  -608,   326,  -261,  -405,  -608,  -608,  -608,    89,
    -208,  -608,  -608,  -608,   330,   -11,  -167,   382,  -211,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,   657,
     493,   503,   487,   129,  -608,  -173,   296,   313,  -608,  -608,
    -608,  -608,  -608,  -433,  -608,  -608,   444,  -608,  -608,  -608,
    -608,    39,  -608,   315,  -311,  -608,   232,  -608,  -608,  -608,
    -608,  -608,  -608,    -1,  -608,  -608,   -49,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,    -5,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -502,    80,  -608,  -608,  -608,   438,   446,   517,  -445,   508,
    -608
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,   176,   177,    13,
      14,   223,   224,    15,   181,    17,    18,    19,   135,   136,
     275,   137,    20,   172,   196,   369,   607,   608,   104,   105,
     232,   233,   319,   475,    21,    97,    98,   164,   165,   229,
      27,   138,   139,   276,   277,   278,   279,   463,   140,   141,
     281,   282,   283,   284,   366,   466,   321,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   182,
     143,   144,   145,   146,   147,   183,   401,   394,   340,   204,
     341,   212,   217,   148,   149,   185,   264,   265,   347,   150,
     151,   152,   153,   154,   375,   480,   481,   551,   552,   612,
     713,   714,   739,   753,   741,   742,   754,   755,   760,   155,
     156,   445,   446,   447,   448,   449,   450,   515,   516,   645,
     517,   157,   451,   452,   453,   454,   455,   456,   457,   458,
     573,   635,   636,   300,   413,   205,   206,   207,   208,   158,
      95
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,    93,   256,   179,   241,   274,   168,   169,   170,    16,
      22,   538,   355,   539,   267,   372,   315,   492,    93,    93,
     527,   106,   588,   638,   323,   288,   376,   478,   530,   324,
     640,   657,    23,   541,   402,   201,   201,   562,   202,   202,
       1,   274,   388,   689,    91,    91,   405,   201,   201,   274,
     202,   202,   349,   325,   201,   201,   580,   202,   202,   542,
     476,   477,    91,    91,     1,   356,   709,   201,   317,   201,
     202,   503,   202,   308,   506,     1,   201,   178,    24,   202,
     173,   521,   201,   274,   415,   202,     1,   582,   343,   711,
    -104,    93,   222,   355,    90,   201,   344,   712,   202,   201,
     467,   734,   202,   579,   406,   107,   100,   318,   -33,     2,
     101,    16,   111,   112,    25,   390,   201,   407,   102,   202,
     400,    16,   682,   108,   174,   684,   414,   113,   114,   115,
     116,   117,   403,   118,     3,    91,   391,    93,   201,   392,
     602,   202,   537,   325,   258,   274,   356,   495,   202,   103,
     504,   274,   698,   507,   110,    93,   534,    93,    93,    26,
     522,   535,   -33,     4,   274,   160,   583,   549,    93,   528,
     529,   274,   736,   203,   203,   274,   639,   531,   532,   126,
     -33,    91,    22,   641,   658,   203,   203,     4,    16,   259,
      93,   400,   203,   203,   725,    93,   690,    93,     4,    91,
     581,    91,    91,     4,     5,   203,   161,   203,   261,     4,
     761,   546,    91,     6,   203,   505,   274,    93,   508,   762,
     203,    93,   175,   707,     6,   523,   493,   353,   175,     6,
    -105,   584,   379,   203,    91,     6,   393,   203,   629,    91,
    -310,    91,   630,   536,   391,   159,   -33,   392,   462,   113,
     114,   115,   116,   117,   203,   118,   201,   351,   358,   202,
     757,    91,   193,   194,   162,    91,   285,   735,    93,   758,
      93,   163,   228,   751,   274,    93,   203,   167,   764,   629,
     171,   738,   274,   630,   280,   359,   397,   563,   398,    41,
     213,   290,   360,   306,   736,  -106,   186,   557,    93,    41,
     361,   126,   752,   362,    93,   765,    93,   548,    93,  -109,
     187,   615,    91,   363,    91,    49,   634,   519,   520,    91,
      92,    92,   631,   188,  -108,    49,   680,   210,   211,   259,
     752,   702,   703,    56,   766,    57,   189,   632,    92,    92,
     364,   633,    91,    56,    93,    57,    93,   295,    91,    93,
      91,   468,    91,   470,   190,   274,    93,   634,   191,   214,
      93,   192,   280,   259,   359,   215,   216,   235,   236,    93,
     514,   360,    93,   547,    93,   767,   600,   365,    93,    93,
     644,   195,   362,   197,   704,   705,   198,   358,    91,   218,
      91,   231,   219,    91,   203,   737,   220,   221,   255,    88,
      91,   260,   262,   269,    91,   270,   272,   291,   263,    88,
     301,    92,   312,    91,   359,   311,    91,   307,    91,   364,
     313,   360,    91,    91,   314,   326,   358,   316,   518,   361,
     325,   327,   362,   342,   350,   601,   669,   346,   444,   352,
     459,   368,   363,   280,   370,   371,   374,   383,   396,   399,
     280,   408,   543,   359,   280,   461,   464,    92,   418,    93,
     360,   465,   472,   473,   474,   484,   490,    93,   361,   364,
     494,   362,   501,   502,    93,    92,   509,    92,    92,    93,
      93,   363,   510,   511,   512,    93,   513,   524,    92,   525,
     526,   533,   202,   544,   540,   670,   545,   553,   560,   564,
     565,   710,   566,    91,   568,   567,   569,   572,   364,   570,
      92,    91,   571,    94,    99,    92,   574,    92,    91,   575,
     576,    93,   577,    91,    91,   578,   585,   586,   587,    91,
     589,    94,    94,   591,   592,   594,   597,    92,   593,   598,
      93,    92,   599,   611,   625,   610,   621,   616,    93,   595,
     596,   328,    93,   280,   622,   623,   624,   628,   626,   627,
     643,   280,   637,   201,   642,    91,   202,   329,   330,   331,
     332,   333,   334,   646,   647,   648,   649,   650,   651,   652,
     655,   653,   667,   654,    91,   672,   656,   659,    92,   660,
      92,   661,    91,   662,    93,    92,    91,   663,   664,   665,
     666,   681,   683,   685,    99,   673,   674,   687,   688,   335,
      93,    93,   691,   694,   692,   590,   696,   336,    92,   693,
     695,   697,   337,   699,    92,   700,    92,   701,    92,  -309,
     706,   708,   746,   730,   280,   338,   717,   718,    91,   719,
     720,   721,   722,   723,   757,   724,   726,   727,   728,   743,
     209,   731,   732,   733,    91,    91,   744,   745,   750,   758,
     747,   759,   748,   749,    92,   756,    92,   763,   227,    92,
      99,   230,   770,   769,   109,    93,    92,   380,   358,   237,
      92,   230,   166,   675,   142,   387,   257,   286,   668,    92,
     386,   471,    92,   469,    92,   261,    93,   292,    92,    92,
     339,   203,   497,    94,   294,   359,   491,   389,   209,   348,
      94,   550,   360,   740,   768,   293,   686,   289,   367,    91,
     361,   357,     0,   362,     0,     0,     0,     0,     0,     0,
     305,     0,     0,   363,   310,     0,     0,     0,     0,     0,
      91,     0,     0,   603,     0,     0,     0,     0,     0,     0,
       0,     0,   328,     0,     0,     0,     0,     0,     0,     0,
     364,     0,     0,     0,   201,     0,     0,   202,   329,   330,
     331,   332,   333,   334,     0,     0,     0,   184,     0,    92,
       0,    94,     0,   209,   604,     0,     0,    92,   209,     0,
     729,     0,     0,     0,    92,     0,     0,     0,     0,    92,
      92,     0,     0,     0,     0,    92,     0,     0,     0,     0,
     335,   378,     0,     0,     0,     0,   225,   382,   336,   385,
       0,   230,     0,   337,   234,     0,     0,     0,   254,     0,
       0,     0,     0,     0,     0,     0,   338,     0,     0,     0,
       0,    92,     0,   266,     0,   268,     0,     0,   271,     0,
       0,     0,     0,     0,   142,     0,     0,    94,     0,    94,
      92,     0,    94,     0,     0,     0,     0,     0,    92,    94,
       0,     0,    92,    94,     0,   416,   299,     0,   302,     0,
       0,     0,   482,     0,     0,   483,     0,   487,     0,     0,
       0,   488,   489,     0,     0,   322,     0,   254,     0,     0,
       0,   339,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
     345,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    92,     0,   328,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,     0,     0,   202,   329,
     330,   331,   332,   333,   334,     0,     0,   373,     0,     0,
       0,     0,     0,     0,   225,   381,     0,     0,     0,     0,
       0,     0,    94,   234,     0,     0,     0,   322,     0,     0,
      94,     0,   254,   254,     0,   395,     0,   482,     0,     0,
       0,   335,   555,   556,   404,    92,     0,   412,   558,   336,
       0,     0,     0,   417,   337,     0,     0,     0,     0,     0,
     460,     0,     0,     0,     0,     0,    92,   338,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,   614,   496,     0,   498,   618,     0,     0,     0,     0,
       0,     0,   499,   500,     0,     0,     0,     0,     0,     0,
       0,     0,   339,   203,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   677,   679,     0,     0,     0,     0,     0,
       0,   254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   559,
       0,     0,   561,     0,     0,     0,     0,     0,     0,     0,
      28,   199,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,   200,    30,    31,     0,
       0,    32,     0,     0,     0,     0,    33,     0,   716,    34,
       0,   201,    35,    36,   202,     0,     0,     0,     0,     0,
     254,    37,    38,    39,   609,    40,     0,     0,     0,    94,
      41,     0,     0,     0,     0,    42,    43,     0,     0,   619,
     620,     0,     0,     0,     0,    44,     0,     0,    45,    46,
       0,     0,    47,     0,    48,     0,    49,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,    51,    52,     0,
       0,    53,    54,    55,    56,     0,    57,    58,     0,     0,
     254,     0,     0,     0,    59,     0,    60,    61,    62,     0,
      63,     0,     0,    64,     0,     0,     0,    65,    66,    67,
       0,    68,    69,     0,    70,    71,     0,    72,     0,    73,
      74,    75,     0,     0,     0,    76,     0,     0,    77,    78,
      79,     0,     0,    80,    81,    82,     0,    83,     0,     0,
       0,     0,    84,     0,    85,    86,     0,     0,     0,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,   203,
     609,    28,   113,   114,   115,   116,   117,     0,   118,     0,
     320,     0,     0,     0,     0,     0,    29,     0,    30,    31,
       0,     0,    32,     0,     0,     0,   120,   121,     0,     0,
      34,     0,     0,   122,    36,   609,     0,     0,     0,     0,
       0,     0,   123,    38,    39,     0,    40,     0,   124,   125,
       0,    41,     0,     0,   126,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    44,   239,     0,    45,
      46,     0,     0,    47,     0,    48,     0,    49,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,    52,
     127,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,   240,   128,     0,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,     0,    65,    66,
      67,     0,    68,    69,     0,    70,    71,   129,    72,     0,
      73,    74,    75,     4,   130,     0,    76,     0,     0,    77,
      78,    79,   131,     0,    80,    81,    82,     0,    83,     0,
       0,     0,     0,    84,     0,    85,    86,     0,     0,     6,
      87,    88,    89,     0,     0,     0,     0,   133,   134,    28,
     113,   114,   115,   116,   117,     0,   118,     0,   119,     0,
       0,   296,     0,     0,    29,     0,    30,    31,     0,     0,
      32,     0,     0,     0,   120,   121,     0,     0,    34,     0,
       0,   122,    36,     0,     0,     0,     0,     0,     0,     0,
     123,    38,    39,     0,    40,     0,   124,   125,     0,    41,
       0,     0,   126,     0,    42,    43,   297,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    45,    46,     0,
       0,    47,     0,    48,     0,    49,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,    52,   127,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,     0,
       0,     0,     0,   128,     0,    60,    61,    62,     0,    63,
       0,     0,    64,     0,     0,     0,    65,    66,    67,     0,
      68,    69,     0,    70,    71,   129,    72,     0,    73,    74,
      75,     0,   130,     0,    76,     0,     0,    77,    78,    79,
     131,     0,    80,    81,    82,     0,    83,     0,     0,     0,
       0,    84,     0,    85,    86,     0,     0,     0,    87,    88,
      89,     0,     0,   298,     0,   133,   134,    28,   113,   114,
     115,   116,   117,     0,   118,     0,   119,     0,     0,   409,
       0,   410,    29,     0,    30,    31,     0,     0,    32,     0,
       0,     0,   120,   121,     0,     0,    34,     0,     0,   122,
      36,     0,     0,     0,     0,     0,     0,     0,   123,    38,
      39,     0,    40,     0,   124,   125,     0,    41,     0,     0,
     126,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,    46,     0,     0,    47,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,   127,     0,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,   128,     0,    60,    61,    62,     0,    63,     0,     0,
      64,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    70,    71,   129,    72,     0,    73,    74,    75,     0,
     130,     0,    76,     0,   411,    77,    78,    79,   131,     0,
      80,    81,    82,     0,    83,     0,     0,     0,     0,    84,
       0,    85,    86,     0,     0,     0,    87,    88,    89,     0,
       0,     0,     0,   133,   134,    28,   113,   114,   115,   116,
     117,     0,   118,     0,   180,   671,     0,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,     0,     0,     0,
     120,   121,     0,     0,    34,     0,     0,   122,    36,     0,
       0,     0,     0,     0,     0,     0,   123,    38,    39,     0,
      40,     0,   124,   125,     0,    41,     0,     0,   126,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,   127,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,   128,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,   129,    72,     0,    73,    74,    75,     4,   130,     0,
      76,     0,     0,    77,    78,    79,   131,     0,    80,    81,
      82,     0,    83,     0,     0,     0,     0,    84,     0,    85,
      86,     0,     0,     6,    87,    88,    89,     0,     0,     0,
       0,   133,   134,    28,   113,   114,   115,   116,   117,     0,
     118,     0,   180,     0,     0,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,     0,     0,     0,   120,   121,
       0,     0,    34,     0,     0,   122,    36,     0,     0,     0,
       0,     0,     0,     0,   123,    38,    39,     0,    40,     0,
     124,   125,     0,    41,     0,     0,   126,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    45,    46,     0,     0,    47,     0,    48,     0,    49,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,   127,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,   128,     0,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    70,    71,   129,
      72,     0,    73,    74,    75,     4,   130,     0,    76,     0,
       0,    77,    78,    79,   131,     0,    80,    81,    82,     0,
      83,     0,     0,     0,     0,    84,     0,    85,    86,     0,
       0,     6,    87,    88,    89,     0,     0,     0,     0,   133,
     134,    28,   113,   114,   115,   116,   117,     0,   118,     0,
     238,     0,     0,     0,     0,     0,    29,     0,    30,    31,
       0,     0,    32,     0,     0,     0,   120,   121,     0,     0,
      34,     0,     0,   122,    36,     0,     0,     0,     0,     0,
       0,     0,   123,    38,    39,     0,    40,     0,   124,   125,
       0,    41,     0,     0,   126,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    44,   239,     0,    45,
      46,     0,     0,    47,     0,    48,     0,    49,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,    52,
     127,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,   240,   128,     0,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,     0,    65,    66,
      67,     0,    68,    69,     0,    70,    71,   129,    72,     0,
      73,    74,    75,     0,   130,     0,    76,     0,     0,    77,
      78,    79,   131,     0,    80,    81,    82,     0,    83,     0,
       0,     0,     0,    84,     0,    85,    86,     0,     0,     0,
      87,    88,    89,     0,     0,     0,     0,   133,   134,    28,
     113,   114,   115,   116,   117,     0,   118,     0,   119,     0,
       0,     0,     0,     0,    29,     0,    30,    31,     0,     0,
      32,     0,     0,     0,   120,   121,     0,     0,    34,     0,
       0,   122,    36,     0,     0,     0,     0,     0,     0,     0,
     123,    38,    39,     0,    40,     0,   124,   125,     0,    41,
       0,     0,   126,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    45,    46,     0,
       0,    47,     0,    48,     0,    49,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,    52,   127,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,     0,
       0,     0,     0,   128,     0,    60,    61,    62,     0,    63,
       0,     0,    64,     0,     0,     0,    65,    66,    67,     0,
      68,    69,     0,    70,    71,   129,    72,     0,    73,    74,
      75,     0,   130,     0,    76,     0,     0,    77,    78,    79,
     131,     0,    80,    81,    82,     0,    83,     0,     0,     0,
       0,    84,     0,    85,    86,     0,     0,     0,    87,    88,
      89,     0,     0,   132,     0,   133,   134,    28,   113,   114,
     115,   116,   117,     0,   118,     0,   119,   287,     0,     0,
       0,     0,    29,     0,    30,    31,     0,     0,    32,     0,
       0,     0,   120,   121,     0,     0,    34,     0,     0,   122,
      36,     0,     0,     0,     0,     0,     0,     0,   123,    38,
      39,     0,    40,     0,   124,   125,     0,    41,     0,     0,
     126,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,    46,     0,     0,    47,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,   127,     0,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,   128,     0,    60,    61,    62,     0,    63,     0,     0,
      64,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    70,    71,   129,    72,     0,    73,    74,    75,     0,
     130,     0,    76,     0,     0,    77,    78,    79,   131,     0,
      80,    81,    82,     0,    83,     0,     0,     0,     0,    84,
       0,    85,    86,     0,     0,     0,    87,    88,    89,     0,
       0,     0,     0,   133,   134,    28,   113,   114,   115,   116,
     117,     0,   118,     0,   119,     0,     0,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,     0,     0,     0,
     120,   121,     0,     0,    34,     0,     0,   122,    36,     0,
       0,     0,     0,     0,     0,     0,   123,    38,    39,     0,
      40,     0,   124,   125,     0,    41,     0,     0,   126,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,   127,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,   128,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,   129,    72,     0,    73,    74,    75,     0,   130,     0,
      76,     0,     0,    77,    78,    79,   131,     0,    80,    81,
      82,     0,    83,     0,     0,     0,     0,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,     0,     0,     0,
       0,   133,   134,    28,   113,   114,   115,   116,   117,     0,
     118,     0,   605,     0,     0,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,     0,     0,     0,   120,   121,
       0,     0,    34,     0,     0,   122,    36,     0,     0,     0,
       0,     0,     0,     0,   123,    38,    39,     0,    40,     0,
     124,   125,     0,    41,     0,     0,   126,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    45,    46,     0,     0,    47,     0,   606,     0,    49,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,   127,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,   128,     0,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    70,    71,   129,
      72,     0,    73,    74,    75,     0,   130,     0,    76,     0,
       0,    77,    78,    79,   131,     0,    80,    81,    82,     0,
      83,     0,     0,     0,     0,    84,    28,    85,    86,     0,
       0,     0,    87,    88,    89,     0,     0,   303,     0,   133,
     134,    29,     0,    30,    31,     0,     0,    32,     0,     0,
       0,     0,    33,     0,     0,    34,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    37,    38,    39,
       0,    40,     0,     0,     0,     0,    41,     0,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,    45,    46,     0,     0,    47,     0,
      48,     0,    49,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,    52,     0,     0,    53,    54,    55,
      56,     0,    57,    58,     0,     0,     0,     0,     0,     0,
      59,     0,    60,    61,    62,     0,    63,     0,     0,    64,
       0,     0,     0,    65,    66,    67,     0,    68,    69,     0,
      70,    71,     0,    72,     0,    73,    74,    75,     0,     0,
       0,    76,     0,     0,    77,    78,    79,     0,     0,    80,
      81,    82,     0,    83,     0,     0,     0,    28,    84,     0,
      85,    86,     0,     0,     0,    87,    88,    89,   485,     0,
     304,     0,    29,     0,    30,    31,     0,     0,    32,     0,
       0,     0,     0,    33,     0,     0,    34,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      39,     0,    40,     0,     0,     0,     0,    41,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,    46,     0,     0,    47,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,     0,     0,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,    59,     0,    60,    61,    62,     0,    63,     0,     0,
      64,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    70,    71,     0,    72,     0,    73,    74,    75,     0,
       0,     0,    76,     0,     0,    77,    78,    79,     0,     0,
      80,    81,    82,     0,    83,    28,     0,     0,     0,    84,
       0,    85,    86,     0,     0,     0,    87,    88,    89,     0,
      29,   486,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,     0,     0,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,     0,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,    59,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,     0,    72,     0,    73,    74,    75,     0,     0,     0,
      76,     0,     0,    77,    78,    79,     0,     0,    80,    81,
      82,     0,    83,    28,     0,     0,     0,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,     0,    29,   554,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
       0,     0,    34,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,     0,    40,     0,
       0,     0,     0,    41,     0,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    45,    46,     0,     0,    47,     0,    48,     0,    49,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,     0,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,    59,     0,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    70,    71,     0,
      72,     0,    73,    74,    75,     0,     0,     0,    76,     0,
       0,    77,    78,    79,     0,     0,    80,    81,    82,     0,
      83,    28,     0,     0,     0,    84,     0,    85,    86,     0,
       0,     0,    87,    88,    89,     0,    29,   613,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,     0,     0,
      34,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,     0,    40,     0,     0,     0,
       0,    41,     0,     0,     0,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,    45,
      46,     0,     0,    47,     0,    48,     0,    49,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,    52,
       0,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,     0,    59,     0,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,     0,    65,    66,
      67,     0,    68,    69,     0,    70,    71,     0,    72,     0,
      73,    74,    75,     0,     0,     0,    76,     0,     0,    77,
      78,    79,     0,     0,    80,    81,    82,     0,    83,    28,
       0,     0,     0,    84,     0,    85,    86,     0,     0,     0,
      87,    88,    89,     0,    29,   617,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,     0,     0,    34,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,    40,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    45,    46,     0,
       0,    47,     0,    48,     0,    49,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,    52,     0,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,     0,
       0,     0,     0,    59,     0,    60,    61,    62,     0,    63,
       0,     0,    64,     0,     0,     0,    65,    66,    67,     0,
      68,    69,     0,    70,    71,     0,    72,     0,    73,    74,
      75,     0,     0,     0,    76,     0,     0,    77,    78,    79,
       0,     0,    80,    81,    82,     0,    83,    28,     0,     0,
       0,    84,     0,    85,    86,     0,     0,     0,    87,    88,
      89,     0,    29,   676,    30,    31,     0,     0,    32,     0,
       0,     0,     0,    33,     0,     0,    34,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      39,     0,    40,     0,     0,     0,     0,    41,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,    46,     0,     0,    47,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,     0,     0,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,    59,     0,    60,    61,    62,     0,    63,     0,     0,
      64,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    70,    71,     0,    72,     0,    73,    74,    75,     0,
       0,     0,    76,     0,     0,    77,    78,    79,     0,     0,
      80,    81,    82,     0,    83,    28,     0,     0,     0,    84,
       0,    85,    86,     0,     0,     0,    87,    88,    89,     0,
      29,   678,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,     0,     0,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,     0,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,    59,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,     0,    72,     0,    73,    74,    75,     0,     0,     0,
      76,     0,     0,    77,    78,    79,     0,     0,    80,    81,
      82,     0,    83,    28,     0,     0,     0,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,     0,    29,   715,
      30,    31,     0,   419,   420,   421,   422,     0,     0,    33,
     423,   424,    34,   425,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,     0,    40,     0,
       0,     0,   426,    41,   427,   428,     0,     0,    42,    43,
       0,   429,     0,     0,     0,     0,     0,     0,    44,     0,
     430,    45,    46,     0,     0,    47,     0,    48,     0,    49,
       0,     0,     0,   431,   432,     0,   433,     0,     0,     0,
      51,    52,     0,     0,    53,    54,    55,    56,     0,    57,
      58,   434,     0,   435,   436,     0,     0,    59,   437,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,   438,    70,   439,     0,
      72,     0,    73,    74,    75,     0,     0,     0,    76,   440,
       0,    77,    78,    79,     0,     0,    80,   441,   442,     0,
      83,    28,     0,     0,     0,   443,     0,    85,    86,     0,
       1,     0,    87,    88,    89,     0,    29,     0,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,     0,     0,
      34,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,     0,    40,     0,     0,     0,
       0,    41,     0,     0,     0,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,    45,
      46,     0,     0,    47,     0,    48,     0,    49,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,    52,
       0,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,     0,    59,     0,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,     0,    65,    66,
      67,     0,    68,    69,     0,    70,    71,     0,    72,     0,
      73,    74,    75,     4,     0,     0,    76,     0,     0,    77,
      78,    79,     0,     0,    80,    81,    82,     0,    83,    28,
       0,     0,     0,    84,     0,    85,    86,     0,   354,     6,
      87,    88,    89,     0,    29,     0,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,     0,     0,    34,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,    40,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    45,    46,     0,
       0,    47,     0,    48,     0,    49,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,    52,     0,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,     0,
       0,     0,     0,    59,     0,    60,    61,    62,     0,    63,
       0,     0,    64,     0,     0,     0,    65,    66,    67,     0,
      68,    69,     0,    70,    71,     0,    72,     0,    73,    74,
      75,     4,     0,     0,    76,     0,     0,    77,    78,    79,
       0,     0,    80,    81,    82,     0,    83,    28,   199,     0,
       0,    84,     0,    85,    86,     0,     0,     6,    87,    88,
      89,     0,    29,   200,    30,    31,     0,     0,    32,     0,
       0,     0,     0,    33,     0,     0,    34,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      39,     0,    40,     0,     0,     0,     0,    41,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,    46,     0,     0,    47,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,     0,     0,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,    59,     0,    60,    61,    62,     0,    63,     0,     0,
      64,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    70,    71,     0,    72,     0,    73,    74,    75,     0,
       0,     0,    76,     0,     0,    77,    78,    79,     0,     0,
      80,    81,    82,     0,    83,     0,     0,     0,    28,    84,
       0,    85,    86,     0,     0,     0,    87,    88,    89,   226,
       0,     0,     0,    29,     0,    30,    31,     0,     0,    32,
       0,     0,     0,     0,    33,     0,     0,    34,     0,     0,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,     0,    40,     0,     0,     0,     0,    41,     0,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,    44,     0,     0,    45,    46,     0,     0,
      47,     0,    48,     0,    49,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,    51,    52,     0,     0,    53,
      54,    55,    56,     0,    57,    58,     0,     0,     0,     0,
       0,     0,    59,     0,    60,    61,    62,     0,    63,     0,
       0,    64,     0,     0,     0,    65,    66,    67,     0,    68,
      69,     0,    70,    71,     0,    72,     0,    73,    74,    75,
       0,     0,     0,    76,     0,     0,    77,    78,    79,     0,
       0,    80,    81,    82,     0,    83,    28,     0,     0,     0,
      84,     0,    85,    86,     0,   273,     0,    87,    88,    89,
       0,    29,     0,    30,    31,     0,     0,    32,     0,     0,
       0,     0,    33,     0,     0,    34,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    37,    38,    39,
       0,    40,     0,     0,     0,     0,    41,     0,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,    45,    46,     0,     0,    47,     0,
      48,     0,    49,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,    52,     0,     0,    53,    54,    55,
      56,     0,    57,    58,     0,     0,     0,     0,     0,     0,
      59,     0,    60,    61,    62,     0,    63,     0,     0,    64,
       0,     0,     0,    65,    66,    67,     0,    68,    69,     0,
      70,    71,     0,    72,     0,    73,    74,    75,     0,     0,
       0,    76,     0,     0,    77,    78,    79,     0,     0,    80,
      81,    82,     0,    83,    28,   199,     0,     0,    84,     0,
      85,    86,     0,     0,     0,    87,    88,    89,     0,    29,
       0,    30,    31,     0,     0,    32,     0,     0,     0,     0,
      33,     0,     0,    34,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,    37,    38,    39,     0,    40,
       0,     0,     0,     0,    41,     0,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,    45,    46,     0,     0,    47,     0,    48,     0,
      49,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,    52,     0,     0,    53,    54,    55,    56,     0,
      57,    58,     0,     0,     0,     0,     0,     0,    59,     0,
      60,    61,    62,     0,    63,     0,     0,    64,     0,     0,
       0,    65,    66,    67,     0,    68,    69,     0,    70,    71,
       0,    72,     0,    73,    74,    75,     0,     0,     0,    76,
       0,     0,    77,    78,    79,     0,     0,    80,    81,    82,
       0,    83,     0,     0,     0,    28,    84,     0,    85,    86,
       0,     0,     0,    87,    88,    89,   309,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,     0,     0,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,     0,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,    59,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,     0,    72,     0,    73,    74,    75,     0,     0,     0,
      76,     0,     0,    77,    78,    79,     0,     0,    80,    81,
      82,     0,    83,     0,     0,     0,    28,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,   377,     0,     0,
       0,    29,     0,    30,    31,     0,     0,    32,     0,     0,
       0,     0,    33,     0,     0,    34,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    37,    38,    39,
       0,    40,     0,     0,     0,     0,    41,     0,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,    45,    46,     0,     0,    47,     0,
      48,     0,    49,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,    52,     0,     0,    53,    54,    55,
      56,     0,    57,    58,     0,     0,     0,     0,     0,     0,
      59,     0,    60,    61,    62,     0,    63,     0,     0,    64,
       0,     0,     0,    65,    66,    67,     0,    68,    69,     0,
      70,    71,     0,    72,     0,    73,    74,    75,     0,     0,
       0,    76,     0,     0,    77,    78,    79,     0,     0,    80,
      81,    82,     0,    83,     0,     0,     0,    28,    84,     0,
      85,    86,     0,     0,     0,    87,    88,    89,   384,     0,
       0,     0,    29,     0,    30,    31,     0,     0,    32,     0,
       0,     0,     0,    33,     0,     0,    34,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      39,     0,    40,     0,     0,     0,     0,    41,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,    46,     0,     0,    47,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,     0,     0,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,    59,     0,    60,    61,    62,     0,    63,     0,     0,
      64,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    70,    71,     0,    72,     0,    73,    74,    75,     0,
       0,     0,    76,     0,     0,    77,    78,    79,     0,     0,
      80,    81,    82,     0,    83,    28,     0,     0,     0,    84,
       0,    85,    86,     0,   479,     0,    87,    88,    89,     0,
      29,     0,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,     0,     0,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,     0,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,    59,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,     0,    72,     0,    73,    74,    75,     0,     0,     0,
      76,     0,     0,    77,    78,    79,     0,     0,    80,    81,
      82,     0,    83,    28,     0,     0,     0,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,     0,    29,     0,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
       0,     0,    34,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,     0,    40,     0,
       0,     0,     0,    41,     0,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    45,    46,     0,     0,    47,     0,    48,     0,    49,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,     0,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,    59,     0,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    70,    71,     0,
      72,     0,    73,    74,    75,     0,     0,     0,    76,     0,
       0,    77,    78,    79,     0,     0,    80,    81,    82,     0,
      83,    28,     0,     0,     0,    84,     0,    85,    86,     0,
       0,     0,    87,    88,    89,     0,    29,     0,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,     0,     0,
      34,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,     0,    40,     0,     0,     0,
       0,    41,     0,     0,     0,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,    45,
      46,     0,     0,    47,     0,    48,     0,    49,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,    52,
       0,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,     0,    59,     0,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,     0,    65,    66,
      67,     0,    68,    69,     0,    96,    71,     0,    72,     0,
      73,    74,    75,     0,     0,     0,    76,     0,     0,    77,
      78,    79,     0,     0,    80,    81,    82,     0,    83,     0,
       0,     0,     0,    84,     0,    85,    86,     0,     0,     0,
      87,    88,    89
};

static const yytype_int16 yycheck[] =
{
       5,     6,   175,   112,   171,   195,   106,   107,   108,     0,
       1,   456,   273,   458,   187,    13,   231,    16,    23,    24,
      12,    67,   524,    13,   239,   198,    13,    13,    12,   240,
      13,    13,    73,    13,     8,    34,    34,    16,    37,    37,
      12,   231,    13,    13,     5,     6,    22,    34,    34,   239,
      37,    37,    19,   114,    34,    34,    12,    37,    37,   464,
     371,   372,    23,    24,    12,   273,   673,    34,    20,    34,
      37,    12,    37,    38,    12,    12,    34,   112,    87,    37,
      12,    12,    34,   273,   145,    37,    12,    12,   261,   123,
      12,    96,    14,   354,     5,    34,   263,   131,    37,    34,
     361,   708,    37,    12,    80,   151,     0,    59,    13,    57,
      64,   102,    23,    24,    15,   326,    34,    93,   165,    37,
     335,   112,   624,    85,    56,   627,   341,     4,     5,     6,
       7,     8,   106,    10,    82,    96,     6,   142,    34,     9,
     545,    37,    31,   114,   179,   335,   354,    65,    37,   115,
      91,   341,   654,    91,    13,   160,    13,   162,   163,    60,
      91,    18,    67,   135,   354,    14,    91,   478,   173,   161,
     162,   361,    49,   172,   172,   365,   166,   161,   162,    56,
      85,   142,   173,   166,   166,   172,   172,   135,   179,   180,
     195,   406,   172,   172,   696,   200,   166,   202,   135,   160,
     156,   162,   163,   135,   152,   172,    96,   172,   166,   135,
      71,   472,   173,   161,   172,   156,   406,   222,   156,    71,
     172,   226,   154,   668,   161,   156,   399,   166,   154,   161,
      12,   156,    14,   172,   195,   161,   106,   172,    32,   200,
     149,   202,    36,   100,     6,   137,   151,     9,   357,     4,
       5,     6,     7,     8,   172,    10,    34,   153,    47,    37,
     121,   222,   133,   134,   166,   226,   196,    22,   273,   121,
     275,    12,   162,   150,   464,   280,   172,    27,    49,    32,
     160,   714,   472,    36,   195,    74,    38,    65,    40,    53,
      98,   202,    81,   223,    49,    12,    12,    14,   303,    53,
      89,    56,   735,    92,   309,    76,   311,   474,   313,    12,
      12,    14,   273,   102,   275,    79,   110,    30,    31,   280,
       5,     6,    75,    12,    12,    79,    14,   169,   170,   320,
     763,   161,   162,    97,   105,    99,    12,    90,    23,    24,
     129,    94,   303,    97,   349,    99,   351,   218,   309,   354,
     311,   362,   313,   364,    12,   545,   361,   110,    12,   167,
     365,    12,   273,   354,    74,   173,   174,   168,   169,   374,
     134,    81,   377,   473,   379,   146,   543,   166,   383,   384,
     134,    73,    92,   166,   161,   162,    12,    47,   349,   168,
     351,    19,    12,   354,   172,   150,    12,    12,   154,   163,
     361,    13,    13,     5,   365,    13,    13,   172,   159,   163,
      13,    96,    13,   374,    74,    14,   377,   166,   379,   129,
     166,    81,   383,   384,    12,    16,    47,   166,   433,    89,
     114,    88,    92,    13,    13,   544,   603,    62,   349,    13,
     351,    76,   102,   354,    13,    13,   118,    14,    38,    12,
     361,    38,   112,    74,   365,    13,    89,   142,    63,   464,
      81,   117,    89,    27,    78,    14,    14,   472,    89,   129,
       8,    92,    91,    12,   479,   160,    12,   162,   163,   484,
     485,   102,    12,    12,   122,   490,    12,    12,   173,    12,
      12,    12,    37,   153,    13,   604,    89,    14,    13,   109,
       5,   674,     5,   464,    12,   109,     5,     5,   129,   109,
     195,   472,    12,     5,     6,   200,     5,   202,   479,     5,
       5,   526,    12,   484,   485,   149,     5,   109,    12,   490,
       5,    23,    24,     5,   147,     5,     5,   222,   147,    12,
     545,   226,   137,   119,     5,    13,    12,    14,   553,   147,
     147,    22,   557,   464,    13,    13,    12,     5,    13,    12,
       5,   472,    13,    34,    13,   526,    37,    38,    39,    40,
      41,    42,    43,   578,     5,     5,    12,     5,   109,    12,
       5,    13,     5,    12,   545,   138,    13,    13,   273,    13,
     275,   164,   553,   164,   599,   280,   557,    13,   164,   164,
      13,     5,    13,    13,    96,   166,    27,     5,     5,    80,
     615,   616,    12,     5,    13,   526,    12,    88,   303,    13,
      13,     5,    93,    13,   309,     5,   311,   133,   313,   149,
      13,    12,   164,   147,   545,   106,    13,    13,   599,    13,
      13,    13,     5,     5,   121,    13,    13,    13,    13,    13,
     142,   147,   147,   147,   615,   616,    13,    13,    13,   121,
     164,    68,   164,   164,   349,   130,   351,    16,   160,   354,
     162,   163,   116,   130,    21,   680,   361,   307,    47,   170,
     365,   173,   102,   612,    27,   316,   179,   197,   599,   374,
     313,   365,   377,   363,   379,   166,   701,   204,   383,   384,
     171,   172,   406,   195,   217,    74,   393,   325,   200,   265,
     202,   479,    81,   714,   763,   212,   636,   200,   280,   680,
      89,   275,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,
     222,    -1,    -1,   102,   226,    -1,    -1,    -1,    -1,    -1,
     701,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    34,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,   120,    -1,   464,
      -1,   273,    -1,   275,   153,    -1,    -1,   472,   280,    -1,
     701,    -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,   484,
     485,    -1,    -1,    -1,    -1,   490,    -1,    -1,    -1,    -1,
      80,   303,    -1,    -1,    -1,    -1,   159,   309,    88,   311,
      -1,   313,    -1,    93,   167,    -1,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,   526,    -1,   186,    -1,   188,    -1,    -1,   191,    -1,
      -1,    -1,    -1,    -1,   197,    -1,    -1,   349,    -1,   351,
     545,    -1,   354,    -1,    -1,    -1,    -1,    -1,   553,   361,
      -1,    -1,   557,   365,    -1,   145,   219,    -1,   221,    -1,
      -1,    -1,   374,    -1,    -1,   377,    -1,   379,    -1,    -1,
      -1,   383,   384,    -1,    -1,   238,    -1,   240,    -1,    -1,
      -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   599,    -1,    -1,    -1,    -1,    -1,
     263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     615,   616,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    -1,    -1,   300,    -1,    -1,
      -1,    -1,    -1,    -1,   307,   308,    -1,    -1,    -1,    -1,
      -1,    -1,   464,   316,    -1,    -1,    -1,   320,    -1,    -1,
     472,    -1,   325,   326,    -1,   328,    -1,   479,    -1,    -1,
      -1,    80,   484,   485,   337,   680,    -1,   340,   490,    88,
      -1,    -1,    -1,   346,    93,    -1,    -1,    -1,    -1,    -1,
     353,    -1,    -1,    -1,    -1,    -1,   701,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   526,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   545,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   553,   405,    -1,   407,   557,    -1,    -1,    -1,    -1,
      -1,    -1,   415,   416,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   599,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   615,   616,    -1,    -1,    -1,    -1,    -1,
      -1,   474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,
      -1,    -1,   495,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,   680,    32,
      -1,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
     543,    44,    45,    46,   547,    48,    -1,    -1,    -1,   701,
      53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,   562,
     563,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    -1,
      -1,    94,    95,    96,    97,    -1,    99,   100,    -1,    -1,
     603,    -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,
      -1,   124,   125,    -1,   127,   128,    -1,   130,    -1,   132,
     133,   134,    -1,    -1,    -1,   138,    -1,    -1,   141,   142,
     143,    -1,    -1,   146,   147,   148,    -1,   150,    -1,    -1,
      -1,    -1,   155,    -1,   157,   158,    -1,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
     673,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,   708,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    48,    -1,    50,    51,
      -1,    53,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      92,    -1,    94,    95,    96,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,
     122,    -1,   124,   125,    -1,   127,   128,   129,   130,    -1,
     132,   133,   134,   135,   136,    -1,   138,    -1,    -1,   141,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,    -1,
      -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,   161,
     162,   163,   164,    -1,    -1,    -1,    -1,   169,   170,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    48,    -1,    50,    51,    -1,    53,
      -1,    -1,    56,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,
     124,   125,    -1,   127,   128,   129,   130,    -1,   132,   133,
     134,    -1,   136,    -1,   138,    -1,    -1,   141,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,    -1,    -1,    -1,
      -1,   155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,
     164,    -1,    -1,   167,    -1,   169,   170,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    17,    18,    -1,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    50,    51,    -1,    53,    -1,    -1,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,
      -1,   127,   128,   129,   130,    -1,   132,   133,   134,    -1,
     136,    -1,   138,    -1,   140,   141,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,    -1,    -1,    -1,    -1,   155,
      -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,    -1,   169,   170,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    50,    51,    -1,    53,    -1,    -1,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,   129,   130,    -1,   132,   133,   134,   135,   136,    -1,
     138,    -1,    -1,   141,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,    -1,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    -1,   161,   162,   163,   164,    -1,    -1,    -1,
      -1,   169,   170,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      50,    51,    -1,    53,    -1,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    92,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,    -1,   127,   128,   129,
     130,    -1,   132,   133,   134,   135,   136,    -1,   138,    -1,
      -1,   141,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,    -1,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,
      -1,   161,   162,   163,   164,    -1,    -1,    -1,    -1,   169,
     170,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    48,    -1,    50,    51,
      -1,    53,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      92,    -1,    94,    95,    96,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,
     122,    -1,   124,   125,    -1,   127,   128,   129,   130,    -1,
     132,   133,   134,    -1,   136,    -1,   138,    -1,    -1,   141,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,    -1,
      -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,    -1,
     162,   163,   164,    -1,    -1,    -1,    -1,   169,   170,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    48,    -1,    50,    51,    -1,    53,
      -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,
     124,   125,    -1,   127,   128,   129,   130,    -1,   132,   133,
     134,    -1,   136,    -1,   138,    -1,    -1,   141,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,    -1,    -1,    -1,
      -1,   155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,
     164,    -1,    -1,   167,    -1,   169,   170,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    50,    51,    -1,    53,    -1,    -1,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,
      -1,   127,   128,   129,   130,    -1,   132,   133,   134,    -1,
     136,    -1,   138,    -1,    -1,   141,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,    -1,    -1,    -1,    -1,   155,
      -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,
      -1,    -1,    -1,   169,   170,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    50,    51,    -1,    53,    -1,    -1,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,   129,   130,    -1,   132,   133,   134,    -1,   136,    -1,
     138,    -1,    -1,   141,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,    -1,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
      -1,   169,   170,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      50,    51,    -1,    53,    -1,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    92,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,    -1,   127,   128,   129,
     130,    -1,   132,   133,   134,    -1,   136,    -1,   138,    -1,
      -1,   141,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,    -1,    -1,    -1,    -1,   155,     3,   157,   158,    -1,
      -1,    -1,   162,   163,   164,    -1,    -1,    14,    -1,   169,
     170,    18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,
      97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,
     127,   128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,
      -1,   138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,
     147,   148,    -1,   150,    -1,    -1,    -1,     3,   155,    -1,
     157,   158,    -1,    -1,    -1,   162,   163,   164,    14,    -1,
     167,    -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,
      -1,   127,   128,    -1,   130,    -1,   132,   133,   134,    -1,
      -1,    -1,   138,    -1,    -1,   141,   142,   143,    -1,    -1,
     146,   147,   148,    -1,   150,     3,    -1,    -1,    -1,   155,
      -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,
      18,   167,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,
     138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,
     148,    -1,   150,     3,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    -1,    18,   167,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    -1,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,    -1,   127,   128,    -1,
     130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,    -1,
      -1,   141,   142,   143,    -1,    -1,   146,   147,   148,    -1,
     150,     3,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,
      -1,    -1,   162,   163,   164,    -1,    18,   167,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      -1,    -1,    94,    95,    96,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,
     122,    -1,   124,   125,    -1,   127,   128,    -1,   130,    -1,
     132,   133,   134,    -1,    -1,    -1,   138,    -1,    -1,   141,
     142,   143,    -1,    -1,   146,   147,   148,    -1,   150,     3,
      -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,    -1,
     162,   163,   164,    -1,    18,   167,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    -1,    -1,
      94,    95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,
     124,   125,    -1,   127,   128,    -1,   130,    -1,   132,   133,
     134,    -1,    -1,    -1,   138,    -1,    -1,   141,   142,   143,
      -1,    -1,   146,   147,   148,    -1,   150,     3,    -1,    -1,
      -1,   155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,
     164,    -1,    18,   167,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,
      -1,   127,   128,    -1,   130,    -1,   132,   133,   134,    -1,
      -1,    -1,   138,    -1,    -1,   141,   142,   143,    -1,    -1,
     146,   147,   148,    -1,   150,     3,    -1,    -1,    -1,   155,
      -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,
      18,   167,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,
     138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,
     148,    -1,   150,     3,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    -1,    18,   167,
      20,    21,    -1,    23,    24,    25,    26,    -1,    -1,    29,
      30,    31,    32,    33,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    58,    59,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    83,    84,    -1,    86,    -1,    -1,    -1,
      90,    91,    -1,    -1,    94,    95,    96,    97,    -1,    99,
     100,   101,    -1,   103,   104,    -1,    -1,   107,   108,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,   126,   127,   128,    -1,
     130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,   139,
      -1,   141,   142,   143,    -1,    -1,   146,   147,   148,    -1,
     150,     3,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,
      12,    -1,   162,   163,   164,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      -1,    -1,    94,    95,    96,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,
     122,    -1,   124,   125,    -1,   127,   128,    -1,   130,    -1,
     132,   133,   134,   135,    -1,    -1,   138,    -1,    -1,   141,
     142,   143,    -1,    -1,   146,   147,   148,    -1,   150,     3,
      -1,    -1,    -1,   155,    -1,   157,   158,    -1,    12,   161,
     162,   163,   164,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    -1,    -1,
      94,    95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,
     124,   125,    -1,   127,   128,    -1,   130,    -1,   132,   133,
     134,   135,    -1,    -1,   138,    -1,    -1,   141,   142,   143,
      -1,    -1,   146,   147,   148,    -1,   150,     3,     4,    -1,
      -1,   155,    -1,   157,   158,    -1,    -1,   161,   162,   163,
     164,    -1,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,
      -1,   127,   128,    -1,   130,    -1,   132,   133,   134,    -1,
      -1,    -1,   138,    -1,    -1,   141,   142,   143,    -1,    -1,
     146,   147,   148,    -1,   150,    -1,    -1,    -1,     3,   155,
      -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,    14,
      -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,
      95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,
     125,    -1,   127,   128,    -1,   130,    -1,   132,   133,   134,
      -1,    -1,    -1,   138,    -1,    -1,   141,   142,   143,    -1,
      -1,   146,   147,   148,    -1,   150,     3,    -1,    -1,    -1,
     155,    -1,   157,   158,    -1,    12,    -1,   162,   163,   164,
      -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,
      97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,
     127,   128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,
      -1,   138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,
     147,   148,    -1,   150,     3,     4,    -1,    -1,   155,    -1,
     157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,    18,
      -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    -1,    -1,    94,    95,    96,    97,    -1,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,   120,   121,   122,    -1,   124,   125,    -1,   127,   128,
      -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,
      -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,   148,
      -1,   150,    -1,    -1,    -1,     3,   155,    -1,   157,   158,
      -1,    -1,    -1,   162,   163,   164,    14,    -1,    -1,    -1,
      18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,
     138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,
     148,    -1,   150,    -1,    -1,    -1,     3,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    14,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,
      97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,
     127,   128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,
      -1,   138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,
     147,   148,    -1,   150,    -1,    -1,    -1,     3,   155,    -1,
     157,   158,    -1,    -1,    -1,   162,   163,   164,    14,    -1,
      -1,    -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,
      -1,   127,   128,    -1,   130,    -1,   132,   133,   134,    -1,
      -1,    -1,   138,    -1,    -1,   141,   142,   143,    -1,    -1,
     146,   147,   148,    -1,   150,     3,    -1,    -1,    -1,   155,
      -1,   157,   158,    -1,    12,    -1,   162,   163,   164,    -1,
      18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,
     138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,
     148,    -1,   150,     3,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    -1,    18,    -1,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    -1,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,    -1,   127,   128,    -1,
     130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,    -1,
      -1,   141,   142,   143,    -1,    -1,   146,   147,   148,    -1,
     150,     3,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,
      -1,    -1,   162,   163,   164,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      -1,    -1,    94,    95,    96,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,
     122,    -1,   124,   125,    -1,   127,   128,    -1,   130,    -1,
     132,   133,   134,    -1,    -1,    -1,   138,    -1,    -1,   141,
     142,   143,    -1,    -1,   146,   147,   148,    -1,   150,    -1,
      -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,    -1,
     162,   163,   164
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    12,    57,    82,   135,   152,   161,   176,   177,   178,
     179,   180,   181,   184,   185,   188,   189,   190,   191,   192,
     197,   209,   189,    73,    87,    15,    60,   215,     3,    18,
      20,    21,    24,    29,    32,    35,    36,    44,    45,    46,
      48,    53,    58,    59,    68,    71,    72,    75,    77,    79,
      86,    90,    91,    94,    95,    96,    97,    99,   100,   107,
     109,   110,   111,   113,   116,   120,   121,   122,   124,   125,
     127,   128,   130,   132,   133,   134,   138,   141,   142,   143,
     146,   147,   148,   150,   155,   157,   158,   162,   163,   164,
     224,   266,   268,   296,   314,   315,   127,   210,   211,   314,
       0,    64,   165,   115,   203,   204,    67,   151,    85,   190,
      13,   224,   224,     4,     5,     6,     7,     8,    10,    12,
      28,    29,    35,    44,    50,    51,    56,    92,   107,   129,
     136,   144,   167,   169,   170,   193,   194,   196,   216,   217,
     223,   224,   244,   245,   246,   247,   248,   249,   258,   259,
     264,   265,   266,   267,   268,   284,   285,   296,   314,   137,
      14,   210,   166,    12,   212,   213,   177,    27,   215,   215,
     215,   160,   198,    12,    56,   154,   182,   183,   188,   213,
      12,   189,   244,   250,   244,   260,    12,    12,    12,    12,
      12,    12,    12,   248,   248,    73,   199,   166,    12,     4,
      19,    34,    37,   172,   254,   310,   311,   312,   313,   314,
     169,   170,   256,    98,   167,   173,   174,   257,   168,    12,
      12,    12,    14,   186,   187,   244,    14,   314,   210,   214,
     314,    19,   205,   206,   244,   191,   191,   192,    12,    69,
     106,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   154,   250,   183,   188,   189,
      13,   166,    13,   159,   261,   262,   244,   250,   244,     5,
      13,   244,    13,    12,   194,   195,   218,   219,   220,   221,
     224,   225,   226,   227,   228,   198,   216,    13,   250,   312,
     224,   172,   245,   246,   247,   248,    15,    60,   167,   244,
     308,    13,   244,    14,   167,   314,   198,   166,    38,    14,
     314,    14,    13,   166,    12,   195,   166,    20,    59,   207,
      12,   231,   244,   195,   233,   114,    16,    88,    22,    38,
      39,    40,    41,    42,    43,    80,    88,    93,   106,   171,
     253,   255,    13,   250,   231,   244,    62,   263,   261,    19,
      13,   153,    13,   166,    12,   219,   225,   311,    47,    74,
      81,    89,    92,   102,   129,   166,   229,   310,    76,   200,
      13,    13,    13,   244,   118,   269,    13,    14,   314,    14,
     186,   244,   314,    14,    14,   314,   214,   205,    13,   232,
     233,     6,     9,   106,   252,   244,    38,    38,    40,    12,
     195,   251,     8,   106,   244,    22,    80,    93,    38,    15,
      17,   140,   244,   309,   195,   145,   145,   244,    63,    23,
      24,    25,    26,    30,    31,    33,    52,    54,    55,    61,
      70,    83,    84,    86,   101,   103,   104,   108,   126,   128,
     139,   147,   148,   155,   224,   286,   287,   288,   289,   290,
     291,   297,   298,   299,   300,   301,   302,   303,   304,   224,
     244,    13,   213,   222,    89,   117,   230,   219,   230,   229,
     230,   218,    89,    27,    78,   208,   269,   269,    13,    12,
     270,   271,   314,   314,    14,    14,   167,   314,   314,   314,
      14,   252,    16,   250,     8,    65,   244,   251,   244,   244,
     244,    91,    12,    12,    91,   156,    12,    91,   156,    12,
      12,    12,   122,    12,   134,   292,   293,   295,   296,    30,
      31,    12,    91,   156,    12,    12,    12,    12,   161,   162,
      12,   161,   162,    12,    13,    18,   100,    31,   313,   313,
      13,    13,   220,   112,   153,    89,   219,   215,   231,   269,
     271,   272,   273,    14,   167,   314,   314,    14,   314,   244,
      13,   244,    16,    65,   109,     5,     5,   109,    12,     5,
     109,    12,     5,   305,     5,     5,     5,    12,   149,    12,
      12,   156,    12,    91,   156,     5,   109,    12,   305,     5,
     224,     5,   147,   147,     5,   147,   147,     5,    12,   137,
     231,   213,   220,   112,   153,    12,    77,   201,   202,   244,
      13,   119,   274,   167,   314,    14,    14,   167,   314,   244,
     244,    12,    13,    13,    12,     5,    13,    12,     5,    32,
      36,    75,    90,    94,   110,   306,   307,    13,    13,   166,
      13,   166,    13,     5,   134,   294,   296,     5,     5,    12,
       5,   109,    12,    13,    12,     5,    13,    13,   166,    13,
      13,   164,   164,    13,   164,   164,    13,     5,   224,   231,
     213,    13,   138,   166,    27,   203,   167,   314,   167,   314,
      14,     5,   305,    13,   305,    13,   306,     5,     5,    13,
     166,    12,    13,    13,     5,    13,    12,     5,   305,    13,
       5,   133,   161,   162,   161,   162,    13,   313,    12,   201,
     250,   123,   131,   275,   276,   167,   314,    13,    13,    13,
      13,    13,     5,     5,    13,   305,    13,    13,    13,   224,
     147,   147,   147,   147,   201,    22,    49,   150,   258,   277,
     278,   279,   280,    13,    13,    13,   164,   164,   164,   164,
      13,   150,   258,   278,   281,   282,   130,   121,   121,    68,
     283,    71,    71,    16,    49,    76,   105,   146,   281,   130,
     116
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   175,   176,   177,   177,   178,   178,   178,   179,   180,
     180,   180,   181,   182,   182,   182,   182,   182,   183,   184,
     185,   186,   186,   187,   188,   189,   189,   190,   190,   190,
     191,   191,   192,   192,   193,   194,   195,   196,   197,   198,
     198,   199,   200,   200,   201,   201,   202,   202,   202,   203,
     203,   204,   205,   205,   206,   207,   207,   207,   208,   208,
     209,   209,   210,   210,   211,   212,   212,   213,   214,   214,
     215,   215,   215,   216,   216,   217,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   224,   224,   224,   224,   224,   224,
     224,   224,   225,   225,   225,   226,   226,   226,   226,   227,
     228,   229,   229,   229,   229,   230,   230,   231,   231,   232,
     232,   233,   233,   234,   234,   234,   235,   235,   236,   236,
     236,   236,   236,   236,   236,   237,   238,   239,   239,   240,
     240,   240,   240,   241,   241,   242,   242,   243,   244,   244,
     244,   245,   245,   246,   246,   247,   247,   248,   248,   248,
     249,   249,   249,   249,   249,   249,   250,   250,   251,   251,
     252,   252,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   254,   254,   255,   256,   256,   257,   257,   257,
     257,   258,   258,   258,   258,   258,   258,   258,   259,   260,
     260,   261,   261,   262,   262,   263,   263,   264,   264,   264,
     264,   265,   265,   265,   265,   265,   265,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   267,   268,   268,
     268,   268,   268,   269,   269,   270,   271,   272,   273,   273,
     274,   274,   275,   275,   276,   276,   277,   277,   278,   278,
     278,   279,   280,   281,   281,   281,   282,   283,   283,   283,
     283,   283,   284,   284,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   286,   286,   286,   286,
     287,   288,   289,   289,   289,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   291,   292,   292,   293,
     293,   294,   294,   294,   295,   295,   295,   295,   295,   296,
     296,   296,   296,   296,   297,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   299,   299,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   301,   301,   301,   301,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   303,   303,
     303,   303,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   305,   305,   305,
     305,   306,   306,   306,   307,   307,   307,   308,   308,   309,
     309,   309,   310,   310,   311,   311,   312,   312,   313,   314,
     314,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     2,     1,     2,     2,     4,
       5,     1,     3,     3,     2,     1,     2,     1,     4,     4,
       1,     4,     1,     3,     3,     1,     1,     1,     7,     0,
       2,     2,     0,     4,     1,     3,     2,     1,     5,     0,
       1,     3,     1,     3,     2,     0,     1,     1,     0,     2,
       2,     3,     1,     3,     4,     0,     1,     3,     1,     3,
       0,     1,     1,     1,     3,     2,     1,     1,     3,     1,
       1,     1,     3,     2,     3,     0,     1,     1,     3,     3,
       5,     5,     7,     7,     6,     6,     9,     9,     8,     8,
       8,     8,     7,     7,     1,     3,     5,     4,     7,     6,
       6,     5,     1,     1,     1,     6,     5,     6,     5,     4,
       5,     2,     2,     2,     1,     0,     1,     1,     3,     1,
       3,     1,     2,     1,     3,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     5,     6,     3,
       5,     4,     6,     3,     4,     3,     4,     2,     1,     2,
       3,     1,     3,     1,     3,     1,     3,     1,     2,     2,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     0,
       1,     1,     2,     4,     4,     0,     2,     1,     1,     1,
       1,     5,     4,     6,     5,     5,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     2,     2,     3,     1,     4,     0,     1,
       0,     3,     0,     3,     1,     1,     1,     1,     2,     2,
       1,     2,     4,     1,     2,     1,     2,     0,     3,     2,
       2,     3,     3,     4,     4,     3,     3,     6,     6,     4,
       1,     4,     1,     6,     1,     1,     1,     1,     1,     1,
       1,     6,     5,     2,     2,     5,     4,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     4,
       1,     1,     4,     1,     4,     1,     6,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     7,     7,     4,     4,
       4,     7,     7,     4,     4,     4,     1,     1,     6,     4,
       6,     4,     6,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     1,     1,     4,     4,     5,     5,     4,
       6,     3,     6,     3,     4,     1,     1,     1,     6,     3,
       4,     1,     5,     2,     5,     2,     4,     6,     6,     5,
       7,     4,     6,     3,     4,     1,     1,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2968 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2974 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2980 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2986 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2992 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2998 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3004 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3010 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 176: /* sql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3016 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 177: /* stmt_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3022 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 178: /* stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3028 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* dql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3034 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* dml_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3040 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* insert_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3046 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* insert_columns_and_source  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3052 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* from_constructor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3058 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* delete_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3064 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* update_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3070 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* update_elem_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3076 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* update_elem  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3082 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* select_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3088 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* query_expression  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3094 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* query_expression_body  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3100 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* query_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3106 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* query_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3112 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* select_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3118 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* subquery  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3124 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* table_subquery  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3130 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* row_subquery  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3136 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* simple_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3142 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* opt_where  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3148 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* opt_from_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3154 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_groupby  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3160 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* grouping_element_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3166 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* grouping_element  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3172 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3178 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3184 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* sort_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3190 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* sort_key  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3196 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_asc_desc  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3202 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_having  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3208 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* with_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3214 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* with_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3220 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* common_table_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3226 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_derived_column_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3232 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3238 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* simple_ident_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3244 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_distinct  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3250 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* select_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3256 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* projection  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3262 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* from_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3268 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* table_reference  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3274 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* table_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3280 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* table_primary_non_join  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3286 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* opt_simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3292 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* column_ref  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3298 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* relation_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3304 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* joined_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3310 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* qualified_join  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3316 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* cross_join  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3322 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* natural_join  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3328 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* join_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3334 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* search_condition  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3340 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* boolean_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3346 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* boolean_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3352 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* boolean_test  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3358 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* boolean_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3364 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3370 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* comparison_predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3376 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* quantified_comparison_predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3382 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* between_predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3388 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* like_predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3394 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* in_predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3400 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* null_predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3406 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* exists_predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3412 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* row_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3418 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* factor0  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3424 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* factor1  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3430 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* factor2  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3436 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* factor3  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3442 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* factor4  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3448 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* row_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3454 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* in_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3460 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* truth_value  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3466 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* expr_const  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3472 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* case_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3478 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 260: /* case_arg  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3484 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 261: /* when_clause_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3490 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 262: /* when_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3496 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 263: /* case_default  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3502 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 264: /* func_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3508 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 265: /* aggregate_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3514 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 266: /* aggregate_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3520 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 267: /* ranking_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3526 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 268: /* ranking_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3532 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 269: /* over_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3538 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 270: /* window_specification  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3544 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 271: /* window_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3550 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 272: /* window_specification_details  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3556 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 273: /* opt_existing_window_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3562 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 274: /* opt_window_partition_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3568 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 275: /* opt_window_frame_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3574 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 276: /* window_frame_units  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3580 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 277: /* window_frame_extent  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3586 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 278: /* window_frame_start  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3592 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 279: /* window_frame_preceding  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3598 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 280: /* window_frame_between  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3604 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 281: /* window_frame_bound  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3610 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 282: /* window_frame_following  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3616 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 283: /* opt_window_frame_exclusion  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3622 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 284: /* scalar_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3628 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 285: /* function_call_keyword  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3634 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 286: /* data_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3640 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 287: /* user_defined_type_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3646 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 288: /* reference_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3652 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 289: /* collection_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3658 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 290: /* predefined_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3664 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 291: /* interval_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3670 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 292: /* interval_qualifier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3676 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 293: /* start_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3682 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 294: /* end_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3688 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 295: /* single_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3694 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 296: /* non_second_primary_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3700 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* boolean_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3706 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* datetime_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3712 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3718 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* exact_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3724 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* approximate_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3730 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3736 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 303: /* binary_large_object_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3742 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 304: /* national_character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3748 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 305: /* large_object_length  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3754 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 306: /* char_length_units  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3760 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 307: /* multiplier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3766 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 308: /* distinct_or_all  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3772 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 310: /* opt_as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3778 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 311: /* as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3784 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 312: /* label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3790 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 313: /* collate_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3796 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 314: /* name_r  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3802 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 315: /* reserved  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3808 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
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
#line 64 "./sqlparser_sql2003.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 3925 "sqlparser_sql2003_bison.cpp" /* yacc.c:1429  */
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
#line 230 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 4119 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 241 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 4128 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 248 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4134 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 265 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT, E_INSERT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERT_SERIALIZE_FORMAT;
}
#line 4143 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 273 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4152 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 278 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4161 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 283 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4170 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 288 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4179 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 293 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* src = Node::makeTerminalNode(E_IDENTIFIER, "DEFAULT VALUES");
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, src);
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4189 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 302 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_VALUES_CTOR, E_VALUES_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 4198 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 311 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4215 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 328 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4233 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 346 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4242 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 354 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4251 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 363 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_DIRECT_SELECT_ORDER, (yyvsp[0].node));
}
#line 4260 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 371 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 4269 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 376 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 4278 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 384 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4308 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 410 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4338 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 440 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
                        nullptr,             /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    (yyval.node)->serialize_format = &SELECT_INTERSECT_SERIALIZE_FORMAT;
}
#line 4368 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 470 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].node)->getChild(E_DIRECT_SELECT_WITH)) {
	yyerror(&(yylsp[-2]), result, scanner, "error use common table expression");
	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node)->getChild(E_DIRECT_SELECT_SELECT_CLAUSE));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
    (yyvsp[-1].node)->setChild(E_DIRECT_SELECT_SELECT_CLAUSE, nullptr);
    delete((yyvsp[-1].node));
}
#line 4383 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 485 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4392 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 499 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                    (yyvsp[-5].node),             /* E_SELECT_DISTINCT 0 */
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
                    nullptr,        /* E_SELECT_HINTS 13 */
                    nullptr,        /* E_SELECT_WHEN 14 */
                    nullptr,        /* E_SELECT_OPT_TOP 15 */
                    nullptr,        /* E_SELECT_OPT_WITH 16 */
                    nullptr,        /* E_SELECT_OPT_OPTION 17 */
	            nullptr         /* E_SELECT_OPT_INTO 18 */
                    );
    (yyval.node)->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
#line 4421 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 526 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4427 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 528 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4436 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 537 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4445 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 544 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4451 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 546 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4460 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 555 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4469 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 562 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"()"); }
#line 4475 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 565 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING SETS");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4486 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 574 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4492 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 580 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4501 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 589 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4510 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 597 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4519 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 605 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4527 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 609 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4535 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 613 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4543 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 619 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4549 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 621 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4558 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 631 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4567 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 636 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 4576 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 645 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4585 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 654 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4594 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 661 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4600 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 667 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4609 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 676 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4618 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 683 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4624 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 685 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4632 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 689 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4640 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 697 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4649 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 705 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[0].node)) {
    	(yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, (yyvsp[-1].node));
    	(yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
    }
    else {
	Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
        alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

        (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
        (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
    }
}
#line 4667 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 719 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4677 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 729 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4686 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 743 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4695 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 755 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4704 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 760 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4713 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 767 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4719 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 774 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4729 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 780 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4739 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 786 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4750 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 793 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4760 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 799 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 806 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4781 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 812 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4792 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 819 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4802 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 825 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4813 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 832 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4823 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 838 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4834 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 845 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4844 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 851 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4855 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 858 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4865 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 864 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4876 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 871 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4886 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 877 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4897 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 888 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4906 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 893 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4915 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 898 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4924 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 903 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4933 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 908 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4942 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 913 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4951 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 918 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4960 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 923 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4969 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 938 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4978 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 943 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4988 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 949 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4997 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 954 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 5007 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 963 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 5017 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 972 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + (yyvsp[-2].node)->text());
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 5027 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 981 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL");
    }
}
#line 5042 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 992 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT");
    }
}
#line 5057 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1003 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT");
    }
}
#line 5072 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1014 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 5080 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1020 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1021 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 5092 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1028 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_OR);
}
#line 5101 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1037 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_AND);
}
#line 5110 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1046 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT);
}
#line 5119 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1055 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 5128 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1060 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 5137 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1069 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5146 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1097 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5155 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1105 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5164 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1113 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_BTW);
}
#line 5173 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1118 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_BTW);
}
#line 5182 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1126 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 5191 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1131 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 5200 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1136 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 5209 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1141 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 5218 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1149 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IN);
}
#line 5227 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1154 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_IN);
}
#line 5236 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1162 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 5245 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1167 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 5254 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1175 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_EXISTS);
}
#line 5263 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1185 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 5272 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1190 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5281 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1199 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1208 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5299 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1217 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POW);
}
#line 5308 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1226 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POS);
}
#line 5317 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1231 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NEG);
}
#line 5326 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1242 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5335 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1253 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5344 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1262 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5353 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1272 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 5359 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1273 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LT; }
#line 5365 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1274 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 5371 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1275 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GT; }
#line 5377 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1276 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_EQ; }
#line 5383 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1277 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5389 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1278 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 5395 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1279 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 5401 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1280 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5407 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1281 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5413 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1285 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_CNN; }
#line 5419 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1286 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_CNN; }
#line 5425 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1292 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.nodetype) = Node::comp_all_some_any_op_form((yyvsp[-1].nodetype), (yyvsp[0].ival));
}
#line 5433 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1298 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_ADD; }
#line 5439 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1299 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MINUS; }
#line 5445 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1303 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MUL; }
#line 5451 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1304 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_DIV; }
#line 5457 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1305 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_REM; }
#line 5463 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1306 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MOD; }
#line 5469 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1316 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5475 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1322 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_CASE);
}
#line 5484 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1329 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5490 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1336 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SPACE_LIST_SERIALIZE_FORMAT;
}
#line 5499 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1344 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5508 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1349 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5517 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1356 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5523 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1358 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5532 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1375 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5542 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1381 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5552 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1387 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5562 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1393 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5572 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1399 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if (!Node::CHECK_FUNCTION_CALL_WITH_STAR((yyvsp[-4].node)))
    {
        yyerror(&(yylsp[-4]), result, scanner, "error use *");
        YYABORT;
    }
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), star, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5588 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1411 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if (!Node::CHECK_FUNCTION_CALL_WITH_STAR((yyvsp[-3].node)))
    {
        yyerror(&(yylsp[-3]), result, scanner, "error use *");
        YYABORT;
    }
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5604 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1425 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "AVG"); }
#line 5610 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1426 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MAX"); }
#line 5616 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1427 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MIN"); }
#line 5622 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1428 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SUM"); }
#line 5628 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1429 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP"); }
#line 5634 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1430 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP"); }
#line 5640 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1431 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP"); }
#line 5646 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1432 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP"); }
#line 5652 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1433 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COUNT"); }
#line 5658 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1434 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING"); }
#line 5664 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1439 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5674 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1447 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANK"); }
#line 5680 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1448 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK"); }
#line 5686 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1449 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PERCENT_RANK"); }
#line 5692 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1450 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CUME_DIST"); }
#line 5698 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1451 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER"); }
#line 5704 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1456 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OVER "+ (yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 5710 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1458 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5716 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1463 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5722 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1472 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5731 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1479 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5737 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1484 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5743 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1486 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5749 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1490 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5755 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1492 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    std::string s3 = (yyvsp[0].node) ? (yyvsp[0].node)->text() : "";
    (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+s3);
    delete((yyvsp[-2].node)); delete((yyvsp[-1].node)); delete((yyvsp[0].node));
}
#line 5765 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1500 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"ROWS"); }
#line 5771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1501 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"RANGE"); }
#line 5777 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1510 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"UNBOUNDED PRECEDING"); }
#line 5783 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1511 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"CURRENT ROW"); }
#line 5789 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1516 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1521 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-2].node)->text()+" AND "+(yyvsp[0].node)->text()); delete((yyvsp[-2].node)); delete((yyvsp[0].node)); }
#line 5801 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1526 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"UNBOUNDED FOLLOWING"); }
#line 5807 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1531 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5813 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1535 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1536 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE CURRENT ROW"); }
#line 5825 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1537 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE GROUP"); }
#line 5831 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1538 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE TIES"); }
#line 5837 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1539 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE NO OTHERS"); }
#line 5843 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1544 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5853 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1550 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5863 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1562 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5873 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1568 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5884 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1575 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5895 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1582 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5906 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1589 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 5919 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1598 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5930 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1605 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5941 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1612 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5952 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1619 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5963 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1626 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5976 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1635 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5987 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1642 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5998 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1662 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6007 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1670 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 6016 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1678 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 6026 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1684 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 6035 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1689 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 6044 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1697 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6053 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1702 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 6062 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1707 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6071 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1713 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6080 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1727 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6089 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1735 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 6098 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1744 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6107 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1754 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6116 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1759 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 6124 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1766 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6133 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1772 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6142 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1777 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6151 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1782 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 6159 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1789 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 6167 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1793 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 6175 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1797 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 6183 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1801 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 6191 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1805 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 6199 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1812 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 6207 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1819 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 6215 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1823 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6224 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1828 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6233 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1833 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6242 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1838 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 6250 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1842 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 6258 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1846 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6267 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1851 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6276 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1856 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6285 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1861 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 6293 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1865 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 6301 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1877 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6310 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1882 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6319 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1887 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6328 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1892 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6337 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1897 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6346 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1902 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6355 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1907 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6363 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1911 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6371 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1915 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6379 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1919 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6387 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1923 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6395 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1927 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 6403 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1931 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 6411 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1938 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6420 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1943 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6428 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1947 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6436 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1951 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6444 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1958 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6453 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1963 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6462 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1968 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6471 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1973 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6480 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1978 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6489 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1983 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6498 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1988 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6506 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1992 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6515 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1997 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6523 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2001 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6532 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2006 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6540 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2010 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6548 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2014 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6556 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2021 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6565 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2026 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6573 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2030 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6582 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2035 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6590 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2042 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6599 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2047 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6607 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2051 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6616 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2056 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6624 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2060 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6633 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2065 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6642 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2070 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6651 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2075 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6660 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2080 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6669 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2085 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6677 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2089 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6686 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2094 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6694 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2098 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6703 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2103 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6711 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2107 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6719 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2114 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6728 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2119 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6737 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2124 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6746 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2129 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6755 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2137 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6763 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2141 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2145 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6779 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2152 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6787 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2156 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 6795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2160 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 6803 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2167 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6811 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2171 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2177 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 6825 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2178 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 6831 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2179 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 6837 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2183 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6843 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2188 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 6849 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2200 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6858 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2217 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "K"); }
#line 6864 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2218 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "M"); }
#line 6870 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2219 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "G"); }
#line 6876 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2220 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ARRAY"); }
#line 6882 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2221 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BINARY"); }
#line 6888 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2222 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CAST"); }
#line 6894 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2223 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CHARACTERS"); }
#line 6900 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2224 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CODE_UNITS"); }
#line 6906 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2225 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CORRESPONDING"); }
#line 6912 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2226 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOLLOWING"); }
#line 6918 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2227 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "INTERVAL"); }
#line 6924 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2228 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "LARGE"); }
#line 6930 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2229 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MULTISET"); }
#line 6936 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2230 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OBJECT"); }
#line 6942 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2231 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OCTETS"); }
#line 6948 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2232 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ONLY"); }
#line 6954 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2233 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECEDING"); }
#line 6960 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2234 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECISION"); }
#line 6966 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2235 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RECURSIVE"); }
#line 6972 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2236 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "REF"); }
#line 6978 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2237 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW"); }
#line 6984 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2238 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SCOPE"); }
#line 6990 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2239 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SECOND"); }
#line 6996 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2240 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED"); }
#line 7002 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2241 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VARCHAR"); }
#line 7008 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2242 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "WITHOUT"); }
#line 7014 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2243 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ZONE"); }
#line 7020 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2244 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOR"); }
#line 7026 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2245 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OF"); }
#line 7032 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2246 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "READ"); }
#line 7038 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2247 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIMESTAMP"); }
#line 7044 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2248 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIME");  }
#line 7050 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2249 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DESC"); }
#line 7056 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2250 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIES"); }
#line 7062 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2251 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SETS"); }
#line 7068 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2252 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OTHERS"); }
#line 7074 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2253 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "EXCLUDE"); }
#line 7080 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 2254 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ASC"); }
#line 7086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2255 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE"); }
#line 7092 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 2256 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT"); }
#line 7098 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2257 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF"); }
#line 7104 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;


#line 7108 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 2260 "./sqlparser_sql2003.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
