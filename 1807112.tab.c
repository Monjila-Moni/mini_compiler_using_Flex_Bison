
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1807112.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    #include<ctype.h>
    #include<errno.h>

    int data[100];
    int track=0;
    int f=0;
    int val;
    int tem=0;

    int yylex(void);
    void yyerror(char *s);
   
    int isFloat=0;



/* Line 189 of yacc.c  */
#line 95 "1807112.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ROOT = 258,
     INT = 259,
     FLOAT = 260,
     CHAR = 261,
     NUM = 262,
     VAR = 263,
     IF = 264,
     ELIF = 265,
     ELSE = 266,
     SWITCH = 267,
     CASE = 268,
     DEFAULT = 269,
     LB = 270,
     RB = 271,
     PRINT = 272,
     BREAK = 273,
     FOR = 274,
     SIN = 275,
     COS = 276,
     TAN = 277,
     ARRAY = 278,
     OE = 279,
     ISPRIME = 280,
     FIBSERIES = 281,
     FACTORS = 282,
     WHILE = 283,
     IFX = 284
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 166 "1807112.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNRULES -- Number of states.  */
#define YYNSTATES  190

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,     2,    42,     2,     2,
      39,    40,    35,    32,    41,    33,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    37,
      31,    38,    30,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    43,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    15,    18,    21,    26,
      32,    37,    42,    47,    52,    62,    72,    80,    88,   100,
     123,   142,   152,   158,   164,   170,   176,   182,   184,   187,
     191,   199,   206,   209,   211,   213,   215,   219,   221,   223,
     225,   229,   233,   237,   241,   245,   249,   253,   257,   262,
     267,   271,   274,   277
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,     3,    36,    15,    47,    16,    -1,    -1,
      47,    48,    -1,    37,    -1,    52,    37,    -1,    55,    37,
      -1,     8,    38,    55,    37,    -1,    53,     8,    38,    55,
      37,    -1,     7,    32,    32,    37,    -1,     7,    33,    33,
      37,    -1,     8,    32,    32,    37,    -1,     8,    33,    33,
      37,    -1,    19,    39,     7,    31,     7,    40,    15,    48,
      16,    -1,    28,    39,     7,    31,     7,    40,    15,    48,
      16,    -1,    12,    39,    55,    40,    15,    49,    16,    -1,
       9,    39,    55,    40,    15,    48,    16,    -1,     9,    39,
      55,    40,    15,    48,    16,    11,    15,    48,    16,    -1,
       9,    39,    55,    40,    15,     9,    39,    55,    40,    15,
      48,    16,    11,    15,    48,    16,    48,    16,    11,    15,
      48,    16,    -1,     9,    39,    55,    40,    15,    48,    16,
      10,    39,    55,    40,    15,    48,    16,    11,    15,    48,
      16,    -1,    23,    53,     8,    39,     7,    40,    38,     7,
      37,    -1,    24,    39,     7,    40,    37,    -1,    25,    39,
       7,    40,    37,    -1,    26,    39,     7,    40,    37,    -1,
      27,    39,     7,    40,    37,    -1,    17,    39,    55,    40,
      37,    -1,    50,    -1,    50,    51,    -1,    50,    37,    50,
      -1,    13,     7,    36,    55,    37,    18,    37,    -1,    14,
      36,    55,    37,    18,    37,    -1,    53,    54,    -1,     4,
      -1,     5,    -1,     6,    -1,    54,    41,     8,    -1,     8,
      -1,     7,    -1,     8,    -1,    55,    32,    55,    -1,    55,
      33,    55,    -1,    55,    35,    55,    -1,    55,    34,    55,
      -1,    55,    42,    55,    -1,    55,    43,    55,    -1,    55,
      31,    55,    -1,    55,    30,    55,    -1,    55,    38,    38,
      55,    -1,    55,    44,    38,    55,    -1,    39,    55,    40,
      -1,    20,    55,    -1,    21,    55,    -1,    22,    55,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    40,    41,    44,    45,    46,    48,    53,
      58,    63,    69,    74,    79,    84,    93,    94,   105,   115,
     129,   143,   152,   161,   180,   194,   206,   212,   213,   215,
     216,   221,   227,   229,   230,   231,   233,   234,   237,   239,
     241,   243,   245,   247,   257,   267,   268,   270,   271,   276,
     282,   283,   289,   295
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ROOT", "INT", "FLOAT", "CHAR", "NUM",
  "VAR", "IF", "ELIF", "ELSE", "SWITCH", "CASE", "DEFAULT", "LB", "RB",
  "PRINT", "BREAK", "FOR", "SIN", "COS", "TAN", "ARRAY", "OE", "ISPRIME",
  "FIBSERIES", "FACTORS", "WHILE", "IFX", "'>'", "'<'", "'+'", "'-'",
  "'/'", "'*'", "':'", "';'", "'='", "'('", "')'", "','", "'%'", "'^'",
  "'!'", "$accept", "program", "statements", "statement", "BLOCK", "C",
  "D", "declaration", "TYPE", "ID1", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      62,    60,    43,    45,    47,    42,    58,    59,    61,    40,
      41,    44,    37,    94,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    49,    49,    50,
      50,    51,    52,    53,    53,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     1,     2,     2,     4,     5,
       4,     4,     4,     4,     9,     9,     7,     7,    11,    22,
      18,     9,     5,     5,     5,     5,     5,     1,     2,     3,
       7,     6,     2,     1,     1,     1,     3,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       3,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,    33,    34,    35,
      38,    39,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    39,    51,    52,    53,     0,     0,     0,     0,
       0,     0,     0,     6,    37,    32,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    47,    46,    40,    41,    43,
      42,     0,    44,    45,     0,    10,    11,    12,    13,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    48,    49,     0,     0,    26,     0,     0,    22,
      23,    24,    25,     0,     9,     0,     0,     0,     0,    27,
       0,     0,     0,     0,    17,     0,    16,     0,     0,    28,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    21,    15,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
      17,     0,    30,    31,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,     0,    20,     0,     0,     0,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    28,   128,   129,   139,    29,    30,    55,
      31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -110
