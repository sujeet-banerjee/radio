/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     K_READ = 258,
     K_WRITE = 259,
     K_READ_LO = 260,
     K_READ_HI = 261,
     K_WRITE_LO = 262,
     K_WRITE_HI = 263,
     K_LOADPAGE_LO = 264,
     K_LOADPAGE_HI = 265,
     K_LOAD_EXT_ADDR = 266,
     K_WRITEPAGE = 267,
     K_CHIP_ERASE = 268,
     K_PGM_ENABLE = 269,
     K_MEMORY = 270,
     K_PAGE_SIZE = 271,
     K_PAGED = 272,
     K_BAUDRATE = 273,
     K_BS2 = 274,
     K_BUFF = 275,
     K_CHIP_ERASE_DELAY = 276,
     K_CONNTYPE = 277,
     K_DEDICATED = 278,
     K_DEFAULT_BITCLOCK = 279,
     K_DEFAULT_PARALLEL = 280,
     K_DEFAULT_PROGRAMMER = 281,
     K_DEFAULT_SAFEMODE = 282,
     K_DEFAULT_SERIAL = 283,
     K_DESC = 284,
     K_DEVICECODE = 285,
     K_STK500_DEVCODE = 286,
     K_AVR910_DEVCODE = 287,
     K_EEPROM = 288,
     K_ERRLED = 289,
     K_FLASH = 290,
     K_ID = 291,
     K_IO = 292,
     K_LOADPAGE = 293,
     K_MAX_WRITE_DELAY = 294,
     K_MCU_BASE = 295,
     K_MIN_WRITE_DELAY = 296,
     K_MISO = 297,
     K_MOSI = 298,
     K_NUM_PAGES = 299,
     K_NVM_BASE = 300,
     K_OCDREV = 301,
     K_OFFSET = 302,
     K_PAGEL = 303,
     K_PARALLEL = 304,
     K_PARENT = 305,
     K_PART = 306,
     K_PGMLED = 307,
     K_PROGRAMMER = 308,
     K_PSEUDO = 309,
     K_PWROFF_AFTER_WRITE = 310,
     K_RDYLED = 311,
     K_READBACK_P1 = 312,
     K_READBACK_P2 = 313,
     K_READMEM = 314,
     K_RESET = 315,
     K_RETRY_PULSE = 316,
     K_SERIAL = 317,
     K_SCK = 318,
     K_SIGNATURE = 319,
     K_SIZE = 320,
     K_USB = 321,
     K_USBDEV = 322,
     K_USBSN = 323,
     K_USBPID = 324,
     K_USBPRODUCT = 325,
     K_USBVENDOR = 326,
     K_USBVID = 327,
     K_TYPE = 328,
     K_VCC = 329,
     K_VFYLED = 330,
     K_NO = 331,
     K_YES = 332,
     K_TIMEOUT = 333,
     K_STABDELAY = 334,
     K_CMDEXEDELAY = 335,
     K_HVSPCMDEXEDELAY = 336,
     K_SYNCHLOOPS = 337,
     K_BYTEDELAY = 338,
     K_POLLVALUE = 339,
     K_POLLINDEX = 340,
     K_PREDELAY = 341,
     K_POSTDELAY = 342,
     K_POLLMETHOD = 343,
     K_MODE = 344,
     K_DELAY = 345,
     K_BLOCKSIZE = 346,
     K_READSIZE = 347,
     K_HVENTERSTABDELAY = 348,
     K_PROGMODEDELAY = 349,
     K_LATCHCYCLES = 350,
     K_TOGGLEVTG = 351,
     K_POWEROFFDELAY = 352,
     K_RESETDELAYMS = 353,
     K_RESETDELAYUS = 354,
     K_HVLEAVESTABDELAY = 355,
     K_RESETDELAY = 356,
     K_SYNCHCYCLES = 357,
     K_HVCMDEXEDELAY = 358,
     K_CHIPERASEPULSEWIDTH = 359,
     K_CHIPERASEPOLLTIMEOUT = 360,
     K_CHIPERASETIME = 361,
     K_PROGRAMFUSEPULSEWIDTH = 362,
     K_PROGRAMFUSEPOLLTIMEOUT = 363,
     K_PROGRAMLOCKPULSEWIDTH = 364,
     K_PROGRAMLOCKPOLLTIMEOUT = 365,
     K_PP_CONTROLSTACK = 366,
     K_HVSP_CONTROLSTACK = 367,
     K_ALLOWFULLPAGEBITSTREAM = 368,
     K_ENABLEPAGEPROGRAMMING = 369,
     K_HAS_JTAG = 370,
     K_HAS_DW = 371,
     K_HAS_PDI = 372,
     K_HAS_TPI = 373,
     K_IDR = 374,
     K_IS_AT90S1200 = 375,
     K_IS_AVR32 = 376,
     K_RAMPZ = 377,
     K_SPMCR = 378,
     K_EECR = 379,
     K_FLASH_INSTR = 380,
     K_EEPROM_INSTR = 381,
     TKN_COMMA = 382,
     TKN_EQUAL = 383,
     TKN_SEMI = 384,
     TKN_TILDE = 385,
     TKN_LEFT_PAREN = 386,
     TKN_RIGHT_PAREN = 387,
     TKN_NUMBER = 388,
     TKN_NUMBER_REAL = 389,
     TKN_STRING = 390
   };
#endif
/* Tokens.  */
#define K_READ 258
#define K_WRITE 259
#define K_READ_LO 260
#define K_READ_HI 261
#define K_WRITE_LO 262
#define K_WRITE_HI 263
#define K_LOADPAGE_LO 264
#define K_LOADPAGE_HI 265
#define K_LOAD_EXT_ADDR 266
#define K_WRITEPAGE 267
#define K_CHIP_ERASE 268
#define K_PGM_ENABLE 269
#define K_MEMORY 270
#define K_PAGE_SIZE 271
#define K_PAGED 272
#define K_BAUDRATE 273
#define K_BS2 274
#define K_BUFF 275
#define K_CHIP_ERASE_DELAY 276
#define K_CONNTYPE 277
#define K_DEDICATED 278
#define K_DEFAULT_BITCLOCK 279
#define K_DEFAULT_PARALLEL 280
#define K_DEFAULT_PROGRAMMER 281
#define K_DEFAULT_SAFEMODE 282
#define K_DEFAULT_SERIAL 283
#define K_DESC 284
#define K_DEVICECODE 285
#define K_STK500_DEVCODE 286
#define K_AVR910_DEVCODE 287
#define K_EEPROM 288
#define K_ERRLED 289
#define K_FLASH 290
#define K_ID 291
#define K_IO 292
#define K_LOADPAGE 293
#define K_MAX_WRITE_DELAY 294
#define K_MCU_BASE 295
#define K_MIN_WRITE_DELAY 296
#define K_MISO 297
#define K_MOSI 298
#define K_NUM_PAGES 299
#define K_NVM_BASE 300
#define K_OCDREV 301
#define K_OFFSET 302
#define K_PAGEL 303
#define K_PARALLEL 304
#define K_PARENT 305
#define K_PART 306
#define K_PGMLED 307
#define K_PROGRAMMER 308
#define K_PSEUDO 309
#define K_PWROFF_AFTER_WRITE 310
#define K_RDYLED 311
#define K_READBACK_P1 312
#define K_READBACK_P2 313
#define K_READMEM 314
#define K_RESET 315
#define K_RETRY_PULSE 316
#define K_SERIAL 317
#define K_SCK 318
#define K_SIGNATURE 319
#define K_SIZE 320
#define K_USB 321
#define K_USBDEV 322
#define K_USBSN 323
#define K_USBPID 324
#define K_USBPRODUCT 325
#define K_USBVENDOR 326
#define K_USBVID 327
#define K_TYPE 328
#define K_VCC 329
#define K_VFYLED 330
#define K_NO 331
#define K_YES 332
#define K_TIMEOUT 333
#define K_STABDELAY 334
#define K_CMDEXEDELAY 335
#define K_HVSPCMDEXEDELAY 336
#define K_SYNCHLOOPS 337
#define K_BYTEDELAY 338
#define K_POLLVALUE 339
#define K_POLLINDEX 340
#define K_PREDELAY 341
#define K_POSTDELAY 342
#define K_POLLMETHOD 343
#define K_MODE 344
#define K_DELAY 345
#define K_BLOCKSIZE 346
#define K_READSIZE 347
#define K_HVENTERSTABDELAY 348
#define K_PROGMODEDELAY 349
#define K_LATCHCYCLES 350
#define K_TOGGLEVTG 351
#define K_POWEROFFDELAY 352
#define K_RESETDELAYMS 353
#define K_RESETDELAYUS 354
#define K_HVLEAVESTABDELAY 355
#define K_RESETDELAY 356
#define K_SYNCHCYCLES 357
#define K_HVCMDEXEDELAY 358
#define K_CHIPERASEPULSEWIDTH 359
#define K_CHIPERASEPOLLTIMEOUT 360
#define K_CHIPERASETIME 361
#define K_PROGRAMFUSEPULSEWIDTH 362
#define K_PROGRAMFUSEPOLLTIMEOUT 363
#define K_PROGRAMLOCKPULSEWIDTH 364
#define K_PROGRAMLOCKPOLLTIMEOUT 365
#define K_PP_CONTROLSTACK 366
#define K_HVSP_CONTROLSTACK 367
#define K_ALLOWFULLPAGEBITSTREAM 368
#define K_ENABLEPAGEPROGRAMMING 369
#define K_HAS_JTAG 370
#define K_HAS_DW 371
#define K_HAS_PDI 372
#define K_HAS_TPI 373
#define K_IDR 374
#define K_IS_AT90S1200 375
#define K_IS_AVR32 376
#define K_RAMPZ 377
#define K_SPMCR 378
#define K_EECR 379
#define K_FLASH_INSTR 380
#define K_EEPROM_INSTR 381
#define TKN_COMMA 382
#define TKN_EQUAL 383
#define TKN_SEMI 384
#define TKN_TILDE 385
#define TKN_LEFT_PAREN 386
#define TKN_RIGHT_PAREN 387
#define TKN_NUMBER 388
#define TKN_NUMBER_REAL 389
#define TKN_STRING 390




