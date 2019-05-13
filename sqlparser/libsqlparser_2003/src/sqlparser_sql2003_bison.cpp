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
    SQL2003_ERROR = 316,
    SQL2003_EXCEPT = 317,
    SQL2003_EXISTS = 318,
    SQL2003_FLOAT = 319,
    SQL2003_FOLLOWING = 320,
    SQL2003_FOR = 321,
    SQL2003_FROM = 322,
    SQL2003_FULL = 323,
    SQL2003_G = 324,
    SQL2003_GROUP = 325,
    SQL2003_GROUPING = 326,
    SQL2003_HAVING = 327,
    SQL2003_HOUR = 328,
    SQL2003_IN = 329,
    SQL2003_INNER = 330,
    SQL2003_INSERT = 331,
    SQL2003_INT = 332,
    SQL2003_INTEGER = 333,
    SQL2003_INTERSECT = 334,
    SQL2003_INTERVAL = 335,
    SQL2003_INTO = 336,
    SQL2003_IS = 337,
    SQL2003_JOIN = 338,
    SQL2003_K = 339,
    SQL2003_LARGE = 340,
    SQL2003_LEFT = 341,
    SQL2003_LIKE = 342,
    SQL2003_M = 343,
    SQL2003_MAX = 344,
    SQL2003_MIN = 345,
    SQL2003_MINUTE = 346,
    SQL2003_MOD = 347,
    SQL2003_MONTH = 348,
    SQL2003_MULTISET = 349,
    SQL2003_NATIONAL = 350,
    SQL2003_NATURAL = 351,
    SQL2003_NCHAR = 352,
    SQL2003_NCLOB = 353,
    SQL2003_NOT = 354,
    SQL2003_NULLIF = 355,
    SQL2003_NUMERIC = 356,
    SQL2003_OBJECT = 357,
    SQL2003_OCTETS = 358,
    SQL2003_OF = 359,
    SQL2003_ON = 360,
    SQL2003_ONLY = 361,
    SQL2003_OR = 362,
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
    SQL2003_RIGHT = 375,
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
    NodeType nodetype;

#line 326 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */
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

#line 356 "sqlparser_sql2003_bison.cpp" /* yacc.c:358  */

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
#define YYLAST   5324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  165
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  112
/* YYNRULES -- Number of rules.  */
#define YYNRULES  429
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  762

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
       2,     2,     2,     2,     2,     2,     2,   164,     2,     2,
      12,    13,   158,   161,   157,   162,   159,   163,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   156,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   160,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155
};

#if SQL2003_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   218,   218,   228,   229,   237,   238,   239,   243,   247,
     248,   249,   253,   261,   266,   271,   276,   281,   290,   299,
     316,   333,   334,   342,   351,   359,   364,   371,   372,   398,
     427,   428,   457,   458,   466,   474,   502,   503,   512,   526,
     527,   535,   536,   540,   548,   549,   557,   566,   569,   573,
     580,   581,   591,   596,   604,   605,   614,   622,   623,   627,
     635,   636,   644,   645,   649,   656,   657,   665,   679,   688,
     689,   697,   698,   702,   703,   715,   720,   728,   729,   734,
     740,   746,   753,   759,   766,   772,   779,   785,   792,   798,
     805,   811,   818,   824,   831,   837,   848,   853,   858,   863,
     868,   873,   878,   883,   891,   896,   902,   907,   913,   919,
     928,   939,   950,   961,   968,   969,   974,   975,   983,   984,
     992,   993,  1001,  1002,  1007,  1015,  1016,  1024,  1029,  1034,
    1039,  1044,  1049,  1054,  1059,  1064,  1069,  1074,  1083,  1084,
    1089,  1097,  1098,  1106,  1107,  1115,  1116,  1124,  1125,  1130,
    1138,  1139,  1140,  1145,  1146,  1147,  1151,  1152,  1160,  1161,
    1168,  1168,  1172,  1173,  1174,  1175,  1176,  1177,  1181,  1188,
    1189,  1193,  1194,  1195,  1196,  1200,  1201,  1202,  1203,  1204,
    1205,  1206,  1211,  1219,  1220,  1224,  1225,  1233,  1238,  1246,
    1247,  1256,  1257,  1258,  1259,  1264,  1270,  1276,  1282,  1288,
    1300,  1315,  1316,  1317,  1318,  1319,  1320,  1321,  1322,  1323,
    1324,  1328,  1337,  1338,  1339,  1343,  1349,  1361,  1367,  1374,
    1381,  1388,  1397,  1404,  1411,  1418,  1425,  1434,  1441,  1451,
    1456,  1461,  1466,  1471,  1476,  1481,  1486,  1494,  1500,  1509,
    1511,  1513,  1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,
    1531,  1533,  1535,  1537,  1539,  1541,  1543,  1545,  1547,  1549,
    1551,  1553,  1555,  1557,  1559,  1561,  1563,  1568,  1569,  1570,
    1571,  1575,  1583,  1591,  1597,  1602,  1610,  1615,  1620,  1625,
    1626,  1631,  1632,  1633,  1634,  1635,  1636,  1640,  1648,  1653,
    1657,  1662,  1666,  1667,  1672,  1679,  1684,  1685,  1690,  1695,
    1702,  1706,  1710,  1714,  1718,  1725,  1732,  1736,  1741,  1746,
    1751,  1755,  1759,  1763,  1768,  1773,  1778,  1782,  1786,  1793,
    1794,  1798,  1803,  1808,  1812,  1817,  1822,  1826,  1831,  1836,
    1840,  1844,  1848,  1852,  1859,  1864,  1868,  1872,  1879,  1884,
    1888,  1893,  1897,  1902,  1907,  1912,  1917,  1921,  1926,  1930,
    1935,  1942,  1947,  1951,  1956,  1963,  1968,  1972,  1977,  1981,
    1986,  1990,  1995,  2000,  2005,  2010,  2014,  2019,  2023,  2028,
    2035,  2040,  2045,  2050,  2058,  2062,  2066,  2073,  2077,  2081,
    2088,  2092,  2099,  2100,  2101,  2105,  2106,  2110,  2111,  2115,
    2116,  2121,  2131,  2132,  2133,  2134,  2135,  2136,  2137,  2138,
    2139,  2140,  2141,  2142,  2143,  2144,  2145,  2146,  2147,  2148,
    2149,  2150,  2151,  2152,  2153,  2154,  2155,  2156,  2157,  2158,
    2159,  2160,  2161,  2162,  2163,  2164,  2165,  2166,  2167,  2168
};
#endif

#if SQL2003_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "UMINUS", "'('", "')'",
  "ALL", "AND", "ANY", "ARRAY", "AS", "ASC", "AVG", "BETWEEN", "BIGINT",
  "BINARY", "BLOB", "BOOLEAN", "BY", "CASE", "CAST", "CHAR", "CHARACTER",
  "CHARACTERS", "CLOB", "CNNOP", "COALESCE", "CODE_UNITS", "COLLATE",
  "COMP_EQ", "COMP_GE", "COMP_GT", "COMP_LE", "COMP_LT", "COMP_NE",
  "CONVERT", "CORRESPONDING", "COUNT", "CROSS", "CURRENT",
  "CURRENT_TIMESTAMP", "CURRENT_USER", "DATE", "DAY", "DEC", "DECIMAL",
  "DEFAULT", "DELETE", "DENSE_RANK", "DESC", "DISTINCT", "DOUBLE", "ELSE",
  "END", "END_P", "ERROR", "EXCEPT", "EXISTS", "FLOAT", "FOLLOWING", "FOR",
  "FROM", "FULL", "G", "GROUP", "GROUPING", "HAVING", "HOUR", "IN",
  "INNER", "INSERT", "INT", "INTEGER", "INTERSECT", "INTERVAL", "INTO",
  "IS", "JOIN", "K", "LARGE", "LEFT", "LIKE", "M", "MAX", "MIN", "MINUTE",
  "MOD", "MONTH", "MULTISET", "NATIONAL", "NATURAL", "NCHAR", "NCLOB",
  "NOT", "NULLIF", "NUMERIC", "OBJECT", "OCTETS", "OF", "ON", "ONLY", "OR",
  "ORDER", "OUTER", "OVER", "PARTITION", "PRECEDING", "PRECISION", "RANGE",
  "RANK", "READ", "REAL", "RECURSIVE", "REF", "RIGHT", "ROW", "ROWS",
  "ROW_NUMBER", "SCOPE", "SECOND", "SELECT", "SESSION_USER", "SET",
  "SMALLINT", "SOME", "STDDEV_POP", "STDDEV_SAMP", "SUM", "SYSTEM_USER",
  "THEN", "TIME", "TIMESTAMP", "TO", "UNBOUNDED", "UNION", "UPDATE",
  "USING", "VALUES", "VARCHAR", "VARYING", "VAR_POP", "VAR_SAMP", "WHEN",
  "WHERE", "WITH", "WITHOUT", "YEAR", "ZONE", "';'", "','", "'*'", "'.'",
  "'^'", "'+'", "'-'", "'/'", "'%'", "$accept", "sql_stmt", "stmt_list",
  "stmt", "dql_stmt", "dml_stmt", "insert_stmt",
  "insert_columns_and_source", "from_constructor", "delete_stmt",
  "update_stmt", "update_elem_list", "update_elem", "select_stmt",
  "query_expression", "query_expression_body", "query_term",
  "query_primary", "select_with_parens", "simple_table", "opt_where",
  "opt_from_clause", "opt_groupby", "opt_order_by", "order_by",
  "sort_list", "sort_key", "opt_asc_desc", "opt_having", "with_clause",
  "with_list", "common_table_expr", "opt_derived_column_list",
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
  "opt_as_label", "as_label", "label", "collate_clause", "name_r", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,    40,    41,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,    59,    44,    42,    46,
      94,    43,    45,    47,    37
};
# endif

