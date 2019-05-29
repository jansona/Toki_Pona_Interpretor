
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
#line 3 ".\\toki_pona.y"

#include <stdio.h>
#include <stdlib.h>
char buf[100];


/* Line 189 of yacc.c  */
#line 80 "toki_pona.tab.c"

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
     ALA = 258,
     SONA = 259,
     WAWA = 260,
     LUPA = 261,
     ONA = 262,
     NANPA = 263,
     IJO = 264,
     ILO = 265,
     OLIN = 266,
     WILE = 267,
     MUTE = 268,
     OKO = 269,
     SEWI = 270,
     LON = 271,
     TENPO = 272,
     JAKI = 273,
     JO = 274,
     NASIN = 275,
     TOKI = 276,
     SUNO = 277,
     UTA = 278,
     WIKE = 279,
     NASA = 280,
     ALI = 281,
     WALO = 282,
     LASO = 283,
     KILI = 284,
     SUPA = 285,
     AWEN = 286,
     LETE = 287,
     AKESI = 288,
     NENA = 289,
     UTALA = 290,
     NIMI = 291,
     SINPIN = 292,
     LAPE = 293,
     SITELEN = 294,
     POKA = 295,
     SAMA = 296,
     MOLI = 297,
     LUKIN = 298,
     JELO = 299,
     PAKALA = 300,
     MA = 301,
     LEN = 302,
     ALE = 303,
     LAWA = 304,
     KIWEN = 305,
     PINI = 306,
     WASO = 307,
     KULUPU = 308,
     PALI = 309,
     JAN = 310,
     OPEN = 311,
     TASO = 312,
     KUTE = 313,
     KALA = 314,
     TELO = 315,
     MONSI = 316,
     LILI = 317,
     KEN = 318,
     TOMO = 319,
     MAMA = 320,
     MIJE = 321,
     PONA = 322,
     SEME = 323,
     TU = 324,
     MELI = 325,
     PIMEJA = 326,
     PIPI = 327,
     NOKA = 328,
     KULE = 329,
     SIN = 330,
     SOWELI = 331,
     SUWI = 332,
     ANTE = 333,
     SIKE = 334,
     KALAMA = 335,
     LINJA = 336,
     KASI = 337,
     SIJELO = 338,
     MUN = 339,
     PANA = 340,
     TAWA = 341,
     LOJE = 342,
     TAN = 343,
     KEPEKEN = 344,
     KAMA = 345,
     SELO = 346,
     MI = 347,
     POKI = 348,
     SELI = 349,
     IKE = 350,
     PILIN = 351,
     WAN = 352,
     LUKA = 353,
     MANI = 354,
     ANPA = 355,
     SULI = 356,
     MUSI = 357,
     WEKA = 358,
     INSA = 359,
     LIPU = 360,
     MOKU = 361,
     KIN = 362,
     SINA = 363,
     NI = 364,
     UNPA = 365,
     PALISA = 366,
     LI = 367,
     LA = 368,
     O = 369,
     ANU = 370,
     EN = 371,
     E = 372,
     ENDMARK = 373
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
#line 240 "toki_pona.tab.c"

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
#define YYFINAL  180
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2062

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  292
/* YYNRULES -- Number of states.  */
#define YYNSTATES  381

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   373

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    13,    16,    18,    20,
      22,    25,    29,    32,    36,    39,    42,    45,    48,    51,
      54,    56,    58,    61,    63,    65,    67,    71,    73,    75,
      77,    79,    82,    85,    89,    91,    94,    96,   100,   102,
     104,   107,   109,   112,   115,   119,   123,   126,   130,   133,
     137,   139,   142,   145,   147,   150,   153,   157,   160,   164,
     166,   168,   170,   172,   174,   176,   179,   183,   187,   191,
     193,   195,   197,   199,   201,   203,   205,   207,   209,   211,
     213,   215,   217,   219,   221,   223,   225,   227,   229,   231,
     233,   235,   237,   239,   241,   243,   245,   247,   249,   251,
     253,   255,   257,   259,   261,   263,   265,   267,   269,   271,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   345,   347,   349,   351,
     353,   355,   357,   359,   361,   363,   365,   367,   369,   371,
     373,   375,   377,   379,   381,   383,   385,   387,   389,   391,
     393,   395,   397,   399,   401,   403,   405,   407,   409,   411,
     413,   415,   417,   419,   421,   423,   425,   427,   429,   431,
     433,   435,   437,   439,   441,   443,   445,   447,   449,   451,
     453,   455,   457,   459,   461,   463,   465,   467,   469,   471,
     473,   475,   477,   479,   481,   483,   485,   487,   489,   491,
     493,   495,   497,   499,   501,   503,   505,   507,   509,   511,
     513,   515,   517,   519,   521,   523,   525,   527,   529,   531,
     533,   535,   537,   539,   541,   543,   545,   547,   549,   551,
     553,   555,   557,   559,   561,   563,   565,   567,   569,   571,
     573,   575,   577,   579,   581,   583,   585,   587,   589,   591,
     593,   595,   597,   599,   601,   603,   605,   607,   609,   611,
     613,   615,   617,   619,   621,   623,   625,   627,   629,   631,
     633,   635,   637
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     120,     0,    -1,   121,    -1,   122,   122,    -1,   123,   118,
      -1,   128,    -1,   127,   128,    -1,   124,    -1,   125,    -1,
     126,    -1,   132,   114,    -1,   132,   114,   136,    -1,   114,
     136,    -1,   127,   114,   136,    -1,   128,   113,    -1,   132,
     113,    -1,    57,   128,    -1,    63,   113,    -1,    78,   113,
      -1,   129,   136,    -1,    92,    -1,   108,    -1,   130,   112,
      -1,   150,    -1,   131,    -1,   134,    -1,   132,   133,   132,
      -1,   149,    -1,   131,    -1,   116,    -1,   115,    -1,   149,
     135,    -1,   149,   149,    -1,   149,   149,   135,    -1,   151,
      -1,   151,   135,    -1,   137,    -1,   137,   112,   136,    -1,
     138,    -1,   139,    -1,   137,   143,    -1,   141,    -1,    16,
     132,    -1,    86,   132,    -1,   144,    16,   132,    -1,   144,
      86,   132,    -1,   141,   140,    -1,   144,   141,   140,    -1,
     117,   132,    -1,   117,   132,   140,    -1,   148,    -1,   144,
     148,    -1,   148,   135,    -1,   142,    -1,   144,   142,    -1,
     142,   135,    -1,   148,     3,   148,    -1,   152,   132,    -1,
     152,   132,   143,    -1,   145,    -1,   146,    -1,   147,    -1,
      90,    -1,    63,    -1,    12,    -1,   145,     3,    -1,    90,
       3,    90,    -1,    63,     3,    63,    -1,    12,     3,    12,
      -1,    43,    -1,   103,    -1,    95,    -1,    74,    -1,    51,
      -1,    19,    -1,    67,    -1,    13,    -1,    38,    -1,     9,
      -1,    42,    -1,    45,    -1,    49,    -1,     4,    -1,   101,
      -1,    86,    -1,    12,    -1,    55,    -1,    89,    -1,    56,
      -1,    21,    -1,    32,    -1,    11,    -1,    78,    -1,    31,
      -1,     5,    -1,    62,    -1,    16,    -1,    94,    -1,    75,
      -1,    69,    -1,    35,    -1,    39,    -1,   102,    -1,    97,
      -1,    77,    -1,   100,    -1,    90,    -1,    40,    -1,    60,
      -1,   106,    -1,    96,    -1,    64,    -1,    71,    -1,   110,
      -1,    25,    -1,    18,    -1,    80,    -1,    54,    -1,    85,
      -1,    63,    -1,    92,    -1,   108,    -1,   150,    -1,    51,
      -1,   102,    -1,    82,    -1,    79,    -1,    95,    -1,     6,
      -1,    72,    -1,    93,    -1,    67,    -1,    59,    -1,     8,
      -1,    27,    -1,    45,    -1,    10,    -1,    12,    -1,    78,
      -1,   101,    -1,    98,    -1,    96,    -1,    20,    -1,    33,
      -1,    15,    -1,    65,    -1,    86,    -1,    66,    -1,    61,
      -1,    90,    -1,     5,    -1,    13,    -1,   110,    -1,    69,
      -1,    39,    -1,    68,    -1,    99,    -1,     4,    -1,    22,
      -1,    26,    -1,    34,    -1,    80,    -1,    36,    -1,    62,
      -1,    64,    -1,    53,    -1,   109,    -1,    54,    -1,    47,
      -1,    58,    -1,   103,    -1,    19,    -1,    30,    -1,    84,
      -1,    18,    -1,    11,    -1,    37,    -1,    40,    -1,   111,
      -1,    76,    -1,    71,    -1,    48,    -1,   105,    -1,     7,
      -1,    83,    -1,    50,    -1,    32,    -1,    63,    -1,    29,
      -1,     3,    -1,    35,    -1,    91,    -1,    52,    -1,    77,
      -1,    88,    -1,    97,    -1,    49,    -1,    74,    -1,    17,
      -1,   106,    -1,    23,    -1,    14,    -1,   104,    -1,    60,
      -1,    94,    -1,    70,    -1,    55,    -1,    85,    -1,    73,
      -1,    21,    -1,    81,    -1,    42,    -1,     9,    -1,    46,
      -1,     9,    -1,    15,    -1,   104,    -1,   107,    -1,    62,
      -1,   106,    -1,    51,    -1,    95,    -1,    41,    -1,    92,
      -1,    68,    -1,   101,    -1,    75,    -1,    13,    -1,    50,
      -1,    54,    -1,    71,    -1,    67,    -1,    28,    -1,    25,
      -1,    79,    -1,    90,    -1,    42,    -1,    58,    -1,    48,
      -1,    97,    -1,    26,    -1,    87,    -1,    32,    -1,    38,
      -1,    74,    -1,    24,    -1,    18,    -1,   102,    -1,     7,
      -1,    53,    -1,    23,    -1,    60,    -1,    27,    -1,    11,
      -1,    49,    -1,    31,    -1,    57,    -1,    43,    -1,    69,
      -1,    94,    -1,   108,    -1,    86,    -1,    66,    -1,    84,
      -1,    45,    -1,   109,    -1,    64,    -1,   103,    -1,     5,
      -1,    55,    -1,    21,    -1,    78,    -1,    80,    -1,    65,
      -1,   110,    -1,    61,    -1,     3,    -1,    40,    -1,    44,
      -1,    70,    -1,    77,    -1,    16,    -1,    40,    -1,    86,
      -1,    88,    -1,    89,    -1,    41,    -1,   112,    -1,   113,
      -1,   114,    -1,   115,    -1,   116,    -1,   117,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    13,    13,    16,    22,    28,    32,    37,    41,    45,
      51,    56,    63,    68,    75,    80,    85,    90,    95,   102,
     109,   111,   113,   120,   121,   128,   134,   141,   142,   145,
     146,   149,   155,   161,   169,   170,   177,   179,   186,   187,
     188,   195,   196,   201,   206,   211,   218,   223,   230,   235,
     238,   239,   244,   249,   250,   255,   262,   269,   274,   281,
     282,   283,   286,   287,   288,   291,   298,   303,   308,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     318,   319,   320,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALA", "SONA", "WAWA", "LUPA", "ONA",
  "NANPA", "IJO", "ILO", "OLIN", "WILE", "MUTE", "OKO", "SEWI", "LON",
  "TENPO", "JAKI", "JO", "NASIN", "TOKI", "SUNO", "UTA", "WIKE", "NASA",
  "ALI", "WALO", "LASO", "KILI", "SUPA", "AWEN", "LETE", "AKESI", "NENA",
  "UTALA", "NIMI", "SINPIN", "LAPE", "SITELEN", "POKA", "SAMA", "MOLI",
  "LUKIN", "JELO", "PAKALA", "MA", "LEN", "ALE", "LAWA", "KIWEN", "PINI",
  "WASO", "KULUPU", "PALI", "JAN", "OPEN", "TASO", "KUTE", "KALA", "TELO",
  "MONSI", "LILI", "KEN", "TOMO", "MAMA", "MIJE", "PONA", "SEME", "TU",
  "MELI", "PIMEJA", "PIPI", "NOKA", "KULE", "SIN", "SOWELI", "SUWI",
  "ANTE", "SIKE", "KALAMA", "LINJA", "KASI", "SIJELO", "MUN", "PANA",
  "TAWA", "LOJE", "TAN", "KEPEKEN", "KAMA", "SELO", "MI", "POKI", "SELI",
  "IKE", "PILIN", "WAN", "LUKA", "MANI", "ANPA", "SULI", "MUSI", "WEKA",
  "INSA", "LIPU", "MOKU", "KIN", "SINA", "NI", "UNPA", "PALISA", "LI",
  "LA", "O", "ANU", "EN", "E", "ENDMARK", "$accept", "toki_pona",
  "sentences", "sentence_with_end", "sentence", "o_sentence",
  "o_sentence_1", "o_sentence_2", "condition", "svo_sentence", "subject",
  "norm_noun_phase", "structed_noun_phase", "noun_phase", "conj",
  "decorated_noun_struct", "decorator", "vo_struct", "verb_phase",
  "no_acceptance_verb_phase", "acceptance_verb_phase", "acceptance_obj",
  "verb_group", "YnN_verb", "po_phase", "modal_verb", "postive_modal_verb",
  "negative_modal_verb", "YnN_modal_verb", "verb", "noun",
  "norm_subject_noun", "decorator_word", "prepostion", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   119,   120,   121,   122,   123,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   127,   128,
     129,   129,   129,   130,   130,   131,   131,   132,   132,   133,
     133,   134,   134,   134,   135,   135,   136,   136,   137,   137,
     137,   138,   138,   138,   138,   138,   139,   139,   140,   140,
     141,   141,   141,   141,   141,   141,   142,   143,   143,   144,
     144,   144,   145,   145,   145,   146,   147,   147,   147,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     149,   149,   149,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     2,     1,     1,     1,
       2,     3,     2,     3,     2,     2,     2,     2,     2,     2,
       1,     1,     2,     1,     1,     1,     3,     1,     1,     1,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     1,
       2,     1,     2,     2,     3,     3,     2,     3,     2,     3,
       1,     2,     2,     1,     2,     2,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   189,   157,   150,   128,   183,   133,   212,   136,   175,
     137,   151,   201,   144,   198,   174,   171,   142,   209,   158,
     200,   159,   134,   188,   172,   186,   143,   160,   190,   162,
     176,   154,   177,   211,   135,   213,   168,   181,   196,   185,
     123,   192,   165,   167,   206,     0,   169,   132,   203,   148,
     163,   187,   164,   145,   147,   131,   155,   153,   205,   180,
     129,   208,   197,   179,   193,   138,   126,   161,   210,   125,
     184,   173,   207,   146,   194,   149,   191,   120,   130,   204,
     127,   141,   195,   140,   156,   139,   124,   170,   202,   182,
     199,   121,   166,   152,   178,     0,     0,     2,     0,     0,
       7,     8,     9,     0,     5,     0,     0,    28,     0,    25,
      27,   122,   187,   138,    16,     0,    17,    18,    82,    94,
      78,    91,    85,    76,    96,   115,    74,    89,   114,    93,
      90,   100,    77,   101,   107,    79,    69,    80,    81,    73,
     117,    86,    88,   108,    95,   119,   111,    75,    99,   112,
      72,    98,   104,    92,   116,   118,    84,    87,   106,    97,
      71,   110,   103,   105,    83,   102,    70,   109,   113,    12,
      36,    38,    39,    41,    53,     0,    59,    60,    61,    50,
       1,     3,     4,     0,     6,    14,    19,    22,    15,    10,
      30,    29,     0,   189,   150,   183,   212,   175,   151,   144,
     174,   209,   200,   245,   233,   159,   134,   232,   255,   186,
     243,   177,   222,   211,   257,   278,   135,   181,   196,   185,
     123,   165,   167,   206,   256,   169,   203,   148,   163,   164,
     145,   147,   131,   155,   153,   205,   180,   197,   226,   193,
     138,   126,   161,   173,   146,   241,   149,   120,   204,   127,
     195,   139,   124,   170,   202,   199,   217,   121,   166,   152,
      31,    32,   122,    34,     0,   120,   121,    28,    42,     0,
      43,     0,   281,   282,   286,   283,   284,   285,   287,   288,
     289,   290,   291,   292,    40,     0,     0,    46,   276,   268,
     248,   214,   253,   227,   215,   246,   270,   250,   240,   252,
     242,   277,   236,   264,   238,   254,   228,   220,   249,   229,
     269,   237,   251,   275,   218,   266,   273,   262,   231,   224,
     258,   279,   230,   244,   280,   271,   234,   272,   263,   261,
     235,   223,   259,   221,   239,   225,   247,   267,   216,   219,
     260,   265,   274,    55,    96,    84,     0,    54,     0,    51,
      65,   276,    52,    13,    11,    26,    33,    35,    68,    67,
      66,    37,    57,    48,    44,    45,    47,    85,    96,   119,
      84,   106,    54,    51,    56,   287,    30,    29,    58,    49,
       0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   267,   108,   192,   109,   343,   169,   170,   171,
     172,   287,   173,   174,   284,   175,   176,   177,   178,   179,
     110,   262,   263,   285
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -339
static const yytype_int16 yypact[] =
{
     477,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,   810,  -339,  -339,  -339,  -339,
    -339,   -93,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,   -92,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  1552,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  1652,  -339,  -339,  -339,  1752,    16,  -339,   477,   -96,
    -339,  -339,  -339,   589,   -89,  1752,   -86,   -85,  -104,  -339,
     701,   -84,  -339,  -339,  -339,   -97,  -339,  -339,  -339,  -339,
    -339,  -339,  1244,  -339,   919,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  1348,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,   919,  -339,  1452,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
       1,  -339,  -339,   -88,  1028,  1852,    27,  -339,  -339,  1136,
    -339,  -339,  -339,  1752,  -339,  -339,  -339,  -339,  -339,  1752,
    -339,  -339,   919,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  1028,  -339,  1028,    19,  -339,  -339,  -339,   -97,   -31,
     -97,   -57,  -339,  -339,  -339,  -339,  -339,  -339,  1752,  -339,
    -339,  -339,  -339,  -339,  -339,   919,   919,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,   919,   919,   -88,   253,  1952,   362,
    -339,  1952,  -339,  -339,  -339,   -97,  -339,  -339,  -339,  -339,
    -339,  -339,     7,  -102,   -97,   -97,  -339,  -339,  -339,  -339,
    -339,  -339,  -339,    31,  -339,  -339,  -339,  -339,  -339,  -339,
    1952
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -339,  -339,  -339,   -63,  -339,  -339,  -339,  -339,  -339,   -38,
    -339,  -339,     4,   -45,  -339,  -339,  -107,  -103,  -339,  -339,
    -339,  -338,  -139,  -170,  -325,  -137,  -339,  -339,  -339,  -174,
     -71,     6,  -339,  -339
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -65
static const yytype_int16 yytable[] =
{
     115,   349,   186,   260,   107,   347,   111,   114,   366,   188,
     189,   190,   191,   190,   191,   286,   180,   272,   190,   191,
     116,   117,   182,   272,   185,   379,   187,   -24,   -23,   286,
     350,   358,   359,   360,   380,   181,   346,   378,   348,   261,
       0,   273,   274,     0,     0,     0,     0,   273,   274,   107,
       0,   111,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,     0,     0,     0,   184,     0,     0,     0,     0,
       0,     0,   352,     0,     0,     0,     0,     0,     0,   268,
     353,     0,     0,     0,     0,     0,   354,   275,     0,   276,
     277,     0,     0,   275,     0,   276,   277,     0,     0,     0,
       0,     0,   107,     0,   111,     0,     0,   107,     0,   111,
       0,   270,     0,   278,   279,   280,   281,   282,   283,   375,
     279,   280,   376,   377,   283,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   355,     0,     0,
       0,     0,     0,     0,   356,     0,   357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   373,   361,     0,   374,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   374,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     362,   363,   352,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   288,     0,   289,     0,
     290,     0,   291,     0,   292,     0,   293,     0,   294,     0,
       0,   295,     0,     0,   296,     0,   297,   203,   204,   298,
     299,   207,     0,     0,   208,   300,     0,     0,     0,     0,
       0,   210,     0,   301,   212,   302,   214,   215,   303,   364,
     365,   304,   305,   306,   307,     0,   308,   309,   310,     0,
     224,   311,     0,   312,   313,   314,     0,   315,   316,   317,
     318,   319,   320,   321,   322,     0,     0,   323,   238,     0,
     324,   325,   326,   327,     0,     0,     0,   328,     0,   329,
     245,     0,     0,   330,     0,   331,     0,   332,   333,     0,
     334,     0,     0,     0,   335,   336,   337,   338,     0,   339,
     256,   340,   341,   342,     0,   351,     0,   289,     0,   290,
     -53,   291,     0,   292,     0,   293,     0,   294,     0,     0,
     295,     0,     0,   296,     0,   297,   203,   204,   298,   299,
     207,     0,     0,   208,   300,     0,     0,     0,     0,     0,
     210,     0,   301,   212,   302,   214,   215,   303,     0,     0,
     304,   305,   306,   307,     0,   308,   309,   310,     0,   224,
     311,     0,   312,   313,   314,     0,   315,   316,   317,   318,
     319,   320,   321,   322,     0,     0,   323,   238,     0,   324,
     325,   326,   327,     0,     0,     0,   328,     0,   329,   245,
       0,     0,   330,     0,   331,     0,   332,   333,     0,   334,
       0,     0,     0,   335,   336,   337,   338,     0,   339,   256,
     340,   341,   342,     0,     0,     0,     0,     0,     0,   -50,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,    14,    15,    16,    17,    18,    19,
      20,     0,     0,    21,    22,     0,    23,    24,     0,    25,
      26,    27,    28,    29,    30,     0,    31,    32,     0,    33,
       0,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,     0,    74,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,     0,    85,    86,
      87,    88,    89,    90,     0,    91,    92,    93,    94,     0,
       0,    95,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,    19,    20,     0,     0,    21,    22,     0,    23,    24,
       0,    25,    26,    27,    28,    29,    30,     0,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,    46,    47,    48,
      49,    50,   112,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,    63,    64,   113,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,     0,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
      85,    86,    87,    88,    89,    90,     0,    91,    92,    93,
      94,     0,     0,   183,   193,     2,   194,     4,   195,     6,
     196,     8,   197,    10,   198,    12,   199,     0,    14,   200,
      16,    17,   201,    19,   202,   203,   204,   205,   206,   207,
      23,    24,   208,   209,    26,    27,    28,    29,    30,   210,
      31,   211,   212,   213,   214,   215,   216,    35,    36,   217,
     218,   219,   220,    41,   221,   222,   223,     0,   224,   225,
      47,   226,   227,   228,   112,   229,   230,   231,   232,   233,
     234,   235,   236,    60,    61,   237,   238,    63,   239,   240,
     241,   242,    68,    69,    70,   243,    72,   244,   245,    74,
       0,   246,    76,   247,    78,   248,   249,    81,   250,    83,
      84,     0,   251,   252,   253,   254,    89,   255,   256,   257,
     258,   259,    94,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,     0,     0,    21,    22,     0,    23,
      24,     0,    25,    26,    27,    28,    29,    30,     0,    31,
      32,     0,    33,     0,     0,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,     0,    46,    47,
      48,    49,    50,   112,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,    63,    64,   113,    66,
      67,    68,    69,    70,    71,    72,    73,     0,    74,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,    85,    86,    87,    88,    89,    90,     0,    91,    92,
      93,    94,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,    19,    20,     0,     0,    21,    22,     0,    23,    24,
       0,    25,    26,    27,    28,    29,    30,     0,    31,    32,
       0,    33,     0,     0,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,     0,    46,    47,    48,
      49,    50,   112,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,    63,    64,   113,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,     0,    75,
      76,   265,    78,    79,    80,    81,    82,    83,    84,     0,
      85,    86,    87,    88,    89,    90,     0,   266,    92,    93,
      94,   288,     0,   289,     0,   290,     0,   291,     0,   292,
       0,   293,     0,   294,     0,     0,   295,     0,     0,   296,
       0,   297,   203,   204,   298,   299,   207,     0,     0,   208,
     300,     0,     0,     0,     0,     0,   210,     0,   301,   212,
     302,   214,   215,   303,     0,     0,   304,   305,   306,   307,
       0,   308,   309,   310,     0,   224,   311,     0,   312,   313,
     314,     0,   315,   316,   317,   318,   319,   320,   321,   322,
       0,     0,   323,   238,     0,   324,   325,   326,   327,     0,
       0,     0,   328,     0,   329,   245,     0,     0,   330,     0,
     331,     0,   332,   333,     0,   334,     0,     0,     0,   335,
     336,   337,   338,     0,   339,   256,   340,   341,   342,   351,
       0,   289,     0,   290,     0,   291,     0,   292,     0,   293,
       0,   294,     0,     0,   295,     0,     0,   296,     0,   297,
     203,   204,   298,   299,   207,     0,     0,   208,   300,     0,
       0,     0,     0,     0,   210,     0,   301,   212,   302,   214,
     215,   303,     0,     0,   304,   305,   306,   307,     0,   308,
     309,   310,     0,   224,   311,     0,   312,   313,   314,     0,
     315,   316,   317,   318,   319,   320,   321,   322,     0,     0,
     323,   238,     0,   324,   325,   326,   327,     0,     0,     0,
     328,     0,   329,   245,     0,     0,   330,     0,   331,     0,
     332,   333,     0,   334,     0,     0,     0,   335,   336,   337,
     338,     0,   339,   256,   340,   341,   342,   264,   -64,   -64,
       0,     0,     0,   -64,     0,   -64,   -64,   -64,     0,     0,
     -64,     0,   -64,   -64,     0,   -64,     0,     0,     0,   -64,
       0,     0,     0,     0,     0,   -64,   -64,     0,     0,   -64,
       0,     0,   -64,   -64,   -64,     0,   -64,   -64,     0,   -64,
       0,     0,     0,   -64,     0,   -64,     0,     0,   -64,   -64,
     -64,     0,     0,     0,   -64,     0,   -64,   -64,   -64,     0,
       0,   -64,     0,   -64,     0,   -64,     0,     0,   -64,   -64,
       0,   -64,   -64,     0,   -64,     0,     0,     0,     0,   -64,
     -64,     0,     0,   -64,   -64,     0,     0,     0,   -64,   -64,
     -64,   -64,     0,     0,   -64,   -64,   -64,   -64,     0,     0,
     -64,   269,   -63,   -63,   -64,     0,     0,   -63,     0,   -63,
     -63,   -63,     0,     0,   -63,     0,   -63,   -63,     0,   -63,
       0,     0,     0,   -63,     0,     0,     0,     0,     0,   -63,
     -63,     0,     0,   -63,     0,     0,   -63,   -63,   -63,     0,
     -63,   -63,     0,   -63,     0,     0,     0,   -63,     0,   -63,
       0,     0,   -63,   -63,   -63,     0,     0,     0,   -63,     0,
     -63,   -63,   -63,     0,     0,   -63,     0,   -63,     0,   -63,
       0,     0,   -63,   -63,     0,   -63,   -63,     0,   -63,     0,
       0,     0,     0,   -63,   -63,     0,     0,   -63,   -63,     0,
       0,     0,   -63,   -63,   -63,   -63,     0,     0,   -63,   -63,
     -63,   -63,     0,     0,   -63,   271,   -62,   -62,   -63,     0,
       0,   -62,     0,   -62,   -62,   -62,     0,     0,   -62,     0,
     -62,   -62,     0,   -62,     0,     0,     0,   -62,     0,     0,
       0,     0,     0,   -62,   -62,     0,     0,   -62,     0,     0,
     -62,   -62,   -62,     0,   -62,   -62,     0,   -62,     0,     0,
       0,   -62,     0,   -62,     0,     0,   -62,   -62,   -62,     0,
       0,     0,   -62,     0,   -62,   -62,   -62,     0,     0,   -62,
       0,   -62,     0,   -62,     0,     0,   -62,   -62,     0,   -62,
     -62,     0,   -62,     0,     0,     0,     0,   -62,   -62,     0,
       0,   -62,   -62,     0,     0,     0,   -62,   -62,   -62,   -62,
       0,     0,   -62,   -62,   -62,   -62,   -20,   -20,   -62,     0,
       0,   -20,   -62,   -20,   -20,   -20,     0,     0,   -20,     0,
     -20,   -20,     0,   -20,     0,     0,     0,   -20,     0,     0,
       0,     0,     0,   -20,   -20,     0,     0,   -20,     0,     0,
     -20,   -20,   -20,     0,   -20,   -20,     0,   -20,     0,     0,
       0,   -20,     0,   -20,     0,     0,   -20,   -20,   -20,     0,
       0,     0,   -20,     0,   -20,   -20,   -20,     0,     0,   -20,
       0,   -20,     0,   -20,     0,     0,   -20,   -20,     0,   -20,
     -20,     0,   -20,     0,     0,     0,     0,   -20,   -20,     0,
       0,   -20,   -20,     0,     0,     0,   -20,   -20,   -20,   -20,
       0,     0,   -20,   -20,   -20,   -20,   -21,   -21,   -20,     0,
       0,   -21,   -20,   -21,   -21,   -21,     0,     0,   -21,     0,
     -21,   -21,     0,   -21,     0,     0,     0,   -21,     0,     0,
       0,     0,     0,   -21,   -21,     0,     0,   -21,     0,     0,
     -21,   -21,   -21,     0,   -21,   -21,     0,   -21,     0,     0,
       0,   -21,     0,   -21,     0,     0,   -21,   -21,   -21,     0,
       0,     0,   -21,     0,   -21,   -21,   -21,     0,     0,   -21,
       0,   -21,     0,   -21,     0,     0,   -21,   -21,     0,   -21,
     -21,     0,   -21,     0,     0,     0,     0,   -21,   -21,     0,
       0,   -21,   -21,     0,     0,     0,   -21,   -21,   -21,   -21,
       0,     0,   -21,   -21,   -21,   -21,   118,   119,   -21,     0,
       0,   120,   -21,   121,   122,   123,     0,     0,   124,     0,
     125,   126,     0,   127,     0,     0,     0,   128,     0,     0,
       0,     0,     0,   129,   130,     0,     0,   131,     0,     0,
     132,   133,   134,     0,   135,   136,     0,   137,     0,     0,
       0,   138,     0,   139,     0,     0,   140,   141,   142,     0,
       0,     0,   143,     0,   144,   145,   146,     0,     0,   147,
       0,   148,     0,   149,     0,     0,   150,   151,     0,   152,
     153,     0,   154,     0,     0,     0,     0,   155,   156,     0,
       0,   157,   158,     0,     0,     0,   159,   160,   161,   162,
       0,     0,   163,   164,   165,   166,   118,   119,   167,     0,
       0,   120,   168,   121,   122,   123,     0,     0,   344,     0,
     125,   126,     0,   127,     0,     0,     0,   128,     0,     0,
       0,     0,     0,   129,   130,     0,     0,   131,     0,     0,
     132,   133,   134,     0,   135,   136,     0,   137,     0,     0,
       0,   138,     0,   139,     0,     0,   140,   141,   142,     0,
       0,     0,   143,     0,   144,   145,   146,     0,     0,   147,
       0,   148,     0,   149,     0,     0,   150,   151,     0,   152,
     153,     0,   154,     0,     0,     0,     0,   155,   345,     0,
       0,   157,   158,     0,     0,     0,   159,   160,   161,   162,
       0,     0,   163,   164,   165,   166,   118,   119,   167,     0,
       0,   120,   168,   121,   367,   123,     0,     0,   368,     0,
     125,   126,     0,   127,     0,     0,     0,   128,     0,     0,
       0,     0,     0,   129,   130,     0,     0,   131,     0,     0,
     132,   133,   134,     0,   135,   136,     0,   137,     0,     0,
       0,   138,     0,   139,     0,     0,   140,   141,   142,     0,
       0,     0,   143,     0,   144,   369,   146,     0,     0,   147,
       0,   148,     0,   149,     0,     0,   150,   151,     0,   152,
     153,     0,   154,     0,     0,     0,     0,   155,   370,     0,
       0,   157,   371,     0,     0,     0,   159,   160,   161,   162,
       0,     0,   163,   164,   165,   166,     0,     0,   167,     0,
       0,     0,   168
};

static const yytype_int16 yycheck[] =
{
      45,   175,   105,   110,     0,   175,     0,    45,   346,   113,
     114,   115,   116,   115,   116,   117,     0,    16,   115,   116,
     113,   113,   118,    16,   113,   363,   112,   112,   112,   117,
       3,    12,    63,    90,     3,    98,   175,   362,   175,   110,
      -1,    40,    41,    -1,    -1,    -1,    -1,    40,    41,    45,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     183,    -1,    -1,    -1,    -1,    -1,   189,    86,    -1,    88,
      89,    -1,    -1,    86,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    98,    -1,    -1,   103,    -1,   103,
      -1,   156,    -1,   112,   113,   114,   115,   116,   117,   112,
     113,   114,   115,   116,   117,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,    -1,   261,    -1,   263,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   348,   278,    -1,   351,   348,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     285,   286,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,
       7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,    -1,
      -1,    18,    -1,    -1,    21,    -1,    23,    24,    25,    26,
      27,    28,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,    45,   344,
     345,    48,    49,    50,    51,    -1,    53,    54,    55,    -1,
      57,    58,    -1,    60,    61,    62,    -1,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    74,    75,    -1,
      77,    78,    79,    80,    -1,    -1,    -1,    84,    -1,    86,
      87,    -1,    -1,    90,    -1,    92,    -1,    94,    95,    -1,
      97,    -1,    -1,    -1,   101,   102,   103,   104,    -1,   106,
     107,   108,   109,   110,    -1,     3,    -1,     5,    -1,     7,
     117,     9,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,
      18,    -1,    -1,    21,    -1,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    -1,    53,    54,    55,    -1,    57,
      58,    -1,    60,    61,    62,    -1,    64,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    74,    75,    -1,    77,
      78,    79,    80,    -1,    -1,    -1,    84,    -1,    86,    87,
      -1,    -1,    90,    -1,    92,    -1,    94,    95,    -1,    97,
      -1,    -1,    -1,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,   117,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    -1,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    26,    27,    -1,    29,    30,    -1,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    -1,    42,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,    -1,   108,   109,   110,   111,    -1,
      -1,   114,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    26,    27,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    42,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
     101,   102,   103,   104,   105,   106,    -1,   108,   109,   110,
     111,    -1,    -1,   114,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    26,    27,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    -1,    39,
      40,    -1,    42,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,    -1,   108,   109,
     110,   111,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    26,    27,    -1,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      -1,    42,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    -1,
     101,   102,   103,   104,   105,   106,    -1,   108,   109,   110,
     111,     3,    -1,     5,    -1,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    18,    -1,    -1,    21,
      -1,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      -1,    53,    54,    55,    -1,    57,    58,    -1,    60,    61,
      62,    -1,    64,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    74,    75,    -1,    77,    78,    79,    80,    -1,
      -1,    -1,    84,    -1,    86,    87,    -1,    -1,    90,    -1,
      92,    -1,    94,    95,    -1,    97,    -1,    -1,    -1,   101,
     102,   103,   104,    -1,   106,   107,   108,   109,   110,     3,
      -1,     5,    -1,     7,    -1,     9,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    18,    -1,    -1,    21,    -1,    23,
      24,    25,    26,    27,    28,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    -1,    53,
      54,    55,    -1,    57,    58,    -1,    60,    61,    62,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      74,    75,    -1,    77,    78,    79,    80,    -1,    -1,    -1,
      84,    -1,    86,    87,    -1,    -1,    90,    -1,    92,    -1,
      94,    95,    -1,    97,    -1,    -1,    -1,   101,   102,   103,
     104,    -1,   106,   107,   108,   109,   110,     3,     4,     5,
      -1,    -1,    -1,     9,    -1,    11,    12,    13,    -1,    -1,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      -1,    -1,    38,    39,    40,    -1,    42,    43,    -1,    45,
      -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    54,    55,
      56,    -1,    -1,    -1,    60,    -1,    62,    63,    64,    -1,
      -1,    67,    -1,    69,    -1,    71,    -1,    -1,    74,    75,
      -1,    77,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
      86,    -1,    -1,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    97,    -1,    -1,   100,   101,   102,   103,    -1,    -1,
     106,     3,     4,     5,   110,    -1,    -1,     9,    -1,    11,
      12,    13,    -1,    -1,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    35,    -1,    -1,    38,    39,    40,    -1,
      42,    43,    -1,    45,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    54,    55,    56,    -1,    -1,    -1,    60,    -1,
      62,    63,    64,    -1,    -1,    67,    -1,    69,    -1,    71,
      -1,    -1,    74,    75,    -1,    77,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    86,    -1,    -1,    89,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    -1,    -1,   100,   101,
     102,   103,    -1,    -1,   106,     3,     4,     5,   110,    -1,
      -1,     9,    -1,    11,    12,    13,    -1,    -1,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,    -1,    45,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    54,    55,    56,    -1,
      -1,    -1,    60,    -1,    62,    63,    64,    -1,    -1,    67,
      -1,    69,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    89,    90,    -1,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,   100,   101,   102,   103,     4,     5,   106,    -1,
      -1,     9,   110,    11,    12,    13,    -1,    -1,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,    -1,    45,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    54,    55,    56,    -1,
      -1,    -1,    60,    -1,    62,    63,    64,    -1,    -1,    67,
      -1,    69,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    89,    90,    -1,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,   100,   101,   102,   103,     4,     5,   106,    -1,
      -1,     9,   110,    11,    12,    13,    -1,    -1,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,    -1,    45,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    54,    55,    56,    -1,
      -1,    -1,    60,    -1,    62,    63,    64,    -1,    -1,    67,
      -1,    69,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    89,    90,    -1,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,   100,   101,   102,   103,     4,     5,   106,    -1,
      -1,     9,   110,    11,    12,    13,    -1,    -1,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,    -1,    45,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    54,    55,    56,    -1,
      -1,    -1,    60,    -1,    62,    63,    64,    -1,    -1,    67,
      -1,    69,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    89,    90,    -1,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,   100,   101,   102,   103,     4,     5,   106,    -1,
      -1,     9,   110,    11,    12,    13,    -1,    -1,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,    -1,    45,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    54,    55,    56,    -1,
      -1,    -1,    60,    -1,    62,    63,    64,    -1,    -1,    67,
      -1,    69,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    89,    90,    -1,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,   100,   101,   102,   103,     4,     5,   106,    -1,
      -1,     9,   110,    11,    12,    13,    -1,    -1,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,
      38,    39,    40,    -1,    42,    43,    -1,    45,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    54,    55,    56,    -1,
      -1,    -1,    60,    -1,    62,    63,    64,    -1,    -1,    67,
      -1,    69,    -1,    71,    -1,    -1,    74,    75,    -1,    77,
      78,    -1,    80,    -1,    -1,    -1,    -1,    85,    86,    -1,
      -1,    89,    90,    -1,    -1,    -1,    94,    95,    96,    97,
      -1,    -1,   100,   101,   102,   103,    -1,    -1,   106,    -1,
      -1,    -1,   110
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    17,    18,    19,    20,    21,    22,
      23,    26,    27,    29,    30,    32,    33,    34,    35,    36,
      37,    39,    40,    42,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    88,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   101,   102,   103,   104,   105,
     106,   108,   109,   110,   111,   114,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   134,
     149,   150,    63,    78,   128,   132,   113,   113,     4,     5,
       9,    11,    12,    13,    16,    18,    19,    21,    25,    31,
      32,    35,    38,    39,    40,    42,    43,    45,    49,    51,
      54,    55,    56,    60,    62,    63,    64,    67,    69,    71,
      74,    75,    77,    78,    80,    85,    86,    89,    90,    94,
      95,    96,    97,   100,   101,   102,   103,   106,   110,   136,
     137,   138,   139,   141,   142,   144,   145,   146,   147,   148,
       0,   122,   118,   114,   128,   113,   136,   112,   113,   114,
     115,   116,   133,     3,     5,     7,     9,    11,    13,    15,
      18,    21,    23,    24,    25,    26,    27,    28,    31,    32,
      38,    40,    41,    42,    43,    44,    45,    48,    49,    50,
      51,    53,    54,    55,    57,    58,    60,    61,    62,    64,
      65,    66,    67,    68,    69,    70,    71,    74,    75,    77,
      78,    79,    80,    84,    86,    87,    90,    92,    94,    95,
      97,   101,   102,   103,   104,   106,   107,   108,   109,   110,
     135,   149,   150,   151,     3,    92,   108,   131,   132,     3,
     132,     3,    16,    40,    41,    86,    88,    89,   112,   113,
     114,   115,   116,   117,   143,   152,   117,   140,     3,     5,
       7,     9,    11,    13,    15,    18,    21,    23,    26,    27,
      32,    40,    42,    45,    48,    49,    50,    51,    53,    54,
      55,    58,    60,    61,    62,    64,    65,    66,    67,    68,
      69,    70,    71,    74,    77,    78,    79,    80,    84,    86,
      90,    92,    94,    95,    97,   101,   102,   103,   104,   106,
     108,   109,   110,   135,    16,    86,   141,   142,   144,   148,
       3,     3,   135,   136,   136,   132,   135,   135,    12,    63,
      90,   136,   132,   132,   132,   132,   140,    12,    16,    63,
      86,    90,   142,   148,   148,   112,   115,   116,   143,   140,
       3
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
        case 3:

/* Line 1455 of yacc.c  */
#line 17 ".\\toki_pona.y"
    {
        exit(0);
    ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 23 ".\\toki_pona.y"
    {
        printf("%s", (yyvsp[(1) - (2)]));
    ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 29 ".\\toki_pona.y"
    {
        sprintf((yyval), "%s.\n%s", (yyvsp[(1) - (1)]), "svo_sentence\n");
    ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 33 ".\\toki_pona.y"
    {
        sprintf(buf, "#%s# %s.\n%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), "condition\n");
        strcpy((yyval), buf);
    ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 38 ".\\toki_pona.y"
    {sprintf((yyval), "%s.\n%s", (yyvsp[(1) - (1)]), "o_sentence\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 42 ".\\toki_pona.y"
    {
        (yyval) = (yyvsp[(1) - (1)]);
    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 46 ".\\toki_pona.y"
    {
        (yyval) = (yyvsp[(1) - (1)]);
    ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 52 ".\\toki_pona.y"
    {
        sprintf(buf, "{%s} [%s]", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 57 ".\\toki_pona.y"
    {
        sprintf(buf, "{%s} [%s] <%s>", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 64 ".\\toki_pona.y"
    {
        sprintf(buf, "[%s] <%s>", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 69 ".\\toki_pona.y"
    {
        sprintf(buf, "#%s# [%s] <%s>", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 76 ".\\toki_pona.y"
    {
        sprintf(buf, "%s [%s]", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 81 ".\\toki_pona.y"
    {
        sprintf(buf, "%s [%s]", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 86 ".\\toki_pona.y"
    {
        sprintf(buf, "[%s] <%s>", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 91 ".\\toki_pona.y"
    {
        sprintf(buf, "[%s] [%s]", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 96 ".\\toki_pona.y"
    {
        sprintf(buf, "[%s] [%s]", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 103 ".\\toki_pona.y"
    {
        sprintf(buf, "{%s} <%s>", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 110 ".\\toki_pona.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 112 ".\\toki_pona.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 114 ".\\toki_pona.y"
    {
        sprintf((yyval), "%s [%s]", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        // printf("norm_noun_phase\n");
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 122 ".\\toki_pona.y"
    {
        (yyval) = (yyvsp[(1) - (1)]);
        // printf("structed_noun_phase\n");
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 129 ".\\toki_pona.y"
    {
        (yyval) = (yyvsp[(1) - (1)]);
        // printf("structed_noun_phase\n");
        // printf("%s\n", $1);
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 135 ".\\toki_pona.y"
    {
        sprintf(buf, "(%s [%s] %s)", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 150 ".\\toki_pona.y"
    {
        sprintf(buf, "%s-%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
        // printf("I'm a decorator : %s\n", $2);
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 156 ".\\toki_pona.y"
    {
        sprintf(buf, "%s-%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
        // printf("I'm a decorator : %s\n", $2);
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 162 ".\\toki_pona.y"
    {
        sprintf(buf, "%s-%s-%s", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
        // printf("I'm a decorator : %s\n", $2);
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 171 ".\\toki_pona.y"
    {
        sprintf(buf, "%s-%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 178 ".\\toki_pona.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 180 ".\\toki_pona.y"
    {
        sprintf(buf, "%s [%s] <%s>", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 189 ".\\toki_pona.y"
    {
        sprintf(buf, "%s=>%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 197 ".\\toki_pona.y"
    {
        sprintf(buf, "@%s-%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 202 ".\\toki_pona.y"
    {
        sprintf(buf, "@%s-%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 207 ".\\toki_pona.y"
    {
        sprintf(buf, "*%s @%s-%s", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 212 ".\\toki_pona.y"
    {
        sprintf(buf, "*%s @%s-%s", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 219 ".\\toki_pona.y"
    {
        sprintf(buf, "@%s %s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 224 ".\\toki_pona.y"
    {
        sprintf(buf, "*%s @%s %s", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 231 ".\\toki_pona.y"
    {
        sprintf(buf, "[%s] {%s}", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 240 ".\\toki_pona.y"
    {
        sprintf(buf, "*%s %s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 245 ".\\toki_pona.y"
    {
        sprintf(buf, "%s-%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 251 ".\\toki_pona.y"
    {
        sprintf(buf, "*%s %s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 256 ".\\toki_pona.y"
    {
        sprintf(buf, "%s-%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 263 ".\\toki_pona.y"
    {
        sprintf(buf, "(?%s %s %s?)", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 270 ".\\toki_pona.y"
    {
        sprintf(buf, "%s=>%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 275 ".\\toki_pona.y"
    {
        sprintf(buf, "%s=>%s=>%s", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 292 ".\\toki_pona.y"
    {
        sprintf(buf, "%s^%s", (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 299 ".\\toki_pona.y"
    {
        sprintf(buf, "(?%s %s %s?)", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 304 ".\\toki_pona.y"
    {
        sprintf(buf, "(?%s %s %s?)", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 309 ".\\toki_pona.y"
    {
        sprintf(buf, "(?%s %s %s?)", (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
        strcpy((yyval), buf);
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2638 "toki_pona.tab.c"
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
#line 330 ".\\toki_pona.y"


yyerror(const char *s){
    fprintf(stderr, "error: %s\n", s);
    extern char *yytext;
    fprintf(stderr, "parser error near %s\n", yytext);
}

int main(){
    yyparse();
    return 0;
}

