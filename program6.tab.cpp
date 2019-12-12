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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 9 "program6.ypp" /* yacc.c:339  */

#include <iostream>
#include "Error.hpp"
#include "Node.hpp"
#include "MyScanner.hpp"
#include "Symbol.hpp"
#include "SymbolTable.hpp"
#include "Type.hpp"
#include "TypeTable.hpp"

using std::cout;
using std::endl;
using std::cerr;

extern Node* tree;
extern MyScanner scanner;
extern SymbolTable* root;
extern SymbolTable* cur;
extern TypeTable* types;

Error* err=new Error();
TypeError* terr=new TypeError();
string mainClass = "";

#define yylex() scanner.yylex()
#define YYERROR_VERBOSE 1

void yyerror(const char *);

#line 96 "program6.tab.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "program6.tab.hpp".  */
#ifndef YY_YY_PROGRAM6_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM6_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    VOID = 258,
    CLASS = 259,
    RETURN = 260,
    WHILE = 261,
    PRINT = 262,
    SEMI = 263,
    ELSE = 264,
    IF = 265,
    ASSIGN = 266,
    READ = 267,
    NULLT = 268,
    DOT = 269,
    THIS = 270,
    INT = 271,
    NEW = 272,
    MAIN = 273,
    COMMA = 274,
    NUMBER = 275,
    ID = 276,
    RBRACK = 277,
    LPAREN = 278,
    RPAREN = 279,
    LBRACE = 280,
    EQ = 281,
    NE = 282,
    LE = 283,
    GE = 284,
    LT = 285,
    GT = 286,
    PLUS = 287,
    MINUS = 288,
    OR = 289,
    TIMES = 290,
    DIV = 291,
    MOD = 292,
    AND = 293,
    NOT = 294,
    UNARYOP = 295,
    LBRACK = 296,
    RBRACE = 297
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "program6.ypp" /* yacc.c:355  */

  Node *pnode;

#line 183 "program6.tab.cpp" /* yacc.c:355  */
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


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PROGRAM6_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "program6.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1407

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  246
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  462

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   117,   117,   123,   127,   131,   140,   149,   158,   196,
     205,   209,   215,   223,   231,   239,   247,   255,   263,   271,
     279,   287,   295,   305,   315,   325,   335,   345,   355,   365,
     375,   387,   399,   411,   423,   435,   449,   455,   461,   467,
     473,   477,   481,   487,   491,   495,   501,   507,   513,   519,
     523,   527,   533,   539,   545,   551,   557,   561,   567,   576,
     580,   586,   618,   624,   630,   662,   668,   677,   682,   687,
     693,   702,   709,   713,   719,   725,   734,   768,   813,   819,
     825,   834,   838,   844,   851,   857,   866,   924,   930,   938,
     944,   950,   958,  1002,  1008,  1014,  1066,  1072,  1078,  1084,
    1090,  1098,  1138,  1144,  1150,  1154,  1160,  1166,  1172,  1221,
    1273,  1277,  1281,  1287,  1296,  1318,  1341,  1345,  1351,  1357,
    1365,  1369,  1373,  1379,  1386,  1413,  1417,  1423,  1429,  1437,
    1441,  1445,  1451,  1458,  1462,  1468,  1475,  1507,  1513,  1519,
    1550,  1556,  1565,  1569,  1575,  1582,  1586,  1590,  1596,  1602,
    1608,  1612,  1618,  1624,  1628,  1634,  1640,  1644,  1648,  1654,
    1660,  1666,  1672,  1676,  1680,  1686,  1696,  1705,  1727,  1734,
    1741,  1810,  1814,  1818,  1825,  1829,  1835,  1841,  1849,  1853,
    1859,  1865,  1874,  1878,  1882,  1886,  1890,  1896,  1900,  1906,
    1912,  1916,  1920,  1926,  1930,  1936,  1940,  1946,  1950,  1956,
    1960,  1966,  1970,  1976,  1980,  1986,  1990,  1996,  2000,  2006,
    2010,  2016,  2020,  2026,  2030,  2036,  2040,  2046,  2050,  2056,
    2060,  2066,  2070,  2076,  2080,  2086,  2095,  2099,  2105,  2111,
    2117,  2121,  2127,  2133,  2137,  2141,  2147,  2154,  2158,  2165,
    2169,  2175,  2184,  2189,  2195,  2204,  2208
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "CLASS", "RETURN", "WHILE",
  "PRINT", "SEMI", "ELSE", "IF", "ASSIGN", "READ", "NULLT", "DOT", "THIS",
  "INT", "NEW", "MAIN", "COMMA", "NUMBER", "ID", "RBRACK", "LPAREN",
  "RPAREN", "LBRACE", "EQ", "NE", "LE", "GE", "LT", "GT", "PLUS", "MINUS",
  "OR", "TIMES", "DIV", "MOD", "AND", "NOT", "UNARYOP", "LBRACK", "RBRACE",
  "$accept", "input", "program", "classdec", "classstart", "classbody",
  "vardecs", "vardec", "type", "simpletype", "constructordecs",
  "constructordec", "constructorstart", "methoddecs", "methoddec",
  "methodstart", "parameterlist", "parameter", "stmtblock",
  "stmtblockstart", "block", "localvardecs", "localvardec", "stmts",
  "stmt", "name", "arglist", "conditionalstmt", "exp", "newexp",
  "bracketexps", "bracketexp", "multibrackets", "idbrack", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

#define YYPACT_NINF -198

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-198)))

