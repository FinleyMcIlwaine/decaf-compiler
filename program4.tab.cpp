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
#line 9 "program4.ypp" /* yacc.c:339  */

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

#line 86 "program4.tab.cpp" /* yacc.c:339  */

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
   by #include "program4.tab.hpp".  */
#ifndef YY_YY_PROGRAM4_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM4_TAB_HPP_INCLUDED
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
    COMMA = 273,
    NUMBER = 274,
    ID = 275,
    RBRACK = 276,
    LPAREN = 277,
    RPAREN = 278,
    LBRACE = 279,
    RBRACE = 280,
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
    LBRACK = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 34 "program4.ypp" /* yacc.c:355  */

  Node *pnode;

#line 172 "program4.tab.cpp" /* yacc.c:355  */
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

#endif /* !YY_YY_PROGRAM4_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 203 "program4.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   404

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   108,   112,   116,   125,   129,   135,   141,
     150,   154,   158,   162,   166,   170,   174,   178,   185,   189,
     195,   199,   206,   210,   217,   224,   228,   234,   241,   245,
     252,   256,   260,   267,   271,   275,   282,   286,   293,   297,
     301,   305,   312,   316,   323,   327,   334,   338,   345,   349,
     353,   357,   361,   365,   369,   373,   380,   384,   388,   392,
     399,   403,   407,   414,   418,   425,   429,   436,   440,   444,
     448,   452,   456,   460,   464,   468,   472,   478,   482,   486,
     490,   494,   498,   502,   506,   510,   514,   518,   522,   526,
     530,   537,   541,   545,   549,   553,   557,   561,   568,   572,
     579,   586,   590,   595,   599
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "CLASS", "RETURN", "WHILE",
  "PRINT", "SEMI", "ELSE", "IF", "ASSIGN", "READ", "NULLT", "DOT", "THIS",
  "INT", "NEW", "COMMA", "NUMBER", "ID", "RBRACK", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "EQ", "NE", "LE", "GE", "LT", "GT", "PLUS", "MINUS",
  "OR", "TIMES", "DIV", "MOD", "AND", "NOT", "UNARYOP", "LBRACK",
  "$accept", "input", "program", "classdec", "classbody", "vardecs",
  "vardec", "type", "simpletype", "constructordecs", "constructordec",
  "methoddecs", "methoddec", "parameterlist", "parameter", "block",
  "localvardecs", "localvardec", "stmts", "stmt", "name", "arglist",
  "conditionalstmt", "optionalexp", "exp", "newexp", "bracketexps",
  "bracketexp", "multibrackets", "idbrack", YY_NULLPTR
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
     295,   296
};
# endif

#define YYPACT_NINF -125

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-125)))

