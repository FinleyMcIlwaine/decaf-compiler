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
#line 9 "program3.ypp" /* yacc.c:339  */

#include <iostream>
#include "Error.hpp"
#include "Node.hpp"
#include "MyScanner.hpp"

using std::cout;
using std::endl;
using std::cerr;

extern Node *tree;
extern MyScanner scanner;
Error* err=new Error();

#define yylex() scanner.yylex()
#define YYERROR_VERBOSE 1

void yyerror(const char *);

#line 86 "program3.tab.cpp" /* yacc.c:339  */

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
   by #include "program3.tab.hpp".  */
#ifndef YY_YY_PROGRAM3_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM3_TAB_HPP_INCLUDED
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
    THIS = 258,
    ID = 259,
    DOT = 260,
    LBRACK = 261,
    RBRACK = 262,
    NUMBER = 263,
    INT = 264,
    NEW = 265,
    LPAREN = 266,
    RPAREN = 267,
    READ = 268,
    NULLT = 269,
    PLUS = 270,
    MINUS = 271,
    OR = 272,
    TIMES = 273,
    DIV = 274,
    MOD = 275,
    AND = 276,
    EQ = 277,
    NE = 278,
    GE = 279,
    LE = 280,
    GT = 281,
    LT = 282,
    NOT = 283,
    SEMI = 284,
    MIN = 285,
    UOP = 286,
    BRACK = 287,
    NAME_BRACK = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 34 "program3.ypp" /* yacc.c:355  */

  Node *pnode;

#line 164 "program3.tab.cpp" /* yacc.c:355  */
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

#endif /* !YY_YY_PROGRAM3_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 195 "program3.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   493

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,   100,   104,   111,   115,   119,   125,   129,
     139,   143,   149,   155,   161,   165,   171,   175,   181,   185,
     194,   198,   204,   208,   212,   216,   222,   228,   234,   238,
     242,   248,   252,   259,   263,   269,   273,   279,   283,   289,
     293,   299,   303,   309,   313,   319,   323,   331,   335,   341,
     345,   351,   355,   361,   365,   371,   375,   381,   385,   393,
     397,   403,   407,   413,   417,   426,   430,   436,   442,   448,
     452,   456,   460,   466,   470,   474,   483,   490,   497,   501,
     508,   512,   518,   527,   531,   535,   544,   548,   552,   556,
     562,   566,   572
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "THIS", "ID", "DOT", "LBRACK", "RBRACK",
  "NUMBER", "INT", "NEW", "LPAREN", "RPAREN", "READ", "NULLT", "PLUS",
  "MINUS", "OR", "TIMES", "DIV", "MOD", "AND", "EQ", "NE", "GE", "LE",
  "GT", "LT", "NOT", "SEMI", "MIN", "UOP", "BRACK", "NAME_BRACK",
  "$accept", "input", "program", "elements", "vardec", "exp", "newexp",
  "type", "simpletype", "bracketexps", "bracketexp", "multibrackets",
  "name", YY_NULLPTR
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
     285,   286,   287,   288
};
# endif