#define YYPACT_NINF -503

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-503)))

#define YYTABLE_NINF -292

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      83,    74,   -25,   -18,    52,  5030,  5169,    76,    32,   -64,
    -503,  -503,  -503,  -503,  -503,  -503,   -21,   -24,    33,  -503,
    -503,    74,    96,  5030,  5030,  -503,  -503,  1923,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,     3,  -503,  -503,  -503,    45,  5030,  -503,   -16,   243,
    -503,  -503,    83,   165,  -503,  -503,    52,    52,    52,   -24,
    -503,   111,    72,  -503,  -503,  -503,  -503,  -503,  -503,  1603,
    2243,   252,   280,   287,   296,  -503,  -503,   313,   347,   362,
    -503,  -503,  -503,  2243,  2243,  -503,   246,   173,  -503,   385,
    4196,   142,   147,   242,  -503,  -503,  -503,  -503,  -503,  -503,
     405,  -503,   412,  -503,  -503,   414,     5,  2243,  2663,  -503,
    5030,  5030,   410,  -503,  -503,  2243,    74,    74,    74,  1763,
    -503,  4474,   284,  2243,  -503,  -503,  -503,    84,  1603,   417,
      86,   418,   339,   282,  2243,  2243,  2243,   428,   423,  2243,
     425,  -503,  -503,  4752,   111,  1923,  2083,  -503,  4891,  2243,
    5030,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  2243,  -503,
    -503,  -503,  -503,  2243,  2243,  1283,   426,  2243,  2383,   111,
     285,   382,  2803,   281,  -503,   430,   288,   429,  -503,   292,
     350,    33,    33,  -503,  1123,   429,  1763,   338,   436,  -503,
    -503,   368,  -503,   792,  -503,  -503,  -503,  -503,    96,  -503,
    2243,  -503,  1763,   393,   282,   372,   441,    64,   442,  -503,
      87,  -503,  4335,  4613,  -503,   191,  -503,  -503,  4613,  -503,
     384,  -503,  -503,   444,  -503,   142,  -503,   147,   242,  -503,
    -503,  -503,   445,   236,  2243,   348,   258,  -503,  2943,    10,
    -503,  2243,  2243,  5030,   300,  3083,  -503,  5030,    29,  -503,
    2243,  -503,  -503,  -503,  1123,   131,   723,  -503,  -503,  1763,
    1763,    28,  2243,  -503,  -503,  -503,  -503,  -503,  -503,   449,
      30,  2243,    58,  1443,   429,  -503,   -32,   815,  2243,   401,
    -503,  4057,  -503,  5030,  -503,  2243,  4335,   303,   451,   243,
     380,   361,  -503,  4752,   361,   197,   361,  4752,   388,  -503,
     448,   403,  -503,   348,   348,   327,   455,  -503,  -503,  5030,
     316,  2523,  -503,   339,  -503,  5030,  5030,   319,  -503,  -503,
    -503,   436,  -503,  -503,  -503,   397,  -503,   351,  1603,  -503,
    -503,  -503,   472,   339,  2243,   449,  2243,  -503,  -503,  -503,
     339,  -503,  -503,  2243,  2243,   339,  -503,  -503,   394,   470,
    -503,    63,    71,   471,  -503,   474,   475,   373,   477,  -503,
    -503,   182,   190,    75,   478,   479,  -503,   480,  -503,    34,
      36,   482,  -503,    46,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,   290,  -503,   460,   484,   349,  -503,
    -503,  -503,  4752,  -503,  -503,   -43,  -503,   413,  -503,  -503,
    4752,    52,  1763,  -503,  -503,  -503,   348,   171,   341,  3223,
    -503,  5030,    11,  -503,  -503,  5030,  -503,  2243,   489,  -503,
     356,  -503,   339,   339,   339,   399,   500,   502,   406,   497,
     506,   408,   501,   509,   511,   513,  -503,   515,   510,  -503,
     383,  -503,    27,    78,    81,   519,   421,   516,   509,   522,
    5030,   524,   395,   398,   526,   404,   409,   527,  -503,   523,
    -503,   411,  -503,  -503,  -503,  -503,  -503,  1763,   243,  4752,
     -38,  2243,   338,  -503,  -503,   517,    24,    24,   115,   531,
    3362,  -503,    13,   378,  3501,  -503,   339,  -503,  2243,   533,
     535,   536,   534,   545,   538,   540,   550,   308,   543,    -6,
      14,   544,   553,   283,   555,   556,   551,   560,   435,   557,
     554,   561,   567,   562,    19,   564,   569,   419,   432,   571,
     433,   434,   572,   575,  5030,   338,  -503,  -503,  1763,   243,
    -503,  2243,   476,    25,   468,   485,  -503,  -503,  -503,   580,
    -503,  -503,  -503,  3640,  3779,  -503,    16,   339,   589,  -503,
    -503,   509,   587,  -503,   509,   591,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,   118,  -503,  -503,   597,  -503,   601,  -503,
      22,   595,  -503,  -503,   596,   598,   605,   600,   606,   612,
    -503,   509,   607,  -503,  -503,   614,   495,   259,  -503,  -503,
     268,  -503,  -503,  -503,   609,   460,   338,  -503,   135,  -503,
     149,   503,   179,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    3918,   610,   611,  -503,   616,  -503,  -503,   617,   619,  -503,
     620,   629,   496,  -503,   622,  -503,   509,   624,   625,  -503,
     627,  5030,   504,   505,   508,   512,  -503,  -503,  -503,   126,
     634,   633,   637,   638,   639,   641,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,   644,   645,  -503,   646,  -503,  -503,  -503,
    -503,   507,   520,   521,   525,  -503,   647,  -503,    56,    57,
      65,    68,    55,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,   187,   541,   193,   198,   542,   203,   219,   547,   223,
     231,   548,   233,   549,   559,   594,   247,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     0,     0,    62,     0,     0,     0,     0,     3,
       6,     7,    11,    10,     9,     8,    41,    25,    27,    30,
      32,     0,     0,     0,     0,    63,    64,     0,   392,   399,
     201,   400,   401,   402,   403,   404,   209,   302,   213,   426,
     405,   427,   398,   210,   303,   406,   396,   407,   397,   202,
     203,   304,   301,   408,   409,   410,   428,   411,   412,   413,
     414,   415,   212,   429,   416,   417,   418,   419,   214,   420,
     421,   205,   206,   204,   422,   423,   207,   208,   424,   300,
     425,     0,   393,   394,   395,    96,   416,    52,    54,    57,
       1,     2,     5,     0,    24,    42,    62,    62,    62,    26,
      33,    36,     0,   175,   178,   176,   179,   177,   180,     0,
     183,   401,     0,     0,   223,   225,   181,     0,     0,     0,
     227,   228,    68,     0,     0,   155,     0,    65,   150,     0,
     385,   138,   141,   143,   145,   147,   151,   153,   154,   194,
     393,   193,   394,   192,   191,   395,    79,     0,     0,    53,
       0,     0,     0,    58,     4,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    12,    16,    13,     0,     0,     0,
     156,     0,   184,     0,     0,     0,     0,     0,     0,     0,
       0,   148,   149,     0,    36,     0,     0,   390,     0,     0,
       0,    67,   386,   388,   139,   389,   169,   170,     0,   174,
     171,   172,   173,     0,     0,     0,     0,     0,     0,    36,
      21,     0,     0,    97,    55,     0,    60,     0,    43,    44,
      47,    29,    28,    31,     0,     0,     0,    37,   116,   118,
     120,   122,   125,     0,    17,    18,    15,    14,     0,    34,
       0,   152,     0,   189,   185,     0,     0,     0,     0,   219,
       0,   218,     0,     0,    38,    69,    71,    73,   385,    72,
      39,    66,   215,     0,   387,   140,   391,   142,   144,   146,
     380,   381,     0,     0,     0,     0,     0,    81,     0,    80,
      20,     0,     0,     0,    99,     0,    59,     0,     0,    56,
       0,    48,    49,    46,     0,     0,   156,   137,   121,     0,
       0,     0,     0,   166,   164,   165,   162,   163,   167,     0,
       0,     0,     0,     0,     0,   157,     0,     0,     0,     0,
     186,     0,   222,     0,   224,     0,     0,     0,    72,    77,
       0,   114,   113,     0,   114,     0,   114,     0,     0,    75,
       0,    50,   216,   200,   196,     0,     0,   211,   217,     0,
      99,     0,    22,    23,   103,     0,     0,    98,    61,    45,
     126,   117,   119,   160,   161,     0,   123,     0,     0,   158,
     133,   135,     0,   131,     0,     0,     0,   382,   384,   383,
     127,   168,   128,     0,     0,   190,   182,   333,   400,   354,
     305,   341,   339,   350,   306,   329,   326,     0,   335,   332,
     331,   406,     0,   360,   369,   323,   336,   417,   330,   312,
     318,   423,   271,     0,   268,   269,   270,   267,   286,   284,
     285,   283,   319,   320,   279,   282,   281,     0,     0,    74,
      78,    76,     0,   115,   110,     0,   111,     0,   112,    70,
       0,    62,     0,    35,   199,   195,   198,     0,   103,     0,
      83,     0,    82,   101,   102,     0,   124,     0,     0,   136,
       0,   134,   132,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   337,     0,   299,   287,
       0,   289,   296,   358,   356,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   220,   274,
     275,     0,   278,   280,   221,   226,   108,     0,     0,     0,
       0,     0,    51,   197,   236,     0,     0,     0,     0,     0,
       0,    87,    86,   102,     0,   100,   129,   159,     0,   352,
       0,     0,   348,     0,     0,   346,     0,   373,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   107,   109,     0,     0,
      40,     0,     0,     0,     0,     0,   238,   237,   234,     0,
     235,    95,    94,     0,     0,    85,    84,   130,     0,   353,
     340,     0,     0,   338,     0,     0,   374,   375,   379,   377,
     378,   376,   372,   371,   349,   328,     0,   325,     0,   334,
       0,   294,   288,   292,     0,     0,     0,     0,   365,     0,
     359,     0,     0,   368,   322,     0,     0,   309,   310,   311,
     315,   316,   317,   344,     0,   277,   104,   106,     0,   240,
       0,     0,     0,   241,   239,   230,    91,    90,    93,    92,
       0,     0,     0,   343,     0,   342,   370,     0,     0,   298,
       0,     0,   295,   357,     0,   355,     0,     0,     0,   363,
       0,     0,     0,     0,     0,     0,   273,   276,   233,     0,
       0,     0,     0,     0,     0,     0,    89,    88,   351,   347,
     345,   327,   324,     0,     0,   362,     0,   361,   366,   321,
     272,     0,     0,     0,     0,   232,     0,   231,     0,     0,
       0,     0,     0,   297,   293,   364,   307,   308,   313,   314,
     229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   266,   251,   256,
     261,   246,   263,   248,   253,   258,   243,   264,   249,   254,
     259,   244,   265,   250,   255,   260,   245,   247,   252,   262,
     257,   242
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -503,  -503,   576,  -503,  -503,  -503,  -503,  -503,   518,  -503,
    -503,   391,  -503,   -76,    15,    12,   266,   528,  -174,  -503,
    -110,  -503,  -503,  -503,  -445,   387,  -503,  -503,  -503,  -503,
     -39,  -503,  -503,   -99,   392,   -86,   498,  -503,   353,  -228,
    -319,  -503,  -503,  -503,    31,  -210,   352,  -254,  -154,   396,
    -168,  -503,  -503,  -503,   407,   514,   486,   488,   -67,  -503,
    -155,   317,   328,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
     452,  -503,  -503,  -503,  -503,    44,  -503,   318,  -503,  -503,
    -291,  -502,   181,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,    -5,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -467,    97,  -503,  -503,  -503,   446,   457,   529,
    -420,   592
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,   164,   165,    13,
      14,   209,   210,    15,   169,    17,    18,    19,   125,    20,
     160,   184,   341,    94,    95,   218,   219,   293,   443,    21,
      87,    88,   152,   153,   215,    27,   126,   127,   254,   255,
     256,   257,   431,   128,   129,   259,   338,   434,   295,   228,
     229,   230,   231,   232,   170,   131,   132,   133,   134,   135,
     171,   370,   366,   313,   314,   198,   203,   136,   137,   173,
     243,   244,   319,   138,   139,   140,   141,   142,   143,   144,
     347,   519,   576,   413,   414,   415,   416,   417,   418,   479,
     480,   612,   481,   145,   419,   420,   421,   422,   423,   424,
     425,   426,   538,   602,   603,   274,   381,   191,   192,   193,
     194,   146
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,    84,   518,   167,   502,   227,   503,   605,   235,   253,
     156,   157,   158,    22,   435,    16,   579,   -96,    84,    84,
     246,   553,   -97,   -98,   327,  -101,   166,   607,  -100,   572,
     640,   263,   624,    99,   363,   659,    81,   364,   371,   544,
      96,     1,   328,   289,    23,   573,   491,   149,   494,    82,
      82,   297,   444,   445,   101,   102,   181,   182,   298,   498,
     733,   721,   724,   499,   507,    24,    25,    82,    82,   568,
     727,   574,   641,   730,   260,   467,    90,   299,   253,   374,
     436,    84,   438,   470,   161,   315,     1,   485,   316,    93,
     545,   237,    92,   547,    91,     1,     1,   189,   327,   280,
     190,   508,   734,   722,   725,   383,   569,    16,   735,   100,
      26,   214,   728,   506,    98,   731,   328,    16,    97,   189,
     189,   510,   190,   190,   652,    84,   162,   654,   578,   365,
      82,   372,   362,   147,   375,   369,   680,   269,     2,   705,
     382,   150,   500,    84,   360,    84,    84,   376,   678,   596,
     468,   606,   253,   597,   668,   513,    84,     4,   471,   253,
      96,     3,   486,   253,   208,   575,   642,  -291,   548,   351,
     524,   608,   583,    22,    82,   650,   625,   706,    84,   660,
     238,     6,    16,    84,   514,    84,   492,   493,   495,   496,
     567,   155,    82,   679,    82,    82,   736,   723,   726,   696,
       4,   369,     4,    84,   148,    82,   729,    84,   323,   732,
     469,     4,     4,   458,   258,   677,   681,   163,   472,   483,
     484,   266,   487,   601,     6,   546,     5,    82,   549,   163,
     430,   516,    82,    37,    82,     6,     6,   330,    97,   517,
     299,   199,   516,   240,   325,    93,   684,    84,    84,   344,
     517,   516,    82,    84,   737,   151,    82,    44,   253,   517,
     740,   331,   159,   682,   174,   742,   253,   331,   332,   189,
     745,   348,   190,    84,   332,    51,   333,    52,    84,   334,
      84,    93,    84,   258,   515,   334,   747,   516,   512,   335,
     750,   189,   175,   685,   190,   517,    82,    82,   752,   176,
     755,   738,    82,   196,   197,   200,   238,   741,   177,   478,
     201,   202,   743,   336,   760,   183,    84,   746,    84,   336,
     501,    84,    82,    83,    83,   178,   190,    82,    84,    82,
     185,    82,    84,   748,    37,   253,    79,   751,   238,   596,
     446,    83,    83,   597,    84,   753,    84,   756,   337,   330,
      84,    84,   412,   565,   427,   511,   570,   258,    44,   179,
     189,   761,   505,   190,   258,    82,   457,    82,   258,   291,
      82,   528,   189,   331,   180,   190,    51,    82,    52,   598,
     332,    82,   189,   189,   189,   190,   190,   190,   333,   189,
     321,   334,   190,    82,   599,    82,   482,   186,   600,    82,
      82,   335,   204,   363,    83,   189,   364,   292,   190,   566,
     611,   672,   673,   601,   636,   189,   638,   205,   190,   282,
     674,   675,   221,   222,   206,   336,   207,    84,   217,   234,
     239,   241,   242,   248,   130,    84,   249,    79,   251,   275,
     285,   288,   281,   286,    84,   287,    84,   299,    83,   290,
      84,   300,   301,   318,   322,   324,   340,   342,   343,   355,
     346,   368,   386,   258,   429,   432,    83,   447,    83,    83,
     637,   258,   433,   440,   441,   449,    82,   442,   455,    83,
     459,   465,   466,   473,    82,    84,   474,   475,   476,   477,
     488,   489,   490,    82,   497,    82,   190,   504,   509,    82,
     520,    83,   527,   529,    84,   530,    83,   531,    83,   533,
     532,   534,   535,   536,   537,    84,   539,   172,   540,    84,
     541,   555,   542,   543,   550,   551,    83,   554,   552,   556,
      83,   559,   562,   557,    82,   563,   558,   584,   613,   618,
     258,   564,   560,   571,   580,   588,   591,   561,   589,   590,
     592,   593,   594,    82,   211,   595,   604,   609,   610,    84,
     614,   615,   220,   616,    82,   617,   233,   620,    82,   619,
      83,    83,   622,   621,   628,   623,    83,   626,    84,    84,
     634,   245,   627,   247,   630,   633,   250,   629,   631,   632,
     639,   643,   130,   645,   651,   635,    83,    85,    89,   644,
     653,    83,   657,    83,   655,    83,   658,   661,    82,   662,
     664,   663,   273,   665,   276,    85,    85,   667,   666,   670,
     669,   671,   676,   688,   689,   693,   683,    82,    82,   690,
     691,   296,   692,   233,   694,   695,  -290,   697,   698,    83,
     699,    83,   701,   702,    83,    84,   703,   707,   708,   317,
     704,    83,   709,   710,   711,    83,   712,   713,   714,   715,
     720,   759,   716,   757,   739,   744,    84,    83,   154,    83,
     749,   754,   352,    83,    83,   717,   718,   359,    89,   358,
     719,   345,   758,   261,   267,   236,   223,   437,   211,   353,
     439,   268,   461,   456,    82,   361,   320,   220,   577,     0,
     656,   296,   700,   265,   339,     0,   233,   233,     0,   367,
     329,     0,     0,     0,     0,    82,     0,   264,   373,     0,
     380,     0,   195,     0,     0,   385,     0,     0,     0,     0,
       0,     0,   428,     0,     0,     0,     0,     0,     0,     0,
     213,     0,    89,   216,   302,     0,     0,     0,     0,     0,
      83,     0,     0,   216,     0,     0,   189,     0,    83,   190,
     303,   304,   305,   306,   307,   308,     0,    83,     0,    83,
       0,     0,     0,    83,     0,    85,     0,     0,     0,     0,
     195,   460,    85,   462,     0,     0,     0,     0,     0,     0,
     463,   464,     0,     0,     0,     0,     0,     0,     0,   309,
     279,     0,     0,     0,   284,     0,     0,   310,    83,     0,
       0,     0,   311,   302,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   312,   189,     0,    83,   190,   303,
     304,   305,   306,   307,   308,     0,   302,     0,    83,     0,
       0,     0,    83,     0,    85,   195,     0,     0,   189,   233,
     195,   190,   303,   304,   305,   306,   307,   308,     0,     0,
       0,     0,     0,     0,   526,     0,     0,     0,   309,     0,
     350,     0,     0,     0,     0,   354,   310,   357,     0,   216,
     240,   311,    83,     0,     0,     0,     0,     0,     0,     0,
       0,   309,     0,   312,     0,     0,     0,     0,     0,   310,
       0,    83,    83,     0,   311,     0,     0,     0,     0,     0,
       0,     0,     0,    85,   233,    85,   312,     0,    85,     0,
       0,     0,     0,     0,     0,    85,     0,     0,     0,    85,
       0,     0,     0,     0,     0,   587,     0,     0,     0,     0,
       0,   448,     0,   452,     0,     0,     0,   453,   454,     0,
       0,     0,   384,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,   233,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,   522,     0,   523,     0,     0,     0,   525,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   582,     0,     0,     0,   586,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,   103,   104,   105,
     106,   107,     0,   108,     0,   294,     0,     0,     0,     0,
      29,     0,     0,    30,     0,     0,    31,     0,     0,     0,
     110,   111,     0,     0,    33,     0,    85,   112,    34,     0,
       0,     0,     0,     0,     0,     0,   113,    35,    36,     0,
       0,   114,   115,     0,    37,   647,   649,   116,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,   225,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,   117,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,   226,   118,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,   687,    64,    65,   119,    66,    67,    68,    69,
      70,     4,   120,     0,     0,     0,    71,    72,    73,   121,
       0,     0,     0,    85,    74,     0,     0,     0,     0,    75,
       0,    76,    77,     0,     0,     6,    78,    79,    80,     0,
       0,     0,     0,     0,   123,   124,    28,   103,   104,   105,
     106,   107,     0,   108,     0,   109,     0,   270,     0,     0,
      29,     0,     0,    30,     0,     0,    31,     0,     0,     0,
     110,   111,     0,     0,    33,     0,     0,   112,    34,     0,
       0,     0,     0,     0,     0,     0,   113,    35,    36,     0,
       0,   114,   115,     0,    37,     0,     0,   116,     0,    38,
       0,   271,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,   117,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,   118,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,   119,    66,    67,    68,    69,
      70,     0,   120,     0,     0,     0,    71,    72,    73,   121,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
       0,   272,     0,     0,   123,   124,    28,   103,   104,   105,
     106,   107,     0,   108,     0,   109,     0,   377,     0,   378,
      29,     0,     0,    30,     0,     0,    31,     0,     0,     0,
     110,   111,     0,     0,    33,     0,     0,   112,    34,     0,
       0,     0,     0,     0,     0,     0,   113,    35,    36,     0,
       0,   114,   115,     0,    37,     0,     0,   116,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,   117,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,   118,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,   119,    66,    67,    68,    69,
      70,     0,   120,     0,     0,   379,    71,    72,    73,   121,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
       0,     0,     0,     0,   123,   124,    28,   103,   104,   105,
     106,   107,     0,   108,     0,   168,     0,     0,     0,     0,
      29,     0,     0,    30,     0,     0,    31,     0,     0,     0,
     110,   111,     0,     0,    33,     0,     0,   112,    34,     0,
       0,     0,     0,     0,     0,     0,   113,    35,    36,     0,
       0,   114,   115,     0,    37,     0,     0,   116,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,   117,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,   118,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,   119,    66,    67,    68,    69,
      70,     4,   120,     0,     0,     0,    71,    72,    73,   121,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    75,
       0,    76,    77,     0,     0,     6,    78,    79,    80,     0,
       0,     0,     0,     0,   123,   124,    28,   103,   104,   105,
     106,   107,     0,   108,     0,   224,     0,     0,     0,     0,
      29,     0,     0,    30,     0,     0,    31,     0,     0,     0,
     110,   111,     0,     0,    33,     0,     0,   112,    34,     0,
       0,     0,     0,     0,     0,     0,   113,    35,    36,     0,
       0,   114,   115,     0,    37,     0,     0,   116,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,   225,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,   117,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,   226,   118,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,   119,    66,    67,    68,    69,
      70,     0,   120,     0,     0,     0,    71,    72,    73,   121,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
       0,     0,     0,     0,   123,   124,    28,   103,   104,   105,
     106,   107,     0,   108,     0,   109,     0,     0,     0,     0,
      29,     0,     0,    30,     0,     0,    31,     0,     0,     0,
     110,   111,     0,     0,    33,     0,     0,   112,    34,     0,
       0,     0,     0,     0,     0,     0,   113,    35,    36,     0,
       0,   114,   115,     0,    37,     0,     0,   116,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,   117,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,   118,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,   119,    66,    67,    68,    69,
      70,     0,   120,     0,     0,     0,    71,    72,    73,   121,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
       0,   122,     0,     0,   123,   124,    28,   103,   104,   105,
     106,   107,     0,   108,     0,   109,   262,     0,     0,     0,
      29,     0,     0,    30,     0,     0,    31,     0,     0,     0,
     110,   111,     0,     0,    33,     0,     0,   112,    34,     0,
       0,     0,     0,     0,     0,     0,   113,    35,    36,     0,
       0,   114,   115,     0,    37,     0,     0,   116,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,   117,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,   118,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,   119,    66,    67,    68,    69,
      70,     0,   120,     0,     0,     0,    71,    72,    73,   121,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
       0,     0,     0,     0,   123,   124,    28,   103,   104,   105,
     106,   107,     0,   108,     0,   109,     0,     0,     0,     0,
      29,     0,     0,    30,     0,     0,    31,     0,     0,     0,
     110,   111,     0,     0,    33,     0,     0,   112,    34,     0,
       0,     0,     0,     0,     0,     0,   113,    35,    36,     0,
       0,   114,   115,     0,    37,     0,     0,   116,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,   117,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,   118,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,   119,    66,    67,    68,    69,
      70,     0,   120,     0,     0,     0,    71,    72,    73,   121,
       0,     0,     0,     0,    74,     0,    28,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
      29,     0,     0,    30,   123,   124,    31,     0,     0,     0,
       0,    32,     0,     0,    33,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,     0,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,     0,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71,    72,    73,     0,
       0,     0,     0,     0,    74,     0,    28,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
      29,   277,   278,    30,     0,     0,    31,     0,     0,     0,
       0,    32,     0,     0,    33,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,     0,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,     0,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71,    72,    73,     0,
       0,     0,     0,     0,    74,     0,    28,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
      29,   450,   451,    30,     0,     0,    31,     0,     0,     0,
       0,    32,     0,     0,    33,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,     0,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,     0,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71,    72,    73,     0,
       0,     0,     0,     0,    74,     0,    28,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
      29,     0,   212,    30,     0,     0,    31,     0,     0,     0,
       0,    32,     0,     0,    33,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,     0,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,     0,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71,    72,    73,     0,
       0,     0,     0,     0,    74,     0,    28,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
      29,     0,   283,    30,     0,     0,    31,     0,     0,     0,
       0,    32,     0,     0,    33,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,     0,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,     0,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71,    72,    73,     0,
       0,     0,     0,     0,    74,     0,    28,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
      29,     0,   349,    30,     0,     0,    31,     0,     0,     0,
       0,    32,     0,     0,    33,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,     0,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,     0,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71,    72,    73,     0,
       0,     0,     0,     0,    74,     0,    28,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,     0,
      29,     0,   356,    30,     0,     0,    31,     0,     0,     0,
       0,    32,     0,     0,    33,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,     0,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,     0,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71,    72,    73,     0,
       0,     0,     0,     0,    74,    28,     0,     0,     0,    75,
       0,    76,    77,     0,     0,     0,    78,    79,    80,    29,
       0,   521,    30,     0,     0,    31,     0,     0,     0,     0,
      32,     0,     0,    33,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    46,    47,
       0,     0,    48,    49,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,     0,
      57,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
       0,     0,     0,    74,    28,     0,     0,     0,    75,     0,
      76,    77,     0,     0,     0,    78,    79,    80,    29,     0,
     581,    30,     0,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,    40,    41,
       0,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    46,    47,     0,
       0,    48,    49,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,     0,    57,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,     0,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,    71,    72,    73,     0,     0,     0,
       0,     0,    74,    28,     0,     0,     0,    75,     0,    76,
      77,     0,     0,     0,    78,    79,    80,    29,     0,   585,
      30,     0,     0,    31,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,    40,    41,     0,
       0,    42,     0,    43,     0,    44,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,    46,    47,     0,     0,
      48,    49,    50,    51,     0,    52,    53,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,     0,    57,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,     0,
      64,    65,     0,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,    71,    72,    73,     0,     0,     0,     0,
       0,    74,    28,     0,     0,     0,    75,     0,    76,    77,
       0,     0,     0,    78,    79,    80,    29,     0,   646,    30,
       0,     0,    31,     0,     0,     0,     0,    32,     0,     0,
      33,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,    40,    41,     0,     0,
      42,     0,    43,     0,    44,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,    46,    47,     0,     0,    48,
      49,    50,    51,     0,    52,    53,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,     0,    57,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,     0,    64,
      65,     0,    66,    67,    68,    69,    70,     0,     0,     0,
       0,     0,    71,    72,    73,     0,     0,     0,     0,     0,
      74,    28,     0,     0,     0,    75,     0,    76,    77,     0,
       0,     0,    78,    79,    80,    29,     0,   648,    30,     0,
       0,    31,     0,     0,     0,     0,    32,     0,     0,    33,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,    40,    41,     0,     0,    42,
       0,    43,     0,    44,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,    46,    47,     0,     0,    48,    49,
      50,    51,     0,    52,    53,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,     0,    57,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,     0,    64,    65,
       0,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    71,    72,    73,     0,     0,     0,     0,     0,    74,
      28,     0,     0,     0,    75,     0,    76,    77,     0,     0,
       0,    78,    79,    80,    29,     0,   686,    30,     0,   387,
     388,   389,   390,     0,     0,    32,   391,   392,    33,   393,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,     0,     0,     0,     0,   394,    37,   395,
     396,     0,     0,    38,     0,     0,   397,     0,     0,     0,
      39,     0,     0,   398,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,   399,   400,     0,   401,
       0,     0,     0,    46,    47,     0,     0,    48,    49,    50,
      51,     0,    52,    53,   402,     0,   403,   404,     0,     0,
     405,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,   406,    64,   407,     0,
      66,    67,    68,    69,    70,     0,     0,     0,   408,     0,
      71,    72,    73,     0,     0,   409,   410,     0,    74,    28,
     187,     0,     0,   411,     0,    76,    77,     0,     0,     0,
      78,    79,    80,    29,   188,     0,    30,     0,     0,    31,
       0,     0,     0,     0,    32,     0,     0,    33,     0,   189,
       0,    34,   190,     0,     0,     0,     0,     0,     0,     0,
      35,    36,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,    40,    41,     0,     0,    42,     0,    43,
       0,    44,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,    46,    47,     0,     0,    48,    49,    50,    51,
       0,    52,    53,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,     0,    57,     0,     0,     0,     0,    58,
      59,    60,    61,    62,    63,     0,    64,    65,     0,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,    71,
      72,    73,     0,     0,     0,     0,     0,    74,    28,     0,
       0,     0,    75,     0,    76,    77,     0,   326,     0,    78,
      79,    80,    29,     0,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     4,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,     0,     0,
       0,    75,     0,    76,    77,     0,     1,     6,    78,    79,
      80,    29,     0,     0,    30,     0,     0,    31,     0,     0,
       0,     0,    32,     0,     0,    33,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    36,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,    40,    41,     0,     0,    42,     0,    43,     0,    44,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
      46,    47,     0,     0,    48,    49,    50,    51,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,     0,    57,     0,     0,     0,     0,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,    66,    67,    68,
      69,    70,     4,     0,     0,     0,     0,    71,    72,    73,
       0,     0,     0,     0,     0,    74,    28,   187,     0,     0,
      75,     0,    76,    77,     0,     0,     0,    78,    79,    80,
      29,   188,     0,    30,     0,     0,    31,     0,     0,     0,
       0,    32,     0,     0,    33,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      40,    41,     0,     0,    42,     0,    43,     0,    44,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,    46,
      47,     0,     0,    48,    49,    50,    51,     0,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,    55,    56,
       0,    57,     0,     0,     0,     0,    58,    59,    60,    61,
      62,    63,     0,    64,    65,     0,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,    71,    72,    73,     0,
       0,     0,     0,     0,    74,    28,     0,     0,     0,    75,
       0,    76,    77,     0,   252,     0,    78,    79,    80,    29,
       0,     0,    30,     0,     0,    31,     0,     0,     0,     0,
      32,     0,     0,    33,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    46,    47,
       0,     0,    48,    49,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,     0,
      57,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
       0,     0,     0,    74,    28,   187,     0,     0,    75,     0,
      76,    77,     0,     0,     0,    78,    79,    80,    29,     0,
       0,    30,     0,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,    40,    41,
       0,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    46,    47,     0,
       0,    48,    49,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,     0,    57,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,     0,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,    71,    72,    73,     0,     0,     0,
       0,     0,    74,    28,     0,     0,     0,    75,     0,    76,
      77,     0,     0,     0,    78,    79,    80,    29,     0,     0,
      30,     0,     0,    31,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,    40,    41,     0,
       0,    42,     0,    43,     0,    44,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,    46,    47,     0,     0,
      48,    49,    50,    51,     0,    52,    53,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,     0,    57,     0,
       0,     0,     0,    58,    59,    60,    61,    62,    63,     0,
      64,    65,     0,    66,    67,    68,    69,    70,     0,     0,
       0,     0,     0,    71,    72,    73,     0,     0,     0,     0,
       0,    74,    28,     0,     0,     0,    75,     0,    76,    77,
       0,     0,     0,    78,    79,    80,    29,     0,     0,    30,
       0,     0,    31,     0,     0,     0,     0,    32,     0,     0,
      33,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,    40,    41,     0,     0,
      42,     0,    43,     0,    44,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,    46,    47,     0,     0,    48,
      49,    50,    51,     0,    52,    53,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,     0,    57,     0,     0,
       0,     0,    58,    59,    60,    61,    62,    63,     0,    86,
      65,     0,    66,    67,    68,    69,    70,     0,     0,     0,
       0,     0,    71,    72,    73,     0,     0,     0,     0,     0,
      74,     0,     0,     0,     0,    75,     0,    76,    77,     0,
       0,     0,    78,    79,    80
};

