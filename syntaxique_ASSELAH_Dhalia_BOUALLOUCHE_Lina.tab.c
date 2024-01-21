
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
#line 1 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"

#include <stdio.h>
int yylex(void);
int nb_ligne = 1;
int nb_car = 1;
char save[20];	
char saveType[20];
char type[20];
char saveOpr[20];
int existe;
int k,i;
int saveVal = -1; 


/* Line 189 of yacc.c  */
#line 88 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.tab.c"

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
     real = 258,
     integer = 259,
     mc_program = 260,
     mc_end = 261,
     mc_routine = 262,
     mc_endr = 263,
     mc_integer = 264,
     mc_real = 265,
     mc_logical = 266,
     mc_character = 267,
     mc_read = 268,
     mc_write = 269,
     mc_if = 270,
     mc_then = 271,
     mc_else = 272,
     mc_endif = 273,
     mc_dowhile = 274,
     mc_enddo = 275,
     mc_call = 276,
     mc_equivalence = 277,
     mc_dimension = 278,
     or = 279,
     and = 280,
     gt = 281,
     ge = 282,
     eq = 283,
     ne = 284,
     le = 285,
     lt = 286,
     logical = 287,
     idf = 288,
     character = 289,
     aff = 290,
     pvg = 291,
     vg = 292,
     add = 293,
     sstr = 294,
     prdt = 295,
     division = 296,
     pouv = 297,
     pfer = 298,
     guill = 299,
     point = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 15 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"

    float reel;
	int integer;
	char* str;



