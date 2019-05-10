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
    SQL2003_COLLATE = 266,
    SQL2003_CROSS = 267,
    SQL2003_FULL = 268,
    SQL2003_INNER = 269,
    SQL2003_JOIN = 270,
    SQL2003_LEFT = 271,
    SQL2003_NATURAL = 272,
    SQL2003_RIGHT = 273,
    SQL2003_OR = 274,
    SQL2003_AND = 275,
    SQL2003_NOT = 276,
    SQL2003_COMP_LE = 277,
    SQL2003_COMP_LT = 278,
    SQL2003_COMP_EQ = 279,
    SQL2003_COMP_GT = 280,
    SQL2003_COMP_GE = 281,
    SQL2003_COMP_NE = 282,
    SQL2003_CNNOP = 283,
    SQL2003_LIKE = 284,
    SQL2003_BETWEEN = 285,
    SQL2003_IN = 286,
    SQL2003_IS = 287,
    SQL2003_MOD = 288,
    SQL2003_UMINUS = 289,
    SQL2003_ALL = 290,
    SQL2003_ANY = 291,
    SQL2003_ARRAY = 292,
    SQL2003_AS = 293,
    SQL2003_ASC = 294,
    SQL2003_AVG = 295,
    SQL2003_BIGINT = 296,
    SQL2003_BINARY = 297,
    SQL2003_BLOB = 298,
    SQL2003_BOOLEAN = 299,
    SQL2003_BY = 300,
    SQL2003_CASE = 301,
    SQL2003_CAST = 302,
    SQL2003_CHAR = 303,
    SQL2003_CHARACTER = 304,
    SQL2003_CHARACTERS = 305,
    SQL2003_CLOB = 306,
    SQL2003_COALESCE = 307,
    SQL2003_CODE_UNITS = 308,
    SQL2003_CONVERT = 309,
    SQL2003_CORRESPONDING = 310,
    SQL2003_COUNT = 311,
    SQL2003_CURRENT = 312,
    SQL2003_CURRENT_TIMESTAMP = 313,
    SQL2003_CURRENT_USER = 314,
    SQL2003_DATE = 315,
    SQL2003_DAY = 316,
    SQL2003_DEC = 317,
    SQL2003_DECIMAL = 318,
    SQL2003_DEFAULT = 319,
    SQL2003_DELETE = 320,
    SQL2003_DENSE_RANK = 321,
    SQL2003_DESC = 322,
    SQL2003_DISTINCT = 323,
    SQL2003_DOUBLE = 324,
    SQL2003_ELSE = 325,
    SQL2003_END = 326,
    SQL2003_END_P = 327,
    SQL2003_ERROR = 328,
    SQL2003_EXCEPT = 329,
    SQL2003_EXISTS = 330,
    SQL2003_FLOAT = 331,
    SQL2003_FOLLOWING = 332,
    SQL2003_FOR = 333,
    SQL2003_FROM = 334,
    SQL2003_G = 335,
    SQL2003_GROUP = 336,
    SQL2003_GROUPING = 337,
    SQL2003_HAVING = 338,
    SQL2003_HOUR = 339,
    SQL2003_INSERT = 340,
    SQL2003_INT = 341,
    SQL2003_INTEGER = 342,
    SQL2003_INTERSECT = 343,
    SQL2003_INTERVAL = 344,
    SQL2003_INTO = 345,
    SQL2003_K = 346,
    SQL2003_LARGE = 347,
    SQL2003_M = 348,
    SQL2003_MAX = 349,
    SQL2003_MIN = 350,
    SQL2003_MINUTE = 351,
    SQL2003_MONTH = 352,
    SQL2003_MULTISET = 353,
    SQL2003_NATIONAL = 354,
    SQL2003_NCHAR = 355,
    SQL2003_NCLOB = 356,
    SQL2003_NULLIF = 357,
    SQL2003_NUMERIC = 358,
    SQL2003_OBJECT = 359,
    SQL2003_OCTETS = 360,
    SQL2003_OF = 361,
    SQL2003_ON = 362,
    SQL2003_ONLY = 363,
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
    SQL2003_ROW = 376,
    SQL2003_ROWS = 377,
    SQL2003_ROW_NUMBER = 378,
    SQL2003_SCOPE = 379,
    SQL2003_SECOND = 380,
    SQL2003_SELECT = 381,
    SQL2003_SESSION_USER = 382,
    SQL2003_SET = 383,
    SQL2003_SMALLINT = 384,
    SQL2003_SOME = 385,
    SQL2003_STDDEV_POP = 386,
    SQL2003_STDDEV_SAMP = 387,
    SQL2003_SUM = 388,
    SQL2003_SYSTEM_USER = 389,
    SQL2003_THEN = 390,
    SQL2003_TIME = 391,
    SQL2003_TIMESTAMP = 392,
    SQL2003_TO = 393,
    SQL2003_UNBOUNDED = 394,
    SQL2003_UNION = 395,
    SQL2003_UPDATE = 396,
    SQL2003_USING = 397,
    SQL2003_VALUES = 398,
    SQL2003_VARCHAR = 399,
    SQL2003_VARYING = 400,
    SQL2003_VAR_POP = 401,
    SQL2003_VAR_SAMP = 402,
    SQL2003_WHEN = 403,
    SQL2003_WHERE = 404,
    SQL2003_WITH = 405,
    SQL2003_WITHOUT = 406,
    SQL2003_YEAR = 407,
    SQL2003_ZONE = 408
  };
#endif

/* Value type.  */
#if ! defined SQL2003_STYPE && ! defined SQL2003_STYPE_IS_DECLARED

union SQL2003_STYPE
{
#line 85 "./sqlparser_sql2003.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 325 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */
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

#line 355 "sqlparser_sql2003_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  90
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4627

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  165
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  420
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  756

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   408

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    37,     2,     2,
      41,    42,    35,    33,   164,    34,    43,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   163,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    39,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    38,    40,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162
};

#if SQL2003_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   215,   215,   225,   226,   234,   235,   236,   240,   244,
     245,   246,   250,   258,   263,   268,   273,   278,   287,   296,
     313,   330,   331,   339,   354,   362,   367,   374,   375,   401,
     430,   431,   460,   461,   469,   477,   505,   506,   515,   529,
     530,   538,   539,   543,   551,   552,   560,   569,   572,   576,
     583,   584,   594,   599,   607,   608,   617,   625,   626,   630,
     638,   639,   647,   648,   652,   659,   660,   668,   682,   691,
     692,   700,   701,   709,   714,   722,   723,   728,   734,   740,
     747,   753,   760,   766,   773,   779,   786,   792,   799,   805,
     812,   818,   825,   831,   842,   847,   852,   857,   862,   867,
     872,   877,   885,   890,   895,   901,   906,   912,   918,   927,
     938,   949,   960,   967,   968,   973,   974,   982,   983,   984,
     985,   986,   987,   988,   992,   993,   994,  1000,  1001,  1002,
    1003,  1011,  1012,  1017,  1022,  1027,  1032,  1037,  1042,  1047,
    1052,  1060,  1061,  1062,  1067,  1072,  1097,  1102,  1127,  1132,
    1157,  1162,  1187,  1192,  1217,  1222,  1247,  1252,  1257,  1262,
    1267,  1272,  1277,  1282,  1287,  1292,  1297,  1302,  1307,  1312,
    1317,  1322,  1330,  1331,  1340,  1348,  1349,  1353,  1354,  1362,
    1370,  1371,  1380,  1381,  1382,  1383,  1388,  1394,  1400,  1406,
    1412,  1424,  1439,  1440,  1441,  1442,  1443,  1444,  1445,  1446,
    1447,  1448,  1452,  1461,  1462,  1463,  1467,  1473,  1485,  1491,
    1498,  1505,  1512,  1521,  1528,  1535,  1542,  1549,  1558,  1565,
    1575,  1580,  1585,  1590,  1595,  1600,  1605,  1610,  1618,  1624,
    1633,  1635,  1637,  1639,  1641,  1643,  1645,  1647,  1649,  1651,
    1653,  1655,  1657,  1659,  1661,  1663,  1665,  1667,  1669,  1671,
    1673,  1675,  1677,  1679,  1681,  1683,  1685,  1687,  1692,  1693,
    1694,  1695,  1699,  1707,  1715,  1721,  1726,  1734,  1739,  1744,
    1749,  1750,  1755,  1756,  1757,  1758,  1759,  1760,  1764,  1772,
    1777,  1781,  1786,  1790,  1791,  1796,  1803,  1808,  1809,  1814,
    1819,  1826,  1830,  1834,  1838,  1842,  1849,  1856,  1860,  1865,
    1870,  1875,  1879,  1883,  1887,  1892,  1897,  1902,  1906,  1910,
    1917,  1918,  1922,  1927,  1932,  1936,  1941,  1946,  1950,  1955,
    1960,  1964,  1968,  1972,  1976,  1983,  1988,  1992,  1996,  2003,
    2008,  2012,  2017,  2021,  2026,  2031,  2036,  2041,  2045,  2050,
    2054,  2059,  2066,  2071,  2075,  2080,  2087,  2092,  2096,  2101,
    2105,  2110,  2114,  2119,  2124,  2129,  2134,  2138,  2143,  2147,
    2152,  2159,  2164,  2169,  2174,  2182,  2186,  2190,  2197,  2201,
    2205,  2212,  2216,  2223,  2224,  2225,  2229,  2230,  2234,  2235,
    2239,  2240,  2245,  2255,  2256,  2257,  2258,  2259,  2260,  2261,
    2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,  2271,
    2272,  2273,  2274,  2275,  2276,  2277,  2278,  2279,  2280,  2281,
    2282,  2283,  2284,  2285,  2286,  2287,  2288,  2289,  2290,  2291,
    2292
};
#endif