/* Copy the first part of user declarations.  */
#line 21 "config_gram.y"


#include "ac_cfg.h"

#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "avrdude.h"

#include "config.h"
#include "lists.h"
#include "par.h"
#include "serbb.h"
#include "pindefs.h"
#include "ppi.h"
#include "pgm.h"
#include "pgm_type.h"
#include "avr.h"

#if defined(WIN32NATIVE)
#define strtok_r( _s, _sep, _lasts ) \
    ( *(_lasts) = strtok( (_s), (_sep) ) )
#endif

int yylex(void);
int yyerror(char * errmsg);

static int assign_pin(int pinno, TOKEN * v, int invert);
static int assign_pin_list(int invert);
static int which_opcode(TOKEN * opcode);
static int parse_cmdbits(OPCODE * op);

static int pin_name;


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 412 "config_gram.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   391

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  136
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNRULES -- Number of states.  */
#define YYNSTATES  412

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   390

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
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     8,    10,    12,    15,    18,
      21,    26,    31,    36,    41,    46,    49,    51,    55,    58,
      60,    64,    66,    70,    72,    76,    79,    83,    87,    89,
      91,    93,    95,    99,   103,   107,   109,   111,   115,   117,
     119,   121,   125,   129,   133,   137,   141,   145,   147,   150,
     152,   153,   155,   160,   162,   166,   168,   169,   170,   175,
     176,   181,   182,   187,   188,   193,   194,   199,   200,   205,
     206,   211,   212,   217,   218,   223,   224,   229,   231,   233,
     235,   237,   239,   241,   243,   245,   247,   249,   251,   253,
     256,   260,   262,   264,   266,   268,   270,   272,   276,   280,
     284,   288,   292,   298,   302,   306,   310,   314,   318,   322,
     326,   330,   334,   338,   342,   346,   350,   354,   358,   362,
     366,   370,   374,   378,   382,   386,   390,   394,   398,   402,
     406,   410,   414,   418,   422,   426,   430,   434,   438,   442,
     446,   450,   454,   458,   462,   466,   470,   474,   478,   482,
     486,   490,   494,   498,   502,   506,   510,   514,   515,   520,
     524,   526,   528,   531,   535,   539,   543,   547,   551,   555,
     559,   563,   567,   571,   575,   579,   583,   587,   591,   595
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     138,     0,    -1,   133,    -1,   134,    -1,    -1,   139,    -1,
     140,    -1,   139,   140,    -1,   141,   129,    -1,   143,   129,
      -1,    26,   128,   135,   129,    -1,    25,   128,   135,   129,
      -1,    28,   128,   135,   129,    -1,    24,   128,   137,   129,
      -1,    27,   128,   177,   129,    -1,   142,   147,    -1,    53,
      -1,    53,    50,   135,    -1,   144,   171,    -1,    51,    -1,
      51,    50,   135,    -1,   135,    -1,   145,   127,   135,    -1,
     133,    -1,   146,   127,   133,    -1,   148,   129,    -1,   147,
     148,   129,    -1,    36,   128,   145,    -1,   149,    -1,   159,
      -1,   153,    -1,   151,    -1,    29,   128,   135,    -1,    18,
     128,   133,    -1,    73,   128,   150,    -1,   135,    -1,     1,
      -1,    22,   128,   152,    -1,    49,    -1,    62,    -1,    66,
      -1,    67,   128,   135,    -1,    72,   128,   133,    -1,    69,
     128,   133,    -1,    68,   128,   135,    -1,    71,   128,   135,
      -1,    70,   128,   135,    -1,   133,    -1,   130,   133,    -1,
     154,    -1,    -1,   154,    -1,   130,   131,   146,   132,    -1,
     156,    -1,   157,   127,   156,    -1,   157,    -1,    -1,    -1,
      74,   128,   160,   158,    -1,    -1,    20,   128,   161,   158,
      -1,    -1,    60,   128,   162,   155,    -1,    -1,    63,   128,
     163,   155,    -1,    -1,    43,   128,   164,   155,    -1,    -1,
      42,   128,   165,   155,    -1,    -1,    34,   128,   166,   155,
      -1,    -1,    56,   128,   167,   155,    -1,    -1,    52,   128,
     168,   155,    -1,    -1,    75,   128,   169,   155,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,    14,    -1,   175,   129,    -1,   171,   175,   129,    -1,
      23,    -1,    37,    -1,   177,    -1,    54,    -1,    60,    -1,
      63,    -1,    36,   128,   135,    -1,    29,   128,   135,    -1,
      30,   128,   133,    -1,    31,   128,   133,    -1,    32,   128,
     133,    -1,    64,   128,   133,   133,   133,    -1,   111,   128,
     146,    -1,   112,   128,   146,    -1,   125,   128,   146,    -1,
     126,   128,   146,    -1,    21,   128,   133,    -1,    48,   128,
     133,    -1,    19,   128,   133,    -1,    60,   128,   172,    -1,
      78,   128,   133,    -1,    79,   128,   133,    -1,    80,   128,
     133,    -1,    81,   128,   133,    -1,    82,   128,   133,    -1,
      83,   128,   133,    -1,    84,   128,   133,    -1,    85,   128,
     133,    -1,    86,   128,   133,    -1,    87,   128,   133,    -1,
      88,   128,   133,    -1,    93,   128,   133,    -1,    94,   128,
     133,    -1,    95,   128,   133,    -1,    96,   128,   133,    -1,
      97,   128,   133,    -1,    98,   128,   133,    -1,    99,   128,
     133,    -1,   100,   128,   133,    -1,   101,   128,   133,    -1,
     104,   128,   133,    -1,   105,   128,   133,    -1,   106,   128,
     133,    -1,   107,   128,   133,    -1,   108,   128,   133,    -1,
     109,   128,   133,    -1,   110,   128,   133,    -1,   102,   128,
     133,    -1,   115,   128,   177,    -1,   116,   128,   177,    -1,
     117,   128,   177,    -1,   118,   128,   177,    -1,   120,   128,
     177,    -1,   121,   128,   177,    -1,   113,   128,   177,    -1,
     114,   128,   177,    -1,   119,   128,   133,    -1,   122,   128,
     133,    -1,   123,   128,   133,    -1,   124,   128,   133,    -1,
      40,   128,   133,    -1,    45,   128,   133,    -1,    46,   128,
     133,    -1,    62,   128,   177,    -1,    49,   128,   173,    -1,
      61,   128,   174,    -1,    -1,    15,   135,   176,   178,    -1,
     170,   128,   145,    -1,    77,    -1,    76,    -1,   179,   129,
      -1,   178,   179,   129,    -1,    17,   128,   177,    -1,    65,
     128,   133,    -1,    16,   128,   133,    -1,    44,   128,   133,
      -1,    47,   128,   133,    -1,    41,   128,   133,    -1,    39,
     128,   133,    -1,    55,   128,   177,    -1,    57,   128,   133,
      -1,    58,   128,   133,    -1,    89,   128,   133,    -1,    90,
     128,   133,    -1,    91,   128,   133,    -1,    92,   128,   133,
      -1,    85,   128,   133,    -1,   170,   128,   145,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   215,   215,   221,   225,   226,   230,   231,   236,   238,
     240,   246,   252,   258,   263,   274,   308,   314,   332,   397,
     403,   422,   423,   428,   429,   433,   434,   438,   448,   450,
     452,   454,   456,   461,   470,   474,   485,   495,   499,   500,
     501,   505,   512,   518,   524,   531,   538,   548,   550,   554,
     556,   560,   562,   566,   568,   573,   575,   579,   579,   580,
     580,   581,   581,   582,   582,   583,   583,   584,   584,   585,
     585,   586,   586,   587,   587,   588,   588,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   608,
     609,   614,   614,   618,   618,   622,   622,   626,   633,   640,
     650,   657,   664,   675,   709,   743,   776,   809,   815,   821,
     827,   837,   843,   849,   855,   861,   867,   873,   879,   885,
     891,   897,   903,   909,   915,   921,   927,   933,   939,   945,
     951,   957,   963,   969,   975,   981,   987,   993,   999,  1005,
    1015,  1025,  1035,  1045,  1055,  1065,  1075,  1085,  1091,  1097,
    1103,  1109,  1115,  1121,  1127,  1137,  1156,  1180,  1179,  1199,
    1222,  1222,  1227,  1228,  1233,  1239,  1246,  1252,  1258,  1264,
    1270,  1276,  1282,  1288,  1295,  1301,  1307,  1313,  1319,  1326
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "K_READ", "K_WRITE", "K_READ_LO",
  "K_READ_HI", "K_WRITE_LO", "K_WRITE_HI", "K_LOADPAGE_LO",
  "K_LOADPAGE_HI", "K_LOAD_EXT_ADDR", "K_WRITEPAGE", "K_CHIP_ERASE",
  "K_PGM_ENABLE", "K_MEMORY", "K_PAGE_SIZE", "K_PAGED", "K_BAUDRATE",
  "K_BS2", "K_BUFF", "K_CHIP_ERASE_DELAY", "K_CONNTYPE", "K_DEDICATED",
  "K_DEFAULT_BITCLOCK", "K_DEFAULT_PARALLEL", "K_DEFAULT_PROGRAMMER",
  "K_DEFAULT_SAFEMODE", "K_DEFAULT_SERIAL", "K_DESC", "K_DEVICECODE",
  "K_STK500_DEVCODE", "K_AVR910_DEVCODE", "K_EEPROM", "K_ERRLED",
  "K_FLASH", "K_ID", "K_IO", "K_LOADPAGE", "K_MAX_WRITE_DELAY",
  "K_MCU_BASE", "K_MIN_WRITE_DELAY", "K_MISO", "K_MOSI", "K_NUM_PAGES",
  "K_NVM_BASE", "K_OCDREV", "K_OFFSET", "K_PAGEL", "K_PARALLEL",
  "K_PARENT", "K_PART", "K_PGMLED", "K_PROGRAMMER", "K_PSEUDO",
  "K_PWROFF_AFTER_WRITE", "K_RDYLED", "K_READBACK_P1", "K_READBACK_P2",
  "K_READMEM", "K_RESET", "K_RETRY_PULSE", "K_SERIAL", "K_SCK",
  "K_SIGNATURE", "K_SIZE", "K_USB", "K_USBDEV", "K_USBSN", "K_USBPID",
  "K_USBPRODUCT", "K_USBVENDOR", "K_USBVID", "K_TYPE", "K_VCC", "K_VFYLED",
  "K_NO", "K_YES", "K_TIMEOUT", "K_STABDELAY", "K_CMDEXEDELAY",
  "K_HVSPCMDEXEDELAY", "K_SYNCHLOOPS", "K_BYTEDELAY", "K_POLLVALUE",
  "K_POLLINDEX", "K_PREDELAY", "K_POSTDELAY", "K_POLLMETHOD", "K_MODE",
  "K_DELAY", "K_BLOCKSIZE", "K_READSIZE", "K_HVENTERSTABDELAY",
  "K_PROGMODEDELAY", "K_LATCHCYCLES", "K_TOGGLEVTG", "K_POWEROFFDELAY",
  "K_RESETDELAYMS", "K_RESETDELAYUS", "K_HVLEAVESTABDELAY", "K_RESETDELAY",
  "K_SYNCHCYCLES", "K_HVCMDEXEDELAY", "K_CHIPERASEPULSEWIDTH",
  "K_CHIPERASEPOLLTIMEOUT", "K_CHIPERASETIME", "K_PROGRAMFUSEPULSEWIDTH",
  "K_PROGRAMFUSEPOLLTIMEOUT", "K_PROGRAMLOCKPULSEWIDTH",
  "K_PROGRAMLOCKPOLLTIMEOUT", "K_PP_CONTROLSTACK", "K_HVSP_CONTROLSTACK",
  "K_ALLOWFULLPAGEBITSTREAM", "K_ENABLEPAGEPROGRAMMING", "K_HAS_JTAG",
  "K_HAS_DW", "K_HAS_PDI", "K_HAS_TPI", "K_IDR", "K_IS_AT90S1200",
  "K_IS_AVR32", "K_RAMPZ", "K_SPMCR", "K_EECR", "K_FLASH_INSTR",
  "K_EEPROM_INSTR", "TKN_COMMA", "TKN_EQUAL", "TKN_SEMI", "TKN_TILDE",
  "TKN_LEFT_PAREN", "TKN_RIGHT_PAREN", "TKN_NUMBER", "TKN_NUMBER_REAL",
  "TKN_STRING", "$accept", "number_real", "configuration", "config", "def",
  "prog_def", "prog_decl", "part_def", "part_decl", "string_list",
  "num_list", "prog_parms", "prog_parm", "prog_parm_type",
  "prog_parm_type_id", "prog_parm_conntype", "prog_parm_conntype_id",
  "prog_parm_usb", "pin_number_non_empty", "pin_number",
  "pin_list_element", "pin_list_non_empty", "pin_list", "prog_parm_pins",
  "@1", "@2", "@3", "@4", "@5", "@6", "@7", "@8", "@9", "@10", "opcode",
  "part_parms", "reset_disposition", "parallel_modes", "retry_lines",
  "part_parm", "@11", "yesno", "mem_specs", "mem_spec", 0
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   136,   137,   137,   138,   138,   139,   139,   140,   140,
     140,   140,   140,   140,   140,   141,   142,   142,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     148,   148,   148,   148,   149,   150,   150,   151,   152,   152,
     152,   153,   153,   153,   153,   153,   153,   154,   154,   155,
     155,   156,   156,   157,   157,   158,   158,   160,   159,   161,
     159,   162,   159,   163,   159,   164,   159,   165,   159,   166,
     159,   167,   159,   168,   159,   169,   159,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   171,
     171,   172,   172,   173,   173,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   176,   175,   175,
     177,   177,   178,   178,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     1,     1,     2,     2,     2,
       4,     4,     4,     4,     4,     2,     1,     3,     2,     1,
       3,     1,     3,     1,     3,     2,     3,     3,     1,     1,
       1,     1,     3,     3,     3,     1,     1,     3,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     1,     2,     1,
       0,     1,     4,     1,     3,     1,     0,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     4,     3,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     0,     0,     0,    19,    16,     0,     5,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,    28,    31,
      30,    29,     9,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,     0,     2,
       3,     0,     0,     0,   161,   160,     0,     0,    20,    17,
       0,    59,     0,     0,    69,     0,    67,    65,    73,    71,
      61,    63,     0,     0,     0,     0,     0,     0,     0,    57,
      75,     0,    25,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,    13,    11,    10,
      14,    12,    33,    56,    38,    39,    40,    37,    32,    50,
      21,    27,    50,    50,    50,    50,    50,    50,    41,    44,
      43,    46,    45,    42,    36,    35,    34,    56,    50,    26,
       0,   109,   107,    98,    99,   100,   101,    97,   151,   152,
     153,   108,    94,   155,    93,    91,    92,   110,    95,    96,
     156,   154,     0,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   138,   131,   132,   133,   134,   135,   136,
     137,    23,   103,   104,   145,   146,   139,   140,   141,   142,
     147,   143,   144,   148,   149,   150,   105,   106,   159,    90,
       0,    47,    51,    53,    55,    60,     0,    49,    70,     0,
      68,    66,    74,    72,    62,    64,    58,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   158,     0,     0,     0,     0,    48,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   162,
     102,    24,     0,    54,   166,   164,   170,   169,   167,   168,
     171,   172,   173,   165,   178,   174,   175,   176,   177,   179,
     163,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   131,     8,     9,    10,    11,    12,    13,    14,   241,
     312,    46,    47,    48,   256,    49,   237,    50,   337,   338,
     333,   334,   335,    51,   257,   233,   246,   247,   243,   242,
     239,   245,   244,   258,   126,   127,   277,   273,   280,   128,
     260,   136,   364,   365
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -255
static const yytype_int16 yypact[] =
{
      36,  -104,   -95,   -94,   -87,   -72,     9,    21,    72,    36,
    -255,   -56,   253,   -55,   144,  -107,   -60,   -59,   -45,   -58,
     -57,   -52,  -255,  -255,  -255,   -49,   -44,   -42,   -38,   -37,
     -36,   -35,   -34,   -33,   -31,   -28,   -27,   -26,   -25,   -24,
     -23,   -21,   -20,   -19,   -17,   -16,   253,   -15,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,   -22,   -13,   -12,   -11,   -10,
      -9,    -8,    -7,    -6,    -5,    -4,    -3,    -1,     0,     1,
       6,     7,     8,    10,    12,    14,    15,    16,    17,    18,
      32,    34,    38,    39,    40,    42,    43,    44,    49,    50,
      51,    53,    54,    55,    57,    58,    59,    60,    63,    66,
      67,    68,    69,    71,    73,    74,    79,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   144,    91,  -255,
    -255,    92,   104,   105,  -255,  -255,   106,   107,  -255,  -255,
     114,  -255,   -41,     2,  -255,    65,  -255,  -255,  -255,  -255,
    -255,  -255,   137,   139,   143,   142,   145,   146,     4,  -255,
    -255,   149,  -255,  -255,   148,   150,   151,   152,   155,   157,
     156,   159,   160,   161,   164,   -47,   -14,   -50,   -45,   165,
     166,   167,   168,   169,   170,   171,   173,   174,   175,   177,
     178,   179,   181,   182,   184,   185,   186,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   207,
     -45,   -45,   -45,   -45,   -45,   -45,   208,   -45,   -45,   209,
     210,   211,   207,   207,    65,   216,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -119,  -255,  -255,  -255,  -255,  -255,  -111,
    -255,   219,  -111,  -111,  -111,  -111,  -111,  -111,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -119,  -111,  -255,
      41,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,   214,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,   221,   221,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,   221,   221,   219,  -255,
    -113,  -255,  -255,  -255,   222,  -255,   217,  -255,  -255,   218,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,   223,   224,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,    41,   240,   241,   242,   207,  -255,
    -119,  -255,   243,   -45,   244,   245,   246,   247,   -45,   248,
     249,   250,   251,   252,   254,   255,   256,    65,   257,  -255,
    -255,  -255,  -115,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,   219,
    -255,  -255
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -255,  -255,  -255,  -255,   275,  -255,  -255,  -255,  -255,  -223,
    -207,  -255,   123,  -255,  -255,  -255,  -255,  -255,  -229,  -177,
    -151,  -255,   111,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -254,  -255,  -255,  -255,  -255,   263,
    -255,  -175,  -255,    27
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     274,   328,   313,   281,   332,   254,   363,   272,   234,   275,
     278,   330,   367,   279,   331,   326,   327,   411,   368,   336,
     369,   235,   331,   276,    15,   236,   129,   130,   332,   134,
     135,   134,   135,    16,    17,   314,   315,   316,   317,   318,
     319,    18,   321,   322,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    19,   348,   349,    20,
       1,     2,     3,     4,     5,   340,   341,   342,   343,   344,
     345,    21,    22,    24,    52,   132,   133,   137,   138,   140,
     350,   347,   351,   139,   141,   352,   142,     6,   353,     7,
     143,   144,   145,   146,   147,   148,   354,   149,   355,   356,
     150,   151,   152,   153,   154,   155,   357,   156,   157,   158,
     363,   159,   160,   163,   162,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   358,   175,   176,   177,
     359,   360,   361,   362,   178,   179,   180,   238,   181,   255,
     182,   332,   183,   184,   185,   186,   187,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
     188,   392,   189,    66,   409,    67,   190,   191,   192,   161,
     193,   194,   195,    68,    69,    70,    71,   196,   197,   198,
      72,   199,   200,   201,    73,   202,   203,   204,   205,    74,
      75,   206,    76,    77,   207,   208,   209,   210,   395,   211,
     240,   212,   213,   400,    78,    79,    80,   214,    81,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   393,
     226,   227,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,   228,   229,   230,   231,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   232,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    25,   248,    26,   249,    27,   250,   251,   259,   253,
     252,   261,    28,   262,    23,   264,   263,    29,   265,    30,
     266,   267,   268,   269,   270,    31,    32,   271,   282,   283,
     284,   285,   286,   287,   288,    33,   289,   290,   291,    34,
     292,   293,   294,    35,   295,   296,    36,   297,   298,   299,
      37,    38,    39,    40,    41,    42,    43,    44,    45,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   320,   323,   324,   325,   329,   339,   366,   367,   370,
     369,   372,   373,   371,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   346,   389,
       0,     0,     0,     0,   390,   391,   394,   396,   397,   398,
     399,   401,   402,   403,   404,   405,   410,   406,   407,   408,
     225,   388
};