#define YYTABLE_NINF -104

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,    -7,     4,    49,   209,  -125,    33,    33,     6,  -125,
      -7,  -125,    31,  -125,  -125,  -125,  -125,    70,  -125,    -1,
    -125,    71,  -125,    -2,  -125,    77,  -125,    97,  -125,    79,
     108,    61,    84,    85,  -125,  -125,   115,   147,    64,   137,
    -125,    12,  -125,   205,   149,   135,  -125,  -125,    99,    61,
      30,   119,  -125,   158,  -125,   177,  -125,   212,  -125,  -125,
      61,  -125,   178,  -125,   180,  -125,    61,   126,  -125,    61,
     146,  -125,  -125,  -125,   128,   129,   146,  -125,   228,  -125,
     146,   146,  -125,   207,   185,   189,  -125,   190,  -125,    32,
    -125,    35,  -125,   249,  -125,   270,  -125,    -3,  -125,   160,
    -125,  -125,   192,  -125,   104,  -125,  -125,   207,   207,   207,
     142,   -10,   171,   359,  -125,   207,   207,   207,   210,  -125,
    -125,   276,  -125,  -125,   207,   211,   207,   207,  -125,   233,
     219,    60,   204,   314,  -125,  -125,  -125,  -125,   207,  -125,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   330,   130,   359,   346,  -125,  -125,   157,
    -125,   148,   298,  -125,  -125,   207,   206,  -125,   206,  -125,
     150,   366,   366,   366,   366,   366,   366,   225,   225,   225,
    -125,  -125,  -125,  -125,   297,   207,   241,   297,  -125,   242,
    -125,   159,   184,  -125,    85,    85,  -125,  -125,   359,  -125,
     257,  -125,  -125,   297,  -125
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     0,     4,     0,     0,     0,     1,
       0,     3,     0,     7,     8,     9,     6,     0,    24,   103,
      17,     0,    19,     0,    22,     0,    26,     0,    29,     0,
       0,    35,     0,   104,    13,    18,     0,     0,     0,     0,
      15,     0,    25,     0,     0,   103,    16,    28,     0,    35,
       0,     0,    33,     0,   101,     0,    11,     0,    12,    20,
      35,    23,     0,    14,     0,    21,    35,     0,    36,     0,
       0,    37,   102,    10,     0,     0,     0,    34,     0,    27,
       0,     0,    31,    66,     0,     0,    48,     0,    56,    57,
      41,     0,    55,     0,    43,     0,    47,     0,    52,     0,
      30,    32,     0,    69,     0,    68,    57,     0,     0,     0,
       0,    67,     0,    65,    72,     0,    62,     0,     0,    39,
      42,     0,    40,    46,     0,     0,    62,     0,    59,     0,
       0,    97,    96,     0,    73,    74,    76,    75,    62,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,    44,    38,     0,
      58,     0,     0,    45,    71,    62,    95,    98,    94,    90,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,    49,     0,
     100,     0,     0,    99,    93,    92,    70,    53,    61,    51,
      63,    50,    91,     0,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,   247,   107,  -125,   237,    63,   163,   250,
      53,    83,   -21,   -12,   199,    58,  -125,   179,   186,   -92,
     -78,  -124,  -125,  -125,   -82,  -125,   138,  -122,   -83,    67
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,    13,    21,    22,    41,    24,    25,
      26,    27,    28,    51,    52,    92,    93,    94,    95,    96,
     111,   154,    98,   112,   155,   114,   166,   128,    33,    44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      97,   113,   161,   123,   125,     7,    47,    15,   124,   167,
     167,   125,   138,     6,   170,    97,    47,    97,    38,   126,
       1,    31,    47,     2,     8,   133,   134,   135,   137,   123,
      12,   127,    62,   153,    17,   156,    47,    67,   127,    39,
      32,   191,   159,    97,   193,   162,   193,    18,    74,     9,
      68,    19,  -103,    39,    75,   118,    20,    12,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,    39,    59,    32,    17,    23,    39,    18,    42,    29,
      17,    45,   165,   194,    23,   195,    60,    18,    29,    42,
      30,    19,   197,    18,    50,   200,    34,    19,    53,    48,
      17,   127,    40,   198,    37,    54,    97,    65,    43,    97,
     162,   204,    50,    18,    14,    16,    53,    45,    17,    57,
      18,    66,    46,    50,   131,    97,    55,    53,    79,    50,
      49,    18,    50,    53,    82,    19,    53,    69,   100,   101,
      56,    91,    70,   136,    69,    99,    69,    69,   185,    76,
      17,    80,    81,   186,   102,   103,    91,    88,    61,   104,
      99,   105,   106,    18,   107,   188,   185,    45,   185,    64,
      78,   189,    58,   196,   108,   109,    32,   185,    71,   139,
     129,   110,   202,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   102,   103,    72,    88,
      60,   104,    66,   105,   106,    54,   107,   115,    17,    -2,
      10,   116,   117,     2,   130,    17,   108,   109,   157,   102,
     103,    18,    88,   110,   104,    45,   105,   106,    18,   107,
      63,   160,    45,    83,    84,    85,    86,    73,    87,   108,
     109,   163,   164,    88,    18,   127,   110,   192,    89,   199,
     201,    11,    78,    90,    83,    84,    85,    86,    35,    87,
     149,   150,   151,   152,    88,    18,   203,   132,    77,    89,
     168,    36,   120,    78,   119,    83,    84,    85,    86,   121,
      87,    83,    84,    85,    86,    88,    87,     0,     0,     0,
     106,    88,     0,     0,    78,   122,   106,     0,     0,     0,
      78,   158,    83,    84,    85,    86,     0,    87,     0,     0,
       0,     0,    88,     0,     0,     0,     0,   106,     0,   190,
       0,    78,     0,     0,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   169,     0,     0,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   184,     0,     0,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   187,
       0,     0,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   146,   147,
     148,   149,   150,   151,   152
};

