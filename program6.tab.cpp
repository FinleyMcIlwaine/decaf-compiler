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
extern string mainClass;

Error* err=new Error();
TypeError* terr=new TypeError();

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
# define YYDEBUG 1
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
#define YYLAST   1427

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  244
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  461

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
       0,   117,   117,   123,   127,   131,   140,   149,   158,   199,
     208,   212,   218,   226,   234,   242,   250,   258,   266,   274,
     282,   290,   298,   308,   318,   328,   338,   348,   358,   368,
     378,   390,   402,   414,   426,   438,   452,   458,   464,   470,
     476,   480,   484,   490,   494,   498,   504,   510,   516,   522,
     526,   530,   536,   542,   548,   554,   560,   564,   570,   579,
     583,   589,   638,   644,   650,   698,   704,   713,   718,   723,
     729,   738,   745,   749,   755,   761,   770,   828,   904,   910,
     916,   925,   929,   935,   942,   948,   957,  1045,  1051,  1059,
    1065,  1071,  1079,  1152,  1158,  1164,  1246,  1252,  1258,  1264,
    1270,  1278,  1347,  1353,  1359,  1363,  1369,  1375,  1381,  1454,
    1530,  1534,  1538,  1544,  1553,  1575,  1598,  1602,  1608,  1614,
    1622,  1626,  1630,  1636,  1643,  1670,  1674,  1680,  1684,  1688,
    1694,  1701,  1705,  1711,  1718,  1768,  1774,  1780,  1829,  1835,
    1844,  1848,  1854,  1861,  1865,  1877,  1883,  1889,  1895,  1907,
    1913,  1919,  1923,  1937,  1943,  1947,  1951,  1957,  1963,  1969,
    1975,  1990,  1994,  2000,  2010,  2019,  2032,  2045,  2052,  2067,
    2073,  2079,  2086,  2090,  2096,  2102,  2110,  2114,  2120,  2126,
    2135,  2147,  2155,  2164,  2177,  2183,  2192,  2198,  2204,  2217,
    2230,  2236,  2249,  2255,  2268,  2274,  2286,  2292,  2304,  2310,
    2322,  2328,  2340,  2346,  2358,  2364,  2376,  2382,  2394,  2400,
    2412,  2418,  2430,  2436,  2448,  2454,  2466,  2472,  2484,  2490,
    2502,  2508,  2520,  2526,  2535,  2548,  2554,  2560,  2566,  2578,
    2584,  2590,  2602,  2614,  2620,  2635,  2641,  2650,  2656,  2664,
    2675,  2680,  2686,  2695,  2699
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