#if SQL2003_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "COLLATE", "CROSS",
  "FULL", "INNER", "JOIN", "LEFT", "NATURAL", "RIGHT", "OR", "AND", "NOT",
  "COMP_LE", "COMP_LT", "COMP_EQ", "COMP_GT", "COMP_GE", "COMP_NE",
  "CNNOP", "LIKE", "BETWEEN", "IN", "IS", "'+'", "'-'", "'*'", "'/'",
  "'%'", "MOD", "'^'", "UMINUS", "'('", "')'", "'.'", "ALL", "ANY",
  "ARRAY", "AS", "ASC", "AVG", "BIGINT", "BINARY", "BLOB", "BOOLEAN", "BY",
  "CASE", "CAST", "CHAR", "CHARACTER", "CHARACTERS", "CLOB", "COALESCE",
  "CODE_UNITS", "CONVERT", "CORRESPONDING", "COUNT", "CURRENT",
  "CURRENT_TIMESTAMP", "CURRENT_USER", "DATE", "DAY", "DEC", "DECIMAL",
  "DEFAULT", "DELETE", "DENSE_RANK", "DESC", "DISTINCT", "DOUBLE", "ELSE",
  "END", "END_P", "ERROR", "EXCEPT", "EXISTS", "FLOAT", "FOLLOWING", "FOR",
  "FROM", "G", "GROUP", "GROUPING", "HAVING", "HOUR", "INSERT", "INT",
  "INTEGER", "INTERSECT", "INTERVAL", "INTO", "K", "LARGE", "M", "MAX",
  "MIN", "MINUTE", "MONTH", "MULTISET", "NATIONAL", "NCHAR", "NCLOB",
  "NULLIF", "NUMERIC", "OBJECT", "OCTETS", "OF", "ON", "ONLY", "ORDER",
  "OUTER", "OVER", "PARTITION", "PRECEDING", "PRECISION", "RANGE", "RANK",
  "READ", "REAL", "RECURSIVE", "REF", "ROW", "ROWS", "ROW_NUMBER", "SCOPE",
  "SECOND", "SELECT", "SESSION_USER", "SET", "SMALLINT", "SOME",
  "STDDEV_POP", "STDDEV_SAMP", "SUM", "SYSTEM_USER", "THEN", "TIME",
  "TIMESTAMP", "TO", "UNBOUNDED", "UNION", "UPDATE", "USING", "VALUES",
  "VARCHAR", "VARYING", "VAR_POP", "VAR_SAMP", "WHEN", "WHERE", "WITH",
  "WITHOUT", "YEAR", "ZONE", "';'", "','", "$accept", "sql_stmt",
  "stmt_list", "stmt", "dql_stmt", "dml_stmt", "insert_stmt",
  "insert_columns_and_source", "from_constructor", "delete_stmt",
  "update_stmt", "update_elem_list", "update_elem", "select_stmt",
  "query_expression", "query_expression_body", "query_term",
  "query_primary", "select_with_parens", "simple_table", "opt_where",
  "opt_from_clause", "opt_groupby", "opt_order_by", "order_by",
  "sort_list", "sort_key", "opt_asc_desc", "opt_having", "with_clause",
  "with_list", "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_factor",
  "table_factor_non_join", "opt_simple_ident_list_with_parens",
  "column_ref", "relation_factor", "joined_table", "join_type",
  "join_outer", "expr_list", "expr_const", "simple_expr", "arith_expr",
  "expr", "in_expr", "case_expr", "case_arg", "when_clause_list",
  "when_clause", "case_default", "func_expr",
  "aggregate_windowed_function", "aggregate_function_name",
  "ranking_windowed_function", "ranking_function_name", "scalar_function",
  "function_call_keyword", "over_clause", "row_or_range_clause",
  "window_frame_extent", "data_type", "user_defined_type_name",
  "reference_type", "collection_type", "predefined_type", "interval_type",
  "interval_qualifier", "start_field", "end_field",
  "single_datetime_field", "non_second_primary_datetime_field",
  "boolean_type", "datetime_type", "numeric_type", "exact_numeric_type",
  "approximate_numeric_type", "character_string_type",
  "binary_large_object_string_type", "national_character_string_type",
  "large_object_length", "char_length_units", "multiplier",
  "distinct_or_all", "all_some_any", "opt_as_label", "as_label", "label",
  "collate_clause", "name_r", YY_NULLPTR
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
     285,   286,   287,    43,    45,    42,    47,    37,   288,    94,
     289,    40,    41,    46,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,    59,    44
};
# endif

#define YYPACT_NINF -489

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-489)))

