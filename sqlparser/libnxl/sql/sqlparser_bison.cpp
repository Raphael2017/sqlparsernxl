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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   639

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  184
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  183
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  312

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
     223,   231,   232,   233,   238,   244,   249,   255,   265,   291,
     292,   296,   321,   345,   369,   397,   400,   405,   410,   415,
     422,   423,   430,   431,   432,   441,   444,   452,   460,   465,
     470,   475,   480,   489,   495,   499,   507,   508,   514,   515,
     523,   524,   528,   536,   538,   546,   555,   558,   562,   570,
     571,   579,   587,   588,   596,   604,   605,   609,   617,   618,
     628,   631,   635,   642,   643,   651,   656,   664,   672,   681,
     683,   690,   691,   698,   702,   707,   712,   717,   722,   727,
     734,   739,   744,   749,   755,   761,   766,   775,   786,   797,
     808,   812,   819,   820,   825,   826,   833,   838,   843,   851,
     852,   853,   854,   855,   856,   860,   861,   862,   868,   869,
     870,   871,   879,   880,   885,   890,   895,   900,   905,   910,
     915,   920,   927,   928,   933,   938,   943,   948,   953,   958,
     963,   968,   973,   978,   983,   988,   993,   998,  1003,  1008,
    1013,  1018,  1023,  1028,  1033,  1040,  1041,  1048,  1055,  1057,
    1062,  1063,  1070,  1077,  1083,  1088,  1094,  1099,  1104,  1109,
    1116,  1120,  1127,  1130,  1133,  1136,  1139,  1141,  1143,  1145,
    1147,  1149,  1151,  1153
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
  "select_with_parens", "select_no_parens", "no_table_select",
  "select_clause", "simple_select", "opt_top", "top_count", "top_percent",
  "opt_where", "from_clause", "select_limit", "opt_hint", "limit_expr",
  "opt_select_limit", "opt_groupby", "opt_order_by", "order_by",
  "sort_list", "sort_key", "opt_asc_desc", "opt_having", "with_clause",
  "with_list", "common_table_expr", "opt_derived_column_list",
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

#define YYPACT_NINF -255

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-255)))

