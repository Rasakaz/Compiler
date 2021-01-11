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
#line 1 "yacc4.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>

	typedef struct node
	{
		char *token;
		struct node *left;
		struct node *right;
	} node;
	
	node* mknode(char *token, node *left, node *right);
	void printtree(node *tree);
	int func(char* a, char* b, char *c);
	void printTabs(int n);

	int level = 0;
	#define YYSTYPE struct node*

#line 87 "y.tab.c" /* yacc.c:339  */

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
    BOOLT = 258,
    CHART = 259,
    INTT = 260,
    REALT = 261,
    STRINGT = 262,
    INTP = 263,
    CHARP = 264,
    REALP = 265,
    IF = 266,
    ELSE = 267,
    WHILE = 268,
    VAR = 269,
    FUNC = 270,
    PROC = 271,
    RETURN = 272,
    NULLL = 273,
    MAIN = 274,
    AND = 275,
    DIVIDE = 276,
    ASIGN = 277,
    COMPARE = 278,
    GREATER = 279,
    GREATEREQUAL = 280,
    LESS = 281,
    LESSEQUAL = 282,
    MINUS = 283,
    NOT = 284,
    NOTEQUAL = 285,
    OR = 286,
    PLUS = 287,
    MULTIPLY = 288,
    ADDRESS = 289,
    DEFERENCE = 290,
    INTEGER = 291,
    REAL = 292,
    STRING = 293,
    CHAR = 294,
    BOOLEANTRUE = 295,
    BOOLEANFALSE = 296,
    IDENTIFIER = 297,
    OBLOCK = 298,
    CBLOCK = 299,
    OLIST = 300,
    CLIST = 301,
    ABSOLUTE = 302,
    OINDEX = 303,
    CINDEX = 304,
    COLONS = 305,
    COMMA = 306,
    ENDLINE = 307
  };
#endif
/* Tokens.  */
#define BOOLT 258
#define CHART 259
#define INTT 260
#define REALT 261
#define STRINGT 262
#define INTP 263
#define CHARP 264
#define REALP 265
#define IF 266
#define ELSE 267
#define WHILE 268
#define VAR 269
#define FUNC 270
#define PROC 271
#define RETURN 272
#define NULLL 273
#define MAIN 274
#define AND 275
#define DIVIDE 276
#define ASIGN 277
#define COMPARE 278
#define GREATER 279
#define GREATEREQUAL 280
#define LESS 281
#define LESSEQUAL 282
#define MINUS 283
#define NOT 284
#define NOTEQUAL 285
#define OR 286
#define PLUS 287
#define MULTIPLY 288
#define ADDRESS 289
#define DEFERENCE 290
#define INTEGER 291
#define REAL 292
#define STRING 293
#define CHAR 294
#define BOOLEANTRUE 295
#define BOOLEANFALSE 296
#define IDENTIFIER 297
#define OBLOCK 298
#define CBLOCK 299
#define OLIST 300
#define CLIST 301
#define ABSOLUTE 302
#define OINDEX 303
#define CINDEX 304
#define COLONS 305
#define COMMA 306
#define ENDLINE 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 239 "y.tab.c" /* yacc.c:358  */

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1537

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  241
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  414

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    32,    34,    36,    36,    38,    43,    51,
      54,    54,    56,    57,    60,    61,    63,    64,    66,    67,
      68,    69,    70,    71,    72,    73,    75,    76,    77,    78,
      79,    80,    81,    82,    84,    85,    86,    87,    88,    89,
      90,    91,    93,    98,    98,   100,   103,   105,   105,   108,
     108,   108,   113,   113,   113,   118,   118,   118,   124,   124,
     125,   126,   127,   129,   129,   131,   137,   137,   139,   140,
     141,   142,   143,   144,   145,   146,   148,   149,   151,   152,
     154,   156,   157,   158,   160,   161,   162,   163,   164,   165,
     167,   168,   169,   170,   171,   175,   176,   177,   179,   184,
     185,   186,   187,   188,   189,   190,   191,   193,   195,   196,
     197,   199,   200,   201,   202,   203,   204,   206,   207,   208,
     209,   210,   210,   210,   214,   215,   216,   218,   223,   224,
     225,   226,   227,   228,   229,   230,   233,   235,   236,   237,
     239,   240,   241,   242,   243,   244,   246,   247,   248,   249,
     250,   250,   250,   254,   255,   256,   258,   263,   264,   265,
     266,   267,   268,   269,   270,   273,   275,   276,   277,   279,
     280,   281,   282,   283,   284,   286,   287,   288,   289,   290,
     294,   295,   296,   298,   303,   304,   305,   306,   307,   308,
     309,   310,   313,   315,   316,   317,   319,   320,   321,   322,
     323,   324,   326,   327,   328,   329,   330,   330,   330,   334,
     335,   336,   338,   343,   344,   345,   346,   347,   348,   349,
     350,   353,   353,   355,   356,   357,   358,   359,   361,   361,
     362,   363,   364,   366,   367,   368,   369,   371,   374,   376,
     377,   377
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLT", "CHART", "INTT", "REALT",
  "STRINGT", "INTP", "CHARP", "REALP", "IF", "ELSE", "WHILE", "VAR",
  "FUNC", "PROC", "RETURN", "NULLL", "MAIN", "AND", "DIVIDE", "ASIGN",
  "COMPARE", "GREATER", "GREATEREQUAL", "LESS", "LESSEQUAL", "MINUS",
  "NOT", "NOTEQUAL", "OR", "PLUS", "MULTIPLY", "ADDRESS", "DEFERENCE",
  "INTEGER", "REAL", "STRING", "CHAR", "BOOLEANTRUE", "BOOLEANFALSE",
  "IDENTIFIER", "OBLOCK", "CBLOCK", "OLIST", "CLIST", "ABSOLUTE", "OINDEX",
  "CINDEX", "COLONS", "COMMA", "ENDLINE", "$accept", "project",
  "pushEndSign", "program", "procedures", "procedure", "pushScope",
  "parameters", "para_list", "argVars", "vars", "argsTypes", "types",
  "str_types", "procedure_body", "declarations", "declare", "statements",
  "statment", "$@1", "@2", "$@3", "@4", "$@5", "$@6", "$@7",
  "statment_block", "block", "return_statement", "ret_types", "assignment",
  "lhs", "str_expression", "ret_expression", "@8", "$@9",
  "stmnt_expression", "@10", "$@11", "expression", "expr", "@12", "$@13",
  "address_expression", "address", "deference_types",
  "deference_statement", "function_call", "call_expression",
  "call_expression_args", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -373

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-373)))