#define YYTABLE_NINF -244

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     374,  -198,   155,    22,    73,  -198,    15,  -198,  -198,  -198,
    -198,    65,    14,  -198,   158,    58,   112,   169,  -198,   484,
    -198,   154,  -198,    33,  -198,   127,    81,  -198,   159,   326,
      25,  -198,   146,   170,   237,   383,   186,   249,   394,  -198,
     216,   330,   119,   391,   592,   171,   408,   526,  -198,  -198,
     220,   642,   447,   448,   343,   167,   159,  -198,   222,  -198,
     291,   460,  -198,  -198,   159,   495,  -198,  -198,  -198,   514,
     404,   438,  -198,  1169,   308,   145,  -198,   387,   430,   140,
    -198,   434,   190,  -198,    18,   474,    13,   730,   245,   401,
    -198,   492,  -198,   275,  -198,  -198,   280,  -198,   364,   386,
    -198,   459,  -198,   323,  -198,   472,    46,   496,   608,   187,
     482,   712,   325,    98,  -198,   302,   126,  -198,   411,  -198,
     317,    47,   518,   111,   244,   358,   540,   536,   340,  -198,
    -198,   636,   533,  -198,   728,  -198,  -198,   657,   259,  -198,
     551,   553,  -198,   661,  -198,  -198,   686,    79,   548,    89,
     562,  -198,   138,  -198,   570,   139,  -198,   576,  -198,  -198,
     247,  -198,  -198,  -198,   315,  -198,   822,  -198,  1376,  -198,
     285,  -198,   711,  -198,  -198,   845,   868,   891,   914,    60,
    1092,  -198,   822,   937,   602,   960,   470,   558,   415,  -198,
     437,   481,    31,  -198,  -198,   503,   587,  -198,  -198,   983,
     493,   627,  1006,  -198,   594,   586,  -198,  -198,  -198,   265,
     298,  -198,   569,   301,   501,  -198,   218,  -198,   554,  -198,
     578,  -198,  -198,   739,  -198,  -198,  -198,  -198,  -198,  -198,
     373,  -198,  -198,  -198,   409,  -198,   577,   737,   357,  -198,
     630,  -198,   740,   748,   637,  -198,  -198,   580,  -198,  -198,
    -198,   581,  -198,  -198,  -198,   595,  -198,  -198,  -198,   607,
    -198,  1376,  1108,   822,   822,   822,   822,   822,   822,   822,
     822,   822,   822,   822,   822,   822,   603,    20,   290,    10,
      11,  1243,  1023,  -198,  -198,  -198,  -198,  -198,  -198,   652,
    -198,   822,   822,   822,   822,   822,   822,   822,   822,   822,
     822,   822,   822,   822,  1258,  1273,  1039,  1288,   771,  1389,
    1303,  1318,  -198,  -198,  -198,   101,  -198,   525,   102,  -198,
     547,  -198,  -198,  -198,  1123,  1077,  -198,  -198,  1333,   782,
    1228,  1061,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,   746,   746,   746,   746,   746,
     746,   812,   812,   812,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,   677,   614,  -198,   677,   702,   629,   654,   658,  -198,
    -198,  -198,  1348,   783,   746,   746,   746,   746,   746,   746,
     812,   812,   812,  -198,  -198,  -198,  -198,  1161,  1161,  1161,
    1173,   628,   822,   673,  1194,  1206,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,   660,   710,  -198,  -198,  -198,   786,   753,
    -198,   794,  1363,   805,   776,   588,   799,  -198,  -198,   587,
    -198,  -198,  -198,   587,  -198,  -198,  1389,  -198,  -198,   587,
     696,    76,   699,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  1161,  1161,  1227,  -198,  -198,   587,
    -198
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     2,     4,     0,     9,     8,     1,
       3,     0,     0,     6,     0,     0,    71,   243,    57,     0,
      60,     0,    67,     0,    73,     0,     0,    83,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,     0,   244,     0,    71,    59,
       0,     0,     0,     0,     0,     0,     0,    55,     0,    72,
       0,     0,    75,    74,    82,   243,    53,    81,    84,     0,
       0,     0,    51,     0,     0,     0,    43,     0,     0,    54,
      49,     0,    82,    50,     0,     0,     0,     0,     0,     0,
     143,     0,   164,   165,   124,   130,     0,   163,     0,     0,
     133,     0,   142,     0,   154,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    76,     0,     0,   110,     0,   240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      69,     0,    63,    61,     0,    70,    68,     0,     0,    45,
       0,     0,    65,     0,    66,    64,     0,     0,     0,     0,
       0,    46,     0,    42,     0,     0,    40,     0,    41,    47,
      82,    44,    35,    30,    82,    22,     0,   129,   162,   161,
       0,   182,     0,   181,   165,     0,     0,     0,     0,   180,
       0,   188,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,   132,   127,   131,     0,   141,   128,   140,     0,
       0,     0,     0,   168,     0,     0,    32,    23,    12,     0,
       0,   108,     0,     0,   102,   101,     0,   109,     0,    78,
       0,   114,    80,     0,    77,   115,   242,   241,    33,    24,
      82,    13,    63,    14,    82,    11,     0,     0,     0,    92,
       0,    94,     0,     0,     0,    34,    25,    82,    16,    28,
      17,    82,    36,    29,    19,    82,    37,    21,    38,    82,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,   189,   192,   191,   194,   193,     0,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   169,
       0,     0,   135,   136,   134,     0,   122,     0,   132,   120,
       0,   121,   126,   125,     0,     0,   167,   166,     0,     0,
       0,     0,   138,   139,   137,   100,    96,    97,    98,    99,
      95,   112,   113,   111,    88,    87,    91,    90,    89,    86,
     105,   106,   107,   104,   145,   196,   198,   200,   202,   204,
     206,   208,   210,   212,   214,   216,   218,   220,   186,   187,
     185,     0,   233,   235,     0,     0,   234,     0,   232,   222,
     223,   221,     0,     0,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   215,   217,   219,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   117,   118,   116,
     146,   147,   144,     0,     0,   238,   239,   237,     0,     0,
     236,     0,     0,     0,     0,     0,     0,   184,   183,     0,
     156,   157,   158,   159,   155,   152,   170,   153,   151,   175,
     173,   174,   172,   149,   150,   148,   225,   229,   226,   227,
     224,   231,   230,   228,     0,     0,     0,   177,   178,   179,
     176
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,  -198,   679,  -198,  -198,   708,    -9,    -5,   552,
     674,   -20,  -198,   255,   188,  -198,   900,   610,  -198,  -198,
     605,   632,   -94,   -90,  -100,   -37,  -197,  -198,   -67,  -198,
     478,  -101,  -198,    26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    13,    19,    20,    58,    22,
      23,    24,    25,    26,    27,    28,   116,   117,    97,    98,
      39,    99,   100,   101,   102,   179,   308,   104,   309,   181,
     372,   373,    46,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   198,   203,    59,   329,   194,    21,    21,   191,   195,
      49,   374,   377,    59,    50,    30,    11,    15,    59,   162,
     180,   369,     9,    49,   166,   -58,    71,    21,    15,   -58,
      16,    59,    96,   375,    56,    17,    15,    29,    29,   115,
      12,    16,   166,    37,   370,    52,    17,   206,   228,    16,
      37,   202,   202,    59,    17,   167,    31,    59,    29,    40,
     163,   103,   103,   105,   103,    -7,    14,    72,    15,    -7,
     118,    37,    37,   322,   200,    57,    41,     2,   203,    42,
     245,    16,    64,   289,    15,   455,    17,   166,   207,   229,
     249,   198,   383,    96,    96,   198,   194,    16,   317,   262,
     320,   202,    65,   115,    37,   115,   115,    18,   282,   284,
     286,   288,   166,   166,    37,   304,   306,   218,   311,   129,
     110,   246,   219,    66,   105,   105,   115,   222,    62,   115,
      43,   250,   325,   130,   118,   331,   118,   118,   115,   253,
     257,   115,   111,   406,   408,   223,   152,    75,    15,    15,
     224,   103,    37,   103,   103,    53,     7,   118,   103,    35,
     118,    16,    16,    37,    37,    37,    65,    17,   135,   118,
      37,    79,   118,    15,   418,    54,     8,   421,   423,    36,
     254,   258,   159,    37,    37,    96,    16,   153,    76,   136,
     -52,    17,    44,   119,   -52,    55,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,    44,
      45,   211,    80,   115,    67,    37,   105,   198,   115,   339,
     198,   123,    67,   137,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   223,    82,   108,
      15,   124,   340,   138,   118,   232,   182,   -48,    67,   118,
      86,   -48,   133,    16,    87,    88,    89,    90,    65,    91,
     241,    55,    67,    55,    92,    48,    67,    34,   183,    67,
      93,   420,    37,    67,    94,   420,  -243,   420,    60,    83,
     103,   186,   134,   103,   218,    74,   276,    78,    81,   335,
      85,    95,    64,   107,    15,    67,  -243,   430,   431,   432,
     434,   187,   122,   220,   440,   442,   126,    16,   277,    64,
      67,    15,    65,   371,    67,   -31,    45,   223,   226,   -31,
     223,    55,   336,   221,    16,   337,   148,    69,   150,    65,
     154,   202,   157,   139,   199,   436,    67,   200,    67,   227,
      37,   144,    67,    55,   132,    67,   201,    70,   145,   217,
     151,   133,   331,   109,   457,   458,   460,   331,   346,   331,
     103,   103,   103,   103,   202,   188,   134,   103,   103,    87,
      88,    89,    90,   -26,    91,     1,   218,   -26,     2,    92,
      48,   347,   -93,    37,    84,    93,    15,   192,   155,    94,
      15,    87,    88,    89,    90,   106,    91,    15,    37,    16,
     233,    92,    48,    16,    65,   144,   189,    93,    17,   -15,
      16,    94,   145,   -15,   112,    17,   315,   103,   103,   103,
      87,    88,    89,    90,   184,    91,   166,   146,   193,   156,
      92,    64,   225,    15,    37,   160,   174,    15,   318,   147,
      94,    15,    87,    88,    89,    90,    16,    91,   127,   120,
      16,    65,    92,    48,    16,    65,   129,   316,    93,    65,
     196,   140,    94,    37,    87,    88,    89,    90,   128,    91,
     130,   131,   158,   204,    92,   164,   161,    15,   312,   319,
     174,   141,   196,   212,    94,    47,    87,    88,    89,    90,
      16,    91,   130,   205,   326,    65,    92,    64,    48,    15,
      48,   197,   174,    65,   196,    17,    94,  -103,    87,    88,
      89,    90,    16,    91,   327,   185,   165,    65,    92,   230,
     218,    15,   142,   321,   174,   338,   196,   121,    94,    15,
      87,    88,    89,    90,    16,    91,    45,   143,   208,    65,
      92,   234,    16,    15,   142,   323,   174,    65,   196,   247,
      94,    15,    87,    88,    89,    90,    16,    91,   -94,   313,
     231,    65,    92,   251,    16,    15,   314,   407,   174,    65,
      48,   255,    94,    15,   143,    65,   146,   259,    16,    15,
     -27,   -18,   235,    65,   -27,   -18,    16,   333,   218,   409,
     248,    65,    16,   113,   334,   -20,   218,    65,   166,   -20,
     130,   344,   332,   307,   252,    37,    37,   -39,    48,   209,
     452,   -39,   256,    65,   170,   171,   114,    92,   260,   172,
      37,  -171,   173,   174,    48,   175,  -171,   368,   328,    65,
      63,   348,    37,    68,   176,   177,   435,   236,   352,   170,
     171,   178,    92,   125,   172,    15,  -171,   173,   174,   223,
     175,  -171,    48,   382,   349,   419,   223,    65,    16,   176,
     177,   353,   212,    17,   170,   171,   178,    92,   443,   172,
     424,  -171,   173,   174,   437,   175,  -171,    48,   261,   130,
     131,   438,    65,    10,   176,   177,    33,   243,    38,   170,
     171,   178,    92,    51,   172,   425,  -171,   173,   174,   426,
     175,  -171,    48,   422,    73,   454,    77,    65,   456,   176,
     177,   444,   278,   214,   170,   171,   178,    92,   445,   172,
      32,  -171,   173,   174,   280,   175,  -171,    48,    48,   238,
     190,   168,   279,    65,   176,   177,   215,     0,   169,     0,
     342,   178,   170,   171,    48,    92,     0,   172,     0,    65,
     173,   174,   239,   175,   330,    48,   223,   376,   378,   223,
      65,   345,   176,   177,   350,   170,   171,   218,    92,   178,
     172,     0,   351,   173,   174,   447,   175,   330,   297,   298,
     299,   300,   301,   302,   303,   176,   177,     0,   170,   171,
     402,    92,   178,   172,     0,   403,   173,   174,   451,   175,
     330,   402,   402,     0,     0,   402,   414,   428,   176,   177,
     446,   170,   171,   402,    92,   178,   172,     0,   448,   173,
     174,   453,   175,   261,   402,     0,     0,     0,   341,   450,
       0,   176,   177,   343,   170,   171,     0,    92,   178,   172,
       0,     0,   173,   174,     0,   175,   281,   300,   301,   302,
     303,     0,     0,     0,   176,   177,     0,   170,   171,     0,
      92,   178,   172,     0,     0,   173,   174,     0,   175,   283,
       0,     0,     0,     0,     0,     0,     0,   176,   177,     0,
     170,   171,     0,    92,   178,   172,     0,     0,   173,   174,
       0,   175,   285,     0,     0,     0,     0,     0,     0,     0,
     176,   177,     0,   170,   171,     0,    92,   178,   172,     0,
       0,   173,   174,     0,   175,   287,     0,     0,     0,     0,
       0,     0,     0,   176,   177,     0,   170,   171,     0,    92,
     178,   172,     0,     0,   173,   174,     0,   175,   305,     0,
       0,     0,     0,     0,     0,     0,   176,   177,     0,   170,
     171,     0,    92,   178,   172,     0,     0,   173,   174,     0,
     175,   310,     0,     0,     0,     0,     0,     0,     0,   176,
     177,     0,   170,   171,     0,    92,   178,   172,     0,     0,
     173,   174,     0,   175,   324,     0,     0,     0,     0,     0,
       0,     0,   176,   177,     0,   170,   171,     0,    92,   178,
     172,     0,     0,   173,   174,     0,   175,   330,   210,     0,
     213,   216,     0,     0,     0,   176,   177,     0,   170,   171,
       0,    92,   178,   172,   380,     0,   173,   174,     0,   175,
       0,   237,     0,     0,   240,     0,     0,     0,   176,   177,
     399,     0,     0,   242,     0,   178,   244,   381,     0,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   416,   400,     0,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   411,     0,
       0,     0,     0,   417,     0,   412,     0,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     290,     0,     0,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   354,     0,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   410,     0,     0,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,     0,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   429,     0,     0,     0,    87,    88,    89,    90,
     149,    91,    15,     0,   433,     0,    92,     0,    87,    88,
      89,    90,   174,    91,     0,    16,    94,     0,    92,     0,
      17,     0,     0,     0,   174,   439,     0,     0,    94,    87,
      88,    89,    90,     0,    91,     0,     0,   441,     0,    92,
       0,    87,    88,    89,    90,   174,    91,     0,     0,    94,
       0,    92,     0,     0,     0,     0,     0,   174,   459,     0,
       0,    94,    87,    88,    89,    90,     0,    91,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,   174,     0,
     415,     0,    94,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   379,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   397,     0,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   398,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   401,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   404,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   405,     0,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   413,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   427,     0,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   449,     0,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303
};