#define YYTABLE_NINF -175

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -27,   -27,  -255,    28,    82,   -45,   -89,  -255,   -75,  -255,
    -255,     7,   -31,   -11,    57,    62,   -34,    72,  -255,   -74,
    -255,  -255,   -27,   -34,   -34,   -34,    64,   -85,   -17,  -255,
    -255,     7,   -29,  -255,  -255,  -255,  -255,   -21,   132,   104,
    -255,    28,  -255,   -11,   -11,   -11,   429,    69,    69,  -255,
     -34,   -85,   -17,    34,   412,   -26,   117,   124,  -255,   165,
    -255,   165,  -255,   102,  -255,  -255,  -255,  -255,  -255,  -255,
     429,   463,   463,   116,   429,   124,  -255,  -255,    -4,  -255,
    -255,  -255,   335,   503,  -255,  -255,  -255,   144,   147,  -255,
    -255,  -107,    76,   -21,  -255,    65,  -255,   429,    12,    74,
    -255,   -51,    17,   534,   132,  -255,  -255,   484,  -255,  -255,
      92,   168,   246,   612,    38,  -255,   429,   463,   463,   463,
     463,   463,   463,   463,   429,   429,   139,   429,   429,   429,
     429,   429,   429,   429,   429,   463,   178,   227,  -255,  -255,
    -255,    29,   369,    69,    69,    69,   412,   564,    71,    56,
      20,    73,  -255,  -255,   412,  -255,   242,  -255,  -255,  -255,
     429,   429,   170,    38,  -255,   247,   247,   217,   217,   217,
     217,  -255,   547,   484,   429,   463,   178,   215,   215,   215,
     215,   215,   215,   291,   264,   318,   116,  -255,  -255,  -255,
    -255,  -255,   188,  -255,  -255,  -255,   218,  -255,  -255,  -255,
     220,   203,   429,  -255,  -255,  -255,   187,   128,  -255,   126,
    -255,     1,    25,  -255,    54,  -255,    26,  -255,  -255,   429,
     182,  -255,  -255,  -255,   279,   429,   205,  -255,   264,   446,
    -255,   463,   250,  -255,  -255,  -255,  -255,  -255,   208,   588,
    -255,     9,    79,   270,   305,  -255,  -255,   189,  -255,    20,
     189,   207,   189,    20,   214,   305,  -255,   612,   263,   228,
     429,   612,  -255,   463,   335,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,   284,  -255,  -255,    72,  -255,  -255,
     221,  -255,    35,  -255,  -255,    20,    72,   429,   429,  -255,
     612,   335,  -255,  -255,   429,   288,  -255,   226,  -255,  -255,
     612,   612,   322,   429,   292,   294,   293,   612,   322,  -255,
     298,  -255
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,    43,     0,     0,     0,     3,     5,    20,     7,
      11,    51,    19,     0,    20,     0,    70,    65,    61,    62,
       1,     2,     6,    70,    70,    70,     0,     0,    13,    43,
      20,    51,    19,    10,     9,    71,    72,    25,     0,     0,
      66,     0,     4,     0,     0,     0,     0,     0,     0,    14,
      70,     0,    16,     0,     0,    68,     0,     0,    63,    22,
      19,    24,    23,   172,   109,   110,   112,   111,   113,   114,
       0,     0,     0,     0,   159,     0,   120,    52,    53,   115,
     116,   122,   132,    56,   118,   119,   106,     0,     0,    44,
      45,    40,    41,    25,    17,    30,    32,     0,    26,     0,
      78,    46,    73,    75,     0,    67,    64,   143,   123,   124,
     120,     0,   104,   158,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,    58,
      55,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,    35,    47,    18,     0,   175,     0,    76,    69,   117,
       0,     0,   164,   160,    54,   125,   126,   127,   128,   129,
     131,   130,   142,   141,     0,     0,     0,   133,   134,   135,
     137,   136,   138,   154,   139,     0,     0,   155,   152,   146,
     144,   148,     0,   172,   108,   107,     0,   169,   170,   171,
       0,   104,     0,    38,    42,    39,     0,    31,    27,     0,
     173,     0,     0,    37,    79,    81,    83,    82,    90,     0,
      48,    74,    77,   105,     0,     0,     0,   161,   140,     0,
     153,     0,     0,   147,   145,   149,   165,   167,     0,     0,
      29,    20,     0,    82,     0,    87,   101,   103,   100,     0,
     103,     0,   103,     0,     0,     0,    85,    36,     0,    59,
       0,   163,   157,     0,   150,   156,   180,   181,   183,   179,
     178,   182,   177,   176,     0,   166,    91,    86,   102,    97,
       0,    98,     0,    99,    80,     0,    84,     0,     0,    21,
     162,   151,   168,    89,     0,     0,    94,     0,    88,    49,
      60,    93,     0,     0,     0,   172,     0,    92,     0,    96,
       0,    95
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,   314,  -255,  -255,     0,   134,  -255,   148,   159,
     248,  -255,  -255,  -255,  -255,   -24,   310,   -32,  -255,  -255,
     312,   313,   237,  -255,  -255,  -255,  -255,   315,  -255,  -255,
    -180,   254,   184,  -104,  -255,   101,  -194,    77,  -255,   149,
    -255,   -79,  -139,  -254,  -255,  -255,   -57,   -44,   185,  -255,
    -255,   219,  -255,  -255,  -255,  -255,   229,  -116,  -255,   222,
    -255
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    76,    15,    10,    11,    12,
      54,    98,    99,   220,   151,    49,    16,    91,   153,   259,
      27,    28,    77,    78,   140,   289,    13,    18,    19,    39,
      40,    56,    37,   101,   102,   213,   214,   215,   216,   217,
     254,   279,   111,    79,    80,    81,    82,   112,   188,    84,
     114,   162,   163,   226,    85,   202,    86,    87,    88,   157,
     274
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    14,    83,   200,   210,    -8,   -12,    35,   -15,     1,
     103,   143,   210,    30,   108,   109,    92,   242,    23,    24,
      25,   223,     8,   210,    47,     1,   107,    94,   210,   210,
     113,    17,   193,    48,   218,    21,   150,   211,   210,    95,
      36,    96,   206,    30,    30,    30,    33,   232,   306,   -12,
     221,   -15,   244,   147,   310,   280,   211,   106,    47,   194,
     165,   166,   167,   168,   169,   170,   171,    48,   244,   255,
      97,     1,    83,   110,    89,   115,   144,   152,   185,    90,
     172,   173,    20,   177,   178,   179,   180,   181,   182,   183,
     184,   297,   -50,    22,    33,   218,   245,   293,   201,    34,
     256,   -50,   103,   -20,   -20,   -20,   298,    -8,    38,    41,
     103,   203,   204,   205,    46,     2,   246,   224,   229,    63,
      64,    65,    66,    67,    68,   245,    69,    26,   277,    33,
     228,    29,    70,   218,     9,    55,   187,   218,  -174,   286,
    -173,   246,   247,     2,    71,    72,    53,    57,   299,     3,
     212,   -12,    73,   -15,   105,   248,     9,   104,   239,   249,
       1,    31,   250,   174,   175,   176,   218,   247,    74,   218,
     251,   281,    32,   283,   264,   257,   187,     3,    25,   116,
     248,   261,   141,   142,   249,   145,   110,   250,   148,   -33,
     252,    59,    61,    62,   233,   251,   234,   235,   149,    75,
     154,   -20,    60,    60,    60,   159,   291,    43,    44,    45,
     -20,   241,   -20,   161,   186,   252,   290,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   208,   209,   189,    93,   190,   191,   253,   133,   134,
     135,   136,   137,   192,   300,   155,   238,   219,   225,   212,
     301,   123,   -34,   212,   266,   236,   267,   237,     2,   307,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   150,   268,   258,   119,   120,   121,
     122,   123,   212,   246,   262,   212,   240,   265,   246,   135,
     136,   137,     3,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   276,   210,   247,
     269,   278,   282,   287,   247,   134,   135,   136,   137,   285,
     270,   292,   248,   288,   302,   305,   249,   248,   308,   250,
     309,   249,  -173,   231,   250,   311,    42,   251,   271,    50,
     294,   146,   251,    51,    52,   303,   117,   118,   119,   120,
     121,   122,   123,   164,   284,   272,    58,   252,   158,   296,
     243,   230,   252,   117,   118,   119,   120,   121,   122,   123,
     195,   273,    63,    64,    65,    66,    67,    68,   222,    69,
       0,     0,   227,     0,     0,    70,   160,     0,     0,     0,
       0,   295,     0,     0,     0,     0,   304,    71,    72,   196,
       0,     0,     0,     0,     0,    73,   197,     0,     0,     0,
     198,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    74,    69,     0,     0,     0,     0,     0,    70,   160,
       0,     0,    63,    64,    65,    66,    67,    68,   260,    69,
      71,    72,   100,   199,     0,    70,     0,     0,    73,     0,
       0,     0,    75,     0,     0,     0,     0,    71,    72,     0,
       0,   263,     0,     0,    74,    73,    63,    64,    65,    66,
      67,    68,     0,    69,   117,   118,   119,   120,   121,   122,
     123,    74,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,     0,     0,    75,     0,     0,     0,    73,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    75,     0,     0,    74,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,     0,     0,     0,     0,     0,   155,     0,     0,
       0,     0,     0,     0,     0,     0,    75,   138,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   139,     0,   156,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   207,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   275,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137
};