/* Line 214 of yacc.c  */
#line 177 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 189 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  160

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     7,    14,    17,    19,    23,    25,
      27,    29,    31,    33,    37,    39,    41,    43,    49,    53,
      55,    59,    61,    65,    67,    69,    74,    77,    79,    81,
      83,    85,    87,    89,    91,    93,    98,   103,   108,   113,
     117,   119,   122,   123,   125,   127,   131,   133,   135,   137,
     139,   141,   143,   145,   150,   156,   162,   164,   168,   170,
     172,   179,   182,   183,   188,   196,   198,   200,   202,   204,
     206,   208,   210,   212,   214,   222,   230,   240,   241,   254
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    82,    48,    -1,    -1,     5,    33,    49,
      50,    61,     6,    -1,    50,    51,    -1,    51,    -1,    52,
      53,    36,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,    54,    -1,    54,    37,    53,    -1,    33,    -1,    55,
      -1,    56,    -1,    33,    23,    42,    57,    43,    -1,    33,
      40,     4,    -1,     4,    -1,     4,    37,     4,    -1,    59,
      -1,    59,    37,    58,    -1,    33,    -1,    60,    -1,    33,
      42,    57,    43,    -1,    61,    62,    -1,    62,    -1,    63,
      -1,    70,    -1,    71,    -1,    76,    -1,    74,    -1,    80,
      -1,    81,    -1,    33,    35,    32,    36,    -1,    33,    35,
      34,    36,    -1,    33,    35,    64,    36,    -1,    69,    68,
      69,    65,    -1,    67,    68,    64,    -1,    69,    -1,    68,
      66,    -1,    -1,    64,    -1,    67,    -1,    42,    64,    43,
      -1,    38,    -1,    39,    -1,    41,    -1,    40,    -1,    33,
      -1,     4,    -1,     3,    -1,    33,    42,    57,    43,    -1,
      13,    42,    33,    43,    36,    -1,    14,    42,    72,    43,
      36,    -1,    73,    -1,    72,    37,    73,    -1,    34,    -1,
      33,    -1,    15,    79,    16,    61,    75,    18,    -1,    17,
      61,    -1,    -1,    19,    79,    61,    20,    -1,    42,    69,
      45,    78,    45,    69,    43,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    25,    -1,
      24,    -1,    77,    -1,    42,    79,    45,    78,    45,    77,
      43,    -1,    33,    21,    33,    42,    58,    43,    36,    -1,
      22,    42,    58,    43,    37,    42,    58,    43,    36,    -1,
      -1,    82,    52,     7,    33,    83,    42,    58,    43,    50,
      61,    63,     8,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    28,    28,    32,    32,    33,    34,    35,
      36,    37,    39,    39,    41,    43,    43,    45,    47,    49,
      49,    51,    51,    52,    52,    54,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    60,    66,    74,    83,    84,
      85,    86,    86,    87,    88,    89,    90,    91,    92,    93,
      94,   101,   105,   109,   117,   121,   122,   122,   123,   123,
     128,   129,   129,   130,   131,   132,   132,   132,   132,   132,
     132,   132,   132,   133,   133,   134,   137,   138,   138,   138
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "real", "integer", "mc_program",
  "mc_end", "mc_routine", "mc_endr", "mc_integer", "mc_real", "mc_logical",
  "mc_character", "mc_read", "mc_write", "mc_if", "mc_then", "mc_else",
  "mc_endif", "mc_dowhile", "mc_enddo", "mc_call", "mc_equivalence",
  "mc_dimension", "or", "and", "gt", "ge", "eq", "ne", "le", "lt",
  "logical", "idf", "character", "aff", "pvg", "vg", "add", "sstr", "prdt",
  "division", "pouv", "pfer", "guill", "point", "$accept", "S", "Q", "$@1",
  "LISTE_DEC", "DEC", "TYPE", "LISTE_VAR", "VAR", "DEC_DIMENSION",
  "DEC_CHAR", "TAILLE", "LISTE_PARAMETRES", "NOM_VAR", "ARRAY",
  "LISTE_INST", "INST", "INST_AFF", "EXP_ARI", "PARTIE", "SUITE_PARTIE",
  "EXP_ARI_PARENTHESES", "OPERATEUR_ARI", "OPERANDE", "INST_READ",
  "INST_WRITE", "ELEMENTS_WRITE", "ELEMENT", "INST_IF", "IF_ELSE",
  "INST_DO", "CONDITION", "OPERATEUR", "CONDITION_COMP", "INST_CALL",
  "INST_EQUIVALENCE", "FONCTION", "$@2", 0
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    49,    48,    50,    50,    51,    52,    52,
      52,    52,    53,    53,    54,    54,    54,    55,    56,    57,
      57,    58,    58,    59,    59,    60,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    63,    64,    64,
      64,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      69,    69,    69,    69,    70,    71,    72,    72,    73,    73,
      74,    75,    75,    76,    77,    78,    78,    78,    78,    78,
      78,    78,    78,    79,    79,    80,    81,    83,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     6,     2,     1,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     5,     3,     1,
       3,     1,     3,     1,     1,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     3,
       1,     2,     0,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     5,     1,     3,     1,     1,
       6,     2,     0,     4,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     7,     9,     0,    12,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      79,     0,     0,     1,     0,     8,     9,    10,    11,     2,
       0,     3,     0,     0,    77,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,    27,    28,    29,
      30,    32,    31,    33,    34,    14,     0,    12,    15,    16,
       0,     0,     0,     0,    73,     0,     0,     0,     0,     0,
       4,    26,     0,     0,     7,     0,    23,     0,    21,    24,
       0,    59,    58,     0,    56,    52,    51,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
       0,    18,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,    63,     0,     0,    35,    36,     0,    37,
      46,    47,    49,    48,     0,     0,    19,     0,     0,     0,
      22,    54,    57,    55,     0,    72,    71,    65,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,     0,    45,
      39,    42,     0,    17,    25,     0,    53,     0,     0,    61,
      60,     0,     0,    38,     0,    20,    28,     0,     0,     0,
       0,    75,    43,    41,    44,    78,    64,    74,     0,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    13,    15,    16,    17,    36,    37,    38,
      39,   107,    57,    58,    59,    26,    27,    28,    77,   143,
     153,    78,   104,    79,    29,    30,    63,    64,    31,   126,
      32,    44,   123,    45,    33,    34,     2,    18
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int16 yypact[] =
{
     -74,    24,    82,   -74,    -5,   -74,   -74,   -74,   -74,   -74,
      19,   -74,    -2,   126,   -74,     8,   -74,     2,    17,    18,
      22,    25,    25,    31,   -10,   -74,    56,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,    -7,    16,    28,   -74,   -74,
      21,    41,    23,     6,   -74,    45,   101,    21,    43,     4,
     -74,   -74,    35,    78,   -74,     2,    48,    40,    61,   -74,
      57,   -74,   -74,    10,   -74,   -74,   -74,    62,    63,    67,
     101,    66,    68,    75,    83,    86,     9,    96,   102,   102,
     114,   -74,   -74,   114,   126,    21,    97,    23,   103,   114,
     100,   100,    88,   -74,   107,    21,   -74,   -74,   104,   -74,
     -74,   -74,   -74,   -74,     9,    11,   108,   105,   106,     8,
     -74,   -74,   -74,   -74,   109,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   110,   111,   101,   128,   112,   115,   -74,
     -74,   102,   146,   -74,   -74,   101,   -74,    11,   117,   101,
     -74,    21,   121,   -74,     9,   -74,   143,   118,    11,   119,
     120,   -74,   -74,   -74,   102,   -74,   -74,   -74,   124,   -74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   -74,   -74,    69,   -12,   162,   113,   -74,   -74,
     -74,   -40,   -45,   -74,   -74,   -41,   -26,    30,   -72,   -74,
     -74,    26,   -73,   -42,   -74,   -74,   -74,    79,   -74,   -74,
     -74,    29,    80,    12,   -74,   -74,   -74,   -74
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      51,    68,    72,    25,    98,    71,   105,    65,    66,    65,
      66,    48,    65,    66,    65,    66,    52,     5,     6,     7,
       8,    19,    20,    21,     3,    49,    12,    22,    11,    92,
      23,    14,   130,    53,    46,    35,    74,    67,    75,    67,
     110,    24,    67,   108,    67,    51,    76,    87,    43,   114,
     128,    76,    54,    88,    56,    69,    61,    62,   144,    40,
      41,    70,    50,   131,    42,    55,    51,    43,   135,    19,
      20,    21,   152,    47,    60,    22,    73,    80,    23,    19,
      20,    21,    81,    84,   139,    22,    93,     4,    23,    24,
      83,     5,     6,     7,     8,   147,   150,    25,    85,    24,
      86,    19,    20,    21,    89,   125,    68,    22,    90,    51,
      23,    94,    91,    51,    19,    20,    21,    95,   106,    96,
      22,    24,    97,    23,   115,   116,   117,   118,   119,   120,
     121,   122,    99,   111,    24,     5,     6,     7,     8,   113,
     100,   101,   102,   103,   127,   132,   140,   129,   133,   134,
     145,   155,   136,   109,   141,   137,   138,   151,   142,   148,
     159,   156,   157,   158,    10,   146,   112,   149,    82,     0,
     154,   124
};

