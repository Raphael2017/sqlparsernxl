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
    UNION = 266,
    EXCEPT = 267,
    INTERSECT = 268,
    OR = 269,
    AND = 270,
    NOT = 271,
    COMP_LE = 272,
    COMP_LT = 273,
    COMP_EQ = 274,
    COMP_GT = 275,
    COMP_GE = 276,
    COMP_NE = 277,
    CNNOP = 278,
    LIKE = 279,
    BETWEEN = 280,
    IN = 281,
    IS = 282,
    MOD = 283,
    UMINUS = 284,
    ADD = 285,
    ANY = 286,
    ALL = 287,
    ALTER = 288,
    AS = 289,
    ASC = 290,
    BEGI = 291,
    BIGINT = 292,
    BINARY = 293,
    BOOLEAN = 294,
    BOTH = 295,
    BY = 296,
    CASCADE = 297,
    CASE = 298,
    CHARACTER = 299,
    CLUSTER = 300,
    COMMENT = 301,
    COMMIT = 302,
    CONSISTENT = 303,
    COLUMN = 304,
    COLUMNS = 305,
    CREATE = 306,
    CREATETIME = 307,
    CROSS = 308,
    CURRENT_USER = 309,
    CHANGE_OBI = 310,
    SWITCH_CLUSTER = 311,
    DATE = 312,
    DATETIME = 313,
    DEALLOCATE = 314,
    DECIMAL = 315,
    DEFAULT = 316,
    DELETE = 317,
    DESC = 318,
    DESCRIBE = 319,
    DISTINCT = 320,
    DOUBLE = 321,
    DROP = 322,
    DUAL = 323,
    ELSE = 324,
    END = 325,
    END_P = 326,
    ERROR = 327,
    EXECUTE = 328,
    EXISTS = 329,
    EXPLAIN = 330,
    FLOAT = 331,
    FOR = 332,
    FROM = 333,
    FULL = 334,
    FROZEN = 335,
    FORCE = 336,
    GLOBAL = 337,
    GLOBAL_ALIAS = 338,
    GRANT = 339,
    GROUP = 340,
    HAVING = 341,
    HINT_BEGIN = 342,
    HINT_END = 343,
    HOTSPOT = 344,
    IDENTIFIED = 345,
    IF = 346,
    INNER = 347,
    INTEGER = 348,
    INSERT = 349,
    INTO = 350,
    JOIN = 351,
    KEY = 352,
    LEADING = 353,
    LEFT = 354,
    LIMIT = 355,
    LOCAL = 356,
    LOCKED = 357,
    MEDIUMINT = 358,
    MEMORY = 359,
    MODIFYTIME = 360,
    MASTER = 361,
    NATURAL = 362,
    NUMERIC = 363,
    OFFSET = 364,
    ON = 365,
    ORDER = 366,
    OPTION = 367,
    OUTER = 368,
    PARAMETERS = 369,
    PERCENT = 370,
    PASSWORD = 371,
    PRECISION = 372,
    PREPARE = 373,
    PRIMARY = 374,
    READ_STATIC = 375,
    REAL = 376,
    RENAME = 377,
    REPLACE = 378,
    RESTRICT = 379,
    PRIVILEGES = 380,
    REVOKE = 381,
    RIGHT = 382,
    ROLLBACK = 383,
    KILL = 384,
    READ_CONSISTENCY = 385,
    SCHEMA = 386,
    SCOPE = 387,
    SELECT = 388,
    SESSION = 389,
    SESSION_ALIAS = 390,
    SET = 391,
    SHOW = 392,
    SMALLINT = 393,
    SNAPSHOT = 394,
    SPFILE = 395,
    START = 396,
    STATIC = 397,
    SYSTEM = 398,
    STRONG = 399,
    SET_MASTER_CLUSTER = 400,
    SET_SLAVE_CLUSTER = 401,
    SLAVE = 402,
    TABLE = 403,
    TABLES = 404,
    THEN = 405,
    TIES = 406,
    TIME = 407,
    TIMESTAMP = 408,
    TINYINT = 409,
    TRAILING = 410,
    TRANSACTION = 411,
    TO = 412,
    TOP = 413,
    UPDATE = 414,
    USER = 415,
    USING = 416,
    VALUES = 417,
    VARCHAR = 418,
    VARBINARY = 419,
    WHERE = 420,
    WHEN = 421,
    WITH = 422,
    WORK = 423,
    PROCESSLIST = 424,
    QUERY = 425,
    CONNECTION = 426,
    WEAK = 427
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 80 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 322 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 352 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   632

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  184
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  304

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   427

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    32,     2,     2,
      36,    37,    30,    28,   183,    29,    38,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   182,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    34,     2,     2,     2,     2,     2,
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
      25,    26,    27,    33,    35,    39,    40,    41,    42,    43,
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
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   183,   183,   192,   193,   201,   202,   207,   211,   218,
     223,   231,   232,   237,   243,   248,   254,   266,   267,   271,
     295,   319,   343,   371,   374,   379,   384,   389,   396,   397,
     404,   405,   406,   415,   418,   427,   430,   438,   443,   448,
     453,   458,   467,   473,   477,   485,   486,   494,   495,   499,
     507,   509,   517,   526,   529,   533,   541,   542,   550,   558,
     559,   567,   575,   576,   580,   588,   589,   599,   602,   606,
     613,   614,   622,   627,   635,   643,   652,   654,   661,   662,
     669,   673,   678,   683,   688,   693,   698,   705,   710,   715,
     720,   726,   732,   737,   746,   757,   768,   779,   783,   790,
     791,   796,   797,   804,   809,   814,   822,   823,   824,   825,
     826,   827,   831,   832,   833,   839,   840,   841,   842,   850,
     851,   856,   861,   866,   871,   876,   881,   886,   891,   898,
     899,   904,   909,   914,   919,   924,   929,   934,   939,   944,
     949,   954,   959,   964,   969,   974,   979,   984,   989,   994,
     999,  1004,  1011,  1012,  1019,  1026,  1028,  1033,  1034,  1041,
    1048,  1054,  1059,  1065,  1070,  1075,  1080,  1087,  1091,  1098,
    1101,  1104,  1107,  1110,  1112,  1114,  1116,  1118,  1120,  1122,
    1124
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "UNION", "EXCEPT",
  "INTERSECT", "OR", "AND", "NOT", "COMP_LE", "COMP_LT", "COMP_EQ",
  "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE", "BETWEEN", "IN", "IS",
  "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS", "'('", "')'",
  "'.'", "ADD", "ANY", "ALL", "ALTER", "AS", "ASC", "BEGI", "BIGINT",
  "BINARY", "BOOLEAN", "BOTH", "BY", "CASCADE", "CASE", "CHARACTER",
  "CLUSTER", "COMMENT", "COMMIT", "CONSISTENT", "COLUMN", "COLUMNS",
  "CREATE", "CREATETIME", "CROSS", "CURRENT_USER", "CHANGE_OBI",
  "SWITCH_CLUSTER", "DATE", "DATETIME", "DEALLOCATE", "DECIMAL", "DEFAULT",
  "DELETE", "DESC", "DESCRIBE", "DISTINCT", "DOUBLE", "DROP", "DUAL",
  "ELSE", "END", "END_P", "ERROR", "EXECUTE", "EXISTS", "EXPLAIN", "FLOAT",
  "FOR", "FROM", "FULL", "FROZEN", "FORCE", "GLOBAL", "GLOBAL_ALIAS",
  "GRANT", "GROUP", "HAVING", "HINT_BEGIN", "HINT_END", "HOTSPOT",
  "IDENTIFIED", "IF", "INNER", "INTEGER", "INSERT", "INTO", "JOIN", "KEY",
  "LEADING", "LEFT", "LIMIT", "LOCAL", "LOCKED", "MEDIUMINT", "MEMORY",
  "MODIFYTIME", "MASTER", "NATURAL", "NUMERIC", "OFFSET", "ON", "ORDER",
  "OPTION", "OUTER", "PARAMETERS", "PERCENT", "PASSWORD", "PRECISION",
  "PREPARE", "PRIMARY", "READ_STATIC", "REAL", "RENAME", "REPLACE",
  "RESTRICT", "PRIVILEGES", "REVOKE", "RIGHT", "ROLLBACK", "KILL",
  "READ_CONSISTENCY", "SCHEMA", "SCOPE", "SELECT", "SESSION",
  "SESSION_ALIAS", "SET", "SHOW", "SMALLINT", "SNAPSHOT", "SPFILE",
  "START", "STATIC", "SYSTEM", "STRONG", "SET_MASTER_CLUSTER",
  "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES", "THEN", "TIES", "TIME",
  "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO", "TOP", "UPDATE",
  "USER", "USING", "VALUES", "VARCHAR", "VARBINARY", "WHERE", "WHEN",
  "WITH", "WORK", "PROCESSLIST", "QUERY", "CONNECTION", "WEAK", "';'",
  "','", "$accept", "sql_stmt", "stmt_list", "stmt", "select_stmt",
  "select_with_parens", "select_no_parens", "select_clause",
  "simple_select", "opt_top", "top_count", "top_percent", "opt_where",
  "opt_from_clause", "select_limit", "opt_hint", "limit_expr",
  "opt_groupby", "opt_order_by", "order_by", "sort_list", "sort_key",
  "opt_asc_desc", "opt_having", "with_clause", "with_list",
  "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_factor",
  "table_factor_non_join", "relation_factor", "joined_table", "join_type",
  "join_outer", "expr_list", "column_ref", "expr_const", "simple_expr",
  "arith_expr", "expr", "in_expr", "case_expr", "case_arg",
  "when_clause_list", "when_clause", "case_default", "func_expr",
  "distinct_or_all", "column_name", "relation_name", "function_name",
  "column_label", "data_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    43,    45,
      42,    47,    37,   283,    94,   284,    40,    41,    46,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
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
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,    59,    44
};
# endif