static const yytype_int16 yypact[] =
{
      12,    -2,    28,    15,  -110,  -110,    75,  -110,  -110,  -110,
      -6,   -24,    -7,    -3,  -110,     7,    13,    -4,    -4,    -4,
      19,    14,    16,    34,    36,    37,  -110,    -4,  -110,    17,
      57,    26,    53,    55,    54,    56,    -4,    -4,    -4,    -4,
      83,  -110,  -110,   304,   304,   304,    85,    97,    98,    99,
     100,   101,   169,  -110,    71,    69,    -4,    -4,    -4,    -4,
      -4,    -4,  -110,    73,    -4,    -4,    77,    76,    80,    81,
      88,    89,   184,   199,   214,   103,    96,   104,   106,   107,
     108,   112,  -110,    -4,   120,   317,   317,   328,   328,   -31,
     -31,    -4,   304,   304,    -4,  -110,  -110,  -110,  -110,  -110,
     134,   136,   125,   162,   166,   137,   138,   140,   151,   182,
     229,  -110,   304,   304,   133,   177,  -110,   152,   153,  -110,
    -110,  -110,  -110,   154,  -110,   156,   175,   190,   189,    -8,
     191,   170,   195,    -4,    27,   185,  -110,   187,   177,  -110,
     159,   213,   159,   244,   186,   220,    -4,    -4,   201,   224,
     216,   234,   221,    -4,   159,   259,   274,  -110,  -110,  -110,
     133,   289,   235,   237,   247,   252,   254,  -110,   233,   243,
      39,   159,  -110,  -110,   266,   267,   159,   284,   269,   283,
     159,   159,   294,   297,   288,  -110,   285,   159,   298,  -110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,  -110,  -109,  -110,   188,  -110,  -110,   295,  -110,
     -17
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      43,    44,    45,    41,    42,   126,   137,    63,    34,    35,
      52,    64,    65,    66,    36,     1,    17,    18,    19,    71,
      72,    73,    74,     7,     8,     9,    32,    33,     4,   138,
       5,   149,    37,   151,     3,    27,    38,   144,   145,    85,
      86,    87,    88,    89,    90,   162,    39,    92,    93,   144,
     174,   165,    40,    47,    53,    48,    56,    57,    58,    59,
      60,    61,   175,    62,    63,    54,   110,   178,    64,    65,
      66,   182,   183,    49,   112,    50,    51,   113,   188,     7,
       8,     9,    10,    11,    12,    67,    69,    13,    68,    70,
      75,    14,    15,    76,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    77,    78,    79,    80,    81,    83,
      84,    91,    26,    95,    27,    94,   143,    96,    97,    56,
      57,    58,    59,    60,    61,    98,    99,    63,   111,   155,
     156,    64,    65,    66,   103,   104,   161,     7,     8,     9,
      10,    11,   125,   109,   105,    13,   106,   107,   108,   114,
      15,   115,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   116,     7,     8,     9,    10,    11,    12,   117,
      26,    13,    27,   118,   119,   120,    15,   121,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   122,   123,
     127,   134,   130,   131,   132,   133,    26,   135,    27,    56,
      57,    58,    59,    60,    61,   136,   140,    63,   141,    82,
     142,    64,    65,    66,    56,    57,    58,    59,    60,    61,
     150,   146,    63,   147,   100,   153,    64,    65,    66,    56,
      57,    58,    59,    60,    61,   154,   160,    63,   138,   101,
     157,    64,    65,    66,    56,    57,    58,    59,    60,    61,
     159,   167,    63,   158,   102,   168,    64,    65,    66,    56,
      57,    58,    59,    60,    61,   169,   124,    63,   170,   171,
     172,    64,    65,    66,    56,    57,    58,    59,    60,    61,
     173,   176,    63,   177,   152,   180,    64,    65,    66,    56,
      57,    58,    59,    60,    61,   179,   163,    63,   181,   186,
     187,    64,    65,    66,    56,    57,    58,    59,    60,    61,
     184,   164,    63,   185,   189,    46,    64,    65,    66,    56,
      57,    58,    59,    60,    61,     0,   148,    63,     0,   166,
       0,    64,    65,    66,    56,    57,    58,    59,    60,    61,
       0,     0,    63,     0,     0,     0,    64,    65,    66,    58,
      59,    60,    61,     0,     0,    63,     0,     0,     0,    64,
      65,    66,    60,    61,     0,     0,    63,     0,     0,     0,
      64,    65,    66
};