static const yytype_int16 yycheck[] =
{
     175,   224,   209,   178,   233,     1,   260,    54,    49,    23,
      60,   130,   127,    63,   133,   222,   223,   132,   131,   130,
     133,    62,   133,    37,   128,    66,   133,   134,   257,    76,
      77,    76,    77,   128,   128,   210,   211,   212,   213,   214,
     215,   128,   217,   218,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,   128,    16,    17,    50,
      24,    25,    26,    27,    28,   242,   243,   244,   245,   246,
     247,    50,     0,   129,   129,   135,   135,   135,   135,   128,
      39,   258,    41,   135,   128,    44,   128,    51,    47,    53,
     128,   128,   128,   128,   128,   128,    55,   128,    57,    58,
     128,   128,   128,   128,   128,   128,    65,   128,   128,   128,
     364,   128,   128,   135,   129,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,    85,   128,   128,   128,
      89,    90,    91,    92,   128,   128,   128,   135,   128,   135,
     128,   370,   128,   128,   128,   128,   128,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
     128,   368,   128,    19,   387,    21,   128,   128,   128,    46,
     128,   128,   128,    29,    30,    31,    32,   128,   128,   128,
      36,   128,   128,   128,    40,   128,   128,   128,   128,    45,
      46,   128,    48,    49,   128,   128,   128,   128,   373,   128,
     135,   128,   128,   378,    60,    61,    62,   128,    64,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   370,
     129,   129,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,   129,   129,   129,   129,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   133,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    18,   135,    20,   135,    22,   133,   135,   129,   133,
     135,   133,    29,   133,     9,   133,   135,    34,   133,    36,
     133,   135,   133,   133,   133,    42,    43,   133,   133,   133,
     133,   133,   133,   133,   133,    52,   133,   133,   133,    56,
     133,   133,   133,    60,   133,   133,    63,   133,   133,   133,
      67,    68,    69,    70,    71,    72,    73,    74,    75,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   129,   127,   133,   127,   127,
     133,   128,   128,   135,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   257,   129,
      -1,    -1,    -1,    -1,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   129,   133,   133,   133,
     127,   364
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    25,    26,    27,    28,    51,    53,   138,   139,
     140,   141,   142,   143,   144,   128,   128,   128,   128,   128,
      50,    50,     0,   140,   129,    18,    20,    22,    29,    34,
      36,    42,    43,    52,    56,    60,    63,    67,    68,    69,
      70,    71,    72,    73,    74,    75,   147,   148,   149,   151,
     153,   159,   129,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    19,    21,    29,    30,
      31,    32,    36,    40,    45,    46,    48,    49,    60,    61,
      62,    64,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   170,   171,   175,   133,
     134,   137,   135,   135,    76,    77,   177,   135,   135,   135,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   148,   129,   135,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   175,   129,   129,   129,   129,
     129,   129,   133,   161,    49,    62,    66,   152,   135,   166,
     135,   145,   165,   164,   168,   167,   162,   163,   135,   135,
     133,   135,   135,   133,     1,   135,   150,   160,   169,   129,
     176,   133,   133,   135,   133,   133,   133,   135,   133,   133,
     133,   133,    54,   173,   177,    23,    37,   172,    60,    63,
     174,   177,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   146,   146,   177,   177,   177,   177,   177,   177,
     133,   177,   177,   133,   133,   133,   146,   146,   145,   129,
     130,   133,   154,   156,   157,   158,   130,   154,   155,   127,
     155,   155,   155,   155,   155,   155,   158,   155,    16,    17,
      39,    41,    44,    47,    55,    57,    58,    65,    85,    89,
      90,    91,    92,   170,   178,   179,   133,   127,   131,   133,
     127,   135,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   179,   129,
     133,   133,   146,   156,   133,   177,   133,   133,   133,   133,
     177,   133,   133,   133,   133,   133,   133,   133,   133,   145,
     129,   132
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 215 "config_gram.y"
    {
    (yyval) = (yyvsp[(1) - (1)]);
    /* convert value to real */
    (yyval)->value.number_real = (yyval)->value.number;
    (yyval)->value.type = V_NUM_REAL;
  }
    break;

  case 3:
#line 221 "config_gram.y"
    {
    (yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 10:
#line 240 "config_gram.y"
    {
    strncpy(default_programmer, (yyvsp[(3) - (4)])->value.string, MAX_STR_CONST);
    default_programmer[MAX_STR_CONST-1] = 0;
    free_token((yyvsp[(3) - (4)]));
  }
    break;

  case 11:
#line 246 "config_gram.y"
    {
    strncpy(default_parallel, (yyvsp[(3) - (4)])->value.string, PATH_MAX);
    default_parallel[PATH_MAX-1] = 0;
    free_token((yyvsp[(3) - (4)]));
  }
    break;

  case 12:
#line 252 "config_gram.y"
    {
    strncpy(default_serial, (yyvsp[(3) - (4)])->value.string, PATH_MAX);
    default_serial[PATH_MAX-1] = 0;
    free_token((yyvsp[(3) - (4)]));
  }
    break;

  case 13:
#line 258 "config_gram.y"
    {
    default_bitclock = (yyvsp[(3) - (4)])->value.number_real;
    free_token((yyvsp[(3) - (4)]));
  }
    break;

  case 14:
#line 263 "config_gram.y"
    {
    if ((yyvsp[(3) - (4)])->primary == K_YES)
      default_safemode = 1;
    else if ((yyvsp[(3) - (4)])->primary == K_NO)
      default_safemode = 0;
    free_token((yyvsp[(3) - (4)]));
  }
    break;

  case 15:
#line 275 "config_gram.y"
    {
      PROGRAMMER * existing_prog;
      char * id;
      if (lsize(current_prog->id) == 0) {
        fprintf(stderr,
                "%s: error at %s:%d: required parameter id not specified\n",
                progname, infile, lineno);
        exit(1);
      }
      if (current_prog->initpgm == NULL) {
        fprintf(stderr, "%s: error at %s:%d: programmer type not specified\n",
                progname, infile, lineno);
        exit(1);
      }
      id = ldata(lfirst(current_prog->id));
      existing_prog = locate_programmer(programmers, id);
      if (existing_prog) {
        fprintf(stderr, "%s: warning at %s:%d: programmer %s overwrites "
                "previous definition %s:%d.\n",
                progname, infile, current_prog->lineno,
                id, existing_prog->config_file, existing_prog->lineno);
        lrmv_d(programmers, existing_prog);
        pgm_free(existing_prog);
      }
      PUSH(programmers, current_prog);
//      pgm_fill_old_pins(current_prog); // TODO to be removed if old pin data no longer needed
//      pgm_display_generic(current_prog, id);
      current_prog = NULL;
    }
    break;

  case 16:
#line 309 "config_gram.y"
    { current_prog = pgm_new();
      strcpy(current_prog->config_file, infile);
      current_prog->lineno = lineno;
    }
    break;

  case 17:
#line 315 "config_gram.y"
    {
      struct programmer_t * pgm = locate_programmer(programmers, (yyvsp[(3) - (3)])->value.string);
      if (pgm == NULL) {
        fprintf(stderr,
                "%s: error at %s:%d: parent programmer %s not found\n",
                progname, infile, lineno, (yyvsp[(3) - (3)])->value.string);
        exit(1);
      }
      current_prog = pgm_dup(pgm);
      strcpy(current_prog->config_file, infile);
      current_prog->lineno = lineno;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 18:
#line 333 "config_gram.y"
    { 
      LNODEID ln;
      AVRMEM * m;
      AVRPART * existing_part;

      if (current_part->id[0] == 0) {
        fprintf(stderr,
                "%s: error at %s:%d: required parameter id not specified\n",
                progname, infile, lineno);
        exit(1);
      }

      /*
       * perform some sanity checking, and compute the number of bits
       * to shift a page for constructing the page address for
       * page-addressed memories.
       */
      for (ln=lfirst(current_part->mem); ln; ln=lnext(ln)) {
        m = ldata(ln);
        if (m->paged) {
          if (m->page_size == 0) {
            fprintf(stderr, 
                    "%s: error at %s:%d: must specify page_size for paged "
                    "memory\n",
                    progname, infile, lineno);
            exit(1);
          }
          if (m->num_pages == 0) {
            fprintf(stderr, 
                    "%s: error at %s:%d: must specify num_pages for paged "
                    "memory\n",
                    progname, infile, lineno);
            exit(1);
          }
          if (m->size != m->page_size * m->num_pages) {
            fprintf(stderr, 
                    "%s: error at %s:%d: page size (%u) * num_pages (%u) = "
                    "%u does not match memory size (%u)\n",
                    progname, infile, lineno,
                    m->page_size, 
                    m->num_pages, 
                    m->page_size * m->num_pages,
                    m->size);
            exit(1);
          }

        }
      }

      existing_part = locate_part(part_list, current_part->id);
      if (existing_part) {
        fprintf(stderr, "%s: warning at %s:%d: part %s overwrites "
                "previous definition %s:%d.\n",
                progname, infile, current_part->lineno, current_part->id,
                existing_part->config_file, existing_part->lineno);
        lrmv_d(part_list, existing_part);
        avr_free_part(existing_part);
      }
      PUSH(part_list, current_part); 
      current_part = NULL; 
    }
    break;

  case 19:
#line 398 "config_gram.y"
    {
      current_part = avr_new_part();
      strcpy(current_part->config_file, infile);
      current_part->lineno = lineno;
    }
    break;

  case 20:
#line 404 "config_gram.y"
    {
      AVRPART * parent_part = locate_part(part_list, (yyvsp[(3) - (3)])->value.string);
      if (parent_part == NULL) {
        fprintf(stderr, 
              "%s: error at %s:%d: can't find parent part",
              progname, infile, lineno);
        exit(1);
      }

      current_part = avr_dup_part(parent_part);
      strcpy(current_part->config_file, infile);
      current_part->lineno = lineno;

      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 21:
#line 422 "config_gram.y"
    { ladd(string_list, (yyvsp[(1) - (1)])); }
    break;

  case 22:
#line 423 "config_gram.y"
    { ladd(string_list, (yyvsp[(3) - (3)])); }
    break;

  case 23:
#line 428 "config_gram.y"
    { ladd(number_list, (yyvsp[(1) - (1)])); }
    break;

  case 24:
#line 429 "config_gram.y"
    { ladd(number_list, (yyvsp[(3) - (3)])); }
    break;

  case 27:
#line 438 "config_gram.y"
    {
    {
      TOKEN * t;
      while (lsize(string_list)) {
        t = lrmv_n(string_list, 1);
        ladd(current_prog->id, dup_string(t->value.string));
        free_token(t);
      }
    }
  }
    break;

  case 32:
#line 456 "config_gram.y"
    {
    strncpy(current_prog->desc, (yyvsp[(3) - (3)])->value.string, PGM_DESCLEN);
    current_prog->desc[PGM_DESCLEN-1] = 0;
    free_token((yyvsp[(3) - (3)]));
  }
    break;

  case 33:
#line 461 "config_gram.y"
    {
    {
      current_prog->baudrate = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
  }
    break;

  case 35:
#line 474 "config_gram.y"
    {
  const struct programmer_type_t * pgm_type = locate_programmer_type((yyvsp[(1) - (1)])->value.string);
    if (pgm_type == NULL) {
        fprintf(stderr,
                "%s: error at %s:%d: programmer type %s not found\n",
                progname, infile, lineno, (yyvsp[(1) - (1)])->value.string);
        exit(1);
    }
    current_prog->initpgm = pgm_type->initpgm;
    free_token((yyvsp[(1) - (1)])); 
}
    break;

  case 36:
#line 486 "config_gram.y"
    {
        fprintf(stderr,
                "%s: error at %s:%d: programmer type must be written as \"id_type\"\n",
                progname, infile, lineno);
        exit(1);
}
    break;

  case 38:
#line 499 "config_gram.y"
    { current_prog->conntype = CONNTYPE_PARALLEL; }
    break;

  case 39:
#line 500 "config_gram.y"
    { current_prog->conntype = CONNTYPE_SERIAL; }
    break;

  case 40:
#line 501 "config_gram.y"
    { current_prog->conntype = CONNTYPE_USB; }
    break;

  case 41:
#line 505 "config_gram.y"
    {
    {
      strncpy(current_prog->usbdev, (yyvsp[(3) - (3)])->value.string, PGM_USBSTRINGLEN);
      current_prog->usbdev[PGM_USBSTRINGLEN-1] = 0;
      free_token((yyvsp[(3) - (3)]));
    }
  }
    break;

  case 42:
#line 512 "config_gram.y"
    {
    {
      current_prog->usbvid = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
  }
    break;

  case 43:
#line 518 "config_gram.y"
    {
    {
      current_prog->usbpid = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
  }
    break;

  case 44:
#line 524 "config_gram.y"
    {
    {
      strncpy(current_prog->usbsn, (yyvsp[(3) - (3)])->value.string, PGM_USBSTRINGLEN);
      current_prog->usbsn[PGM_USBSTRINGLEN-1] = 0;
      free_token((yyvsp[(3) - (3)]));
    }
  }
    break;

  case 45:
#line 531 "config_gram.y"
    {
    {
      strncpy(current_prog->usbvendor, (yyvsp[(3) - (3)])->value.string, PGM_USBSTRINGLEN);
      current_prog->usbvendor[PGM_USBSTRINGLEN-1] = 0;
      free_token((yyvsp[(3) - (3)]));
    }
  }
    break;

  case 46:
#line 538 "config_gram.y"
    {
    {
      strncpy(current_prog->usbproduct, (yyvsp[(3) - (3)])->value.string, PGM_USBSTRINGLEN);
      current_prog->usbproduct[PGM_USBSTRINGLEN-1] = 0;
      free_token((yyvsp[(3) - (3)]));
    }
  }
    break;

  case 47:
#line 548 "config_gram.y"
    { assign_pin(pin_name, (yyvsp[(1) - (1)]), 0);  }
    break;

  case 48:
#line 550 "config_gram.y"
    { assign_pin(pin_name, (yyvsp[(2) - (2)]), 1); }
    break;

  case 50:
#line 556 "config_gram.y"
    { pin_clear_all(&(current_prog->pin[pin_name])); }
    break;

  case 52:
#line 562 "config_gram.y"
    { assign_pin_list(1); }
    break;

  case 56:
#line 575 "config_gram.y"
    { pin_clear_all(&(current_prog->pin[pin_name])); }
    break;

  case 57:
#line 579 "config_gram.y"
    {pin_name = PPI_AVR_VCC;  }
    break;

  case 59:
#line 580 "config_gram.y"
    {pin_name = PPI_AVR_BUFF; }
    break;

  case 61:
#line 581 "config_gram.y"
    {pin_name = PIN_AVR_RESET;}
    break;

  case 62:
#line 581 "config_gram.y"
    { free_token((yyvsp[(1) - (4)])); }
    break;

  case 63:
#line 582 "config_gram.y"
    {pin_name = PIN_AVR_SCK;  }
    break;

  case 64:
#line 582 "config_gram.y"
    { free_token((yyvsp[(1) - (4)])); }
    break;

  case 65:
#line 583 "config_gram.y"
    {pin_name = PIN_AVR_MOSI; }
    break;

  case 67:
#line 584 "config_gram.y"
    {pin_name = PIN_AVR_MISO; }
    break;

  case 69:
#line 585 "config_gram.y"
    {pin_name = PIN_LED_ERR;  }
    break;

  case 71:
#line 586 "config_gram.y"
    {pin_name = PIN_LED_RDY;  }
    break;

  case 73:
#line 587 "config_gram.y"
    {pin_name = PIN_LED_PGM;  }
    break;

  case 75:
#line 588 "config_gram.y"
    {pin_name = PIN_LED_VFY;  }
    break;

  case 97:
#line 627 "config_gram.y"
    {
      strncpy(current_part->id, (yyvsp[(3) - (3)])->value.string, AVR_IDLEN);
      current_part->id[AVR_IDLEN-1] = 0;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 98:
#line 634 "config_gram.y"
    {
      strncpy(current_part->desc, (yyvsp[(3) - (3)])->value.string, AVR_DESCLEN);
      current_part->desc[AVR_DESCLEN-1] = 0;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 99:
#line 640 "config_gram.y"
    {
    {
      fprintf(stderr, 
              "%s: error at %s:%d: devicecode is deprecated, use "
              "stk500_devcode instead\n",
              progname, infile, lineno);
      exit(1);
    }
  }
    break;

  case 100:
#line 650 "config_gram.y"
    {
    {
      current_part->stk500_devcode = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
  }
    break;

  case 101:
#line 657 "config_gram.y"
    {
    {
      current_part->avr910_devcode = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
  }
    break;

  case 102:
#line 664 "config_gram.y"
    {
    {
      current_part->signature[0] = (yyvsp[(3) - (5)])->value.number;
      current_part->signature[1] = (yyvsp[(4) - (5)])->value.number;
      current_part->signature[2] = (yyvsp[(5) - (5)])->value.number;
      free_token((yyvsp[(3) - (5)]));
      free_token((yyvsp[(4) - (5)]));
      free_token((yyvsp[(5) - (5)]));
    }
  }
    break;

  case 103:
#line 675 "config_gram.y"
    {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      current_part->ctl_stack_type = CTL_STACK_PP;
      nbytes = 0;
      ok = 1;

      memset(current_part->controlstack, 0, CTL_STACK_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < CTL_STACK_SIZE)
	  {
	    current_part->controlstack[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  fprintf(stderr,
                  "%s: Warning: line %d of %s: "
		  "too many bytes in control stack\n",
                  progname, lineno, infile);
        }
    }
  }
    break;

  case 104:
#line 709 "config_gram.y"
    {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      current_part->ctl_stack_type = CTL_STACK_HVSP;
      nbytes = 0;
      ok = 1;

      memset(current_part->controlstack, 0, CTL_STACK_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < CTL_STACK_SIZE)
	  {
	    current_part->controlstack[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  fprintf(stderr,
                  "%s: Warning: line %d of %s: "
		  "too many bytes in control stack\n",
                  progname, lineno, infile);
        }
    }
  }
    break;

  case 105:
#line 743 "config_gram.y"
    {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      nbytes = 0;
      ok = 1;

      memset(current_part->flash_instr, 0, FLASH_INSTR_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < FLASH_INSTR_SIZE)
	  {
	    current_part->flash_instr[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  fprintf(stderr,
                  "%s: Warning: line %d of %s: "
		  "too many bytes in flash instructions\n",
                  progname, lineno, infile);
        }
    }
  }
    break;

  case 106:
#line 776 "config_gram.y"
    {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      nbytes = 0;
      ok = 1;

      memset(current_part->eeprom_instr, 0, EEPROM_INSTR_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < EEPROM_INSTR_SIZE)
	  {
	    current_part->eeprom_instr[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  fprintf(stderr,
                  "%s: Warning: line %d of %s: "
		  "too many bytes in EEPROM instructions\n",
                  progname, lineno, infile);
        }
    }
  }
    break;

  case 107:
#line 810 "config_gram.y"
    {
      current_part->chip_erase_delay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 108:
#line 816 "config_gram.y"
    {
      current_part->pagel = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 109:
#line 822 "config_gram.y"
    {
      current_part->bs2 = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 110:
#line 828 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_DEDICATED)
        current_part->reset_disposition = RESET_DEDICATED;
      else if ((yyvsp[(3) - (3)])->primary == K_IO)
        current_part->reset_disposition = RESET_IO;

      free_tokens(2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
    }
    break;

  case 111:
#line 838 "config_gram.y"
    {
      current_part->timeout = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 112:
#line 844 "config_gram.y"
    {
      current_part->stabdelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 113:
#line 850 "config_gram.y"
    {
      current_part->cmdexedelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 114:
#line 856 "config_gram.y"
    {
      current_part->hvspcmdexedelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 115:
#line 862 "config_gram.y"
    {
      current_part->synchloops = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 116:
#line 868 "config_gram.y"
    {
      current_part->bytedelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 117:
#line 874 "config_gram.y"
    {
      current_part->pollvalue = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 118:
#line 880 "config_gram.y"
    {
      current_part->pollindex = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 119:
#line 886 "config_gram.y"
    {
      current_part->predelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 120:
#line 892 "config_gram.y"
    {
      current_part->postdelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 121:
#line 898 "config_gram.y"
    {
      current_part->pollmethod = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 122:
#line 904 "config_gram.y"
    {
      current_part->hventerstabdelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 123:
#line 910 "config_gram.y"
    {
      current_part->progmodedelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 124:
#line 916 "config_gram.y"
    {
      current_part->latchcycles = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 125:
#line 922 "config_gram.y"
    {
      current_part->togglevtg = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 126:
#line 928 "config_gram.y"
    {
      current_part->poweroffdelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 127:
#line 934 "config_gram.y"
    {
      current_part->resetdelayms = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 128:
#line 940 "config_gram.y"
    {
      current_part->resetdelayus = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 129:
#line 946 "config_gram.y"
    {
      current_part->hvleavestabdelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 130:
#line 952 "config_gram.y"
    {
      current_part->resetdelay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 131:
#line 958 "config_gram.y"
    {
      current_part->chiperasepulsewidth = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 132:
#line 964 "config_gram.y"
    {
      current_part->chiperasepolltimeout = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 133:
#line 970 "config_gram.y"
    {
      current_part->chiperasetime = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 134:
#line 976 "config_gram.y"
    {
      current_part->programfusepulsewidth = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 135:
#line 982 "config_gram.y"
    {
      current_part->programfusepolltimeout = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 136:
#line 988 "config_gram.y"
    {
      current_part->programlockpulsewidth = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 137:
#line 994 "config_gram.y"
    {
      current_part->programlockpolltimeout = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 138:
#line 1000 "config_gram.y"
    {
      current_part->synchcycles = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 139:
#line 1006 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_YES)
        current_part->flags |= AVRPART_HAS_JTAG;
      else if ((yyvsp[(3) - (3)])->primary == K_NO)
        current_part->flags &= ~AVRPART_HAS_JTAG;

      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 140:
#line 1016 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_YES)
        current_part->flags |= AVRPART_HAS_DW;
      else if ((yyvsp[(3) - (3)])->primary == K_NO)
        current_part->flags &= ~AVRPART_HAS_DW;

      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 141:
#line 1026 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_YES)
        current_part->flags |= AVRPART_HAS_PDI;
      else if ((yyvsp[(3) - (3)])->primary == K_NO)
        current_part->flags &= ~AVRPART_HAS_PDI;

      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 142:
#line 1036 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_YES)
        current_part->flags |= AVRPART_HAS_TPI;
      else if ((yyvsp[(3) - (3)])->primary == K_NO)
        current_part->flags &= ~AVRPART_HAS_TPI;

      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 143:
#line 1046 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_YES)
        current_part->flags |= AVRPART_IS_AT90S1200;
      else if ((yyvsp[(3) - (3)])->primary == K_NO)
        current_part->flags &= ~AVRPART_IS_AT90S1200;

      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 144:
#line 1056 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_YES)
        current_part->flags |= AVRPART_AVR32;
      else if ((yyvsp[(3) - (3)])->primary == K_NO)
        current_part->flags &= ~AVRPART_AVR32;

      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 145:
#line 1066 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_YES)
        current_part->flags |= AVRPART_ALLOWFULLPAGEBITSTREAM;
      else if ((yyvsp[(3) - (3)])->primary == K_NO)
        current_part->flags &= ~AVRPART_ALLOWFULLPAGEBITSTREAM;

      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 146:
#line 1076 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_YES)
        current_part->flags |= AVRPART_ENABLEPAGEPROGRAMMING;
      else if ((yyvsp[(3) - (3)])->primary == K_NO)
        current_part->flags &= ~AVRPART_ENABLEPAGEPROGRAMMING;

      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 147:
#line 1086 "config_gram.y"
    {
      current_part->idr = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 148:
#line 1092 "config_gram.y"
    {
      current_part->rampz = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 149:
#line 1098 "config_gram.y"
    {
      current_part->spmcr = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 150:
#line 1104 "config_gram.y"
    {
      current_part->eecr = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 151:
#line 1110 "config_gram.y"
    {
      current_part->mcu_base = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 152:
#line 1116 "config_gram.y"
    {
      current_part->nvm_base = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 153:
#line 1122 "config_gram.y"
    {
      current_part->ocdrev = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 154:
#line 1128 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_YES)
        current_part->flags |= AVRPART_SERIALOK;
      else if ((yyvsp[(3) - (3)])->primary == K_NO)
        current_part->flags &= ~AVRPART_SERIALOK;

      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 155:
#line 1138 "config_gram.y"
    {
      if ((yyvsp[(3) - (3)])->primary == K_YES) {
        current_part->flags |= AVRPART_PARALLELOK;
        current_part->flags &= ~AVRPART_PSEUDOPARALLEL;
      }
      else if ((yyvsp[(3) - (3)])->primary == K_NO) {
        current_part->flags &= ~AVRPART_PARALLELOK;
        current_part->flags &= ~AVRPART_PSEUDOPARALLEL;
      }
      else if ((yyvsp[(3) - (3)])->primary == K_PSEUDO) {
        current_part->flags |= AVRPART_PARALLELOK;
        current_part->flags |= AVRPART_PSEUDOPARALLEL;
      }


      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 156:
#line 1157 "config_gram.y"
    {
      switch ((yyvsp[(3) - (3)])->primary) {
        case K_RESET :
          current_part->retry_pulse = PIN_AVR_RESET;
          break;
        case K_SCK :
          current_part->retry_pulse = PIN_AVR_SCK;
          break;
      }

      free_token((yyvsp[(1) - (3)]));
    }
    break;

  case 157:
#line 1180 "config_gram.y"
    { 
      current_mem = avr_new_memtype(); 
      strncpy(current_mem->desc, (yyvsp[(2) - (2)])->value.string, AVR_MEMDESCLEN); 
      current_mem->desc[AVR_MEMDESCLEN-1] = 0;
      free_token((yyvsp[(2) - (2)])); 
    }
    break;

  case 158:
#line 1187 "config_gram.y"
    { 
      AVRMEM * existing_mem;

      existing_mem = avr_locate_mem(current_part, current_mem->desc);
      if (existing_mem != NULL) {
        lrmv_d(current_part->mem, existing_mem);
        avr_free_mem(existing_mem);
      }
      ladd(current_part->mem, current_mem); 
      current_mem = NULL; 
    }
    break;

  case 159:
#line 1199 "config_gram.y"
    {
    { 
      int opnum;
      OPCODE * op;

      opnum = which_opcode((yyvsp[(1) - (3)]));
      op = avr_new_opcode();
      parse_cmdbits(op);
      if (current_part->op[opnum] != NULL) {
        /*fprintf(stderr,
              "%s: warning at %s:%d: operation redefined\n",
              progname, infile, lineno);*/
        avr_free_opcode(current_part->op[opnum]);
      }
      current_part->op[opnum] = op;

      free_token((yyvsp[(1) - (3)]));
    }
  }
    break;

  case 164:
#line 1234 "config_gram.y"
    {
      current_mem->paged = (yyvsp[(3) - (3)])->primary == K_YES ? 1 : 0;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 165:
#line 1240 "config_gram.y"
    {
      current_mem->size = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 166:
#line 1247 "config_gram.y"
    {
      current_mem->page_size = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 167:
#line 1253 "config_gram.y"
    {
      current_mem->num_pages = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 168:
#line 1259 "config_gram.y"
    {
      current_mem->offset = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 169:
#line 1265 "config_gram.y"
    {
      current_mem->min_write_delay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 170:
#line 1271 "config_gram.y"
    {
      current_mem->max_write_delay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 171:
#line 1277 "config_gram.y"
    {
      current_mem->pwroff_after_write = (yyvsp[(3) - (3)])->primary == K_YES ? 1 : 0;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 172:
#line 1283 "config_gram.y"
    {
      current_mem->readback[0] = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 173:
#line 1289 "config_gram.y"
    {
      current_mem->readback[1] = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 174:
#line 1296 "config_gram.y"
    {
      current_mem->mode = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 175:
#line 1302 "config_gram.y"
    {
      current_mem->delay = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 176:
#line 1308 "config_gram.y"
    {
      current_mem->blocksize = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 177:
#line 1314 "config_gram.y"
    {
      current_mem->readsize = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 178:
#line 1320 "config_gram.y"
    {
      current_mem->pollindex = (yyvsp[(3) - (3)])->value.number;
      free_token((yyvsp[(3) - (3)]));
    }
    break;

  case 179:
#line 1326 "config_gram.y"
    {
    { 
      int opnum;
      OPCODE * op;

      opnum = which_opcode((yyvsp[(1) - (3)]));
      op = avr_new_opcode();
      parse_cmdbits(op);
      if (current_mem->op[opnum] != NULL) {
        /*fprintf(stderr,
              "%s: warning at %s:%d: operation redefined\n",
              progname, infile, lineno);*/
        avr_free_opcode(current_mem->op[opnum]);
      }
      current_mem->op[opnum] = op;

      free_token((yyvsp[(1) - (3)]));
    }
  }
    break;


/* Line 1267 of yacc.c.  */
#line 3311 "config_gram.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 1348 "config_gram.y"


#if 0
static char * vtypestr(int type)
{
  switch (type) {
    case V_NUM : return "INTEGER";
    case V_NUM_REAL: return "REAL";
    case V_STR : return "STRING";
    default:
      return "<UNKNOWN>";
  }
}
#endif


static int assign_pin(int pinno, TOKEN * v, int invert)
{
  int value;

  value = v->value.number;
  free_token(v);

  if ((value < PIN_MIN) || (value > PIN_MAX)) {
    fprintf(stderr, 
            "%s: error at line %d of %s: pin must be in the "
            "range %d-%d\n",
            progname, lineno, infile, PIN_MIN, PIN_MAX);
    exit(1);
  }

  pin_set_value(&(current_prog->pin[pinno]), value, invert);

  return 0;
}

static int assign_pin_list(int invert)
{
  TOKEN * t;
  int pin;

  current_prog->pinno[pin_name] = 0;
  while (lsize(number_list)) {
    t = lrmv_n(number_list, 1);
    pin = t->value.number;
    if ((pin < PIN_MIN) || (pin > PIN_MAX)) {
      fprintf(stderr, 
            "%s: error at line %d of %s: pin must be in the "
            "range %d-%d\n",
            progname, lineno, infile, PIN_MIN, PIN_MAX);
      exit(1);
      /* TODO clear list and free tokens if no exit is done */
    }
    pin_set_value(&(current_prog->pin[pin_name]), pin, invert);
    free_token(t);
  }

  return 0;
}

static int which_opcode(TOKEN * opcode)
{
  switch (opcode->primary) {
    case K_READ        : return AVR_OP_READ; break;
    case K_WRITE       : return AVR_OP_WRITE; break;
    case K_READ_LO     : return AVR_OP_READ_LO; break;
    case K_READ_HI     : return AVR_OP_READ_HI; break;
    case K_WRITE_LO    : return AVR_OP_WRITE_LO; break;
    case K_WRITE_HI    : return AVR_OP_WRITE_HI; break;
    case K_LOADPAGE_LO : return AVR_OP_LOADPAGE_LO; break;
    case K_LOADPAGE_HI : return AVR_OP_LOADPAGE_HI; break;
    case K_LOAD_EXT_ADDR : return AVR_OP_LOAD_EXT_ADDR; break;
    case K_WRITEPAGE   : return AVR_OP_WRITEPAGE; break;
    case K_CHIP_ERASE  : return AVR_OP_CHIP_ERASE; break;
    case K_PGM_ENABLE  : return AVR_OP_PGM_ENABLE; break;
    default :
      fprintf(stderr, 
              "%s: error at %s:%d: invalid opcode\n",
              progname, infile, lineno);
      exit(1);
      break;
  }
}


static int parse_cmdbits(OPCODE * op)
{
  TOKEN * t;
  int bitno;
  char ch;
  char * e;
  char * q;
  int len;
  char * s, *brkt = NULL;

  bitno = 32;
  while (lsize(string_list)) {

    t = lrmv_n(string_list, 1);

    s = strtok_r(t->value.string, " ", &brkt);
    while (s != NULL) {

      bitno--;
      if (bitno < 0) {
        fprintf(stderr, 
                "%s: error at %s:%d: too many opcode bits for instruction\n",
                progname, infile, lineno);
        exit(1);
      }

      len = strlen(s);

      if (len == 0) {
        fprintf(stderr, 
                "%s: error at %s:%d: invalid bit specifier \"\"\n",
                progname, infile, lineno);
        exit(1);
      }

      ch = s[0];

      if (len == 1) {
        switch (ch) {
          case '1':
            op->bit[bitno].type  = AVR_CMDBIT_VALUE;
            op->bit[bitno].value = 1;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case '0':
            op->bit[bitno].type  = AVR_CMDBIT_VALUE;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'x':
            op->bit[bitno].type  = AVR_CMDBIT_IGNORE;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'a':
            op->bit[bitno].type  = AVR_CMDBIT_ADDRESS;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = 8*(bitno/8) + bitno % 8;
            break;
          case 'i':
            op->bit[bitno].type  = AVR_CMDBIT_INPUT;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'o':
            op->bit[bitno].type  = AVR_CMDBIT_OUTPUT;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          default :
            fprintf(stderr, 
                    "%s: error at %s:%d: invalid bit specifier '%c'\n",
                    progname, infile, lineno, ch);
            exit(1);
            break;
        }
      }
      else {
        if (ch == 'a') {
          q = &s[1];
          op->bit[bitno].bitno = strtol(q, &e, 0);
          if ((e == q)||(*e != 0)) {
            fprintf(stderr, 
                    "%s: error at %s:%d: can't parse bit number from \"%s\"\n",
                    progname, infile, lineno, q);
            exit(1);
          }
          op->bit[bitno].type = AVR_CMDBIT_ADDRESS;
          op->bit[bitno].value = 0;
        }
        else {
          fprintf(stderr, 
                  "%s: error at %s:%d: invalid bit specifier \"%s\"\n",
                  progname, infile, lineno, s);
          exit(1);
        }
      }

      s = strtok_r(NULL, " ", &brkt);
    }

    free_token(t);

  }  /* while */

  return 0;
}