#define YYPACT_NINF -221

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-221)))

#define YYTABLE_NINF -172

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -23,   -23,  -221,    22,    28,   -11,   -88,  -221,   -74,  -221,
      11,   -21,   -17,    62,    83,   -30,    73,  -221,   -60,  -221,
    -221,   -23,   -30,   -30,   -30,    77,   -73,    30,  -221,    11,
     -20,  -221,  -221,  -221,  -221,   -39,   149,   112,  -221,    22,
    -221,   -17,   -17,   -17,   410,    72,    72,  -221,   -73,    30,
      71,   375,   -27,   141,   146,  -221,   171,  -221,   171,  -221,
      43,  -221,  -221,  -221,  -221,  -221,  -221,   410,   444,   444,
     108,   410,   146,  -221,  -221,     3,  -221,  -221,  -221,   204,
     484,  -221,  -221,  -221,   152,   151,  -221,  -221,  -110,    88,
    -221,    70,  -221,   410,    29,    89,  -221,   117,    31,   515,
     149,  -221,  -221,   605,  -221,  -221,    20,   194,   245,   593,
      64,  -221,   410,   444,   444,   444,   444,   444,   444,   444,
     410,   410,   109,   410,   410,   410,   410,   410,   410,   410,
     410,   444,   206,   167,  -221,  -221,  -221,    68,   360,    72,
      72,    72,   545,    84,    79,    26,    66,   375,  -221,   244,
    -221,  -221,  -221,   410,   410,   170,    64,  -221,   168,   168,
     223,   223,   223,   223,  -221,   528,   605,   410,   444,   206,
     305,   305,   305,   305,   305,   305,   256,   145,   178,   108,
    -221,  -221,  -221,  -221,  -221,   158,  -221,  -221,  -221,   239,
    -221,  -221,  -221,   241,   203,   410,  -221,  -221,  -221,   177,
    -221,   142,  -221,     1,    12,  -221,   211,  -221,    15,  -221,
    -221,   410,   209,  -221,  -221,  -221,   271,   410,   225,  -221,
     145,   453,  -221,   444,   269,  -221,  -221,  -221,  -221,  -221,
     208,   569,  -221,    24,    80,   270,   306,  -221,  -221,   186,
    -221,    26,   186,   210,   186,    26,   212,   306,  -221,   593,
     261,   218,   410,   593,  -221,   444,   204,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,   277,  -221,  -221,    73,
    -221,  -221,   217,  -221,    32,  -221,  -221,    26,    73,   410,
     410,  -221,   593,   204,  -221,  -221,   410,   285,  -221,   238,
    -221,  -221,   593,   593,   320,   410,   288,   296,   298,   593,
     320,  -221,   300,  -221
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,    42,     0,     0,     0,     3,     5,    18,     7,
      48,    17,     0,    18,     0,    67,    62,    58,    59,     1,
       2,     6,    67,    67,    67,     0,     0,    12,    18,    48,
      17,    10,     9,    68,    69,    23,     0,     0,    63,     0,
       4,     0,     0,     0,     0,     0,     0,    13,     0,    15,
       0,     0,    65,     0,     0,    60,    20,    17,    22,    21,
     169,   106,   107,   109,   108,   110,   111,     0,     0,     0,
       0,   156,     0,   117,    49,    50,   112,   113,   119,   129,
      53,   115,   116,   103,     0,     0,    43,    44,    39,    40,
      16,    28,    30,     0,    24,     0,    75,    35,    70,    72,
       0,    64,    61,   140,   120,   121,   117,     0,   101,   155,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    52,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    33,     0,   172,     0,
      73,    66,   114,     0,     0,   161,   157,    51,   122,   123,
     124,   125,   126,   128,   127,   139,   138,     0,     0,     0,
     130,   131,   132,   134,   133,   135,   151,   136,     0,     0,
     152,   149,   143,   141,   145,     0,   169,   105,   104,     0,
     166,   167,   168,     0,   101,     0,    37,    41,    38,    29,
      25,     0,   170,     0,     0,    36,    76,    78,    80,    79,
      87,     0,    45,    71,    74,   102,     0,     0,     0,   158,
     137,     0,   150,     0,     0,   144,   142,   146,   162,   164,
       0,     0,    27,    18,     0,    79,     0,    84,    98,   100,
      97,     0,   100,     0,   100,     0,     0,     0,    82,    34,
       0,    56,     0,   160,   154,     0,   147,   153,   177,   178,
     180,   176,   175,   179,   174,   173,     0,   163,    88,    83,
      99,    94,     0,    95,     0,    96,    77,     0,    81,     0,
       0,    19,   159,   148,   165,    86,     0,     0,    91,     0,
      85,    46,    57,    90,     0,     0,     0,   169,     0,    89,
       0,    93,     0,    92
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,   319,  -221,  -221,     0,    85,    -3,    54,  -221,
    -221,  -221,  -221,  -221,   293,  -221,   -36,  -221,   313,   315,
     233,  -221,  -221,  -221,  -221,   309,  -221,  -221,  -128,   249,
     229,   205,  -221,   105,  -177,    82,  -221,   148,  -221,   -95,
    -133,  -220,  -221,  -221,   -66,   -37,   189,  -221,  -221,   213,
    -221,  -221,  -221,  -221,   222,   -82,  -221,   224,  -221
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    73,    14,    10,    11,    51,
      94,    95,   212,   146,    47,    15,    88,   251,    26,    27,
      74,    75,   136,   281,    12,    17,    18,    37,    38,    53,
      35,    97,    98,   205,   206,   207,   208,   209,   246,   271,
     107,    76,    77,    78,    79,   108,   181,    81,   110,   155,
     156,   218,    82,   195,    83,    84,    85,   150,   266
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    13,   104,   105,   202,   193,    -8,    80,   139,    29,
      89,    33,    28,     1,    99,   202,   -11,   -14,   202,     1,
     215,     8,    22,    23,    24,    16,   234,   202,    19,   202,
     103,   -18,   -18,   -18,   109,   202,    45,   203,    56,    58,
      59,    28,    28,    28,    34,    46,   224,   158,   159,   160,
     161,   162,   163,   164,   102,   236,   142,    31,   247,   -11,
     -14,    31,   203,   210,   272,   178,    30,   236,     1,    20,
     106,   186,   111,   140,   298,    80,    91,    86,    92,  -171,
     302,  -170,    87,   165,   166,     9,   170,   171,   172,   173,
     174,   175,   176,   177,    21,    57,    57,    57,   187,    31,
     289,   194,   221,   196,   197,   198,     9,    93,    -8,    36,
      99,    60,    61,    62,    63,    64,    65,   216,    66,     2,
      32,   210,   237,    39,    67,     2,   248,    44,    50,   -18,
     220,    25,   180,   167,   168,   169,    68,    69,   -18,   -47,
     -18,   285,   238,     2,    70,   204,   291,   273,   -47,   275,
     290,   237,    52,     3,   269,    54,   100,   256,   231,   210,
      71,   -11,   -14,   210,   225,   278,   226,   227,   239,   180,
     131,   132,   133,   182,   249,   183,   184,     3,   101,   106,
     253,   240,     1,   185,    24,   241,   112,   138,   242,   283,
     137,    72,   210,   223,   -31,   210,   243,   141,   115,   116,
     117,   118,   119,   233,   145,   143,   113,   114,   115,   116,
     117,   118,   119,   144,   147,   282,   244,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   152,   113,   114,   115,   116,   117,   118,   119,   154,
     211,   204,   179,   292,   200,   204,   230,   148,   217,   293,
       2,    41,    42,    43,   258,   201,   259,   119,   299,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   238,   204,   260,   228,   204,   229,   238,
     130,   131,   132,   133,     3,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   239,
     238,   -32,   232,   250,   254,   239,   257,   268,   270,   202,
     261,   279,   240,   280,   284,   274,   241,   277,   240,   242,
     262,   294,   241,   297,   300,   242,   239,   243,   129,   130,
     131,   132,   133,   243,  -170,   301,   286,   303,   263,   240,
      40,    90,    48,   241,    49,   157,   242,   244,    55,   151,
     276,   235,   213,   244,   243,   264,   288,   295,   222,   188,
       0,     0,     0,    60,    61,    62,    63,    64,    65,   219,
      66,   265,     0,   214,   244,     0,    67,     0,    60,    61,
      62,    63,    64,    65,     0,    66,   153,   287,    68,    69,
     189,    67,     0,     0,   245,     0,    70,   190,     0,     0,
       0,   191,     0,    68,    69,    96,     0,     0,   296,     0,
       0,    70,    71,    60,    61,    62,    63,    64,    65,     0,
      66,     0,     0,     0,     0,     0,    67,    71,   153,     0,
     252,     0,     0,     0,   192,     0,     0,     0,    68,    69,
       0,     0,     0,    72,     0,     0,    70,    60,    61,    62,
      63,    64,    65,     0,    66,     0,     0,     0,    72,     0,
       0,     0,    71,     0,     0,     0,     0,     0,   255,     0,
       0,     0,    68,    69,     0,     0,     0,     0,     0,     0,
      70,   113,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,    72,     0,     0,    71,     0,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,     0,     0,     0,     0,     0,     0,   148,     0,
       0,     0,     0,     0,     0,     0,     0,    72,   134,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   135,     0,   149,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   199,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   267,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133
};

