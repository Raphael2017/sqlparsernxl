/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 41 "./sqlparser_tsql.y" /* yacc.c:1909  */

// %code requires block

#include "node.h"

#line 58 "sqlparser_tsql_bison.h" /* yacc.c:1909  */

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
#line 84 "./sqlparser_tsql.y" /* yacc.c:1909  */

    struct Node* node;
    int    ival;

#line 226 "sqlparser_tsql_bison.h" /* yacc.c:1909  */
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