#define YYPACT_NINF -24

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-24)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     111,     9,   -24,    26,    12,   -24,   -24,    36,   156,    17,
     -24,   172,   188,   204,   -24,     2,    68,   -24,   -24,    84,
     -24,    38,   -24,    81,   220,     5,    25,   -24,     0,   140,
      25,    69,    55,    35,    15,    25,    82,    25,   460,    31,
       7,     9,   -24,     9,   -24,     9,   -24,   -24,   -24,   -24,
     236,   252,   268,   284,   300,   316,   332,   348,   364,   380,
     396,   412,   428,   -24,    51,     4,    88,   157,   141,    11,
      25,   441,   444,   -24,   -24,   -24,   -24,   441,   -24,    61,
      62,    91,   -24,   104,   112,   126,    13,   112,   112,   -24,
     -24,   -24,   -24,   -24,     9,   110,     9,   110,     9,   110,
       9,   466,     9,   466,     9,   466,     9,   466,     9,   -24,
       9,   -24,     9,   -24,     9,   -24,     9,   -24,     9,   -24,
     -24,   -24,   -24,   -24,    94,   120,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   146,   -24,   -24,
     -24,   146,   146,   -24,   -24
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,    86,    87,     0,    22,    77,     0,     0,     0,
      23,     0,     0,     0,     8,     0,     0,     3,     5,     0,
      28,     0,    76,    20,     0,     0,    91,    78,     0,     0,
      92,     0,     0,     0,     0,    69,     0,    87,     0,     0,
       0,    62,    61,    60,    59,    64,    63,     1,     4,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,    12,     0,     0,     0,     0,     0,
      90,     0,     0,    27,    79,    15,    14,    85,    83,     0,
       0,     0,    21,     0,    72,     0,     0,    71,    70,    30,
      29,    26,    25,    24,    34,    33,    36,    35,    38,    37,
      40,    39,    42,    41,    44,    43,    46,    45,    48,    47,
      50,    49,    52,    51,    54,    53,    56,    55,    58,    57,
      11,    13,    10,    85,     0,     0,    89,    88,    32,    31,
      81,    82,    80,    19,    18,    84,    66,    75,    67,    68,
      65,    74,    73,    17,    16
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -24,   -24,   -24,   149,   -24,    -2,   -24,   -24,   167,     1,
     -23,   -21,   -24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    26,
      27,    31,    23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    75,    47,    74,    30,   121,    38,    74,    92,    42,
      44,    46,   128,    32,   139,    24,    85,    73,    39,    93,
      25,    24,    72,   129,    70,   140,    86,    72,    40,    76,
      28,    24,    29,   122,    84,    87,    88,    33,    30,    64,
      34,    24,    65,    91,    66,     6,    83,    74,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,    74,    82,   137,    74,    74,   141,   142,    -2,     1,
      79,     2,     3,    80,     4,    81,     5,     6,     7,     8,
     120,     9,    10,    11,    12,    49,    68,    24,    24,   123,
     133,   134,    69,    25,    89,    78,    13,    14,   135,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     1,    63,     2,     3,   136,     4,    29,     5,
       6,     7,     8,   143,     9,    10,    11,    12,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,   138,    13,
      14,    77,   126,     2,    37,   127,     4,    78,     5,   144,
       7,     8,    81,     9,    10,    11,    12,    36,   124,     2,
      37,   125,     4,    81,     5,    48,     7,     8,    13,     9,
      10,    11,    12,    41,    35,     2,    37,     0,     4,     0,
       5,     0,     7,     8,    13,     9,    10,    11,    12,    43,
       0,     2,    37,     0,     4,     0,     5,     0,     7,     8,
      13,     9,    10,    11,    12,    45,     0,     2,    37,     0,
       4,     0,     5,     0,     7,     8,    13,     9,    10,    11,
      12,    71,     0,     2,    37,     0,     4,     0,     5,     0,
       7,     8,    13,     9,    10,    11,    12,    94,     0,     2,
      37,     0,     4,     0,     5,     0,     7,     8,    13,     9,
      10,    11,    12,    96,     0,     2,    37,     0,     4,     0,
       5,     0,     7,     8,    13,     9,    10,    11,    12,    98,
       0,     2,    37,     0,     4,     0,     5,     0,     7,     8,
      13,     9,    10,    11,    12,   100,     0,     2,    37,     0,
       4,     0,     5,     0,     7,     8,    13,     9,    10,    11,
      12,   102,     0,     2,    37,     0,     4,     0,     5,     0,
       7,     8,    13,     9,    10,    11,    12,   104,     0,     2,
      37,     0,     4,     0,     5,     0,     7,     8,    13,     9,
      10,    11,    12,   106,     0,     2,    37,     0,     4,     0,
       5,     0,     7,     8,    13,     9,    10,    11,    12,   108,
       0,     2,    37,     0,     4,     0,     5,     0,     7,     8,
      13,     9,    10,    11,    12,   110,     0,     2,    37,     0,
       4,     0,     5,     0,     7,     8,    13,     9,    10,    11,
      12,   112,     0,     2,    37,     0,     4,     0,     5,     0,
       7,     8,    13,     9,    10,    11,    12,   114,     0,     2,
      37,     0,     4,     0,     5,     0,     7,     8,    13,     9,
      10,    11,    12,   116,     0,     2,    37,     0,     4,     0,
       5,     0,     7,     8,    13,     9,    10,    11,    12,   118,
       0,     2,    37,     0,     4,     0,     5,     0,     7,     8,
      13,     9,    10,    11,    12,   131,     0,    24,   130,     0,
       0,   132,    25,     0,     0,     0,    13,     0,     0,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    90,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    57,    58,
      59,    60,    61,    62
};

