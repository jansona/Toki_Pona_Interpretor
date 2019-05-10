
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


/* Line 189 of yacc.c  */
#line 79 "toki_pona.tab.c"

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
     ILO = 258,
     PALISA = 259,
     LIPU = 260,
     OLIN = 261,
     ANTE = 262,
     WASO = 263,
     UNPA = 264,
     SIJELO = 265,
     TENPO = 266,
     LILI = 267,
     LAPE = 268,
     PINI = 269,
     KIN = 270,
     IJO = 271,
     MUN = 272,
     PALI = 273,
     SELI = 274,
     LINJA = 275,
     PAKALA = 276,
     KULE = 277,
     WILE = 278,
     LUPA = 279,
     UTA = 280,
     ALI = 281,
     KULUPU = 282,
     ONA = 283,
     SIN = 284,
     UTALA = 285,
     MONSI = 286,
     LEN = 287,
     SITELEN = 288,
     MI = 289,
     KASI = 290,
     MUSI = 291,
     AWEN = 292,
     JO = 293,
     NASA = 294,
     NENA = 295,
     WAN = 296,
     PIMEJA = 297,
     KILI = 298,
     SELO = 299,
     SONA = 300,
     OKO = 301,
     TU = 302,
     KALAMA = 303,
     SIKE = 304,
     SINA = 305,
     INSA = 306,
     KALA = 307,
     JELO = 308,
     PILIN = 309,
     PONA = 310,
     NIMI = 311,
     PANA = 312,
     TASO = 313,
     KEN = 314,
     JAKI = 315,
     MELI = 316,
     LOJE = 317,
     SINPIN = 318,
     PIPI = 319,
     MUTE = 320,
     WIKE = 321,
     TOKI = 322,
     MANI = 323,
     JAN = 324,
     TAWA = 325,
     KEPEKEN = 326,
     LUKIN = 327,
     TAN = 328,
     AKESI = 329,
     KAMA = 330,
     NOKA = 331,
     MOKU = 332,
     LAWA = 333,
     TELO = 334,
     LASO = 335,
     WEKA = 336,
     IKE = 337,
     LETE = 338,
     MOLI = 339,
     LON = 340,
     SUPA = 341,
     NASIN = 342,
     TOMO = 343,
     KUTE = 344,
     SUNO = 345,
     POKI = 346,
     SEME = 347,
     MA = 348,
     SOWELI = 349,
     NI = 350,
     MAMA = 351,
     MIJE = 352,
     WALO = 353,
     NANPA = 354,
     ALA = 355,
     KIWEN = 356,
     OPEN = 357,
     POKA = 358,
     LUKA = 359,
     SAMA = 360,
     SULI = 361,
     ALE = 362,
     SEWI = 363,
     ANPA = 364,
     WAWA = 365,
     SUWI = 366,
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
#line 239 "toki_pona.tab.c"

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
#define YYFINAL  117
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1463

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  119
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  186
/* YYNRULES -- Number of states.  */
#define YYNSTATES  217

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
       0,     0,     3,     6,     8,    11,    13,    15,    17,    20,
      24,    27,    31,    34,    37,    40,    43,    46,    49,    51,
      53,    56,    58,    60,    62,    66,    68,    70,    72,    74,
      77,    80,    84,    86,    89,    91,    95,    97,    99,   102,
     104,   107,   110,   114,   118,   121,   125,   128,   132,   134,
     137,   140,   142,   145,   148,   152,   155,   159,   161,   163,
     165,   167,   169,   171,   174,   178,   182,   186,   188,   190,
     192,   194,   196,   198,   200,   202,   204,   206,   208,   210,
     212,   214,   216,   218,   220,   222,   224,   226,   228,   230,
     232,   234,   236,   238,   240,   242,   244,   246,   248,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,   306,   308,   310,
     312,   314,   316,   318,   320,   322,   324,   326,   328,   330,
     332,   334,   336,   338,   340,   342,   344,   346,   348,   350,
     352,   354,   356,   358,   360,   362,   364,   366,   368,   370,
     372,   374,   376,   378,   380,   382,   384,   386,   388,   390,
     392,   394,   396,   398,   400,   402,   404,   406,   408,   410,
     412,   414,   416,   418,   420,   422,   424
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     120,     0,    -1,   121,   118,    -1,   126,    -1,   125,   126,
      -1,   122,    -1,   123,    -1,   124,    -1,   130,   114,    -1,
     130,   114,   134,    -1,   114,   134,    -1,   125,   114,   134,
      -1,   126,   113,    -1,   130,   113,    -1,    58,   126,    -1,
      59,   113,    -1,     7,   113,    -1,   127,   134,    -1,    34,
      -1,    50,    -1,   128,   112,    -1,   148,    -1,   129,    -1,
     132,    -1,   130,   131,   130,    -1,   147,    -1,   129,    -1,
     116,    -1,   115,    -1,   147,   133,    -1,   147,   147,    -1,
     147,   147,   133,    -1,   149,    -1,   149,   133,    -1,   135,
      -1,   135,   112,   134,    -1,   136,    -1,   137,    -1,   135,
     141,    -1,   139,    -1,    85,   130,    -1,    70,   130,    -1,
     142,    85,   130,    -1,   142,    70,   130,    -1,   139,   138,
      -1,   142,   139,   138,    -1,   117,   130,    -1,   117,   130,
     138,    -1,   146,    -1,   142,   146,    -1,   146,   133,    -1,
     140,    -1,   142,   140,    -1,   140,   133,    -1,   146,   100,
     146,    -1,   150,   130,    -1,   150,   130,   141,    -1,   143,
      -1,   144,    -1,   145,    -1,    75,    -1,    59,    -1,    23,
      -1,   143,   100,    -1,    75,   100,    75,    -1,    59,   100,
      59,    -1,    23,   100,    23,    -1,    75,    -1,    70,    -1,
      67,    -1,    36,    -1,    81,    -1,    19,    -1,    37,    -1,
      12,    -1,    88,    -1,     7,    -1,    84,    -1,   109,    -1,
     106,    -1,    30,    -1,    45,    -1,    85,    -1,    22,    -1,
      83,    -1,    16,    -1,    57,    -1,    78,    -1,    60,    -1,
      42,    -1,    71,    -1,   102,    -1,    18,    -1,    69,    -1,
      33,    -1,    59,    -1,    65,    -1,    34,    -1,    50,    -1,
     148,    -1,    90,    -1,    63,    -1,    99,    -1,    91,    -1,
      43,    -1,   104,    -1,    11,    -1,     9,    -1,    64,    -1,
      40,    -1,    24,    -1,    95,    -1,    52,    -1,    86,    -1,
      96,    -1,    32,    -1,    10,    -1,    50,    -1,    68,    -1,
       5,    -1,    47,    -1,    79,    -1,    56,    -1,    92,    -1,
      97,    -1,     6,    -1,    44,    -1,    38,    -1,    21,    -1,
      98,    -1,    87,    -1,     4,    -1,     8,    -1,    41,    -1,
      76,    -1,    74,    -1,    31,    -1,    14,    -1,    35,    -1,
      34,    -1,    20,    -1,    82,    -1,    46,    -1,    23,    -1,
      51,    -1,     3,    -1,   101,    -1,    73,    -1,    17,    -1,
      94,    -1,    54,    -1,    93,    -1,    15,    -1,    39,    -1,
     107,    -1,    49,    -1,    29,    -1,    62,    -1,    53,    -1,
      13,    -1,    55,    -1,    50,    -1,   103,    -1,   100,    -1,
      72,    -1,    27,    -1,   108,    -1,    80,    -1,   111,    -1,
      77,    -1,   110,    -1,    66,    -1,    58,    -1,    61,    -1,
     105,    -1,    28,    -1,    89,    -1,    25,    -1,    26,    -1,
      34,    -1,    48,    -1,    71,    -1,    85,    -1,   103,    -1,
     105,    -1,    73,    -1,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    12,    12,    14,    16,    18,    21,    22,    24,    25,
      27,    28,    30,    31,    32,    33,    34,    36,    38,    39,
      40,    42,    43,    45,    46,    48,    49,    51,    52,    54,
      55,    56,    58,    59,    61,    62,    64,    65,    66,    68,
      69,    70,    71,    72,    74,    75,    77,    78,    80,    81,
      82,    83,    84,    85,    87,    89,    90,    92,    93,    94,
      96,    97,    98,   100,   102,   103,   104,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   108,   109,   110,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   116,   116,   116,   116,   116,   116
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ILO", "PALISA", "LIPU", "OLIN", "ANTE",
  "WASO", "UNPA", "SIJELO", "TENPO", "LILI", "LAPE", "PINI", "KIN", "IJO",
  "MUN", "PALI", "SELI", "LINJA", "PAKALA", "KULE", "WILE", "LUPA", "UTA",
  "ALI", "KULUPU", "ONA", "SIN", "UTALA", "MONSI", "LEN", "SITELEN", "MI",
  "KASI", "MUSI", "AWEN", "JO", "NASA", "NENA", "WAN", "PIMEJA", "KILI",
  "SELO", "SONA", "OKO", "TU", "KALAMA", "SIKE", "SINA", "INSA", "KALA",
  "JELO", "PILIN", "PONA", "NIMI", "PANA", "TASO", "KEN", "JAKI", "MELI",
  "LOJE", "SINPIN", "PIPI", "MUTE", "WIKE", "TOKI", "MANI", "JAN", "TAWA",
  "KEPEKEN", "LUKIN", "TAN", "AKESI", "KAMA", "NOKA", "MOKU", "LAWA",
  "TELO", "LASO", "WEKA", "IKE", "LETE", "MOLI", "LON", "SUPA", "NASIN",
  "TOMO", "KUTE", "SUNO", "POKI", "SEME", "MA", "SOWELI", "NI", "MAMA",
  "MIJE", "WALO", "NANPA", "ALA", "KIWEN", "OPEN", "POKA", "LUKA", "SAMA",
  "SULI", "ALE", "SEWI", "ANPA", "WAWA", "SUWI", "LI", "LA", "O", "ANU",
  "EN", "E", "ENDMARK", "$accept", "toki_pona", "sentence", "o_sentence",
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
       0,   119,   120,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   125,   125,   125,   126,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   135,   136,
     136,   136,   136,   136,   137,   137,   138,   138,   139,   139,
     139,   139,   139,   139,   140,   141,   141,   142,   142,   142,
     143,   143,   143,   144,   145,   145,   145,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   147,   147,   147,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   150,   150,   150
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     2,     3,
       2,     3,     2,     2,     2,     2,     2,     2,     1,     1,
       2,     1,     1,     1,     3,     1,     1,     1,     1,     2,
       2,     3,     1,     2,     1,     3,     1,     1,     2,     1,
       2,     2,     3,     3,     2,     3,     2,     3,     1,     2,
       2,     1,     2,     2,     3,     2,     3,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     3,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   145,   131,   119,   125,     0,   132,   107,   116,   106,
     137,   148,   140,   128,   143,   110,   136,   115,    97,   138,
     127,   109,   133,   104,   126,   142,   120,    98,   144,   112,
     150,   122,     0,     0,   101,   108,   118,   147,   135,   134,
     121,   141,   113,   130,   100,   103,   123,   151,   149,   111,
     114,   124,   129,   102,   146,   105,     0,     0,     0,     5,
       6,     7,     0,     3,     0,     0,    26,     0,    23,    25,
      99,    16,    14,     0,    15,    76,    74,    85,    92,    72,
      83,    62,    80,    94,    70,    73,    89,    81,    86,    95,
      88,    96,    69,    93,    68,    90,    67,    87,    71,    84,
      77,    82,    75,    91,    79,    78,    10,    34,    36,    37,
      39,    51,     0,    57,    58,    59,    48,     1,     2,     0,
       4,    12,    17,    20,    13,     8,    28,    27,     0,   159,
     152,   177,   178,   165,   175,   156,    97,   153,   180,   155,
      98,   158,   160,   172,   173,   157,   171,   164,   169,   167,
     176,   163,   162,   174,   154,   166,   170,   168,    29,    30,
      99,    32,     0,     0,    97,    98,    26,    41,     0,    40,
     186,   181,   185,   182,   183,   184,     0,    38,     0,     0,
      44,   179,   161,    53,    68,    82,     0,    52,     0,    49,
      63,   163,    50,    11,     9,    24,    31,    33,    66,    65,
      64,    35,    55,    46,    43,    42,    45,    95,    68,    67,
      82,    52,    49,    54,    56,    47,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
     166,    73,   128,    68,   183,   106,   107,   108,   109,   180,
     110,   111,   177,   112,   113,   114,   115,   116,    69,   160,
     161,   178
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -178
static const yytype_int16 yypact[] =
{
     166,  -178,  -178,  -178,  -178,   -97,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,     1,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,   472,  -178,  -178,
    -178,  -178,  1093,   -95,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,   856,    21,   -96,  -178,
    -178,  -178,   268,   -88,   856,   -85,   -84,   -64,  -178,   370,
     -79,  -178,  -178,  -101,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,   -60,  -178,  -178,  -178,  -178,  -178,  -178,  -178,   706,
    -178,  -178,  -178,  -178,  1195,  -178,   781,  -178,  -178,  -178,
    -178,  1195,  -178,  -178,  -178,  -178,  -178,    17,  -178,  -178,
     -76,  1282,   931,   -58,  -178,  -178,  1352,  -178,  -178,   856,
    -178,  -178,  -178,  -178,  -178,   856,  -178,  -178,  1195,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  1282,
    -178,  1282,    22,   -12,  -178,  -178,  -178,  -101,   -22,  -101,
    -178,  -178,  -178,  -178,  -178,  -178,   856,  -178,  1195,  1195,
    -178,  -178,  -178,  -178,  1195,  1195,   -76,   560,  1006,   630,
    -178,  1006,  -178,  -178,  -178,  -101,  -178,  -178,  -178,  -178,
    -178,  -178,   -41,  -105,  -101,  -101,  -178,  -178,  -178,  -178,
    -178,  -178,   -46,  -178,  -178,  -178,  1006
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,  -178,  -178,  -178,  -178,  -178,   -26,  -178,  -178,
       3,     0,  -178,  -178,   -68,   -62,  -178,  -178,  -178,  -177,
     -57,  -107,  -146,   -53,  -178,  -178,  -178,  -108,    -2,     7,
    -178,  -178
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -140
static const yytype_int16 yytable[] =
{
      67,   158,   122,    66,   189,   187,    72,    70,   -18,   206,
     126,   127,   179,   -18,   126,   127,    71,   -18,    74,   -18,
     -18,   117,   118,   -18,   -18,   121,   215,   123,   -22,   170,
     171,   -18,   172,   -21,   -18,    66,   120,   -18,   -18,    70,
     162,   179,   190,   -18,   173,   198,   -18,   199,   192,   124,
     125,   126,   127,   200,   216,   186,   214,   193,   -18,   188,
     -18,   -18,   174,   194,   175,    66,   -18,   159,   -18,    70,
     -18,   -18,   -18,     0,   126,   127,   -18,     0,     0,   -18,
     212,   211,   -18,   213,   -18,   -18,   -18,   170,   171,   -18,
     172,   196,     0,   197,   167,     0,     0,     0,     0,     0,
       0,   169,   173,   -18,     0,     0,     0,   -18,   213,     0,
     -18,     0,     0,  -139,   201,     0,     0,     0,     0,     0,
     174,   192,   175,     0,     0,     0,     0,     0,   195,   176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     9,   202,   203,
      10,     0,     0,    11,   204,   205,    12,    13,     0,    14,
      15,     0,     0,     0,     0,     0,     0,    16,    17,     0,
      18,    19,     0,     0,    20,     0,    21,    22,     0,    23,
      24,     0,    25,    26,     0,     0,    27,    28,    29,     0,
      30,     0,    31,     0,    32,    33,     0,     0,     0,    34,
      35,     0,     0,     0,    36,     0,     0,     0,     0,    37,
      38,     0,    39,     0,     0,    40,     0,     0,    41,     0,
       0,     0,    42,    43,     0,     0,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,    54,     0,     0,
      55,     1,     2,     3,     4,     0,     6,     7,     8,     9,
      56,     0,    10,     0,     0,    11,     0,     0,    12,    13,
       0,    14,    15,     0,     0,     0,     0,     0,     0,    16,
      17,     0,    18,    19,     0,     0,    20,     0,    21,    22,
       0,    23,    24,     0,    25,    26,     0,     0,    27,    28,
      29,     0,    30,     0,    31,     0,     0,     0,     0,     0,
       0,    34,    35,     0,     0,     0,    36,     0,     0,     0,
       0,    37,    38,     0,    39,     0,     0,    40,     0,     0,
      41,     0,     0,     0,    42,    43,     0,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,    54,
       0,     0,    55,     1,     2,     3,     4,     0,     6,     7,
       8,     9,   119,   129,    10,   130,     0,    11,     0,     0,
      12,    13,     0,    14,    15,   131,   132,   133,   134,   135,
       0,    16,    17,     0,   136,    19,     0,     0,    20,   137,
      21,    22,     0,    23,    24,     0,    25,    26,   138,   139,
     140,    28,    29,   141,    30,   142,    31,     0,   143,     0,
       0,   144,   145,    34,    35,     0,   146,     0,    36,     0,
       0,     0,   147,    37,    38,     0,    39,   148,     0,    40,
     149,     0,    41,     0,     0,     0,    42,    43,     0,   150,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     151,    54,     0,   152,    55,   153,     0,   154,   155,   -19,
     156,   157,     0,     0,   -19,     0,     0,     0,   -19,     0,
     -19,   -19,     0,     0,   -19,   -19,     0,     0,     0,     0,
       0,     0,   -19,     0,     0,   -19,     0,     0,   -19,   -19,
       0,     0,     0,     0,   -19,     0,     0,   -19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -19,
       0,   -19,   -19,     0,     0,     0,     0,   -19,     0,   -19,
       0,   -19,   -19,   -19,     0,     0,     0,   -19,     0,     0,
     -19,     0,     0,   -19,     0,   -19,   -19,   -19,     0,     0,
     -19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   -19,   130,     0,     0,   -19,     0,
       0,   -19,     0,     0,  -117,   131,   132,   133,   134,   135,
       0,     0,     0,     0,   181,     0,     0,     0,     0,   137,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
     182,     0,     0,   141,     0,   142,     0,     0,   143,     0,
       0,   144,   145,     0,     0,     0,   146,     0,     0,     0,
       0,     0,   147,     0,     0,     0,     0,   148,     0,     0,
     149,     0,     0,   129,     0,   130,     0,     0,     0,   150,
       0,     0,     0,     0,     0,   131,   132,   133,   134,   135,
     151,     0,     0,   152,   181,   153,     0,   154,   155,   137,
     156,   157,     0,     0,     0,     0,     0,   -51,   138,   139,
     182,     0,     0,   141,     0,   142,     0,     0,   143,     0,
       0,   144,   145,     0,     0,     0,   146,     0,     0,     0,
       0,     0,   147,     0,     0,     0,     0,   148,     0,     0,
     149,     0,     0,   -61,     0,     0,     0,     0,   -61,   150,
       0,     0,   -61,     0,   -61,   -61,     0,     0,   -61,   -61,
     191,     0,     0,   152,     0,   153,   -61,   154,   155,   -61,
     156,   157,   -61,   -61,     0,     0,     0,   -48,   -61,     0,
       0,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -61,     0,   -61,   -61,     0,     0,     0,
       0,   -61,     0,   -61,     0,   -61,   -61,   -61,     0,     0,
       0,   -61,     0,     0,   -61,     0,     0,   -61,   -60,   -61,
     -61,   -61,     0,   -60,   -61,     0,     0,   -60,     0,   -60,
     -60,     0,     0,   -60,   -60,     0,   163,     0,   -61,     0,
       0,   -60,   -61,     0,   -60,   -61,     0,   -60,   -60,     0,
       0,     0,     0,   -60,     0,     0,   -60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -60,     0,
     -60,   -60,     0,     0,     0,     0,   -60,     0,   -60,     0,
     -60,   -60,   -60,     0,     0,     0,   -60,     0,     0,   -60,
       0,     0,   -60,    75,   -60,   -60,   -60,     0,    76,   -60,
       0,     0,    77,     0,    78,    79,     0,     0,    80,    81,
       0,   168,     0,   -60,     0,     0,    82,   -60,     0,    83,
     -60,     0,    84,    85,     0,     0,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,    89,    90,     0,     0,     0,
       0,    91,     0,    92,     0,    93,    94,    95,     0,     0,
       0,    96,     0,     0,    97,     0,     0,    98,    75,    99,
     100,   101,     0,    76,   102,     0,     0,    77,     0,    78,
      79,     0,     0,    80,    81,     0,     0,     0,   103,     0,
       0,    82,   104,     0,    83,   105,     0,    84,    85,     0,
       0,     0,     0,    86,     0,     0,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
      89,    90,     0,     0,     0,     0,    91,     0,    92,     0,
      93,   184,    95,     0,     0,     0,    96,     0,     0,    97,
       0,     0,    98,    75,    99,   100,   185,     0,    76,   102,
       0,     0,    77,     0,    78,    79,     0,     0,    80,     0,
       0,     0,     0,   103,     0,     0,    82,   104,     0,    83,
     105,     0,    84,    85,     0,     0,     0,     0,    86,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,   207,    90,     0,     0,     0,
       0,    91,     0,    92,     0,    93,   208,    95,     0,     0,
       0,   209,     0,     0,    97,     0,     0,    98,     0,    99,
     100,   210,     0,     0,   102,     0,     1,     2,     3,     4,
       0,     6,     7,     8,     9,     0,     0,    10,   103,     0,
      11,     0,   104,    12,    13,   105,    14,    15,     0,     0,
       0,     0,     0,     0,    16,    17,     0,    18,    19,     0,
       0,    20,     0,    21,    22,     0,    23,    24,     0,    25,
      26,     0,     0,    27,    28,    29,     0,    30,     0,    31,
       0,     0,     0,     0,     0,     0,    34,    35,     0,     0,
       0,    36,     0,     0,     0,     0,    37,    38,     0,    39,
       0,     0,    40,     0,     0,    41,     0,     0,     0,    42,
      43,     0,     0,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,    54,     0,     0,    55,     1,     2,
       3,     4,     0,     6,     7,     8,     9,     0,     0,    10,
       0,     0,    11,     0,     0,    12,    13,     0,    14,    15,
       0,     0,     0,     0,     0,     0,    16,    17,     0,   164,
      19,     0,     0,    20,     0,    21,    22,     0,    23,    24,
       0,    25,    26,     0,     0,   165,    28,    29,     0,    30,
       0,    31,     0,     0,     0,     0,     0,     0,    34,    35,
       0,     0,     0,    36,     0,     0,     0,     0,    37,    38,
       0,    39,     0,     0,    40,     0,     0,    41,     0,     0,
       0,    42,    43,     0,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   129,    54,   130,     0,    55,
       0,     0,     0,     0,     0,     0,     0,   131,   132,   133,
     134,   135,     0,     0,     0,     0,   181,     0,     0,     0,
       0,   137,     0,     0,     0,     0,     0,     0,     0,     0,
     138,   139,   182,     0,     0,   141,     0,   142,     0,     0,
     143,     0,     0,   144,   145,     0,     0,     0,   146,     0,
       0,     0,     0,     0,   147,     0,     0,     0,     0,   148,
       0,     0,   149,     0,     0,   129,     0,   130,     0,     0,
       0,   150,     0,     0,     0,     0,     0,   131,   132,   133,
     134,   135,   151,     0,     0,   152,   181,   153,     0,   154,
     155,   137,   156,   157,     0,     0,     0,     0,     0,     0,
     138,   139,   182,     0,     0,   141,     0,   142,     0,     0,
     143,     0,     0,   144,   145,     0,     0,     0,   146,     0,
       0,     0,     0,     0,   147,     0,     0,     0,     0,   148,
       0,     0,   149,     0,     0,     0,     0,     0,     0,     0,
       0,   150,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,   152,     0,   153,     0,   154,
     155,     0,   156,   157
};

static const yytype_int16 yycheck[] =
{
       0,    69,    64,     0,   112,   112,    32,     0,     7,   186,
     115,   116,   117,    12,   115,   116,   113,    16,   113,    18,
      19,     0,   118,    22,    23,   113,   203,   112,   112,    70,
      71,    30,    73,   112,    33,    32,    62,    36,    37,    32,
     100,   117,   100,    42,    85,    23,    45,    59,   116,   113,
     114,   115,   116,    75,   100,   112,   202,   119,    57,   112,
      59,    60,   103,   125,   105,    62,    65,    69,    67,    62,
      69,    70,    71,    -1,   115,   116,    75,    -1,    -1,    78,
     188,   188,    81,   191,    83,    84,    85,    70,    71,    88,
      73,   159,    -1,   161,    94,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    85,   102,    -1,    -1,    -1,   106,   216,    -1,
     109,    -1,    -1,   112,   176,    -1,    -1,    -1,    -1,    -1,
     103,   189,   105,    -1,    -1,    -1,    -1,    -1,   128,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,   178,   179,
      14,    -1,    -1,    17,   184,   185,    20,    21,    -1,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      34,    35,    -1,    -1,    38,    -1,    40,    41,    -1,    43,
      44,    -1,    46,    47,    -1,    -1,    50,    51,    52,    -1,
      54,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    63,
      64,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,
      74,    -1,    76,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,    -1,    -1,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,   101,    -1,    -1,
     104,     3,     4,     5,     6,    -1,     8,     9,    10,    11,
     114,    -1,    14,    -1,    -1,    17,    -1,    -1,    20,    21,
      -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    34,    35,    -1,    -1,    38,    -1,    40,    41,
      -1,    43,    44,    -1,    46,    47,    -1,    -1,    50,    51,
      52,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    -1,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,   101,
      -1,    -1,   104,     3,     4,     5,     6,    -1,     8,     9,
      10,    11,   114,    13,    14,    15,    -1,    17,    -1,    -1,
      20,    21,    -1,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    -1,    -1,    38,    39,
      40,    41,    -1,    43,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    -1,
      -1,    61,    62,    63,    64,    -1,    66,    -1,    68,    -1,
      -1,    -1,    72,    73,    74,    -1,    76,    77,    -1,    79,
      80,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,   103,   104,   105,    -1,   107,   108,     7,
     110,   111,    -1,    -1,    12,    -1,    -1,    -1,    16,    -1,
      18,    19,    -1,    -1,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,    67,
      -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    -1,    81,    -1,    83,    84,    85,    -1,    -1,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    13,   102,    15,    -1,    -1,   106,    -1,
      -1,   109,    -1,    -1,   112,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    -1,    -1,    13,    -1,    15,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
     100,    -1,    -1,   103,    34,   105,    -1,   107,   108,    39,
     110,   111,    -1,    -1,    -1,    -1,    -1,   117,    48,    49,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      80,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    89,
      -1,    -1,    16,    -1,    18,    19,    -1,    -1,    22,    23,
     100,    -1,    -1,   103,    -1,   105,    30,   107,   108,    33,
     110,   111,    36,    37,    -1,    -1,    -1,   117,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    -1,    67,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    -1,    81,     7,    83,
      84,    85,    -1,    12,    88,    -1,    -1,    16,    -1,    18,
      19,    -1,    -1,    22,    23,    -1,   100,    -1,   102,    -1,
      -1,    30,   106,    -1,    33,   109,    -1,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,
      69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,    78,
      -1,    -1,    81,     7,    83,    84,    85,    -1,    12,    88,
      -1,    -1,    16,    -1,    18,    19,    -1,    -1,    22,    23,
      -1,   100,    -1,   102,    -1,    -1,    30,   106,    -1,    33,
     109,    -1,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    -1,    67,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    -1,    81,     7,    83,
      84,    85,    -1,    12,    88,    -1,    -1,    16,    -1,    18,
      19,    -1,    -1,    22,    23,    -1,    -1,    -1,   102,    -1,
      -1,    30,   106,    -1,    33,   109,    -1,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    -1,    67,    -1,
      69,    70,    71,    -1,    -1,    -1,    75,    -1,    -1,    78,
      -1,    -1,    81,     7,    83,    84,    85,    -1,    12,    88,
      -1,    -1,    16,    -1,    18,    19,    -1,    -1,    22,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    30,   106,    -1,    33,
     109,    -1,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    -1,    67,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    -1,    81,    -1,    83,
      84,    85,    -1,    -1,    88,    -1,     3,     4,     5,     6,
      -1,     8,     9,    10,    11,    -1,    -1,    14,   102,    -1,
      17,    -1,   106,    20,    21,   109,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    -1,    34,    35,    -1,
      -1,    38,    -1,    40,    41,    -1,    43,    44,    -1,    46,
      47,    -1,    -1,    50,    51,    52,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    74,    -1,    76,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,   101,    -1,    -1,   104,     3,     4,
       5,     6,    -1,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    20,    21,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    34,
      35,    -1,    -1,    38,    -1,    40,    41,    -1,    43,    44,
      -1,    46,    47,    -1,    -1,    50,    51,    52,    -1,    54,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,
      -1,    76,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    13,   101,    15,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,
      58,    -1,    -1,    61,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    -1,    -1,    13,    -1,    15,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,   100,    -1,    -1,   103,    34,   105,    -1,   107,
     108,    39,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    -1,    -1,    53,    -1,    55,    -1,    -1,
      58,    -1,    -1,    61,    62,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,   103,    -1,   105,    -1,   107,
     108,    -1,   110,   111
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      14,    17,    20,    21,    23,    24,    31,    32,    34,    35,
      38,    40,    41,    43,    44,    46,    47,    50,    51,    52,
      54,    56,    58,    59,    63,    64,    68,    73,    74,    76,
      79,    82,    86,    87,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   101,   104,   114,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   132,   147,
     148,   113,   126,   130,   113,     7,    12,    16,    18,    19,
      22,    23,    30,    33,    36,    37,    42,    45,    57,    59,
      60,    65,    67,    69,    70,    71,    75,    78,    81,    83,
      84,    85,    88,   102,   106,   109,   134,   135,   136,   137,
     139,   140,   142,   143,   144,   145,   146,     0,   118,   114,
     126,   113,   134,   112,   113,   114,   115,   116,   131,    13,
      15,    25,    26,    27,    28,    29,    34,    39,    48,    49,
      50,    53,    55,    58,    61,    62,    66,    72,    77,    80,
      89,   100,   103,   105,   107,   108,   110,   111,   133,   147,
     148,   149,   100,   100,    34,    50,   129,   130,   100,   130,
      70,    71,    73,    85,   103,   105,   112,   141,   150,   117,
     138,    34,    50,   133,    70,    85,   139,   140,   142,   146,
     100,   100,   133,   134,   134,   130,   133,   133,    23,    59,
      75,   134,   130,   130,   130,   130,   138,    59,    70,    75,
      85,   140,   146,   146,   141,   138,   100
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
#line 15 ".\\toki_pona.y"
    {printf("svo_sentence\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 17 ".\\toki_pona.y"
    {printf("condition\n");;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 19 ".\\toki_pona.y"
    {printf("o_sentence\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 1954 "toki_pona.tab.c"
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
#line 117 ".\\toki_pona.y"


yyerror(const char *s){
    fprintf(stderr, "error: %s\n", s);
}

int main(){
    yyparse();
    return 0;
}