#define YYTABLE_NINF -246

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     221,  -198,    37,    22,    27,  -198,   139,  -198,  -198,  -198,
    -198,   142,   128,  -198,    18,   543,    69,   156,  -198,   538,
    -198,    78,  -198,   170,  -198,   168,   173,  -198,   137,   385,
      52,  -198,   174,   244,   337,   668,   145,   243,   693,  -198,
     276,   282,   238,   324,   253,   329,   155,   718,  -198,  -198,
     120,   762,   394,   798,     9,   129,   137,  -198,   146,  -198,
     387,   510,  -198,  -198,   137,   339,  -198,  -198,  -198,   509,
     292,   499,  -198,   769,   448,     8,  -198,   454,   491,   310,
    -198,   513,   113,  -198,     2,   535,   306,   756,   319,   410,
    -198,   411,  -198,   151,  -198,  -198,   255,  -198,   368,   406,
    -198,   453,  -198,   200,  -198,   590,    15,   557,   618,   418,
     521,   429,   443,    71,  -198,   277,   164,  -198,   467,  -198,
     369,    34,   565,   112,   265,   576,   579,   490,   427,  -198,
    -198,   687,   484,  -198,   612,  -198,  -198,   376,   321,  -198,
     530,   582,  -198,   712,  -198,  -198,   737,    41,   587,    44,
     593,  -198,    46,  -198,   601,    47,  -198,   609,  -198,  -198,
     242,  -198,  -198,  -198,   377,  -198,     4,   802,  -198,  -198,
     476,  1356,  -198,   386,  -198,   765,  -198,   825,   848,   871,
     894,    61,  1072,  -198,   802,   917,   625,   940,   158,   471,
     318,  -198,   431,   498,    40,  -198,  -198,   520,   630,  -198,
    -198,   963,   626,   653,   986,  -198,   644,   575,  -198,  -198,
    -198,   322,   568,  -198,   634,   663,   681,  -198,   344,  -198,
     691,  -198,   637,  -198,  -198,   792,  -198,  -198,  -198,  -198,
    -198,  -198,   392,  -198,  -198,  -198,   400,  -198,   706,   713,
     631,  -198,   574,  -198,   763,   785,   596,  -198,  -198,   401,
    -198,  -198,  -198,   440,  -198,  -198,  -198,   462,  -198,  -198,
    -198,   485,  -198,  -198,  1356,  1088,  -198,   802,   802,   802,
     802,   802,   802,   802,   802,   802,   802,   802,   802,   802,
     639,   256,   249,    13,    64,  1223,  1003,  -198,  -198,  -198,
    -198,  -198,  -198,   678,  -198,   802,   802,   802,   802,   802,
     802,   802,   802,   802,   802,   802,   802,   802,  1238,  1253,
    1019,  1268,   786,  1369,  1283,  1298,  -198,  -198,  -198,    95,
    -198,   542,   117,  -198,   564,  -198,  -198,  -198,  1103,  1057,
    -198,  -198,  1313,   820,  1208,  1041,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,   795,
     795,   795,   795,   795,   795,   838,   838,   838,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,   703,   620,  -198,   703,   728,
     620,   339,   620,  -198,  -198,  -198,  1328,   828,   795,   795,
     795,   795,   795,   795,   838,   838,   838,  -198,  -198,  -198,
    -198,  1141,  1141,  1141,  1153,   667,   802,   615,  1174,  1186,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,   673,   623,  -198,
    -198,  -198,   831,   779,  -198,   155,   832,  1343,   835,   155,
     155,   155,  -198,  -198,   630,  -198,  -198,  -198,   630,  -198,
    -198,  1369,  -198,  -198,   630,   674,   114,   697,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  1141,  1141,  1207,  -198,  -198,
     630,  -198
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     2,     4,     0,     9,     8,     1,
       3,     0,     0,     6,     0,     0,    71,   245,    57,     0,
      60,     0,    67,     0,    73,     0,     0,    83,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,   246,     0,    71,    59,
       0,     0,     0,     0,     0,     0,     0,    55,     0,    72,
       0,     0,    75,    74,    82,   245,    53,    81,    84,     0,
       0,     0,    51,     0,     0,     0,    43,     0,     0,    54,
      49,     0,    82,    50,     0,     0,     0,     0,     0,     0,
     145,     0,   166,   167,   124,   132,     0,   165,     0,     0,
     135,     0,   144,     0,   156,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    76,     0,     0,   110,     0,   242,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      69,     0,    63,    61,     0,    70,    68,     0,     0,    45,
       0,     0,    65,     0,    66,    64,     0,     0,     0,     0,
       0,    46,     0,    42,     0,     0,    40,     0,    41,    47,
      82,    44,    35,    30,    82,    22,     0,     0,   167,   131,
       0,   164,   163,     0,   184,     0,   183,     0,     0,     0,
       0,   182,     0,   190,     0,     0,     0,     0,     0,     0,
       0,   123,     0,     0,   134,   129,   133,     0,   143,   130,
     142,     0,     0,     0,     0,   170,     0,     0,    32,    23,
      12,     0,     0,   108,     0,     0,   102,   101,     0,   109,
       0,    78,     0,   114,    80,     0,    77,   115,   244,   243,
      33,    24,    82,    13,    63,    14,    82,    11,     0,     0,
       0,    92,     0,    94,     0,     0,     0,    34,    25,    82,
      16,    28,    17,    82,    36,    29,    19,    82,    37,    21,
      38,    82,    10,   128,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   191,   194,
     193,   196,   195,     0,   162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,     0,   137,   138,   136,     0,
     122,     0,   134,   120,     0,   121,   127,   125,     0,     0,
     169,   168,     0,     0,     0,     0,   140,   141,   139,   100,
      96,    97,    98,    99,    95,   112,   113,   111,    88,    87,
      91,    90,    89,    86,   105,   106,   107,   104,   147,   198,
     200,   202,   204,   206,   208,   210,   212,   214,   216,   218,
     220,   222,   188,   189,   187,     0,   235,   237,     0,     0,
     236,     0,   234,   224,   225,   223,     0,     0,   197,   199,
     201,   203,   205,   207,   209,   211,   213,   215,   217,   219,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   117,   118,   116,   148,   149,   146,     0,     0,   240,
     241,   239,     0,     0,   238,   231,     0,     0,     0,   233,
     232,   230,   186,   185,     0,   158,   159,   160,   161,   157,
     154,   172,   155,   153,   177,   175,   176,   174,   151,   152,
     150,   227,   228,   229,   226,     0,     0,     0,   179,   180,
     181,   178
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,  -198,   727,  -198,  -198,   732,   461,    -7,   571,
     648,   -10,  -198,   259,     0,  -198,   109,   642,  -198,  -198,
     734,   676,   -92,   -78,  -100,   -37,  -197,  -198,   -69,  -198,
     140,  -101,   374,   251
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    13,    19,    20,    58,    22,
      23,    24,    25,    26,    27,    28,   116,   117,    97,    98,
      39,    99,   100,   101,   102,   181,   312,   104,   313,   183,
     376,   377,    46,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   200,   205,   162,    21,    21,   333,   196,   170,   152,
     132,    15,    50,    59,   378,   167,   208,   133,   182,    35,
     193,   197,     9,    59,    16,    21,    67,    37,    59,    65,
      96,     2,   134,    37,    67,   230,   379,   115,     7,    36,
      37,    59,   247,    37,   163,   251,   263,   255,   259,   103,
     153,   167,   -58,    71,   204,    15,   -58,   209,     8,    37,
      67,   103,   103,    59,   103,   381,    37,    59,    16,    37,
     200,    37,    37,    17,    67,   202,   231,    37,    67,    53,
     205,    67,   326,   248,   293,    67,   252,    43,   256,   260,
     220,    96,    96,   200,    72,   221,   387,   200,   265,    54,
     196,   115,   204,   115,   115,   204,   167,    67,   286,   288,
     290,   292,   321,   -52,   324,   308,   310,   -52,   315,    55,
     129,   123,    67,   456,   115,   167,    67,   115,   167,    30,
     135,    15,   329,   103,   130,   335,   115,   410,    37,   115,
      11,   124,    -7,    14,    16,    15,    -7,   137,    67,    17,
      67,   136,  -245,   103,    67,   103,   103,    67,    16,   412,
     103,    55,    37,    17,    12,   224,   316,   138,    44,    62,
      31,    56,  -245,    15,    64,    75,    15,    15,   422,    44,
     130,   426,   428,   225,    18,    96,    16,    55,   226,    16,
      16,    17,    45,    37,    65,    17,   120,    45,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   201,    57,   115,   202,    66,    76,   212,   115,   215,
     218,   200,     1,   203,   200,     2,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   110,
     239,   204,   -48,   242,    86,    79,   -48,    15,    87,    88,
      89,    90,   244,    91,   113,   246,   188,   373,    92,    48,
      16,   111,    29,    29,    93,    17,   234,    37,    94,    48,
      52,    34,   375,   133,    65,   424,   189,   114,   222,   424,
     374,   424,    60,    29,   103,    95,    80,   103,   105,    74,
     204,    78,    81,   144,    85,   118,    55,   107,   223,   108,
     145,   435,   436,   437,   439,   109,   122,   166,   445,   447,
     126,    87,    88,    89,    90,   146,    91,   167,    55,   319,
     184,    92,   243,    87,    88,    89,    90,   168,    91,   167,
     148,    94,   150,    92,   154,    37,   157,   441,    82,   168,
      15,   220,   185,    94,   134,   343,   339,   112,   169,   105,
     105,   119,   159,    16,   335,   458,   459,   461,    65,   118,
     320,   118,   118,   225,   103,   103,   103,   103,   344,   190,
     228,   103,   103,    87,    88,    89,    90,   -31,    91,    83,
      45,   -31,   118,    92,    48,   118,    69,   280,    64,    93,
      15,   229,   -26,    94,   118,   127,   -26,   118,   130,   131,
     -15,   -27,    37,    16,   -15,   -27,    70,   194,    65,   281,
     191,    87,    88,    89,    90,   128,    91,    37,   103,   103,
     103,    92,    48,   380,   382,    37,    37,    93,   144,   139,
     216,    94,   322,   186,   187,   145,    87,    88,    89,    90,
     -18,    91,   213,   105,   -18,    48,    92,    48,   195,    64,
      65,    15,    93,   217,   198,   155,    94,    15,    87,    88,
      89,    90,   -20,    91,    16,    37,   -20,   219,    92,    65,
      16,   118,   317,   323,   168,    17,   118,   198,    94,   318,
      49,    87,    88,    89,    90,   -39,    91,    37,   227,   -39,
     151,    92,    64,    49,    15,   199,   156,   168,   142,   198,
     147,    94,    15,    87,    88,    89,    90,    16,    91,   -94,
      37,   140,    65,    92,   160,    16,    15,   142,   266,   168,
      65,   198,   214,    94,    37,    87,    88,    89,    90,    16,
      91,   141,   143,   158,    65,    92,   164,    48,    15,    47,
     325,   168,    65,   198,    40,    94,  -103,    87,    88,    89,
      90,    16,    91,   143,    48,   161,    65,    92,    64,    17,
      15,    41,   327,   168,    42,   198,   232,    94,    15,    87,
      88,    89,    90,    16,    91,   352,   337,   165,    65,    92,
     236,    16,    15,   338,   411,   168,    65,   225,   249,    94,
      15,   206,   340,   225,   253,    16,    15,   356,   353,   210,
      65,    37,   257,    16,    15,   146,   413,   233,    65,    16,
     261,   207,    15,   240,    65,   225,   442,    16,   235,   211,
     357,   237,    65,   443,   449,    16,   311,   330,    48,   250,
      65,   450,   350,    65,    48,   254,   241,   173,   174,    65,
      92,   167,   175,   258,  -173,   176,   168,   331,   177,  -173,
     220,   262,   336,   220,   332,   351,   -93,   178,   179,   130,
      33,   423,    38,   372,   180,   173,   174,    51,    92,    84,
     175,    15,  -173,   176,   168,   440,   177,  -173,    73,   386,
      77,   448,   225,   455,    16,   178,   179,   341,   238,    65,
     173,   174,   180,    92,   106,   175,    15,  -173,   176,   168,
     220,   177,  -173,    48,   264,   342,   457,    48,    65,    16,
     178,   179,    65,   214,    17,   173,   174,   180,    92,   121,
     175,    15,  -173,   176,   168,   220,   177,  -173,    48,   427,
     348,    10,   225,    65,    16,   178,   179,   349,   245,    65,
     173,   174,   180,    92,    32,   175,   284,  -173,   176,   168,
     425,   177,  -173,    48,   429,   430,   431,   171,    65,    63,
     178,   179,    68,   125,   172,    15,   282,   180,   173,   174,
     149,    92,    15,   175,   192,     0,   176,   168,    16,   177,
     334,    48,   225,    17,     0,    16,   283,   354,   178,   179,
      17,   173,   174,   346,    92,   180,   175,     0,     0,   176,
     168,   119,   177,   264,   220,   406,   129,     0,    48,   355,
     407,   178,   179,    65,   173,   174,     0,    92,   180,   175,
     130,   131,   176,   168,     0,   177,   285,   301,   302,   303,
     304,   305,   306,   307,   178,   179,     0,   173,   174,   406,
      92,   180,   175,     0,   418,   176,   168,   406,   177,   287,
     406,   406,   433,     0,   406,   451,   452,   178,   179,   454,
     173,   174,   345,    92,   180,   175,     0,   347,   176,   168,
       0,   177,   289,   304,   305,   306,   307,     0,     0,     0,
     178,   179,     0,   173,   174,     0,    92,   180,   175,     0,
       0,   176,   168,     0,   177,   291,     0,     0,     0,     0,
       0,     0,     0,   178,   179,     0,   173,   174,     0,    92,
     180,   175,     0,     0,   176,   168,     0,   177,   309,     0,
       0,     0,     0,     0,     0,     0,   178,   179,     0,   173,
     174,     0,    92,   180,   175,     0,     0,   176,   168,     0,
     177,   314,     0,     0,     0,     0,     0,     0,     0,   178,
     179,     0,   173,   174,     0,    92,   180,   175,     0,     0,
     176,   168,     0,   177,   328,     0,     0,     0,     0,     0,
       0,     0,   178,   179,     0,   173,   174,     0,    92,   180,
     175,     0,     0,   176,   168,     0,   177,   334,     0,     0,
       0,     0,     0,     0,     0,   178,   179,     0,   173,   174,
       0,    92,   180,   175,   384,     0,   176,   168,     0,   177,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   179,
     403,     0,     0,     0,     0,   180,     0,   385,     0,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   420,   404,     0,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   415,     0,
       0,     0,     0,   421,     0,   416,     0,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     294,     0,     0,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   358,     0,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   414,     0,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,     0,     0,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   434,     0,     0,     0,    87,    88,    89,    90,
       0,    91,     0,     0,   438,     0,    92,     0,    87,    88,
      89,    90,   168,    91,     0,     0,    94,     0,    92,     0,
       0,     0,     0,     0,   168,   444,     0,     0,    94,    87,
      88,    89,    90,     0,    91,     0,     0,   446,     0,    92,
       0,    87,    88,    89,    90,   168,    91,     0,     0,    94,
       0,    92,     0,     0,     0,     0,     0,   168,   460,     0,
       0,    94,    87,    88,    89,    90,     0,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,   168,     0,
     419,     0,    94,     0,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   383,     0,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   401,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   402,     0,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   405,     0,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   408,     0,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   409,     0,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   417,     0,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   432,     0,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   453,     0,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307
};