static const yytype_int16 yycheck[] =
{
       0,     1,    46,   142,     3,    80,    37,    41,    37,    36,
      54,   118,     3,    13,    71,    72,    48,   211,    11,    12,
      13,   160,    22,     3,   109,    36,    70,    51,     3,     3,
      74,     3,     3,   118,   150,    80,    87,    36,     3,     5,
      74,     7,   146,    43,    44,    45,    37,   186,   302,    80,
     154,    80,    43,    97,   308,   249,    36,    57,   109,    30,
     117,   118,   119,   120,   121,   122,   123,   118,    43,    43,
      36,    36,   116,    73,     5,    75,   183,   101,   135,    10,
     124,   125,     0,   127,   128,   129,   130,   131,   132,   133,
     134,   285,   109,   182,    37,   211,   212,   277,   142,    37,
     216,   118,   146,    11,    12,    13,   286,   182,    36,   183,
     154,   143,   144,   145,    50,   142,    62,   161,   175,     3,
       4,     5,     6,     7,     8,   241,    10,   120,   244,    37,
     174,   142,    16,   249,     0,     3,   136,   253,    36,   255,
      38,    62,    88,   142,    28,    29,   167,    43,   287,   176,
     150,   182,    36,   182,    37,   101,    22,   183,   202,   105,
      36,    13,   108,    24,    25,    26,   282,    88,    52,   285,
     116,   250,    13,   252,   231,   219,   176,   176,    13,   183,
     101,   225,    38,    36,   105,   109,   186,   108,   176,   124,
     136,    43,    44,    45,     6,   116,     8,     9,   124,    83,
     183,   109,    43,    44,    45,    37,   263,    23,    24,    25,
     118,   211,   120,   175,    36,   136,   260,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   160,   176,     6,    50,     8,     9,   183,    23,    24,
      25,    26,    27,    16,   288,     3,    43,   174,    78,   249,
     294,    34,   124,   253,    46,    37,    48,    37,   142,   303,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    87,    67,    94,    30,    31,    32,
      33,    34,   282,    62,    79,   285,   160,    37,    62,    25,
      26,    27,   176,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    37,     3,    88,
     102,   122,   105,    50,    88,    24,    25,    26,    27,   105,
     112,    37,   101,    95,    36,     3,   105,   101,    36,   108,
      37,   105,    38,    15,   108,    37,    22,   116,   130,    29,
     119,    93,   116,    31,    31,   119,    28,    29,    30,    31,
      32,    33,    34,   116,   253,   147,    41,   136,   104,   282,
     211,   176,   136,    28,    29,    30,    31,    32,    33,    34,
     141,   163,     3,     4,     5,     6,     7,     8,   156,    10,
      -1,    -1,   163,    -1,    -1,    16,   183,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,   170,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    52,    10,    -1,    -1,    -1,    -1,    -1,    16,   183,
      -1,    -1,     3,     4,     5,     6,     7,     8,   159,    10,
      28,    29,    30,    74,    -1,    16,    -1,    -1,    36,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    15,    -1,    -1,    52,    36,     3,     4,     5,     6,
       7,     8,    -1,    10,    28,    29,    30,    31,    32,    33,
      34,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    83,    -1,    -1,    -1,    36,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    83,    -1,    -1,    52,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    44,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    72,    -1,    43,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,   142,   176,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   210,   189,   190,   200,     3,   211,   212,
       0,    80,   182,    11,    12,    13,   120,   204,   205,   142,
     189,   192,   193,    37,    37,    41,    74,   216,    36,   213,
     214,   183,   186,   216,   216,   216,    50,   109,   118,   199,
     200,   204,   205,   167,   194,     3,   215,    43,   211,   192,
     193,   192,   192,     3,     4,     5,     6,     7,     8,    10,
      16,    28,    29,    36,    52,    83,   189,   206,   207,   227,
     228,   229,   230,   231,   233,   238,   240,   241,   242,     5,
      10,   201,   201,   216,   199,     5,     7,    36,   195,   196,
      30,   217,   218,   231,   183,    37,   189,   231,   230,   230,
     189,   226,   231,   231,   234,   189,   183,    28,    29,    30,
      31,    32,    33,    34,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    44,    72,
     208,    38,    36,   118,   183,   109,   194,   231,   176,   124,
      87,   198,   199,   202,   183,     3,    43,   243,   215,    37,
     183,   175,   235,   236,   206,   230,   230,   230,   230,   230,
     230,   230,   231,   231,    24,    25,    26,   231,   231,   231,
     231,   231,   231,   231,   231,   230,    36,   189,   232,     6,
       8,     9,    16,     3,    30,   240,    30,    37,    41,    74,
     226,   231,   239,   201,   201,   201,   217,    37,   160,   176,
       3,    36,   189,   219,   220,   221,   222,   223,   241,   174,
     197,   217,   243,   226,   231,    78,   237,   235,   231,   230,
     232,    15,   226,     6,     8,     9,    37,    37,    43,   231,
     160,   189,   220,   223,    43,   241,    62,    88,   101,   105,
     108,   116,   136,   183,   224,    43,   241,   231,    94,   203,
     159,   231,    79,    15,   230,    37,    46,    48,    67,   102,
     112,   130,   147,   163,   244,    37,    37,   241,   122,   225,
     220,   225,   105,   225,   219,   105,   241,    50,    95,   209,
     231,   230,    37,   214,   119,   170,   221,   220,   214,   226,
     231,   231,    36,   119,   170,     3,   227,   231,    36,    37,
     227,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   184,   185,   186,   186,   187,   187,   188,   188,   189,
     189,   190,   190,   190,   190,   190,   190,   190,   191,   192,
     192,   193,   193,   193,   193,   194,   194,   194,   194,   194,
     195,   195,   196,   196,   196,   197,   197,   198,   199,   199,
     199,   199,   199,   200,   201,   201,   202,   202,   203,   203,
     204,   204,   205,   206,   206,   207,   208,   208,   208,   209,
     209,   210,   211,   211,   212,   213,   213,   214,   215,   215,
     216,   216,   216,   217,   217,   218,   218,   218,   218,   219,
     219,   220,   220,   221,   221,   221,   221,   221,   221,   221,
     222,   223,   223,   223,   223,   223,   223,   224,   224,   224,
     224,   224,   225,   225,   226,   226,   227,   227,   227,   228,
     228,   228,   228,   228,   228,   229,   229,   229,   229,   229,
     229,   229,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   232,   232,   233,   234,   234,
     235,   235,   236,   237,   237,   238,   238,   238,   238,   238,
     239,   239,   240,   241,   242,   243,   244,   244,   244,   244,
     244,   244,   244,   244
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     3,
       3,     1,     1,     2,     3,     2,     3,     4,     6,     1,
       1,     9,     4,     4,     4,     0,     2,     4,     3,     5,
       1,     3,     1,     1,     3,     0,     2,     2,     4,     4,
       2,     2,     4,     0,     1,     1,     0,     1,     0,     3,
       1,     0,     3,     1,     3,     2,     0,     1,     1,     0,
       2,     2,     1,     3,     4,     0,     1,     3,     1,     3,
       0,     1,     1,     1,     3,     1,     2,     3,     1,     1,
       3,     1,     1,     1,     3,     2,     3,     2,     4,     4,
       1,     3,     6,     5,     4,     8,     7,     2,     2,     2,
       1,     1,     1,     0,     1,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     2,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     2,     3,     4,     3,     4,     3,     4,
       5,     6,     3,     4,     3,     1,     3,     5,     1,     0,
       1,     2,     4,     2,     0,     4,     5,     4,     6,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 1599 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1605 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1611 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1617 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1623 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1629 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1635 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1641 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* sql_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1647 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* stmt_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1653 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1659 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* select_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1665 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* select_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1671 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* select_no_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1677 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* no_table_select  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1683 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* select_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1689 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* simple_select  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1695 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_top  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1701 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* top_count  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1707 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* top_percent  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1713 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_where  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1719 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* from_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1725 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* select_limit  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1731 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1737 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* limit_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1743 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_select_limit  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1749 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_groupby  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1755 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_order_by  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1761 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* order_by  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1767 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* sort_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1773 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* sort_key  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1779 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_asc_desc  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1785 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_having  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1791 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* with_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1797 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* with_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1803 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* common_table_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1809 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_derived_column_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1815 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* simple_ident_list_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1821 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* simple_ident_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1827 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_distinct  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1833 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* select_expr_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1839 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* projection  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1845 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* from_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1851 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* table_factor  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1857 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* table_factor_non_join  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1863 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* relation_factor  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1869 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* joined_table  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1875 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* join_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1881 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* expr_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1887 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* column_ref  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1893 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* expr_const  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1899 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* simple_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1905 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* arith_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1911 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1917 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* in_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1923 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* case_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1929 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* case_arg  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1935 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* when_clause_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1941 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* when_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1947 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* case_default  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1953 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* func_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1959 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* distinct_or_all  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1965 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* column_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1971 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* relation_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1977 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* function_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1983 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* column_label  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1989 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* data_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1995 "sqlparser_bison.cpp" /* yacc.c:1257  */
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

#line 2112 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 2306 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 194 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &STMT_LIST_SERIALIZE_FORMAT;
}
#line 2315 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 202 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2321 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 208 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2329 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 212 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2337 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 219 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2346 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 224 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2355 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 234 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[0].node));
}
#line 2364 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 239 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[0].node));
}
#line 2374 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 245 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-1].node));
}
#line 2383 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 250 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-2].node));
}
#line 2393 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 256 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-3].node));
}
#line 2404 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 266 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
            (yyvsp[-3].node),             /* E_SELECT_DISTINCT 0 */
            (yyvsp[-1].node),             /* E_SELECT_SELECT_EXPR_LIST 1 */
            nullptr,        /* E_SELECT_FROM_LIST 2 */
            nullptr,        /* E_SELECT_OPT_WHERE 3 */
            nullptr,        /* E_SELECT_GROUP_BY 4 */
            nullptr,        /* E_SELECT_HAVING 5 */
            nullptr,        /* E_SELECT_SET_OPERATION 6 */
            nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
            nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
            nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
            nullptr,        /* E_SELECT_ORDER_BY 10 */
            (yyvsp[0].node),             /* E_SELECT_LIMIT 11 */
            nullptr,        /* E_SELECT_FOR_UPDATE 12 */
            (yyvsp[-4].node),             /* E_SELECT_HINTS 13 */
            nullptr,        /* E_SELECT_WHEN 14 */
            (yyvsp[-2].node),             /* E_SELECT_OPT_TOP 15 */
            nullptr         /* E_SELECT_OPT_WITH 16 */
            );
    (yyval.node)->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