#define YYTABLE_NINF -233

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -373,     9,  -373,  -373,  -373,    -9,   -22,   -22,  -373,  -373,
     -18,   -17,   -11,   -11,   -14,    -8,    -3,     1,    15,   -11,
      38,   -11,   220,    20,  -373,   299,    -3,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,    26,    -9,    18,  -373,    58,
    -373,    71,    47,  -373,   496,   715,    46,    40,    51,  -373,
    -373,  -373,  -373,  -373,  -373,    77,   729,   942,   -37,    78,
      79,    82,    83,    99,   101,   219,  -373,   729,  -373,  -373,
    -373,    57,   136,    72,  1475,   126,  -373,   127,   130,   132,
      77,   715,    78,    79,    82,    83,    99,   101,   -24,   715,
    -373,   757,   126,   130,   132,  -373,    47,   458,   122,   124,
     496,   128,    19,   636,  1475,  -373,   982,  -373,  -373,  -373,
    -373,  -373,  -373,    80,  1038,   105,  -373,  -373,   113,   982,
     729,  1052,  -373,    58,  1333,  1407,   982,  -373,   982,   729,
     729,   729,   729,   729,   729,   729,   729,   729,   729,   729,
     729,   729,  -373,   982,   982,   982,   982,   982,   982,   982,
     982,   982,   982,   982,   982,   982,    -6,  1490,   715,  1441,
     715,   715,   715,   715,   715,   715,   715,   715,   715,   715,
     715,   715,   715,  -373,  -373,   143,   157,   158,   160,   174,
     184,   185,   188,   120,   190,  1092,  1092,  -373,  1092,   729,
      75,   982,  -373,  1106,   -16,   982,  1424,   875,   193,    77,
    1052,    78,    79,    82,    83,    99,   101,    23,  1052,   907,
    1134,   116,   126,   130,   132,     5,  -373,  -373,  1475,  1475,
     191,   636,   636,   636,   636,   636,   636,   636,   636,   636,
     636,   636,   636,   636,  1475,  1475,  1475,  1475,  1475,  1475,
    1475,  1475,  1475,  1475,  1475,  1475,  1475,  -373,  -373,  1299,
    -373,  1490,  1490,  1490,  1490,  1490,  1490,  1490,  1490,  1490,
    1490,  1490,  1490,  1490,  -373,  1106,    77,  1092,    78,    79,
      82,    83,    99,   101,    25,  1092,  -373,  1504,   126,   130,
     132,  1504,  1504,   982,    77,  1106,    78,    79,    82,    83,
      99,   101,    73,  1106,  1164,   126,   130,   132,  -373,  1106,
    1194,  -373,   729,  -373,  1389,  1052,  1361,  1106,  1106,  1106,
    1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,  1106,
    -373,  -373,  -373,   201,   199,  -373,   204,  1209,  1504,  1092,
    1458,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,
    1092,  1092,  1092,  1092,   202,   206,   209,  1106,  -373,  1239,
    -373,  -373,  1269,  -373,  1389,  1389,  1389,  1389,  1389,  1389,
    1389,  1389,  1389,  1389,  1389,  1389,  1389,  -373,  -373,  -373,
     208,  1313,  -373,  1504,  1504,  1504,  1504,  1504,  1504,  1504,
    1504,  1504,  1504,  1504,  1504,  1504,   481,   481,   481,   210,
    -373,  -373,  -373,   211,   729,  -373,  -373,   496,  -373,  -373,
    -373,   268,  -373,  -373
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     6,     1,     2,     4,     0,     0,     5,     9,
       0,     0,    11,    11,    15,     0,    10,     0,     0,     0,
       0,     0,     0,     0,    14,     0,    13,    18,    19,    20,
      21,    22,    23,    24,    25,    12,     6,    68,    69,    70,
      71,    72,    73,    74,    75,     0,    44,     0,     6,    48,
       7,    67,     0,    43,    42,     0,     0,    17,     0,   229,
     231,   230,    49,    58,    55,   191,     0,     0,     0,   184,
     185,   187,   186,   188,   189,   190,    44,     0,   206,    47,
      62,     0,     0,     0,     0,   180,   222,     0,   181,   182,
     135,     0,   128,   129,   131,   130,   132,   133,   134,     0,
     121,     0,   124,   125,   126,     8,     0,     0,     0,     0,
       0,     0,   190,   168,   195,   220,     0,   213,   214,   216,
     215,   217,   218,   219,     0,   209,   210,   211,   233,     0,
     241,     0,   237,    48,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   228,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    16,    26,    27,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,    59,     0,     0,
     219,     0,   209,     0,   219,     0,     0,   240,     0,   106,
       0,    99,   100,   102,   101,   103,   104,   105,     0,     0,
       0,     0,    95,    96,    97,    67,   165,   192,   207,    77,
     211,   166,   178,   169,   171,   173,   172,   174,   176,   170,
     167,   175,   177,   179,   193,   205,   196,   198,   200,   199,
     201,   203,   197,   194,   202,   204,   227,   232,   236,     0,
     107,   122,   108,   120,   111,   113,   115,   114,   116,   118,
     112,   109,   117,   119,    45,     0,   164,     0,   157,   158,
     160,   159,   161,   162,   163,     0,   150,    50,   153,   154,
     155,    53,    56,     0,   106,     0,    99,   100,   102,   101,
     103,   104,   105,     0,     0,    95,    96,    97,   224,     0,
       0,   234,   241,   238,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,   183,   212,     0,     0,   127,     0,     0,   139,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
     235,   239,     0,    80,    81,    93,    84,    86,    88,    87,
      89,    91,    85,    82,    90,    92,    94,    65,   208,   123,
       0,     0,   136,   151,   137,   149,   140,   142,   144,   143,
     145,   147,   141,   138,   146,   148,     0,     0,     0,     0,
      98,    46,   156,     0,     0,    63,    51,     0,    57,   226,
     152,     0,    54,    64
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -373,  -373,  -373,  -373,   259,  -373,   255,   250,   245,   249,
     163,  -373,  -373,  -373,   222,   196,  -373,   153,   -54,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -372,  -373,    62,  -373,
    -373,  -373,   -44,   247,  -373,  -373,  -163,  -373,  -373,   -65,
     756,  -373,  -373,    39,  -373,   131,   278,   517,  -373,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    46,     8,    10,    15,    16,    17,
      58,    35,   193,   194,    47,    49,    53,    54,   405,   108,
     354,   109,   355,   111,   356,   110,   406,    80,    56,    45,
      81,    82,   314,   101,   170,   336,   287,   341,   403,    83,
      84,   136,   334,    85,    86,    87,    88,    89,   132,   208
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   113,    59,    60,    61,   128,     6,     7,   129,     3,
    -219,  -232,   134,    59,    60,    61,    62,    63,    64,  -232,
       9,   130,    55,    65,   168,   407,   408,    12,    13,   130,
     308,    14,   309,   291,    66,   292,   257,    19,    20,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    21,
      77,    22,    78,  -219,  -232,    25,   197,  -219,  -232,  -219,
    -232,    23,    50,    36,   130,   207,   220,   199,   130,    48,
     130,   315,    52,   339,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   219,    55,    57,
     105,   106,   139,   140,   102,   141,   142,   143,   144,   145,
     146,   107,   147,   148,   149,   150,   125,  -219,  -232,   137,
    -232,  -220,  -213,  -214,   338,  -232,  -216,  -215,   130,   151,
     130,   357,   340,   293,   152,   130,  -223,  -223,   203,  -223,
     102,  -223,  -223,  -217,   220,  -218,   153,   154,   102,   155,
     156,   157,   158,   159,   160,   113,   161,   162,   163,   164,
     165,  -221,  -221,   134,  -221,   202,  -221,  -221,   138,   304,
    -209,   205,   166,   202,  -210,   332,  -211,   195,   202,   196,
     222,    79,   274,   198,   316,   202,   381,   202,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   -34,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   -35,   -36,   102,   -37,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   -38,    27,    28,    29,    30,    31,    32,    33,
      34,   337,   -39,   -40,   288,   288,   -41,   288,   275,   313,
     202,   -79,   305,   -76,   202,   377,   378,   207,   396,   222,
     220,   379,   397,  -219,  -232,   398,   409,   222,   410,   316,
     401,     5,    11,    18,   130,   359,    26,   131,    24,   184,
      51,   362,   133,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   225,   333,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   258,   147,   148,
     149,   150,    37,    38,    39,    40,    41,    42,    43,    44,
     361,     0,     0,   362,   305,   151,   288,     0,     0,     0,
     413,     0,     0,     0,   288,     0,     0,     0,     0,     0,
       0,     0,   202,   103,   305,     0,     0,     0,   167,   411,
       0,     0,   305,     0,     0,   126,   169,     0,   305,     0,
       0,     0,     0,   412,   222,     0,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   103,
       0,     0,     0,     0,     0,     0,     0,   103,   288,     0,
     288,   288,   288,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,     0,   126,     0,   305,     0,     0,     0,
       0,     0,   126,     0,     0,     0,     0,   126,     0,   223,
       0,     0,     0,     0,   126,   259,   126,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
       0,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,     0,     0,   103,     0,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   185,   186,   187,   188,   189,   190,   191,   192,     0,
       0,     0,     0,   289,   289,     0,   289,     0,     0,   126,
       0,   306,     0,   126,     0,     0,     0,     0,   223,    59,
      60,    61,    62,    63,    64,     0,   223,     0,   404,    65,
       0,     0,     0,     0,    59,    60,    61,    62,    63,    64,
      66,     0,     0,     0,    65,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    66,    77,     0,    78,     0,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,    77,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   306,     0,   289,     0,     0,     0,     0,
       0,     0,     0,   289,     0,     0,     0,     0,     0,     0,
       0,   126,   104,   306,     0,     0,     0,     0,     0,     0,
       0,   306,     0,     0,   127,     0,     0,   306,     0,     0,
       0,     0,     0,   223,     0,   306,   306,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   104,     0,
       0,     0,     0,     0,     0,     0,   104,   289,     0,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,     0,   127,     0,   306,     0,     0,     0,     0,
       0,   127,     0,     0,     0,     0,   127,     0,   224,     0,
       0,     0,     0,   127,     0,   230,   139,   140,     0,   141,
     142,   143,   144,   145,   146,     0,   147,   148,   149,   150,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   151,     0,   104,     0,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   290,   290,     0,   290,     0,     0,   127,     0,
     307,     0,   127,    59,    60,    61,     0,   224,     0,     0,
       0,     0,     0,    90,     0,   224,     0,    59,    60,    61,
       0,     0,     0,     0,    91,     0,     0,    65,     0,    67,
      68,    92,    93,    94,    95,    96,    97,    98,    66,     0,
      99,     0,   100,    67,    68,    69,    70,    71,    72,    73,
      74,   112,     0,     0,    77,     0,    78,   171,   172,     0,
     173,   174,   175,   176,   177,   178,     0,   179,   180,   181,
     182,     0,   307,     0,   290,     0,     0,     0,     0,     0,
       0,     0,   290,     0,     0,     0,     0,     0,     0,   183,
     127,     0,   307,     0,     0,     0,     0,     0,     0,     0,
     307,     0,   114,     0,     0,     0,   307,     0,     0,     0,
       0,     0,   224,   135,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   114,     0,     0,
       0,     0,     0,     0,     0,   135,   290,     0,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,     0,   114,     0,   307,     0,     0,     0,     0,     0,
     135,     0,     0,     0,     0,   206,     0,   221,     0,     0,
       0,     0,   228,     0,   229,   139,   140,     0,   141,   142,
     143,   144,   145,   146,     0,   147,   148,   149,   150,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   151,     0,   221,     0,   312,   317,   318,     0,
     319,   320,   321,   322,   323,   324,     0,   325,   326,   327,
     328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    60,    61,     0,   329,   221,   330,   135,     0,   221,
     115,   310,     0,     0,     0,     0,   114,     0,     0,     0,
       0,   116,     0,     0,   135,     0,    67,    68,   117,   118,
     119,   120,   121,   122,   123,     0,     0,   124,     0,    78,
      59,    60,    61,     0,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,     0,    67,    68,   117,   118,
     119,   120,   121,   122,   200,     0,     0,   201,     0,    78,
       0,     0,     0,   114,     0,     0,     0,     0,     0,     0,
       0,   135,     0,     0,     0,     0,    59,    60,    61,   221,
       0,   114,     0,     0,     0,     0,   115,     0,     0,   135,
      59,    60,    61,     0,     0,   221,     0,   116,     0,     0,
     209,   221,    67,    68,   117,   118,   119,   120,   121,   122,
     204,   210,     0,   201,     0,    78,    67,    68,   211,   212,
     213,   214,   215,   216,   217,   221,     0,   218,     0,    78,
      59,    60,    61,     0,     0,     0,     0,     0,     0,     0,
     276,     0,     0,   221,    59,    60,    61,     0,     0,     0,
       0,   277,     0,     0,   294,     0,    67,    68,   278,   279,
     280,   281,   282,   283,   284,   295,     0,   285,     0,   286,
      67,    68,   296,   297,   298,   299,   300,   301,   302,     0,
       0,   303,     0,    78,   139,   140,     0,   141,   142,   143,
     144,   145,   146,     0,   147,   148,   149,   150,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   151,     0,   331,   317,   318,     0,   319,   320,   321,
     322,   323,   324,     0,   325,   326,   327,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   329,     0,   358,   153,   154,     0,   155,   156,   157,
     158,   159,   160,     0,   161,   162,   163,   164,   165,   317,
     318,     0,   319,   320,   321,   322,   323,   324,     0,   325,
     326,   327,   328,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   329,     0,   380,   317,
     318,     0,   319,   320,   321,   322,   323,   324,     0,   325,
     326,   327,   328,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   329,     0,   399,   317,
     318,     0,   319,   320,   321,   322,   323,   324,     0,   325,
     326,   327,   328,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   329,     0,   400,   171,
     172,     0,   173,   174,   175,   176,   177,   178,     0,   179,
     180,   181,   182,   342,   343,     0,   344,   345,   346,   347,
     348,   349,     0,   350,   351,   352,   353,     0,   335,     0,
       0,     0,     0,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   402,   147,   148,   149,   150,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   226,
     151,   317,   318,     0,   319,   320,   321,   322,   323,   324,
       0,   325,   326,   327,   328,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   363,   329,   317,
     318,     0,   319,   320,   321,   322,   323,   324,     0,   325,
     326,   327,   328,     0,     0,     0,     0,   153,   154,     0,
     155,   156,   157,   158,   159,   160,   329,   161,   162,   163,
     164,   165,     0,     0,   153,   154,     0,   155,   156,   157,
     158,   159,   160,   227,   161,   162,   163,   164,   165,     0,
       0,   171,   172,     0,   173,   174,   175,   176,   177,   178,
     311,   179,   180,   181,   182,     0,     0,     0,   342,   343,
       0,   344,   345,   346,   347,   348,   349,   260,   350,   351,
     352,   353,     0,     0,     0,   153,   154,     0,   155,   156,
     157,   158,   159,   160,   382,   161,   162,   163,   164,   165,
     171,   172,     0,   173,   174,   175,   176,   177,   178,     0,
     179,   180,   181,   182,   342,   343,     0,   344,   345,   346,
     347,   348,   349,     0,   350,   351,   352,   353
};