static const yytype_int16 yycheck[] =
{
      26,    43,    47,    15,    76,    46,    79,     3,     4,     3,
       4,    21,     3,     4,     3,     4,    23,     9,    10,    11,
      12,    13,    14,    15,     0,    35,     7,    19,    33,    70,
      22,    33,   104,    40,    22,    33,    32,    33,    34,    33,
      85,    33,    33,    83,    33,    71,    42,    37,    42,    89,
      95,    42,    36,    43,    33,    43,    33,    34,   131,    42,
      42,    16,     6,   105,    42,    37,    92,    42,   109,    13,
      14,    15,   144,    42,    33,    19,    33,    42,    22,    13,
      14,    15,     4,    43,   125,    19,    20,     5,    22,    33,
      42,     9,    10,    11,    12,   137,   141,   109,    37,    33,
      43,    13,    14,    15,    42,    17,   148,    19,    45,   135,
      22,    43,    45,   139,    13,    14,    15,    42,     4,    36,
      19,    33,    36,    22,    24,    25,    26,    27,    28,    29,
      30,    31,    36,    36,    33,     9,    10,    11,    12,    36,
      38,    39,    40,    41,    37,    37,    18,    43,    43,    43,
       4,     8,    43,    84,    42,    45,    45,    36,    43,    42,
      36,    43,    43,    43,     2,   135,    87,   138,    55,    -1,
     144,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    82,     0,     5,     9,    10,    11,    12,    48,
      52,    33,     7,    49,    33,    50,    51,    52,    83,    13,
      14,    15,    19,    22,    33,    51,    61,    62,    63,    70,
      71,    74,    76,    80,    81,    33,    53,    54,    55,    56,
      42,    42,    42,    42,    77,    79,    79,    42,    21,    35,
       6,    62,    23,    40,    36,    37,    33,    58,    59,    60,
      33,    33,    34,    72,    73,     3,     4,    33,    69,    79,
      16,    61,    58,    33,    32,    34,    42,    64,    67,    69,
      42,     4,    53,    42,    43,    37,    43,    37,    43,    42,
      45,    45,    61,    20,    43,    42,    36,    36,    64,    36,
      38,    39,    40,    41,    68,    68,     4,    57,    57,    50,
      58,    36,    73,    36,    57,    24,    25,    26,    27,    28,
      29,    30,    31,    78,    78,    17,    75,    37,    58,    43,
      64,    69,    37,    43,    43,    61,    43,    45,    45,    61,
      18,    42,    43,    65,    68,     4,    63,    69,    42,    77,
      58,    36,    64,    66,    67,     8,    43,    43,    43,    36
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
#line 26 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {printf("syntaxe correcte\n"); YYACCEPT;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 28 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {strcpy(saveType, (yyvsp[(2) - (2)].str));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 34 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {strcpy(save,(yyvsp[(1) - (1)].str));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 35 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {strcpy(save,(yyvsp[(1) - (1)].str));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 36 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {strcpy(save,(yyvsp[(1) - (1)].str));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 37 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {strcpy(save,(yyvsp[(1) - (1)].str));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 41 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    { existe=doubleDeclaration((yyvsp[(1) - (1)].str),saveType); if(existe==0){ inserer((yyvsp[(1) - (1)].str),"idf","/",saveType,0, 0); insereType((yyvsp[(1) - (1)].str),save); insereTypeVar((yyvsp[(1) - (1)].str),saveType); }
														else printf("erreur sementique a la ligne %d: DOUBLE DECLARATION de la variable %s\n", nb_ligne, (yyvsp[(1) - (1)].str));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 45 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    { existe=doubleDeclaration((yyvsp[(1) - (5)].str),saveType); if(existe==0){inserer((yyvsp[(1) - (5)].str),"idf","/",saveType,0, 0); insereType((yyvsp[(1) - (5)].str),save); insereTypeVar((yyvsp[(1) - (5)].str),saveType); }
																								else printf("erreur sementique ligne %d: DOUBLE DECLARATION de la variable %s\n", nb_ligne, (yyvsp[(1) - (5)].str));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 47 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {existe=doubleDeclaration((yyvsp[(1) - (3)].str),saveType); if(existe==0){ inserer((yyvsp[(1) - (3)].str),"idf","/",saveType,0, 0); insereType((yyvsp[(1) - (3)].str),save); insereTypeVar((yyvsp[(1) - (3)].str),saveType); }
				                                                     else printf("erreur sementique a la ligne %d: DOUBLE DECLARATION de la variable %s\n", nb_ligne, (yyvsp[(1) - (3)].str));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 54 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {existe=Rechercher((yyvsp[(1) - (4)].str),0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, (yyvsp[(1) - (4)].str));
							;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 60 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {existe=Rechercher((yyvsp[(1) - (4)].str),0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, (yyvsp[(1) - (4)].str));
									
									if(compareType((yyvsp[(1) - (4)].str), "LOGICAL") == 0) 
										printf("erreur sementique ligne %d: INCOMPATIBILTE DE TYPE de la variable %s\n", nb_ligne, (yyvsp[(1) - (4)].str));
									;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 66 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {existe=Rechercher((yyvsp[(1) - (4)].str),0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, (yyvsp[(1) - (4)].str));
										
									if(compareType((yyvsp[(1) - (4)].str), "CHARACTER") == 0) 
										printf("erreur sementique ligne %d: INCOMPATIBILTE DE TYPE de la variable %s\n", nb_ligne, (yyvsp[(1) - (4)].str));	
									;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 74 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {existe=Rechercher((yyvsp[(1) - (4)].str),0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, (yyvsp[(1) - (4)].str));
									k=recupererType((yyvsp[(1) - (4)].str));
									if(k==2){ strcpy(type,"INTEGER");}
									else if(k==3) {strcpy(type,"REAL"); }
									else{printf("erreur sementique : INCOMPATIBILTE DE TYPE de %s ligne %d \n", (yyvsp[(1) - (4)].str), nb_ligne);
									};}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 90 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {strcpy(saveOpr, "+");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 91 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {strcpy(saveOpr, "-");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 92 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {strcpy(saveOpr, "/");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 93 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {strcpy(saveOpr, "*");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 94 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {existe=Rechercher((yyvsp[(1) - (1)].str),0); 
				if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, (yyvsp[(1) - (1)].str));
				else{
						i=compareType((yyvsp[(1) - (1)].str),type);
						if(i==0) printf("erreur sementique : INCOMPATIBILTE DE TYPE de %s ligne %d \n", (yyvsp[(1) - (1)].str), nb_ligne);
				}
									;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 101 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {	saveVal = (yyvsp[(1) - (1)].integer);
					if (strcmp(saveOpr, "/") == 0 && saveVal == 0)
						printf("erreur semantique : DIVISION PAR ZERO ligne %d\n", nb_ligne);
						saveVal = -1;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 105 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {saveVal = (yyvsp[(1) - (1)].reel);
					if (strcmp(saveOpr, "/") == 0 && saveVal == 0)
						printf("erreur semantique : DIVISION PAR ZERO ligne %d\n", nb_ligne);
						saveVal = -1;;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 109 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {existe=Rechercher((yyvsp[(1) - (4)].str),0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, (yyvsp[(1) - (4)].str));
									else{
										i=compareType((yyvsp[(1) - (4)].str),type);
										if(i==0) printf("erreur sementique : INCOMPATIBILTE DE TYPE de %s ligne %d \n", (yyvsp[(1) - (4)].str), nb_ligne);
									}
								;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 117 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {existe=Rechercher((yyvsp[(1) - (5)].str),0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, (yyvsp[(1) - (5)].str));
									;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 123 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    {existe=Rechercher((yyvsp[(1) - (1)].str),0); 
									if(existe!=0) printf("erreur sementique a la ligne %d: variable %s NON DECLAREE\n", nb_ligne, (yyvsp[(1) - (1)].str));
									;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 138 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"
    { strcpy(saveType, (yyvsp[(4) - (4)].str)); inserer((yyvsp[(4) - (4)].str),"idf","/",saveType,0, 0); insereType((yyvsp[(4) - (4)].str),save); insereTypeVar((yyvsp[(4) - (4)].str),saveType); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1736 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.tab.c"
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
#line 140 "syntaxique_ASSELAH_Dhalia_BOUALLOUCHE_Lina.y"

int yyerror(char *msg)
{printf("%s error syntaxique a la ligne : %d \n", nb_ligne);
return 1; }
main()
{
yyparse();
afficherMotsCles();
afficherSeparateurs();
afficherEntites();
}yywrap()
{}