#line 2431 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 299 "sqlparser.y" /* yacc.c:1646  */
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
#line 2458 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 322 "sqlparser.y" /* yacc.c:1646  */
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
#line 2486 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 346 "sqlparser.y" /* yacc.c:1646  */
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
#line 2514 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 370 "sqlparser.y" /* yacc.c:1646  */
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
#line 2542 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 397 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2550 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 401 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 2559 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 406 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 2568 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 411 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 2577 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 416 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 2586 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 424 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2595 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 433 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2604 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 441 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2612 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 445 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 2621 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 453 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 2630 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 461 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &LIMIT_1_SERIALIZE_FORMAT;
}
#line 2639 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 466 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &LIMIT_2_SERIALIZE_FORMAT;
}
#line 2648 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 471 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &LIMIT_3_SERIALIZE_FORMAT;
}
#line 2657 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 476 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &LIMIT_4_SERIALIZE_FORMAT;
}
#line 2666 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 481 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &LIMIT_5_SERIALIZE_FORMAT;
}
#line 2675 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 489 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2683 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 496 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2691 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 500 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2699 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 507 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2705 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 509 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2711 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 514 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2717 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 516 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 2726 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 523 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2732 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 524 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2738 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 529 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 2747 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 537 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2753 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 539 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 2762 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 547 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 2771 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 555 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 2779 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 559 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 2787 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 563 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 2795 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 570 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2801 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 572 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 2810 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 580 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 2819 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 589 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2828 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 597 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 2837 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 604 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2843 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 610 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2852 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 619 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2861 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 628 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2869 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 632 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 2877 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 636 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 2885 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 644 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SELECT_EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2894 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 652 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2903 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 657 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = &ALIAS_1_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2915 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 665 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2927 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 673 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2937 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 682 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2943 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 684 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FORM_LIST_SERIALIZE_FORMAT;
}
#line 2952 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 692 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2960 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 699 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2968 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 703 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;
}
#line 2977 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 708 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_1_SERIALIZE_FORMAT;
}
#line 2986 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 713 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;
}
#line 2995 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 718 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_1_SERIALIZE_FORMAT;
}
#line 3004 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 723 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
#line 3013 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 728 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
#line 3022 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 735 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3028 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 740 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3037 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 745 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3046 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 750 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3056 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 756 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 3066 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 762 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 3075 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 767 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 3085 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 776 "sqlparser.y" /* yacc.c:1646  */
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
#line 3100 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 787 "sqlparser.y" /* yacc.c:1646  */
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
#line 3115 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 798 "sqlparser.y" /* yacc.c:1646  */
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
#line 3130 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 809 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 3138 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 813 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
}
#line 3146 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 819 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 3152 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 820 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3158 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 827 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 3167 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 834 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT_0;
}
#line 3176 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 839 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT;
}
#line 3185 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 844 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), nd);
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT;
}
#line 3195 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 863 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3205 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 872 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 3214 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 881 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 3223 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 886 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 3232 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 891 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 3241 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 896 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 3250 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 901 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 3259 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 906 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 3268 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 911 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 3277 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 916 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 3286 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 921 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 3295 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 929 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 3304 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 934 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 3313 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 939 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 3322 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 944 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 3331 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 949 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 3340 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 954 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 3349 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 959 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 3358 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 964 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 3367 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 969 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 3376 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 974 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 3385 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 979 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 3394 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 984 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3403 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 989 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3412 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 994 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3421 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 999 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3430 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1004 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3439 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1009 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3448 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1014 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 3457 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1019 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 3466 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1024 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 3475 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1029 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 3484 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1034 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 3493 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1042 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3502 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1049 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 3511 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1057 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3519 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1064 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_LIST_SERIALIZE_FORMAT;
}
#line 3528 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1071 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 3537 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1078 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 3546 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1083 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3554 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1089 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), star);
    (yyval.node)->serialize_format = &FUN_CALL_1_SERIALIZE_FORMAT;
}
#line 3564 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1095 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_2_SERIALIZE_FORMAT;
}
#line 3573 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1100 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_SERIALIZE_FORMAT;
}
#line 3582 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1105 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_3_SERIALIZE_FORMAT;
}
#line 3591 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1110 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_4_SERIALIZE_FORMAT;
}
#line 3600 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1117 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 3608 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1121 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 3616 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1140 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
#line 3622 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1142 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
#line 3628 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1144 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
#line 3634 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1146 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
#line 3640 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1148 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
#line 3646 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1150 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
#line 3652 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1152 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DOUBLE, "REAL"); }
#line 3658 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1154 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DATETIME, "DATETIME"); }
#line 3664 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 3668 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 1157 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