static const yytype_int8 yycheck[] =
{
      21,     1,     0,    26,     3,     1,     8,    30,     1,    11,
      12,    13,     1,     1,     1,     6,     1,    12,     1,    12,
      11,     6,    24,    12,    23,    12,    11,    29,    11,    29,
       4,     6,     6,    29,    33,    34,    35,     1,    37,     1,
       4,     6,     4,    12,     6,     9,    11,    70,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    84,     7,    84,    87,    88,    87,    88,     0,     1,
       1,     3,     4,     4,     6,     6,     8,     9,    10,    11,
      29,    13,    14,    15,    16,     1,     5,     6,     6,     1,
      29,    29,    11,    11,    12,     7,    28,    29,     7,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     1,    29,     3,     4,    12,     6,     6,     8,
       9,    10,    11,    29,    13,    14,    15,    16,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    12,    28,
      29,     1,     1,     3,     4,     4,     6,     7,     8,    29,
      10,    11,     6,    13,    14,    15,    16,     1,     1,     3,
       4,     4,     6,     6,     8,    16,    10,    11,    28,    13,
      14,    15,    16,     1,     7,     3,     4,    -1,     6,    -1,
       8,    -1,    10,    11,    28,    13,    14,    15,    16,     1,
      -1,     3,     4,    -1,     6,    -1,     8,    -1,    10,    11,
      28,    13,    14,    15,    16,     1,    -1,     3,     4,    -1,
       6,    -1,     8,    -1,    10,    11,    28,    13,    14,    15,
      16,     1,    -1,     3,     4,    -1,     6,    -1,     8,    -1,
      10,    11,    28,    13,    14,    15,    16,     1,    -1,     3,
       4,    -1,     6,    -1,     8,    -1,    10,    11,    28,    13,
      14,    15,    16,     1,    -1,     3,     4,    -1,     6,    -1,
       8,    -1,    10,    11,    28,    13,    14,    15,    16,     1,
      -1,     3,     4,    -1,     6,    -1,     8,    -1,    10,    11,
      28,    13,    14,    15,    16,     1,    -1,     3,     4,    -1,
       6,    -1,     8,    -1,    10,    11,    28,    13,    14,    15,
      16,     1,    -1,     3,     4,    -1,     6,    -1,     8,    -1,
      10,    11,    28,    13,    14,    15,    16,     1,    -1,     3,
       4,    -1,     6,    -1,     8,    -1,    10,    11,    28,    13,
      14,    15,    16,     1,    -1,     3,     4,    -1,     6,    -1,
       8,    -1,    10,    11,    28,    13,    14,    15,    16,     1,
      -1,     3,     4,    -1,     6,    -1,     8,    -1,    10,    11,
      28,    13,    14,    15,    16,     1,    -1,     3,     4,    -1,
       6,    -1,     8,    -1,    10,    11,    28,    13,    14,    15,
      16,     1,    -1,     3,     4,    -1,     6,    -1,     8,    -1,
      10,    11,    28,    13,    14,    15,    16,     1,    -1,     3,
       4,    -1,     6,    -1,     8,    -1,    10,    11,    28,    13,
      14,    15,    16,     1,    -1,     3,     4,    -1,     6,    -1,
       8,    -1,    10,    11,    28,    13,    14,    15,    16,     1,
      -1,     3,     4,    -1,     6,    -1,     8,    -1,    10,    11,
      28,    13,    14,    15,    16,     1,    -1,     6,     7,    -1,
      -1,     7,    11,    -1,    -1,    -1,    28,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    12,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    22,    23,
      24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     6,     8,     9,    10,    11,    13,
      14,    15,    16,    28,    29,    35,    36,    37,    38,    39,
      40,    41,    42,    46,     6,    11,    43,    44,     4,     6,
      43,    45,     1,     1,     4,    42,     1,     4,    39,     1,
      11,     1,    39,     1,    39,     1,    39,     0,    37,     1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    29,     1,     4,     6,    45,     5,    11,
      43,     1,    39,    12,    44,     1,    29,     1,     7,     1,
       4,     6,     7,    11,    43,     1,    11,    43,    43,    12,
      12,    12,     1,    12,     1,    39,     1,    39,     1,    39,
       1,    39,     1,    39,     1,    39,     1,    39,     1,    39,
       1,    39,     1,    39,     1,    39,     1,    39,     1,    39,
      29,     1,    29,     1,     1,     4,     1,     4,     1,    12,
       7,     1,     7,    29,    29,     7,    12,    45,    12,     1,
      12,    45,    45,    29,    29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    37,    37,    37,
      38,    38,    38,    38,    38,    38,    38,    38,    38,    38,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    40,    40,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    41,    42,    43,    43,
      44,    44,    44,    45,    45,    45,    46,    46,    46,    46,
      46,    46,    46
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     1,     1,
       3,     3,     2,     3,     3,     3,     4,     4,     4,     4,
       1,     3,     1,     1,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     4,     4,     4,     4,     2,
       3,     3,     3,     4,     4,     4,     1,     1,     1,     2,
       3,     3,     3,     2,     3,     2,     1,     1,     3,     3,
       2,     2,     2
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
#line 94 "program3.ypp" /* yacc.c:1646  */
    {
  tree=new Node((yyvsp[0].pnode));
}
#line 1537 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 100 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ProgramNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<elements>");
}
#line 1546 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 104 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ProgramNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<program> <elements>");
}
#line 1555 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 111 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ElementsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<vardec>");
}
#line 1564 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 115 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ElementsNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<exp> SEMI");
}
#line 1573 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 119 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ElementsNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<exp> <error>");
}
#line 1584 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 125 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ElementsNode();
  (yyval.pnode)->setVal("SEMI");
}
#line 1593 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 129 "program3.ypp" /* yacc.c:1646  */
    {
  cout << "MATCH";
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ElementsNode();
  (yyval.pnode)->setVal("<error>");
}
#line 1605 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 139 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<type> ID SEMI");
}
#line 1614 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 143 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<type> <error> SEMI");
}
#line 1625 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 149 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<type> <error>");
}
#line 1636 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 155 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<type> ID <error>");
}
#line 1647 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 161 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("ID ID SEMI");
}
#line 1656 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 165 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("ID ID <error>");
}
#line 1667 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 171 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<type> <multibrackets> ID SEMI");
}
#line 1676 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 175 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<type> <multibrackets> <error> SEMI");
}
#line 1687 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 181 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("ID <multibrackets> ID SEMI");
}
#line 1696 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 185 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new VarDecNode((yyvsp[-3].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("ID <multibrackets> <error> SEMI");
}
#line 1707 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 194 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<name>");
}
#line 1716 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 198 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("LBRACK <error> RBRACK");
}
#line 1727 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 204 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("NUMBER");
}
#line 1736 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 208 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("NULL");
}
#line 1745 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 212 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("READ LPAREN RPAREN");
}
#line 1754 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 216 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("READ LPAREN <error>");
}
#line 1765 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 222 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("READ <error> RPAREN");
}
#line 1776 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 228 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("<error> LPAREN RPAREN");
}
#line 1787 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 234 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<newexp>");
}
#line 1796 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 238 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("LPAREN <exp> RPAREN");
}
#line 1805 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 242 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("LPAREN <error> RPAREN");
}
#line 1816 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 248 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<name> LPAREN RPAREN");
}
#line 1825 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 252 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<name> LPAREN <error>");
}
#line 1836 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 259 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> PLUS <exp>");
}
#line 1845 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 263 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> PLUS <error>");
}
#line 1856 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 269 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> MINUS <exp>");
}
#line 1865 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 273 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> MINUS <error>");
}
#line 1876 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 279 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> OR <exp>");
}
#line 1885 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 283 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> OR <error>");
}
#line 1896 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 289 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> TIMES <exp>");
}
#line 1905 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 293 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> TIMES <error>");
}
#line 1916 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 299 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> DIV <exp>");
}
#line 1925 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 303 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> DIV <error>");
}
#line 1936 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 309 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> MOD <exp>");
}
#line 1945 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 313 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> MOD <error>");
}
#line 1956 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 319 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> AND <exp>");
}
#line 1965 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 323 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> AND <error>");
}
#line 1976 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 331 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> EQ <exp>");
}
#line 1985 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 335 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> EQ <error>");
}
#line 1996 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 341 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> NE <exp>");
}
#line 2005 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 345 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> NE <error>");
}
#line 2016 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 351 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> GE <exp>");
}
#line 2025 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 355 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> GE <error>");
}
#line 2036 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 361 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> LE <exp>");
}
#line 2045 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 365 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> LE <error>");
}
#line 2056 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 371 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> GT <exp>");
}
#line 2065 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 375 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> GT <error>");
}
#line 2076 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 381 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<exp> LT <exp>");
}
#line 2085 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 385 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<exp> LT <error>");
}
#line 2096 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 393 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("MINUS <exp>");
}
#line 2105 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 397 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("MINUS <error>");
}
#line 2116 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 403 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("PLUS <exp>");
}
#line 2125 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 407 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("PLUS <error>");
}
#line 2136 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 413 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("NOT <exp>");
}
#line 2145 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 417 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("NOT <error>");
}
#line 2156 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 426 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("NEW ID LPAREN RPAREN");
}
#line 2165 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 430 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode();
  (yyval.pnode)->setVal("NEW <error> LPAREN RPAREN");
}
#line 2176 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 436 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("NEW ID <error> RPAREN");
}
#line 2187 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 442 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("NEW ID LPAREN <error>");
}
#line 2198 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 448 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("NEW <simpletype>");
}
#line 2207 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 452 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("NEW <simpletype> <bracketexps>");
}
#line 2216 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 456 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("NEW ID <bracketexps>");
}
#line 2225 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 460 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("NEW <error> <bracketexps>");
}
#line 2236 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 466 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("NEW <simpletype> <bracketexps> <multibrackets>");
}
#line 2245 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 470 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("NEW <simpletype> <bracketexps> <multibrackets>");
}
#line 2254 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 474 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("NEW <error> <bracketexps> <multibrackets>");
}
#line 2265 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 483 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new TypeNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<simpletype>");
}
#line 2274 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 490 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new SimpleTypeNode();
  (yyval.pnode)->setVal("INT");
}
#line 2283 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 497 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<bracketexp>");
}
#line 2292 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 501 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<bracketexps> <bracketexp>");
}
#line 2301 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 508 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("LBRACK <exp> RBRACK");
}
#line 2310 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 512 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BracketExpNode();
  (yyval.pnode)->setVal("LBRACK <error> RBRACK");
}
#line 2321 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 518 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new BracketExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("LBRACK <exp> <error>");
}
#line 2332 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 527 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MultibracketNode();
  (yyval.pnode)->setVal("LBRACK RBRACK");
}
#line 2341 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 531 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MultibracketNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<multibrackets> LBRACK RBRACK");
}
#line 2350 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 535 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new MultibracketNode();
  (yyval.pnode)->setVal("LBRACK <error>");
}
#line 2361 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 544 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode(); 
  (yyval.pnode)->setVal("THIS");
}
#line 2370 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 548 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("ID");
}
#line 2379 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 552 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<name> DOT ID");
}
#line 2388 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 556 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NameNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<name> DOT <error>");
}
#line 2399 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 562 "program3.ypp" /* yacc.c:1646  */
    { 
  (yyval.pnode)=new NameNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<name> <bracketexps>");
}
#line 2408 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 566 "program3.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new NameNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<error> <bracketexps>");
}
#line 2419 "program3.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 572 "program3.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("ID <bracketexps>");
}
#line 2428 "program3.tab.cpp" /* yacc.c:1646  */
    break;


#line 2432 "program3.tab.cpp" /* yacc.c:1646  */
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
#line 579 "program3.ypp" /* yacc.c:1906  */

void yyerror(char const *s) 
{
  // Shut up Bison let me do the talking (please and thank you)
  err->withDesc(s);
} 