static const yytype_int16 yycheck[] =
{
      54,    66,     8,     9,    10,    42,    15,    16,    45,     0,
      34,    35,    77,     8,     9,    10,    11,    12,    13,    35,
      42,    45,    17,    18,    48,   397,   398,    45,    45,    45,
      46,    42,    48,   196,    29,   198,    42,    51,    46,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    52,
      45,    50,    47,    34,    35,    17,   110,    34,    35,    34,
      35,    46,    44,    43,    45,   130,   131,    48,    45,    43,
      45,    48,    14,    48,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   131,    17,    42,
      44,    51,    20,    21,    55,    23,    24,    25,    26,    27,
      28,    50,    30,    31,    32,    33,    67,    34,    35,    52,
      35,    34,    34,    34,   277,    35,    34,    34,    45,    47,
      45,    48,   285,    48,    52,    45,    46,    47,    48,    49,
      91,    51,    52,    34,   199,    34,    20,    21,    99,    23,
      24,    25,    26,    27,    28,   210,    30,    31,    32,    33,
      34,    46,    47,   218,    49,   116,    51,    52,    22,   203,
      34,    48,    35,   124,    34,    49,    34,    45,   129,    45,
     131,   225,    52,    45,   218,   136,   339,   138,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,    48,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,    48,    48,   168,    48,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,    48,     3,     4,     5,     6,     7,     8,     9,
      10,   275,    48,    48,   195,   196,    48,   198,    48,    46,
     201,    22,   203,    52,   205,    44,    47,   312,    46,   210,
     315,    47,    46,    34,    35,    46,    46,   218,    47,   303,
      52,     2,     7,    13,    45,   309,    21,    48,    19,   106,
      48,   315,    76,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   133,   225,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,   166,    30,    31,
      32,    33,     3,     4,     5,     6,     7,     8,     9,    10,
     312,    -1,    -1,   357,   275,    47,   277,    -1,    -1,    -1,
      52,    -1,    -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   293,    55,   295,    -1,    -1,    -1,    91,   404,
      -1,    -1,   303,    -1,    -1,    67,    99,    -1,   309,    -1,
      -1,    -1,    -1,   407,   315,    -1,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   339,    -1,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,    -1,   116,    -1,   357,    -1,    -1,    -1,
      -1,    -1,   124,    -1,    -1,    -1,    -1,   129,    -1,   131,
      -1,    -1,    -1,    -1,   136,   168,   138,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,    -1,    -1,   168,    -1,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,    -1,   195,   196,    -1,   198,    -1,    -1,   201,
      -1,   203,    -1,   205,    -1,    -1,    -1,    -1,   210,     8,
       9,    10,    11,    12,    13,    -1,   218,    -1,    17,    18,
      -1,    -1,    -1,    -1,     8,     9,    10,    11,    12,    13,
      29,    -1,    -1,    -1,    18,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    29,    45,    -1,    47,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   275,    -1,   277,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,    55,   295,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    67,    -1,    -1,   309,    -1,    -1,
      -1,    -1,    -1,   315,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,   339,    -1,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,    -1,   116,    -1,   357,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,   129,    -1,   131,    -1,
      -1,    -1,    -1,   136,    -1,   138,    20,    21,    -1,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,    47,    -1,   168,    -1,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,   196,    -1,   198,    -1,    -1,   201,    -1,
     203,    -1,   205,     8,     9,    10,    -1,   210,    -1,    -1,
      -1,    -1,    -1,    18,    -1,   218,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    18,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    29,    -1,
      45,    -1,    47,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    45,    -1,    47,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    -1,   275,    -1,   277,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,    52,
     293,    -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    66,    -1,    -1,    -1,   309,    -1,    -1,    -1,
      -1,    -1,   315,    77,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   339,    -1,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,    -1,   116,    -1,   357,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,    -1,   129,    -1,   131,    -1,    -1,
      -1,    -1,   136,    -1,   138,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,    47,    -1,   168,    -1,    51,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,     9,    10,    -1,    47,   199,    49,   201,    -1,   203,
      18,   205,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,
      -1,    29,    -1,    -1,   218,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    45,    -1,    47,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    45,    -1,    47,
      -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,    -1,    -1,    -1,    -1,     8,     9,    10,   293,
      -1,   295,    -1,    -1,    -1,    -1,    18,    -1,    -1,   303,
       8,     9,    10,    -1,    -1,   309,    -1,    29,    -1,    -1,
      18,   315,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    29,    -1,    45,    -1,    47,    34,    35,    36,    37,
      38,    39,    40,    41,    42,   339,    -1,    45,    -1,    47,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,   357,     8,     9,    10,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    18,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    29,    -1,    45,    -1,    47,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    45,    -1,    47,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    49,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    49,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    -1,    49,    -1,
      -1,    -1,    -1,    20,    21,    -1,    23,    24,    25,    26,
      27,    28,    49,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    20,
      21,    -1,    23,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    24,    25,    26,    27,    28,    47,    30,    31,    32,
      33,    34,    -1,    -1,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    46,    30,    31,    32,    33,    34,    -1,
      -1,    20,    21,    -1,    23,    24,    25,    26,    27,    28,
      46,    30,    31,    32,    33,    -1,    -1,    -1,    20,    21,
      -1,    23,    24,    25,    26,    27,    28,    46,    30,    31,
      32,    33,    -1,    -1,    -1,    20,    21,    -1,    23,    24,
      25,    26,    27,    28,    46,    30,    31,    32,    33,    34,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    20,    21,    -1,    23,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,    56,    57,    15,    16,    58,    42,
      59,    59,    45,    45,    42,    60,    61,    62,    60,    51,
      46,    52,    50,    46,    62,    17,    61,     3,     4,     5,
       6,     7,     8,     9,    10,    64,    43,     3,     4,     5,
       6,     7,     8,     9,    10,    82,    57,    67,    43,    68,
      44,    67,    14,    69,    70,    17,    81,    42,    63,     8,
       9,    10,    11,    12,    13,    18,    29,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    45,    47,    71,
      80,    83,    84,    92,    93,    96,    97,    98,    99,   100,
      18,    29,    36,    37,    38,    39,    40,    41,    42,    45,
      47,    86,    96,    99,   100,    44,    51,    50,    72,    74,
      78,    76,    42,    92,    93,    18,    29,    36,    37,    38,
      39,    40,    41,    42,    45,    96,    99,   100,    42,    45,
      45,    48,   101,    68,    92,    93,    94,    52,    22,    20,
      21,    23,    24,    25,    26,    27,    28,    30,    31,    32,
      33,    47,    52,    20,    21,    23,    24,    25,    26,    27,
      28,    30,    31,    32,    33,    34,    35,    86,    48,    86,
      87,    20,    21,    23,    24,    25,    26,    27,    28,    30,
      31,    32,    33,    52,    63,     3,     4,     5,     6,     7,
       8,     9,    10,    65,    66,    45,    45,    71,    45,    48,
      42,    45,    96,    48,    42,    48,    93,    92,   102,    18,
      29,    36,    37,    38,    39,    40,    41,    42,    45,    85,
      92,    93,    96,    99,   100,    70,    46,    46,    93,    93,
     100,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    42,    98,    86,
      46,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    52,    48,    18,    29,    36,    37,
      38,    39,    40,    41,    42,    45,    47,    89,    96,    99,
     100,    89,    89,    48,    18,    29,    36,    37,    38,    39,
      40,    41,    42,    45,    85,    96,    99,   100,    46,    48,
      93,    46,    51,    46,    85,    48,    85,    20,    21,    23,
      24,    25,    26,    27,    28,    30,    31,    32,    33,    47,
      49,    49,    49,    81,    95,    49,    88,    85,    89,    48,
      89,    90,    20,    21,    23,    24,    25,    26,    27,    28,
      30,    31,    32,    33,    73,    75,    77,    48,    49,    85,
      49,   102,    85,    46,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    44,    47,    47,
      49,    89,    46,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    46,    46,    46,    49,
      49,    52,    49,    91,    17,    71,    79,    79,    79,    46,
      47,    92,    71,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    56,    57,    57,    58,    58,    59,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    68,    68,    69,    69,    70,    70,    72,
      73,    71,    74,    75,    71,    76,    77,    71,    78,    71,
      71,    71,    71,    79,    79,    80,    81,    81,    82,    82,
      82,    82,    82,    82,    82,    82,    83,    83,    84,    84,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    87,    88,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      90,    91,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    95,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    96,    96,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    99,    99,    99,    99,   100,   101,   102,
     102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     2,     0,     8,    11,     1,
       1,     0,     3,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     0,     5,     8,     2,     0,     0,
       0,     7,     0,     0,     8,     0,     0,     7,     0,     3,
       2,     2,     1,     1,     3,     5,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     1,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     0,     5,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     0,     5,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     0,     0,     5,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     4,     5,     7,     3,     0,     1,
       1,     1,     1,     2,     4,     5,     3,     2,     3,     3,
       1,     0
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 30 "yacc4.y" /* yacc.c:1646  */
    {checkMain();checkFuncProcName();printAllCode();}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 32 "yacc4.y" /* yacc.c:1646  */
    {pushEndSign("$$");openFile();}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 34 "yacc4.y" /* yacc.c:1646  */
    {((yyval) = mknode("CODE", (yyvsp[0]), NULL));}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 36 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), (yyvsp[0]));}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 36 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 39 "yacc4.y" /* yacc.c:1646  */
    {
	popScope("procedure");
	endFunc();
	(yyval) = mknode("PROC", mknode((yyvsp[-6]), mknode("\n",  NULL, NULL), NULL), mknode("ARGS", (yyvsp[-4]), (yyvsp[-1])));
}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 44 "yacc4.y" /* yacc.c:1646  */
    {
	popScope("function");
	endFunc();
	(yyval) = mknode("FUNC", mknode((yyvsp[-9]), mknode("\n", NULL, NULL), 
		mknode("ARGS", (yyvsp[-7]), mknode("RET", (yyvsp[-3]), NULL))), mknode("", (yyvsp[-1]), (yyvsp[0])));
}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 51 "yacc4.y" /* yacc.c:1646  */
    {pushNewScope((yyvsp[0]));printFuncName((yyvsp[0]));}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[0]), mknode("", (yyvsp[-2]), mknode(")", NULL, NULL)));}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 57 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-2]), mknode("", (yyvsp[0]), NULL));}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 60 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), mknode(" ", (yyvsp[0]), NULL), NULL);addArgVar((yyvsp[-2]));}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 61 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addArgVar((yyvsp[0]));}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 63 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-2]), mknode(" ", (yyvsp[0]), NULL), NULL);addVar((yyvsp[-2]));}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 64 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addVar((yyvsp[0]));}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 66 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);setArgType("BOOLEAN");}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);setArgType("CHAR");}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);setArgType("INTEGER");}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 69 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);setArgType("REAL");}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 70 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);setArgType("STRING");}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 71 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);setArgType("INT*");}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 72 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);setArgType("CHAR*");}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 73 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);setArgType("REAL*");}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 75 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);setVarType("BOOLEAN");}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 76 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);setVarType("CHAR");}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 77 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);setVarType("INTEGER");}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 78 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);setVarType("REAL");}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 79 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);setVarType("STRING");}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);setVarType("INT*");}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 81 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);setVarType("CHAR*");}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 82 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);setVarType("REAL*");}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 84 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);checkStrType("BOOLEAN");}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 85 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);checkStrType("CHAR");}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 86 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);checkStrType("INTEGER");}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 87 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);checkStrType("REAL");}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 88 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);checkStrType("STRING");}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 89 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);checkStrType("INT*");}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 90 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);checkStrType("CHAR*");}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 91 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);checkStrType("REAL*");}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 94 "yacc4.y" /* yacc.c:1646  */
    {
	(yyval) = mknode("(BODY\n", mknode("", (yyvsp[-2]), NULL), mknode("", (yyvsp[-1]), mknode("", (yyvsp[0]), mknode("}", NULL, NULL))));
}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 98 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), (yyvsp[0]));}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 98 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 101 "yacc4.y" /* yacc.c:1646  */
    {
	(yyval) = mknode("VAR", (yyvsp[-1]), (yyvsp[-3]));			
}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 103 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("VAR", (yyvsp[-6]), mknode("[", (yyvsp[-2]), mknode("]", NULL, NULL)));}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 105 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), (yyvsp[0]));}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 105 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 108 "yacc4.y" /* yacc.c:1646  */
    {printIfCond("if");}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 108 "yacc4.y" /* yacc.c:1646  */
    {printCond();}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 109 "yacc4.y" /* yacc.c:1646  */
    {
		checkCondition();
		(yyval) = mknode("IF", mknode("(", (yyvsp[-4]), mknode(")", NULL, NULL)), (yyvsp[-2]));
	}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 113 "yacc4.y" /* yacc.c:1646  */
    {printIfCond("if");}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 113 "yacc4.y" /* yacc.c:1646  */
    {printCond();}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 114 "yacc4.y" /* yacc.c:1646  */
    {

		(yyval) = mknode("IF-ELSE", mknode("(", (yyvsp[-5]), mknode(")", NULL, NULL)), mknode("", (yyvsp[-3]), mknode("", (yyvsp[-1]), NULL)));
	}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 118 "yacc4.y" /* yacc.c:1646  */
    {printIfCond("while");}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 118 "yacc4.y" /* yacc.c:1646  */
    {printCond();}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 119 "yacc4.y" /* yacc.c:1646  */
    {
		printWhile();
		checkCondition();
		
	}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 124 "yacc4.y" /* yacc.c:1646  */
    {printGoTo();}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 125 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-1]), NULL);clearFuncName();}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 126 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 127 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 129 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 129 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("RET", (yyvsp[-1]), NULL);}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 132 "yacc4.y" /* yacc.c:1646  */
    {
		printL();
		(yyval) = mknode("{", (yyvsp[-2]), mknode("", (yyvsp[-1]), mknode("", (yyvsp[0]), mknode("}", NULL, NULL))));
	}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 137 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("RET", (yyvsp[-1]), NULL);printReturn();}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 137 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 139 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("BOOLEAN", NULL, NULL);addReturnType("BOOLEAN");}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 140 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR", NULL, NULL);addReturnType("CHAR");}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 141 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INTEGER", NULL, NULL);addReturnType("INTEGER");}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 142 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL", NULL, NULL);addReturnType("REAL");}
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 143 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("STRING", NULL, NULL);addReturnType("STRING");}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 144 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("INT*", NULL, NULL);addReturnType("INT*");}
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 145 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("CHAR*", NULL, NULL);addReturnType("CHAR*");}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 146 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("REAL*", NULL, NULL);addReturnType("REAL*");}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 148 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("=", (yyvsp[-2]), (yyvsp[0]));addVarAssign((yyvsp[-2])->token);}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 149 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("=", (yyvsp[-2]), (yyvsp[0]));checkLeftRight();printCode();}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 151 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 152 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addLeft((yyvsp[0]));setLeft((yyvsp[0]));}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 154 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 156 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 157 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 158 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);}
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 160 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 161 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 162 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 163 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 164 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 165 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 167 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 168 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 169 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 170 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 172 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 175 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 176 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 177 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 180 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 184 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("INTEGER");}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 185 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("REAL");}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 186 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("CHAR");}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 187 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("STRING");}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 188 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("BOOLEAN");}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 189 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkStringType("BOOLEAN");}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 190 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkStringType("IDENTIFIER");}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 191 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 193 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 195 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));setRight("&&");}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 196 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));setRight("||");}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 197 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);setRight("!");}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 199 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));setRight("==");}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 200 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));setRight("!=");}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 201 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));setRight(">");}
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 202 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));setRight("<");}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 203 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));setRight(">=");}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 204 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));setRight("<=");}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 206 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));setRight("+");}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 207 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));setRight("-");}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 208 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));setRight("*");}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 209 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));setRight("/");}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 210 "yacc4.y" /* yacc.c:1646  */
    {setRight("|");}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 210 "yacc4.y" /* yacc.c:1646  */
    {setRight("|");}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 211 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-3]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 214 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 215 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 216 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 219 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 223 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("INTEGER");setRight((yyvsp[0]));}
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 224 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("REAL");setRight((yyvsp[0]));}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 225 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("CHAR");setRight((yyvsp[0]));}
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 226 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("STRING");setRight((yyvsp[0]));}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 227 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("BOOLEAN");setRight("1");}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 228 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn("BOOLEAN");setRight("0");}
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 229 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkReturn((yyvsp[0]));setRight((yyvsp[0]));}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 230 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 233 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 235 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));logiaclOperator("AND");setRight("&&");}
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 236 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));logiaclOperator("OR");setRight("||");}
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 237 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);logiaclOperator("NOT");setRight("!");}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 239 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));operatorisHere("COMPARE");setRight("==");}
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 240 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));operatorisHere("NOTEQUAL");setRight("!=");}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 241 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));operatorisHere("GREATER");setRight(">");}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 242 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));operatorisHere("LESS");setRight("<");}
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 243 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));operatorisHere("GREATEREQUAL");setRight(">=");}
#line 2719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 244 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));operatorisHere("LESSEQUAL");setRight("<=");}
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 246 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));setRight("+");}
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 247 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));setRight("-");}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 248 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));setRight("*");}
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 249 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));setRight("/");}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 250 "yacc4.y" /* yacc.c:1646  */
    {setRight("|");}
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 250 "yacc4.y" /* yacc.c:1646  */
    {setRight("|");}
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 251 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-3]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 254 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 255 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 256 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 259 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 263 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"INTEGER");setRight((yyvsp[0]));}
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 264 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); checkExpressionISBool((yyvsp[0]),"REAL");setRight((yyvsp[0]));}
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 265 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"CHAR");setRight((yyvsp[0]));}
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 266 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"STRING");setRight((yyvsp[0]));}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 267 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"BOOLEANTRUE");setRight((yyvsp[0]));}
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 268 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"BOOLEANFALSE");setRight((yyvsp[0]));}
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 269 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);checkExpressionISBool((yyvsp[0]),"IDENTIFIER");setRight((yyvsp[0]));}
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 270 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 273 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 275 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));}
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 276 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));}
#line 2861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 277 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);}
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 279 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));}
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 280 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));}
#line 2879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 281 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));}
#line 2885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 282 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));}
#line 2891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 283 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));}
#line 2897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 284 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));}
#line 2903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 286 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));}
#line 2909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 287 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));}
#line 2915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 288 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));}
#line 2921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 289 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));}
#line 2927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 291 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode("|", mknode((yyvsp[-1]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 2935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 294 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 295 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 296 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 299 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 303 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "INTEGER");setRight((yyvsp[0]));}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 304 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL); addFuncCallArgType((yyvsp[0]), "REAL");setRight((yyvsp[0]));}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 305 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "CHAR");setRight((yyvsp[0]));}
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 306 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "STRING");setRight((yyvsp[0]));}
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 307 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "BOOLEANTRUE");setRight("1,");}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 308 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), "BOOLEANFALSE");setRight("0,");}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 309 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addFuncCallArgType((yyvsp[0]), NULL);setRight((yyvsp[0]));}
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 310 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 313 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("(", (yyvsp[-1]), mknode(")", NULL, NULL));}
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 315 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("&&", (yyvsp[-2]), (yyvsp[0]));setRight("&&");}
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 316 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("||", (yyvsp[-2]), (yyvsp[0]));setRight("||");}
#line 3027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 317 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!", (yyvsp[0]), NULL);addOperator("!");;setRight("!");}
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 319 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("==", (yyvsp[-2]), (yyvsp[0]));setRight("==");}
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 320 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("!=", (yyvsp[-2]), (yyvsp[0]));setRight("!=");}
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 321 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">", (yyvsp[-2]), (yyvsp[0]));setRight(">");}
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 322 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<", (yyvsp[-2]), (yyvsp[0]));setRight("<");}
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 323 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode(">=", (yyvsp[-2]), (yyvsp[0]));setRight(">=");}
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 324 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("<=", (yyvsp[-2]), (yyvsp[0]));setRight("<=");}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 326 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("+", (yyvsp[-2]), (yyvsp[0]));addOperator("+");setRight("+");}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 327 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("-", (yyvsp[-2]), (yyvsp[0]));addOperator("-");setRight("-");}
#line 3081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 328 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("*", (yyvsp[-2]), (yyvsp[0]));addOperator("*");setRight("*");}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 329 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("/", (yyvsp[-2]), (yyvsp[0]));addOperator("/");setRight("/");}
#line 3093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 330 "yacc4.y" /* yacc.c:1646  */
    {setRight("|");}