static const yytype_int16 yycheck[] =
{
       0,     1,    68,    69,     3,   138,    80,    44,   118,    12,
      46,    41,    12,    36,    51,     3,    37,    37,     3,    36,
     153,    21,    11,    12,    13,     3,   203,     3,     0,     3,
      67,    11,    12,    13,    71,     3,   109,    36,    41,    42,
      43,    41,    42,    43,    74,   118,   179,   113,   114,   115,
     116,   117,   118,   119,    54,    43,    93,    37,    43,    80,
      80,    37,    36,   145,   241,   131,    12,    43,    36,    80,
      70,     3,    72,   183,   294,   112,     5,     5,     7,    36,
     300,    38,    10,   120,   121,     0,   123,   124,   125,   126,
     127,   128,   129,   130,   182,    41,    42,    43,    30,    37,
     277,   138,   168,   139,   140,   141,    21,    36,   182,    36,
     147,     3,     4,     5,     6,     7,     8,   154,    10,   142,
      37,   203,   204,   183,    16,   142,   208,    50,   167,   109,
     167,   120,   132,    24,    25,    26,    28,    29,   118,   109,
     120,   269,    62,   142,    36,   145,   279,   242,   118,   244,
     278,   233,     3,   176,   236,    43,   183,   223,   195,   241,
      52,   182,   182,   245,     6,   247,     8,     9,    88,   169,
      25,    26,    27,     6,   211,     8,     9,   176,    37,   179,
     217,   101,    36,    16,    13,   105,   183,    36,   108,   255,
      38,    83,   274,    15,   124,   277,   116,   109,    30,    31,
      32,    33,    34,   203,    87,   176,    28,    29,    30,    31,
      32,    33,    34,   124,   183,   252,   136,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    37,    28,    29,    30,    31,    32,    33,    34,   175,
     174,   241,    36,   280,   160,   245,    43,     3,    78,   286,
     142,    22,    23,    24,    46,   176,    48,    34,   295,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    62,   274,    67,    37,   277,    37,    62,
      24,    25,    26,    27,   176,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    88,
      62,   124,   160,    94,    79,    88,    37,    37,   122,     3,
     102,    50,   101,    95,    37,   105,   105,   105,   101,   108,
     112,    36,   105,     3,    36,   108,    88,   116,    23,    24,
      25,    26,    27,   116,    38,    37,   119,    37,   130,   101,
      21,    48,    29,   105,    29,   112,   108,   136,    39,   100,
     245,   203,   147,   136,   116,   147,   274,   119,   169,   137,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,   156,
      10,   163,    -1,   149,   136,    -1,    16,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,   183,   170,    28,    29,
      30,    16,    -1,    -1,   183,    -1,    36,    37,    -1,    -1,
      -1,    41,    -1,    28,    29,    30,    -1,    -1,   170,    -1,
      -1,    36,    52,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    16,    52,   183,    -1,
     159,    -1,    -1,    -1,    74,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    83,    -1,    -1,    36,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    52,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    44,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    72,    -1,    43,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,   142,   176,   185,   186,   187,   188,   189,   190,
     191,   192,   208,   189,   190,   199,     3,   209,   210,     0,
      80,   182,    11,    12,    13,   120,   202,   203,   189,   191,
     192,    37,    37,    41,    74,   214,    36,   211,   212,   183,
     186,   214,   214,   214,    50,   109,   118,   198,   202,   203,
     167,   193,     3,   213,    43,   209,   191,   192,   191,   191,
       3,     4,     5,     6,     7,     8,    10,    16,    28,    29,
      36,    52,    83,   189,   204,   205,   225,   226,   227,   228,
     229,   231,   236,   238,   239,   240,     5,    10,   200,   200,
     198,     5,     7,    36,   194,   195,    30,   215,   216,   229,
     183,    37,   189,   229,   228,   228,   189,   224,   229,   229,
     232,   189,   183,    28,    29,    30,    31,    32,    33,    34,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    44,    72,   206,    38,    36,   118,
     183,   109,   229,   176,   124,    87,   197,   183,     3,    43,
     241,   213,    37,   183,   175,   233,   234,   204,   228,   228,
     228,   228,   228,   228,   228,   229,   229,    24,    25,    26,
     229,   229,   229,   229,   229,   229,   229,   229,   228,    36,
     189,   230,     6,     8,     9,    16,     3,    30,   238,    30,
      37,    41,    74,   224,   229,   237,   200,   200,   200,    37,
     160,   176,     3,    36,   189,   217,   218,   219,   220,   221,
     239,   174,   196,   215,   241,   224,   229,    78,   235,   233,
     229,   228,   230,    15,   224,     6,     8,     9,    37,    37,
      43,   229,   160,   189,   218,   221,    43,   239,    62,    88,
     101,   105,   108,   116,   136,   183,   222,    43,   239,   229,
      94,   201,   159,   229,    79,    15,   228,    37,    46,    48,
      67,   102,   112,   130,   147,   163,   242,    37,    37,   239,
     122,   223,   218,   223,   105,   223,   217,   105,   239,    50,
      95,   207,   229,   228,    37,   212,   119,   170,   219,   218,
     212,   224,   229,   229,    36,   119,   170,     3,   225,   229,
      36,    37,   225,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   184,   185,   186,   186,   187,   187,   188,   188,   189,
     189,   190,   190,   190,   190,   190,   190,   191,   191,   192,
     192,   192,   192,   193,   193,   193,   193,   193,   194,   194,
     195,   195,   195,   196,   196,   197,   197,   198,   198,   198,
     198,   198,   199,   200,   200,   201,   201,   202,   202,   203,
     204,   204,   205,   206,   206,   206,   207,   207,   208,   209,
     209,   210,   211,   211,   212,   213,   213,   214,   214,   214,
     215,   215,   216,   216,   216,   216,   217,   217,   218,   218,
     219,   219,   219,   219,   219,   219,   219,   220,   221,   221,
     221,   221,   221,   221,   222,   222,   222,   222,   222,   223,
     223,   224,   224,   225,   225,   225,   226,   226,   226,   226,
     226,   226,   227,   227,   227,   227,   227,   227,   227,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   230,   230,   231,   232,   232,   233,   233,   234,
     235,   235,   236,   236,   236,   236,   236,   237,   237,   238,
     239,   240,   241,   242,   242,   242,   242,   242,   242,   242,
     242
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     3,
       3,     1,     2,     3,     2,     3,     4,     1,     1,     9,
       4,     4,     4,     0,     2,     4,     3,     5,     1,     3,
       1,     1,     3,     0,     2,     0,     2,     4,     4,     2,
       2,     4,     0,     1,     1,     0,     3,     1,     0,     3,
       1,     3,     2,     0,     1,     1,     0,     2,     2,     1,
       3,     4,     0,     1,     3,     1,     3,     0,     1,     1,
       1,     3,     1,     2,     3,     1,     1,     3,     1,     1,
       1,     3,     2,     3,     2,     4,     4,     1,     3,     6,
       5,     4,     8,     7,     2,     2,     2,     1,     1,     1,
       0,     1,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     2,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       2,     3,     4,     3,     4,     3,     4,     5,     6,     3,
       4,     3,     1,     3,     5,     1,     0,     1,     2,     4,
       2,     0,     4,     5,     4,     6,     3,     1,     1,     1,
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
#line 1594 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1600 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1606 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1612 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1618 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1624 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1630 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1636 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* sql_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1642 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* stmt_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1648 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1654 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* select_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1660 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* select_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1666 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* select_no_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1672 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* select_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1678 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* simple_select  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1684 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_top  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1690 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* top_count  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1696 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* top_percent  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1702 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_where  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1708 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_from_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1714 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* select_limit  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1720 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* opt_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1726 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* limit_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1732 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_groupby  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1738 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_order_by  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1744 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* order_by  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1750 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* sort_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1756 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* sort_key  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1762 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_asc_desc  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1768 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_having  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1774 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* with_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1780 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* with_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1786 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* common_table_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1792 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_derived_column_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1798 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* simple_ident_list_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1804 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* simple_ident_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1810 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* opt_distinct  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1816 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* select_expr_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1822 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* projection  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1828 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* from_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1834 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* table_factor  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1840 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* table_factor_non_join  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1846 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* relation_factor  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1852 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* joined_table  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1858 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* join_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1864 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* expr_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1870 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* column_ref  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1876 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* expr_const  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1882 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* simple_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1888 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* arith_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1894 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1900 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* in_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1906 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* case_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1912 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* case_arg  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1918 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* when_clause_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1924 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* when_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1930 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* case_default  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1936 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* func_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1942 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* distinct_or_all  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1948 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* column_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1954 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* relation_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1960 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* function_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1966 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* column_label  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1972 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* data_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1978 "sqlparser_bison.cpp" /* yacc.c:1257  */
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

#line 2095 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 184 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 2289 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 194 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &STMT_LIST_SERIALIZE_FORMAT;
}
#line 2298 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 202 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2304 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 208 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2312 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 212 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2320 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 219 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2329 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 224 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2338 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 233 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[0].node));
}
#line 2347 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 238 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[0].node));
}
#line 2357 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 244 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-1].node));
}
#line 2366 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 249 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-2].node));
}
#line 2376 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 255 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-3].node));
}
#line 2387 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 273 "sqlparser.y" /* yacc.c:1646  */
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
                    nullptr         /* E_SELECT_OPT_WITH 16 */
                    );
    (yyval.node)->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