#define YYTABLE_NINF -283

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     134,    35,   -49,   -10,   248,  4245,  4353,   114,    37,    17,
    -489,  -489,  -489,  -489,  -489,  -489,   107,   -39,   105,  -489,
    -489,    35,   -13,  4245,  4245,  -489,  -489,  1525,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,   103,  -489,  -489,  -489,   239,  4245,  -489,   124,   263,
    -489,  -489,   134,   257,  -489,  -489,   248,   248,   248,   -39,
    -489,   171,   111,  -489,  -489,  -489,  -489,  -489,  -489,   292,
     294,  1845,  2005,  2005,  -489,  1365,  1845,   300,   302,   315,
     317,  -489,  -489,   333,   344,   359,  -489,  -489,  -489,   313,
     246,  -489,   362,  -489,  -489,   533,  2268,  -489,  -489,  -489,
     371,  -489,   372,  -489,  -489,  -489,   373,    28,  1845,  2949,
    -489,  4245,  4245,   369,  -489,  -489,  1845,    35,    35,    35,
    1845,  -489,  2493,   269,  1845,  -489,  -489,  -489,    68,   388,
     389,   673,   445,   445,  1365,   392,   394,    29,  4595,   275,
    1845,  1845,  1845,   433,    -3,  -489,  1845,   184,  3057,   171,
    1525,  1685,  2005,  2005,  2005,  2005,  2005,  2005,  2005,  -489,
    4245,  1845,  1845,   267,  1045,  1045,  1045,  1045,  1045,  1045,
    1845,  1845,  2005,   399,   390,  3165,  -489,  -489,  -489,  -489,
    -489,  1205,   401,  1845,  2601,   171,   277,  4595,  3273,   402,
    -489,   410,   280,   333,  -489,   282,   944,   105,   105,  -489,
    4595,  -489,  -489,  -489,  -489,  -489,  -489,   -13,  -489,  -489,
    1845,  1845,   377,   275,  1010,   416,   811,   417,   750,  -489,
     406,     7,     7,   112,   419,  2376,  2733,  -489,    50,  -489,
    2733,  -489,   374,  -489,  -489,   423,   445,   445,   427,   427,
     427,   427,  -489,  -489,   653,   673,  1845,  2005,   399,  -489,
    -489,  -489,   466,   333,   466,   333,   466,   333,   466,   333,
     466,   333,   466,   333,   396,   338,   311,  1365,  -489,  -489,
    -489,  -489,  -489,   383,  -489,   425,  -489,  -489,  4499,  1845,
     349,  4523,  -489,  3381,    65,  -489,  1845,  4245,   428,  3489,
    -489,  4245,  -489,  1845,  -489,  -489,  -489,  -489,   874,  1845,
     398,  -489,  2122,  -489,  4245,  -489,  1845,  1845,   350,    11,
     358,   368,  -489,  -489,  -489,   449,  -489,  2376,   622,   450,
     263,   487,   384,  -489,  3057,   384,   404,   384,  3057,   492,
    -489,   454,   418,  -489,   338,   571,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  2005,   467,  -489,  -489,  -489,   349,   349,
    4547,  -489,  -489,  4245,   474,  2841,  -489,  -489,  4245,  4245,
     476,  -489,  -489,  1845,  4595,  -489,  -489,   420,   482,  -489,
      75,    78,   483,  -489,   484,   485,   405,   486,  -489,  -489,
     146,   321,    81,   489,   490,  -489,   491,  -489,    53,    62,
     493,  -489,   202,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,    32,  -489,   524,   495,  4571,   192,  -489,
       6,   408,    12,  -489,  -489,  -489,  -489,  -489,  -489,  3057,
    -489,  -489,   125,  -489,   525,  -489,  -489,  3057,   248,  1845,
    -489,  2005,   533,  -489,  -489,  -489,   349,   498,  3597,  -489,
    4245,   131,  -489,  -489,  4245,  4595,   429,   539,   540,   435,
     505,   545,   441,   514,   553,   555,   556,  -489,   558,   523,
    -489,   430,  -489,   -24,    34,    84,   569,   462,   535,   553,
     573,  4245,   574,   436,   437,   578,   440,   442,   584,  -489,
     551,  -489,   456,  -489,  -489,  -489,  -489,  -489,   189,   554,
     575,   579,   581,   582,   594,  -489,  1845,   263,  3057,   150,
    1845,  4595,   533,  -489,  3705,  -489,   153,   576,  3813,  -489,
     577,   580,   583,   585,   611,   587,   586,   615,   295,   588,
     -16,   -15,   589,   618,   194,   627,   636,   601,   638,   532,
     605,   607,   610,   642,   613,     5,   614,   616,   497,   499,
     620,   501,   502,   625,   643,  4245,  -489,   626,  -489,    25,
      30,    67,    69,    41,  4595,  -489,  -489,  1845,   263,  -489,
    -489,  -489,  3921,  4029,  -489,   271,   647,  -489,  -489,   553,
     629,  -489,   553,   645,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,   142,  -489,  -489,   648,  -489,   652,  -489,    36,   619,
    -489,  -489,   646,   664,   684,   668,   628,   685,  -489,   553,
     669,  -489,  -489,   707,   591,   -80,  -489,  -489,   -33,  -489,
    -489,  -489,   671,   524,  -489,    31,   590,   159,   163,   595,
     164,   167,   596,   168,   173,   598,   181,   592,   600,   632,
     205,  4595,  -489,  -489,  -489,  -489,  -489,  4137,   677,   679,
    -489,   690,  -489,  -489,   691,   692,  -489,   710,   730,   593,
    -489,   694,  -489,   553,   695,   696,  -489,   697,  4245,   602,
     603,   604,   608,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,   699,   701,  -489,
     703,  -489,  -489,  -489,  -489,   597,   623,   635,   639,  -489,
    -489,  -489,  -489,  -489,  -489,  -489
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     0,     0,    62,     0,     0,     0,     0,     3,
       6,     7,    11,    10,     9,     8,    41,    25,    27,    30,
      32,     0,     0,     0,     0,    63,    64,     0,   383,   390,
     192,   391,   392,   393,   394,   395,   200,   293,   204,   417,
     396,   418,   389,   201,   294,   397,   387,   398,   388,   193,
     194,   295,   292,   399,   400,   401,   419,   402,   403,   404,
     405,   406,   203,   420,   407,   408,   409,   410,   205,   411,
     412,   196,   197,   195,   413,   414,   198,   199,   415,   291,
     416,     0,   384,   385,   386,    94,   407,    52,    54,    57,
       1,     2,     5,     0,    24,    42,    62,    62,    62,    26,
      33,    36,     0,   117,   118,   120,   119,   121,   122,     0,
       0,     0,     0,     0,    68,     0,   175,   392,     0,     0,
     214,   216,   123,     0,     0,     0,   218,   219,   129,     0,
      65,   124,     0,   125,   131,   141,   376,   127,   128,   185,
     384,   184,   385,   183,   182,   142,   386,    77,     0,     0,
      53,     0,     0,     0,    58,     4,     0,     0,     0,     0,
       0,    19,     0,     0,     0,    12,    16,    13,     0,     0,
       0,   160,   132,   133,     0,     0,     0,   115,   176,     0,
       0,     0,     0,     0,     0,   130,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   381,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,   377,   379,   143,
     380,     0,     0,     0,     0,    36,    21,    23,     0,    95,
      55,     0,    60,     0,    43,    44,    47,    29,    28,    31,
      37,    17,    18,    15,    14,   210,   209,    25,    34,   126,
       0,     0,   180,   177,     0,     0,     0,     0,     0,   227,
       0,     0,     0,     0,     0,     0,     0,    38,    69,    71,
     376,    72,    39,    66,   206,     0,   134,   135,   136,   137,
     138,   140,   139,   382,   159,   158,     0,     0,     0,   373,
     375,   374,   144,     0,   146,     0,   148,     0,   152,     0,
     150,     0,   154,     0,   171,   156,     0,     0,   172,   169,
     163,   161,   165,     0,   378,     0,   371,   372,     0,     0,
       0,     0,    79,     0,    78,    20,     0,     0,    97,     0,
      59,     0,    56,     0,    48,    49,    46,   116,     0,     0,
       0,   178,     0,   213,     0,   215,     0,     0,     0,     0,
       0,     0,   229,   228,   225,     0,   226,     0,     0,    72,
      75,     0,   113,   112,     0,   113,     0,   113,     0,     0,
      73,     0,    50,   207,   157,     0,   170,   145,   147,   149,
     153,   151,   155,     0,     0,   164,   162,   166,   191,   187,
       0,   202,   208,     0,    97,     0,    22,   101,     0,     0,
      96,    61,    45,     0,   181,   174,   324,   391,   345,   296,
     332,   330,   341,   297,   320,   317,     0,   326,   323,   322,
     397,     0,   351,   360,   314,   327,   408,   321,   303,   309,
     414,   262,     0,   259,   260,   261,   258,   277,   275,   276,
     274,   310,   311,   270,   273,   272,     0,     0,     0,   231,
       0,     0,     0,   232,   230,   221,   102,    76,    74,     0,
     114,   109,     0,   110,     0,   111,    70,     0,    62,     0,
      35,     0,   167,   173,   190,   186,   189,   101,     0,    81,
       0,    80,    99,   100,     0,   179,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,     0,   290,
     278,     0,   280,   287,   349,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   211,
     265,   266,     0,   269,   271,   212,   217,   224,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
       0,    51,   168,   188,     0,    85,    84,   100,     0,    98,
     343,     0,     0,   339,     0,     0,   337,     0,   364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   358,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   223,     0,   222,     0,
       0,     0,     0,     0,   104,   106,   108,     0,     0,    40,
      93,    92,     0,     0,    83,    82,     0,   344,   331,     0,
       0,   329,     0,     0,   365,   366,   370,   368,   369,   367,
     363,   362,   340,   319,     0,   316,     0,   325,     0,   285,
     279,   283,     0,     0,     0,     0,   356,     0,   350,     0,
       0,   359,   313,     0,     0,   300,   301,   302,   306,   307,
     308,   335,     0,   268,   220,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   103,   105,    89,    88,    91,    90,     0,     0,     0,
     334,     0,   333,   361,     0,     0,   289,     0,     0,   286,
     348,     0,   346,     0,     0,     0,   354,     0,     0,     0,
       0,     0,     0,   264,   267,   257,   242,   247,   252,   237,
     254,   239,   244,   249,   234,   255,   240,   245,   250,   235,
     256,   241,   246,   251,   236,   238,   243,   253,   248,   233,
      87,    86,   342,   338,   336,   318,   315,     0,     0,   353,
       0,   352,   357,   312,   263,     0,     0,     0,     0,   288,
     284,   355,   298,   299,   304,   305
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -489,  -489,   654,  -489,  -489,  -489,  -489,  -489,   599,  -489,
    -489,   424,  -489,    13,  -489,    24,   207,   630,   154,  -489,
      22,  -489,  -489,  -489,  -176,   422,  -489,  -489,  -489,  -489,
     -50,  -489,  -489,   -98,   421,   -88,   561,  -489,   395,  -260,
    -489,  -489,  -489,    18,  -237,   434,   -48,  -157,  -489,  -489,
    -110,   606,   468,  -489,  -489,   507,  -489,  -489,  -489,  -489,
       9,  -489,   106,  -489,  -489,  -289,  -257,   496,  -489,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -489,    -5,  -489,
    -489,  -489,  -489,  -489,  -489,  -489,  -489,  -488,   144,  -489,
    -489,   307,   517,   518,   609,  -423,   400
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,   165,   166,    13,
      14,   225,   226,   175,    16,    17,    18,    19,   128,    20,
     161,   189,   372,    94,    95,   234,   235,   336,   470,    21,
      87,    88,   153,   154,   231,    27,   129,   130,   267,   268,
     269,   458,   131,   132,   271,   369,   461,   176,   133,   134,
     135,   177,   309,   137,   179,   252,   253,   340,   138,   139,
     140,   141,   142,   143,   144,   145,   264,   352,   432,   433,
     434,   435,   436,   437,   500,   501,   630,   502,   146,   438,
     439,   440,   441,   442,   443,   444,   445,   559,   620,   621,
     319,   293,   216,   217,   218,   219,   147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,    84,   172,   173,   168,   358,   355,   242,   157,   158,
     159,   263,   348,    15,    82,    82,   450,   565,    84,    84,
     523,   574,   524,    81,   255,    22,   623,   625,   359,   100,
     655,   391,    82,    82,   275,   658,   150,   349,     1,    23,
     200,   101,   102,   200,    96,    99,   667,   642,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   361,   362,   363,   364,   365,   366,   367,   -94,
      96,   224,   661,   350,   664,   566,     1,   451,   686,   699,
     700,    84,   276,   277,   278,   279,   280,   281,   282,    24,
     522,   656,   530,   337,   512,    82,   659,   358,   533,   474,
     475,   230,   306,   515,   462,    15,   -95,   668,   395,     1,
      97,    83,    83,   669,    90,   167,   488,   705,    91,   491,
     359,   679,   506,  -282,   681,   568,   701,   702,   531,    83,
      83,    84,     4,   662,   534,   665,    97,   361,   362,   363,
     364,   365,   366,   367,    84,    82,    84,    84,   624,   626,
     384,   695,   162,   706,   354,   351,     6,    84,    82,   452,
      82,    82,   361,   362,   363,   364,   365,   366,   367,   643,
       4,    82,   -96,   657,   548,     1,   489,   375,   660,   492,
      92,   244,   507,    84,   163,   569,    22,   543,   567,   670,
     448,   529,    83,   250,   -99,    84,   602,    82,   247,   535,
     687,   614,    98,     4,   615,   740,   270,   539,     2,    82,
      84,   272,   513,   514,   368,   663,    37,   666,   283,    84,
     164,   516,   517,    84,    82,    93,   259,     6,     3,   490,
     704,   586,   493,    82,   527,   508,   261,    82,   570,    44,
     148,   536,    83,   262,   519,   708,     4,   325,   520,   710,
     713,    51,    52,   715,   718,    83,   619,    83,    83,   720,
      84,    84,   457,   164,    37,    84,   597,   723,    83,     4,
       6,   587,   528,   472,    82,    82,   537,   185,   596,    82,
     499,   709,   149,   270,     5,   711,   714,    44,   151,   716,
     719,   728,    25,     6,    83,   721,   286,   287,   288,    51,
      52,   598,    93,   724,   152,   260,    83,    79,   261,   521,
      93,   156,   -98,   261,   677,   262,   261,   463,    84,   465,
     262,    83,    84,   262,    84,    26,    84,   729,   629,   160,
      83,   383,    82,   169,    83,   170,    82,    84,    82,    84,
      82,   180,   266,   181,   192,   193,   194,   195,   196,   197,
     198,    82,    84,    82,   614,    79,   182,   615,   183,    84,
     431,   542,   446,    84,   237,   238,    82,   308,   212,   213,
     214,    83,    83,    82,   184,   270,    83,    82,   504,   505,
     540,   247,   270,   599,   616,   186,   270,   332,    84,   385,
      84,   386,   387,    84,    84,   617,   310,   618,   311,   312,
     187,   188,    82,   191,    82,    85,    89,    82,    82,   619,
     190,   313,   221,   222,   223,   503,   233,   362,   363,   266,
     365,   241,   367,    85,    85,   211,   212,   213,   214,    83,
     245,   246,   251,    83,   248,    83,   249,    83,   257,   595,
     307,   326,   308,   320,   331,   329,   333,   377,    83,   378,
      83,   379,   330,   380,    84,   381,   339,   382,   343,   345,
     347,   356,    84,    83,   371,   373,   198,   388,    82,   125,
      83,   398,   449,    84,    83,    84,    82,   270,   405,    84,
     194,   195,   196,   197,   198,   270,    89,    82,   453,    82,
     454,   455,   456,    82,   210,   211,   212,   213,   214,    83,
     672,    83,   459,   460,    83,    83,    84,   467,   468,   473,
     469,   266,   295,   297,   299,   301,   303,   478,   266,   484,
      82,   486,   266,   487,   494,   495,   496,   498,   497,   576,
     509,   510,   511,    84,   518,   200,   220,   525,   532,    84,
     538,   544,   550,    84,   551,   552,   554,    82,   553,   229,
     555,    89,   232,    82,   556,   557,   270,    82,   558,   631,
     560,   561,   232,   562,   563,    83,   192,   193,   194,   195,
     196,   197,   198,    83,   571,   572,   573,   564,   575,   577,
      84,   578,   579,   580,    83,   581,    83,   582,    85,   583,
      83,   471,   584,   585,    82,   589,   588,    84,    84,   590,
      85,   591,   592,   653,   192,   193,   194,   195,   196,   197,
     198,    82,    82,   266,   593,   220,   610,    83,   606,   603,
     613,   266,   607,   628,   324,   608,   609,   612,   328,   611,
     622,   627,   632,   136,   361,   362,   363,   364,   365,   366,
     367,   633,   634,   635,    83,   636,   637,   640,   652,   638,
      83,   639,   678,   684,    83,   641,   644,   685,   645,   646,
     688,   647,   648,   649,   650,    85,   220,   651,   654,   693,
     220,   680,    84,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,    82,   682,   689,   691,
     694,    83,   266,    84,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   690,    82,    83,    83,
     692,   696,   697,   703,   725,   737,   744,   171,   727,   732,
     707,   733,   178,   394,   698,   712,   717,   397,   722,   400,
     726,   232,   734,   735,   736,   738,   739,   741,   742,   743,
    -281,   749,    85,   750,    85,   751,   155,   745,   746,   747,
     396,   273,   401,   748,   227,   402,   376,    85,   353,   752,
     341,   200,   236,   466,    85,   683,   240,   243,    85,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,    83,   360,   753,   254,   370,   256,   239,
       0,     0,   258,   477,     0,   481,   136,   754,   482,   483,
     464,   755,     0,     0,    83,     0,     0,   284,   285,     0,
     292,   294,   296,   298,   300,   302,   304,   305,     0,     0,
       0,     0,   200,     0,   314,     0,     0,   318,     0,   321,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   338,     0,    85,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   546,     0,
     547,     0,     0,     0,   549,   200,     0,     0,     0,     0,
       0,     0,   374,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,     0,     0,     0,
       0,    85,     0,     0,   346,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   390,     0,     0,     0,     0,
       0,     0,   227,     0,     0,     0,     0,     0,    85,   236,
       0,     0,     0,     0,   601,   404,     0,     0,   605,     0,
       0,     0,   447,     0,     0,   200,     0,     0,     0,     0,
       0,     0,   344,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,     0,     0,     0,
       0,     0,   334,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   674,   676,     0,     0,     0,     0,     0,   485,
       0,     0,     0,     0,     0,     0,     0,     0,   403,     0,
     335,   200,     0,     0,     0,     0,     0,     0,     0,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,     0,     0,     0,     0,     0,    28,   103,
     104,   105,   106,   107,     0,   108,     0,   342,     0,     0,
       0,   109,     0,   110,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,   541,     0,   731,   112,   113,
       0,     0,     0,     0,     0,     0,   115,     0,     0,   289,
     290,    29,     0,     0,    30,     0,    31,     0,    85,     0,
     116,   117,     0,     0,    33,     0,   118,    34,   119,    35,
      36,     0,   120,   121,     0,    37,     0,     0,   122,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,   123,
       0,    40,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,   594,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,   124,     0,    54,    55,
      56,     0,    57,     0,     0,   125,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
       0,   126,     0,     0,   291,    71,    72,    73,   127,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,     0,
      76,    77,     0,   671,     0,    78,    79,    80,    28,   103,
     104,   105,   106,   107,     0,   108,     0,     0,     0,     0,
       0,   109,     0,   110,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     315,     0,     0,     0,     0,     0,   115,     0,     0,   316,
       0,    29,     0,     0,    30,     0,    31,     0,     0,     0,
     116,   117,     0,     0,    33,     0,   118,    34,   119,    35,
      36,     0,   120,   121,     0,    37,     0,     0,   122,     0,
      38,     0,   317,     0,     0,     0,     0,    39,     0,   123,
       0,    40,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,   124,     0,    54,    55,
      56,     0,    57,     0,     0,   125,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
       0,   126,     0,     0,     0,    71,    72,    73,   127,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,     0,
      76,    77,     0,     0,     0,    78,    79,    80,    28,   103,
     104,   105,   106,   107,     0,   108,     0,     0,     0,     0,
       0,   109,     0,   110,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
       0,     0,     0,     0,     0,     0,   174,     0,     0,     0,
       0,    29,     0,     0,    30,     0,    31,     0,     0,     0,
     116,   117,     0,     0,    33,     0,   118,    34,   119,    35,
      36,     0,   120,   121,     0,    37,     0,     0,   122,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,   123,
       0,    40,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,   124,     0,    54,    55,
      56,     0,    57,     0,     0,   125,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
       4,   126,     0,     0,     0,    71,    72,    73,   127,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,     0,
      76,    77,     0,     0,     6,    78,    79,    80,    28,   103,
     104,   105,   106,   107,     0,   108,     0,     0,     0,     0,
       0,   109,     0,   110,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     114,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,    29,     0,     0,    30,     0,    31,     0,     0,     0,
     116,   117,     0,     0,    33,     0,   118,    34,   119,    35,
      36,     0,   120,   121,     0,    37,     0,     0,   122,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,   123,
       0,    40,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,   124,     0,    54,    55,
      56,     0,    57,     0,     0,   125,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
       0,   126,     0,     0,     0,    71,    72,    73,   127,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,     0,
      76,    77,     0,     0,     0,    78,    79,    80,    28,   103,
     104,   105,   106,   107,     0,   108,     0,     0,     0,     0,
       0,   109,     0,   110,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
       0,     0,     0,     0,     0,     0,   115,   274,     0,     0,
       0,    29,     0,     0,    30,     0,    31,     0,     0,     0,
     116,   117,     0,     0,    33,     0,   118,    34,   119,    35,
      36,     0,   120,   121,     0,    37,     0,     0,   122,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,   123,
       0,    40,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,   124,     0,    54,    55,
      56,     0,    57,     0,     0,   125,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
       0,   126,     0,     0,     0,    71,    72,    73,   127,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,     0,
      76,    77,     0,     0,     0,    78,    79,    80,    28,   103,
     104,   105,   106,   107,     0,   108,     0,     0,     0,     0,
       0,   109,     0,   110,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,    29,     0,     0,    30,     0,    31,     0,     0,     0,
     116,   117,     0,     0,    33,     0,   118,    34,   119,    35,
      36,     0,   120,   121,     0,    37,     0,     0,   122,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,   123,
       0,    40,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,   124,     0,    54,    55,
      56,     0,    57,     0,     0,   125,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
       0,   126,     0,     0,     0,    71,    72,    73,   127,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,     0,
      76,    77,     0,     0,     0,    78,    79,    80,    28,   103,
     104,   105,   106,   107,     0,   108,     0,     0,     0,     0,
       0,   109,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   113,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,    29,     0,     0,    30,     0,    31,     0,     0,     0,
     116,   117,     0,     0,    33,     0,   118,    34,   119,    35,
      36,     0,   120,   121,     0,    37,     0,     0,   122,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,   123,
       0,    40,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,   124,     0,    54,    55,
      56,     0,    57,     0,     0,    28,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
       0,   126,     0,     0,     0,    71,    72,    73,   127,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,     0,
      76,    77,     0,     0,     0,    78,    79,    80,    29,     0,
       0,    30,   406,   407,   408,   409,     0,     0,    32,   410,
     411,    33,   412,     0,    34,     0,    35,    36,     0,     0,
       0,   413,    37,   414,   415,     0,     0,    38,     0,     0,
     416,     0,     0,     0,    39,     0,     0,   417,    40,    41,
       0,    42,     0,    43,     0,    44,     0,   418,   419,     0,
     420,     0,    46,    47,    48,    49,    50,    51,    52,    53,
     421,   422,   423,     0,   424,    54,    55,    56,     0,    57,
       0,     0,     0,    58,    59,    60,    61,    62,    63,   425,
      64,   426,    66,    67,    68,    69,    70,     0,     0,     0,
     427,     0,    71,    72,    73,     0,     0,   428,   429,     0,
      74,    28,   199,     0,     0,   430,     0,    76,    77,   200,
       0,     0,    78,    79,    80,     0,     0,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,   215,     0,    30,     0,    31,
       0,     0,     0,     0,    32,     0,     0,    33,     0,     0,
      34,     0,    35,    36,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,    42,     0,    43,
       0,    44,     0,     0,     0,     0,    45,     0,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,     0,    28,
       0,    54,    55,    56,     0,    57,     0,     0,     0,    58,
      59,    60,    61,    62,    63,     0,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,   357,     0,     0,
       0,    75,    29,    76,    77,    30,     0,    31,    78,    79,
      80,     0,    32,     0,     0,    33,     0,     0,    34,     0,
      35,    36,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,    42,     0,    43,     0,    44,
       0,     0,     0,     0,    45,     0,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,    28,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,     4,     0,     0,     0,     0,    71,    72,    73,     0,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    75,
       0,    76,    77,     0,     1,     6,    78,    79,    80,    29,
       0,     0,    30,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,    34,     0,    35,    36,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,    45,     0,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,    28,     0,    54,    55,    56,     0,
      57,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,     4,     0,
       0,     0,     0,    71,    72,    73,   322,     0,     0,     0,
       0,    74,     0,     0,   323,     0,    75,    29,    76,    77,
      30,     0,    31,    78,    79,    80,     0,    32,     0,     0,
      33,     0,     0,    34,     0,    35,    36,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,    40,    41,     0,
      42,     0,    43,     0,    44,     0,     0,     0,     0,    45,
       0,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,    54,    55,    56,     0,    57,     0,
       0,     0,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    28,   199,     0,     0,
       0,    71,    72,    73,     0,     0,     0,     0,     0,    74,
       0,     0,     0,     0,    75,     0,    76,    77,     0,     0,
       0,    78,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
     215,     0,    30,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,    34,     0,    35,    36,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,    45,     0,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,    28,     0,    54,    55,    56,     0,
      57,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,    71,    72,    73,   479,     0,     0,     0,
       0,    74,     0,     0,   480,     0,    75,    29,    76,    77,
      30,     0,    31,    78,    79,    80,     0,    32,     0,     0,
      33,     0,     0,    34,     0,    35,    36,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,    40,    41,     0,
      42,     0,    43,     0,    44,     0,     0,     0,     0,    45,
       0,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,    28,     0,    54,    55,    56,     0,    57,     0,
       0,     0,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    71,    72,    73,     0,     0,     0,     0,     0,    74,
       0,     0,   228,     0,    75,    29,    76,    77,    30,     0,
      31,    78,    79,    80,     0,    32,     0,     0,    33,     0,
       0,    34,     0,    35,    36,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,    40,    41,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
      28,     0,    54,    55,    56,     0,    57,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,    71,
      72,    73,     0,     0,     0,     0,     0,    74,   265,     0,
       0,     0,    75,    29,    76,    77,    30,     0,    31,    78,
      79,    80,     0,    32,     0,     0,    33,     0,     0,    34,
       0,    35,    36,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,    40,    41,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,    45,     0,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,    28,   199,
      54,    55,    56,     0,    57,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,    71,    72,    73,
       0,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      75,    29,    76,    77,    30,     0,    31,    78,    79,    80,
       0,    32,     0,     0,    33,     0,     0,    34,     0,    35,
      36,     0,     0,     0,     0,    37,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,    40,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,    28,     0,    54,    55,
      56,     0,    57,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
       0,     0,     0,    74,     0,     0,   327,     0,    75,    29,
      76,    77,    30,     0,    31,    78,    79,    80,     0,    32,
       0,     0,    33,     0,     0,    34,     0,    35,    36,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,    45,     0,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,    28,     0,    54,    55,    56,     0,
      57,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,    71,    72,    73,     0,     0,     0,     0,
       0,    74,     0,     0,   393,     0,    75,    29,    76,    77,
      30,     0,    31,    78,    79,    80,     0,    32,     0,     0,
      33,     0,     0,    34,     0,    35,    36,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,    40,    41,     0,
      42,     0,    43,     0,    44,     0,     0,     0,     0,    45,
       0,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,    28,     0,    54,    55,    56,     0,    57,     0,
       0,     0,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    71,    72,    73,     0,     0,     0,     0,     0,    74,
       0,     0,   399,     0,    75,    29,    76,    77,    30,     0,
      31,    78,    79,    80,     0,    32,     0,     0,    33,     0,
       0,    34,     0,    35,    36,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,    40,    41,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
      28,     0,    54,    55,    56,     0,    57,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,    71,
      72,    73,   545,     0,     0,     0,     0,    74,     0,     0,
       0,     0,    75,    29,    76,    77,    30,     0,    31,    78,
      79,    80,     0,    32,     0,     0,    33,     0,     0,    34,
       0,    35,    36,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,    40,    41,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,    45,     0,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,    28,     0,
      54,    55,    56,     0,    57,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,    71,    72,    73,
     600,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      75,    29,    76,    77,    30,     0,    31,    78,    79,    80,
       0,    32,     0,     0,    33,     0,     0,    34,     0,    35,
      36,     0,     0,     0,     0,    37,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,    40,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,    28,     0,    54,    55,
      56,     0,    57,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,   604,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,    29,
      76,    77,    30,     0,    31,    78,    79,    80,     0,    32,
       0,     0,    33,     0,     0,    34,     0,    35,    36,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,    45,     0,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,    28,     0,    54,    55,    56,     0,
      57,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,    71,    72,    73,   673,     0,     0,     0,
       0,    74,     0,     0,     0,     0,    75,    29,    76,    77,
      30,     0,    31,    78,    79,    80,     0,    32,     0,     0,
      33,     0,     0,    34,     0,    35,    36,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,    40,    41,     0,
      42,     0,    43,     0,    44,     0,     0,     0,     0,    45,
       0,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,    28,     0,    54,    55,    56,     0,    57,     0,
       0,     0,    58,    59,    60,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    71,    72,    73,   675,     0,     0,     0,     0,    74,
       0,     0,     0,     0,    75,    29,    76,    77,    30,     0,
      31,    78,    79,    80,     0,    32,     0,     0,    33,     0,
       0,    34,     0,    35,    36,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,    40,    41,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
      28,     0,    54,    55,    56,     0,    57,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,    71,
      72,    73,   730,     0,     0,     0,     0,    74,     0,     0,
       0,     0,    75,    29,    76,    77,    30,     0,    31,    78,
      79,    80,     0,    32,     0,     0,    33,     0,     0,    34,
       0,    35,    36,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,    40,    41,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,    45,     0,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,    28,     0,
      54,    55,    56,     0,    57,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,    71,    72,    73,
       0,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      75,    29,    76,    77,    30,     0,    31,    78,    79,    80,
       0,    32,     0,     0,    33,     0,     0,    34,     0,    35,
      36,     0,     0,     0,     0,    37,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,    40,    41,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,    45,     0,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,    28,     0,    54,    55,
      56,     0,    57,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,    29,
      76,    77,    30,     0,    31,    78,    79,    80,     0,    32,
       0,     0,    33,     0,     0,    34,     0,    35,    36,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,    45,     0,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,    54,    55,    56,     0,
      57,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    86,    65,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,    71,    72,    73,     0,     0,     0,     0,
       0,    74,     0,     0,     0,     0,    75,     0,    76,    77,
     200,     0,     0,    78,    79,    80,     0,     0,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,     0,     0,   200,     0,     0,     0,     0,     0,
       0,   389,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,     0,     0,   200,     0,
       0,     0,     0,     0,     0,   392,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
       0,     0,   200,     0,     0,     0,     0,     0,     0,   476,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,     0,     0,   200,     0,     0,     0,
       0,     0,     0,   526,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214
};