#line 3099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 330 "yacc4.y" /* yacc.c:1646  */
    {setRight("|");}
#line 3105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 331 "yacc4.y" /* yacc.c:1646  */
    {	
		(yyval) = mknode("|", mknode((yyvsp[-3]), NULL, NULL), mknode("|", NULL, NULL));
	}
#line 3113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 334 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 335 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 336 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 339 "yacc4.y" /* yacc.c:1646  */
    {
		(yyval) = mknode((yyvsp[-3]), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)), NULL);
	}
#line 3139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 343 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("INTEGER", NULL);setRight((yyvsp[0]));}
#line 3145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 344 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("REAL", NULL);setRight((yyvsp[0]));}
#line 3151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 345 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("CHAR", NULL);setRight((yyvsp[0]));}
#line 3157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 346 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("STRING", NULL);setRight((yyvsp[0]));}
#line 3163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 347 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("BOOLEAN", NULL);setRight("1");}
#line 3169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 348 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("BOOLEAN", NULL);setRight("0");}
#line 3175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 349 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("IDENTIFIER", (yyvsp[0])); setRight((yyvsp[0]));}
#line 3181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 350 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("NULL", NULL, NULL);}
#line 3187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 353 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[-1]), (yyvsp[0]), NULL);}
#line 3193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 353 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 3199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 355 "yacc4.y" /* yacc.c:1646  */
    {setRight("&");setRight((yyvsp[0]));(yyval) = mknode("&", mknode((yyvsp[0]), NULL, NULL), NULL);addOperator("&");addRightVar("IDENTIFIER", (yyvsp[0]));}