#line 2414 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 296 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr              /* E_SELECT_OPT_WITH 16 */
                        );
    (yyval.node)->serialize_format = &SELECT_UNION_SERIALIZE_FORMAT;
}
#line 2442 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 320 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr              /* E_SELECT_OPT_WITH 16 */
                        );
    (yyval.node)->serialize_format = &SELECT_INTERSECT_SERIALIZE_FORMAT;
}
#line 2470 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 344 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr              /* E_SELECT_OPT_WITH 16 */
                        );
    (yyval.node)->serialize_format = &SELECT_EXCEPT_SERIALIZE_FORMAT;
}
#line 2498 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 371 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2506 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 375 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 2515 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 380 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 2524 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 385 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 2533 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 390 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 2542 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 398 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2551 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 407 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2560 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 415 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2568 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 419 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 2577 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 427 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2585 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 431 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 2594 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 439 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &LIMIT_1_SERIALIZE_FORMAT;
}
#line 2603 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 444 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &LIMIT_2_SERIALIZE_FORMAT;
}
#line 2612 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 449 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &LIMIT_3_SERIALIZE_FORMAT;
}
#line 2621 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 454 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &LIMIT_4_SERIALIZE_FORMAT;
}
#line 2630 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 459 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &LIMIT_5_SERIALIZE_FORMAT;
}
#line 2639 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 467 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2647 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 474 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2655 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 478 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2663 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 485 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2669 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 487 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 2678 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 494 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2684 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 495 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2690 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 500 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 2699 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 508 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2705 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 510 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 2714 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 518 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 2723 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 526 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 2731 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 530 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 2739 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 534 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 2747 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 541 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2753 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 543 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 2762 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 551 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 2771 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 560 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2780 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 568 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 2789 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 575 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2795 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 581 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2804 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 590 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2813 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 599 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2821 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 603 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 2829 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 607 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 2837 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 615 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SELECT_EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2846 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 623 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2855 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 628 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = &ALIAS_1_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2867 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 636 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2879 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 644 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2889 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 653 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2895 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 655 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FORM_LIST_SERIALIZE_FORMAT;
}
#line 2904 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 663 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2912 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 670 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2920 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 674 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;
}
#line 2929 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 679 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_1_SERIALIZE_FORMAT;
}
#line 2938 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 684 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;
}
#line 2947 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 689 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_1_SERIALIZE_FORMAT;
}
#line 2956 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 694 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
#line 2965 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 699 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
#line 2974 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 706 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2980 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 711 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2989 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 716 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 2998 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 721 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3008 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 727 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 3018 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 733 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 3027 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 738 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 3037 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 747 "sqlparser.y" /* yacc.c:1646  */
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
#line 3052 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 758 "sqlparser.y" /* yacc.c:1646  */
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
#line 3067 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 769 "sqlparser.y" /* yacc.c:1646  */
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
#line 3082 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 780 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 3090 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 784 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
}
#line 3098 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 790 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 3104 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 791 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3110 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 798 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 3119 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 805 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT_0;
}
#line 3128 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 810 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT;
}
#line 3137 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 815 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), nd);
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT;
}
#line 3147 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 834 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3157 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 843 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 3166 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 852 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 3175 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 857 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 3184 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 862 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 3193 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 867 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 3202 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 872 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 3211 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 877 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 3220 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 882 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 3229 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 887 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 3238 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 892 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 3247 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 900 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 3256 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 905 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 3265 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 910 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 3274 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 915 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 3283 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 920 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 3292 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 925 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 3301 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 930 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 3310 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 935 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 3319 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 940 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 3328 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 945 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 3337 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 950 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 3346 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 955 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3355 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 960 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3364 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 965 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3373 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 970 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3382 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 975 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3391 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 980 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3400 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 985 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 3409 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 990 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 3418 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 995 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 3427 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1000 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 3436 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1005 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 3445 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1013 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3454 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1020 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 3463 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1028 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3471 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1035 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_LIST_SERIALIZE_FORMAT;
}
#line 3480 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1042 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 3489 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1049 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 3498 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1054 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3506 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1060 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), star);
    (yyval.node)->serialize_format = &FUN_CALL_1_SERIALIZE_FORMAT;
}
#line 3516 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1066 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_2_SERIALIZE_FORMAT;
}
#line 3525 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1071 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_SERIALIZE_FORMAT;
}
#line 3534 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1076 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_3_SERIALIZE_FORMAT;
}
#line 3543 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1081 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_4_SERIALIZE_FORMAT;
}
#line 3552 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1088 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 3560 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1092 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 3568 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1111 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
#line 3574 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1113 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
#line 3580 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1115 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
#line 3586 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1117 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
#line 3592 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1119 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
#line 3598 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1121 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
#line 3604 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1123 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DOUBLE, "REAL"); }
#line 3610 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1125 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DATETIME, "DATETIME"); }
#line 3616 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 3620 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 1128 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
