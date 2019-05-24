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
    SQL2003_CURRENT = 300,
    SQL2003_CURRENT_TIMESTAMP = 301,
    SQL2003_CURRENT_USER = 302,
    SQL2003_DATE = 303,
    SQL2003_DAY = 304,
    SQL2003_DEC = 305,
    SQL2003_DECIMAL = 306,
    SQL2003_DEFAULT = 307,
    SQL2003_DELETE = 308,
    SQL2003_DENSE_RANK = 309,
    SQL2003_DESC = 310,
    SQL2003_DISTINCT = 311,
    SQL2003_DOUBLE = 312,
    SQL2003_ELSE = 313,
    SQL2003_END = 314,
    SQL2003_END_P = 315,
    SQL2003_ESCAPE = 316,
    SQL2003_ERROR = 317,
    SQL2003_EXCEPT = 318,
    SQL2003_EXISTS = 319,
    SQL2003_FLOAT = 320,
    SQL2003_FOLLOWING = 321,
    SQL2003_FOR = 322,
    SQL2003_FROM = 323,
    SQL2003_FULL = 324,
    SQL2003_G = 325,
    SQL2003_GROUP = 326,
    SQL2003_GROUPING = 327,
    SQL2003_HAVING = 328,
    SQL2003_HOUR = 329,
    SQL2003_IN = 330,
    SQL2003_INNER = 331,
    SQL2003_INSERT = 332,
    SQL2003_INT = 333,
    SQL2003_INTEGER = 334,
    SQL2003_INTERSECT = 335,
    SQL2003_INTERVAL = 336,
    SQL2003_INTO = 337,
    SQL2003_IS = 338,
    SQL2003_JOIN = 339,
    SQL2003_K = 340,
    SQL2003_LARGE = 341,
    SQL2003_LEFT = 342,
    SQL2003_LIKE = 343,
    SQL2003_M = 344,
    SQL2003_MAX = 345,
    SQL2003_MIN = 346,
    SQL2003_MINUTE = 347,
    SQL2003_MOD = 348,
    SQL2003_MONTH = 349,
    SQL2003_MULTISET = 350,
    SQL2003_NATIONAL = 351,
    SQL2003_NATURAL = 352,
    SQL2003_NCHAR = 353,
    SQL2003_NCLOB = 354,
    SQL2003_NOT = 355,
    SQL2003_NULLIF = 356,
    SQL2003_NUMERIC = 357,
    SQL2003_OBJECT = 358,
    SQL2003_OCTETS = 359,
    SQL2003_OF = 360,
    SQL2003_ON = 361,
    SQL2003_ONLY = 362,
    SQL2003_OR = 363,
    SQL2003_ORDER = 364,
    SQL2003_OUTER = 365,
    SQL2003_OVER = 366,
    SQL2003_PARTITION = 367,
    SQL2003_PRECEDING = 368,
    SQL2003_PRECISION = 369,
    SQL2003_RANGE = 370,
    SQL2003_RANK = 371,
    SQL2003_READ = 372,
    SQL2003_REAL = 373,
    SQL2003_RECURSIVE = 374,
    SQL2003_REF = 375,
    SQL2003_RIGHT = 376,
    SQL2003_ROW = 377,
    SQL2003_ROWS = 378,
    SQL2003_ROW_NUMBER = 379,
    SQL2003_SCOPE = 380,
    SQL2003_SECOND = 381,
    SQL2003_SELECT = 382,
    SQL2003_SESSION_USER = 383,
    SQL2003_SET = 384,
    SQL2003_SMALLINT = 385,
    SQL2003_SOME = 386,
    SQL2003_STDDEV_POP = 387,
    SQL2003_STDDEV_SAMP = 388,
    SQL2003_SUM = 389,
    SQL2003_SYSTEM_USER = 390,
    SQL2003_THEN = 391,
    SQL2003_TIME = 392,
    SQL2003_TIMESTAMP = 393,
    SQL2003_TO = 394,
    SQL2003_UNBOUNDED = 395,
    SQL2003_UNION = 396,
    SQL2003_UPDATE = 397,
    SQL2003_USING = 398,
    SQL2003_VALUES = 399,
    SQL2003_VARCHAR = 400,
    SQL2003_VARYING = 401,
    SQL2003_VAR_POP = 402,
    SQL2003_VAR_SAMP = 403,
    SQL2003_WHEN = 404,
    SQL2003_WHERE = 405,
    SQL2003_WITH = 406,
    SQL2003_WITHOUT = 407,
    SQL2003_YEAR = 408,
    SQL2003_ZONE = 409
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

#line 327 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */
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

#line 357 "sqlparser_sql2003_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  93
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5427

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  166
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  432
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  769

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   409

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   165,     2,     2,
      12,    13,   160,   162,   159,   163,    14,   164,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   158,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   161,     2,     2,     2,     2,     2,
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
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157
};

#if SQL2003_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   219,   219,   229,   230,   238,   239,   240,   244,   248,
     249,   250,   254,   262,   267,   272,   277,   282,   291,   300,
     317,   334,   335,   343,   352,   360,   365,   372,   373,   399,
     428,   429,   458,   459,   467,   475,   503,   504,   513,   527,
     528,   536,   537,   541,   549,   550,   558,   567,   570,   574,
     581,   582,   592,   597,   605,   606,   615,   623,   624,   628,
     636,   637,   645,   646,   650,   657,   658,   666,   680,   689,
     690,   698,   699,   703,   704,   716,   721,   729,   730,   735,
     741,   747,   754,   760,   767,   773,   780,   786,   793,   799,
     806,   812,   819,   825,   832,   838,   849,   854,   859,   864,
     869,   874,   879,   884,   892,   897,   903,   908,   914,   920,
     929,   940,   951,   962,   969,   970,   975,   976,   984,   985,
     993,   994,  1002,  1003,  1008,  1016,  1017,  1025,  1030,  1035,
    1040,  1045,  1050,  1055,  1060,  1065,  1070,  1075,  1080,  1085,
    1094,  1095,  1100,  1108,  1109,  1117,  1118,  1126,  1127,  1135,
    1136,  1141,  1149,  1150,  1151,  1156,  1157,  1158,  1162,  1163,
    1171,  1172,  1179,  1179,  1183,  1184,  1185,  1186,  1187,  1188,
    1192,  1199,  1200,  1204,  1205,  1206,  1207,  1211,  1212,  1213,
    1214,  1215,  1216,  1217,  1222,  1230,  1231,  1235,  1236,  1244,
    1249,  1257,  1258,  1267,  1268,  1269,  1270,  1275,  1281,  1287,
    1293,  1299,  1311,  1326,  1327,  1328,  1329,  1330,  1331,  1332,
    1333,  1334,  1335,  1339,  1348,  1349,  1350,  1354,  1360,  1372,
    1378,  1385,  1392,  1399,  1408,  1415,  1422,  1429,  1436,  1445,
    1452,  1462,  1467,  1472,  1477,  1482,  1487,  1492,  1497,  1505,
    1511,  1520,  1522,  1524,  1526,  1528,  1530,  1532,  1534,  1536,
    1538,  1540,  1542,  1544,  1546,  1548,  1550,  1552,  1554,  1556,
    1558,  1560,  1562,  1564,  1566,  1568,  1570,  1572,  1574,  1579,
    1580,  1581,  1582,  1586,  1594,  1602,  1608,  1613,  1621,  1626,
    1631,  1636,  1637,  1642,  1643,  1644,  1645,  1646,  1647,  1651,
    1659,  1664,  1668,  1673,  1677,  1678,  1683,  1690,  1695,  1696,
    1701,  1706,  1713,  1717,  1721,  1725,  1729,  1736,  1743,  1747,
    1752,  1757,  1762,  1766,  1770,  1775,  1780,  1785,  1789,  1796,
    1797,  1801,  1806,  1811,  1816,  1821,  1826,  1831,  1835,  1839,
    1843,  1847,  1851,  1855,  1862,  1867,  1871,  1875,  1882,  1887,
    1892,  1897,  1902,  1907,  1912,  1916,  1921,  1925,  1930,  1934,
    1938,  1945,  1950,  1954,  1959,  1966,  1971,  1975,  1980,  1984,
    1989,  1994,  1999,  2004,  2009,  2013,  2018,  2022,  2027,  2031,
    2038,  2043,  2048,  2053,  2061,  2065,  2069,  2076,  2080,  2084,
    2091,  2095,  2102,  2103,  2104,  2108,  2109,  2113,  2114,  2118,
    2119,  2124,  2134,  2135,  2139,  2140,  2141,  2142,  2143,  2144,
    2145,  2146,  2147,  2148,  2149,  2150,  2151,  2152,  2153,  2154,
    2155,  2156,  2157,  2158,  2159,  2160,  2161,  2162,  2163,  2164,
    2165,  2166,  2167,  2168,  2169,  2170,  2171,  2172,  2173,  2174,
    2175,  2176,  2177
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
  "COMP_NE", "CONVERT", "CORRESPONDING", "COUNT", "CROSS", "CURRENT",
  "CURRENT_TIMESTAMP", "CURRENT_USER", "DATE", "DAY", "DEC", "DECIMAL",
  "DEFAULT", "DELETE", "DENSE_RANK", "DESC", "DISTINCT", "DOUBLE", "ELSE",
  "END", "END_P", "ESCAPE", "ERROR", "EXCEPT", "EXISTS", "FLOAT",
  "FOLLOWING", "FOR", "FROM", "FULL", "G", "GROUP", "GROUPING", "HAVING",
  "HOUR", "IN", "INNER", "INSERT", "INT", "INTEGER", "INTERSECT",
  "INTERVAL", "INTO", "IS", "JOIN", "K", "LARGE", "LEFT", "LIKE", "M",
  "MAX", "MIN", "MINUTE", "MOD", "MONTH", "MULTISET", "NATIONAL",
  "NATURAL", "NCHAR", "NCLOB", "NOT", "NULLIF", "NUMERIC", "OBJECT",
  "OCTETS", "OF", "ON", "ONLY", "OR", "ORDER", "OUTER", "OVER",
  "PARTITION", "PRECEDING", "PRECISION", "RANGE", "RANK", "READ", "REAL",
  "RECURSIVE", "REF", "RIGHT", "ROW", "ROWS", "ROW_NUMBER", "SCOPE",
  "SECOND", "SELECT", "SESSION_USER", "SET", "SMALLINT", "SOME",
  "STDDEV_POP", "STDDEV_SAMP", "SUM", "SYSTEM_USER", "THEN", "TIME",
  "TIMESTAMP", "TO", "UNBOUNDED", "UNION", "UPDATE", "USING", "VALUES",
  "VARCHAR", "VARYING", "VAR_POP", "VAR_SAMP", "WHEN", "WHERE", "WITH",
  "WITHOUT", "YEAR", "ZONE", "';'", "','", "'*'", "'^'", "'+'", "'-'",
  "'/'", "'%'", "$accept", "sql_stmt", "stmt_list", "stmt", "dql_stmt",
  "dml_stmt", "insert_stmt", "insert_columns_and_source",
  "from_constructor", "delete_stmt", "update_stmt", "update_elem_list",
  "update_elem", "select_stmt", "query_expression",
  "query_expression_body", "query_term", "query_primary",
  "select_with_parens", "simple_table", "opt_where", "opt_from_clause",
  "opt_groupby", "opt_order_by", "order_by", "sort_list", "sort_key",
  "opt_asc_desc", "opt_having", "with_clause", "with_list",
  "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_factor",
  "table_term", "table_factor_non_join",
  "opt_simple_ident_list_with_parens", "column_ref", "relation_factor",
  "joined_table", "join_type", "join_outer", "search_condition",
  "boolean_term", "boolean_factor", "boolean_test", "boolean_primary",
  "predicate", "row_expr", "factor0", "factor1", "factor2", "factor3",
  "factor4", "row_expr_list", "in_expr", "truth_value", "comp_op",
  "comp_all_some_any_op", "plus_minus_op", "star_div_percent_mod_op",
  "expr_const", "case_expr", "case_arg", "when_clause_list", "when_clause",
  "case_default", "func_expr", "aggregate_windowed_function",
  "aggregate_function_name", "ranking_windowed_function",
  "ranking_function_name", "scalar_function", "function_call_keyword",
  "over_clause", "row_or_range_clause", "window_frame_extent", "data_type",
  "user_defined_type_name", "reference_type", "collection_type",
  "predefined_type", "interval_type", "interval_qualifier", "start_field",
  "end_field", "single_datetime_field",
  "non_second_primary_datetime_field", "boolean_type", "datetime_type",
  "numeric_type", "exact_numeric_type", "approximate_numeric_type",
  "character_string_type", "binary_large_object_string_type",
  "national_character_string_type", "large_object_length",
  "char_length_units", "multiplier", "distinct_or_all", "all_some_any",
  "opt_as_label", "as_label", "label", "collate_clause", "name_r",
  "reserved", YY_NULLPTR
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
     402,   403,   404,   405,   406,   407,   408,   409,    59,    44,
      42,    94,    43,    45,    47,    37
};
# endif