#line 3205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 356 "yacc4.y" /* yacc.c:1646  */
    {setRight("&");(yyval) = mknode("&", mknode("(", mknode((yyvsp[-1]), NULL, NULL), NULL), mknode(")", NULL, NULL));}
#line 3211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 357 "yacc4.y" /* yacc.c:1646  */
    {setRight("&");(yyval) = mknode("&", mknode((yyvsp[-3]), NULL, NULL), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)));}
#line 3217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 358 "yacc4.y" /* yacc.c:1646  */
    {setRight("&");(yyval) = mknode("&", mknode("(", mknode((yyvsp[-4]), NULL, NULL), mknode("[", (yyvsp[-2]), NULL)), mknode("]", NULL, mknode(")", NULL, NULL)));}
#line 3223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 359 "yacc4.y" /* yacc.c:1646  */
    {addOperator("^");setRight("&");}
#line 3229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 361 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("INT*", NULL);}
#line 3235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 362 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("REAL*", NULL);}
#line 3241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 363 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode((yyvsp[0]), NULL, NULL);addRightVar("CHAR*", NULL);}
#line 3247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 364 "yacc4.y" /* yacc.c:1646  */
    {addRightVar("IDENTIFIER", (yyvsp[0]));}
#line 3253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 366 "yacc4.y" /* yacc.c:1646  */
    {setRight("^");setRight((yyvsp[0])); (yyval) = mknode("^", mknode((yyvsp[0]), NULL, NULL), NULL);addOperator("^"); addRightVar("IDENTIFIER", (yyvsp[0]));}