static const yytype_int16 yycheck[] =
{
       5,     6,   447,   102,   424,   159,   426,    13,   163,   183,
      96,    97,    98,     1,   333,     0,   518,    12,    23,    24,
     175,   488,    12,    12,   252,    12,   102,    13,    12,     5,
       5,   186,    13,    21,     6,    13,     5,     9,     8,    12,
      64,    12,   252,   217,    69,    21,    12,    86,    12,     5,
       6,   225,   343,   344,    23,    24,   123,   124,   226,    13,
       5,     5,     5,    17,   107,    83,    14,    23,    24,   107,
       5,    47,    47,     5,   184,    12,     0,   109,   252,    21,
     334,    86,   336,    12,    12,   240,    12,    12,   242,   110,
      12,   167,   156,    12,    62,    12,    12,    33,   326,   209,
      36,   144,    47,    47,    47,   137,   144,    92,    53,    13,
      58,   150,    47,   432,    81,    47,   326,   102,   142,    33,
      33,   440,    36,    36,   591,   130,    54,   594,    13,   101,
      86,   101,   300,   130,    76,   309,   638,   204,    55,    13,
     314,   157,    96,   148,    13,   150,   151,    89,    13,    31,
      87,   157,   326,    35,   621,   446,   161,   128,    87,   333,
      64,    78,    87,   337,   159,   141,   141,   140,    87,   159,
     159,   157,   159,   161,   130,   159,   157,   679,   183,   157,
     168,   152,   167,   188,    13,   190,   152,   153,   152,   153,
     509,    26,   148,   638,   150,   151,   141,   141,   141,   666,
     128,   375,   128,   208,   159,   161,   141,   212,   144,   141,
     147,   128,   128,   368,   183,   635,    67,   145,   147,    29,
      30,   190,   147,   105,   152,   147,   143,   183,   147,   145,
     329,   116,   188,    51,   190,   152,   152,    46,   142,   124,
     109,    94,   116,   157,   157,   110,    67,   252,   253,    13,
     124,   116,   208,   258,    67,    12,   212,    75,   432,   124,
      67,    70,   151,   114,    12,    67,   440,    70,    77,    33,
      67,    13,    36,   278,    77,    93,    85,    95,   283,    88,
     285,   110,   287,   252,   113,    88,    67,   116,   442,    98,
      67,    33,    12,   114,    36,   124,   252,   253,    67,    12,
      67,   114,   258,   161,   162,   158,   294,   114,    12,   127,
     163,   164,   114,   122,    67,    69,   321,   114,   323,   122,
      30,   326,   278,     5,     6,    12,    36,   283,   333,   285,
     157,   287,   337,   114,    51,   509,   154,   114,   326,    31,
      13,    23,    24,    35,   349,   114,   351,   114,   157,    46,
     355,   356,   321,   507,   323,   441,   511,   326,    75,    12,
      33,   114,    13,    36,   333,   321,    15,   323,   337,    19,
     326,    15,    33,    70,    12,    36,    93,   333,    95,    71,
      77,   337,    33,    33,    33,    36,    36,    36,    85,    33,
      18,    88,    36,   349,    86,   351,   401,    12,    90,   355,
     356,    98,   160,     6,    86,    33,     9,    57,    36,   508,
     127,   152,   153,   105,   568,    33,   571,    12,    36,    37,
     152,   153,   156,   157,    12,   122,    12,   432,    18,   145,
      13,    13,   150,     5,    27,   440,    13,   154,    13,    13,
     159,    12,   157,    13,   449,   157,   451,   109,   130,   157,
     455,    15,    84,    60,    13,    13,    72,    13,    13,   159,
     112,    12,    61,   432,    13,    85,   148,    12,   150,   151,
     569,   440,   111,    85,    26,   159,   432,    74,   159,   161,
       8,    87,    12,    12,   440,   490,    12,    12,   115,    12,
      12,    12,    12,   449,    12,   451,    36,    13,    85,   455,
     159,   183,    13,   104,   509,     5,   188,     5,   190,    12,
     104,     5,   104,    12,     5,   520,     5,   110,     5,   524,
       5,   490,    12,   140,     5,   104,   208,     5,    12,     5,
     212,     5,     5,   138,   490,    12,   138,   159,   543,   104,
     509,   130,   138,    26,    13,    12,    12,   138,    13,    13,
       5,    13,    12,   509,   147,     5,    13,    13,     5,   564,
       5,     5,   155,    12,   520,     5,   159,    13,   524,    12,
     252,   253,     5,    12,   155,    13,   258,    13,   583,   584,
       5,   174,    13,   176,    13,    13,   179,   155,   155,   155,
     114,   123,   185,    13,     5,   564,   278,     5,     6,   114,
      13,   283,     5,   285,    13,   287,     5,    12,   564,    13,
       5,    13,   205,    13,   207,    23,    24,     5,    12,     5,
      13,   126,    13,    13,    13,     5,   123,   583,   584,    13,
      13,   224,    13,   226,     5,    13,   140,    13,    13,   321,
      13,   323,   138,   138,   326,   650,   138,    13,    15,   242,
     138,   333,    15,    15,    15,   337,    15,    13,    13,    13,
      13,    67,   155,   114,   123,   123,   671,   349,    92,   351,
     123,   123,   281,   355,   356,   155,   155,   290,    86,   287,
     155,   274,   123,   185,   198,   167,   158,   335,   281,   282,
     337,   203,   375,   365,   650,   299,   244,   290,   517,    -1,
     603,   294,   671,   189,   258,    -1,   299,   300,    -1,   302,
     253,    -1,    -1,    -1,    -1,   671,    -1,   188,   311,    -1,
     313,    -1,   130,    -1,    -1,   318,    -1,    -1,    -1,    -1,
      -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    -1,   150,   151,    21,    -1,    -1,    -1,    -1,    -1,
     432,    -1,    -1,   161,    -1,    -1,    33,    -1,   440,    36,
      37,    38,    39,    40,    41,    42,    -1,   449,    -1,   451,
      -1,    -1,    -1,   455,    -1,   183,    -1,    -1,    -1,    -1,
     188,   374,   190,   376,    -1,    -1,    -1,    -1,    -1,    -1,
     383,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
     208,    -1,    -1,    -1,   212,    -1,    -1,    84,   490,    -1,
      -1,    -1,    89,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    33,    -1,   509,    36,    37,
      38,    39,    40,    41,    42,    -1,    21,    -1,   520,    -1,
      -1,    -1,   524,    -1,   252,   253,    -1,    -1,    33,   442,
     258,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,   457,    -1,    -1,    -1,    76,    -1,
     278,    -1,    -1,    -1,    -1,   283,    84,   285,    -1,   287,
     157,    89,   564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,   101,    -1,    -1,    -1,    -1,    -1,    84,
      -1,   583,   584,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   321,   507,   323,   101,    -1,   326,    -1,
      -1,    -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,   337,
      -1,    -1,    -1,    -1,    -1,   528,    -1,    -1,    -1,    -1,
      -1,   349,    -1,   351,    -1,    -1,    -1,   355,   356,    -1,
      -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   650,    -1,
      -1,    -1,    -1,    -1,    -1,   568,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   671,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   432,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   449,    -1,   451,    -1,    -1,    -1,   455,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   490,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   509,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   520,    -1,    -1,    -1,   524,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    -1,   564,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    51,   583,   584,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,   101,   102,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,   650,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,   133,   134,   135,   136,
      -1,    -1,    -1,   671,   141,    -1,    -1,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,   152,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,   161,   162,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    14,    -1,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    54,    -1,    56,
      -1,    58,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,    -1,   129,    -1,    -1,    -1,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      -1,   158,    -1,    -1,   161,   162,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    14,    -1,    16,
      17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,    -1,   129,    -1,    -1,   132,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,   161,   162,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,   152,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,   161,   162,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,   101,   102,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,    -1,   129,    -1,    -1,    -1,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,   161,   162,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,    -1,   129,    -1,    -1,    -1,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      -1,   158,    -1,    -1,   161,   162,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    13,    -1,    -1,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,    -1,   129,    -1,    -1,    -1,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,   161,   162,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,   102,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,    -1,   129,    -1,    -1,    -1,   133,   134,   135,   136,
      -1,    -1,    -1,    -1,   141,    -1,     3,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      17,    -1,    -1,    20,   161,   162,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,    -1,   123,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,     3,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      17,   158,   159,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,    -1,   123,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,     3,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      17,   158,   159,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,    -1,   123,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,     3,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      17,    -1,   159,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,    -1,   123,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,     3,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      17,    -1,   159,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,    -1,   123,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,     3,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      17,    -1,   159,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,    -1,   123,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,    -1,     3,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,
      17,    -1,   159,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,    -1,   123,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,     3,    -1,    -1,    -1,   146,
      -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,    17,
      -1,   158,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    -1,    90,    91,    92,    93,    -1,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,
     108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,
     118,    -1,   120,   121,    -1,   123,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,     3,    -1,    -1,    -1,   146,    -1,
     148,   149,    -1,    -1,    -1,   153,   154,   155,    17,    -1,
     158,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,
      -1,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      -1,    90,    91,    92,    93,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,   108,
      -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,   118,
      -1,   120,   121,    -1,   123,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,     3,    -1,    -1,    -1,   146,    -1,   148,
     149,    -1,    -1,    -1,   153,   154,   155,    17,    -1,   158,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,
      -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,
      90,    91,    92,    93,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,    -1,   108,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,   117,   118,    -1,
     120,   121,    -1,   123,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,     3,    -1,    -1,    -1,   146,    -1,   148,   149,
      -1,    -1,    -1,   153,   154,   155,    17,    -1,   158,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,
      91,    92,    93,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,   108,    -1,    -1,
      -1,    -1,   113,   114,   115,   116,   117,   118,    -1,   120,
     121,    -1,   123,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,     3,    -1,    -1,    -1,   146,    -1,   148,   149,    -1,
      -1,    -1,   153,   154,   155,    17,    -1,   158,    20,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,    71,
      -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,    91,
      92,    93,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,    -1,   108,    -1,    -1,    -1,
      -1,   113,   114,   115,   116,   117,   118,    -1,   120,   121,
      -1,   123,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,
       3,    -1,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,
      -1,   153,   154,   155,    17,    -1,   158,    20,    -1,    22,
      23,    24,    25,    -1,    -1,    28,    29,    30,    31,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    -1,    59,    -1,    -1,    -1,
      63,    -1,    -1,    66,    67,    68,    -1,    -1,    71,    -1,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    -1,    90,    91,    92,
      93,    -1,    95,    96,    97,    -1,    99,   100,    -1,    -1,
     103,   104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,
     113,   114,   115,   116,   117,   118,   119,   120,   121,    -1,
     123,   124,   125,   126,   127,    -1,    -1,    -1,   131,    -1,
     133,   134,   135,    -1,    -1,   138,   139,    -1,   141,     3,
       4,    -1,    -1,   146,    -1,   148,   149,    -1,    -1,    -1,
     153,   154,   155,    17,    18,    -1,    20,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    -1,    33,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    68,    -1,    -1,    71,    -1,    73,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    -1,    -1,    90,    91,    92,    93,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,   108,    -1,    -1,    -1,    -1,   113,
     114,   115,   116,   117,   118,    -1,   120,   121,    -1,   123,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,   133,
     134,   135,    -1,    -1,    -1,    -1,    -1,   141,     3,    -1,
      -1,    -1,   146,    -1,   148,   149,    -1,    12,    -1,   153,
     154,   155,    17,    -1,    -1,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    68,    -1,    -1,    71,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    -1,    90,    91,    92,    93,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    -1,   108,    -1,    -1,    -1,    -1,   113,   114,
     115,   116,   117,   118,    -1,   120,   121,    -1,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,     3,    -1,    -1,
      -1,   146,    -1,   148,   149,    -1,    12,   152,   153,   154,
     155,    17,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,    -1,    -1,    90,    91,    92,    93,    -1,    95,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,    -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,   117,   118,    -1,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,     3,     4,    -1,    -1,
     146,    -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,
      17,    18,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    92,    93,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,   108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,    -1,   120,   121,    -1,   123,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,     3,    -1,    -1,    -1,   146,
      -1,   148,   149,    -1,    12,    -1,   153,   154,   155,    17,
      -1,    -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,
      68,    -1,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    -1,    90,    91,    92,    93,    -1,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,
     108,    -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,
     118,    -1,   120,   121,    -1,   123,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,
      -1,    -1,    -1,   141,     3,     4,    -1,    -1,   146,    -1,
     148,   149,    -1,    -1,    -1,   153,   154,   155,    17,    -1,
      -1,    20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,
      -1,    -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      -1,    90,    91,    92,    93,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    -1,   108,
      -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,   118,
      -1,   120,   121,    -1,   123,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,     3,    -1,    -1,    -1,   146,    -1,   148,
     149,    -1,    -1,    -1,   153,   154,   155,    17,    -1,    -1,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,
      -1,    71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,
      90,    91,    92,    93,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,    -1,   108,    -1,
      -1,    -1,    -1,   113,   114,   115,   116,   117,   118,    -1,
     120,   121,    -1,   123,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,     3,    -1,    -1,    -1,   146,    -1,   148,   149,
      -1,    -1,    -1,   153,   154,   155,    17,    -1,    -1,    20,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    68,    -1,    -1,
      71,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,
      91,    92,    93,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,    -1,   108,    -1,    -1,
      -1,    -1,   113,   114,   115,   116,   117,   118,    -1,   120,
     121,    -1,   123,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,   146,    -1,   148,   149,    -1,
      -1,    -1,   153,   154,   155
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    12,    55,    78,   128,   143,   152,   166,   167,   168,
     169,   170,   171,   174,   175,   178,   179,   180,   181,   182,
     184,   194,   180,    69,    83,    14,    58,   200,     3,    17,
      20,    23,    28,    31,    35,    44,    45,    51,    56,    63,
      67,    68,    71,    73,    75,    82,    86,    87,    90,    91,
      92,    93,    95,    96,   104,   105,   106,   108,   113,   114,
     115,   116,   117,   118,   120,   121,   123,   124,   125,   126,
     127,   133,   134,   135,   141,   146,   148,   149,   153,   154,
     155,   209,   240,   242,   258,   276,   120,   195,   196,   276,
       0,    62,   156,   110,   188,   189,    64,   142,    81,   180,
      13,   209,   209,     4,     5,     6,     7,     8,    10,    12,
      27,    28,    34,    43,    48,    49,    54,    88,   102,   122,
     129,   136,   158,   161,   162,   183,   201,   202,   208,   209,
     219,   220,   221,   222,   223,   224,   232,   233,   238,   239,
     240,   241,   242,   243,   244,   258,   276,   130,   159,   195,
     157,    12,   197,   198,   167,    26,   200,   200,   200,   151,
     185,    12,    54,   145,   172,   173,   178,   198,    12,   179,
     219,   225,   219,   234,    12,    12,    12,    12,    12,    12,
      12,   223,   223,    69,   186,   157,    12,     4,    18,    33,
      36,   272,   273,   274,   275,   276,   161,   162,   230,    94,
     158,   163,   164,   231,   160,    12,    12,    12,   159,   176,
     177,   219,   159,   276,   195,   199,   276,    18,   190,   191,
     219,   181,   181,   182,    12,    65,   101,   213,   214,   215,
     216,   217,   218,   219,   145,   225,   173,   178,   180,    13,
     157,    13,   150,   235,   236,   219,   225,   219,     5,    13,
     219,    13,    12,   183,   203,   204,   205,   206,   209,   210,
     185,   201,    13,   225,   274,   220,   209,   221,   222,   223,
      14,    58,   158,   219,   270,    13,   219,   158,   159,   276,
     185,   157,    37,   159,   276,   159,    13,   157,    12,   183,
     157,    19,    57,   192,    12,   213,   219,   183,   215,   109,
      15,    84,    21,    37,    38,    39,    40,    41,    42,    76,
      84,    89,   101,   228,   229,   225,   213,   219,    60,   237,
     235,    18,    13,   144,    13,   157,    12,   204,   210,   273,
      46,    70,    77,    85,    88,    98,   122,   157,   211,   272,
      72,   187,    13,    13,    13,   219,   112,   245,    13,   159,
     276,   159,   176,   219,   276,   159,   159,   276,   199,   190,
      13,   214,   215,     6,     9,   101,   227,   219,    12,   183,
     226,     8,   101,   219,    21,    76,    89,    14,    16,   132,
     219,   271,   183,   137,   137,   219,    61,    22,    23,    24,
      25,    29,    30,    32,    50,    52,    53,    59,    66,    79,
      80,    82,    97,    99,   100,   103,   119,   121,   131,   138,
     139,   146,   209,   248,   249,   250,   251,   252,   253,   259,
     260,   261,   262,   263,   264,   265,   266,   209,   219,    13,
     198,   207,    85,   111,   212,   205,   212,   211,   212,   203,
      85,    26,    74,   193,   245,   245,    13,    12,   276,   159,
     158,   159,   276,   276,   276,   159,   227,    15,   225,     8,
     219,   226,   219,   219,   219,    87,    12,    12,    87,   147,
      12,    87,   147,    12,    12,    12,   115,    12,   127,   254,
     255,   257,   258,    29,    30,    12,    87,   147,    12,    12,
      12,    12,   152,   153,    12,   152,   153,    12,    13,    17,
      96,    30,   275,   275,    13,    13,   205,   107,   144,    85,
     205,   200,   213,   245,    13,   113,   116,   124,   189,   246,
     159,   158,   276,   276,   159,   276,   219,    13,    15,   104,
       5,     5,   104,    12,     5,   104,    12,     5,   267,     5,
       5,     5,    12,   140,    12,    12,   147,    12,    87,   147,
       5,   104,    12,   267,     5,   209,     5,   138,   138,     5,
     138,   138,     5,    12,   130,   213,   198,   205,   107,   144,
     225,    26,     5,    21,    47,   141,   247,   247,    13,   246,
      13,   158,   276,   159,   159,   158,   276,   219,    12,    13,
      13,    12,     5,    13,    12,     5,    31,    35,    71,    86,
      90,   105,   268,   269,    13,    13,   157,    13,   157,    13,
       5,   127,   256,   258,     5,     5,    12,     5,   104,    12,
      13,    12,     5,    13,    13,   157,    13,    13,   155,   155,
      13,   155,   155,    13,     5,   209,   213,   198,   225,   114,
       5,    47,   141,   123,   114,    13,   158,   276,   158,   276,
     159,     5,   267,    13,   267,    13,   268,     5,     5,    13,
     157,    12,    13,    13,     5,    13,    12,     5,   267,    13,
       5,   126,   152,   153,   152,   153,    13,   275,    13,   189,
     246,    67,   114,   123,    67,   114,   158,   276,    13,    13,
      13,    13,    13,     5,     5,    13,   267,    13,    13,    13,
     209,   138,   138,   138,   138,    13,   246,    13,    15,    15,
      15,    15,    15,    13,    13,    13,   155,   155,   155,   155,
      13,     5,    47,   141,     5,    47,   141,     5,    47,   141,
       5,    47,   141,     5,    47,    53,   141,    67,   114,   123,
      67,   114,    67,   114,   123,    67,   114,    67,   114,   123,
      67,   114,    67,   114,   123,    67,   114,   114,   123,    67,
      67,   114
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
     203,   204,   204,   205,   205,   206,   206,   207,   207,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   209,   209,   209,   209,
     209,   209,   209,   209,   210,   210,   210,   210,   210,   210,
     211,   211,   211,   211,   212,   212,   213,   213,   214,   214,
     215,   215,   216,   216,   216,   217,   217,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   219,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   223,   223,
     224,   224,   224,   224,   224,   224,   225,   225,   226,   226,
     227,   227,   228,   228,   228,   228,   228,   228,   229,   230,
     230,   231,   231,   231,   231,   232,   232,   232,   232,   232,
     232,   232,   233,   234,   234,   235,   235,   236,   236,   237,
     237,   238,   238,   238,   238,   239,   239,   239,   239,   239,
     239,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   241,   242,   242,   242,   243,   243,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   245,
     245,   245,   245,   245,   245,   245,   245,   246,   246,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   248,   248,   248,
     248,   249,   250,   251,   251,   251,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   253,   254,   254,
     255,   255,   256,   256,   256,   257,   257,   257,   257,   257,
     258,   258,   258,   258,   258,   259,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   261,
     261,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   263,   263,   263,   263,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   265,   265,   265,   265,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     267,   267,   267,   267,   268,   268,   268,   269,   269,   269,
     270,   270,   271,   271,   271,   272,   272,   273,   273,   274,
     274,   275,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276
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
       6,     3,     4,     3,     4,     3,     4,     2,     1,     2,
       3,     1,     3,     1,     3,     1,     3,     1,     2,     2,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     0,     1,     1,     2,     4,     4,     0,
       2,     1,     1,     1,     1,     5,     4,     6,     5,     5,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     3,     4,     4,     3,     3,
       6,     6,     4,     1,     4,     1,     6,     1,     1,     8,
       5,     7,     7,     6,     4,     4,     3,     2,     2,     2,
       2,     2,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     1,     1,     1,
       1,     1,     6,     5,     2,     2,     5,     4,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       4,     1,     1,     4,     1,     4,     1,     6,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     7,     4,
       4,     4,     1,     7,     7,     4,     4,     4,     1,     1,
       1,     6,     4,     1,     6,     4,     1,     6,     4,     1,
       1,     1,     1,     1,     4,     1,     1,     2,     4,     1,
       4,     1,     5,     5,     4,     6,     3,     6,     3,     4,
       1,     6,     3,     4,     1,     5,     2,     5,     2,     4,
       1,     6,     6,     5,     7,     4,     6,     3,     4,     1,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 2766 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2772 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2778 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2784 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2790 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2796 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2802 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2808 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 166: /* sql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2814 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 167: /* stmt_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2820 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 168: /* stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2826 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 169: /* dql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2832 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 170: /* dml_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2838 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 171: /* insert_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2844 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 172: /* insert_columns_and_source  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2850 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 173: /* from_constructor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2856 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 174: /* delete_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2862 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 175: /* update_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2868 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 176: /* update_elem_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2874 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 177: /* update_elem  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2880 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 178: /* select_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2886 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* query_expression  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2892 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* query_expression_body  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2898 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* query_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2904 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* query_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2910 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* select_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2916 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* simple_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2922 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_where  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2928 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_from_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2934 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_groupby  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2940 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2946 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2952 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* sort_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2958 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* sort_key  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2964 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_asc_desc  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2970 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_having  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2976 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* with_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2982 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* with_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2988 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* common_table_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2994 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_derived_column_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3000 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3006 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* simple_ident_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3012 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_distinct  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3018 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* select_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3024 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* projection  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3030 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* from_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3036 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* table_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3042 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* table_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3048 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* table_factor_non_join  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3054 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3060 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* column_ref  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3066 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* relation_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3072 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* joined_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3078 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* join_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3084 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* search_condition  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3090 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* boolean_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3096 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* boolean_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3102 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* boolean_test  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3108 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* boolean_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3114 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3120 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* row_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3126 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* factor0  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3132 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* factor1  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3138 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* factor2  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3144 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* factor3  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3150 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* factor4  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3156 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* row_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3162 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* in_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3168 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* truth_value  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3174 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* expr_const  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3180 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* case_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3186 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* case_arg  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3192 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* when_clause_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3198 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* when_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3204 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* case_default  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3210 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* func_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3216 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* aggregate_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3222 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* aggregate_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3228 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* ranking_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3234 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* ranking_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3240 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* scalar_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3246 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* function_call_keyword  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3252 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* over_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3258 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* row_or_range_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3264 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* window_frame_extent  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3270 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* data_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3276 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* user_defined_type_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3282 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* reference_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3288 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* collection_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3294 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* predefined_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3300 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* interval_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3306 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* interval_qualifier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3312 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* start_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3318 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 256: /* end_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3324 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 257: /* single_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3330 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* non_second_primary_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3336 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* boolean_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3342 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 260: /* datetime_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3348 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 261: /* numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3354 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 262: /* exact_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3360 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 263: /* approximate_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3366 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 264: /* character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3372 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 265: /* binary_large_object_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3378 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 266: /* national_character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3384 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 267: /* large_object_length  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3390 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 268: /* char_length_units  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3396 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 269: /* multiplier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3402 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 270: /* distinct_or_all  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3408 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 272: /* opt_as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3414 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 273: /* as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3420 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 274: /* label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3426 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 275: /* collate_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3432 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 276: /* name_r  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3438 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
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

#line 3555 "sqlparser_sql2003_bison.cpp" /* yacc.c:1429  */
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
#line 219 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 3749 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 230 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 3758 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 237 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3764 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 254 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT, E_INSERT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERT_SERIALIZE_FORMAT;
}
#line 3773 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 262 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3782 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 267 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3791 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 272 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3800 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 277 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3809 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 282 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* src = Node::makeTerminalNode(E_IDENTIFIER, "DEFAULT VALUES");
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, src);
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 291 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_VALUES_CTOR, E_VALUES_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 3828 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 300 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3845 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 317 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3863 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 335 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3872 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 343 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 3881 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 352 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_DIRECT_SELECT_ORDER, (yyvsp[0].node));
}
#line 3890 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 360 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 3899 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 365 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 3908 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 373 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3938 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 399 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3968 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 429 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3998 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 459 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4007 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 467 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4016 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 475 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4045 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 502 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4051 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 504 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4060 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 513 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4069 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 526 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4075 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 528 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4084 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 535 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4090 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 541 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4099 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 550 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4108 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 558 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4117 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 566 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4125 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 570 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4133 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 574 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4141 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 580 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4147 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 582 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4156 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 592 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4165 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 597 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 4174 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 606 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4183 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 615 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4192 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 622 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4198 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 628 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4207 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 637 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4216 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 644 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4222 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 646 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4230 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 650 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4238 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 658 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4247 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 666 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4265 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 680 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4275 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 690 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4284 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 704 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4293 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 716 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 721 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4311 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 728 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4317 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 735 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4327 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 741 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4337 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 747 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4348 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 754 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4358 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 760 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4369 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 767 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4379 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 773 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4390 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 780 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4400 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 786 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4411 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 793 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4421 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 799 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4432 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 806 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4442 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 812 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4453 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 819 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4463 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 825 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4474 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 832 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4484 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 838 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4495 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 849 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4504 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 854 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4513 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 859 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4522 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 864 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4531 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 869 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4540 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 874 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4549 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 879 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4558 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 884 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4567 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 892 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4576 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 897 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4586 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 903 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4595 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 908 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4605 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 914 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4615 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 920 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + (yyvsp[-2].node)->text());
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4625 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 929 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4640 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 940 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4655 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 951 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4670 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 962 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 4678 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 968 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4684 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 969 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 4690 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 976 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_OR);
}
#line 4699 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 985 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_AND);
}
#line 4708 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 994 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT);
}
#line 4717 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1003 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 4726 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1008 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 4735 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1017 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4744 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1025 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4753 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1030 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4762 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1035 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_BTW);
}
#line 4771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1040 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_BTW);
}
#line 4780 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1045 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 4789 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1050 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 4798 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1055 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IN);
}
#line 4807 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1060 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_IN);
}
#line 4816 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1065 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 4825 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1070 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 4834 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1075 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_EXISTS);
}
#line 4843 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1085 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4852 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1090 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_CNN);
}
#line 4861 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1099 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4870 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1108 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4879 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1117 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POW);
}
#line 4888 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1126 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POS);
}
#line 4897 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1131 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NEG);
}
#line 4906 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1141 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4915 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1153 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4924 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1162 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4933 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1172 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 4939 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1173 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LT; }
#line 4945 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1174 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 4951 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1175 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GT; }
#line 4957 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1176 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_EQ; }
#line 4963 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1177 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 4969 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1182 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.nodetype) = Node::comp_all_some_any_op_form((yyvsp[-1].nodetype), (yyvsp[0].ival));
}
#line 4977 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1188 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_ADD; }
#line 4983 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1189 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MINUS; }
#line 4989 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1193 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MUL; }
#line 4995 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1194 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_DIV; }
#line 5001 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1195 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_REM; }
#line 5007 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1196 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MOD; }
#line 5013 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1206 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5019 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1212 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_CASE);
}
#line 5028 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1219 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5034 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1226 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SPACE_LIST_SERIALIZE_FORMAT;
}
#line 5043 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1234 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5052 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1239 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5061 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1246 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5067 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1248 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5076 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1265 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1271 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5096 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1277 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5106 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1283 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5116 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1289 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5132 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1301 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5148 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1315 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "AVG"); }
#line 5154 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1316 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MAX"); }
#line 5160 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1317 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MIN"); }
#line 5166 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1318 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SUM"); }
#line 5172 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1319 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP"); }
#line 5178 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1320 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP"); }
#line 5184 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1321 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP"); }
#line 5190 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1322 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP"); }
#line 5196 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1323 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COUNT"); }
#line 5202 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1324 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING"); }
#line 5208 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1329 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5218 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1337 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANK"); }
#line 5224 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1338 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK"); }
#line 5230 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1339 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER"); }
#line 5236 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1344 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5246 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1350 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5256 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1362 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5266 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1368 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5277 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1375 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5288 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1382 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5299 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1389 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 5312 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1398 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5323 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1405 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5334 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1412 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5345 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1419 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5356 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1426 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5369 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1435 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5380 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1442 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5391 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1452 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5400 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1457 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5409 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1462 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5418 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1467 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5427 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1472 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5436 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1477 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5445 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1482 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5454 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1487 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5463 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1495 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, E_ROWS_CLAUSE_PROPERTY_CNT, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5473 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1501 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, E_RANGE_CLAUSE_PROPERTY_CNT, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5483 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1510 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 5489 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1512 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 5495 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1514 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 5501 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1516 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 5507 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1518 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5513 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1520 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 5519 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1522 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 5525 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1524 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5531 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1526 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 5537 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1528 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5543 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1530 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5549 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1532 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5555 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1534 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5561 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1536 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 5567 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1538 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5573 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1540 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 5579 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1542 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 5585 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1544 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5591 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1546 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 5597 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1548 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5603 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1550 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 5609 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1552 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 5615 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1554 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5621 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1556 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 5627 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1558 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5633 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1560 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5639 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1562 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5645 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1564 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5651 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1576 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5660 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1584 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5669 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1592 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 5679 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1598 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 5688 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1603 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 5697 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1611 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5706 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1616 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5715 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1621 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5724 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1627 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5733 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1641 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5742 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1649 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 5751 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1658 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5760 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1668 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5769 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1673 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5777 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1680 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5786 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1686 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1691 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5804 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1696 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5812 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1703 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 5820 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1707 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 5828 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1711 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 5836 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1715 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 5844 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1719 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 5852 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1726 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 5860 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1733 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 5868 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1737 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5877 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1742 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5886 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1747 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5895 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1752 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 5903 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1756 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 5911 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1760 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME");
}
#line 5919 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1764 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5928 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1769 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5937 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1774 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5946 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1779 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 5954 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1783 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 5962 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1787 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP");
}
#line 5970 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1799 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5979 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1804 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5988 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1809 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 5996 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1813 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6005 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1818 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6014 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1823 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 6022 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1827 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6031 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1832 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6040 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1837 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6048 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1841 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6056 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1845 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6064 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1849 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6072 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1853 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6080 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1860 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6089 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1865 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6097 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1869 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6105 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1873 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6113 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1880 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6122 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1885 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6130 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1889 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6139 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1894 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6147 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1898 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6156 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1903 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6165 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1908 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6174 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1913 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6183 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1918 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6191 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1922 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6200 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1927 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6208 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1931 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6217 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1936 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6225 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1943 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6234 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1948 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6242 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1952 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6251 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1957 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6259 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1964 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6268 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1969 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6276 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1973 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6285 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1978 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6293 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1982 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1987 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6310 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1991 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6319 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1996 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6328 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2001 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6337 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2006 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6346 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2011 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6354 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2015 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6363 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2020 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6371 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2024 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6380 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2029 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6388 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2036 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6397 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2041 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6406 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2046 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6415 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2051 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6424 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2059 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6432 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2063 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6440 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2067 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6448 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2074 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6456 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2078 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 6464 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2082 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 6472 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2089 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6480 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2093 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6488 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2099 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 6494 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2100 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 6500 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2101 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 6506 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2105 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6512 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2110 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 6518 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2122 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6527 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2135 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "K"); }
#line 6533 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2136 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "M"); }
#line 6539 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2137 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "G"); }
#line 6545 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2138 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ARRAY"); }
#line 6551 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2139 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BINARY"); }
#line 6557 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2140 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CAST"); }
#line 6563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2141 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CHARACTERS"); }
#line 6569 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2142 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CODE_UNITS"); }
#line 6575 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2143 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CORRESPONDING"); }
#line 6581 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2144 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOLLOWING"); }
#line 6587 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2145 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "INTERVAL"); }
#line 6593 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2146 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "LARGE"); }
#line 6599 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2147 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MULTISET"); }
#line 6605 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2148 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OBJECT"); }
#line 6611 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2149 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OCTETS"); }
#line 6617 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2150 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ONLY"); }
#line 6623 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2151 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PARTITION"); }
#line 6629 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2152 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECEDING"); }
#line 6635 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2153 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECISION"); }
#line 6641 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2154 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANGE"); }
#line 6647 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2155 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RECURSIVE"); }
#line 6653 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2156 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "REF"); }
#line 6659 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2157 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW"); }
#line 6665 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2158 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROWS"); }
#line 6671 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2159 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SCOPE"); }
#line 6677 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2160 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SECOND"); }
#line 6683 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2161 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED"); }
#line 6689 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2162 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VARCHAR"); }
#line 6695 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2163 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "WITHOUT"); }
#line 6701 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2164 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ZONE"); }
#line 6707 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2165 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ERROR"); }
#line 6713 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2166 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOR"); }
#line 6719 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2167 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OF"); }
#line 6725 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2168 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "READ"); }
#line 6731 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;


#line 6735 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 2171 "./sqlparser_sql2003.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