#define YYPACT_NINF -502

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-502)))

#define YYTABLE_NINF -294

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      53,    23,   -31,   -27,    67,  5129,  5270,    72,    -1,   -67,
    -502,  -502,  -502,  -502,  -502,  -502,    27,   -42,    28,  -502,
    -502,    23,    57,  5129,  5129,  -502,  -502,  1967,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,    64,  -502,  -502,  -502,   153,  -502,  5129,
    -502,    25,   206,  -502,  -502,    53,   173,  -502,  -502,    67,
      67,    67,   -42,  -502,    58,     4,  -502,  -502,  -502,  -502,
    -502,  -502,  1645,  2289,   251,   304,   308,   346,  -502,  -502,
     352,   358,   396,  -502,  -502,  -502,  2289,  2289,  -502,   236,
     216,  -502,   404,  3707,   -47,   163,   259,  -502,  -502,  -502,
    -502,  -502,  -502,   411,  -502,   415,  -502,  -502,   416,   338,
    2289,  4274,  -502,  5129,  5129,   410,  -502,  -502,  2289,    23,
      23,    23,  1806,  -502,  3989,   284,  2289,  -502,  -502,  -502,
      35,  1645,   419,    40,   421,   295,   285,  2289,  2289,  2289,
     431,   428,  2289,   429,  -502,  -502,  4415,    58,  1967,  2128,
    -502,  4556,  2289,  5129,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  2289,  -502,  -502,  -502,  -502,  2289,  2289,  1323,   430,
    2289,  2435,    58,   286,   253,  4700,   432,  -502,   436,   291,
     439,  -502,   293,   331,    28,    28,  -502,  1162,   439,  1806,
     333,   438,  -502,  -502,   371,  -502,   644,  -502,  -502,  -502,
    -502,   -42,  -502,  2289,  -502,  1806,   394,   285,   369,   447,
      11,   448,  -502,    60,  -502,  3848,  4130,  -502,   186,  -502,
    -502,  4130,  -502,   391,  -502,  -502,   449,  -502,   -47,  -502,
     163,   259,  -502,  -502,  -502,   450,   309,  2289,   350,   349,
    4844,  -502,   390,  -502,  2289,  2289,  5129,   454,  4988,  -502,
    5129,    24,  -502,  2289,  -502,  -502,  -502,  1162,    16,   444,
    -502,  -502,  1806,  1806,   123,  2289,  -502,  -502,  -502,  -502,
    -502,  -502,   455,    33,  2289,   217,  1484,   439,  -502,   -38,
     559,  2289,   407,  -502,  3566,  -502,  5129,  -502,  2289,  3848,
     287,   457,   206,   384,   360,  -502,  4415,   360,   181,   360,
    4415,   387,  -502,   452,   399,  -502,   350,   350,   363,   468,
    -502,  -502,  5129,   474,  2579,  -502,   295,  -502,  5129,  5129,
     476,  -502,  -502,  -502,   438,  -502,  -502,  -502,   389,  -502,
     296,  1645,  -502,  -502,  -502,   484,    29,  2289,   455,  2289,
    -502,  -502,  -502,   295,  -502,  -502,  2289,  2289,   295,  -502,
    -502,   405,   481,  -502,    30,    48,   483,  -502,   485,   486,
     379,   489,  -502,  -502,   169,   247,    63,   490,   491,  -502,
     492,  -502,    20,    22,   493,  -502,    26,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,   263,  -502,   469,
     494,   388,  -502,  -502,  -502,  4415,  -502,  -502,   -58,  -502,
     422,  -502,  -502,  4415,    67,  1806,  -502,  -502,  -502,   350,
     112,   496,  2720,  5129,  -502,   400,  -502,  -502,  5129,  -502,
    2289,   498,  -502,  2289,   347,  -502,   191,   295,   295,   406,
     508,   509,   409,   505,   520,   420,   515,   523,   524,   527,
    -502,   531,   525,  -502,   398,  -502,    21,    15,    71,   533,
     435,   534,   523,   538,  5129,   540,   408,   414,   544,   417,
     423,   546,  -502,   543,  -502,   424,  -502,  -502,  -502,  -502,
    -502,  1806,   206,  4415,   -56,  2289,   333,  -502,  -502,   532,
      47,    47,   118,   539,  2861,  -502,   401,   547,  3002,  -502,
     295,  -502,   295,  2289,  2289,   550,   551,   553,   555,   563,
     557,   560,   566,   211,   561,     2,    10,   564,   568,   185,
     571,   574,   575,   578,   482,   577,   567,   579,   585,   582,
      12,   595,   597,   456,   458,   598,   459,   461,   599,   587,
    5129,   333,  -502,  -502,  1806,   206,  -502,  2289,   503,    50,
     495,   511,  -502,  -502,  -502,   601,  -502,  -502,  -502,  3143,
    3284,  -502,   412,   295,   295,   616,  -502,  -502,   523,   611,
    -502,   523,   612,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
     109,  -502,  -502,   624,  -502,   625,  -502,    13,   619,  -502,
    -502,   620,   621,   627,   622,   626,   631,  -502,   523,   628,
    -502,  -502,   635,   514,   147,  -502,  -502,   239,  -502,  -502,
    -502,   630,   469,   333,  -502,   105,  -502,    87,   529,    99,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  3425,   636,   643,
    -502,   645,  -502,  -502,   646,   647,  -502,   656,   658,   506,
    -502,   652,  -502,   523,   654,   659,  -502,   661,  5129,   535,
     536,   537,   548,  -502,  -502,  -502,   122,   666,   653,   664,
     673,   674,   676,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
     681,   682,  -502,   684,  -502,  -502,  -502,  -502,   542,   545,
     549,   554,  -502,   687,  -502,    51,    59,    62,    66,    52,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,   172,   576,
     188,   199,   580,   201,   210,   588,   224,   228,   590,   240,
     594,   591,   649,   244,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502,  -502
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     0,     0,    62,     0,     0,     0,     0,     3,
       6,     7,    11,    10,     9,     8,    41,    25,    27,    30,
      32,     0,     0,     0,     0,    63,    64,     0,   392,   400,
     203,   401,   402,   403,   404,   405,   211,   304,   215,   427,
     406,   428,   399,   212,   305,   407,   397,   408,   398,   204,
     205,   306,   303,   409,   410,   411,   429,   412,   413,   414,
     415,   416,   214,   430,   417,   418,   419,   420,   216,   421,
     422,   207,   208,   206,   432,   431,   423,   424,   209,   210,
     425,   302,   426,     0,   394,   395,   396,    96,   393,   417,
      52,    54,    57,     1,     2,     5,     0,    24,    42,    62,
      62,    62,    26,    33,    36,     0,   177,   180,   178,   181,
     179,   182,     0,   185,   402,     0,     0,   225,   227,   183,
       0,     0,     0,   229,   230,    68,     0,     0,   157,     0,
      65,   152,     0,   385,   140,   143,   145,   147,   149,   153,
     155,   156,   196,   394,   195,   395,   194,   193,   396,    79,
       0,     0,    53,     0,     0,     0,    58,     4,     0,     0,
       0,     0,     0,    19,     0,     0,     0,    12,    16,    13,
       0,     0,     0,   158,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,   150,   151,     0,    36,     0,     0,
     390,     0,     0,     0,    67,   386,   388,   141,   389,   171,
     172,     0,   176,   173,   174,   175,     0,     0,     0,     0,
       0,     0,    36,    21,     0,     0,    97,    55,     0,    60,
       0,    43,    44,    47,    29,    28,    31,     0,     0,     0,
      37,   116,   118,   120,   122,   125,     0,    17,    18,    15,
      14,    25,    34,     0,   154,     0,   191,   187,     0,     0,
       0,     0,   221,     0,   220,     0,     0,    38,    69,    71,
      73,   385,    72,    39,    66,   217,     0,   387,   142,   391,
     144,   146,   148,   380,   381,     0,     0,     0,     0,     0,
       0,    81,    80,    20,     0,     0,     0,    99,     0,    59,
       0,     0,    56,     0,    48,    49,    46,     0,     0,   158,
     139,   121,     0,     0,     0,     0,   168,   166,   167,   164,
     165,   169,     0,     0,     0,     0,     0,     0,   159,     0,
       0,     0,     0,   188,     0,   224,     0,   226,     0,     0,
       0,    72,    77,     0,   114,   113,     0,   114,     0,   114,
       0,     0,    75,     0,    50,   218,   202,   198,     0,     0,
     213,   219,     0,    99,     0,    22,    23,   103,     0,     0,
      98,    61,    45,   126,   117,   119,   162,   163,     0,   123,
       0,     0,   160,   135,   137,     0,   131,     0,     0,     0,
     382,   384,   383,   127,   170,   128,     0,     0,   192,   184,
     331,   401,   354,   307,   349,   350,   348,   308,   327,   333,
       0,   336,   330,   329,   407,     0,   369,   368,   332,   337,
     418,   328,   432,   431,   424,   273,     0,   270,   271,   272,
     269,   288,   286,   287,   285,   319,   320,   281,   284,   283,
       0,     0,    74,    78,    76,     0,   115,   110,     0,   111,
       0,   112,    70,     0,    62,     0,    35,   201,   197,   200,
       0,   103,     0,     0,    83,    82,   101,   102,     0,   124,
       0,     0,   138,     0,     0,   136,   133,   189,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,     0,   301,   289,     0,   291,   298,   358,   356,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   222,   276,   277,     0,   280,   282,   223,   228,
     108,     0,     0,     0,     0,     0,    51,   199,   238,     0,
       0,     0,     0,     0,     0,    87,    86,   102,     0,   100,
     129,   161,   132,     0,     0,   352,     0,     0,   346,     0,
       0,   344,     0,   373,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   366,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   107,   109,     0,     0,    40,     0,     0,     0,
       0,     0,   240,   239,   236,     0,   237,    95,    94,     0,
       0,    85,    84,   130,   134,     0,   353,   339,     0,     0,
     338,     0,     0,   374,   375,   379,   377,   378,   376,   372,
     371,   347,   326,     0,   324,     0,   334,     0,   296,   290,
     294,     0,     0,     0,     0,   364,     0,   359,     0,     0,
     367,   322,     0,     0,   311,   312,   313,   316,   317,   318,
     342,     0,   279,   104,   106,     0,   242,     0,     0,     0,
     243,   241,   232,    91,    90,    93,    92,     0,     0,     0,
     341,     0,   340,   370,     0,     0,   300,     0,     0,   297,
     357,     0,   355,     0,     0,     0,   362,     0,     0,     0,
       0,     0,     0,   275,   278,   235,     0,     0,     0,     0,
       0,     0,     0,    89,    88,   351,   345,   343,   325,   323,
       0,     0,   361,     0,   360,   365,   321,   274,     0,     0,
       0,     0,   234,     0,   233,     0,     0,     0,     0,     0,
     299,   295,   363,   309,   310,   314,   315,   231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   268,   253,   258,   263,   248,   265,
     250,   255,   260,   245,   266,   251,   256,   261,   246,   267,
     252,   257,   262,   247,   249,   254,   264,   259,   244
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -502,  -502,   609,  -502,  -502,  -502,  -502,  -502,   558,  -502,
    -502,   440,  -502,   -62,    17,     9,   219,   562,  -174,  -502,
    -109,  -502,  -502,  -502,  -437,   427,  -502,  -502,  -502,  -502,
     -61,  -502,  -502,  -103,   437,   -96,   541,  -502,   372,  -233,
    -322,  -502,  -502,  -502,    56,  -187,   393,   -85,  -156,   434,
    -153,  -502,  -502,  -502,   690,   552,   556,   526,   -77,  -502,
    -158,   359,   374,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
     499,  -502,  -502,  -502,  -502,    81,  -502,   367,  -502,  -502,
    -309,  -501,   227,  -502,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -502,    -5,  -502,  -502,  -502,  -502,  -502,  -502,
    -502,  -502,  -481,   130,  -502,  -502,  -502,   488,   497,   565,
    -420,   453,  -502
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,   167,   168,    13,
      14,   212,   213,    15,   172,    17,    18,    19,   128,    20,
     163,   187,   344,    97,    98,   221,   222,   296,   446,    21,
      90,    91,   155,   156,   218,    27,   129,   130,   257,   258,
     259,   260,   434,   131,   132,   262,   341,   437,   298,   231,
     232,   233,   234,   235,   173,   134,   135,   136,   137,   138,
     174,   373,   369,   316,   317,   201,   206,   139,   140,   176,
     246,   247,   322,   141,   142,   143,   144,   145,   146,   147,
     350,   523,   582,   416,   417,   418,   419,   420,   421,   483,
     484,   619,   485,   148,   422,   423,   424,   425,   426,   427,
     428,   429,   544,   609,   610,   277,   384,   194,   195,   196,
     197,   149,    88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,    86,   170,   159,   160,   161,   230,   506,   238,   507,
      22,   559,   256,   522,   438,   612,   164,    16,    86,    86,
     249,   585,   330,   614,    99,   631,   666,   551,   152,   363,
     102,   266,   495,   550,   498,     1,     1,   447,   448,   502,
      23,   374,   471,   169,   503,   192,   292,     1,   193,   184,
     185,   511,   578,   574,   300,   647,   728,   740,    24,   165,
     474,    83,    94,   192,   731,     1,   193,   734,   331,   579,
     103,   737,    93,   302,   192,   489,   301,   193,   263,   104,
     105,   256,    25,   553,    86,   318,    84,    84,   512,   319,
     575,    95,   217,   463,   192,   580,   330,   193,   648,   729,
     741,   386,   100,   283,    84,    84,   742,   732,   240,     2,
     735,   101,    16,   510,   738,   199,   200,   659,   685,   472,
     661,   514,    16,    99,   504,   518,    26,   302,    86,   366,
     272,   584,   367,     3,     4,   712,   375,   475,   372,    96,
     517,   603,   331,   385,   687,   604,    86,   675,    86,    86,
     365,   166,   490,     4,     4,   256,   688,   326,     6,    86,
     554,   613,   256,  -293,   552,     4,   256,   151,   691,   615,
      84,   632,   667,    22,   496,   497,   499,   500,     6,   473,
     241,    86,   166,     4,   153,   713,    86,    16,    86,     6,
     581,   573,   703,   649,   730,   743,   150,   476,     5,   243,
     158,   100,   733,   689,   372,   736,    86,     6,   686,   739,
      86,   162,   491,   461,    84,   692,   608,    96,   154,   328,
     555,    37,   684,   520,    96,   192,   368,   519,   193,   433,
     520,   521,    84,   333,    84,    84,   520,    37,   521,   377,
     520,   744,   261,   603,   521,    84,    44,   604,   521,   269,
      86,    86,   439,   334,   441,   534,    86,   747,   334,   202,
     335,   256,    44,   177,    51,   335,    52,    84,   749,   256,
     752,   337,    84,   336,    84,    86,   337,   487,   488,   754,
      51,    86,    52,    86,   605,    86,   338,   192,   745,   516,
     193,   285,    84,   757,   505,   378,    84,   759,   482,   606,
     193,   679,   680,   607,   748,   339,   241,   186,   379,   762,
     339,   261,   460,   767,   618,   750,   178,   753,   608,    86,
     179,    86,   347,   203,    86,    81,   755,   204,   205,   192,
     192,    86,   193,   193,   333,    86,    84,    84,   241,   256,
     758,    81,    84,   192,   760,   340,   193,    86,   515,    86,
     -96,   294,   211,    86,    86,   571,   763,   576,   180,   334,
     768,    84,   351,   533,   181,   192,   335,    84,   193,    84,
     182,    84,    85,    85,   336,   188,   449,   337,   224,   225,
     415,   192,   430,   192,   193,   261,   193,   338,   324,   295,
      85,    85,   261,   681,   682,   366,   261,   192,   367,   486,
     193,   509,   -97,   192,   354,    84,   193,    84,   183,   572,
      84,   339,   -98,  -101,   528,   589,   189,    84,   643,   645,
     207,    84,   192,   208,  -100,   193,   657,   209,   210,   220,
      86,   237,   242,    84,   244,    84,   251,   245,    86,    84,
      84,   252,   254,   278,   302,   284,   288,    86,    86,   289,
     290,   291,   293,    86,   303,   321,    85,   304,    87,    92,
     325,   327,   345,   346,   349,   343,   305,   371,   358,   389,
     432,   435,   644,   436,   443,   445,    87,    87,   192,   444,
     450,   193,   306,   307,   308,   309,   310,   311,   452,    86,
     458,   261,   462,   470,   469,   477,   480,   478,   479,   261,
      85,   481,   492,   493,   494,   501,   193,   508,    86,   513,
     524,   531,   535,   536,   537,   538,    84,   539,    85,    86,
      85,    85,   312,    86,    84,   540,   541,   542,   543,   545,
     313,    85,   546,    84,    84,   314,   547,   548,   556,    84,
     549,   557,    92,   560,   620,   562,   558,   315,   563,   565,
     561,   568,   586,    85,   564,   569,   570,   566,    85,   577,
      85,   590,   595,   567,   596,    86,   597,   598,   599,   261,
     600,   602,   601,   617,   611,    84,   621,   616,    85,   622,
     627,   305,    85,   624,    86,    86,   198,   623,   625,   626,
     629,   628,   641,   192,    84,   630,   193,   306,   307,   308,
     309,   310,   311,   243,   216,    84,    92,   219,   633,    84,
     634,   637,   640,   635,   652,   636,   638,   219,   639,   646,
     650,   658,    85,    85,   660,   662,   642,   651,    85,   664,
     665,   668,   671,   669,   670,   672,   674,   312,   673,    87,
     677,   676,   678,   683,   198,   313,    87,    85,  -292,   695,
     314,    84,    86,    85,   690,    85,   696,    85,   697,   698,
     699,   700,   315,   701,   282,   702,   305,   704,   287,   715,
      84,    84,   705,    86,   706,   708,   709,   710,   192,   714,
     716,   193,   306,   307,   308,   309,   310,   311,   711,   717,
     718,    85,   719,    85,   720,   721,    85,   722,   387,   723,
     727,   746,   724,    85,   157,   751,   725,    85,    87,   198,
     764,   726,   442,   756,   198,   761,   765,   133,   766,    85,
     362,    85,   312,   226,   355,    85,    85,   361,   239,   264,
     313,   440,   271,   353,   707,   314,   364,   465,    84,   357,
     663,   360,   459,   219,   268,     0,   323,   315,   583,   342,
       0,     0,     0,   332,     0,     0,   267,   270,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    87,
       0,     0,    87,     0,     0,     0,     0,     0,     0,    87,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    85,   175,     0,   451,     0,   455,     0,     0,
      85,   456,   457,     0,     0,     0,     0,     0,     0,    85,
      85,     0,     0,     0,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     214,     0,     0,     0,     0,     0,     0,     0,   223,     0,
       0,     0,   236,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,   248,     0,   250,
       0,     0,   253,     0,     0,     0,     0,     0,   133,     0,
      85,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,    85,     0,     0,     0,    85,    87,     0,   276,     0,
     279,     0,     0,     0,     0,   526,   527,     0,     0,     0,
       0,   529,     0,     0,     0,     0,     0,   299,     0,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   320,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,    85,    85,     0,     0,
       0,     0,     0,     0,     0,     0,    87,   348,     0,     0,
       0,     0,     0,     0,   214,   356,     0,   588,     0,     0,
       0,   592,     0,   223,     0,     0,     0,   299,     0,     0,
       0,     0,   236,   236,     0,   370,     0,     0,     0,     0,
       0,     0,     0,     0,   376,     0,   383,     0,     0,     0,
       0,   388,     0,     0,     0,     0,     0,     0,   431,     0,
       0,     0,     0,    87,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   654,   656,     0,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   464,     0,   466,
       0,     0,     0,     0,     0,     0,   467,   468,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     694,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,     0,     0,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     530,     0,     0,   532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,   106,   107,   108,   109,
     110,     0,   111,     0,   297,     0,     0,     0,     0,     0,
      29,     0,     0,    30,     0,     0,    31,     0,     0,     0,
     113,   114,     0,     0,    33,     0,     0,   115,    34,     0,
       0,   236,     0,     0,     0,     0,   116,    35,    36,     0,
       0,   117,   118,     0,    37,     0,     0,   119,     0,    38,
       0,     0,     0,   593,   594,     0,     0,    39,     0,   228,
       0,    40,    41,     0,     0,    42,     0,    43,     0,    44,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
      46,    47,   120,     0,    48,    49,    50,    51,     0,    52,
      53,     0,     0,     0,   236,   229,   121,     0,    54,    55,
      56,     0,    57,     0,     0,     0,     0,    58,    59,    60,
      61,    62,    63,     0,    64,    65,   122,    66,    67,    68,
      69,    70,     4,   123,     0,     0,     0,    71,    72,    73,
     124,     0,    74,    75,     0,    76,     0,     0,     0,     0,
      77,     0,    78,    79,     0,     0,     6,    80,    81,    82,
       0,     0,     0,     0,   126,   127,    28,   106,   107,   108,
     109,   110,     0,   111,     0,   112,     0,     0,   273,     0,
       0,    29,     0,     0,    30,     0,     0,    31,     0,     0,
       0,   113,   114,     0,     0,    33,     0,     0,   115,    34,
       0,     0,     0,     0,     0,     0,     0,   116,    35,    36,
       0,     0,   117,   118,     0,    37,     0,     0,   119,     0,
      38,     0,   274,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,   120,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,   121,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,   122,    66,    67,
      68,    69,    70,     0,   123,     0,     0,     0,    71,    72,
      73,   124,     0,    74,    75,     0,    76,     0,     0,     0,
       0,    77,     0,    78,    79,     0,     0,     0,    80,    81,
      82,     0,     0,   275,     0,   126,   127,    28,   106,   107,
     108,   109,   110,     0,   111,     0,   112,     0,     0,   380,
       0,   381,    29,     0,     0,    30,     0,     0,    31,     0,
       0,     0,   113,   114,     0,     0,    33,     0,     0,   115,
      34,     0,     0,     0,     0,     0,     0,     0,   116,    35,
      36,     0,     0,   117,   118,     0,    37,     0,     0,   119,
       0,    38,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,    40,    41,     0,     0,    42,     0,    43,
       0,    44,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,    46,    47,   120,     0,    48,    49,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,   121,     0,
      54,    55,    56,     0,    57,     0,     0,     0,     0,    58,
      59,    60,    61,    62,    63,     0,    64,    65,   122,    66,
      67,    68,    69,    70,     0,   123,     0,     0,   382,    71,
      72,    73,   124,     0,    74,    75,     0,    76,     0,     0,
       0,     0,    77,     0,    78,    79,     0,     0,     0,    80,
      81,    82,     0,     0,     0,     0,   126,   127,    28,   106,
     107,   108,   109,   110,     0,   111,     0,   171,     0,     0,
       0,     0,     0,    29,     0,     0,    30,     0,     0,    31,
       0,     0,     0,   113,   114,     0,     0,    33,     0,     0,
     115,    34,     0,     0,     0,     0,     0,     0,     0,   116,
      35,    36,     0,     0,   117,   118,     0,    37,     0,     0,
     119,     0,    38,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,   120,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,   121,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,   122,
      66,    67,    68,    69,    70,     4,   123,     0,     0,     0,
      71,    72,    73,   124,     0,    74,    75,     0,    76,     0,
       0,     0,     0,    77,     0,    78,    79,     0,     0,     6,
      80,    81,    82,     0,     0,     0,     0,   126,   127,    28,
     106,   107,   108,   109,   110,     0,   111,     0,   227,     0,
       0,     0,     0,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,   113,   114,     0,     0,    33,     0,
       0,   115,    34,     0,     0,     0,     0,     0,     0,     0,
     116,    35,    36,     0,     0,   117,   118,     0,    37,     0,
       0,   119,     0,    38,     0,     0,     0,     0,     0,     0,
       0,    39,     0,   228,     0,    40,    41,     0,     0,    42,
       0,    43,     0,    44,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,    46,    47,   120,     0,    48,    49,
      50,    51,     0,    52,    53,     0,     0,     0,     0,   229,
     121,     0,    54,    55,    56,     0,    57,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,     0,    64,    65,
     122,    66,    67,    68,    69,    70,     0,   123,     0,     0,
       0,    71,    72,    73,   124,     0,    74,    75,     0,    76,
       0,     0,     0,     0,    77,     0,    78,    79,     0,     0,
       0,    80,    81,    82,     0,     0,     0,     0,   126,   127,
      28,   106,   107,   108,   109,   110,     0,   111,     0,   112,
       0,     0,     0,     0,     0,    29,     0,     0,    30,     0,
       0,    31,     0,     0,     0,   113,   114,     0,     0,    33,
       0,     0,   115,    34,     0,     0,     0,     0,     0,     0,
       0,   116,    35,    36,     0,     0,   117,   118,     0,    37,
       0,     0,   119,     0,    38,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,    40,    41,     0,     0,
      42,     0,    43,     0,    44,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,    46,    47,   120,     0,    48,
      49,    50,    51,     0,    52,    53,     0,     0,     0,     0,
       0,   121,     0,    54,    55,    56,     0,    57,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,     0,    64,
      65,   122,    66,    67,    68,    69,    70,     0,   123,     0,
       0,     0,    71,    72,    73,   124,     0,    74,    75,     0,
      76,     0,     0,     0,     0,    77,     0,    78,    79,     0,
       0,     0,    80,    81,    82,     0,     0,   125,     0,   126,
     127,    28,   106,   107,   108,   109,   110,     0,   111,     0,
     112,   265,     0,     0,     0,     0,    29,     0,     0,    30,
       0,     0,    31,     0,     0,     0,   113,   114,     0,     0,
      33,     0,     0,   115,    34,     0,     0,     0,     0,     0,
       0,     0,   116,    35,    36,     0,     0,   117,   118,     0,
      37,     0,     0,   119,     0,    38,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,    40,    41,     0,
       0,    42,     0,    43,     0,    44,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,    46,    47,   120,     0,
      48,    49,    50,    51,     0,    52,    53,     0,     0,     0,
       0,     0,   121,     0,    54,    55,    56,     0,    57,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,     0,
      64,    65,   122,    66,    67,    68,    69,    70,     0,   123,
       0,     0,     0,    71,    72,    73,   124,     0,    74,    75,
       0,    76,     0,     0,     0,     0,    77,     0,    78,    79,
       0,     0,     0,    80,    81,    82,     0,     0,     0,     0,
     126,   127,    28,   106,   107,   108,   109,   110,     0,   111,
       0,   112,     0,     0,     0,     0,     0,    29,     0,     0,
      30,     0,     0,    31,     0,     0,     0,   113,   114,     0,
       0,    33,     0,     0,   115,    34,     0,     0,     0,     0,
       0,     0,     0,   116,    35,    36,     0,     0,   117,   118,
       0,    37,     0,     0,   119,     0,    38,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,    40,    41,
       0,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    46,    47,   120,
       0,    48,    49,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,   121,     0,    54,    55,    56,     0,    57,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,   122,    66,    67,    68,    69,    70,     0,
     123,     0,     0,     0,    71,    72,    73,   124,     0,    74,
      75,     0,    76,     0,     0,     0,     0,    77,    28,    78,
      79,     0,     0,     0,    80,    81,    82,     0,     0,   280,
       0,   126,   127,    29,     0,     0,    30,     0,     0,    31,
       0,     0,     0,     0,    32,     0,     0,    33,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,     0,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,     0,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,    74,    75,     0,    76,     0,
       0,     0,    28,    77,     0,    78,    79,     0,     0,     0,
      80,    81,    82,   453,     0,   281,     0,    29,     0,     0,
      30,     0,     0,    31,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,    40,    41,
       0,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    46,    47,     0,
       0,    48,    49,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,     0,    57,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,     0,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,    71,    72,    73,     0,     0,    74,
      75,     0,    76,    28,     0,     0,     0,    77,     0,    78,
      79,     0,     0,     0,    80,    81,    82,     0,    29,   454,
       0,    30,     0,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    46,    47,
       0,     0,    48,    49,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,     0,
      57,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
      74,    75,     0,    76,    28,     0,     0,     0,    77,     0,
      78,    79,     0,     0,     0,    80,    81,    82,     0,    29,
     525,     0,    30,     0,     0,    31,     0,     0,     0,     0,
      32,     0,     0,    33,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,     0,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,     0,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71,    72,    73,     0,
       0,    74,    75,     0,    76,    28,     0,     0,     0,    77,
       0,    78,    79,     0,     0,     0,    80,    81,    82,     0,
      29,   587,     0,    30,     0,     0,    31,     0,     0,     0,
       0,    32,     0,     0,    33,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,    40,    41,     0,     0,    42,     0,    43,     0,    44,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
      46,    47,     0,     0,    48,    49,    50,    51,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,     0,    57,     0,     0,     0,     0,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,    71,    72,    73,
       0,     0,    74,    75,     0,    76,    28,     0,     0,     0,
      77,     0,    78,    79,     0,     0,     0,    80,    81,    82,
       0,    29,   591,     0,    30,     0,     0,    31,     0,     0,
       0,     0,    32,     0,     0,    33,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    36,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,    74,    75,     0,    76,    28,     0,     0,
       0,    77,     0,    78,    79,     0,     0,     0,    80,    81,
      82,     0,    29,   653,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,    40,    41,     0,     0,    42,     0,    43,
       0,    44,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,    46,    47,     0,     0,    48,    49,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,     0,    57,     0,     0,     0,     0,    58,
      59,    60,    61,    62,    63,     0,    64,    65,     0,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,    71,
      72,    73,     0,     0,    74,    75,     0,    76,    28,     0,
       0,     0,    77,     0,    78,    79,     0,     0,     0,    80,
      81,    82,     0,    29,   655,     0,    30,     0,     0,    31,
       0,     0,     0,     0,    32,     0,     0,    33,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,     0,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,     0,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,    74,    75,     0,    76,    28,
       0,     0,     0,    77,     0,    78,    79,     0,     0,     0,
      80,    81,    82,     0,    29,   693,     0,    30,     0,   390,
     391,   392,   393,     0,     0,    32,   394,   395,    33,   396,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,     0,     0,     0,     0,   397,    37,   398,
     399,     0,     0,    38,     0,     0,   400,     0,     0,     0,
       0,    39,     0,     0,   401,    40,    41,     0,     0,    42,
       0,    43,     0,    44,     0,     0,     0,   402,   403,     0,
     404,     0,     0,     0,    46,    47,     0,     0,    48,    49,
      50,    51,     0,    52,    53,   405,     0,   406,   407,     0,
       0,   408,    54,    55,    56,     0,    57,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,   409,    64,   410,
       0,    66,    67,    68,    69,    70,     0,     0,     0,   411,
       0,    71,    72,    73,     0,     0,   412,   413,     0,    76,
      28,   190,     0,     0,   414,     0,    78,    79,     0,     0,
       0,    80,    81,    82,     0,    29,   191,     0,    30,     0,
       0,    31,     0,     0,     0,     0,    32,     0,     0,    33,
       0,   192,     0,    34,   193,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,    40,    41,     0,     0,
      42,     0,    43,     0,    44,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,    46,    47,     0,     0,    48,
      49,    50,    51,     0,    52,    53,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,     0,    57,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,     0,    64,
      65,     0,    66,    67,    68,    69,    70,     0,     0,     0,
       0,     0,    71,    72,    73,     0,     0,    74,    75,     0,
      76,    28,     0,     0,     0,    77,     0,    78,    79,     0,
     329,     0,    80,    81,    82,     0,    29,     0,     0,    30,
       0,     0,    31,     0,     0,     0,     0,    32,     0,     0,
      33,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,    40,    41,     0,
       0,    42,     0,    43,     0,    44,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,    46,    47,     0,     0,
      48,    49,    50,    51,     0,    52,    53,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,     0,    57,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,     0,
      64,    65,     0,    66,    67,    68,    69,    70,     4,     0,
       0,     0,     0,    71,    72,    73,     0,     0,    74,    75,
       0,    76,    28,     0,     0,     0,    77,     0,    78,    79,
       0,     1,     6,    80,    81,    82,     0,    29,     0,     0,
      30,     0,     0,    31,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,    40,    41,
       0,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    46,    47,     0,
       0,    48,    49,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,     0,    57,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,     0,    66,    67,    68,    69,    70,     4,
       0,     0,     0,     0,    71,    72,    73,     0,     0,    74,
      75,     0,    76,    28,   190,     0,     0,    77,     0,    78,
      79,     0,     0,     0,    80,    81,    82,     0,    29,   191,
       0,    30,     0,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    46,    47,
       0,     0,    48,    49,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,     0,
      57,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
      74,    75,     0,    76,     0,     0,     0,    28,    77,     0,
      78,    79,     0,     0,     0,    80,    81,    82,   215,     0,
       0,     0,    29,     0,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,    40,    41,     0,     0,    42,     0,    43,
       0,    44,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,    46,    47,     0,     0,    48,    49,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,     0,    57,     0,     0,     0,     0,    58,
      59,    60,    61,    62,    63,     0,    64,    65,     0,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,    71,
      72,    73,     0,     0,    74,    75,     0,    76,    28,     0,
       0,     0,    77,     0,    78,    79,     0,   255,     0,    80,
      81,    82,     0,    29,     0,     0,    30,     0,     0,    31,
       0,     0,     0,     0,    32,     0,     0,    33,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,     0,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,     0,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,    74,    75,     0,    76,    28,
     190,     0,     0,    77,     0,    78,    79,     0,     0,     0,
      80,    81,    82,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,     0,    32,     0,     0,    33,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,    40,    41,     0,     0,    42,
       0,    43,     0,    44,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,    46,    47,     0,     0,    48,    49,
      50,    51,     0,    52,    53,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,     0,    57,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,     0,    64,    65,
       0,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    71,    72,    73,     0,     0,    74,    75,     0,    76,
       0,     0,     0,    28,    77,     0,    78,    79,     0,     0,
       0,    80,    81,    82,   286,     0,     0,     0,    29,     0,
       0,    30,     0,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    46,    47,
       0,     0,    48,    49,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,     0,
      57,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
      74,    75,     0,    76,     0,     0,     0,    28,    77,     0,
      78,    79,     0,     0,     0,    80,    81,    82,   352,     0,
       0,     0,    29,     0,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,    40,    41,     0,     0,    42,     0,    43,
       0,    44,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,    46,    47,     0,     0,    48,    49,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,     0,    57,     0,     0,     0,     0,    58,
      59,    60,    61,    62,    63,     0,    64,    65,     0,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,    71,
      72,    73,     0,     0,    74,    75,     0,    76,     0,     0,
       0,    28,    77,     0,    78,    79,     0,     0,     0,    80,
      81,    82,   359,     0,     0,     0,    29,     0,     0,    30,
       0,     0,    31,     0,     0,     0,     0,    32,     0,     0,
      33,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,    40,    41,     0,
       0,    42,     0,    43,     0,    44,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,    46,    47,     0,     0,
      48,    49,    50,    51,     0,    52,    53,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,     0,    57,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,     0,
      64,    65,     0,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,    71,    72,    73,     0,     0,    74,    75,
       0,    76,    28,     0,     0,     0,    77,     0,    78,    79,
       0,     0,     0,    80,    81,    82,     0,    29,     0,     0,
      30,     0,     0,    31,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,    40,    41,
       0,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    46,    47,     0,
       0,    48,    49,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,     0,    57,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,     0,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,    71,    72,    73,     0,     0,    74,
      75,     0,    76,    28,     0,     0,     0,    77,     0,    78,
      79,     0,     0,     0,    80,    81,    82,     0,    29,     0,
       0,    30,     0,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    46,    47,
       0,     0,    48,    49,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,     0,
      57,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,     0,    89,    65,     0,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
      74,    75,     0,    76,     0,     0,     0,     0,    77,     0,
      78,    79,     0,     0,     0,    80,    81,    82
};