static const yytype_int16 yycheck[] =
{
       5,     6,   112,   113,   102,   265,   263,   164,    96,    97,
      98,   187,     5,     0,     5,     6,     5,    41,    23,    24,
     443,   509,   445,     5,   181,     1,    42,    42,   265,    42,
       5,   320,    23,    24,   191,     5,    86,    30,    41,    88,
      11,    23,    24,    11,    83,    21,     5,    42,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    12,    13,    14,    15,    16,    17,    18,    41,
      83,    43,     5,    66,     5,    41,    41,    66,    42,   159,
     160,    86,   192,   193,   194,   195,   196,   197,   198,    99,
      58,    66,    86,   250,    41,    86,    66,   357,    86,   388,
     389,   151,   212,    41,   364,    92,    41,    66,    43,    41,
     149,     5,     6,    72,     0,   102,    41,    86,    81,    41,
     357,   609,    41,   147,   612,    41,   159,   160,   122,    23,
      24,   136,   135,    66,   122,    66,   149,    12,    13,    14,
      15,    16,    17,    18,   149,   136,   151,   152,   164,   164,
     307,   639,    41,   122,    42,   148,   159,   162,   149,   148,
     151,   152,    12,    13,    14,    15,    16,    17,    18,   164,
     135,   162,    41,   148,    43,    41,   101,   287,   148,   101,
     163,   168,   101,   188,    73,   101,   162,   476,   154,   148,
     347,   448,    86,   164,    41,   200,    43,   188,   174,   459,
     164,    59,    97,   135,    62,   693,   188,   467,    74,   200,
     215,   189,   159,   160,   164,   148,    70,   148,   200,   224,
     152,   159,   160,   228,   215,   118,    42,   159,    94,   154,
     653,    42,   154,   224,    42,   154,   124,   228,   154,    93,
     137,   116,   136,   131,    42,    86,   135,   225,    46,    86,
      86,   105,   106,    86,    86,   149,   114,   151,   152,    86,
     265,   266,   360,   152,    70,   270,   116,    86,   162,   135,
     159,   528,   448,   383,   265,   266,   151,   123,   538,   270,
     134,   122,    43,   265,   150,   122,   122,    93,   164,   122,
     122,    86,    44,   159,   188,   122,    29,    30,    31,   105,
     106,   151,   118,   122,    41,   121,   200,   161,   124,   107,
     118,    54,    41,   124,    43,   131,   124,   365,   323,   367,
     131,   215,   327,   131,   329,    77,   331,   122,   134,   158,
     224,    20,   323,    41,   228,    41,   327,   342,   329,   344,
     331,    41,   188,    41,    33,    34,    35,    36,    37,    38,
      39,   342,   357,   344,    59,   161,    41,    62,    41,   364,
     342,   471,   344,   368,   157,   158,   357,   213,    30,    31,
      32,   265,   266,   364,    41,   357,   270,   368,    57,    58,
     468,   357,   364,   540,    89,    41,   368,   233,   393,     6,
     395,     8,     9,   398,   399,   100,     6,   102,     8,     9,
      41,    88,   393,    41,   395,     5,     6,   398,   399,   114,
     164,    21,    41,    41,    41,   420,    47,    13,    14,   265,
      16,   152,    18,    23,    24,    29,    30,    31,    32,   323,
      42,    42,   157,   327,    42,   329,    42,   331,     5,   537,
      41,   164,   288,    42,   164,    43,   164,   293,   342,   295,
     344,   297,    42,   299,   459,   301,    79,   303,    42,    42,
      54,    42,   467,   357,    90,    42,    39,    42,   459,   120,
     364,    43,   122,   478,   368,   480,   467,   459,    80,   484,
      35,    36,    37,    38,    39,   467,    86,   478,   130,   480,
     122,    42,    42,   484,    28,    29,    30,    31,    32,   393,
     598,   395,    15,   119,   398,   399,   511,    15,    54,    42,
      92,   357,   205,   206,   207,   208,   209,    43,   364,    43,
     511,   101,   368,    41,    41,    41,    41,    41,   123,   511,
      41,    41,    41,   538,    41,    11,   136,    42,   130,   544,
      15,    43,   113,   548,     5,     5,    41,   538,   113,   149,
       5,   151,   152,   544,   113,    41,   538,   548,     5,   564,
       5,     5,   162,     5,    41,   459,    33,    34,    35,    36,
      37,    38,    39,   467,     5,   113,    41,   147,     5,     5,
     585,   145,   145,     5,   478,   145,   480,   145,   188,     5,
     484,    20,    41,   137,   585,    20,    42,   602,   603,    20,
     200,    20,    20,   585,    33,    34,    35,    36,    37,    38,
      39,   602,   603,   459,    20,   215,     5,   511,    41,    43,
       5,   467,    42,     5,   224,    42,    41,    41,   228,    42,
      42,    42,     5,    27,    12,    13,    14,    15,    16,    17,
      18,     5,    41,     5,   538,   113,    41,     5,     5,    42,
     544,    41,     5,     5,   548,    42,    42,     5,    42,   162,
      41,   162,    42,   162,   162,   265,   266,    42,    42,    41,
     270,    42,   677,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,   677,    42,    42,     5,
       5,   585,   538,   698,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    42,   698,   602,   603,
      42,    42,     5,    42,   122,     5,   698,   111,    86,    42,
     130,    42,   116,   323,   133,   130,   130,   327,   130,   329,
     130,   331,    42,    42,    42,     5,    42,    42,    42,    42,
     147,    42,   342,    42,   344,    42,    92,   145,   145,   145,
     326,   190,   331,   145,   148,   333,   288,   357,   262,   162,
     253,    11,   156,   368,   364,   621,   160,   168,   368,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,   677,   266,   162,   180,   270,   182,   159,
      -1,    -1,   186,   393,    -1,   395,   190,   162,   398,   399,
     366,   162,    -1,    -1,   698,    -1,    -1,   201,   202,    -1,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,    -1,
      -1,    -1,    11,    -1,   215,    -1,    -1,   221,    -1,   223,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,    -1,   459,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   467,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   478,    -1,
     480,    -1,    -1,    -1,   484,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   286,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,   511,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,    -1,    -1,
      -1,    -1,   326,    -1,    -1,    -1,    -1,    -1,   538,   333,
      -1,    -1,    -1,    -1,   544,   339,    -1,    -1,   548,    -1,
      -1,    -1,   346,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,   151,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   585,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   602,   603,    -1,    -1,    -1,    -1,    -1,   403,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,
      76,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    47,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   469,    -1,   677,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      45,    46,    -1,    -1,    49,    -1,    51,    -1,   698,    -1,
      55,    56,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    -1,    67,    68,    -1,    70,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,
      -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      -1,    -1,   536,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
      -1,   136,    -1,    -1,   139,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,    -1,
     155,   156,    -1,   597,    -1,   160,   161,   162,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      -1,    46,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    -1,    67,    68,    -1,    70,    -1,    -1,    73,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    84,
      -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
      -1,   136,    -1,    -1,    -1,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,    -1,
     155,   156,    -1,    -1,    -1,   160,   161,   162,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    -1,    67,    68,    -1,    70,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,
      -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
     135,   136,    -1,    -1,    -1,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,    -1,
     155,   156,    -1,    -1,   159,   160,   161,   162,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    -1,    67,    68,    -1,    70,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,
      -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
      -1,   136,    -1,    -1,    -1,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,    -1,
     155,   156,    -1,    -1,    -1,   160,   161,   162,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    -1,    67,    68,    -1,    70,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,
      -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
      -1,   136,    -1,    -1,    -1,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,    -1,
     155,   156,    -1,    -1,    -1,   160,   161,   162,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    -1,    67,    68,    -1,    70,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,
      -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,   117,    -1,    -1,   120,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
      -1,   136,    -1,    -1,    -1,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,    -1,
     155,   156,    -1,    -1,    -1,   160,   161,   162,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      55,    56,    -1,    -1,    59,    -1,    61,    62,    63,    64,
      65,    -1,    67,    68,    -1,    70,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    84,
      -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,   117,    -1,    -1,     3,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
      -1,   136,    -1,    -1,    -1,   140,   141,   142,   143,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,    -1,
     155,   156,    -1,    -1,    -1,   160,   161,   162,    46,    -1,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    56,    57,
      58,    59,    60,    -1,    62,    -1,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    -1,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    82,    -1,    -1,    85,    86,    87,
      -1,    89,    -1,    91,    -1,    93,    -1,    95,    96,    -1,
      98,    -1,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,   115,    -1,   117,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
     138,    -1,   140,   141,   142,    -1,    -1,   145,   146,    -1,
     148,     3,     4,    -1,    -1,   153,    -1,   155,   156,    11,
      -1,    -1,   160,   161,   162,    -1,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    59,    -1,    -1,
      62,    -1,    64,    65,    -1,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      -1,    93,    -1,    -1,    -1,    -1,    98,    -1,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,     3,
      -1,   113,   114,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,    -1,    -1,    -1,   140,   141,
     142,    -1,    -1,    -1,    -1,    -1,   148,    41,    -1,    -1,
      -1,   153,    46,   155,   156,    49,    -1,    51,   160,   161,
     162,    -1,    56,    -1,    -1,    59,    -1,    -1,    62,    -1,
      64,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,
      -1,    -1,    -1,    -1,    98,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,   113,
     114,   115,    -1,   117,    -1,    -1,     3,   121,   122,   123,
     124,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
     134,   135,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,
      -1,   155,   156,    -1,    41,   159,   160,   161,   162,    46,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    59,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    -1,    93,    -1,    -1,    -1,
      -1,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,     3,    -1,   113,   114,   115,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,   140,   141,   142,    35,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    43,    -1,   153,    46,   155,   156,
      49,    -1,    51,   160,   161,   162,    -1,    56,    -1,    -1,
      59,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    -1,    -1,    -1,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,    -1,    -1,   113,   114,   115,    -1,   117,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,   134,     3,     4,    -1,    -1,
      -1,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,   153,    -1,   155,   156,    -1,    -1,
      -1,   160,   161,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    59,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    -1,    93,    -1,    -1,    -1,
      -1,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,     3,    -1,   113,   114,   115,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,   134,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,    35,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    43,    -1,   153,    46,   155,   156,
      49,    -1,    51,   160,   161,   162,    -1,    56,    -1,    -1,
      59,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    -1,    -1,    -1,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,     3,    -1,   113,   114,   115,    -1,   117,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    43,    -1,   153,    46,   155,   156,    49,    -1,
      51,   160,   161,   162,    -1,    56,    -1,    -1,    59,    -1,
      -1,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    -1,    -1,    -1,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
       3,    -1,   113,   114,   115,    -1,   117,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,    -1,    -1,    -1,    -1,    -1,   148,    41,    -1,
      -1,    -1,   153,    46,   155,   156,    49,    -1,    51,   160,
     161,   162,    -1,    56,    -1,    -1,    59,    -1,    -1,    62,
      -1,    64,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    -1,
      93,    -1,    -1,    -1,    -1,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,     3,     4,
     113,   114,   115,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
     153,    46,   155,   156,    49,    -1,    51,   160,   161,   162,
      -1,    56,    -1,    -1,    59,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,     3,    -1,   113,   114,
     115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    43,    -1,   153,    46,
     155,   156,    49,    -1,    51,   160,   161,   162,    -1,    56,
      -1,    -1,    59,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    -1,    93,    -1,    -1,    -1,
      -1,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,     3,    -1,   113,   114,   115,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,   134,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    43,    -1,   153,    46,   155,   156,
      49,    -1,    51,   160,   161,   162,    -1,    56,    -1,    -1,
      59,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    -1,    -1,    -1,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,     3,    -1,   113,   114,   115,    -1,   117,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,    -1,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    43,    -1,   153,    46,   155,   156,    49,    -1,
      51,   160,   161,   162,    -1,    56,    -1,    -1,    59,    -1,
      -1,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    -1,    -1,    -1,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
       3,    -1,   113,   114,   115,    -1,   117,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,    35,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,   153,    46,   155,   156,    49,    -1,    51,   160,
     161,   162,    -1,    56,    -1,    -1,    59,    -1,    -1,    62,
      -1,    64,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    -1,
      93,    -1,    -1,    -1,    -1,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,     3,    -1,
     113,   114,   115,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
      35,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
     153,    46,   155,   156,    49,    -1,    51,   160,   161,   162,
      -1,    56,    -1,    -1,    59,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,     3,    -1,   113,   114,
     115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,    35,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,    46,
     155,   156,    49,    -1,    51,   160,   161,   162,    -1,    56,
      -1,    -1,    59,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    -1,    93,    -1,    -1,    -1,
      -1,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,     3,    -1,   113,   114,   115,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,   134,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,    35,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,   153,    46,   155,   156,
      49,    -1,    51,   160,   161,   162,    -1,    56,    -1,    -1,
      59,    -1,    -1,    62,    -1,    64,    65,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    -1,    93,    -1,    -1,    -1,    -1,    98,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,     3,    -1,   113,   114,   115,    -1,   117,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,    -1,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,   140,   141,   142,    35,    -1,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,   153,    46,   155,   156,    49,    -1,
      51,   160,   161,   162,    -1,    56,    -1,    -1,    59,    -1,
      -1,    62,    -1,    64,    65,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    -1,    93,    -1,    -1,    -1,    -1,    98,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
       3,    -1,   113,   114,   115,    -1,   117,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,   140,
     141,   142,    35,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,   153,    46,   155,   156,    49,    -1,    51,   160,
     161,   162,    -1,    56,    -1,    -1,    59,    -1,    -1,    62,
      -1,    64,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    -1,
      93,    -1,    -1,    -1,    -1,    98,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,     3,    -1,
     113,   114,   115,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,    -1,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,    -1,    -1,   140,   141,   142,
      -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
     153,    46,   155,   156,    49,    -1,    51,   160,   161,   162,
      -1,    56,    -1,    -1,    59,    -1,    -1,    62,    -1,    64,
      65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    -1,    93,    -1,
      -1,    -1,    -1,    98,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,     3,    -1,   113,   114,
     115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,    -1,   128,   129,   130,   131,   132,   133,   134,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,    -1,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,    46,
     155,   156,    49,    -1,    51,   160,   161,   162,    -1,    56,
      -1,    -1,    59,    -1,    -1,    62,    -1,    64,    65,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    -1,    93,    -1,    -1,    -1,
      -1,    98,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
      -1,   128,   129,   130,   131,   132,   133,   134,    -1,    -1,
      -1,    -1,    -1,   140,   141,   142,    -1,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,   153,    -1,   155,   156,
      11,    -1,    -1,   160,   161,   162,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    74,    94,   135,   150,   159,   166,   167,   168,
     169,   170,   171,   174,   175,   178,   179,   180,   181,   182,
     184,   194,   180,    88,    99,    44,    77,   200,     3,    46,
      49,    51,    56,    59,    62,    64,    65,    70,    75,    82,
      86,    87,    89,    91,    93,    98,   100,   101,   102,   103,
     104,   105,   106,   107,   113,   114,   115,   117,   121,   122,
     123,   124,   125,   126,   128,   129,   130,   131,   132,   133,
     134,   140,   141,   142,   148,   153,   155,   156,   160,   161,
     162,   208,   225,   227,   243,   261,   128,   195,   196,   261,
       0,    81,   163,   118,   188,   189,    83,   149,    97,   180,
      42,   208,   208,     4,     5,     6,     7,     8,    10,    16,
      18,    21,    33,    34,    35,    41,    55,    56,    61,    63,
      67,    68,    73,    84,   111,   120,   136,   143,   183,   201,
     202,   207,   208,   213,   214,   215,   216,   218,   223,   224,
     225,   226,   227,   228,   229,   230,   243,   261,   137,    43,
     195,   164,    41,   197,   198,   167,    54,   200,   200,   200,
     158,   185,    41,    73,   152,   172,   173,   178,   198,    41,
      41,   216,   215,   215,    41,   178,   212,   216,   216,   219,
      41,    41,    41,    41,    41,   183,    41,    41,    88,   186,
     164,    41,    33,    34,    35,    36,    37,    38,    39,     4,
      11,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    47,   257,   258,   259,   260,
     261,    41,    41,    41,    43,   176,   177,   216,    43,   261,
     195,   199,   261,    47,   190,   191,   216,   181,   181,   182,
     216,   152,   212,   173,   178,    42,    42,   180,    42,    42,
     164,   157,   220,   221,   216,   212,   216,     5,   216,    42,
     121,   124,   131,   189,   231,    41,   183,   203,   204,   205,
     208,   209,   185,   201,    42,   212,   215,   215,   215,   215,
     215,   215,   215,   208,   216,   216,    29,    30,    31,    44,
      45,   139,   216,   256,   216,   256,   216,   256,   216,   256,
     216,   256,   216,   256,   216,   216,   215,    41,   183,   217,
       6,     8,     9,    21,   259,    35,    44,    77,   216,   255,
      42,   216,    35,    43,   261,   185,   164,    43,   261,    43,
      42,   164,   183,   164,    48,    76,   192,   212,   216,    79,
     222,   220,    47,    42,   151,    42,   164,    54,     5,    30,
      66,   148,   232,   232,    42,   231,    42,    41,   204,   209,
     258,    12,    13,    14,    15,    16,    17,    18,   164,   210,
     257,    90,   187,    42,   216,   215,   217,   183,   183,   183,
     183,   183,   183,    20,   212,     6,     8,     9,    42,    42,
     216,   230,    42,    43,   261,    43,   176,   261,    43,    43,
     261,   199,   190,   144,   216,    80,    50,    51,    52,    53,
      57,    58,    60,    69,    71,    72,    78,    85,    95,    96,
      98,   108,   109,   110,   112,   127,   129,   138,   145,   146,
     153,   208,   233,   234,   235,   236,   237,   238,   244,   245,
     246,   247,   248,   249,   250,   251,   208,   216,   212,   122,
       5,    66,   148,   130,   122,    42,    42,   198,   206,    15,
     119,   211,   204,   211,   210,   211,   203,    15,    54,    92,
     193,    20,   215,    42,   230,   230,    42,   261,    43,    35,
      43,   261,   261,   261,    43,   216,   101,    41,    41,   101,
     154,    41,   101,   154,    41,    41,    41,   123,    41,   134,
     239,   240,   242,   243,    57,    58,    41,   101,   154,    41,
      41,    41,    41,   159,   160,    41,   159,   160,    41,    42,
      46,   107,    58,   260,   260,    42,    42,    42,   189,   231,
      86,   122,   130,    86,   122,   204,   116,   151,    15,   204,
     200,   216,   215,   230,    43,    35,   261,   261,    43,   261,
     113,     5,     5,   113,    41,     5,   113,    41,     5,   252,
       5,     5,     5,    41,   147,    41,    41,   154,    41,   101,
     154,     5,   113,    41,   252,     5,   208,     5,   145,   145,
       5,   145,   145,     5,    41,   137,    42,   231,    42,    20,
      20,    20,    20,    20,   216,   198,   204,   116,   151,   212,
      35,   261,    43,    43,    35,   261,    41,    42,    42,    41,
       5,    42,    41,     5,    59,    62,    89,   100,   102,   114,
     253,   254,    42,    42,   164,    42,   164,    42,     5,   134,
     241,   243,     5,     5,    41,     5,   113,    41,    42,    41,
       5,    42,    42,   164,    42,    42,   162,   162,    42,   162,
     162,    42,     5,   208,    42,     5,    66,   148,     5,    66,
     148,     5,    66,   148,     5,    66,   148,     5,    66,    72,
     148,   216,   198,    35,   261,    35,   261,    43,     5,   252,
      42,   252,    42,   253,     5,     5,    42,   164,    41,    42,
      42,     5,    42,    41,     5,   252,    42,     5,   133,   159,
     160,   159,   160,    42,   260,    86,   122,   130,    86,   122,
      86,   122,   130,    86,   122,    86,   122,   130,    86,   122,
      86,   122,   130,    86,   122,   122,   130,    86,    86,   122,
      35,   261,    42,    42,    42,    42,    42,     5,     5,    42,
     252,    42,    42,    42,   208,   145,   145,   145,   145,    42,
      42,    42,   162,   162,   162,   162
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   165,   166,   167,   167,   168,   168,   168,   169,   170,
     170,   170,   171,   172,   172,   172,   172,   172,   173,   174,
     175,   176,   176,   177,   178,   179,   179,   180,   180,   180,
     181,   181,   182,   182,   183,   184,   185,   185,   186,   187,
     187,   188,   188,   189,   190,   190,   191,   192,   192,   192,
     193,   193,   194,   194,   195,   195,   196,   197,   197,   198,
     199,   199,   200,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   208,   208,   208,   208,   208,   208,
     208,   208,   209,   209,   209,   209,   209,   209,   209,   210,
     210,   210,   210,   211,   211,   212,   212,   213,   213,   213,
     213,   213,   213,   213,   214,   214,   214,   214,   214,   214,
     214,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   217,   217,   218,   219,   219,   220,   220,   221,
     222,   222,   223,   223,   223,   223,   224,   224,   224,   224,
     224,   224,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   226,   227,   227,   227,   228,   228,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     230,   230,   230,   230,   230,   230,   230,   230,   231,   231,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   233,   233,
     233,   233,   234,   235,   236,   236,   236,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   238,   239,
     239,   240,   240,   241,   241,   241,   242,   242,   242,   242,
     242,   243,   243,   243,   243,   243,   244,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     246,   246,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   248,   248,   248,   248,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   250,   250,   250,   250,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   252,   252,   252,   252,   253,   253,   253,   254,   254,
     254,   255,   255,   256,   256,   256,   257,   257,   258,   258,
     259,   259,   260,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     2,     1,     2,     2,     4,
       5,     1,     3,     1,     2,     1,     2,     1,     4,     4,
       1,     4,     1,     3,     3,     7,     0,     2,     2,     0,
       4,     0,     1,     3,     1,     3,     2,     0,     1,     1,
       0,     2,     2,     3,     1,     3,     4,     0,     1,     3,
       1,     3,     0,     1,     1,     1,     3,     2,     1,     1,
       3,     1,     1,     2,     3,     0,     1,     1,     3,     3,
       5,     5,     7,     7,     6,     6,     9,     9,     8,     8,
       8,     8,     7,     7,     1,     3,     5,     4,     7,     6,
       6,     5,     3,     6,     5,     6,     5,     4,     5,     2,
       2,     2,     1,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       2,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     2,     3,     4,     3,     4,     3,     4,
       3,     4,     3,     4,     3,     4,     3,     4,     3,     3,
       2,     3,     4,     3,     4,     3,     4,     5,     6,     3,
       4,     3,     1,     3,     5,     0,     1,     1,     2,     4,
       0,     2,     1,     1,     1,     1,     5,     4,     6,     5,
       5,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     3,     4,     4,     3,
       3,     6,     6,     4,     1,     4,     1,     6,     1,     1,
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
       1,     1,     1,     1,     1,     1,     0,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2615 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2621 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2627 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2633 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2639 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2645 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2651 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2657 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 166: /* sql_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2663 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 167: /* stmt_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2669 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 168: /* stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2675 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 169: /* dql_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2681 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 170: /* dml_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2687 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 171: /* insert_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2693 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 172: /* insert_columns_and_source  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2699 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 173: /* from_constructor  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2705 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 174: /* delete_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2711 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 175: /* update_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2717 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 176: /* update_elem_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2723 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 177: /* update_elem  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2729 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 178: /* select_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2735 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* query_expression  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2741 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* query_expression_body  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2747 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* query_term  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2753 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* query_primary  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2759 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* select_with_parens  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2765 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* simple_table  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_where  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2777 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_from_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2783 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_groupby  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2789 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_order_by  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* order_by  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2801 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* sort_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2807 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* sort_key  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2813 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_asc_desc  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_having  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2825 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* with_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2831 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* with_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2837 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* common_table_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2843 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_derived_column_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2849 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* simple_ident_list_with_parens  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2855 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* simple_ident_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2861 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_distinct  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2867 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* select_expr_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2873 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* projection  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2879 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* from_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2885 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* table_factor  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2891 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* table_factor_non_join  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2897 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_simple_ident_list_with_parens  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2903 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* column_ref  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2909 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* relation_factor  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2915 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* joined_table  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2921 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* join_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2927 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* expr_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2933 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* expr_const  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2939 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* simple_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2945 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* arith_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2951 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2957 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* in_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2963 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* case_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2969 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* case_arg  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2975 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* when_clause_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2981 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* when_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2987 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* case_default  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2993 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* func_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2999 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* aggregate_windowed_function  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3005 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* aggregate_function_name  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3011 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* ranking_windowed_function  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3017 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* ranking_function_name  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3023 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* scalar_function  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3029 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* function_call_keyword  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3035 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* over_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3041 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* row_or_range_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3047 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* window_frame_extent  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3053 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* data_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3059 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* user_defined_type_name  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3065 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* reference_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3071 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* collection_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3077 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* predefined_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3083 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* interval_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3089 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* interval_qualifier  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3095 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* start_field  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3101 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* end_field  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3107 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* single_datetime_field  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3113 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* non_second_primary_datetime_field  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3119 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* boolean_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3125 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* datetime_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3131 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* numeric_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3137 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* exact_numeric_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3143 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* approximate_numeric_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3149 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* character_string_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3155 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* binary_large_object_string_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3161 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* national_character_string_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3167 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* large_object_length  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3173 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* char_length_units  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3179 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* multiplier  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3185 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* distinct_or_all  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3191 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 257: /* opt_as_label  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3197 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* as_label  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3203 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* label  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3209 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 260: /* collate_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3215 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 261: /* name_r  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3221 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
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

#line 3338 "sqlparser_sql2003_bison.cpp" /* yacc.c:1429  */
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
#line 216 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 3532 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 227 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 3541 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 234 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3547 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 251 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT, E_INSERT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERT_SERIALIZE_FORMAT;
}
#line 3556 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 259 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3565 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 264 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3574 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 269 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3583 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 274 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3592 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 279 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* src = Node::makeTerminalNode(E_IDENTIFIER, "DEFAULT VALUES");
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, src);
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3602 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 288 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_VALUES_CTOR, E_VALUES_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 3611 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 297 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3628 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 314 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3646 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 332 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3655 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 340 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3670 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 355 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_DIRECT_SELECT_ORDER, (yyvsp[0].node));
}
#line 3679 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 363 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 3688 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 368 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 3697 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 376 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3727 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 402 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3757 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 432 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3787 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 462 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3796 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 470 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3805 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 478 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3834 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 505 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3840 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 507 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 3849 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 516 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 3858 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 529 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3864 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 531 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 3873 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 538 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3879 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 544 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 3888 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 553 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3897 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 561 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 3906 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 569 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 3914 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 573 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 3922 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 577 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 3930 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 583 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3936 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 585 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 3945 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 595 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 3954 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 600 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 3963 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 609 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3972 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 618 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 3981 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 625 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3987 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 631 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3996 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 640 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4005 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 647 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4011 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 649 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4019 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 653 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4027 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 661 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4036 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 669 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4054 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 683 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4064 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 693 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4073 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 710 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4082 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 715 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4091 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 722 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4097 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 729 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4107 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 735 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4117 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 741 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4128 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 748 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4138 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 754 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4149 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 761 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4159 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 767 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4170 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 774 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4180 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 780 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4191 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 787 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4201 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 793 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4212 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 800 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4222 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 806 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4233 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 813 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4243 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 819 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4254 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 826 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4264 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 832 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4275 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 843 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4284 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 848 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4293 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 853 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 858 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4311 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 863 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4320 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 868 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4329 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 873 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4338 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 878 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4347 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 886 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4356 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 891 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4365 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 896 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4375 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 902 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4384 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 907 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4394 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 913 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4404 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 919 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + (yyvsp[-2].node)->text());
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4414 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 928 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4429 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 939 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4444 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 950 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4459 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 961 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 4467 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 967 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4473 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 968 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 4479 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 975 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4488 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 988 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 4494 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 995 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4504 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1004 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 4513 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1013 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 4522 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1018 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 4531 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1023 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 4540 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1028 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 4549 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1033 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 4558 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1038 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 4567 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1043 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 4576 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1048 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 4585 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1053 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 4594 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1063 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4603 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1068 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 4612 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1073 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4641 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1098 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 4650 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1103 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4679 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1128 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4688 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1133 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4717 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1158 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 4726 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1163 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4755 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1188 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 4764 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1193 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4793 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1218 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 4802 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1223 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4831 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1248 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 4840 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1253 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 4849 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1258 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 4858 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1263 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 4867 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1268 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 4876 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1273 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4885 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1278 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4894 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1283 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4903 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1288 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4912 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1293 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4921 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1298 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4930 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1303 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 4939 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1308 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 4948 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1313 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 4957 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1318 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 4966 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1323 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 4975 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1332 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4984 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1341 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 4993 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1348 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4999 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1355 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SPACE_LIST_SERIALIZE_FORMAT;
}
#line 5008 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1363 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5017 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1370 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5023 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1372 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5032 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1389 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5042 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1395 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5052 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1401 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5062 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1407 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5072 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1413 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5088 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1425 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5104 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1439 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "AVG"); }
#line 5110 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1440 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MAX"); }
#line 5116 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1441 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MIN"); }
#line 5122 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1442 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SUM"); }
#line 5128 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1443 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP"); }
#line 5134 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1444 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP"); }
#line 5140 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1445 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP"); }
#line 5146 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1446 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP"); }
#line 5152 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1447 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COUNT"); }
#line 5158 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1448 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING"); }
#line 5164 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1453 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5174 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1461 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANK"); }
#line 5180 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1462 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK"); }
#line 5186 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1463 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER"); }
#line 5192 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1468 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5202 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1474 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5212 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1486 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5222 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1492 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5233 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1499 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5244 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1506 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5255 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1513 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 5268 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1522 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5279 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1529 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1536 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5301 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1543 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5312 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1550 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5325 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1559 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5336 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1566 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5347 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1576 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5356 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1581 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5365 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1586 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5374 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1591 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5383 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1596 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5392 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1601 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5401 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1606 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5410 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1611 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5419 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1619 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, E_ROWS_CLAUSE_PROPERTY_CNT, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5429 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1625 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, E_RANGE_CLAUSE_PROPERTY_CNT, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5439 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1634 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 5445 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1636 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 5451 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1638 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 5457 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1640 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 5463 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1642 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5469 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1644 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 5475 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1646 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 5481 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1648 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5487 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1650 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 5493 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1652 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5499 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1654 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5505 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1656 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5511 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1658 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5517 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1660 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 5523 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1662 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5529 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1664 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 5535 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1666 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 5541 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1668 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5547 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1670 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 5553 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1672 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5559 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1674 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 5565 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1676 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 5571 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1678 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5577 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1680 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 5583 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1682 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5589 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1684 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5595 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1686 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5601 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1688 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5607 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1700 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5616 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1708 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5625 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1716 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 5635 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1722 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 5644 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1727 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 5653 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1735 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5662 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1740 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5671 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1745 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5680 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1751 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5689 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1765 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5698 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1773 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 5707 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1782 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5716 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1792 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5725 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1797 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5733 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1804 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5742 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1810 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5751 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1815 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5760 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1820 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5768 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1827 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 5776 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1831 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 5784 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1835 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 5792 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1839 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 5800 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1843 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 5808 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1850 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 5816 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1857 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 5824 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1861 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5833 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1866 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5842 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1871 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5851 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1876 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 5859 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1880 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 5867 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1884 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME");
}
#line 5875 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1888 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5884 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1893 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5893 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1898 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5902 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1903 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 5910 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1907 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 5918 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1911 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP");
}
#line 5926 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1923 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5935 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1928 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5944 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1933 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 5952 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1937 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5961 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1942 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5970 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1947 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 5978 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1951 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5987 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1956 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5996 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1961 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6004 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1965 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6012 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1969 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6020 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1973 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6028 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1977 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6036 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1984 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6045 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1989 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6053 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1993 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6061 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1997 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6069 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 2004 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6078 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 2009 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 2013 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6095 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 2018 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6103 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 2022 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6112 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 2027 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6121 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 2032 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6130 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 2037 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6139 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 2042 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6147 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 2046 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6156 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 2051 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6164 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 2055 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6173 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 2060 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6181 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 2067 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6190 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 2072 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6198 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 2076 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6207 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 2081 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6215 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 2088 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6224 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 2093 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6232 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2097 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6241 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2102 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6249 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 2106 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6258 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 2111 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6266 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2115 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6275 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2120 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6284 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2125 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6293 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2130 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2135 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6310 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2139 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6319 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2144 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6327 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2148 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6336 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2153 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6344 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2160 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6353 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2165 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6362 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2170 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6371 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2175 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6380 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2183 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6388 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2187 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6396 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2191 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6404 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2198 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6412 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2202 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 6420 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2206 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 6428 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2213 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6436 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2217 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6444 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2223 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 6450 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2224 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 6456 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2225 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 6462 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2229 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6468 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2234 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 6474 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2246 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6483 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2259 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "K"); }
#line 6489 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2260 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "M"); }
#line 6495 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2261 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "G"); }
#line 6501 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2262 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ARRAY"); }
#line 6507 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2263 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BINARY"); }
#line 6513 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2264 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CAST"); }
#line 6519 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2265 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CHARACTERS"); }
#line 6525 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2266 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CODE_UNITS"); }
#line 6531 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2267 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CORRESPONDING"); }
#line 6537 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2268 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOLLOWING"); }
#line 6543 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2269 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "INTERVAL"); }
#line 6549 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2270 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "LARGE"); }
#line 6555 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2271 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MULTISET"); }
#line 6561 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2272 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OBJECT"); }
#line 6567 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2273 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OCTETS"); }
#line 6573 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2274 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ONLY"); }
#line 6579 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2275 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PARTITION"); }
#line 6585 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2276 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECEDING"); }
#line 6591 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2277 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECISION"); }
#line 6597 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2278 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANGE"); }
#line 6603 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2279 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RECURSIVE"); }
#line 6609 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2280 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "REF"); }
#line 6615 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2281 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW"); }
#line 6621 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2282 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROWS"); }
#line 6627 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2283 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SCOPE"); }
#line 6633 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2284 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SECOND"); }
#line 6639 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2285 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED"); }
#line 6645 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2286 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VARCHAR"); }
#line 6651 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2287 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "WITHOUT"); }
#line 6657 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2288 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ZONE"); }
#line 6663 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2289 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ERROR"); }
#line 6669 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2290 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOR"); }
#line 6675 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2291 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OF"); }
#line 6681 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2292 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "READ"); }
#line 6687 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;


#line 6691 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 2295 "./sqlparser_sql2003.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