static const yytype_int16 yycheck[] =
{
      78,    83,   126,    95,    14,     1,    27,     1,    11,   131,
     132,    14,    22,    20,   138,    93,    37,    95,    20,    22,
       1,    22,    43,     4,    20,   107,   108,   109,   110,   121,
      24,    41,    20,   115,     3,   117,    57,    49,    41,    41,
      41,   165,   124,   121,   166,   127,   168,    16,    60,     0,
      20,    20,    20,    41,    66,    20,    25,    24,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    41,     8,    41,     3,    12,    41,    16,    25,    12,
       3,    20,    22,   166,    21,   168,    22,    16,    21,    36,
      20,    20,   184,    16,    31,   187,    25,    20,    31,    20,
       3,    41,    25,   185,    21,    21,   184,     8,    25,   187,
     192,   203,    49,    16,     7,     8,    49,    20,     3,    36,
      16,    22,    25,    60,    20,   203,    41,    60,    70,    66,
      22,    16,    69,    66,    76,    20,    69,    18,    80,    81,
      25,    78,    23,     1,    18,    78,    18,    18,    18,    23,
       3,    23,    23,    23,    12,    13,    93,    15,    21,    17,
      93,    19,    20,    16,    22,     8,    18,    20,    18,    20,
      24,    23,    25,    23,    32,    33,    41,    18,    20,     8,
      20,    39,    23,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    12,    13,    21,    15,
      22,    17,    22,    19,    20,    21,    22,    22,     3,     0,
       1,    22,    22,     4,    22,     3,    32,    33,     8,    12,
      13,    16,    15,    39,    17,    20,    19,    20,    16,    22,
      25,    20,    20,     5,     6,     7,     8,    25,    10,    32,
      33,     8,    23,    15,    16,    41,    39,    41,    20,     8,
       8,     4,    24,    25,     5,     6,     7,     8,    21,    10,
      35,    36,    37,    38,    15,    16,     9,   104,    69,    20,
     132,    21,    93,    24,    25,     5,     6,     7,     8,    93,
      10,     5,     6,     7,     8,    15,    10,    -1,    -1,    -1,
      20,    15,    -1,    -1,    24,    25,    20,    -1,    -1,    -1,
      24,    25,     5,     6,     7,     8,    -1,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    20,    -1,    21,
      -1,    24,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    23,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    23,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    32,    33,
      34,    35,    36,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    43,    44,    45,    20,     1,    20,     0,
       1,    45,    24,    46,    46,     1,    46,     3,    16,    20,
      25,    47,    48,    49,    50,    51,    52,    53,    54,    71,
      20,    22,    41,    70,    25,    48,    51,    53,    20,    41,
      25,    49,    52,    53,    71,    20,    25,    54,    20,    22,
      49,    55,    56,    71,    21,    41,    25,    53,    25,     8,
      22,    21,    20,    25,    20,     8,    22,    55,    20,    18,
      23,    20,    21,    25,    55,    55,    23,    56,    24,    57,
      23,    23,    57,     5,     6,     7,     8,    10,    15,    20,
      25,    49,    57,    58,    59,    60,    61,    62,    64,    71,
      57,    57,    12,    13,    17,    19,    20,    22,    32,    33,
      39,    62,    65,    66,    67,    22,    22,    22,    20,    25,
      59,    60,    25,    61,    11,    14,    22,    41,    69,    20,
      22,    20,    50,    66,    66,    66,     1,    66,    22,     8,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    66,    63,    66,    66,     8,    25,    66,
      20,    63,    66,     8,    23,    22,    68,    69,    68,    23,
      63,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    23,    18,    23,    23,     8,    23,
      21,    63,    41,    69,    70,    70,    23,    61,    66,     8,
      61,     8,    23,     9,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    44,    45,    45,    45,    45,
      46,    46,    46,    46,    46,    46,    46,    46,    47,    47,
      48,    48,    49,    49,    50,    51,    51,    52,    53,    53,
      54,    54,    54,    55,    55,    55,    56,    56,    57,    57,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    62,    62,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    68,    68,
      69,    70,    70,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     3,     3,     3,
       5,     4,     4,     3,     4,     3,     3,     2,     2,     1,
       3,     3,     1,     3,     1,     2,     1,     5,     2,     1,
       6,     6,     6,     1,     3,     0,     2,     2,     4,     3,
       3,     2,     2,     1,     3,     3,     2,     1,     1,     4,
       5,     5,     1,     5,     3,     1,     1,     1,     3,     2,
       1,     3,     0,     5,     7,     1,     0,     1,     1,     1,
       4,     3,     1,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     4,     4,     3,     3,     2,     2,     1,     2,
       3,     2,     3,     1,     2
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
#line 102 "program4.ypp" /* yacc.c:1646  */
    {
  tree=new Node((yyvsp[0].pnode));
}
#line 1556 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 108 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ProgramNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Program> <ClassDec>");
}
#line 1565 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 112 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ProgramNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ClassDec>");
}
#line 1574 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 116 "program4.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ProgramNode();
  (yyval.pnode)->setVal("<Error>");
}
#line 1585 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 125 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassDecNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("class identifier <ClassBody>");
}
#line 1594 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 129 "program4.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-2]).first_column)->withLineNumber((yylsp[-2]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassDecNode();
  (yyval.pnode)->setVal("<Error> identifier <ClassBody>");
}
#line 1605 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 135 "program4.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[-1]).first_column)->withLineNumber((yylsp[-1]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassDecNode();
  (yyval.pnode)->setVal("class <Error> <ClassBody>");
}
#line 1616 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 141 "program4.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ClassDecNode();
  (yyval.pnode)->setVal("class identifier <Error>");
}
#line 1627 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 150 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-3].pnode),(yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> <MethodDecs> rbrace");
}
#line 1636 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 154 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <ConstructorDecs> rbrace");
}
#line 1645 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 158 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> <MethodDecs> rbrace");
}
#line 1654 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 162 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <VarDecs> rbrace");
}
#line 1663 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 166 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> <MethodDecs> rbrace");
}
#line 1672 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 170 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <ConstructorDecs> rbrace");
}
#line 1681 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 174 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <MethodDecs> rbrace");
}
#line 1690 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 178 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ClassBodyNode();
  (yyval.pnode)->setVal("lbrace rbrace");
}
#line 1699 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 185 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<VarDecs> <VarDec>");
}
#line 1708 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 189 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<VarDec>");
}
#line 1717 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 195 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier semi");
}
#line 1726 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 199 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new VarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier semi");
}
#line 1735 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 206 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new TypeNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<SimpleType>");
}
#line 1744 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 210 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new TypeNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Type> lbrack rbrack");
}
#line 1753 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 217 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new SimpleTypeNode();
  (yyval.pnode)->setVal("int");
}
#line 1762 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 224 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConstructorDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConstructorDecs> <ConstructorDec>");
}
#line 1771 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 228 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConstructorDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConstructorDec>");
}
#line 1780 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 234 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConstructorDecNode((yyvsp[-4].pnode),(yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("identifier lparen <ParameterList> rparen <Block>");
}
#line 1789 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 241 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<MethodDecs> <MethodDec>");
}
#line 1798 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 245 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<MethodDec>");
}
#line 1807 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 252 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecNode((yyvsp[-5].pnode),(yyvsp[-4].pnode),(yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Type> identifier lparen <ParameterList> rparen <Block>");
}
#line 1816 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 256 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecNode((yyvsp[-4].pnode),(yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("VOID identifier lparen <ParameterList> rparen <Block>");
}
#line 1825 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 260 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MethodDecNode((yyvsp[-4].pnode),(yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier lparen <ParameterList> rparen <Block>");
}
#line 1834 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 267 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterListNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Parameter>");
}
#line 1843 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 271 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterListNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ParameterList> comma <Exp>");
}
#line 1852 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 275 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterListNode();
  (yyval.pnode)->setVal("empty"); /* HOW TO SHOW THIS??? */
}
#line 1861 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 282 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Type> identifier");
}
#line 1870 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 286 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ParameterNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier");
}
#line 1879 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 293 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <LocalVarDecs> <Stmts> rbrace");
}
#line 1888 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 297 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <LocalVarDecs> rbrace");
}
#line 1897 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 301 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrace <Stmts> rbrace");
}
#line 1906 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 305 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BlockNode();
  (yyval.pnode)->setVal("lbrace rbrace");
}
#line 1915 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 312 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<LocalVarDecs> <LocalVarDec>");
}
#line 1924 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 316 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new LocalVarDecsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<LocalVarDec>");
}
#line 1933 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 323 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new LocalVarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Type> identifier semi");
}
#line 1942 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 327 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new LocalVarDecNode((yyvsp[-2].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<IdBrack> identifier semi");
}
#line 1951 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 334 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Stmts> <Stmt>");
}
#line 1960 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 338 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Stmt>");
}
#line 1969 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 345 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode();
  (yyval.pnode)->setVal("semi");
}
#line 1978 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 349 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Name> assign <Exp> semi");
}
#line 1987 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 353 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Name> lparen <ArgList> rparen semi");
}
#line 1996 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 357 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("print lparen <ArgList> rparen semi");
}
#line 2005 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 361 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ConditionalStmt>");
}
#line 2014 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 365 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("while lparen <Exp> rparen <Stmt>");
}
#line 2023 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 369 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("return <OptionalExp> semi");
}
#line 2032 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 373 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new StmtNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Block>");
}
#line 2041 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 380 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode();
  (yyval.pnode)->setVal("this");
}
#line 2050 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 384 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("identifier");
}
#line 2059 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 388 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Name> dot identifier");
}
#line 2068 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 392 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NameNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Name> <BracketExp>");
}
#line 2077 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 399 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ArgListNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp>");
}
#line 2086 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 403 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ArgListNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<ArgList> comma <Exp>");
}
#line 2095 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 407 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ArgListNode();
  (yyval.pnode)->setVal("empty"); /* HOW TO SHOW THIS??? */
}
#line 2104 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 414 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Stmt>");
}
#line 2113 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 418 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ConditionalStmtNode((yyvsp[-4].pnode),(yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("if lparen <Exp> rparen <Stmt> else <Stmt>");
}
#line 2122 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 425 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new OptionalExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp>");
}
#line 2131 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 429 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new OptionalExpNode();
  (yyval.pnode)->setVal("empty");
}
#line 2140 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 436 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Name>");
}
#line 2149 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 440 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("number");
}
#line 2158 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 444 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("null");
}
#line 2167 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 448 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("<Name> lparen <ArgList> rparen");
}
#line 2176 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 452 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("read lparen rparen");
}
#line 2185 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 456 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<NewExp>");
}
#line 2194 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 460 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("plus <Exp>");
}
#line 2203 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 464 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("minus <Exp>");
}
#line 2212 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 468 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("not <Exp>");
}
#line 2221 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 472 "program4.ypp" /* yacc.c:1646  */
    {
  err->withColNumber((yylsp[0]).first_column)->withLineNumber((yylsp[0]).first_line);
  scanner.addError(*err);
  (yyval.pnode)=new ExpNode();
  (yyval.pnode)->setVal("not <Error>");
}
#line 2232 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 478 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> eq <Exp>");
}
#line 2241 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 482 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> ne <Exp>");
}
#line 2250 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 486 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> le <Exp>");
}
#line 2259 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 490 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> ge <Exp>");
}
#line 2268 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 494 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> lt <Exp>");
}
#line 2277 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 498 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> gt <Exp>");
}
#line 2286 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 502 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> plus <Exp>");
}
#line 2295 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 506 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> minus <Exp>");
}
#line 2304 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 510 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> or <Exp>");
}
#line 2313 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 514 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> times <Exp>");
}
#line 2322 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 518 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> div <Exp>");
}
#line 2331 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 522 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> mod <Exp>");
}
#line 2340 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 526 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-2].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<Exp> and <Exp>");
}
#line 2349 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 530 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new ExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lparen <Exp> rparen");
}
#line 2358 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 537 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-3].pnode),(yyvsp[-1].pnode));
  (yyval.pnode)->setVal("new identifier lparen <ArgList> rparen");
}
#line 2367 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 541 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new <SimpleType> <BracketExps> <MultiBrackets>");
}
#line 2376 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 545 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-2].pnode),(yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new identifier <BracketExps> <MultiBrackets>");
}
#line 2385 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 549 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new <SimpleType> <BracketExps>");
}
#line 2394 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 553 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("new identifier <BracketExps>");
}
#line 2403 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 557 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("new <SimpleType>");
}
#line 2412 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 561 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new NewExpNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("new identifier");
}
#line 2421 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 568 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpsNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("<BracketExp>");
}
#line 2430 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 572 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpsNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("<BracketExps> <BracketExp>");
}
#line 2439 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 579 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new BracketExpNode((yyvsp[-1].pnode));
  (yyval.pnode)->setVal("lbrack <Exp> rbrack");
}
#line 2448 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 586 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MultibracketNode();
  (yyval.pnode)->setVal("lbrack rbrack");
}
#line 2457 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 590 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new MultibracketNode((yyvsp[-2].pnode));
  (yyval.pnode)->setVal("<Multibrackets> lbrack rbrack");
}
#line 2466 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 595 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new IdBrackNode((yyvsp[0].pnode));
  (yyval.pnode)->setVal("identifier");
}
#line 2475 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 599 "program4.ypp" /* yacc.c:1646  */
    {
  (yyval.pnode)=new IdBrackNode((yyvsp[-1].pnode),(yyvsp[0].pnode));
  (yyval.pnode)->setVal("identifier <MultiBrackets>");
}
#line 2484 "program4.tab.cpp" /* yacc.c:1646  */
    break;


#line 2488 "program4.tab.cpp" /* yacc.c:1646  */
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
#line 606 "program4.ypp" /* yacc.c:1906  */

void yyerror(char const *s) 
{
  // Shut up Bison let me do the talking (please and thank you)
  err->withDesc(s);
} 