static const yytype_int16 yycheck[] =
{
      37,   101,   103,     1,    11,    12,   203,    99,    86,     1,
       1,     3,    19,    23,     1,    11,     1,     8,    87,     1,
      98,    99,     0,    33,    16,    32,    26,    25,    38,    21,
      37,     4,    23,    25,    34,     1,    23,    44,     1,    21,
      25,    51,     1,    25,    42,     1,    42,     1,     1,    86,
      42,    11,     0,     1,    41,     3,     4,    42,    21,    25,
      60,    98,    99,    73,   101,     1,    25,    77,    16,    25,
     170,    25,    25,    21,    74,    14,    42,    25,    78,     1,
     181,    81,    42,    42,    23,    85,    42,    18,    42,    42,
      19,    98,    99,   193,    42,    24,   293,   197,   167,    21,
     192,   108,    41,   110,   111,    41,    11,   107,   177,   178,
     179,   180,   190,     0,   192,   184,   185,     4,   187,    41,
       8,     1,   122,     9,   131,    11,   126,   134,    11,     1,
       1,     3,   201,   170,    22,   204,   143,    42,    25,   146,
       1,    21,     0,     1,    16,     3,     4,     1,   148,    21,
     150,    22,     1,   190,   154,   192,   193,   157,    16,    42,
     197,    41,    25,    21,    25,     1,     8,    21,    23,     1,
      42,     1,    21,     3,     1,     1,     3,     3,   375,    23,
      22,   378,   379,    19,    42,   192,    16,    41,    24,    16,
      16,    21,    41,    25,    21,    21,    41,    41,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,    11,    42,   220,    14,    42,    42,   108,   225,   110,
     111,   321,     1,    23,   324,     4,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,     1,
     131,    41,     0,   134,     1,     1,     4,     3,     5,     6,
       7,     8,   143,    10,     1,   146,     1,     1,    15,    16,
      16,    23,    11,    12,    21,    21,     1,    25,    25,    16,
      19,    12,    23,     8,    21,   376,    21,    24,     1,   380,
      24,   382,    23,    32,   321,    42,    42,   324,    37,    30,
      41,    32,    33,     1,    35,    44,    41,    38,    21,    23,
       8,   401,   402,   403,   404,    23,    47,     1,   408,   409,
      51,     5,     6,     7,     8,    23,    10,    11,    41,     1,
       1,    15,     1,     5,     6,     7,     8,    21,    10,    11,
      71,    25,    73,    15,    75,    25,    77,   406,     1,    21,
       3,    19,    23,    25,    23,     1,    24,    23,    42,    98,
      99,    22,    42,    16,   423,   455,   456,   457,    21,   108,
      42,   110,   111,    19,   401,   402,   403,   404,    24,     1,
       1,   408,   409,     5,     6,     7,     8,     0,    10,    42,
      41,     4,   131,    15,    16,   134,     1,     1,     1,    21,
       3,    22,     0,    25,   143,     1,     4,   146,    22,    23,
       0,     0,    25,    16,     4,     4,    21,     1,    21,    23,
      42,     5,     6,     7,     8,    21,    10,    25,   455,   456,
     457,    15,    16,   283,   284,    25,    25,    21,     1,    42,
       1,    25,     1,    23,    23,     8,     5,     6,     7,     8,
       0,    10,    24,   192,     4,    16,    15,    16,    42,     1,
      21,     3,    21,    24,     1,     1,    25,     3,     5,     6,
       7,     8,     0,    10,    16,    25,     4,    24,    15,    21,
      16,   220,     1,    42,    21,    21,   225,     1,    25,     8,
      19,     5,     6,     7,     8,     0,    10,    25,    21,     4,
      42,    15,     1,    32,     3,    42,    42,    21,     8,     1,
       1,    25,     3,     5,     6,     7,     8,    16,    10,    25,
      25,     1,    21,    15,     1,    16,     3,     8,    42,    21,
      21,     1,     1,    25,    25,     5,     6,     7,     8,    16,
      10,    21,    23,    42,    21,    15,     1,    16,     3,     1,
      42,    21,    21,     1,     1,    25,    25,     5,     6,     7,
       8,    16,    10,    23,    16,    42,    21,    15,     1,    21,
       3,    18,    42,    21,    21,     1,     1,    25,     3,     5,
       6,     7,     8,    16,    10,     1,     1,    42,    21,    15,
       1,    16,     3,     8,    42,    21,    21,    19,     1,    25,
       3,     1,    24,    19,     1,    16,     3,     1,    24,    42,
      21,    25,     1,    16,     3,    23,    42,    42,    21,    16,
       1,    21,     3,     1,    21,    19,     1,    16,    42,     1,
      24,    42,    21,     8,     1,    16,     1,     1,    16,    42,
      21,     8,     1,    21,    16,    42,    24,    12,    13,    21,
      15,    11,    17,    42,    19,    20,    21,    21,    23,    24,
      19,    42,     8,    19,     1,    24,    25,    32,    33,    22,
      12,    41,    14,    24,    39,    12,    13,    19,    15,     1,
      17,     3,    19,    20,    21,     8,    23,    24,    30,     1,
      32,     8,    19,     9,    16,    32,    33,    24,     1,    21,
      12,    13,    39,    15,     1,    17,     3,    19,    20,    21,
      19,    23,    24,    16,     1,    24,     9,    16,    21,    16,
      32,    33,    21,     1,    21,    12,    13,    39,    15,     1,
      17,     3,    19,    20,    21,    19,    23,    24,    16,     1,
      24,     4,    19,    21,    16,    32,    33,    24,     1,    21,
      12,    13,    39,    15,    12,    17,   175,    19,    20,    21,
     376,    23,    24,    16,   380,   381,   382,     1,    21,    25,
      32,    33,    28,     1,     8,     3,     1,    39,    12,    13,
       1,    15,     3,    17,    98,    -1,    20,    21,    16,    23,
       1,    16,    19,    21,    -1,    16,    21,    24,    32,    33,
      21,    12,    13,     1,    15,    39,    17,    -1,    -1,    20,
      21,    22,    23,     1,    19,    19,     8,    -1,    16,    24,
      24,    32,    33,    21,    12,    13,    -1,    15,    39,    17,
      22,    23,    20,    21,    -1,    23,     1,    32,    33,    34,
      35,    36,    37,    38,    32,    33,    -1,    12,    13,    19,
      15,    39,    17,    -1,    24,    20,    21,    19,    23,     1,
      19,    19,    24,    -1,    19,    24,    24,    32,    33,    24,
      12,    13,   220,    15,    39,    17,    -1,   225,    20,    21,
      -1,    23,     1,    35,    36,    37,    38,    -1,    -1,    -1,
      32,    33,    -1,    12,    13,    -1,    15,    39,    17,    -1,
      -1,    20,    21,    -1,    23,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    -1,    12,    13,    -1,    15,
      39,    17,    -1,    -1,    20,    21,    -1,    23,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    12,
      13,    -1,    15,    39,    17,    -1,    -1,    20,    21,    -1,
      23,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    -1,    12,    13,    -1,    15,    39,    17,    -1,    -1,
      20,    21,    -1,    23,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    -1,    12,    13,    -1,    15,    39,
      17,    -1,    -1,    20,    21,    -1,    23,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    12,    13,
      -1,    15,    39,    17,     1,    -1,    20,    21,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
       1,    -1,    -1,    -1,    -1,    39,    -1,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,     1,    24,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,     1,    -1,
      -1,    -1,    -1,    22,    -1,     8,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
       8,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     8,    -1,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,     8,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,     1,    -1,    -1,    -1,     5,     6,     7,     8,
      -1,    10,    -1,    -1,     1,    -1,    15,    -1,     5,     6,
       7,     8,    21,    10,    -1,    -1,    25,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    21,     1,    -1,    -1,    25,     5,
       6,     7,     8,    -1,    10,    -1,    -1,     1,    -1,    15,
      -1,     5,     6,     7,     8,    21,    10,    -1,    -1,    25,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    21,     1,    -1,
      -1,    25,     5,     6,     7,     8,    -1,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      22,    -1,    25,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    24,    -1,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    44,    45,    46,    47,     1,    21,     0,
      46,     1,    25,    48,     1,     3,    16,    21,    42,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    76,
       1,    42,    49,    53,    56,     1,    21,    25,    53,    63,
       1,    18,    21,    18,    23,    41,    75,     1,    16,    50,
      51,    53,    76,     1,    21,    41,     1,    42,    51,    54,
      56,    76,     1,    63,     1,    21,    42,    57,    63,     1,
      21,     1,    42,    53,    56,     1,    42,    53,    56,     1,
      42,    56,     1,    42,     1,    56,     1,     5,     6,     7,
       8,    10,    15,    21,    25,    42,    51,    61,    62,    64,
      65,    66,    67,    68,    70,    76,     1,    56,    23,    23,
       1,    23,    23,     1,    24,    51,    59,    60,    76,    22,
      41,     1,    56,     1,    21,     1,    56,     1,    21,     8,
      22,    23,     1,     8,    23,     1,    22,     1,    21,    42,
       1,    21,     8,    23,     1,     8,    23,     1,    56,     1,
      56,    42,     1,    42,    56,     1,    42,    56,    42,    42,
       1,    42,     1,    42,     1,    42,     1,    11,    21,    42,
      66,     1,     8,    12,    13,    17,    20,    23,    32,    33,
      39,    68,    71,    72,     1,    23,    23,    23,     1,    21,
       1,    42,    64,    66,     1,    42,    65,    66,     1,    42,
      67,    11,    14,    23,    41,    74,     1,    21,     1,    42,
      42,     1,    59,    24,     1,    59,     1,    24,    59,    24,
      19,    24,     1,    21,     1,    19,    24,    21,     1,    22,
       1,    42,     1,    42,     1,    42,     1,    42,     1,    59,
       1,    24,    59,     1,    59,     1,    59,     1,    42,     1,
      42,     1,    42,     1,    42,     1,    42,     1,    42,     1,
      42,     1,    42,    42,     1,    71,    42,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
       1,    23,     1,    21,    52,     1,    71,     1,    71,     1,
      71,     1,    71,    23,     8,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    71,     1,
      71,     1,    69,    71,     1,    71,     8,     1,     8,     1,
      42,    66,     1,    42,    66,    42,    42,    42,     1,    71,
       1,    21,     1,    69,     1,    71,     8,     1,     8,    24,
      24,    24,    24,     1,    24,    60,     1,    60,    24,    24,
       1,    24,     1,    24,    24,    24,     1,    24,     8,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    24,     1,    24,    23,    73,    74,     1,    23,
      73,     1,    73,    24,     1,    24,     1,    69,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    24,    24,     1,    24,    24,    19,    24,    24,    24,
      42,    42,    42,    42,     8,     1,     8,    24,    24,    22,
       1,    22,    69,    41,    74,    75,    69,     1,    69,    75,
      75,    75,    24,    24,     1,    67,    67,    67,     1,    67,
       8,    71,     1,     8,     1,    67,     1,    67,     8,     1,
       8,    24,    24,    24,    24,     9,     9,     9,    67,    67,
       1,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    46,    46,    47,    47,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    49,
      49,    50,    50,    50,    50,    50,    50,    51,    51,    51,
      51,    52,    53,    53,    54,    54,    55,    55,    55,    55,
      55,    56,    56,    56,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      68,    69,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    74,
      74,    74,    75,    75,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       4,     4,     4,     3,     4,     4,     4,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     1,     2,     1,     2,     2,     3,     4,     4,     3,
       4,     2,     2,     1,     2,     2,     5,     5,     5,     5,
       5,     5,     4,     4,     3,     5,     5,     5,     5,     5,
       5,     4,     4,     3,     5,     5,     5,     5,     4,     4,
       1,     3,     3,     3,     2,     2,     4,     4,     4,     4,
       3,     3,     3,     2,     1,     4,     4,     4,     4,     3,
       3,     3,     2,     2,     2,     1,     3,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     4,     4,     4,     4,
       5,     5,     5,     5,     5,     5,     1,     5,     5,     5,
       5,     5,     3,     2,     2,     1,     1,     1,     3,     3,
       2,     1,     3,     0,     5,     5,     5,     5,     7,     7,
       7,     7,     1,     1,     1,     4,     4,     3,     3,     3,
       1,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     5,     5,     5,
       4,     4,     4,     4,     3,     3,     3,     1,     2,     3,
       3,     3,     2,     3,     3,     1,     2
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
      yyerror (YY_("syntax error: cannot back up")); \
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
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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
#line 117 "program6.ypp" /* yacc.c:1646  */
    {
  tree=new Node((yyvsp[0].pnode));
}
#line 1890 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 123 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ProgramNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Program> <ClassDec>");
}
#line 1899 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 127 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ProgramNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ClassDec>");
}
#line 1908 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 131 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ProgramNode();
  (yyval.pnode)->setVal("<Error>");
}
#line 1919 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 140 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassDecNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ClassStart> <ClassBody>");
  if (cur->getDeleteOnResolve())
  {
    delete cur;
  }
  cur=root;
}
#line 1933 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 149 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassDecNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<ClassStart> <Error>");
}
#line 1944 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 158 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassStartNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("class identifier");

  // Create a symbol table for the class
  ClassTable* newSymTab=new ClassTable();
  newSymTab->setClassName((yyvsp[0].pnode)->getString());
  // Create the type for the class
  Type* newType=new Type();
  newType->withSymbolTable(newSymTab);

  // Get the type ptr
  int loc=types->addType(newType);

  // Create a symbol for the class
  Symbol* sym=new ClassSymbol();
  sym->withName((yyvsp[0].pnode)->getString())->
    withLineNumber((yylsp[0]).first_line)->
    withColNumber((yylsp[0]).first_column)->
    withTypePtr(loc);

  // Track the class symbol of the table
  newSymTab->setClassSymbol(sym);

  // Put it in the root table
  int res=root->insert(sym);
  if (res==-3)
  {
    terr->
      withColNumber((yylsp[0]).first_column)->
      withLineNumber((yylsp[0]).first_line)->
      withDesc("error: class '" + (yyvsp[0].pnode)->getString() + "' has already been defined.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  // Then make the current symbol table the class' new symbol table
  cur=root->addChild(newSymTab); 
}
#line 1987 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 196 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassStartNode();
  (yyval.pnode)->setVal("class <Error>");
}
#line 1998 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 205 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2007 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 209 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2018 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 215 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <Error> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2031 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 223 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <Error> <MethodDecs> rbrace");
}
#line 2044 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 231 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <ConstructorDecs> <Error> rbrace");
}
#line 2057 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 239 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <ConstructorDecs> <MethodDecs> <Error>");
}
#line 2070 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 247 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <Error> <MethodDecs> rbrace");
}
#line 2083 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 255 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <ConstructorDecs> <Error> rbrace");
}
#line 2096 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 263 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <ConstructorDecs> <MethodDecs> <Error>");
}
#line 2109 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 271 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <Error> <Error> rbrace");
}
#line 2122 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 279 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <Error> <MethodDecs> <Error>");
}
#line 2135 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 287 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> <Error> <Error>");
}
#line 2148 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 295 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <Error> <Error> <MethodDecs> rbrace");
}
#line 2163 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 305 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Error> <Error> <ConstructorDecs> <Error> rbrace");
}
#line 2178 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 315 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <Error> <Error> rbrace");
}
#line 2193 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 325 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("lbrace <Error> <Error> <Error> rbrace");
}
#line 2208 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 335 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <Error> <MethodDecs> <Error>");
}
#line 2223 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 345 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <Error> <MethodDecs> <Error>");
}
#line 2238 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 355 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <ConstructorDecs> <Error> <Error>");
}
#line 2253 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 365 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <Error> <Error> <Error>");
}
#line 2268 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 375 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("<Error> <Error> <Error> <Error> rbrace");
}
#line 2285 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 387 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <Error> <Error> <MethodDecs> <Error>");
}
#line 2302 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 399 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Error> <Error> <ConstructorDecs> <Error> <Error>");
}
#line 2319 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 411 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <Error> <Error> <Error>");
}
#line 2336 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 423 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("lbrace <Error> <Error> <Error> <Error>");
}
#line 2353 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 435 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("<Error> <Error> <Error> <Error> <Error>");
}
#line 2372 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 449 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2383 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 455 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <Error> <MethodDecs> rbrace");
}
#line 2394 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 461 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> <Error> rbrace");
}
#line 2405 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 467 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> <MethodDecs> <Error>");
}
#line 2416 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 473 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> rbrace");
}
#line 2425 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 477 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <MethodDecs> rbrace");
}
#line 2434 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 481 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <Error> rbrace");
}
#line 2445 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 487 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> rbrace");
}
#line 2454 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 491 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2463 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 495 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2474 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 501 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <MethodDecs> rbrace");
}
#line 2485 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 507 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> <Error> rbrace");
}
#line 2496 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 513 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> <MethodDecs> <Error>");
}
#line 2507 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 519 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> rbrace");
}
#line 2516 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 523 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <MethodDecs> rbrace");
}
#line 2525 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 527 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("lbrace <Error> rbrace");
}
#line 2536 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 533 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <MethodDecs> <Error>");
}
#line 2547 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 539 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <MethodDecs> rbrace");
}
#line 2558 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 545 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> <Error>");
}
#line 2569 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 551 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <ConstructorDecs> rbrace");
}
#line 2580 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 557 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("lbrace rbrace");
}
#line 2589 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 561 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("<Error> rbrace");
}
#line 2600 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 567 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("lbrace <Error>");
}
#line 2611 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 576 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<VarDecs> <VarDec>");
}
#line 2620 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 580 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<VarDec>");
}
#line 2629 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 586 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier semi");

  // Figure out the type
  string t = ((TypeNode*)(yyvsp[-2].pnode))->getTypeString();  // Type string
  int d    = ((TypeNode*)(yyvsp[-2].pnode))->getDimension();   // Dimension
  int loc  = types->addType(t,d);  // Add to type table

  // Create a symbol for the id
  Symbol* sym=new Symbol();
  sym->
    withName((yyvsp[-1].pnode)->getString())->
    withLineNumber((yylsp[-1]).first_line)->
    withColNumber((yylsp[-1]).first_column)->
    withTypePtr(loc);

  // Initialize it with zero if zero dimension int, else null
  if (d==0 && t=="int") sym->setValue(0);
  else sym->setValue("null");

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-3)
  {
    // TODO Error here about id matching class name
  }
  else if (res==-4)
  {
    // TODO Error here about var redefinition
  }
}
#line 2666 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 618 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> <Error> semi");
}
#line 2677 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 624 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier <Error>");
}
#line 2688 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 630 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier semi");

  // Figure out the type
  string t = ((IdBrackNode*)(yyvsp[-2].pnode))->getId();          // Type string
  int d    = ((IdBrackNode*)(yyvsp[-2].pnode))->getDimension();   // Dimension
  int loc  = types->addType(t,d);              // Add to type table

  // Create a symbol for the id
  Symbol* sym=new Symbol();
  sym->
    withName((yyvsp[-1].pnode)->getString())->
    withLineNumber((yylsp[-1]).first_line)->
    withColNumber((yylsp[-1]).first_column)->
    withTypePtr(loc);

  // Initialize it with null
  sym->setValue("null");

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-3)
  {
    // TODO Error here about masking class type
    
  }
  else if (res==-4)
  {
    // TODO Error here about var redefinition
  }
}
#line 2725 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 662 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<IdBrack> <Error> semi");
}
#line 2736 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 668 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier <Error>");
}
#line 2747 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 677 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new TypeNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<SimpleType>");
  ((TypeNode*)(yyval.pnode))->withTypeString("int");
}
#line 2757 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 682 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new TypeNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> lbrack rbrack");
  ((TypeNode*)(yyval.pnode))->withTypeString(((TypeNode*)(yyvsp[-2].pnode))->getTypeString());
}
#line 2767 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 687 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new TypeNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> <Error> rbrack");
}
#line 2778 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 693 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new TypeNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> lbrack <Error>");
}
#line 2789 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 702 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new SimpleTypeNode();
  (yyval.pnode)->setVal("int");
}
#line 2798 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 709 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConstructorDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConstructorDecs> <ConstructorDec>");
}
#line 2807 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 713 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConstructorDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConstructorDec>");
}
#line 2816 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 719 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConstructorDecNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConstructorStart> <Block>");

  cur = cur->getParent();
}
#line 2827 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 725 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConstructorDecNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<ConstructorStart> <Error>");
}
#line 2838 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 734 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new CtorStartNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("identifier lparen rparen");

  // Make a symbol table for this method
  MethodTable* newSymTab = new MethodTable();
  newSymTab->setMethodName((yyvsp[-1].pnode)->getString());

  // Create the type for this thing, it has no args!
  MethodType* t=new MethodType();
  t->withBaseTypeString("")->
    withDimension(0)->
    withSymbolTable(newSymTab);

  int typePtr=types->addType(t);

  // Create a symbol for the ctor
  CtorSymbol* sym=new CtorSymbol();
  sym->
    withName((yyvsp[-2].pnode)->getString())->
    withLineNumber((yylsp[-2]).first_line)->
    withColNumber((yylsp[-2]).first_column)->
    withTypePtr(typePtr);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-2)
  {
    // TODO error here about redeclaration of ctor method
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 2877 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 768 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new CtorStartNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("identifier lparen <ParameterList> rparen"); 

  // Make a symbol table for it
  MethodTable* newSymTab = new MethodTable();
  newSymTab->setMethodName((yyvsp[-2].pnode)->getString());

  // Get the parameter symbols
  vector<Symbol*> symList;
  ((ParameterListNode*)(yyvsp[-1].pnode))->buildArgSymbolList(&symList);

  // Get parameter strings, adding each symbol to it's new table
  vector<string> argStrings;
  for (auto& s : symList)
  {
    newSymTab->insert(s);
    argStrings.push_back(s->getFullTypeString());
  }

  // Make a type for the thing
  MethodType* t=new MethodType();
  ((MethodType*)(t->withBaseTypeString("void")))->
    withArgTypeList(argStrings)->
    withSymbolTable(newSymTab);

  int loc=types->addType(t);

  // Create a symbol for the ctor
  CtorSymbol* sym=new CtorSymbol();
  sym->withName((yyvsp[-3].pnode)->getString())->
    withLineNumber((yylsp[-3]).first_line)->
    withColNumber((yylsp[-3]).first_column)->
    withTypePtr(loc);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-2)
  {
    // TODO error here about redeclaration of ctor method
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 2927 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 813 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new CtorStartNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("identifier lparen <Error> rparen"); 
}
#line 2938 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 819 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new CtorStartNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("identifier lparen <Error>"); 
}
#line 2949 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 825 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new CtorStartNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("identifier lparen <ParameterList> <Error>"); 
}
#line 2960 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 834 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<MethodDecs> <MethodDec>");
}
#line 2969 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 838 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodDecsNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<MethodDecs> <Error>");
}
#line 2980 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 844 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<MethodDec>");
}
#line 2989 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 851 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<MethodStart> <Block>");

  cur = cur->getParent();
}
#line 3000 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 857 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodDecNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> <Block>");
}
#line 3011 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 866 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <ParameterList> rparen");

  // Make a symbol table for it
  MethodTable* newSymTab = new MethodTable();
  newSymTab->setMethodName((yyvsp[-3].pnode)->getString());

  // Get the parameter symbols
  vector<Symbol*> symList;
  ((ParameterListNode*)(yyvsp[-1].pnode))->buildArgSymbolList(&symList);

  // Get parameter strings, adding each symbol to it's new table
  vector<string> argStrings;
  for (auto& s : symList)
  {
    newSymTab->insert(s);
    argStrings.push_back(s->getFullTypeString());
  }

  // Figure out the type
  string ts = ((TypeNode*)(yyvsp[-4].pnode))->getTypeString();  // Type string
  int d    = ((TypeNode*)(yyvsp[-4].pnode))->getDimension();   // Dimension

  // Make a type for the thing
  MethodType* t=new MethodType();
  ((MethodType*)(t->withBaseTypeString(ts))->
   withDimension(d))->
    withArgTypeList(argStrings)->
    withSymbolTable(newSymTab);

  int loc=types->addType(t);

  // Create a symbol for the method
  MethodSymbol* sym=new MethodSymbol();
  sym->withName((yyvsp[-3].pnode)->getString())->
    withLineNumber((yylsp[-3]).first_line)->
    withColNumber((yylsp[-3]).first_column)->
    withTypePtr(loc);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-1)
  {
    // TODO error about only differing from other method by return type
  }
  else if (res==-2)
  {
    // TODO error about same signature as other method
  }
  else if (res==-3)
  {
    // TODO error about sharing ID with class type
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3074 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 924 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> <Error> lparen <ParameterList> rparen");
}
#line 3085 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 930 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode));
  (yyval.pnode)->setVal("<Type> <Error> lparen <ParameterList> rparen");
}
#line 3098 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 938 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <ParameterList> error");
}
#line 3109 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 944 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <Error> rparen");
}
#line 3120 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 950 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <Error> <Error>");
}
#line 3133 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 958 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen rparen");

  // Make a symbol table for it
  MethodTable* newSymTab = new MethodTable();
  newSymTab->setMethodName((yyvsp[-2].pnode)->getString());

  // Figure out the type
  string ts = ((TypeNode*)(yyvsp[-3].pnode))->getTypeString();  // Type string
  int d    = ((TypeNode*)(yyvsp[-3].pnode))->getDimension();   // Dimension

  // Make a type for the thing
  MethodType* t=new MethodType();
  ((MethodType*)(t->withBaseTypeString(ts))->withDimension(d))->
    withSymbolTable(newSymTab);

  int loc=types->addType(t);

  // Create a symbol for the method
  MethodSymbol* sym=new MethodSymbol();
  sym->withName((yyvsp[-2].pnode)->getString())->
    withLineNumber((yylsp[-2]).first_line)->
    withColNumber((yylsp[-2]).first_column)->
    withTypePtr(loc);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-1)
  {
    // TODO error about only differing from other method by return type
  }
  else if (res==-2)
  {
    // TODO error about same signature as other method
  }
  else if (res==-3)
  {
    // TODO error about sharing ID with class type
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3182 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1002 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <Error>");
}
#line 3193 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1008 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier <Error>");
}
#line 3204 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1014 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("void identifier lparen <ParameterList> rparen");

  // Make a symbol table for it
  MethodTable* newSymTab = new MethodTable();
  newSymTab->setMethodName((yyvsp[-3].pnode)->getString());

  // Get the parameter symbols
  vector<Symbol*> symList;
  ((ParameterListNode*)(yyvsp[-1].pnode))->buildArgSymbolList(&symList);

  // Get parameter strings, adding each symbol to it's new table
  vector<string> argStrings;
  for (auto& s : symList)
  {
    newSymTab->insert(s);
    argStrings.push_back(s->getFullTypeString());
  }

  MethodType* t=new MethodType();
  ((MethodType*)(t->withBaseTypeString("void")))->
    withArgTypeList(argStrings)->
    withSymbolTable(newSymTab);

  int loc=types->addType(t);

  // Create a symbol for the method
  MethodSymbol* sym=new MethodSymbol();
  sym->withName((yyvsp[-3].pnode)->getString())->
    withLineNumber((yylsp[-3]).first_line)->
    withColNumber((yylsp[-3]).first_column)->
    withTypePtr(loc);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-1)
  {
    // TODO error about only differing from other method by return type
  }
  else if (res==-2)
  {
    // TODO error about same signature as other method
  }
  else if (res==-3)
  {
    // TODO error about sharing ID with class type
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3261 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1066 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("void <Error> lparen <ParameterList> rparen");
}
#line 3272 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1072 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("void identifier <Error> <ParameterList> rparen");
}
#line 3283 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1078 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("void identifier lparen <Error> rparen");
}
#line 3294 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1084 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("void identifier lparen <ParameterList> <Error>");
}
#line 3305 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1090 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode();
  (yyval.pnode)->setVal("void <Error> lparen <Error> rparen");
}
#line 3318 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1098 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodStartNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("void identifier lparen rparen");

  // Make a symbol table for it
  MethodTable* newSymTab = new MethodTable();
  newSymTab->setMethodName((yyvsp[-2].pnode)->getString());

  // Make a type for the thing
  MethodType* t=new MethodType();
  t->withBaseTypeString("void")->
    withSymbolTable(newSymTab);

  int loc=types->addType(t);

  // Create a symbol for the method
  MethodSymbol* sym=new MethodSymbol();
  sym->withName((yyvsp[-2].pnode)->getString())->
    withLineNumber((yylsp[-2]).first_line)->
    withColNumber((yylsp[-2]).first_column)->
    withTypePtr(loc);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-1)
  {
    // TODO error about only differing from other method by return type
  }
  else if (res==-2)
  {
    // TODO error about same signature as other method
  }
  else if (res==-3)
  {
    // TODO error about sharing ID with class type
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3363 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1138 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("void identifier lparen <Error>");
}
#line 3374 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1144 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("void identifier <Error>");
}
#line 3385 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1150 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier lparen <ParameterList> rparen");
}
#line 3394 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1154 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> <Error> lparen <ParameterList> rparen");
}
#line 3405 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1160 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier lparen <Error> rparen");
}
#line 3416 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1166 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier lparen <ParameterList> <Error>");
}
#line 3427 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1172 "program6.ypp" /* yacc.c:1646  */
    {
  if (mainClass != "") {
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: 'main' method already implemented in class '"+mainClass+"'.");
    scanner.addTypeError(*terr);
  }
  else
  {
    mainClass=cur->getEncapsulatingClassName();
  }
  (yyval.pnode)=new MethodStartNode();

  // Make a symbol table for it
  SymbolTable* newSymTab = new MethodTable();

  // Make a type for the thing
  MethodType* t=new MethodType();
  t->withBaseTypeString("void")->
    withSymbolTable(newSymTab);

  int loc=types->addType(t);

  // Create a symbol for the method
  MethodSymbol* sym=new MethodSymbol();
  sym->withName("main")->
    withLineNumber((yylsp[-2]).first_line)->
    withColNumber((yylsp[-2]).first_column)->
    withTypePtr(loc);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-1)
  {
    // TODO error about only differing from other method by return type
  }
  else if (res==-2)
  {
    // TODO error about same signature as other method
  }
  else if (res==-3)
  {
    // TODO error about sharing ID with class type
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3481 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1221 "program6.ypp" /* yacc.c:1646  */
    {
  if (mainClass != "") {
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: 'main' method already implemented in class '"+mainClass+"'.");
    scanner.addTypeError(*terr);
  }
  else
  {
    mainClass=cur->getEncapsulatingClassName();
  }
  (yyval.pnode)=new MethodStartNode();

  // Make a symbol table for it
  SymbolTable* newSymTab = new MethodTable();

  // Make a type for the thing
  MethodType* t=new MethodType();
  ((MethodType*)(t->withBaseTypeString("int"))->withDimension(0))->
    withSymbolTable(newSymTab);

  int loc=types->addType(t);

  // Create a symbol for the method
  MethodSymbol* sym=new MethodSymbol();
  sym->withName("main")->
    withLineNumber((yylsp[-2]).first_line)->
    withColNumber((yylsp[-2]).first_column)->
    withTypePtr(loc);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-1)
  {
    // TODO error about only differing from other method by return type
  }
  else if (res==-2)
  {
    // TODO error about same signature as other method
  }
  else if (res==-3)
  {
    // TODO error about sharing ID with class type
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3535 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1273 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterListNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Parameter>");
}
#line 3544 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1277 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterListNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ParameterList> comma <Exp>");
}
#line 3553 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1281 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ParameterListNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> comma <Exp>");
}
#line 3564 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1287 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ParameterListNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<ParameterList> comma <Error>");
}
#line 3575 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1296 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Type> identifier");

  // Figure out the type
  string t = ((TypeNode*)(yyvsp[-1].pnode))->getTypeString();  // Type string
  int d    = ((TypeNode*)(yyvsp[-1].pnode))->getDimension();   // Dimension
  int loc  = types->addType(t,d);  // Add to type table

  // Create a symbol for the id
  Symbol* sym=new Symbol();
  sym->
    withName((yyvsp[0].pnode)->getString())->
    withLineNumber((yylsp[0]).first_line)->
    withColNumber((yylsp[0]).first_column)->
    withTypePtr(loc);

  if (d==0 && t=="int") sym->setValue(0);
  else sym->setValue("null");

  ((ParameterNode*)(yyval.pnode))->setSymbol(sym);
}
#line 3602 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1318 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier");
  // Figure out the type
  string t = ((IdBrackNode*)(yyvsp[-1].pnode))->getId();          // Type string
  int d    = ((IdBrackNode*)(yyvsp[-1].pnode))->getDimension();   // Dimension
  int loc  = types->addType(t,d);              // Add to type table

  // Create a symbol for the id
  Symbol* sym=new Symbol();
  sym->
    withName((yyvsp[0].pnode)->getString())->
    withLineNumber((yylsp[0]).first_line)->
    withColNumber((yylsp[0]).first_column)->
    withTypePtr(loc);

  sym->setValue("null");

  ((ParameterNode*)(yyval.pnode))->setSymbol(sym);
}
#line 3627 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1341 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtBlockNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <LocalVarDecs> <Stmts> rbrace");
}
#line 3636 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1345 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtBlockNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <Error> <Stmts> rbrace");
}
#line 3647 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1351 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtBlockNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <LocalVarDecs> <Error> rbrace");
}
#line 3658 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1357 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtBlockNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <Error> <Error> rbrace");
}
#line 3671 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1365 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtBlockNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <LocalVarDecs> rbrace");
}
#line 3680 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1369 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtBlockNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <Stmts> rbrace");
}
#line 3689 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1373 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtBlockNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <Error> rbrace");
}
#line 3700 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1379 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtBlockNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> rbrace");
}
#line 3709 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1386 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtBlockStartNode();
  (yyval.pnode)->setVal("lbrace");

  // Make a sym tab
  SymbolTable* newSymTab=new BlockTable();

  // Make a type for the thing
  Type* t=new Type();
  t->withSymbolTable(newSymTab);

  int loc=types->addType(t);

  // Create a symbol for the block
  BlockSymbol* sym=new BlockSymbol();
  sym->withTypePtr(loc);

  // Put it in the current table don't need to check for insertion
  // because what the heck its a block c'mon
  cur->insert(sym);

  // Then make the current symbol table the block's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3738 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1413 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <LocalVarDecs> <Stmts> rbrace");
}
#line 3747 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1417 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BlockNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <Stmts> rbrace");
}
#line 3758 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1423 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BlockNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <LocalVarDecs> <Error> rbrace");
}
#line 3769 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1429 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BlockNode();
  (yyval.pnode)->setVal("lbrace <Error> <Error> rbrace");
}
#line 3782 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1437 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <LocalVarDecs> rbrace");
}
#line 3791 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1441 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Stmts> rbrace");
}
#line 3800 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1445 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BlockNode();
  (yyval.pnode)->setVal("lbrace <Error> rbrace");
}
#line 3811 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1451 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode();
  (yyval.pnode)->setVal("lbrace rbrace");
}
#line 3820 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1458 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<LocalVarDecs> <LocalVarDec>");
}
#line 3829 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1462 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<LocalVarDecs> <Error>");
}
#line 3840 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1468 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<LocalVarDec>");
}
#line 3849 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1475 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new LocalVarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier semi");

  // Figure out the type
  string t = ((TypeNode*)(yyvsp[-2].pnode))->getTypeString();  // Type string
  int d    = ((TypeNode*)(yyvsp[-2].pnode))->getDimension();   // Dimension
  int loc  = types->addType(t,d);  // Add to type table

  // Create a symbol for the id
  Symbol* sym=new Symbol();
  sym->
    withName((yyvsp[-1].pnode)->getString())->
    withLineNumber((yylsp[-1]).first_line)->
    withColNumber((yylsp[-1]).first_column)->
    withTypePtr(loc);

  // Initialize it
  if (d==0 && t=="int") sym->setValue(0);
  else sym->setValue("null");

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-3)
  {
    // TODO Error here about id matching class name
  }
  else if (res==-4)
  {
    // TODO Error here about var redefinition
  }
}
#line 3886 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1507 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> <Error> semi");
}
#line 3897 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1513 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier <Error>");
}
#line 3908 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1519 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new LocalVarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier semi");

  // Figure out the type
  string t = ((IdBrackNode*)(yyvsp[-2].pnode))->getId();          // Type string
  int d    = ((IdBrackNode*)(yyvsp[-2].pnode))->getDimension();   // Dimension
  int loc  = types->addType(t,d);              // Add to type table

  // Create a symbol for the id
  Symbol* sym=new Symbol();
  sym->
    withName((yyvsp[-1].pnode)->getString())->
    withLineNumber((yylsp[-1]).first_line)->
    withColNumber((yylsp[-1]).first_column)->
    withTypePtr(loc);

  // Initialize it
  sym->setValue("null");

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-3)
  {
    // TODO Error here about masking class type
  }
  else if (res==-4)
  {
    // TODO Error here about var redefinition
  }
}
#line 3944 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1550 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<IdBrack> <Error> semi");
}
#line 3955 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1556 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier <Error>");
}
#line 3966 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1565 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Stmts> <Stmt>");
}
#line 3975 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1569 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtsNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Stmts> <Error>");
}
#line 3986 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1575 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Stmt>");
}
#line 3995 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1582 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode();
  (yyval.pnode)->setVal("semi");
}
#line 4004 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1586 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Name> assign <Exp> semi");
}
#line 4013 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1590 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> assign <Exp> semi");
}
#line 4024 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1596 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<Name> assign <Error> semi");
}
#line 4035 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1602 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Name> assign <Exp> <Error>");
}
#line 4046 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1608 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Name> lparen <ArgList> rparen semi");
}
#line 4055 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1612 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode));
  (yyval.pnode)->setVal("<Name> lparen <Error> rparen semi");
}
#line 4066 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1618 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Name> lparen <ArgList> rparen <Error>");
}
#line 4077 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1624 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("print lparen <ArgList> rparen semi");
}
#line 4086 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1628 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode));
  (yyval.pnode)->setVal("print lparen <Error> rparen semi");
}
#line 4097 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1634 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("print lparen <ArgList> rparen <Error>");
}
#line 4108 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1640 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConditionalStmt>");
}
#line 4117 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1644 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("while lparen <Exp> rparen <Stmt>");
}
#line 4126 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1648 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("while <Error> <Exp> rparen <Stmt>");
}
#line 4137 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1654 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("while lparen <Error> rparen <Stmt>");
}
#line 4148 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1660 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("while lparen <Exp> <Error> <Stmt>");
}
#line 4159 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1666 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("while lparen <Exp> rparen <Error>");
}
#line 4170 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1672 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("return <Exp> semi");
}
#line 4179 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1676 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode();
  (yyval.pnode)->setVal("return semi");
}
#line 4188 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1680 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode();
  (yyval.pnode)->setVal("return <Error>");
}
#line 4199 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1686 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<StmtBlock>");

  // Reset sym tab
  cur = cur->getParent();
}
#line 4211 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1696 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode();
  (yyval.pnode)->setVal("this");
  Symbol* thisSym = cur->getEncapsulatingClassSymbol();
  if (thisSym)
  {
    (yyval.pnode)->setType(thisSym->getType());
  }
}
#line 4225 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1705 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("identifier");
  vector<Symbol*> symbolsWithName = cur->lookup((yyvsp[0].pnode)->getString());
  if (symbolsWithName.size()==0)
  {
    terr->
      withColNumber((yylsp[0]).first_column)->
      withLineNumber((yylsp[0]).first_line)->
      withDesc("error: identifier '"+(yyvsp[0].pnode)->getString()+"' does not exist in current scope.");
    scanner.addTypeError(*terr);
  } else if (symbolsWithName.size()==1) {
    (yyval.pnode)->setType(symbolsWithName.at(0)->getType());
  } else {
    vector<Type*> pts;
    for (int i=0; i<symbolsWithName.size(); i++)
    {
      pts.push_back(symbolsWithName.at(i)->getType());
    }
    (yyval.pnode)->setPotentialTypes(pts);
  }
}
#line 4252 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1727 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Name> dot identifier");
  // TODO Make sure the name has a reference type, then
  // look up the ID in its associated symbol table, type is
  // the t
}
#line 4264 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1734 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NameNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Name> dot <Error>");
  yyerrok;
}
#line 4276 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1741 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Name> <BracketExp>");
  Type* nameType=(yyvsp[-1].pnode)->getType();
  if (nameType)
  {
    // TODO check if name type is a ref type with dim >= 1
    if (nameType->getDimension()<1)
    {
      terr->
        withColNumber((yylsp[-1]).first_column)->
        withLineNumber((yylsp[-1]).first_line)->
        withDesc("error: invalid indexing operation on zero-dimension type.");
      scanner.addTypeError(*terr);
    }
    else
    {
      Type* newType = new Type();
      newType->withBaseTypeString(nameType->getBaseTypeString())->
        withDimension(nameType->getDimension()-1)->
        withSymbolTable(nameType->getSymbolTable());
      // check if derived class here    
      if (nameType->getTypeType()=="method_type")
      {
        vector<string> args=((MethodType*)nameType)->getArgTypeList();
        ((MethodType*) newType)->withArgTypeList(args);
      }
      (yyval.pnode)->setType(newType);
    }
  }
  else
  {
    vector<Type*> potNameTypes = (yyvsp[-1].pnode)->getPotentialTypes();
    // TODO Look for ref type with dim >= 1 in pot types,
    // if exists, make that the name's type, otherwise
    // error
    bool typed=false;
    for (auto& t : potNameTypes)
    {
      if (t->getDimension()>0)
      {
        Type* newType = new Type();
        newType->withBaseTypeString(nameType->getBaseTypeString())->
          withDimension(nameType->getDimension()-1)->
          withSymbolTable(nameType->getSymbolTable());
        // check if derived class here    
        if (nameType->getTypeType()=="method_type")
        {
          vector<string> args=((MethodType*)nameType)->getArgTypeList();
          ((MethodType*) newType)->withArgTypeList(args);
        }
        (yyval.pnode)->setType(newType);
        typed=true;
      }
    }
    if (!typed)
    {
      terr->
        withColNumber((yylsp[-1]).first_column)->
        withLineNumber((yylsp[-1]).first_line)->
        withDesc("error: identifier '"+(yyvsp[-1].pnode)->getString()+"' does not exist at current scope.");
      scanner.addTypeError(*terr);
    }
  }
}
#line 4346 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1810 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ArgListNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp>");
}
#line 4355 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1814 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ArgListNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ArgList> comma <Exp>");
}
#line 4364 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1818 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ArgListNode();
  (yyval.pnode)->setVal("empty"); /* HOW TO SHOW THIS??? */
}
#line 4373 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1825 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Stmt>");
}
#line 4382 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1829 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Error> rparen <Stmt>");
}
#line 4393 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1835 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Error>");
}
#line 4404 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1841 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode();
  (yyval.pnode)->setVal("if lparen <Error> rparen <Error>");
}
#line 4417 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1849 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Stmt> else <Stmt>");
}
#line 4426 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1853 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Error> rparen <Stmt> else <Stmt>");
}
#line 4437 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1859 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-4].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Error> else <Stmt>");
}
#line 4448 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1865 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Stmt> else <Error>");
}
#line 4459 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1874 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Name>");
}
#line 4468 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1878 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("number");
}
#line 4477 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1882 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("null");
}
#line 4486 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1886 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Name> lparen <ArgList> rparen");
}
#line 4495 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1890 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<Name> lparen <Error> rparen");
}
#line 4506 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1896 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("read lparen rparen");
}
#line 4515 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1900 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("read <Error> rparen");
}
#line 4526 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1906 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("read lparen <Error>");
}
#line 4537 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1912 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<NewExp>");
}
#line 4546 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1916 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("plus <Exp>");
}
#line 4555 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1920 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("plus <Error>");
}
#line 4566 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1926 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("minus <Exp>");
}
#line 4575 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1930 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("minus <Error>");
}
#line 4586 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1936 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("not <Exp>");
}
#line 4595 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1940 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("not <Error>");
}
#line 4606 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1946 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> eq <Exp>");
}
#line 4615 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1950 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> eq <Exp>");
}
#line 4626 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1956 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> ne <Exp>");
}
#line 4635 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1960 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> ne <Exp>");
}
#line 4646 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1966 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> le <Exp>");
}
#line 4655 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1970 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> le <Exp>");
}
#line 4666 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1976 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> ge <Exp>");
}
#line 4675 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1980 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> ge <Exp>");
}
#line 4686 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1986 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> lt <Exp>");
}
#line 4695 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1990 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> lt <Exp>");
}
#line 4706 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1996 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> gt <Exp>");
}
#line 4715 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 2000 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> gt <Exp>");
}
#line 4726 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 2006 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> plus <Exp>");
}
#line 4735 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 2010 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> plus <Exp>");
}
#line 4746 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 2016 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> minus <Exp>");
}
#line 4755 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 2020 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> minus <Exp>");
}
#line 4766 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 2026 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> or <Exp>");
}
#line 4775 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 2030 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> or <Exp>");
}
#line 4786 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 2036 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> times <Exp>");
}
#line 4795 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 2040 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> times <Exp>");
}
#line 4806 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 2046 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> div <Exp>");
}
#line 4815 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 2050 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> div <Exp>");
}
#line 4826 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 2056 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> mod <Exp>");
}
#line 4835 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 2060 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> mod <Exp>");
}
#line 4846 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 2066 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> and <Exp>");
}
#line 4855 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 2070 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> and <Exp>");
}
#line 4866 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 2076 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lparen <Exp> rparen");
}
#line 4875 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 2080 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("lparen <Error> rparen");
}
#line 4886 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 2086 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("lparen <Exp> <Error>");
}
#line 4897 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 2095 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("new identifier lparen <ArgList> rparen");
}
#line 4906 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 2099 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("new <Error> lparen <ArgList> rparen");
}
#line 4917 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 2105 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("new identifier <Error> <ArgList> rparen");
}
#line 4928 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 2111 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("new identifier lparen <Error> rparen");
}
#line 4939 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 2117 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new <SimpleType> <BracketExps> <MultiBrackets>");
}
#line 4948 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 2121 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new <Error> <BracketExps> <MultiBrackets>");
}
#line 4959 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 2127 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new <SimpleType> <Error> <MultiBrackets>");
}
#line 4970 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 2133 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new identifier <BracketExps> <MultiBrackets>");
}
#line 4979 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 2137 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new <SimpleType> <BracketExps>");
}
#line 4988 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 2141 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("new <Error> <BracketExps>");
}
#line 4999 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 2147 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new identifier <BracketExps>");
}
#line 5008 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 2154 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<BracketExp>");
}
#line 5017 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 2158 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<BracketExps> <BracketExp>");
}
#line 5026 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 2165 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrack <Exp> rbrack");
}
#line 5035 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 2169 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BracketExpNode();
  (yyval.pnode)->setVal("lbrack <Error> rbrack");
}
#line 5046 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 2175 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BracketExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrack <Exp> <Error>");
}
#line 5057 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 2184 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MultibracketNode();
  (yyval.pnode)->setVal("lbrack rbrack");
  ((MultibracketNode*)(yyval.pnode))->setDimension(1);
}
#line 5067 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 2189 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MultibracketNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Multibrackets> lbrack rbrack");
  ((MultibracketNode*)(yyval.pnode))->
    setDimension(((MultibracketNode*)(yyvsp[-2].pnode))->getDimension()+1);
}
#line 5078 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 2195 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MultibracketNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Multibrackets> lbrack <Error>");
}
#line 5089 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 2204 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new IdBrackNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("identifier");
}
#line 5098 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 2208 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new IdBrackNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("identifier <MultiBrackets>");
}
#line 5107 "program6.tab.cpp" /* yacc.c:1646  */
    break;


#line 5111 "program6.tab.cpp" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
                      yytoken, &yylval, &yylloc);
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
                  yystos[yystate], yyvsp, yylsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 2215 "program6.ypp" /* yacc.c:1906  */

void yyerror(char const *s) 
{
  // Shut up Bison let me do the talking (please and thank you)
  err->withDesc(s);
} 