#line 3259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 367 "yacc4.y" /* yacc.c:1646  */
    {setRight("^");(yyval) = mknode("^", mknode("(", (yyvsp[-1]), NULL), mknode(")", NULL, NULL));addOperator("^");}
#line 3265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 368 "yacc4.y" /* yacc.c:1646  */
    {setRight("^");(yyval) = mknode((yyvsp[-4]), mknode((yyvsp[-3]), NULL, NULL), mknode("[", (yyvsp[-1]), mknode("]", NULL, NULL)));}
#line 3271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 369 "yacc4.y" /* yacc.c:1646  */
    {addOperator("^");}
#line 3277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 371 "yacc4.y" /* yacc.c:1646  */
    {printParam();printCallFunc((yyvsp[-1])); (yyval) = mknode("FUNC_CALL", mknode((yyvsp[-1]), NULL, NULL), mknode("ARGS", (yyvsp[0]), NULL));
checkFuncProcCall((yyvsp[-1]));}
#line 3284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 374 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 376 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[-2]), mknode(",", (yyvsp[0]), NULL));}
#line 3296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 377 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = mknode("", (yyvsp[0]), NULL);}
#line 3302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 377 "yacc4.y" /* yacc.c:1646  */
    {(yyval) = NULL;}
#line 3308 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3312 "y.tab.c" /* yacc.c:1646  */
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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 379 "yacc4.y" /* yacc.c:1906  */