static const yytype_int16 yycheck[] =
{
       5,     6,   105,    99,   100,   101,   162,   427,   166,   429,
       1,   492,   186,   450,   336,    13,    12,     0,    23,    24,
     178,   522,   255,    13,    66,    13,    13,    12,    89,    13,
      21,   189,    12,    12,    12,    12,    12,   346,   347,    13,
      71,     8,    12,   105,    18,    34,   220,    12,    37,   126,
     127,   109,     5,   109,   228,     5,     5,     5,    85,    55,
      12,     5,    63,    34,     5,    12,    37,     5,   255,    22,
      13,     5,     0,   111,    34,    12,   229,    37,   187,    23,
      24,   255,    15,    12,    89,   243,     5,     6,   146,   245,
     146,   158,   153,    64,    34,    48,   329,    37,    48,    48,
      48,   139,   144,   212,    23,    24,    54,    48,   170,    56,
      48,    83,    95,   435,    48,   162,   163,   598,    13,    89,
     601,   443,   105,    66,    98,    13,    59,   111,   133,     6,
     207,    13,     9,    80,   130,    13,   103,    89,   312,   112,
     449,    32,   329,   317,   645,    36,   151,   628,   153,   154,
     303,   147,    89,   130,   130,   329,    69,   146,   154,   164,
      89,   159,   336,   142,   149,   130,   340,    14,    69,   159,
      89,   159,   159,   164,   154,   155,   154,   155,   154,   149,
     171,   186,   147,   130,   159,   686,   191,   170,   193,   154,
     143,   513,   673,   143,   143,   143,   132,   149,   145,   159,
      27,   144,   143,   116,   378,   143,   211,   154,   645,   143,
     215,   153,   149,   371,   133,   116,   107,   112,    12,   159,
     149,    52,   642,   118,   112,    34,   103,   115,    37,   332,
     118,   126,   151,    47,   153,   154,   118,    52,   126,    22,
     118,    69,   186,    32,   126,   164,    77,    36,   126,   193,
     255,   256,   337,    72,   339,    64,   261,    69,    72,    96,
      79,   435,    77,    12,    95,    79,    97,   186,    69,   443,
      69,    90,   191,    87,   193,   280,    90,    30,    31,    69,
      95,   286,    97,   288,    73,   290,   100,    34,   116,   445,
      37,    38,   211,    69,    31,    78,   215,    69,   129,    88,
      37,   154,   155,    92,   116,   124,   297,    71,    91,    69,
     124,   255,    16,    69,   129,   116,    12,   116,   107,   324,
      12,   326,    13,   160,   329,   156,   116,   164,   165,    34,
      34,   336,    37,    37,    47,   340,   255,   256,   329,   513,
     116,   156,   261,    34,   116,   159,    37,   352,   444,   354,
      12,    20,    14,   358,   359,   511,   116,   515,    12,    72,
     116,   280,    13,    16,    12,    34,    79,   286,    37,   288,
      12,   290,     5,     6,    87,   159,    13,    90,   159,   160,
     324,    34,   326,    34,    37,   329,    37,   100,    19,    58,
      23,    24,   336,   154,   155,     6,   340,    34,     9,   404,
      37,    13,    12,    34,    14,   324,    37,   326,    12,   512,
     329,   124,    12,    12,    14,    14,    12,   336,   574,   577,
     161,   340,    34,    12,    12,    37,    14,    12,    12,    19,
     435,   147,    13,   352,    13,   354,     5,   152,   443,   358,
     359,    13,    13,    13,   111,   159,    14,   452,   453,    13,
     159,    12,   159,   458,    16,    61,    89,    86,     5,     6,
      13,    13,    13,    13,   114,    74,    22,    12,    14,    62,
      13,    87,   575,   113,    87,    76,    23,    24,    34,    27,
      12,    37,    38,    39,    40,    41,    42,    43,    14,   494,
      14,   435,     8,    12,    89,    12,   117,    12,    12,   443,
     133,    12,    12,    12,    12,    12,    37,    13,   513,    87,
      14,    13,   106,     5,     5,   106,   435,    12,   151,   524,
     153,   154,    78,   528,   443,     5,   106,    12,     5,     5,
      86,   164,     5,   452,   453,    91,     5,    12,     5,   458,
     142,   106,    89,     5,   549,     5,    12,   103,   140,     5,
     494,     5,    13,   186,   140,    12,   132,   140,   191,    27,
     193,    14,    12,   140,    13,   570,    13,    12,     5,   513,
      13,     5,    12,     5,    13,   494,     5,    13,   211,     5,
      13,    22,   215,     5,   589,   590,   133,    12,   106,    12,
       5,    12,     5,    34,   513,    13,    37,    38,    39,    40,
      41,    42,    43,   159,   151,   524,   153,   154,    13,   528,
      13,    13,    13,   157,    13,   157,   157,   164,   157,   116,
     125,     5,   255,   256,    13,    13,   570,   116,   261,     5,
       5,    12,     5,    13,    13,    13,     5,    78,    12,   186,
       5,    13,   128,    13,   191,    86,   193,   280,   142,    13,
      91,   570,   657,   286,   125,   288,    13,   290,    13,    13,
      13,     5,   103,     5,   211,    13,    22,    13,   215,    16,
     589,   590,    13,   678,    13,   140,   140,   140,    34,    13,
      16,    37,    38,    39,    40,    41,    42,    43,   140,    16,
      16,   324,    16,   326,    13,    13,   329,    13,   139,   157,
      13,   125,   157,   336,    95,   125,   157,   340,   255,   256,
     116,   157,   340,   125,   261,   125,   125,    27,    69,   352,
     293,   354,    78,   161,   284,   358,   359,   290,   170,   188,
      86,   338,   206,   280,   678,    91,   302,   378,   657,   286,
     610,   288,   368,   290,   192,    -1,   247,   103,   521,   261,
      -1,    -1,    -1,   256,    -1,    -1,   191,   201,    -1,   678,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,   326,
      -1,    -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,   336,
      -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,   113,    -1,   352,    -1,   354,    -1,    -1,
     443,   358,   359,    -1,    -1,    -1,    -1,    -1,    -1,   452,
     453,    -1,    -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   494,    -1,    -1,    -1,    -1,    -1,   177,    -1,   179,
      -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,   188,    -1,
     513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,    -1,
      -1,   524,    -1,    -1,    -1,   528,   443,    -1,   208,    -1,
     210,    -1,    -1,    -1,    -1,   452,   453,    -1,    -1,    -1,
      -1,   458,    -1,    -1,    -1,    -1,    -1,   227,    -1,   229,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,   570,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   494,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   589,   590,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   513,   277,    -1,    -1,
      -1,    -1,    -1,    -1,   284,   285,    -1,   524,    -1,    -1,
      -1,   528,    -1,   293,    -1,    -1,    -1,   297,    -1,    -1,
      -1,    -1,   302,   303,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   314,    -1,   316,    -1,    -1,    -1,
      -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,
      -1,    -1,    -1,   570,   657,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   589,   590,    -1,   678,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,   379,
      -1,    -1,    -1,    -1,    -1,    -1,   386,   387,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     657,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   678,    -1,    -1,    -1,   445,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     460,    -1,    -1,   463,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    21,    -1,    -1,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,   511,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    49,    50,    -1,    52,    -1,    -1,    55,    -1,    57,
      -1,    -1,    -1,   533,   534,    -1,    -1,    65,    -1,    67,
      -1,    69,    70,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      88,    89,    90,    -1,    92,    93,    94,    95,    -1,    97,
      98,    -1,    -1,    -1,   574,   103,   104,    -1,   106,   107,
     108,    -1,   110,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,    -1,    -1,    -1,   135,   136,   137,
     138,    -1,   140,   141,    -1,   143,    -1,    -1,    -1,    -1,
     148,    -1,   150,   151,    -1,    -1,   154,   155,   156,   157,
      -1,    -1,    -1,    -1,   162,   163,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,
      -1,    18,    -1,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    28,    29,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    49,    50,    -1,    52,    -1,    -1,    55,    -1,
      57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    69,    70,    -1,    -1,    73,    -1,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    88,    89,    90,    -1,    92,    93,    94,    95,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,   106,
     107,   108,    -1,   110,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,    -1,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,   131,    -1,    -1,    -1,   135,   136,
     137,   138,    -1,   140,   141,    -1,   143,    -1,    -1,    -1,
      -1,   148,    -1,   150,   151,    -1,    -1,    -1,   155,   156,
     157,    -1,    -1,   160,    -1,   162,   163,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    17,    18,    -1,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,    55,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    69,    70,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,    89,    90,    -1,    92,    93,    94,    95,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,    -1,
     106,   107,   108,    -1,   110,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,   131,    -1,    -1,   134,   135,
     136,   137,   138,    -1,   140,   141,    -1,   143,    -1,    -1,
      -1,    -1,   148,    -1,   150,   151,    -1,    -1,    -1,   155,
     156,   157,    -1,    -1,    -1,    -1,   162,   163,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,
      -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    70,    -1,    -1,    73,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    88,    89,    90,    -1,    92,    93,    94,
      95,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,   104,
      -1,   106,   107,   108,    -1,   110,    -1,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,    -1,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    -1,    -1,    -1,
     135,   136,   137,   138,    -1,   140,   141,    -1,   143,    -1,
      -1,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,   154,
     155,   156,   157,    -1,    -1,    -1,    -1,   162,   163,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    67,    -1,    69,    70,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    88,    89,    90,    -1,    92,    93,
      94,    95,    -1,    97,    98,    -1,    -1,    -1,    -1,   103,
     104,    -1,   106,   107,   108,    -1,   110,    -1,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,    -1,   131,    -1,    -1,
      -1,   135,   136,   137,   138,    -1,   140,   141,    -1,   143,
      -1,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,
      -1,   155,   156,   157,    -1,    -1,    -1,    -1,   162,   163,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,
      -1,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    -1,    -1,    49,    50,    -1,    52,
      -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    69,    70,    -1,    -1,
      73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    89,    90,    -1,    92,
      93,    94,    95,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,   104,    -1,   106,   107,   108,    -1,   110,    -1,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,    -1,   122,
     123,   124,   125,   126,   127,   128,   129,    -1,   131,    -1,
      -1,    -1,   135,   136,   137,   138,    -1,   140,   141,    -1,
     143,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,
      -1,    -1,   155,   156,   157,    -1,    -1,   160,    -1,   162,
     163,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,    -1,
      52,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88,    89,    90,    -1,
      92,    93,    94,    95,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,   104,    -1,   106,   107,   108,    -1,   110,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,    -1,   131,
      -1,    -1,    -1,   135,   136,   137,   138,    -1,   140,   141,
      -1,   143,    -1,    -1,    -1,    -1,   148,    -1,   150,   151,
      -1,    -1,    -1,   155,   156,   157,    -1,    -1,    -1,    -1,
     162,   163,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      21,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    -1,    -1,    49,    50,
      -1,    52,    -1,    -1,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,
      -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    90,
      -1,    92,    93,    94,    95,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,   104,    -1,   106,   107,   108,    -1,   110,
      -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,    -1,
     131,    -1,    -1,    -1,   135,   136,   137,   138,    -1,   140,
     141,    -1,   143,    -1,    -1,    -1,    -1,   148,     3,   150,
     151,    -1,    -1,    -1,   155,   156,   157,    -1,    -1,    14,
      -1,   162,   163,    18,    -1,    -1,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    70,    -1,    -1,    73,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,
      95,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,   110,    -1,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,    -1,   122,   123,    -1,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,    -1,    -1,   140,   141,    -1,   143,    -1,
      -1,    -1,     3,   148,    -1,   150,   151,    -1,    -1,    -1,
     155,   156,   157,    14,    -1,   160,    -1,    18,    -1,    -1,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,
      -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    94,    95,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,   110,
      -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
      -1,   122,   123,    -1,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,   140,
     141,    -1,   143,     3,    -1,    -1,    -1,   148,    -1,   150,
     151,    -1,    -1,    -1,   155,   156,   157,    -1,    18,   160,
      -1,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      70,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    94,    95,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
     110,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,    -1,   122,   123,    -1,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
     140,   141,    -1,   143,     3,    -1,    -1,    -1,   148,    -1,
     150,   151,    -1,    -1,    -1,   155,   156,   157,    -1,    18,
     160,    -1,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      69,    70,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,
      89,    -1,    -1,    92,    93,    94,    95,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,
      -1,   110,    -1,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,    -1,   122,   123,    -1,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,
      -1,   140,   141,    -1,   143,     3,    -1,    -1,    -1,   148,
      -1,   150,   151,    -1,    -1,    -1,   155,   156,   157,    -1,
      18,   160,    -1,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    69,    70,    -1,    -1,    73,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      88,    89,    -1,    -1,    92,    93,    94,    95,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,   107,
     108,    -1,   110,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,    -1,   122,   123,    -1,   125,   126,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,
      -1,    -1,   140,   141,    -1,   143,     3,    -1,    -1,    -1,
     148,    -1,   150,   151,    -1,    -1,    -1,   155,   156,   157,
      -1,    18,   160,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    69,    70,    -1,    -1,    73,    -1,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    88,    89,    -1,    -1,    92,    93,    94,    95,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
     107,   108,    -1,   110,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,    -1,   122,   123,    -1,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,   136,
     137,    -1,    -1,   140,   141,    -1,   143,     3,    -1,    -1,
      -1,   148,    -1,   150,   151,    -1,    -1,    -1,   155,   156,
     157,    -1,    18,   160,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    69,    70,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,    95,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   107,   108,    -1,   110,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,    -1,   122,   123,    -1,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,    -1,    -1,   140,   141,    -1,   143,     3,    -1,
      -1,    -1,   148,    -1,   150,   151,    -1,    -1,    -1,   155,
     156,   157,    -1,    18,   160,    -1,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    70,    -1,    -1,    73,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,
      95,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,   110,    -1,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,    -1,   122,   123,    -1,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,    -1,    -1,   140,   141,    -1,   143,     3,
      -1,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,    -1,
     155,   156,   157,    -1,    18,   160,    -1,    21,    -1,    23,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    68,    69,    70,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    81,    82,    -1,
      84,    -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,    -1,
      -1,   105,   106,   107,   108,    -1,   110,    -1,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      -1,   125,   126,   127,   128,   129,    -1,    -1,    -1,   133,
      -1,   135,   136,   137,    -1,    -1,   140,   141,    -1,   143,
       3,     4,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,
      -1,   155,   156,   157,    -1,    18,    19,    -1,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
      -1,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    69,    70,    -1,    -1,
      73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    89,    -1,    -1,    92,
      93,    94,    95,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,   107,   108,    -1,   110,    -1,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,    -1,   122,
     123,    -1,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,    -1,    -1,   140,   141,    -1,
     143,     3,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,
      12,    -1,   155,   156,   157,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88,    89,    -1,    -1,
      92,    93,    94,    95,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   107,   108,    -1,   110,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,    -1,
     122,   123,    -1,   125,   126,   127,   128,   129,   130,    -1,
      -1,    -1,    -1,   135,   136,   137,    -1,    -1,   140,   141,
      -1,   143,     3,    -1,    -1,    -1,   148,    -1,   150,   151,
      -1,    12,   154,   155,   156,   157,    -1,    18,    -1,    -1,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,
      -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    94,    95,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,   110,
      -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
      -1,   122,   123,    -1,   125,   126,   127,   128,   129,   130,
      -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,   140,
     141,    -1,   143,     3,     4,    -1,    -1,   148,    -1,   150,
     151,    -1,    -1,    -1,   155,   156,   157,    -1,    18,    19,
      -1,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      70,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    94,    95,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
     110,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,    -1,   122,   123,    -1,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
     140,   141,    -1,   143,    -1,    -1,    -1,     3,   148,    -1,
     150,   151,    -1,    -1,    -1,   155,   156,   157,    14,    -1,
      -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    69,    70,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,    95,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   107,   108,    -1,   110,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,    -1,   122,   123,    -1,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,    -1,    -1,   140,   141,    -1,   143,     3,    -1,
      -1,    -1,   148,    -1,   150,   151,    -1,    12,    -1,   155,
     156,   157,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    69,    70,    -1,    -1,    73,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,
      95,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,   107,   108,    -1,   110,    -1,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,    -1,   122,   123,    -1,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,    -1,    -1,   140,   141,    -1,   143,     3,
       4,    -1,    -1,   148,    -1,   150,   151,    -1,    -1,    -1,
     155,   156,   157,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    69,    70,    -1,    -1,    73,
      -1,    75,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    88,    89,    -1,    -1,    92,    93,
      94,    95,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,   107,   108,    -1,   110,    -1,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,    -1,   122,   123,
      -1,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,    -1,    -1,   140,   141,    -1,   143,
      -1,    -1,    -1,     3,   148,    -1,   150,   151,    -1,    -1,
      -1,   155,   156,   157,    14,    -1,    -1,    -1,    18,    -1,
      -1,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      70,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    94,    95,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
     110,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,    -1,   122,   123,    -1,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
     140,   141,    -1,   143,    -1,    -1,    -1,     3,   148,    -1,
     150,   151,    -1,    -1,    -1,   155,   156,   157,    14,    -1,
      -1,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    69,    70,    -1,    -1,    73,    -1,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    88,    89,    -1,    -1,    92,    93,    94,    95,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   107,   108,    -1,   110,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,    -1,   122,   123,    -1,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,   135,
     136,   137,    -1,    -1,   140,   141,    -1,   143,    -1,    -1,
      -1,     3,   148,    -1,   150,   151,    -1,    -1,    -1,   155,
     156,   157,    14,    -1,    -1,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,    -1,
      -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    88,    89,    -1,    -1,
      92,    93,    94,    95,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   107,   108,    -1,   110,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,    -1,
     122,   123,    -1,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,   135,   136,   137,    -1,    -1,   140,   141,
      -1,   143,     3,    -1,    -1,    -1,   148,    -1,   150,   151,
      -1,    -1,    -1,   155,   156,   157,    -1,    18,    -1,    -1,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,
      -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,    -1,
      -1,    92,    93,    94,    95,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,   110,
      -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
      -1,   122,   123,    -1,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,   140,
     141,    -1,   143,     3,    -1,    -1,    -1,   148,    -1,   150,
     151,    -1,    -1,    -1,   155,   156,   157,    -1,    18,    -1,
      -1,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      70,    -1,    -1,    73,    -1,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,    89,
      -1,    -1,    92,    93,    94,    95,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,   107,   108,    -1,
     110,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,    -1,   122,   123,    -1,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
     140,   141,    -1,   143,    -1,    -1,    -1,    -1,   148,    -1,
     150,   151,    -1,    -1,    -1,   155,   156,   157
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    12,    56,    80,   130,   145,   154,   167,   168,   169,
     170,   171,   172,   175,   176,   179,   180,   181,   182,   183,
     185,   195,   181,    71,    85,    15,    59,   201,     3,    18,
      21,    24,    29,    32,    36,    45,    46,    52,    57,    65,
      69,    70,    73,    75,    77,    84,    88,    89,    92,    93,
      94,    95,    97,    98,   106,   107,   108,   110,   115,   116,
     117,   118,   119,   120,   122,   123,   125,   126,   127,   128,
     129,   135,   136,   137,   140,   141,   143,   148,   150,   151,
     155,   156,   157,   210,   241,   243,   259,   277,   278,   122,
     196,   197,   277,     0,    63,   158,   112,   189,   190,    66,
     144,    83,   181,    13,   210,   210,     4,     5,     6,     7,
       8,    10,    12,    28,    29,    35,    44,    49,    50,    55,
      90,   104,   124,   131,   138,   160,   162,   163,   184,   202,
     203,   209,   210,   220,   221,   222,   223,   224,   225,   233,
     234,   239,   240,   241,   242,   243,   244,   245,   259,   277,
     132,    14,   196,   159,    12,   198,   199,   168,    27,   201,
     201,   201,   153,   186,    12,    55,   147,   173,   174,   179,
     199,    12,   180,   220,   226,   220,   235,    12,    12,    12,
      12,    12,    12,    12,   224,   224,    71,   187,   159,    12,
       4,    19,    34,    37,   273,   274,   275,   276,   277,   162,
     163,   231,    96,   160,   164,   165,   232,   161,    12,    12,
      12,    14,   177,   178,   220,    14,   277,   196,   200,   277,
      19,   191,   192,   220,   182,   182,   183,    12,    67,   103,
     214,   215,   216,   217,   218,   219,   220,   147,   226,   174,
     179,   181,    13,   159,    13,   152,   236,   237,   220,   226,
     220,     5,    13,   220,    13,    12,   184,   204,   205,   206,
     207,   210,   211,   186,   202,    13,   226,   275,   221,   210,
     222,   223,   224,    15,    59,   160,   220,   271,    13,   220,
      14,   160,   277,   186,   159,    38,    14,   277,    14,    13,
     159,    12,   184,   159,    20,    58,   193,    12,   214,   220,
     184,   216,   111,    16,    86,    22,    38,    39,    40,    41,
      42,    43,    78,    86,    91,   103,   229,   230,   226,   214,
     220,    61,   238,   236,    19,    13,   146,    13,   159,    12,
     205,   211,   274,    47,    72,    79,    87,    90,   100,   124,
     159,   212,   273,    74,   188,    13,    13,    13,   220,   114,
     246,    13,    14,   277,    14,   177,   220,   277,    14,    14,
     277,   200,   191,    13,   215,   216,     6,     9,   103,   228,
     220,    12,   184,   227,     8,   103,   220,    22,    78,    91,
      15,    17,   134,   220,   272,   184,   139,   139,   220,    62,
      23,    24,    25,    26,    30,    31,    33,    51,    53,    54,
      60,    68,    81,    82,    84,    99,   101,   102,   105,   121,
     123,   133,   140,   141,   148,   210,   249,   250,   251,   252,
     253,   254,   260,   261,   262,   263,   264,   265,   266,   267,
     210,   220,    13,   199,   208,    87,   113,   213,   206,   213,
     212,   213,   204,    87,    27,    76,   194,   246,   246,    13,
      12,   277,    14,    14,   160,   277,   277,   277,    14,   228,
      16,   226,     8,    64,   220,   227,   220,   220,   220,    89,
      12,    12,    89,   149,    12,    89,   149,    12,    12,    12,
     117,    12,   129,   255,   256,   258,   259,    30,    31,    12,
      89,   149,    12,    12,    12,    12,   154,   155,    12,   154,
     155,    12,    13,    18,    98,    31,   276,   276,    13,    13,
     206,   109,   146,    87,   206,   201,   214,   246,    13,   115,
     118,   126,   190,   247,    14,   160,   277,   277,    14,   277,
     220,    13,   220,    16,    64,   106,     5,     5,   106,    12,
       5,   106,    12,     5,   268,     5,     5,     5,    12,   142,
      12,    12,   149,    12,    89,   149,     5,   106,    12,   268,
       5,   210,     5,   140,   140,     5,   140,   140,     5,    12,
     132,   214,   199,   206,   109,   146,   226,    27,     5,    22,
      48,   143,   248,   248,    13,   247,    13,   160,   277,    14,
      14,   160,   277,   220,   220,    12,    13,    13,    12,     5,
      13,    12,     5,    32,    36,    73,    88,    92,   107,   269,
     270,    13,    13,   159,    13,   159,    13,     5,   129,   257,
     259,     5,     5,    12,     5,   106,    12,    13,    12,     5,
      13,    13,   159,    13,    13,   157,   157,    13,   157,   157,
      13,     5,   210,   214,   199,   226,   116,     5,    48,   143,
     125,   116,    13,   160,   277,   160,   277,    14,     5,   268,
      13,   268,    13,   269,     5,     5,    13,   159,    12,    13,
      13,     5,    13,    12,     5,   268,    13,     5,   128,   154,
     155,   154,   155,    13,   276,    13,   190,   247,    69,   116,
     125,    69,   116,   160,   277,    13,    13,    13,    13,    13,
       5,     5,    13,   268,    13,    13,    13,   210,   140,   140,
     140,   140,    13,   247,    13,    16,    16,    16,    16,    16,
      13,    13,    13,   157,   157,   157,   157,    13,     5,    48,
     143,     5,    48,   143,     5,    48,   143,     5,    48,   143,
       5,    48,    54,   143,    69,   116,   125,    69,   116,    69,
     116,   125,    69,   116,    69,   116,   125,    69,   116,    69,
     116,   125,    69,   116,   116,   125,    69,    69,   116
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   166,   167,   168,   168,   169,   169,   169,   170,   171,
     171,   171,   172,   173,   173,   173,   173,   173,   174,   175,
     176,   177,   177,   178,   179,   180,   180,   181,   181,   181,
     182,   182,   183,   183,   184,   185,   186,   186,   187,   188,
     188,   189,   189,   190,   191,   191,   192,   193,   193,   193,
     194,   194,   195,   195,   196,   196,   197,   198,   198,   199,
     200,   200,   201,   201,   201,   202,   202,   203,   203,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   210,   210,   210,   210,
     210,   210,   210,   210,   211,   211,   211,   211,   211,   211,
     212,   212,   212,   212,   213,   213,   214,   214,   215,   215,
     216,   216,   217,   217,   217,   218,   218,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     220,   220,   220,   221,   221,   222,   222,   223,   223,   224,
     224,   224,   225,   225,   225,   225,   225,   225,   226,   226,
     227,   227,   228,   228,   229,   229,   229,   229,   229,   229,
     230,   231,   231,   232,   232,   232,   232,   233,   233,   233,
     233,   233,   233,   233,   234,   235,   235,   236,   236,   237,
     237,   238,   238,   239,   239,   239,   239,   240,   240,   240,
     240,   240,   240,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   242,   243,   243,   243,   244,   244,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   246,   246,   246,   246,   246,   246,   246,   246,   247,
     247,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   249,
     249,   249,   249,   250,   251,   252,   252,   252,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   254,
     255,   255,   256,   256,   257,   257,   257,   258,   258,   258,
     258,   258,   259,   259,   259,   259,   259,   260,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   262,
     262,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   264,   264,   264,   264,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   266,   266,   266,   266,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     268,   268,   268,   268,   269,   269,   269,   270,   270,   270,
     271,   271,   272,   272,   272,   273,   273,   274,   274,   275,
     275,   276,   277,   277,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     2,     1,     2,     2,     4,
       5,     1,     3,     3,     2,     1,     2,     1,     4,     4,
       1,     4,     1,     3,     3,     7,     0,     2,     2,     0,
       4,     0,     1,     3,     1,     3,     2,     0,     1,     1,
       0,     2,     2,     3,     1,     3,     4,     0,     1,     3,
       1,     3,     0,     1,     1,     1,     3,     2,     1,     1,
       3,     1,     1,     1,     3,     2,     3,     0,     1,     1,
       3,     3,     5,     5,     7,     7,     6,     6,     9,     9,
       8,     8,     8,     8,     7,     7,     1,     3,     5,     4,
       7,     6,     6,     5,     6,     5,     6,     5,     4,     5,
       2,     2,     2,     1,     0,     1,     1,     3,     1,     3,
       1,     2,     1,     3,     4,     1,     3,     3,     3,     5,
       6,     3,     5,     4,     6,     3,     4,     3,     4,     2,
       1,     2,     3,     1,     3,     1,     3,     1,     3,     1,
       2,     2,     1,     1,     3,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     0,     1,     1,     2,     4,
       4,     0,     2,     1,     1,     1,     1,     5,     4,     6,
       5,     5,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     1,     3,     4,     4,
       3,     3,     6,     6,     4,     1,     4,     1,     6,     1,
       1,     8,     5,     7,     7,     6,     4,     4,     3,     2,
       2,     2,     2,     2,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     1,
       1,     1,     1,     1,     6,     5,     2,     2,     5,     4,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       3,     1,     4,     1,     1,     4,     1,     4,     1,     6,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     7,
       7,     4,     4,     4,     7,     7,     4,     4,     4,     1,
       1,     6,     4,     6,     4,     6,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     2,     1,     1,     4,     4,
       5,     5,     4,     6,     3,     6,     3,     4,     1,     1,
       1,     6,     3,     4,     1,     5,     2,     5,     2,     4,
       6,     6,     5,     7,     4,     6,     3,     4,     1,     1,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 2792 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2798 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2804 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2810 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2816 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2822 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2828 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2834 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 167: /* sql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2840 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 168: /* stmt_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2846 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 169: /* stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2852 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 170: /* dql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2858 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 171: /* dml_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2864 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 172: /* insert_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2870 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 173: /* insert_columns_and_source  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2876 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 174: /* from_constructor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2882 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 175: /* delete_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2888 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 176: /* update_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2894 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 177: /* update_elem_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2900 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 178: /* update_elem  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2906 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* select_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2912 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* query_expression  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2918 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* query_expression_body  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2924 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* query_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2930 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* query_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2936 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* select_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2942 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* simple_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2948 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_where  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2954 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_from_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2960 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_groupby  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2966 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2972 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2978 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* sort_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2984 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* sort_key  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2990 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_asc_desc  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2996 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_having  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3002 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* with_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3008 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* with_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3014 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* common_table_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3020 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* opt_derived_column_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3026 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3032 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* simple_ident_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3038 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_distinct  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3044 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* select_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3050 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* projection  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3056 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* from_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3062 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* table_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3068 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* table_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3074 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* table_factor_non_join  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3080 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* column_ref  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3092 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* relation_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3098 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* joined_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3104 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* join_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3110 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* search_condition  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3116 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* boolean_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3122 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* boolean_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3128 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* boolean_test  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3134 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* boolean_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3140 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3146 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* row_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3152 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* factor0  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3158 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* factor1  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3164 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* factor2  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3170 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* factor3  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3176 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* factor4  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3182 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* row_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3188 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* in_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3194 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* truth_value  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3200 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* expr_const  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3206 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* case_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3212 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* case_arg  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3218 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* when_clause_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3224 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* when_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3230 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* case_default  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3236 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* func_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3242 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* aggregate_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3248 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* aggregate_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3254 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* ranking_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3260 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* ranking_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3266 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* scalar_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3272 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* function_call_keyword  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3278 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* over_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3284 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* row_or_range_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* window_frame_extent  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3296 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* data_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* user_defined_type_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3308 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* reference_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3314 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* collection_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3320 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* predefined_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3326 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* interval_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3332 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* interval_qualifier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3338 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 256: /* start_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3344 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 257: /* end_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3350 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* single_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3356 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* non_second_primary_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3362 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 260: /* boolean_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3368 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 261: /* datetime_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3374 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 262: /* numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3380 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 263: /* exact_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3386 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 264: /* approximate_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3392 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 265: /* character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3398 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 266: /* binary_large_object_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3404 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 267: /* national_character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3410 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 268: /* large_object_length  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3416 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 269: /* char_length_units  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3422 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 270: /* multiplier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3428 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 271: /* distinct_or_all  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3434 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 273: /* opt_as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3440 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 274: /* as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3446 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 275: /* label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3452 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 276: /* collate_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3458 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 277: /* name_r  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3464 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 278: /* reserved  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3470 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
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

#line 3587 "sqlparser_sql2003_bison.cpp" /* yacc.c:1429  */
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
#line 220 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 3781 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 231 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 3790 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 238 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3796 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 255 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT, E_INSERT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERT_SERIALIZE_FORMAT;
}
#line 3805 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 263 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3814 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 268 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3823 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 273 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3832 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 278 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3841 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 283 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* src = Node::makeTerminalNode(E_IDENTIFIER, "DEFAULT VALUES");
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, src);
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3851 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 292 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_VALUES_CTOR, E_VALUES_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 3860 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 301 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3877 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 318 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3895 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 336 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3904 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 344 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 3913 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 353 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_DIRECT_SELECT_ORDER, (yyvsp[0].node));
}
#line 3922 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 361 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 3931 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 366 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 3940 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 374 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3970 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 400 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4000 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 430 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4030 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 460 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4039 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 468 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4048 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 476 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4077 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 503 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4083 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 505 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4092 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 514 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4101 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 527 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4107 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 529 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4116 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 536 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4122 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 542 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4131 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 551 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4140 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 559 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4149 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 567 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4157 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 571 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4165 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 575 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4173 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 581 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4179 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 583 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4188 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 593 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4197 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 598 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 4206 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 607 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4215 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 616 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4224 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 623 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4230 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 629 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4239 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 638 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4248 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 645 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4254 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 647 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4262 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 651 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4270 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 659 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4279 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 667 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4297 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 681 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4307 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 691 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4316 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 705 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4325 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 717 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4334 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 722 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4343 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 729 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4349 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 736 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4359 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 742 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4369 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 748 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4380 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 755 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4390 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 761 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4401 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 768 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4411 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 774 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4422 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 781 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4432 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 787 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4443 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 794 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4453 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 800 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4464 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 807 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4474 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 813 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4485 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 820 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4495 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 826 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4506 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 833 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4516 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 839 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4527 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 850 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4536 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 855 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4545 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 860 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4554 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 865 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 870 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4572 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 875 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4581 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 880 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4590 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 885 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4599 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 893 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4608 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 898 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4618 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 904 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4627 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 909 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4637 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 915 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4647 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 921 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + (yyvsp[-2].node)->text());
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4657 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 930 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4672 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 941 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4687 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 952 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4702 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 963 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 4710 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 969 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4716 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 970 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 4722 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 977 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_OR);
}
#line 4731 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 986 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_AND);
}
#line 4740 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 995 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT);
}
#line 4749 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1004 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 4758 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1009 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 4767 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1018 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4776 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1026 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4785 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1031 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4794 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1036 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_BTW);
}
#line 4803 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1041 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_BTW);
}
#line 4812 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1046 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 4821 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1051 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 4830 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1056 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 4839 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1061 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 4848 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1066 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IN);
}
#line 4857 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1071 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_IN);
}
#line 4866 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1076 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 4875 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1081 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 4884 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1086 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_EXISTS);
}
#line 4893 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1096 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4902 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1101 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_CNN);
}
#line 4911 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1110 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4920 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1119 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4929 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1128 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POW);
}
#line 4938 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1137 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POS);
}
#line 4947 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1142 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NEG);
}
#line 4956 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1152 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4965 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1164 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4974 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1173 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4983 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1183 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 4989 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1184 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LT; }
#line 4995 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1185 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 5001 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1186 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GT; }
#line 5007 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1187 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_EQ; }
#line 5013 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1188 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5019 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1193 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.nodetype) = Node::comp_all_some_any_op_form((yyvsp[-1].nodetype), (yyvsp[0].ival));
}
#line 5027 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1199 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_ADD; }
#line 5033 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1200 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MINUS; }
#line 5039 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1204 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MUL; }
#line 5045 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1205 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_DIV; }
#line 5051 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1206 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_REM; }
#line 5057 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1207 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MOD; }
#line 5063 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1217 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5069 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1223 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_CASE);
}
#line 5078 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1230 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5084 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1237 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SPACE_LIST_SERIALIZE_FORMAT;
}
#line 5093 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1245 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5102 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1250 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5111 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1257 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5117 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1259 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5126 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1276 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5136 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1282 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5146 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1288 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5156 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1294 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5166 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1300 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5182 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1312 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5198 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1326 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "AVG"); }
#line 5204 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1327 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MAX"); }
#line 5210 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1328 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MIN"); }
#line 5216 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1329 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SUM"); }
#line 5222 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1330 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP"); }
#line 5228 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1331 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP"); }
#line 5234 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1332 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP"); }
#line 5240 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1333 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP"); }
#line 5246 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1334 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COUNT"); }
#line 5252 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1335 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING"); }
#line 5258 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1340 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5268 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1348 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANK"); }
#line 5274 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1349 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK"); }
#line 5280 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1350 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER"); }
#line 5286 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1355 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5296 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1361 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5306 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1373 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5316 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1379 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5327 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1386 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5338 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1393 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5349 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1400 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 5362 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1409 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5373 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1416 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5384 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1423 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5395 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1430 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5406 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1437 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5419 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1446 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5430 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1453 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5441 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1463 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5450 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1468 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5459 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1473 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5468 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1478 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5477 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1483 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5486 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1488 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5495 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1493 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5504 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1498 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5513 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1506 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, E_ROWS_CLAUSE_PROPERTY_CNT, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5523 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1512 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, E_RANGE_CLAUSE_PROPERTY_CNT, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5533 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1521 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 5539 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1523 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 5545 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1525 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 5551 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1527 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 5557 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1529 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1531 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 5569 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1533 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 5575 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1535 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5581 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1537 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 5587 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1539 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5593 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1541 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5599 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1543 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5605 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1545 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5611 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1547 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 5617 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1549 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5623 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1551 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 5629 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1553 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 5635 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1555 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5641 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1557 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 5647 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1559 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5653 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1561 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 5659 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1563 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 5665 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1565 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5671 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1567 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 5677 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1569 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5683 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1571 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5689 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1573 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5695 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1575 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5701 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1587 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5710 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1595 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5719 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1603 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 5729 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1609 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 5738 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1614 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 5747 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1622 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5756 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1627 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5765 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1632 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5774 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1638 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5783 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1652 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5792 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1660 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 5801 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1669 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5810 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1679 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1684 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5827 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1691 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5836 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1697 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5845 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1702 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5854 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1707 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5862 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1714 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 5870 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1718 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 5878 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1722 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 5886 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1726 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 5894 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1730 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 5902 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1737 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 5910 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1744 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 5918 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1748 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5927 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1753 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5936 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1758 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5945 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1763 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 5953 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1767 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 5961 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1771 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5970 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1776 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5979 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1781 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5988 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1786 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 5996 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1790 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 6004 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1802 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6013 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1807 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6022 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1812 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6031 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1817 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6040 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1822 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6049 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1827 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6058 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1832 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6066 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1836 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6074 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1840 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6082 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1844 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6090 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1848 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6098 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1852 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 6106 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1856 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 6114 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1863 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6123 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1868 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6131 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1872 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6139 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1876 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6147 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1883 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6156 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1888 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6165 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1893 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6174 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1898 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6183 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1903 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6192 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1908 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6201 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1913 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6209 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1917 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6218 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1922 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6226 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1926 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6235 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1931 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6243 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1935 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6251 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1939 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6259 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1946 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6268 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1951 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6276 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1955 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6285 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1960 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6293 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1967 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1972 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6310 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1976 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6319 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1981 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6327 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1985 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6336 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1990 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6345 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1995 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6354 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2000 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6363 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2005 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6372 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2010 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6380 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2014 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6389 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2019 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6397 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2023 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6406 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2028 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6414 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2032 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6422 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2039 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6431 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2044 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6440 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2049 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6449 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2054 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6458 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2062 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6466 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2066 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6474 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2070 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6482 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2077 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6490 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2081 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 6498 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2085 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 6506 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2092 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6514 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2096 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6522 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2102 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 6528 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2103 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 6534 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2104 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 6540 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2108 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6546 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2113 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 6552 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2125 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6561 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2142 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "K"); }
#line 6567 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2143 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "M"); }
#line 6573 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2144 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "G"); }
#line 6579 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2145 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ARRAY"); }
#line 6585 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2146 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BINARY"); }
#line 6591 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2147 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CAST"); }
#line 6597 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2148 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CHARACTERS"); }
#line 6603 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2149 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CODE_UNITS"); }
#line 6609 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2150 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CORRESPONDING"); }
#line 6615 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2151 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOLLOWING"); }
#line 6621 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2152 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "INTERVAL"); }
#line 6627 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2153 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "LARGE"); }
#line 6633 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2154 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MULTISET"); }
#line 6639 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2155 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OBJECT"); }
#line 6645 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2156 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OCTETS"); }
#line 6651 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2157 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ONLY"); }
#line 6657 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2158 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PARTITION"); }
#line 6663 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2159 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECEDING"); }
#line 6669 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2160 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECISION"); }
#line 6675 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2161 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANGE"); }
#line 6681 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2162 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RECURSIVE"); }
#line 6687 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2163 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "REF"); }
#line 6693 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2164 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW"); }
#line 6699 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2165 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROWS"); }
#line 6705 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2166 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SCOPE"); }
#line 6711 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2167 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SECOND"); }
#line 6717 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2168 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED"); }
#line 6723 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2169 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VARCHAR"); }
#line 6729 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2170 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "WITHOUT"); }
#line 6735 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2171 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ZONE"); }
#line 6741 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2172 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ERROR"); }
#line 6747 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2173 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOR"); }
#line 6753 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2174 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OF"); }
#line 6759 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2175 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "READ"); }
#line 6765 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2176 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIMESTAMP"); }
#line 6771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2177 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIME");  }
#line 6777 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;


#line 6781 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 2180 "./sqlparser_sql2003.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