static const yytype_int16 yycheck[] =
{
      37,   101,   103,    23,   201,    99,    11,    12,    98,    99,
      19,     1,     1,    33,    19,     1,     1,     3,    38,     1,
      87,     1,     0,    32,    11,     0,     1,    32,     3,     4,
      16,    51,    37,    23,     1,    21,     3,    11,    12,    44,
      25,    16,    11,    25,    24,    19,    21,     1,     1,    16,
      25,    41,    41,    73,    21,    42,    42,    77,    32,     1,
      42,    98,    99,    37,   101,     0,     1,    42,     3,     4,
      44,    25,    25,    42,    14,    42,    18,     4,   179,    21,
       1,    16,     1,    23,     3,     9,    21,    11,    42,    42,
       1,   191,   289,    98,    99,   195,   190,    16,   188,   166,
     190,    41,    21,   108,    25,   110,   111,    42,   175,   176,
     177,   178,    11,    11,    25,   182,   183,    19,   185,     8,
       1,    42,    24,    42,    98,    99,   131,     1,     1,   134,
      18,    42,   199,    22,   108,   202,   110,   111,   143,     1,
       1,   146,    23,    42,    42,    19,     1,     1,     3,     3,
      24,   188,    25,   190,   191,     1,     1,   131,   195,     1,
     134,    16,    16,    25,    25,    25,    21,    21,     1,   143,
      25,     1,   146,     3,   371,    21,    21,   374,   375,    21,
      42,    42,    42,    25,    25,   190,    16,    42,    42,    22,
       0,    21,    23,    22,     4,    41,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,    23,
      41,    24,    42,   218,    26,    25,   190,   317,   223,     1,
     320,     1,    34,     1,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,    19,     1,    23,
       3,    21,    24,    21,   218,     1,     1,     0,    60,   223,
       1,     4,     8,    16,     5,     6,     7,     8,    21,    10,
       1,    41,    74,    41,    15,    16,    78,    12,    23,    81,
      21,   372,    25,    85,    25,   376,     1,   378,    23,    42,
     317,     1,    23,   320,    19,    30,     1,    32,    33,    24,
      35,    42,     1,    38,     3,   107,    21,   397,   398,   399,
     400,    21,    47,     1,   404,   405,    51,    16,    23,     1,
     122,     3,    21,    23,   126,     0,    41,    19,     1,     4,
      19,    41,    24,    21,    16,    24,    71,     1,    73,    21,
      75,    41,    77,    42,    11,   402,   148,    14,   150,    22,
      25,     1,   154,    41,     1,   157,    23,    21,     8,    24,
      42,     8,   419,    23,   454,   455,   456,   424,     1,   426,
     397,   398,   399,   400,    41,     1,    23,   404,   405,     5,
       6,     7,     8,     0,    10,     1,    19,     4,     4,    15,
      16,    24,    25,    25,     1,    21,     3,     1,     1,    25,
       3,     5,     6,     7,     8,     1,    10,     3,    25,    16,
      42,    15,    16,    16,    21,     1,    42,    21,    21,     0,
      16,    25,     8,     4,    23,    21,     1,   454,   455,   456,
       5,     6,     7,     8,    23,    10,    11,    23,    42,    42,
      15,     1,    21,     3,    25,     1,    21,     3,     1,     1,
      25,     3,     5,     6,     7,     8,    16,    10,     1,    41,
      16,    21,    15,    16,    16,    21,     8,    42,    21,    21,
       1,     1,    25,    25,     5,     6,     7,     8,    21,    10,
      22,    23,    42,     1,    15,     1,    42,     3,     8,    42,
      21,    21,     1,     1,    25,     1,     5,     6,     7,     8,
      16,    10,    22,    21,     1,    21,    15,     1,    16,     3,
      16,    42,    21,    21,     1,    21,    25,    25,     5,     6,
       7,     8,    16,    10,    21,    23,    42,    21,    15,     1,
      19,     3,     8,    42,    21,    24,     1,     1,    25,     3,
       5,     6,     7,     8,    16,    10,    41,    23,    42,    21,
      15,     1,    16,     3,     8,    42,    21,    21,     1,     1,
      25,     3,     5,     6,     7,     8,    16,    10,    25,     1,
      42,    21,    15,     1,    16,     3,     8,    42,    21,    21,
      16,     1,    25,     3,    23,    21,    23,     1,    16,     3,
       0,     0,    42,    21,     4,     4,    16,     1,    19,    42,
      42,    21,    16,     1,     8,     0,    19,    21,    11,     4,
      22,    24,     8,     1,    42,    25,    25,     0,    16,     1,
      22,     4,    42,    21,    12,    13,    24,    15,    42,    17,
      25,    19,    20,    21,    16,    23,    24,    24,     1,    21,
      25,     1,    25,    28,    32,    33,     8,     1,     1,    12,
      13,    39,    15,     1,    17,     3,    19,    20,    21,    19,
      23,    24,    16,     1,    24,    41,    19,    21,    16,    32,
      33,    24,     1,    21,    12,    13,    39,    15,     8,    17,
      41,    19,    20,    21,     1,    23,    24,    16,     1,    22,
      23,     8,    21,     4,    32,    33,    12,     1,    14,    12,
      13,    39,    15,    19,    17,    41,    19,    20,    21,    41,
      23,    24,    16,     1,    30,     9,    32,    21,     9,    32,
      33,     1,     1,     1,    12,    13,    39,    15,     8,    17,
      12,    19,    20,    21,   172,    23,    24,    16,    16,     1,
      98,     1,    21,    21,    32,    33,    24,    -1,     8,    -1,
       1,    39,    12,    13,    16,    15,    -1,    17,    -1,    21,
      20,    21,    24,    23,     1,    16,    19,   279,   280,    19,
      21,    24,    32,    33,    24,    12,    13,    19,    15,    39,
      17,    -1,    24,    20,    21,    22,    23,     1,    32,    33,
      34,    35,    36,    37,    38,    32,    33,    -1,    12,    13,
      19,    15,    39,    17,    -1,    24,    20,    21,    22,    23,
       1,    19,    19,    -1,    -1,    19,    24,    24,    32,    33,
      24,    12,    13,    19,    15,    39,    17,    -1,    24,    20,
      21,    22,    23,     1,    19,    -1,    -1,    -1,   218,    24,
      -1,    32,    33,   223,    12,    13,    -1,    15,    39,    17,
      -1,    -1,    20,    21,    -1,    23,     1,    35,    36,    37,
      38,    -1,    -1,    -1,    32,    33,    -1,    12,    13,    -1,
      15,    39,    17,    -1,    -1,    20,    21,    -1,    23,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,
      12,    13,    -1,    15,    39,    17,    -1,    -1,    20,    21,
      -1,    23,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      17,    -1,    -1,    20,    21,    -1,    23,     1,   108,    -1,
     110,   111,    -1,    -1,    -1,    32,    33,    -1,    12,    13,
      -1,    15,    39,    17,     1,    -1,    20,    21,    -1,    23,
      -1,   131,    -1,    -1,   134,    -1,    -1,    -1,    32,    33,
       1,    -1,    -1,   143,    -1,    39,   146,    24,    -1,    26,
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
       1,    10,     3,    -1,     1,    -1,    15,    -1,     5,     6,
       7,     8,    21,    10,    -1,    16,    25,    -1,    15,    -1,
      21,    -1,    -1,    -1,    21,     1,    -1,    -1,    25,     5,
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
       1,    42,     1,    42,     1,    42,    11,    42,     1,     8,
      12,    13,    17,    20,    21,    23,    32,    33,    39,    68,
      71,    72,     1,    23,    23,    23,     1,    21,     1,    42,
      64,    66,     1,    42,    65,    66,     1,    42,    67,    11,
      14,    23,    41,    74,     1,    21,     1,    42,    42,     1,
      59,    24,     1,    59,     1,    24,    59,    24,    19,    24,
       1,    21,     1,    19,    24,    21,     1,    22,     1,    42,
       1,    42,     1,    42,     1,    42,     1,    59,     1,    24,
      59,     1,    59,     1,    59,     1,    42,     1,    42,     1,
      42,     1,    42,     1,    42,     1,    42,     1,    42,     1,
      42,     1,    71,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     1,    23,     1,    21,
      52,     1,    71,     1,    71,     1,    71,     1,    71,    23,
       8,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    71,     1,    71,     1,    69,    71,
       1,    71,     8,     1,     8,     1,    42,    66,     1,    42,
      66,    42,    42,    42,     1,    71,     1,    21,     1,    69,
       1,    71,     8,     1,     8,    24,    24,    24,    24,     1,
      24,    60,     1,    60,    24,    24,     1,    24,     1,    24,
      24,    24,     1,    24,     8,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    24,     1,
      24,    23,    73,    74,     1,    23,    73,     1,    73,    24,
       1,    24,     1,    69,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    24,    24,     1,
      24,    24,    19,    24,    24,    24,    42,    42,    42,    42,
       8,     1,     8,    24,    24,    22,     1,    22,    69,    41,
      74,    69,     1,    69,    41,    41,    41,    24,    24,     1,
      67,    67,    67,     1,    67,     8,    71,     1,     8,     1,
      67,     1,    67,     8,     1,     8,    24,    22,    24,    24,
      24,    22,    22,    22,     9,     9,     9,    67,    67,     1,
      67
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
      63,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    69,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    73,    73,    74,    74,    74,
      75,    75,    75,    76,    76
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
       3,     3,     3,     2,     1,     4,     4,     3,     3,     3,
       2,     2,     2,     1,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     4,     4,     4,     4,     5,     5,
       5,     5,     5,     5,     1,     5,     5,     5,     5,     5,
       3,     2,     2,     1,     1,     1,     3,     3,     2,     1,
       3,     0,     5,     5,     5,     5,     7,     7,     7,     7,
       1,     1,     1,     4,     4,     3,     3,     3,     1,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     5,     5,     5,     5,     5,
       5,     5,     3,     3,     3,     1,     2,     3,     3,     3,
       2,     3,     3,     1,     2
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
#line 1894 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 123 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ProgramNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Program> <ClassDec>");
}
#line 1903 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 127 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ProgramNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ClassDec>");
}
#line 1912 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 131 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ProgramNode();
  (yyval.pnode)->setVal("<Error>");
}
#line 1923 "program6.tab.cpp" /* yacc.c:1646  */
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
#line 1937 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 149 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassDecNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<ClassStart> <Error>");
}
#line 1948 "program6.tab.cpp" /* yacc.c:1646  */
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
  newType->withSymbolTable(newSymTab)->
    withBaseTypeString((yyvsp[0].pnode)->getString());

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
    // A class with this identifier has already been defined, error and mark
    // the symbol table for deletion and pretend the next block of code never happened.
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
#line 1994 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 199 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassStartNode();
  (yyval.pnode)->setVal("class <Error>");
}
#line 2005 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 208 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2014 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 212 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2025 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 218 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <Error> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2038 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 226 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <Error> <MethodDecs> rbrace");
}
#line 2051 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 234 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <ConstructorDecs> <Error> rbrace");
}
#line 2064 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 242 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <VarDecs> <ConstructorDecs> <MethodDecs> <Error>");
}
#line 2077 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 250 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <Error> <MethodDecs> rbrace");
}
#line 2090 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 258 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <ConstructorDecs> <Error> rbrace");
}
#line 2103 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 266 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <ConstructorDecs> <MethodDecs> <Error>");
}
#line 2116 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 274 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <Error> <Error> rbrace");
}
#line 2129 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 282 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <Error> <MethodDecs> <Error>");
}
#line 2142 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 290 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> <Error> <Error>");
}
#line 2155 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 298 "program6.ypp" /* yacc.c:1646  */
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
#line 2170 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 308 "program6.ypp" /* yacc.c:1646  */
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
#line 2185 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 318 "program6.ypp" /* yacc.c:1646  */
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
#line 2200 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 328 "program6.ypp" /* yacc.c:1646  */
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
#line 2215 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 338 "program6.ypp" /* yacc.c:1646  */
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
#line 2230 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 348 "program6.ypp" /* yacc.c:1646  */
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
#line 2245 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 358 "program6.ypp" /* yacc.c:1646  */
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
#line 2260 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 368 "program6.ypp" /* yacc.c:1646  */
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
#line 2275 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 378 "program6.ypp" /* yacc.c:1646  */
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
#line 2292 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 390 "program6.ypp" /* yacc.c:1646  */
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
#line 2309 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 402 "program6.ypp" /* yacc.c:1646  */
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
#line 2326 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 414 "program6.ypp" /* yacc.c:1646  */
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
#line 2343 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 426 "program6.ypp" /* yacc.c:1646  */
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
#line 2360 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 438 "program6.ypp" /* yacc.c:1646  */
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
#line 2379 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 452 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2390 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 458 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <Error> <MethodDecs> rbrace");
}
#line 2401 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 464 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> <Error> rbrace");
}
#line 2412 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 470 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> <MethodDecs> <Error>");
}
#line 2423 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 476 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> rbrace");
}
#line 2432 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 480 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <MethodDecs> rbrace");
}
#line 2441 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 484 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <Error> rbrace");
}
#line 2452 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 490 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> rbrace");
}
#line 2461 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 494 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2470 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 498 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 2481 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 504 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Error> <MethodDecs> rbrace");
}
#line 2492 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 510 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> <Error> rbrace");
}
#line 2503 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 516 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> <MethodDecs> <Error>");
}
#line 2514 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 522 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> rbrace");
}
#line 2523 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 526 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <MethodDecs> rbrace");
}
#line 2532 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 530 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("lbrace <Error> rbrace");
}
#line 2543 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 536 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <MethodDecs> <Error>");
}
#line 2554 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 542 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <MethodDecs> rbrace");
}
#line 2565 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 548 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> <Error>");
}
#line 2576 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 554 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> <ConstructorDecs> rbrace");
}
#line 2587 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 560 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("lbrace rbrace");
}
#line 2596 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 564 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("<Error> rbrace");
}
#line 2607 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 570 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("lbrace <Error>");
}
#line 2618 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 579 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<VarDecs> <VarDec>");
}
#line 2627 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 583 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<VarDec>");
}
#line 2636 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 589 "program6.ypp" /* yacc.c:1646  */
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
    // Class mask
    terr->
      withColNumber((yylsp[-1]).first_column)->
      withLineNumber((yylsp[-1]).first_line)->
      withDesc("error: identifier '" +
          (yyvsp[-1].pnode)->getString() + "' is a type, expected unqualified-id.");
    scanner.addTypeError(*terr);
  }
  else if (res==-4)
  {
    // Var Redef
    terr->
      withColNumber((yylsp[-1]).first_column)->
      withLineNumber((yylsp[-1]).first_line)->
      withDesc("error: identifier '" + (yyvsp[-1].pnode)->getString() + "' already exists locally.");
    scanner.addTypeError(*terr);
  }
  else if(!cur->getDeleteOnResolve() && t != "int")
  {
    (yyval.pnode)->setMySymbolTable(cur);
    ((VarDecNode*)(yyval.pnode))->setVarSymbol(sym);
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 2690 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 638 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> <Error> semi");
}
#line 2701 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 644 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier <Error>");
}
#line 2712 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 650 "program6.ypp" /* yacc.c:1646  */
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
    // Error here about masking class type
    terr->
      withColNumber((yylsp[-1]).first_column)->
      withLineNumber((yylsp[-1]).first_line)->
      withDesc("error: identifier '" + 
          (yyvsp[-1].pnode)->getString() + "' is a type, expected unqualified-id.");
    scanner.addTypeError(*terr);
  }
  else if (res==-4)
  {
    // Error here about var redefinition
    terr->
      withColNumber((yylsp[-1]).first_column)->
      withLineNumber((yylsp[-1]).first_line)->
      withDesc("error: identifier '" + (yyvsp[-1].pnode)->getString() + "' already exists locally.");
    scanner.addTypeError(*terr);
  }
  else if(!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->setMySymbolTable(cur);
    ((VarDecNode*)(yyval.pnode))->setVarSymbol(sym);
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 2765 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 698 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<IdBrack> <Error> semi");
}
#line 2776 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 704 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier <Error>");
}
#line 2787 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 713 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new TypeNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<SimpleType>");
  ((TypeNode*)(yyval.pnode))->withTypeString("int");
}
#line 2797 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 718 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new TypeNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> lbrack rbrack");
  ((TypeNode*)(yyval.pnode))->withTypeString(((TypeNode*)(yyvsp[-2].pnode))->getTypeString());
}
#line 2807 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 723 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new TypeNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> <Error> rbrack");
}
#line 2818 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 729 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new TypeNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> lbrack <Error>");
}
#line 2829 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 738 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new SimpleTypeNode();
  (yyval.pnode)->setVal("int");
}
#line 2838 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 745 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConstructorDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConstructorDecs> <ConstructorDec>");
}
#line 2847 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 749 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConstructorDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConstructorDec>");
}
#line 2856 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 755 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConstructorDecNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConstructorStart> <Block>");

  cur = cur->getParent();
}
#line 2867 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 761 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConstructorDecNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<ConstructorStart> <Error>");
}
#line 2878 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 770 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new CtorStartNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("identifier lparen rparen");

  // Make a symbol table for this method
  MethodTable* newSymTab = new MethodTable();
  newSymTab->setMethodName((yyvsp[-1].pnode)->getString());

  // Create the type for this thing, it has no args!
  CtorType* t=new CtorType();
  t->withBaseTypeString("null")->
    withDimension(0)->
    withSymbolTable(newSymTab);
 
  ((ClassSymbol*)cur->getEncapsulatingClassSymbol())->addCtorType(t);

  int typePtr=types->addType(t);

  // Create a symbol for the ctor
  CtorSymbol* sym=new CtorSymbol();
  sym->
    withName((yyvsp[-2].pnode)->getString())->
    withLineNumber((yylsp[-2]).first_line)->
    withColNumber((yylsp[-2]).first_column)->
    withTypePtr(typePtr);

  newSymTab->setMethodSymbol(sym);

  // Put it in the current table
  if ((yyvsp[-1].pnode)->getString()!=cur->getEncapsulatingClassName())
  {
    // Does not match class name
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: method '" + 
          (yyvsp[-2].pnode)->getString() + "' cannot have 'null' return type.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else 
  {
    int res=cur->insert(sym);
    if (res==-2)
    {
      // Constructor with same type has already been defined
      terr->
        withColNumber((yylsp[-2]).first_column)->
        withLineNumber((yylsp[-2]).first_line)->
        withDesc("error: constructor with same type for class '" + 
            (yyvsp[-2].pnode)->getString() + "' has already been defined.");
      scanner.addTypeError(*terr);
      newSymTab->setDeleteOnResolve(true);
    }
  }
  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 2941 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 828 "program6.ypp" /* yacc.c:1646  */
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
  CtorType* t=new CtorType();
  ((CtorType*)(t->withBaseTypeString("null")))->
    withArgTypeList(argStrings)->
    withSymbolTable(newSymTab);

  ((ClassSymbol*)cur->getEncapsulatingClassSymbol())->addCtorType(t);

  int loc=types->addType(t);

  // Create a symbol for the ctor
  CtorSymbol* sym=new CtorSymbol();
  sym->withName((yyvsp[-3].pnode)->getString())->
    withLineNumber((yylsp[-3]).first_line)->
    withColNumber((yylsp[-3]).first_column)->
    withTypePtr(loc);

  newSymTab->setMethodSymbol(sym);

  // Put it in the current table if its valid
  if ((yyvsp[-2].pnode)->getString()!=cur->getEncapsulatingClassName())
  {
    // Does not match class name
    terr->
      withColNumber((yylsp[-3]).first_column)->
      withLineNumber((yylsp[-3]).first_line)->
      withDesc("error: method '" + (yyvsp[-3].pnode)->getString() + 
          "' cannot have 'null' return type.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else 
  {
    int res=cur->insert(sym);
    if (res==-2)
    {
      // Constructor with same type has already been defined
      terr->
        withColNumber((yylsp[-3]).first_column)->
        withLineNumber((yylsp[-3]).first_line)->
        withDesc("error: constructor with same type for class '" +
            (yyvsp[-3].pnode)->getString() + "' has already been defined.");
      scanner.addTypeError(*terr);
      newSymTab->setDeleteOnResolve(true);
    }
    else
    {
      ((CtorStartNode*)(yyval.pnode))->setMethodSymbol(sym);
      ((CtorStartNode*)(yyval.pnode))->setMethodTable(newSymTab);
      ((CtorStartNode*)(yyval.pnode))->setParameterListNode((yyvsp[-1].pnode));
      scanner.addTypeCheck((yyval.pnode));
    }
  }
  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3022 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 904 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new CtorStartNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("identifier lparen <Error> rparen"); 
}
#line 3033 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 910 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new CtorStartNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("identifier lparen <Error>"); 
}
#line 3044 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 916 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new CtorStartNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("identifier lparen <ParameterList> <Error>"); 
}
#line 3055 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 925 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<MethodDecs> <MethodDec>");
}
#line 3064 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 929 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodDecsNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<MethodDecs> <Error>");
}
#line 3075 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 935 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<MethodDec>");
}
#line 3084 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 942 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<MethodStart> <Block>");

  cur = cur->getParent();
}
#line 3095 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 948 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodDecNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> <Block>");
}
#line 3106 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 957 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <ParameterList> rparen");
  ((MethodStartNode*)(yyval.pnode))->setParameterListNode((yyvsp[-1].pnode));

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
  newSymTab->setMethodSymbol(sym);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-1)
  {
    // error about only differing from other method by return type
    terr->
      withColNumber((yylsp[-3]).first_column)->
      withLineNumber((yylsp[-3]).first_line)->
      withDesc("error: method '" + (yyvsp[-3].pnode)->getString() +
          "' must differ by more than just return type.");
     scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if (res==-2)
  {
    // error about same signature as other method
    terr->
      withColNumber((yylsp[-3]).first_column)->
      withLineNumber((yylsp[-3]).first_line)->
      withDesc("error: method '" + (yyvsp[-3].pnode)->getString() + 
          "' with identical signature already exists locally.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if (res==-3)
  {
    // error about sharing ID with class type
    terr->
      withColNumber((yylsp[-3]).first_column)->
      withLineNumber((yylsp[-3]).first_line)->
      withDesc("error: identifier '" + (yyvsp[-3].pnode)->getString() + 
          "' is a type, expected unqualified-id.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if(!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->setMySymbolTable(cur);
    ((MethodStartNode*)(yyval.pnode))->setMethodSymbol(sym);
    ((MethodStartNode*)(yyval.pnode))->setMethodTable(newSymTab);
    scanner.addTypeCheck((yyval.pnode));
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3199 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 1045 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> <Error> lparen <ParameterList> rparen");
}
#line 3210 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 1051 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode));
  (yyval.pnode)->setVal("<Type> <Error> lparen <ParameterList> rparen");
}
#line 3223 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 1059 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <ParameterList> error");
}
#line 3234 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 1065 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <Error> rparen");
}
#line 3245 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 1071 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <Error> <Error>");
}
#line 3258 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 1079 "program6.ypp" /* yacc.c:1646  */
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
  newSymTab->setMethodSymbol(sym);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-1)
  {
    // error about only differing from other method by return type
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: method '" + (yyvsp[-2].pnode)->getString() + 
          "' must differ by more than just return type.");
     scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if (res==-2)
  {
    // error about same signature as other method
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: method '" + (yyvsp[-2].pnode)->getString() + 
          "' with identical signature already exists locally.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if (res==-3)
  {
    // error about sharing ID with class type
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: identifier '" + (yyvsp[-2].pnode)->getString() + 
          "' is a type, expected unqualified-id.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if(!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->setMySymbolTable(cur);
    ((MethodStartNode*)(yyval.pnode))->setMethodSymbol(sym);
    ((MethodStartNode*)(yyval.pnode))->setMethodTable(newSymTab);
    scanner.addTypeCheck((yyval.pnode));
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3336 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 1152 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <Error>");
}
#line 3347 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 1158 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier <Error>");
}
#line 3358 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 1164 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("void identifier lparen <ParameterList> rparen");
  ((MethodStartNode*)(yyval.pnode))->setParameterListNode((yyvsp[-1].pnode));

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
  newSymTab->setMethodSymbol(sym);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-1)
  {
    // error about only differing from other method by return type
    terr->
      withColNumber((yylsp[-3]).first_column)->
      withLineNumber((yylsp[-3]).first_line)->
      withDesc("error: method '" + (yyvsp[-3].pnode)->getString() + 
          "' must differ by more than just return type.");
     scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if (res==-2)
  {
    // error about same signature as other method
    terr->
      withColNumber((yylsp[-3]).first_column)->
      withLineNumber((yylsp[-3]).first_line)->
      withDesc("error: method '" + (yyvsp[-3].pnode)->getString() + 
          "' with identical signature already exists locally.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if (res==-3)
  {
    // error about sharing ID with class type
    terr->
      withColNumber((yylsp[-3]).first_column)->
      withLineNumber((yylsp[-3]).first_line)->
      withDesc("error: identifier '" + (yyvsp[-3].pnode)->getString() + 
          "' is a type, expected unqualified-id.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if(!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->setMySymbolTable(cur);
    ((MethodStartNode*)(yyval.pnode))->setMethodSymbol(sym);
    ((MethodStartNode*)(yyval.pnode))->setMethodTable(newSymTab);
    scanner.addTypeCheck((yyval.pnode));
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3445 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 1246 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("void <Error> lparen <ParameterList> rparen");
}
#line 3456 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 1252 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("void identifier <Error> <ParameterList> rparen");
}
#line 3467 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 1258 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("void identifier lparen <Error> rparen");
}
#line 3478 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 1264 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("void identifier lparen <ParameterList> <Error>");
}
#line 3489 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 1270 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode();
  (yyval.pnode)->setVal("void <Error> lparen <Error> rparen");
}
#line 3502 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 1278 "program6.ypp" /* yacc.c:1646  */
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
  newSymTab->setMethodSymbol(sym);

  // Put it in the current table
  int res=cur->insert(sym);
  if (res==-1)
  {
    // error about only differing from other method by return type
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: method '" + (yyvsp[-2].pnode)->getString() + 
          "' must differ by more than just return type.");
     scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if (res==-2)
  {
    // error about same signature as other method
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: method '" + (yyvsp[-2].pnode)->getString() + 
          "' with identical signature already exists locally.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if (res==-3)
  {
    // error about sharing ID with class type
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: identifier '" + (yyvsp[-2].pnode)->getString() + 
          "' is a type, expected unqualified-id.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else if(!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->setMySymbolTable(cur);
    ((MethodStartNode*)(yyval.pnode))->setMethodSymbol(sym);
    ((MethodStartNode*)(yyval.pnode))->setMethodTable(newSymTab);
    scanner.addTypeCheck((yyval.pnode));
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3576 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 1347 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("void identifier lparen <Error>");
}
#line 3587 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 1353 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("void identifier <Error>");
}
#line 3598 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 1359 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier lparen <ParameterList> rparen");
}
#line 3607 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 1363 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> <Error> lparen <ParameterList> rparen");
}
#line 3618 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 1369 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier lparen <Error> rparen");
}
#line 3629 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 1375 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MethodStartNode((yyvsp[-4].pnode),(yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier lparen <ParameterList> <Error>");
}
#line 3640 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 1381 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodStartNode();

  // Make a symbol table for it
  MethodTable* newSymTab = new MethodTable();

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
  newSymTab->setMethodSymbol(sym);

  if (mainClass != "") {
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: 'main' method already implemented in class '"
          +mainClass+"'.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else
  {
    mainClass=cur->getEncapsulatingClassName();
    // Put it in the current table
    int res=cur->insert(sym);
    if (res==-1)
    {
      // error about only differing from other method by return type
      terr->
        withColNumber((yylsp[-2]).first_column)->
        withLineNumber((yylsp[-2]).first_line)->
        withDesc("error: method '" + (yyvsp[-2].pnode)->getString() + 
            "' must differ by more than just return type.");
       scanner.addTypeError(*terr);
      newSymTab->setDeleteOnResolve(true);
    }
    else if (res==-2)
    {
      // error about same signature as other method
      terr->
        withColNumber((yylsp[-2]).first_column)->
        withLineNumber((yylsp[-2]).first_line)->
        withDesc("error: method '" + (yyvsp[-2].pnode)->getString() + 
            "' with identical signature already exists locally.");
      scanner.addTypeError(*terr);
      newSymTab->setDeleteOnResolve(true);
    }
    else if (res==-3)
    {
      // error about sharing ID with class type
      terr->
        withColNumber((yylsp[-2]).first_column)->
        withLineNumber((yylsp[-2]).first_line)->
        withDesc("error: identifier '" + (yyvsp[-2].pnode)->getString() + 
            "' is a type, expected unqualified-id.");
      scanner.addTypeError(*terr);
      newSymTab->setDeleteOnResolve(true);
    }
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3718 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 1454 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodStartNode();

  // Make a symbol table for it
  MethodTable* newSymTab = new MethodTable();

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
  newSymTab->setMethodSymbol(sym);

  if (mainClass != "") {
    terr->
      withColNumber((yylsp[-2]).first_column)->
      withLineNumber((yylsp[-2]).first_line)->
      withDesc("error: 'main' method already implemented in class '"+
          mainClass+"'.");
    scanner.addTypeError(*terr);
    newSymTab->setDeleteOnResolve(true);
  }
  else
  {
    mainClass=cur->getEncapsulatingClassName();
    // Put it in the current table
    int res=cur->insert(sym);
    if (res==-1)
    {
      // error about only differing from other method by return type
      terr->
        withColNumber((yylsp[-2]).first_column)->
        withLineNumber((yylsp[-2]).first_line)->
        withDesc("error: method '" + (yyvsp[-2].pnode)->getString() + 
            "' must differ by more than just return type.");
       scanner.addTypeError(*terr);
      newSymTab->setDeleteOnResolve(true);
    }
    else if (res==-2)
    {
      // error about same signature as other method
      terr->
        withColNumber((yylsp[-2]).first_column)->
        withLineNumber((yylsp[-2]).first_line)->
        withDesc("error: method '" + (yyvsp[-2].pnode)->getString() + 
            "' with identical signature already exists locally.");
      scanner.addTypeError(*terr);
      newSymTab->setDeleteOnResolve(true);
    }
    else if (res==-3)
    {
      // error about sharing ID with class type
      terr->
        withColNumber((yylsp[-2]).first_column)->
        withLineNumber((yylsp[-2]).first_line)->
        withDesc("error: identifier '" + (yyvsp[-2].pnode)->getString() + 
            "' is a type, expected unqualified-id.");
      scanner.addTypeError(*terr);
      newSymTab->setDeleteOnResolve(true);
    }
  }

  // Then make the current symbol table the method's new symbol table
  cur=cur->addChild(newSymTab);
}
#line 3796 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 1530 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterListNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Parameter>");
}
#line 3805 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 1534 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterListNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ParameterList> comma <Exp>");
}
#line 3814 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 1538 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ParameterListNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> comma <Exp>");
}
#line 3825 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 1544 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ParameterListNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<ParameterList> comma <Error>");
}
#line 3836 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 1553 "program6.ypp" /* yacc.c:1646  */
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
#line 3863 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 1575 "program6.ypp" /* yacc.c:1646  */
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
#line 3888 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 1598 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtBlockNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <LocalVarDecs> <Stmts> rbrace");
}
#line 3897 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 1602 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtBlockNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <Error> <Stmts> rbrace");
}
#line 3908 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 1608 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtBlockNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <LocalVarDecs> <Error> rbrace");
}
#line 3919 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 1614 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtBlockNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <Error> <Error> rbrace");
}
#line 3932 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 1622 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtBlockNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <LocalVarDecs> rbrace");
}
#line 3941 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 1626 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtBlockNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <Stmts> rbrace");
}
#line 3950 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1630 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtBlockNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> <Error> rbrace");
}
#line 3961 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1636 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtBlockNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<StmtBlockStart> rbrace");
}
#line 3970 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1643 "program6.ypp" /* yacc.c:1646  */
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
#line 3999 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1670 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <LocalVarDecs> <Stmts> rbrace");
}
#line 4008 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1674 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BlockNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("lbrace <LocalVarDecs> <Error> rbrace");
}
#line 4019 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1680 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <LocalVarDecs> rbrace");
}
#line 4028 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1684 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Stmts> rbrace");
}
#line 4037 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1688 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BlockNode();
  (yyval.pnode)->setVal("lbrace <Error> rbrace");
}
#line 4048 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1694 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode();
  (yyval.pnode)->setVal("lbrace rbrace");
}
#line 4057 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1701 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<LocalVarDecs> <LocalVarDec>");
}
#line 4066 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1705 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<LocalVarDecs> <Error>");
}
#line 4077 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1711 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<LocalVarDec>");
}
#line 4086 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1718 "program6.ypp" /* yacc.c:1646  */
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
    // Class mask
    terr->
      withColNumber((yylsp[-1]).first_column)->
      withLineNumber((yylsp[-1]).first_line)->
      withDesc("error: identifier '" + (yyvsp[-1].pnode)->getString() + 
          "' is a type, expected unqualified-id.");
    scanner.addTypeError(*terr);
  }
  else if (res==-4)
  {
    // Var Redef
    terr->
      withColNumber((yylsp[-1]).first_column)->
      withLineNumber((yylsp[-1]).first_line)->
      withDesc("error: identifier '" + (yyvsp[-1].pnode)->getString() + 
          "' already exists locally.");
    scanner.addTypeError(*terr);
  }
  else if(!cur->getDeleteOnResolve() && t != "int")
  {
    (yyval.pnode)->setMySymbolTable(cur);
    ((LocalVarDecNode*)(yyval.pnode))->setVarSymbol(sym);
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4141 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1768 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> <Error> semi");
}
#line 4152 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1774 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier <Error>");
}
#line 4163 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1780 "program6.ypp" /* yacc.c:1646  */
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
    // Error here about masking class type
    terr->
      withColNumber((yylsp[-1]).first_column)->
      withLineNumber((yylsp[-1]).first_line)->
      withDesc("error: identifier '" + (yyvsp[-1].pnode)->getString() + 
          "' is a type, expected unqualified-id.");
    scanner.addTypeError(*terr);
  }
  else if (res==-4)
  {
    // Error here about var redefinition
    terr->
      withColNumber((yylsp[-1]).first_column)->
      withLineNumber((yylsp[-1]).first_line)->
      withDesc("error: identifier '" + (yyvsp[-1].pnode)->getString() + 
          "' already exists locally.");
    scanner.addTypeError(*terr);
  }
  else if(!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->setMySymbolTable(cur);
    ((LocalVarDecNode*)(yyval.pnode))->setVarSymbol(sym);
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4217 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1829 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<IdBrack> <Error> semi");
}
#line 4228 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1835 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier <Error>");
}
#line 4239 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1844 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Stmts> <Stmt>");
}
#line 4248 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1848 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtsNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Stmts> <Error>");
}
#line 4259 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1854 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Stmt>");
}
#line 4268 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1861 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode();
  (yyval.pnode)->setVal("semi");
}
#line 4277 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1865 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Name> assign <Exp> semi");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="assign";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-3]).first_line;
    (yyval.pnode)->col=(yylsp[-3]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4294 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1877 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Error> assign <Exp> semi");
}
#line 4305 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1883 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<Name> assign <Error> semi");
}
#line 4316 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1889 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Name> assign <Exp> <Error>");
}
#line 4327 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1895 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Name> lparen <ArgList> rparen semi");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="name_arglist";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-4]).first_line;
    (yyval.pnode)->col=(yylsp[-4]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4344 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1907 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode));
  (yyval.pnode)->setVal("<Name> lparen <Error> rparen semi");
}
#line 4355 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1913 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Name> lparen <ArgList> rparen <Error>");
}
#line 4366 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1919 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("print lparen <ArgList> rparen semi");
}
#line 4375 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1923 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode));
  (yyval.pnode)->setVal("print lparen <Error> rparen semi");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="print_arglist";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-4]).first_line;
    (yyval.pnode)->col=(yylsp[-4]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4394 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1937 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("print lparen <ArgList> rparen <Error>");
}
#line 4405 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1943 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConditionalStmt>");
}
#line 4414 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1947 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("while lparen <Exp> rparen <Stmt>");
}
#line 4423 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1951 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("while <Error> <Exp> rparen <Stmt>");
}
#line 4434 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1957 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("while lparen <Error> rparen <Stmt>");
}
#line 4445 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1963 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("while lparen <Exp> <Error> <Stmt>");
}
#line 4456 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1969 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("while lparen <Exp> rparen <Error>");
}
#line 4467 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1975 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("return <Exp> semi");
  Type* t=((MethodTable*)cur)->getMethodSymbol()->getType();
  if (t->getBaseTypeString()=="void" ||
      t->getBaseTypeString()=="null")
  {
    terr->
      withColNumber((yylsp[-1]).first_column)->
      withLineNumber((yylsp[-1]).first_line)->
      withDesc("error: method of type '"+t->getBaseTypeString()+ 
          "' cannot include expression in return.");
    scanner.addTypeError(*terr);
  }
}
#line 4487 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1990 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode();
  (yyval.pnode)->setVal("return semi");
}
#line 4496 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1994 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new StmtNode();
  (yyval.pnode)->setVal("return <Error>");
}
#line 4507 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 2000 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<StmtBlock>");

  // Reset sym tab
  cur = cur->getParent();
}
#line 4519 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 2010 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode();
  (yyval.pnode)->setVal("this");
  Symbol* thisSym = cur->getEncapsulatingClassSymbol();
  if (thisSym)
  {
    (yyval.pnode)->setType(thisSym->getType());
  }
}
#line 4533 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 2019 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal((yyvsp[0].pnode)->getString());
  if (!cur->getDeleteOnResolve())
  {
    ((NameNode*)(yyval.pnode))->checkType="identifier";
    ((NameNode*)(yyval.pnode))->identifier=(yyvsp[0].pnode)->getString();
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[0]).first_line;
    (yyval.pnode)->col=(yylsp[0]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4551 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 2032 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal((yyvsp[-2].pnode)->getString()+"."+(yyvsp[0].pnode)->getString());
  if (!cur->getDeleteOnResolve())
  {
    ((NameNode*)(yyval.pnode))->checkType="ref_dot";
    ((NameNode*)(yyval.pnode))->identifier=(yyvsp[-2].pnode)->getString();
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4569 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 2045 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NameNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Name> dot <Error>");
  yyerrok;
}
#line 4581 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 2052 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal((yyvsp[-1].pnode)->getString());
  if (!cur->getDeleteOnResolve())
  {
    ((NameNode*)(yyval.pnode))->checkType="bexp";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-1]).first_line;
    (yyval.pnode)->col=(yylsp[-1]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4598 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 2067 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ArgListNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp>");
  (yyval.pnode)->line=(yylsp[0]).first_line;
  (yyval.pnode)->col=(yylsp[0]).first_column;
}
#line 4609 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 2073 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ArgListNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ArgList> comma <Exp>");
  (yyval.pnode)->line=(yylsp[-2]).first_line;
  (yyval.pnode)->col=(yylsp[-2]).first_column;
}
#line 4620 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 2079 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ArgListNode();
  (yyval.pnode)->setVal("empty"); /* HOW TO SHOW THIS??? */
}
#line 4629 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 2086 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Stmt>");
}
#line 4638 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 2090 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Error> rparen <Stmt>");
}
#line 4649 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 2096 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Error>");
}
#line 4660 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 2102 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode();
  (yyval.pnode)->setVal("if lparen <Error> rparen <Error>");
}
#line 4673 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 2110 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Stmt> else <Stmt>");
}
#line 4682 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 2114 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-4]).first_column)->withLineNumber((yylsp[-4]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Error> rparen <Stmt> else <Stmt>");
}
#line 4693 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 2120 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-4].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Error> else <Stmt>");
}
#line 4704 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 2126 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Stmt> else <Error>");
}
#line 4715 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 2135 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Name>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="name";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[0]).first_line;
    (yyval.pnode)->col=(yylsp[0]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4732 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 2147 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("number");
  Type* t=new Type();
  t->withBaseTypeString("int")->
    withDimension(0);
  (yyval.pnode)->setType(t);
}
#line 4745 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 2155 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("null");
  Type* t=new Type();
  t->withBaseTypeString("null")->
    withDimension(0);
  (yyval.pnode)->setType(t);
  // This thing does not have a type
}
#line 4759 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 2164 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Name> lparen <ArgList> rparen");
  // Gotta make sure the call is valid, cannot be a constructor
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="name_arglist";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-3]).first_line;
    (yyval.pnode)->col=(yylsp[-3]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4777 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 2177 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("<Name> lparen <Error> rparen");
}
#line 4788 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 2183 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("read lparen rparen");
  // Just integer type
  Type* t=new Type();
  t->withBaseTypeString("int")->
    withDimension(0);
  (yyval.pnode)->setType(t);
}
#line 4802 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 2192 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("read <Error> rparen");
}
#line 4813 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 2198 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("read lparen <Error>");
}
#line 4824 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 2204 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<NewExp>");
  // Just the type of the newexp itself
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="newexp";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[0]).first_line;
    (yyval.pnode)->col=(yylsp[0]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4842 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 2217 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("plus <Exp>");
  // Expression needs integer type
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="unary";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[0]).first_line;
    (yyval.pnode)->col=(yylsp[0]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4860 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 2230 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("plus <Error>");
}
#line 4871 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 2236 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("minus <Exp>");
  // Expression needs integer type
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="unary";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[0]).first_line;
    (yyval.pnode)->col=(yylsp[0]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4889 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 2249 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("minus <Error>");
}
#line 4900 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 2255 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("not <Exp>");
  // Expression needs integer type
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="unary";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[0]).first_line;
    (yyval.pnode)->col=(yylsp[0]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4918 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 2268 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("not <Error>");
}
#line 4929 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 2274 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> eq <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="eq";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4946 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 2286 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> eq <Exp>");
}
#line 4957 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 2292 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> ne <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="eq";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 4974 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 2304 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> ne <Exp>");
}
#line 4985 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 2310 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> le <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5002 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 2322 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> le <Exp>");
}
#line 5013 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 2328 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> ge <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5030 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 2340 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> ge <Exp>");
}
#line 5041 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 2346 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> lt <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5058 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 2358 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> lt <Exp>");
}
#line 5069 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 2364 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> gt <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5086 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 2376 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> gt <Exp>");
}
#line 5097 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 2382 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> plus <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5114 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 2394 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> plus <Exp>");
}
#line 5125 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 2400 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> minus <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5142 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 2412 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> minus <Exp>");
}
#line 5153 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 2418 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> or <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5170 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 2430 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> or <Exp>");
}
#line 5181 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 2436 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> times <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5198 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 2448 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> times <Exp>");
}
#line 5209 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 2454 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> div <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5226 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 2466 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> div <Exp>");
}
#line 5237 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 2472 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> mod <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5254 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 2484 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> mod <Exp>");
}
#line 5265 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 2490 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> and <Exp>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="arithmetic";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5282 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 2502 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Error> and <Exp>");
}
#line 5293 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 2508 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lparen <Exp> rparen");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="simple";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-1]).first_line;
    (yyval.pnode)->col=(yylsp[-1]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5310 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 2520 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("lparen <Error> rparen");
}
#line 5321 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 2526 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("lparen <Exp> <Error>");
}
#line 5332 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 2535 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("new identifier lparen <ArgList> rparen");
  // Gotta make sure the call is valid
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="id_arglist";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-4]).first_line;
    (yyval.pnode)->col=(yylsp[-4]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5350 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 2548 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("new <Error> lparen <ArgList> rparen");
}
#line 5361 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 2554 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("new identifier <Error> <ArgList> rparen");
}
#line 5372 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 2560 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("new identifier lparen <Error> rparen");
}
#line 5383 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 2566 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("new <SimpleType> <BracketExps> <MultiBrackets>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="st_bexp_bracks";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-4]).first_line;
    (yyval.pnode)->col=(yylsp[-4]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5400 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 2578 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-3]).first_column)->withLineNumber((yylsp[-3]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("new <Error> <BracketExps> <MultiBrackets>");
}
#line 5411 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 2584 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-3].pnode));
  (yyval.pnode)->setVal("new <SimpleType> <Error> <MultiBrackets>");
}
#line 5422 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 2590 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("new identifier <BracketExps> <MultiBrackets>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="id_bexp_bracks";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-4]).first_line;
    (yyval.pnode)->col=(yylsp[-4]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5439 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 2602 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new <SimpleType> <BracketExps>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="st_bexp";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5456 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 2614 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("new <Error> <BracketExps>");
}
#line 5467 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 2620 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new identifier <BracketExps>");
  if (!cur->getDeleteOnResolve())
  {
    (yyval.pnode)->checkType="id_bexp";
    (yyval.pnode)->setMySymbolTable(cur);
    (yyval.pnode)->line=(yylsp[-2]).first_line;
    (yyval.pnode)->col=(yylsp[-2]).first_column;
    scanner.addTypeCheck((yyval.pnode));
  }
}
#line 5484 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 2635 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<BracketExp>");
  (yyval.pnode)->line=(yylsp[0]).first_line;
  (yyval.pnode)->col=(yylsp[0]).first_column;
}
#line 5495 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 2641 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<BracketExps> <BracketExp>");
  (yyval.pnode)->line=(yylsp[-1]).first_line;
  (yyval.pnode)->col=(yylsp[-1]).first_column;
}
#line 5506 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 2650 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrack <Exp> rbrack");
  (yyval.pnode)->line=(yylsp[-1]).first_line;
  (yyval.pnode)->col=(yylsp[-1]).first_column;
}
#line 5517 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 2656 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BracketExpNode();
  (yyval.pnode)->setVal("lbrack <Error> rbrack");
  (yyval.pnode)->line=(yylsp[-1]).first_line;
  (yyval.pnode)->col=(yylsp[-1]).first_column;
}
#line 5530 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 2664 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BracketExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrack <Exp> <Error>");
  (yyval.pnode)->line=(yylsp[-2]).first_line;
  (yyval.pnode)->col=(yylsp[-2]).first_column;
}
#line 5543 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 2675 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MultibracketNode();
  (yyval.pnode)->setVal("lbrack rbrack");
  ((MultibracketNode*)(yyval.pnode))->setDimension(1);
}
#line 5553 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 2680 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MultibracketNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Multibrackets> lbrack rbrack");
  ((MultibracketNode*)(yyval.pnode))->
    setDimension(((MultibracketNode*)(yyvsp[-2].pnode))->getDimension()+1);
}
#line 5564 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 2686 "program6.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MultibracketNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Multibrackets> lbrack <Error>");
}
#line 5575 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 2695 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new IdBrackNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("identifier");
}
#line 5584 "program6.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 2699 "program6.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new IdBrackNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("identifier <MultiBrackets>");
}
#line 5593 "program6.tab.cpp" /* yacc.c:1646  */
    break;


#line 5597 "program6.tab.cpp" /* yacc.c:1646  */
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
#line 2706 "program6.ypp" /* yacc.c:1906  */

void yyerror(char const *s) 
{
  // Shut up Bison let me do the talking (please and thank you)
  err->withDesc(s);
} 