static const yytype_int16 yycheck[] =
{
      17,    18,    19,     7,     8,   114,    14,    38,    32,    33,
      27,    42,    43,    44,    38,     3,    20,    21,    22,    36,
      37,    38,    39,     4,     5,     6,    32,    33,     0,    37,
      15,   140,    39,   142,    36,    39,    39,    10,    11,    56,
      57,    58,    59,    60,    61,   154,    39,    64,    65,    10,
      11,   160,    39,    39,    37,    39,    30,    31,    32,    33,
      34,    35,   171,    37,    38,     8,    83,   176,    42,    43,
      44,   180,   181,    39,    91,    39,    39,    94,   187,     4,
       5,     6,     7,     8,     9,    32,    32,    12,    33,    33,
       7,    16,    17,     8,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,     7,     7,     7,     7,     7,    38,
      41,    38,    37,    37,    39,    38,   133,    37,    37,    30,
      31,    32,    33,    34,    35,    37,    37,    38,     8,   146,
     147,    42,    43,    44,    31,    39,   153,     4,     5,     6,
       7,     8,     9,    31,    40,    12,    40,    40,    40,    15,
      17,    15,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    37,     4,     5,     6,     7,     8,     9,     7,
      37,    12,    39,     7,    37,    37,    17,    37,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    37,     7,
      13,    16,    40,    40,    40,    39,    37,     7,    39,    30,
      31,    32,    33,    34,    35,    16,    15,    38,    38,    40,
      15,    42,    43,    44,    30,    31,    32,    33,    34,    35,
       7,    36,    38,    36,    40,    39,    42,    43,    44,    30,
      31,    32,    33,    34,    35,    15,    15,    38,    37,    40,
      16,    42,    43,    44,    30,    31,    32,    33,    34,    35,
      16,    16,    38,    37,    40,    18,    42,    43,    44,    30,
      31,    32,    33,    34,    35,    18,    37,    38,    16,    15,
      37,    42,    43,    44,    30,    31,    32,    33,    34,    35,
      37,    15,    38,    16,    40,    16,    42,    43,    44,    30,
      31,    32,    33,    34,    35,    11,    37,    38,    15,    11,
      15,    42,    43,    44,    30,    31,    32,    33,    34,    35,
      16,    37,    38,    16,    16,    20,    42,    43,    44,    30,
      31,    32,    33,    34,    35,    -1,   138,    38,    -1,    40,
      -1,    42,    43,    44,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    32,
      33,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,    42,
      43,    44,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,
      42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    46,    36,     0,    15,    47,     4,     5,     6,
       7,     8,     9,    12,    16,    17,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    37,    39,    48,    52,
      53,    55,    32,    33,    32,    33,    38,    39,    39,    39,
      39,     7,     8,    55,    55,    55,    53,    39,    39,    39,
      39,    39,    55,    37,     8,    54,    30,    31,    32,    33,
      34,    35,    37,    38,    42,    43,    44,    32,    33,    32,
      33,    55,    55,    55,    55,     7,     8,     7,     7,     7,
       7,     7,    40,    38,    41,    55,    55,    55,    55,    55,
      55,    38,    55,    55,    38,    37,    37,    37,    37,    37,
      40,    40,    40,    31,    39,    40,    40,    40,    40,    31,
      55,     8,    55,    55,    15,    15,    37,     7,     7,    37,
      37,    37,    37,     7,    37,     9,    48,    13,    49,    50,
      40,    40,    40,    39,    16,     7,    16,    14,    37,    51,
      15,    38,    15,    55,    10,    11,    36,    36,    50,    48,
       7,    48,    40,    39,    15,    55,    55,    16,    37,    16,
      15,    55,    48,    37,    37,    48,    40,    16,    18,    18,
      16,    15,    37,    37,    11,    48,    15,    16,    48,    11,
      16,    15,    48,    48,    16,    16,    11,    15,    48,    16
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 37 "1807112.y"
    {printf("Main Function Ends\n");;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 45 "1807112.y"
    {printf("DECLARATION\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 46 "1807112.y"
    {printf("value of expression: %d\n",(yyvsp[(1) - (2)])); (yyval)=(yyvsp[(1) - (2)]);                        
                        ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 48 "1807112.y"
    {
                                        data[(yyvsp[(1) - (4)])] = (yyvsp[(3) - (4)]); 
					printf("Value of the variable: %d\t\n",(yyvsp[(3) - (4)]));
					(yyval)=(yyvsp[(3) - (4)]);
                                        ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 53 "1807112.y"
    {
                                        data[(yyvsp[(1) - (5)])] = (yyvsp[(3) - (5)]); 
					printf("Value of the variable: %d\t\n",(yyvsp[(3) - (5)]));
					(yyval)=(yyvsp[(3) - (5)]);
                                        ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 58 "1807112.y"
    {
                                printf("\nvalue before Increment : %d",(yyvsp[(1) - (4)]) );
                                printf("\nvalue after Increment : %d\n",(yyvsp[(1) - (4)])+1 );
                                (yyval)=(yyvsp[(1) - (4)])+1;
                        ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 63 "1807112.y"
    {
                                printf("\nvalue before Decrement : %d",(yyvsp[(1) - (4)]) );
                                printf("\nvalue after Decrement : %d\n\n",(yyvsp[(1) - (4)])-1 );
                                (yyval)=(yyvsp[(1) - (4)])-1;
                        ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 69 "1807112.y"
    {
                                printf("\nvalue before Increment : %d",(yyvsp[(1) - (4)]) );
                                printf("\nvalue after Increment : %d\n",(yyvsp[(1) - (4)])+1 );
                                (yyval)=(yyvsp[(1) - (4)])+1;
                        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 74 "1807112.y"
    {
                                printf("\nvalue before Decrement : %d",(yyvsp[(1) - (4)]) );
                                printf("\nvalue after Decrement : %d\n\n",(yyvsp[(1) - (4)])-1 );
                                (yyval)=(yyvsp[(1) - (4)])-1;
                        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 79 "1807112.y"
    {
                                                        int i;
                                                        printf("\n***FOR Loop starts...\n");
	                                                for(i=(yyvsp[(3) - (9)]) ; i<(yyvsp[(5) - (9)]) ; i++) {printf("%dth Loop's expression value: %d\n", i,(yyvsp[(8) - (9)]));}
                                                        ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 84 "1807112.y"
    {
	                                                int i;
	                                                printf("\n***WHILE Loop starts...\n");
	                                                for(i=(yyvsp[(3) - (9)]) ; i<(yyvsp[(5) - (9)]) ; i++) 
                                                        {
                                                                printf("%dth Loop's expression value: %d\n", i,(yyvsp[(8) - (9)]));
                                                        }
	                                                printf("\n.........................................\n");									
				        ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 93 "1807112.y"
    {tem=(yyvsp[(3) - (7)]);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 94 "1807112.y"
    {
								if((yyvsp[(3) - (7)]))
								{
									printf("\nvalue of expression in IF: %d\n",((yyvsp[(6) - (7)])));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 105 "1807112.y"
    {
								 	if((yyvsp[(3) - (11)]))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (11)]));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(10) - (11)]));
									}
								   ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 115 "1807112.y"
    {
								 	if((yyvsp[(3) - (22)]))
									{
										if((yyvsp[(8) - (22)]))
											printf("\nvalue of expression middle IF: %d\n",(yyvsp[(11) - (22)]));
										else
											printf("\nvalue of expression middle ELSE: %d\n",(yyvsp[(15) - (22)]));
										printf("\nvalue of expression in first IF: %d\n",(yyvsp[(17) - (22)]));
									}
									else
									{
										printf("\nvalue of expression in else: %d\n",(yyvsp[(21) - (22)]));
									}
								   ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 129 "1807112.y"
    {
								 	if((yyvsp[(3) - (18)]))
									{
										printf("\nvalue of expression in IF: %d\n",(yyvsp[(6) - (18)]));
									}
									else if((yyvsp[(10) - (18)]))
									{
										printf("\nvalue of expression in ELIF: %d\n",(yyvsp[(13) - (18)]));
									}
									else
									{
										printf("\nvalue of expression in ELSE: %d\n",(yyvsp[(17) - (18)]));
									}
								   ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 143 "1807112.y"
    {
		                                printf("ARRAY Declaration\n");
		                                printf("ArraySize : %d\n",(yyvsp[(5) - (9)]));
                                                int i=0;
                                                while(i<(yyvsp[(5) - (9)])) {
                                                        printf("ARRAY's index = %d, intializing value = %d\n",i,(yyvsp[(8) - (9)]));
                                                        i++;
                                                }
	                                ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 152 "1807112.y"
    {
		                printf("***Odd Even Number checking... \n");
		                if((yyvsp[(3) - (5)]) %2 ==0){
			                printf("%d is an Even Number\n\n",(yyvsp[(3) - (5)]));
		                }
		                else{
			                printf("%d is an Odd Number\n\n",(yyvsp[(3) - (5)]));
		                }
                        ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 161 "1807112.y"
    {
                                        printf("\n***Prime Number checking....\n");
                                        int i, flag = 0;
                                        for (i = 2; i <= (yyvsp[(3) - (5)]) / 2; ++i) {
                                                if ((yyvsp[(3) - (5)]) % i == 0) {
                                                flag = 1;
                                                break;
                                                }
                                        }
                                        if ((yyvsp[(3) - (5)]) == 1) {
                                        printf("1 is neither prime nor composite.\n");
                                        } 
                                        else {
                                                if (flag == 0)
                                                        printf("%d is a prime number.\n", (yyvsp[(3) - (5)]));
                                                else
                                                        printf("%d is not a prime number.\n", (yyvsp[(3) - (5)]));
                                        }
                                ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 180 "1807112.y"
    {
                                        int i, t1 = 0, t2 = 1;
                                        int nextTerm = t1 + t2;
                                        printf("\n***Fibonacci Series upto %d terms...\n",(yyvsp[(3) - (5)]));
                                        printf("Fibonacci Series: %d  %d  ", t1, t2);

                                        for (i = 1; i <= (yyvsp[(3) - (5)]); ++i) {
                                                printf("%d  ", nextTerm);
                                                t1 = t2;
                                                t2 = nextTerm;
                                                nextTerm = t1 + t2;
                                        }
                                        printf("\n\n");
                                ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 194 "1807112.y"
    {
                                        int i;
                                        printf("\n***Finding the FACTORS of number %d...\n",(yyvsp[(3) - (5)]));
                                        printf("Factors of %d are: ",(yyvsp[(3) - (5)]));
                                        for (i = 1; i <= (yyvsp[(3) - (5)]); ++i) {
                                                if ((yyvsp[(3) - (5)]) % i == 0) {
                                                printf("%d  ", i);
                                                }
                                        }
                                        printf("\n\n");
                                ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 206 "1807112.y"
    {printf("Printing the result : %d\n\n",(yyvsp[(3) - (5)]));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 216 "1807112.y"
    { if((yyvsp[(2) - (7)])==tem){printf("Case %d executed and the expression value is=%d\n",(yyvsp[(2) - (7)]),(yyvsp[(4) - (7)]));
        f=1;
        }
        ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 221 "1807112.y"
    {if(f==0){printf("Default Case executed and the expression value=%d\n",(yyvsp[(3) - (6)]));};}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 237 "1807112.y"
    { printf("\nNumber :  %d\n",(yyvsp[(1) - (1)]) ); (yyval) = (yyvsp[(1) - (1)]);  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 239 "1807112.y"
    { (yyval) = data[(yyvsp[(1) - (1)])]; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 241 "1807112.y"
    {printf("\nAdding Two Numbers : %d+%d = %d \n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])+(yyvsp[(3) - (3)]) );  (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 243 "1807112.y"
    {printf("\nSubtracting Two Numbers : %d-%d=%d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])-(yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 245 "1807112.y"
    {printf("\nMultiplication of Two Numbers : %d*%d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])*(yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 247 "1807112.y"
    { if((yyvsp[(3) - (3)])){
				     		printf("\nDivision :%d/%d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])/(yyvsp[(3) - (3)]));
				     		(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
				     					
				  	}
				  	else{
						(yyval) = 0;
						printf("\nDivision by zero\n\t");
				  	} 	
				;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 257 "1807112.y"
    { if((yyvsp[(3) - (3)])){
				     		printf("\nMod :%d %d %d \n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]));
				     		(yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]);
				     					
				  	}
				  	else{
						(yyval) = 0;
						printf("\nMOD by zero\n");
				  	} 	
				;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 267 "1807112.y"
    {printf("\nPower  :%d ^ %d \n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)]) ^ (yyvsp[(3) - (3)]));  (yyval) = pow((yyvsp[(1) - (3)]) , (yyvsp[(3) - (3)]));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 268 "1807112.y"
    {printf("\nLess-Than functionality :%d < %d \n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]) ; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 270 "1807112.y"
    {printf("\nGreater-Than functionality :%d > %d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 271 "1807112.y"
    {
                                        
                                        printf("\nEqual functionality: %d == %d\n",(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]));
                                        (yyval) = (yyvsp[(1) - (4)]) == (yyvsp[(4) - (4)]);                                        
                                ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 276 "1807112.y"
    {
                                        
                                        printf("\nInequal functionality: %d == %d\n",(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]));
                                        (yyval) = (yyvsp[(1) - (4)]) != (yyvsp[(4) - (4)]);                                        
                                ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 282 "1807112.y"
    {(yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 283 "1807112.y"
    {
                                        printf("\n***Trigonometric Function...\n");
                                        printf("\nValue of Sin(%d) is : %lf\n",(yyvsp[(2) - (2)]),sin((yyvsp[(2) - (2)])*3.1416/180)); 
                                        (yyval)=sin((yyvsp[(2) - (2)])*3.1416/180);
                                        ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 289 "1807112.y"
    {
                                        printf("\n***Trigonometric Function...\n");
                                        printf("\nValue of Cos(%d) is : %lf\n",(yyvsp[(2) - (2)]),cos((yyvsp[(2) - (2)])*3.1416/180)); 
                                        (yyval)=cos((yyvsp[(2) - (2)])*3.1416/180);
                                        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 295 "1807112.y"
    {
                                        printf("\n***Trigonometric Function...\n");
                                        printf("\nValue of Tan(%d) is : %lf\n\n",(yyvsp[(2) - (2)]),tan((yyvsp[(2) - (2)])*3.1416/180)); 
                                        (yyval)=tan((yyvsp[(2) - (2)])*3.1416/180);
                                        ;}
    break;



/* Line 1455 of yacc.c  */
#line 1991 "1807112.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 303 "1807112.y"


/*Additional C code*/

void yyerror(char *s){    //called by yyparse on error
	printf( "%s\n", s);
}