#include "lex.yy.c"
int main()
{
	return yyparse();
}
/* allocate a new node in the tree */
node* mknode(char *token, node *left, node *right)
{
	// printf("mknode1\n");
	node* newnode = (node*)malloc(sizeof(node));
	char* newtoken = (char*)malloc(sizeof(token) + 1);
	strcpy(newtoken, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newtoken;
	// printf("mknode2\n");
	return newnode;
}

/* printing the tree */
void printtree(node* tree)
{
	printf("TREE TOKEN: %s\n", tree->token);
	if(tree->left){
		printtree(tree->left);
	}
	if(tree->right){
		printtree(tree->right);
	}


	// int flag = 4;
	// printTabs(level);
	// if(strcmp(tree->token, "VAR") == 0){
	// 	printf("(DECLARE ");
	// 	flag = 2;
	// } else if(strcmp(tree->token, "IF") == 0){
	// 	printf("(IF\n");
	// 	flag = 1;
	// } else if(strcmp(tree->token, "WHILE") == 0){
	// 	printf("(WHILE\n");
	// 	flag = 1;
	// } else if(strcmp(tree->token, "FUNC") == 0 || strcmp(tree->token, "PROC") == 0 ||
	// 	strcmp(tree->token, "PROC") == 0 || strcmp(tree->token, "CODE") == 0 ||
	// 	strcmp(tree->token, "FUNC_CALL") == 0){
	// 	printf("%s\n", tree->token);
	// 	flag = 2;
	// } else if(strcmp(tree->token, "ARGS") == 0){
	// 	printf("(ARGS ");
	// 	if(tree->left){
	// 		flag = 2;
	// 		printf("\n");
	// 	} else {
	// 		printf("NONE)\n");
	// 	}
	// } else if(strcmp(tree->token, "IF-ELSE") == 0){
	// 	printf("(IF-ELSE\n");
	// 	level--;
	// 	flag = 1;
	// } else if(strcmp(tree->token, "RET") == 0){
	// 	printf("(RET ");
	// 	flag = 2;
	// } else if(strcmp(tree->token, "{") == 0){
	// 	printf("(BLOCK\n");
	// } else if(strcmp(tree->token, "}") == 0){
	// 	printf(")\n");
	// // else if(strcmp(tree->token, "") == 0){

	// // }	
	// } else if(strcmp(tree->token, "(") == 0){
	// 	printf("(");
	// } else if(strcmp(tree->token, "\n") == 0){
	// 	printf("\n");
	// } else if(strcmp(tree->token, ")") == 0){
	// 	printf(")\n");
	// } else if(strcmp(tree->token, ",") == 0){
	// 	printf(",");
	// } else if(strcmp(tree->token, "!=") == 0 || strcmp(tree->token, "=") == 0 ||
	// 	strcmp(tree->token, "==") == 0 || strcmp(tree->token, ">") == 0 ||
	// 	strcmp(tree->token, "<") == 0 || strcmp(tree->token, ">=") == 0 ||
	// 	strcmp(tree->token, "<=") == 0 || strcmp(tree->token, "!") == 0 ||
	// 	strcmp(tree->token, "&&") == 0 || strcmp(tree->token, "||") == 0 ||
	// 	strcmp(tree->token, "+") == 0 || strcmp(tree->token, "-") == 0 ||
	// 	strcmp(tree->token, "*") == 0 || strcmp(tree->token, "/") == 0 ||
	// 	strcmp(tree->token, "&") == 0 || strcmp(tree->token, "^") == 0 ||
	// 	strcmp(tree->token, "|") == 0){
	// 	printf("(%s", tree->token);
	// 	if(strcmp(tree->token, "=") == 0){
	// 		flag = 0;
	// 	} else {
	// 		flag = 1;
	// 	}
	// } else {
	// 	if(tree && (!tree->left && !tree->right) || strcmp(tree->token, "MAIN") == 0){
	// 		printf("%s ", tree->token);
	// 	} else {
	// 		level++;
	// 		printf("%s", tree->token);
	// 		level--;
	// 	}
	// }
	// if(tree->left){
	// 	level++;
	// 	printtree(tree->left);
	// 	level--;
	// }
	// if(tree->right){
	// 	level++;
	// 	printtree(tree->right);
	// 	level--;
	// }
	// if(flag == 2){
	// 	printf(")\n");
	// }
	// if(flag == 1){
	// 	printf(")");
	// }
	// if(flag == 0){
	// 	printf("\n)");
	// }
}

void printTabs(int n)
{ 
	for(int i = 0; i < n/3; i++){
		printf(" ");
	}
}

int yyerror(char *err)
{
	int yydebug = 1; 
	fflush(stdout);
	fprintf(stderr, "Error: %s\n" , err);
	fprintf(stderr, "missing a char before '%s' at line %d\n", yytext, yylineno);
	return 0;
}
