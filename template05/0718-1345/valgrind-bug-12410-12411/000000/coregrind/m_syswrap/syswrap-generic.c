typedef unsigned char UChar;
typedef signed char Char;
typedef char HChar;
typedef unsigned short UShort;
typedef short Short;
typedef unsigned int UInt;
typedef int Int;
typedef unsigned long long ULong;
typedef long long Long;
typedef UInt U128[4];
union __anonunion_V128_1 {
   UChar w8[16] ;
   UShort w16[8] ;
   UInt w32[4] ;
   ULong w64[2] ;
};
typedef union __anonunion_V128_1 V128;
typedef float Float;
typedef double Double;
typedef unsigned char Bool;
typedef UInt Addr32;
typedef ULong Addr64;
typedef unsigned long HWord;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef unsigned long UWord;
typedef long Word;
typedef UWord Addr;
typedef UWord AddrH;
typedef UWord SizeT;
typedef Word SSizeT;
typedef Word PtrdiffT;
typedef Word OffT;
typedef Long Off64T;
struct __anonstruct_UWordPair_2 {
   UWord uw1 ;
   UWord uw2 ;
};
typedef struct __anonstruct_UWordPair_2 UWordPair;
typedef UInt ThreadId;
struct __anonstruct_SysRes_3 {
   UWord _val ;
   Bool _isError ;
};
typedef struct __anonstruct_SysRes_3 SysRes;
enum __anonenum_IRType_4 {
    Ity_INVALID = 69632,
    Ity_I1 = 69633,
    Ity_I8 = 69634,
    Ity_I16 = 69635,
    Ity_I32 = 69636,
    Ity_I64 = 69637,
    Ity_I128 = 69638,
    Ity_F32 = 69639,
    Ity_F64 = 69640,
    Ity_F128 = 69641,
    Ity_V128 = 69642
} ;
typedef enum __anonenum_IRType_4 IRType;
enum __anonenum_IREndness_5 {
    Iend_LE = 73728,
    Iend_BE = 73729
} ;
typedef enum __anonenum_IREndness_5 IREndness;
enum __anonenum_IRConstTag_6 {
    Ico_U1 = 77824,
    Ico_U8 = 77825,
    Ico_U16 = 77826,
    Ico_U32 = 77827,
    Ico_U64 = 77828,
    Ico_F32 = 77829,
    Ico_F32i = 77830,
    Ico_F64 = 77831,
    Ico_F64i = 77832,
    Ico_V128 = 77833
} ;
typedef enum __anonenum_IRConstTag_6 IRConstTag;
union __anonunion_Ico_7 {
   Bool U1 ;
   UChar U8 ;
   UShort U16 ;
   UInt U32 ;
   ULong U64 ;
   Float F32 ;
   UInt F32i ;
   Double F64 ;
   ULong F64i ;
   UShort V128 ;
};
struct _IRConst {
   IRConstTag tag ;
   union __anonunion_Ico_7 Ico ;
};
typedef struct _IRConst IRConst;
struct __anonstruct_IRCallee_8 {
   Int regparms ;
   HChar *name ;
   void *addr ;
   UInt mcx_mask ;
};
typedef struct __anonstruct_IRCallee_8 IRCallee;
struct __anonstruct_IRRegArray_9 {
   Int base ;
   IRType elemTy ;
   Int nElems ;
};
typedef struct __anonstruct_IRRegArray_9 IRRegArray;
typedef UInt IRTemp;
enum __anonenum_IROp_10 {
    Iop_INVALID = 81920,
    Iop_Add8 = 81921,
    Iop_Add16 = 81922,
    Iop_Add32 = 81923,
    Iop_Add64 = 81924,
    Iop_Sub8 = 81925,
    Iop_Sub16 = 81926,
    Iop_Sub32 = 81927,
    Iop_Sub64 = 81928,
    Iop_Mul8 = 81929,
    Iop_Mul16 = 81930,
    Iop_Mul32 = 81931,
    Iop_Mul64 = 81932,
    Iop_Or8 = 81933,
    Iop_Or16 = 81934,
    Iop_Or32 = 81935,
    Iop_Or64 = 81936,
    Iop_And8 = 81937,
    Iop_And16 = 81938,
    Iop_And32 = 81939,
    Iop_And64 = 81940,
    Iop_Xor8 = 81941,
    Iop_Xor16 = 81942,
    Iop_Xor32 = 81943,
    Iop_Xor64 = 81944,
    Iop_Shl8 = 81945,
    Iop_Shl16 = 81946,
    Iop_Shl32 = 81947,
    Iop_Shl64 = 81948,
    Iop_Shr8 = 81949,
    Iop_Shr16 = 81950,
    Iop_Shr32 = 81951,
    Iop_Shr64 = 81952,
    Iop_Sar8 = 81953,
    Iop_Sar16 = 81954,
    Iop_Sar32 = 81955,
    Iop_Sar64 = 81956,
    Iop_CmpEQ8 = 81957,
    Iop_CmpEQ16 = 81958,
    Iop_CmpEQ32 = 81959,
    Iop_CmpEQ64 = 81960,
    Iop_CmpNE8 = 81961,
    Iop_CmpNE16 = 81962,
    Iop_CmpNE32 = 81963,
    Iop_CmpNE64 = 81964,
    Iop_Not8 = 81965,
    Iop_Not16 = 81966,
    Iop_Not32 = 81967,
    Iop_Not64 = 81968,
    Iop_CasCmpEQ8 = 81969,
    Iop_CasCmpEQ16 = 81970,
    Iop_CasCmpEQ32 = 81971,
    Iop_CasCmpEQ64 = 81972,
    Iop_CasCmpNE8 = 81973,
    Iop_CasCmpNE16 = 81974,
    Iop_CasCmpNE32 = 81975,
    Iop_CasCmpNE64 = 81976,
    Iop_MullS8 = 81977,
    Iop_MullS16 = 81978,
    Iop_MullS32 = 81979,
    Iop_MullS64 = 81980,
    Iop_MullU8 = 81981,
    Iop_MullU16 = 81982,
    Iop_MullU32 = 81983,
    Iop_MullU64 = 81984,
    Iop_Clz64 = 81985,
    Iop_Clz32 = 81986,
    Iop_Ctz64 = 81987,
    Iop_Ctz32 = 81988,
    Iop_CmpLT32S = 81989,
    Iop_CmpLT64S = 81990,
    Iop_CmpLE32S = 81991,
    Iop_CmpLE64S = 81992,
    Iop_CmpLT32U = 81993,
    Iop_CmpLT64U = 81994,
    Iop_CmpLE32U = 81995,
    Iop_CmpLE64U = 81996,
    Iop_CmpNEZ8 = 81997,
    Iop_CmpNEZ16 = 81998,
    Iop_CmpNEZ32 = 81999,
    Iop_CmpNEZ64 = 82000,
    Iop_CmpwNEZ32 = 82001,
    Iop_CmpwNEZ64 = 82002,
    Iop_Left8 = 82003,
    Iop_Left16 = 82004,
    Iop_Left32 = 82005,
    Iop_Left64 = 82006,
    Iop_Max32U = 82007,
    Iop_CmpORD32U = 82008,
    Iop_CmpORD64U = 82009,
    Iop_CmpORD32S = 82010,
    Iop_CmpORD64S = 82011,
    Iop_DivU32 = 82012,
    Iop_DivS32 = 82013,
    Iop_DivU64 = 82014,
    Iop_DivS64 = 82015,
    Iop_DivU64E = 82016,
    Iop_DivS64E = 82017,
    Iop_DivU32E = 82018,
    Iop_DivS32E = 82019,
    Iop_DivModU64to32 = 82020,
    Iop_DivModS64to32 = 82021,
    Iop_DivModU128to64 = 82022,
    Iop_DivModS128to64 = 82023,
    Iop_DivModS64to64 = 82024,
    Iop_8Uto16 = 82025,
    Iop_8Uto32 = 82026,
    Iop_8Uto64 = 82027,
    Iop_16Uto32 = 82028,
    Iop_16Uto64 = 82029,
    Iop_32Uto64 = 82030,
    Iop_8Sto16 = 82031,
    Iop_8Sto32 = 82032,
    Iop_8Sto64 = 82033,
    Iop_16Sto32 = 82034,
    Iop_16Sto64 = 82035,
    Iop_32Sto64 = 82036,
    Iop_64to8 = 82037,
    Iop_32to8 = 82038,
    Iop_64to16 = 82039,
    Iop_16to8 = 82040,
    Iop_16HIto8 = 82041,
    Iop_8HLto16 = 82042,
    Iop_32to16 = 82043,
    Iop_32HIto16 = 82044,
    Iop_16HLto32 = 82045,
    Iop_64to32 = 82046,
    Iop_64HIto32 = 82047,
    Iop_32HLto64 = 82048,
    Iop_128to64 = 82049,
    Iop_128HIto64 = 82050,
    Iop_64HLto128 = 82051,
    Iop_Not1 = 82052,
    Iop_32to1 = 82053,
    Iop_64to1 = 82054,
    Iop_1Uto8 = 82055,
    Iop_1Uto32 = 82056,
    Iop_1Uto64 = 82057,
    Iop_1Sto8 = 82058,
    Iop_1Sto16 = 82059,
    Iop_1Sto32 = 82060,
    Iop_1Sto64 = 82061,
    Iop_AddF64 = 82062,
    Iop_SubF64 = 82063,
    Iop_MulF64 = 82064,
    Iop_DivF64 = 82065,
    Iop_AddF32 = 82066,
    Iop_SubF32 = 82067,
    Iop_MulF32 = 82068,
    Iop_DivF32 = 82069,
    Iop_AddF64r32 = 82070,
    Iop_SubF64r32 = 82071,
    Iop_MulF64r32 = 82072,
    Iop_DivF64r32 = 82073,
    Iop_NegF64 = 82074,
    Iop_AbsF64 = 82075,
    Iop_NegF32 = 82076,
    Iop_AbsF32 = 82077,
    Iop_SqrtF64 = 82078,
    Iop_SqrtF64r32 = 82079,
    Iop_SqrtF32 = 82080,
    Iop_CmpF64 = 82081,
    Iop_CmpF32 = 82082,
    Iop_CmpF128 = 82083,
    Iop_F64toI16S = 82084,
    Iop_F64toI32S = 82085,
    Iop_F64toI64S = 82086,
    Iop_F64toI64U = 82087,
    Iop_F64toI32U = 82088,
    Iop_I16StoF64 = 82089,
    Iop_I32StoF64 = 82090,
    Iop_I64StoF64 = 82091,
    Iop_I64UtoF64 = 82092,
    Iop_I64UtoF32 = 82093,
    Iop_I32UtoF64 = 82094,
    Iop_F32toI16S = 82095,
    Iop_F32toI32S = 82096,
    Iop_F32toI64S = 82097,
    Iop_I16StoF32 = 82098,
    Iop_I32StoF32 = 82099,
    Iop_I64StoF32 = 82100,
    Iop_F32toF64 = 82101,
    Iop_F64toF32 = 82102,
    Iop_ReinterpF64asI64 = 82103,
    Iop_ReinterpI64asF64 = 82104,
    Iop_ReinterpF32asI32 = 82105,
    Iop_ReinterpI32asF32 = 82106,
    Iop_F64HLtoF128 = 82107,
    Iop_F128HItoF64 = 82108,
    Iop_F128LOtoF64 = 82109,
    Iop_AddF128 = 82110,
    Iop_SubF128 = 82111,
    Iop_MulF128 = 82112,
    Iop_DivF128 = 82113,
    Iop_NegF128 = 82114,
    Iop_AbsF128 = 82115,
    Iop_SqrtF128 = 82116,
    Iop_I32StoF128 = 82117,
    Iop_I64StoF128 = 82118,
    Iop_F32toF128 = 82119,
    Iop_F64toF128 = 82120,
    Iop_F128toI32S = 82121,
    Iop_F128toI64S = 82122,
    Iop_F128toF64 = 82123,
    Iop_F128toF32 = 82124,
    Iop_AtanF64 = 82125,
    Iop_Yl2xF64 = 82126,
    Iop_Yl2xp1F64 = 82127,
    Iop_PRemF64 = 82128,
    Iop_PRemC3210F64 = 82129,
    Iop_PRem1F64 = 82130,
    Iop_PRem1C3210F64 = 82131,
    Iop_ScaleF64 = 82132,
    Iop_SinF64 = 82133,
    Iop_CosF64 = 82134,
    Iop_TanF64 = 82135,
    Iop_2xm1F64 = 82136,
    Iop_RoundF64toInt = 82137,
    Iop_RoundF32toInt = 82138,
    Iop_MAddF32 = 82139,
    Iop_MSubF32 = 82140,
    Iop_MAddF64 = 82141,
    Iop_MSubF64 = 82142,
    Iop_MAddF64r32 = 82143,
    Iop_MSubF64r32 = 82144,
    Iop_Est5FRSqrt = 82145,
    Iop_RoundF64toF64_NEAREST = 82146,
    Iop_RoundF64toF64_NegINF = 82147,
    Iop_RoundF64toF64_PosINF = 82148,
    Iop_RoundF64toF64_ZERO = 82149,
    Iop_TruncF64asF32 = 82150,
    Iop_RoundF64toF32 = 82151,
    Iop_CalcFPRF = 82152,
    Iop_Add16x2 = 82153,
    Iop_Sub16x2 = 82154,
    Iop_QAdd16Sx2 = 82155,
    Iop_QAdd16Ux2 = 82156,
    Iop_QSub16Sx2 = 82157,
    Iop_QSub16Ux2 = 82158,
    Iop_HAdd16Ux2 = 82159,
    Iop_HAdd16Sx2 = 82160,
    Iop_HSub16Ux2 = 82161,
    Iop_HSub16Sx2 = 82162,
    Iop_Add8x4 = 82163,
    Iop_Sub8x4 = 82164,
    Iop_QAdd8Sx4 = 82165,
    Iop_QAdd8Ux4 = 82166,
    Iop_QSub8Sx4 = 82167,
    Iop_QSub8Ux4 = 82168,
    Iop_HAdd8Ux4 = 82169,
    Iop_HAdd8Sx4 = 82170,
    Iop_HSub8Ux4 = 82171,
    Iop_HSub8Sx4 = 82172,
    Iop_Sad8Ux4 = 82173,
    Iop_CmpNEZ16x2 = 82174,
    Iop_CmpNEZ8x4 = 82175,
    Iop_I32UtoFx2 = 82176,
    Iop_I32StoFx2 = 82177,
    Iop_FtoI32Ux2_RZ = 82178,
    Iop_FtoI32Sx2_RZ = 82179,
    Iop_F32ToFixed32Ux2_RZ = 82180,
    Iop_F32ToFixed32Sx2_RZ = 82181,
    Iop_Fixed32UToF32x2_RN = 82182,
    Iop_Fixed32SToF32x2_RN = 82183,
    Iop_Max32Fx2 = 82184,
    Iop_Min32Fx2 = 82185,
    Iop_PwMax32Fx2 = 82186,
    Iop_PwMin32Fx2 = 82187,
    Iop_CmpEQ32Fx2 = 82188,
    Iop_CmpGT32Fx2 = 82189,
    Iop_CmpGE32Fx2 = 82190,
    Iop_Recip32Fx2 = 82191,
    Iop_Recps32Fx2 = 82192,
    Iop_Rsqrte32Fx2 = 82193,
    Iop_Rsqrts32Fx2 = 82194,
    Iop_Neg32Fx2 = 82195,
    Iop_Abs32Fx2 = 82196,
    Iop_CmpNEZ8x8 = 82197,
    Iop_CmpNEZ16x4 = 82198,
    Iop_CmpNEZ32x2 = 82199,
    Iop_Add8x8 = 82200,
    Iop_Add16x4 = 82201,
    Iop_Add32x2 = 82202,
    Iop_QAdd8Ux8 = 82203,
    Iop_QAdd16Ux4 = 82204,
    Iop_QAdd32Ux2 = 82205,
    Iop_QAdd64Ux1 = 82206,
    Iop_QAdd8Sx8 = 82207,
    Iop_QAdd16Sx4 = 82208,
    Iop_QAdd32Sx2 = 82209,
    Iop_QAdd64Sx1 = 82210,
    Iop_PwAdd8x8 = 82211,
    Iop_PwAdd16x4 = 82212,
    Iop_PwAdd32x2 = 82213,
    Iop_PwMax8Sx8 = 82214,
    Iop_PwMax16Sx4 = 82215,
    Iop_PwMax32Sx2 = 82216,
    Iop_PwMax8Ux8 = 82217,
    Iop_PwMax16Ux4 = 82218,
    Iop_PwMax32Ux2 = 82219,
    Iop_PwMin8Sx8 = 82220,
    Iop_PwMin16Sx4 = 82221,
    Iop_PwMin32Sx2 = 82222,
    Iop_PwMin8Ux8 = 82223,
    Iop_PwMin16Ux4 = 82224,
    Iop_PwMin32Ux2 = 82225,
    Iop_PwAddL8Ux8 = 82226,
    Iop_PwAddL16Ux4 = 82227,
    Iop_PwAddL32Ux2 = 82228,
    Iop_PwAddL8Sx8 = 82229,
    Iop_PwAddL16Sx4 = 82230,
    Iop_PwAddL32Sx2 = 82231,
    Iop_Sub8x8 = 82232,
    Iop_Sub16x4 = 82233,
    Iop_Sub32x2 = 82234,
    Iop_QSub8Ux8 = 82235,
    Iop_QSub16Ux4 = 82236,
    Iop_QSub32Ux2 = 82237,
    Iop_QSub64Ux1 = 82238,
    Iop_QSub8Sx8 = 82239,
    Iop_QSub16Sx4 = 82240,
    Iop_QSub32Sx2 = 82241,
    Iop_QSub64Sx1 = 82242,
    Iop_Abs8x8 = 82243,
    Iop_Abs16x4 = 82244,
    Iop_Abs32x2 = 82245,
    Iop_Mul8x8 = 82246,
    Iop_Mul16x4 = 82247,
    Iop_Mul32x2 = 82248,
    Iop_Mul32Fx2 = 82249,
    Iop_MulHi16Ux4 = 82250,
    Iop_MulHi16Sx4 = 82251,
    Iop_PolynomialMul8x8 = 82252,
    Iop_QDMulHi16Sx4 = 82253,
    Iop_QDMulHi32Sx2 = 82254,
    Iop_QRDMulHi16Sx4 = 82255,
    Iop_QRDMulHi32Sx2 = 82256,
    Iop_Avg8Ux8 = 82257,
    Iop_Avg16Ux4 = 82258,
    Iop_Max8Sx8 = 82259,
    Iop_Max16Sx4 = 82260,
    Iop_Max32Sx2 = 82261,
    Iop_Max8Ux8 = 82262,
    Iop_Max16Ux4 = 82263,
    Iop_Max32Ux2 = 82264,
    Iop_Min8Sx8 = 82265,
    Iop_Min16Sx4 = 82266,
    Iop_Min32Sx2 = 82267,
    Iop_Min8Ux8 = 82268,
    Iop_Min16Ux4 = 82269,
    Iop_Min32Ux2 = 82270,
    Iop_CmpEQ8x8 = 82271,
    Iop_CmpEQ16x4 = 82272,
    Iop_CmpEQ32x2 = 82273,
    Iop_CmpGT8Ux8 = 82274,
    Iop_CmpGT16Ux4 = 82275,
    Iop_CmpGT32Ux2 = 82276,
    Iop_CmpGT8Sx8 = 82277,
    Iop_CmpGT16Sx4 = 82278,
    Iop_CmpGT32Sx2 = 82279,
    Iop_Cnt8x8 = 82280,
    Iop_Clz8Sx8 = 82281,
    Iop_Clz16Sx4 = 82282,
    Iop_Clz32Sx2 = 82283,
    Iop_Cls8Sx8 = 82284,
    Iop_Cls16Sx4 = 82285,
    Iop_Cls32Sx2 = 82286,
    Iop_Shl8x8 = 82287,
    Iop_Shl16x4 = 82288,
    Iop_Shl32x2 = 82289,
    Iop_Shr8x8 = 82290,
    Iop_Shr16x4 = 82291,
    Iop_Shr32x2 = 82292,
    Iop_Sar8x8 = 82293,
    Iop_Sar16x4 = 82294,
    Iop_Sar32x2 = 82295,
    Iop_Sal8x8 = 82296,
    Iop_Sal16x4 = 82297,
    Iop_Sal32x2 = 82298,
    Iop_Sal64x1 = 82299,
    Iop_ShlN8x8 = 82300,
    Iop_ShlN16x4 = 82301,
    Iop_ShlN32x2 = 82302,
    Iop_ShrN8x8 = 82303,
    Iop_ShrN16x4 = 82304,
    Iop_ShrN32x2 = 82305,
    Iop_SarN8x8 = 82306,
    Iop_SarN16x4 = 82307,
    Iop_SarN32x2 = 82308,
    Iop_QShl8x8 = 82309,
    Iop_QShl16x4 = 82310,
    Iop_QShl32x2 = 82311,
    Iop_QShl64x1 = 82312,
    Iop_QSal8x8 = 82313,
    Iop_QSal16x4 = 82314,
    Iop_QSal32x2 = 82315,
    Iop_QSal64x1 = 82316,
    Iop_QShlN8Sx8 = 82317,
    Iop_QShlN16Sx4 = 82318,
    Iop_QShlN32Sx2 = 82319,
    Iop_QShlN64Sx1 = 82320,
    Iop_QShlN8x8 = 82321,
    Iop_QShlN16x4 = 82322,
    Iop_QShlN32x2 = 82323,
    Iop_QShlN64x1 = 82324,
    Iop_QSalN8x8 = 82325,
    Iop_QSalN16x4 = 82326,
    Iop_QSalN32x2 = 82327,
    Iop_QSalN64x1 = 82328,
    Iop_QNarrowBin16Sto8Ux8 = 82329,
    Iop_QNarrowBin16Sto8Sx8 = 82330,
    Iop_QNarrowBin32Sto16Sx4 = 82331,
    Iop_NarrowBin16to8x8 = 82332,
    Iop_NarrowBin32to16x4 = 82333,
    Iop_InterleaveHI8x8 = 82334,
    Iop_InterleaveHI16x4 = 82335,
    Iop_InterleaveHI32x2 = 82336,
    Iop_InterleaveLO8x8 = 82337,
    Iop_InterleaveLO16x4 = 82338,
    Iop_InterleaveLO32x2 = 82339,
    Iop_InterleaveOddLanes8x8 = 82340,
    Iop_InterleaveEvenLanes8x8 = 82341,
    Iop_InterleaveOddLanes16x4 = 82342,
    Iop_InterleaveEvenLanes16x4 = 82343,
    Iop_CatOddLanes8x8 = 82344,
    Iop_CatOddLanes16x4 = 82345,
    Iop_CatEvenLanes8x8 = 82346,
    Iop_CatEvenLanes16x4 = 82347,
    Iop_GetElem8x8 = 82348,
    Iop_GetElem16x4 = 82349,
    Iop_GetElem32x2 = 82350,
    Iop_SetElem8x8 = 82351,
    Iop_SetElem16x4 = 82352,
    Iop_SetElem32x2 = 82353,
    Iop_Dup8x8 = 82354,
    Iop_Dup16x4 = 82355,
    Iop_Dup32x2 = 82356,
    Iop_Extract64 = 82357,
    Iop_Reverse16_8x8 = 82358,
    Iop_Reverse32_8x8 = 82359,
    Iop_Reverse32_16x4 = 82360,
    Iop_Reverse64_8x8 = 82361,
    Iop_Reverse64_16x4 = 82362,
    Iop_Reverse64_32x2 = 82363,
    Iop_Perm8x8 = 82364,
    Iop_Recip32x2 = 82365,
    Iop_Rsqrte32x2 = 82366,
    Iop_Add32Fx4 = 82367,
    Iop_Sub32Fx4 = 82368,
    Iop_Mul32Fx4 = 82369,
    Iop_Div32Fx4 = 82370,
    Iop_Max32Fx4 = 82371,
    Iop_Min32Fx4 = 82372,
    Iop_Add32Fx2 = 82373,
    Iop_Sub32Fx2 = 82374,
    Iop_CmpEQ32Fx4 = 82375,
    Iop_CmpLT32Fx4 = 82376,
    Iop_CmpLE32Fx4 = 82377,
    Iop_CmpUN32Fx4 = 82378,
    Iop_CmpGT32Fx4 = 82379,
    Iop_CmpGE32Fx4 = 82380,
    Iop_Abs32Fx4 = 82381,
    Iop_PwMax32Fx4 = 82382,
    Iop_PwMin32Fx4 = 82383,
    Iop_Sqrt32Fx4 = 82384,
    Iop_RSqrt32Fx4 = 82385,
    Iop_Neg32Fx4 = 82386,
    Iop_Recip32Fx4 = 82387,
    Iop_Recps32Fx4 = 82388,
    Iop_Rsqrte32Fx4 = 82389,
    Iop_Rsqrts32Fx4 = 82390,
    Iop_I32UtoFx4 = 82391,
    Iop_I32StoFx4 = 82392,
    Iop_FtoI32Ux4_RZ = 82393,
    Iop_FtoI32Sx4_RZ = 82394,
    Iop_QFtoI32Ux4_RZ = 82395,
    Iop_QFtoI32Sx4_RZ = 82396,
    Iop_RoundF32x4_RM = 82397,
    Iop_RoundF32x4_RP = 82398,
    Iop_RoundF32x4_RN = 82399,
    Iop_RoundF32x4_RZ = 82400,
    Iop_F32ToFixed32Ux4_RZ = 82401,
    Iop_F32ToFixed32Sx4_RZ = 82402,
    Iop_Fixed32UToF32x4_RN = 82403,
    Iop_Fixed32SToF32x4_RN = 82404,
    Iop_F32toF16x4 = 82405,
    Iop_F16toF32x4 = 82406,
    Iop_Add32F0x4 = 82407,
    Iop_Sub32F0x4 = 82408,
    Iop_Mul32F0x4 = 82409,
    Iop_Div32F0x4 = 82410,
    Iop_Max32F0x4 = 82411,
    Iop_Min32F0x4 = 82412,
    Iop_CmpEQ32F0x4 = 82413,
    Iop_CmpLT32F0x4 = 82414,
    Iop_CmpLE32F0x4 = 82415,
    Iop_CmpUN32F0x4 = 82416,
    Iop_Recip32F0x4 = 82417,
    Iop_Sqrt32F0x4 = 82418,
    Iop_RSqrt32F0x4 = 82419,
    Iop_Add64Fx2 = 82420,
    Iop_Sub64Fx2 = 82421,
    Iop_Mul64Fx2 = 82422,
    Iop_Div64Fx2 = 82423,
    Iop_Max64Fx2 = 82424,
    Iop_Min64Fx2 = 82425,
    Iop_CmpEQ64Fx2 = 82426,
    Iop_CmpLT64Fx2 = 82427,
    Iop_CmpLE64Fx2 = 82428,
    Iop_CmpUN64Fx2 = 82429,
    Iop_Recip64Fx2 = 82430,
    Iop_Sqrt64Fx2 = 82431,
    Iop_RSqrt64Fx2 = 82432,
    Iop_Add64F0x2 = 82433,
    Iop_Sub64F0x2 = 82434,
    Iop_Mul64F0x2 = 82435,
    Iop_Div64F0x2 = 82436,
    Iop_Max64F0x2 = 82437,
    Iop_Min64F0x2 = 82438,
    Iop_CmpEQ64F0x2 = 82439,
    Iop_CmpLT64F0x2 = 82440,
    Iop_CmpLE64F0x2 = 82441,
    Iop_CmpUN64F0x2 = 82442,
    Iop_Recip64F0x2 = 82443,
    Iop_Sqrt64F0x2 = 82444,
    Iop_RSqrt64F0x2 = 82445,
    Iop_V128to64 = 82446,
    Iop_V128HIto64 = 82447,
    Iop_64HLtoV128 = 82448,
    Iop_64UtoV128 = 82449,
    Iop_SetV128lo64 = 82450,
    Iop_32UtoV128 = 82451,
    Iop_V128to32 = 82452,
    Iop_SetV128lo32 = 82453,
    Iop_NotV128 = 82454,
    Iop_AndV128 = 82455,
    Iop_OrV128 = 82456,
    Iop_XorV128 = 82457,
    Iop_ShlV128 = 82458,
    Iop_ShrV128 = 82459,
    Iop_CmpNEZ8x16 = 82460,
    Iop_CmpNEZ16x8 = 82461,
    Iop_CmpNEZ32x4 = 82462,
    Iop_CmpNEZ64x2 = 82463,
    Iop_Add8x16 = 82464,
    Iop_Add16x8 = 82465,
    Iop_Add32x4 = 82466,
    Iop_Add64x2 = 82467,
    Iop_QAdd8Ux16 = 82468,
    Iop_QAdd16Ux8 = 82469,
    Iop_QAdd32Ux4 = 82470,
    Iop_QAdd64Ux2 = 82471,
    Iop_QAdd8Sx16 = 82472,
    Iop_QAdd16Sx8 = 82473,
    Iop_QAdd32Sx4 = 82474,
    Iop_QAdd64Sx2 = 82475,
    Iop_Sub8x16 = 82476,
    Iop_Sub16x8 = 82477,
    Iop_Sub32x4 = 82478,
    Iop_Sub64x2 = 82479,
    Iop_QSub8Ux16 = 82480,
    Iop_QSub16Ux8 = 82481,
    Iop_QSub32Ux4 = 82482,
    Iop_QSub64Ux2 = 82483,
    Iop_QSub8Sx16 = 82484,
    Iop_QSub16Sx8 = 82485,
    Iop_QSub32Sx4 = 82486,
    Iop_QSub64Sx2 = 82487,
    Iop_Mul8x16 = 82488,
    Iop_Mul16x8 = 82489,
    Iop_Mul32x4 = 82490,
    Iop_MulHi16Ux8 = 82491,
    Iop_MulHi32Ux4 = 82492,
    Iop_MulHi16Sx8 = 82493,
    Iop_MulHi32Sx4 = 82494,
    Iop_MullEven8Ux16 = 82495,
    Iop_MullEven16Ux8 = 82496,
    Iop_MullEven8Sx16 = 82497,
    Iop_MullEven16Sx8 = 82498,
    Iop_Mull8Ux8 = 82499,
    Iop_Mull8Sx8 = 82500,
    Iop_Mull16Ux4 = 82501,
    Iop_Mull16Sx4 = 82502,
    Iop_Mull32Ux2 = 82503,
    Iop_Mull32Sx2 = 82504,
    Iop_QDMulHi16Sx8 = 82505,
    Iop_QDMulHi32Sx4 = 82506,
    Iop_QRDMulHi16Sx8 = 82507,
    Iop_QRDMulHi32Sx4 = 82508,
    Iop_QDMulLong16Sx4 = 82509,
    Iop_QDMulLong32Sx2 = 82510,
    Iop_PolynomialMul8x16 = 82511,
    Iop_PolynomialMull8x8 = 82512,
    Iop_PwAdd8x16 = 82513,
    Iop_PwAdd16x8 = 82514,
    Iop_PwAdd32x4 = 82515,
    Iop_PwAdd32Fx2 = 82516,
    Iop_PwAddL8Ux16 = 82517,
    Iop_PwAddL16Ux8 = 82518,
    Iop_PwAddL32Ux4 = 82519,
    Iop_PwAddL8Sx16 = 82520,
    Iop_PwAddL16Sx8 = 82521,
    Iop_PwAddL32Sx4 = 82522,
    Iop_Abs8x16 = 82523,
    Iop_Abs16x8 = 82524,
    Iop_Abs32x4 = 82525,
    Iop_Avg8Ux16 = 82526,
    Iop_Avg16Ux8 = 82527,
    Iop_Avg32Ux4 = 82528,
    Iop_Avg8Sx16 = 82529,
    Iop_Avg16Sx8 = 82530,
    Iop_Avg32Sx4 = 82531,
    Iop_Max8Sx16 = 82532,
    Iop_Max16Sx8 = 82533,
    Iop_Max32Sx4 = 82534,
    Iop_Max8Ux16 = 82535,
    Iop_Max16Ux8 = 82536,
    Iop_Max32Ux4 = 82537,
    Iop_Min8Sx16 = 82538,
    Iop_Min16Sx8 = 82539,
    Iop_Min32Sx4 = 82540,
    Iop_Min8Ux16 = 82541,
    Iop_Min16Ux8 = 82542,
    Iop_Min32Ux4 = 82543,
    Iop_CmpEQ8x16 = 82544,
    Iop_CmpEQ16x8 = 82545,
    Iop_CmpEQ32x4 = 82546,
    Iop_CmpEQ64x2 = 82547,
    Iop_CmpGT8Sx16 = 82548,
    Iop_CmpGT16Sx8 = 82549,
    Iop_CmpGT32Sx4 = 82550,
    Iop_CmpGT64Sx2 = 82551,
    Iop_CmpGT8Ux16 = 82552,
    Iop_CmpGT16Ux8 = 82553,
    Iop_CmpGT32Ux4 = 82554,
    Iop_Cnt8x16 = 82555,
    Iop_Clz8Sx16 = 82556,
    Iop_Clz16Sx8 = 82557,
    Iop_Clz32Sx4 = 82558,
    Iop_Cls8Sx16 = 82559,
    Iop_Cls16Sx8 = 82560,
    Iop_Cls32Sx4 = 82561,
    Iop_ShlN8x16 = 82562,
    Iop_ShlN16x8 = 82563,
    Iop_ShlN32x4 = 82564,
    Iop_ShlN64x2 = 82565,
    Iop_ShrN8x16 = 82566,
    Iop_ShrN16x8 = 82567,
    Iop_ShrN32x4 = 82568,
    Iop_ShrN64x2 = 82569,
    Iop_SarN8x16 = 82570,
    Iop_SarN16x8 = 82571,
    Iop_SarN32x4 = 82572,
    Iop_SarN64x2 = 82573,
    Iop_Shl8x16 = 82574,
    Iop_Shl16x8 = 82575,
    Iop_Shl32x4 = 82576,
    Iop_Shl64x2 = 82577,
    Iop_Shr8x16 = 82578,
    Iop_Shr16x8 = 82579,
    Iop_Shr32x4 = 82580,
    Iop_Shr64x2 = 82581,
    Iop_Sar8x16 = 82582,
    Iop_Sar16x8 = 82583,
    Iop_Sar32x4 = 82584,
    Iop_Sar64x2 = 82585,
    Iop_Sal8x16 = 82586,
    Iop_Sal16x8 = 82587,
    Iop_Sal32x4 = 82588,
    Iop_Sal64x2 = 82589,
    Iop_Rol8x16 = 82590,
    Iop_Rol16x8 = 82591,
    Iop_Rol32x4 = 82592,
    Iop_QShl8x16 = 82593,
    Iop_QShl16x8 = 82594,
    Iop_QShl32x4 = 82595,
    Iop_QShl64x2 = 82596,
    Iop_QSal8x16 = 82597,
    Iop_QSal16x8 = 82598,
    Iop_QSal32x4 = 82599,
    Iop_QSal64x2 = 82600,
    Iop_QShlN8Sx16 = 82601,
    Iop_QShlN16Sx8 = 82602,
    Iop_QShlN32Sx4 = 82603,
    Iop_QShlN64Sx2 = 82604,
    Iop_QShlN8x16 = 82605,
    Iop_QShlN16x8 = 82606,
    Iop_QShlN32x4 = 82607,
    Iop_QShlN64x2 = 82608,
    Iop_QSalN8x16 = 82609,
    Iop_QSalN16x8 = 82610,
    Iop_QSalN32x4 = 82611,
    Iop_QSalN64x2 = 82612,
    Iop_QNarrowBin16Sto8Ux16 = 82613,
    Iop_QNarrowBin32Sto16Ux8 = 82614,
    Iop_QNarrowBin16Sto8Sx16 = 82615,
    Iop_QNarrowBin32Sto16Sx8 = 82616,
    Iop_QNarrowBin16Uto8Ux16 = 82617,
    Iop_QNarrowBin32Uto16Ux8 = 82618,
    Iop_NarrowBin16to8x16 = 82619,
    Iop_NarrowBin32to16x8 = 82620,
    Iop_NarrowUn16to8x8 = 82621,
    Iop_NarrowUn32to16x4 = 82622,
    Iop_NarrowUn64to32x2 = 82623,
    Iop_QNarrowUn16Sto8Sx8 = 82624,
    Iop_QNarrowUn32Sto16Sx4 = 82625,
    Iop_QNarrowUn64Sto32Sx2 = 82626,
    Iop_QNarrowUn16Sto8Ux8 = 82627,
    Iop_QNarrowUn32Sto16Ux4 = 82628,
    Iop_QNarrowUn64Sto32Ux2 = 82629,
    Iop_QNarrowUn16Uto8Ux8 = 82630,
    Iop_QNarrowUn32Uto16Ux4 = 82631,
    Iop_QNarrowUn64Uto32Ux2 = 82632,
    Iop_Widen8Uto16x8 = 82633,
    Iop_Widen16Uto32x4 = 82634,
    Iop_Widen32Uto64x2 = 82635,
    Iop_Widen8Sto16x8 = 82636,
    Iop_Widen16Sto32x4 = 82637,
    Iop_Widen32Sto64x2 = 82638,
    Iop_InterleaveHI8x16 = 82639,
    Iop_InterleaveHI16x8 = 82640,
    Iop_InterleaveHI32x4 = 82641,
    Iop_InterleaveHI64x2 = 82642,
    Iop_InterleaveLO8x16 = 82643,
    Iop_InterleaveLO16x8 = 82644,
    Iop_InterleaveLO32x4 = 82645,
    Iop_InterleaveLO64x2 = 82646,
    Iop_InterleaveOddLanes8x16 = 82647,
    Iop_InterleaveEvenLanes8x16 = 82648,
    Iop_InterleaveOddLanes16x8 = 82649,
    Iop_InterleaveEvenLanes16x8 = 82650,
    Iop_InterleaveOddLanes32x4 = 82651,
    Iop_InterleaveEvenLanes32x4 = 82652,
    Iop_CatOddLanes8x16 = 82653,
    Iop_CatOddLanes16x8 = 82654,
    Iop_CatOddLanes32x4 = 82655,
    Iop_CatEvenLanes8x16 = 82656,
    Iop_CatEvenLanes16x8 = 82657,
    Iop_CatEvenLanes32x4 = 82658,
    Iop_GetElem8x16 = 82659,
    Iop_GetElem16x8 = 82660,
    Iop_GetElem32x4 = 82661,
    Iop_GetElem64x2 = 82662,
    Iop_Dup8x16 = 82663,
    Iop_Dup16x8 = 82664,
    Iop_Dup32x4 = 82665,
    Iop_ExtractV128 = 82666,
    Iop_Reverse16_8x16 = 82667,
    Iop_Reverse32_8x16 = 82668,
    Iop_Reverse32_16x8 = 82669,
    Iop_Reverse64_8x16 = 82670,
    Iop_Reverse64_16x8 = 82671,
    Iop_Reverse64_32x4 = 82672,
    Iop_Perm8x16 = 82673,
    Iop_Recip32x4 = 82674,
    Iop_Rsqrte32x4 = 82675
} ;
typedef enum __anonenum_IROp_10 IROp;
enum __anonenum_IRRoundingMode_11 {
    Irrm_NEAREST = 0,
    Irrm_NegINF = 1,
    Irrm_PosINF = 2,
    Irrm_ZERO = 3
} ;
typedef enum __anonenum_IRRoundingMode_11 IRRoundingMode;
enum __anonenum_IRCmpF64Result_12 {
    Ircr_UN = 69,
    Ircr_LT = 1,
    Ircr_GT = 0,
    Ircr_EQ = 64
} ;
typedef enum __anonenum_IRCmpF64Result_12 IRCmpF64Result;
typedef IRCmpF64Result IRCmpF32Result;
typedef IRCmpF64Result IRCmpF128Result;
enum __anonenum_IRExprTag_13 {
    Iex_Binder = 86016,
    Iex_Get = 86017,
    Iex_GetI = 86018,
    Iex_RdTmp = 86019,
    Iex_Qop = 86020,
    Iex_Triop = 86021,
    Iex_Binop = 86022,
    Iex_Unop = 86023,
    Iex_Load = 86024,
    Iex_Const = 86025,
    Iex_Mux0X = 86026,
    Iex_CCall = 86027
} ;
typedef enum __anonenum_IRExprTag_13 IRExprTag;
struct _IRExpr;
typedef struct _IRExpr IRExpr;
struct __anonstruct_Binder_15 {
   Int binder ;
};
struct __anonstruct_Get_16 {
   Int offset ;
   IRType ty ;
};
struct __anonstruct_GetI_17 {
   IRRegArray *descr ;
   IRExpr *ix ;
   Int bias ;
};
struct __anonstruct_RdTmp_18 {
   IRTemp tmp ;
};
struct __anonstruct_Qop_19 {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
   IRExpr *arg3 ;
   IRExpr *arg4 ;
};
struct __anonstruct_Triop_20 {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
   IRExpr *arg3 ;
};
struct __anonstruct_Binop_21 {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
};
struct __anonstruct_Unop_22 {
   IROp op ;
   IRExpr *arg ;
};
struct __anonstruct_Load_23 {
   IREndness end ;
   IRType ty ;
   IRExpr *addr ;
};
struct __anonstruct_Const_24 {
   IRConst *con ;
};
struct __anonstruct_CCall_25 {
   IRCallee *cee ;
   IRType retty ;
   IRExpr **args ;
};
struct __anonstruct_Mux0X_26 {
   IRExpr *cond ;
   IRExpr *expr0 ;
   IRExpr *exprX ;
};
union __anonunion_Iex_14 {
   struct __anonstruct_Binder_15 Binder ;
   struct __anonstruct_Get_16 Get ;
   struct __anonstruct_GetI_17 GetI ;
   struct __anonstruct_RdTmp_18 RdTmp ;
   struct __anonstruct_Qop_19 Qop ;
   struct __anonstruct_Triop_20 Triop ;
   struct __anonstruct_Binop_21 Binop ;
   struct __anonstruct_Unop_22 Unop ;
   struct __anonstruct_Load_23 Load ;
   struct __anonstruct_Const_24 Const ;
   struct __anonstruct_CCall_25 CCall ;
   struct __anonstruct_Mux0X_26 Mux0X ;
};
struct _IRExpr {
   IRExprTag tag ;
   union __anonunion_Iex_14 Iex ;
};
enum __anonenum_IRJumpKind_27 {
    Ijk_Boring = 90112,
    Ijk_Call = 90113,
    Ijk_Ret = 90114,
    Ijk_ClientReq = 90115,
    Ijk_Yield = 90116,
    Ijk_EmWarn = 90117,
    Ijk_EmFail = 90118,
    Ijk_NoDecode = 90119,
    Ijk_MapFail = 90120,
    Ijk_TInval = 90121,
    Ijk_NoRedir = 90122,
    Ijk_SigTRAP = 90123,
    Ijk_SigSEGV = 90124,
    Ijk_SigBUS = 90125,
    Ijk_Sys_syscall = 90126,
    Ijk_Sys_int32 = 90127,
    Ijk_Sys_int128 = 90128,
    Ijk_Sys_int129 = 90129,
    Ijk_Sys_int130 = 90130,
    Ijk_Sys_sysenter = 90131
} ;
typedef enum __anonenum_IRJumpKind_27 IRJumpKind;
enum __anonenum_IREffect_28 {
    Ifx_None = 94208,
    Ifx_Read = 94209,
    Ifx_Write = 94210,
    Ifx_Modify = 94211
} ;
typedef enum __anonenum_IREffect_28 IREffect;
struct __anonstruct_fxState_30 {
   IREffect fx ;
   Int offset ;
   Int size ;
};
struct __anonstruct_IRDirty_29 {
   IRCallee *cee ;
   IRExpr *guard ;
   IRExpr **args ;
   IRTemp tmp ;
   IREffect mFx ;
   IRExpr *mAddr ;
   Int mSize ;
   Bool needsBBP ;
   Int nFxState ;
   struct __anonstruct_fxState_30 fxState[7] ;
};
typedef struct __anonstruct_IRDirty_29 IRDirty;
enum __anonenum_IRMBusEvent_31 {
    Imbe_Fence = 98304,
    Imbe_CancelReservation = 98305
} ;
typedef enum __anonenum_IRMBusEvent_31 IRMBusEvent;
struct __anonstruct_IRCAS_32 {
   IRTemp oldHi ;
   IRTemp oldLo ;
   IREndness end ;
   IRExpr *addr ;
   IRExpr *expdHi ;
   IRExpr *expdLo ;
   IRExpr *dataHi ;
   IRExpr *dataLo ;
};
typedef struct __anonstruct_IRCAS_32 IRCAS;
enum __anonenum_IRStmtTag_33 {
    Ist_NoOp = 102400,
    Ist_IMark = 102401,
    Ist_AbiHint = 102402,
    Ist_Put = 102403,
    Ist_PutI = 102404,
    Ist_WrTmp = 102405,
    Ist_Store = 102406,
    Ist_CAS = 102407,
    Ist_LLSC = 102408,
    Ist_Dirty = 102409,
    Ist_MBE = 102410,
    Ist_Exit = 102411
} ;
typedef enum __anonenum_IRStmtTag_33 IRStmtTag;
struct __anonstruct_NoOp_35 {

};
struct __anonstruct_IMark_36 {
   Addr64 addr ;
   Int len ;
   UChar delta ;
};
struct __anonstruct_AbiHint_37 {
   IRExpr *base ;
   Int len ;
   IRExpr *nia ;
};
struct __anonstruct_Put_38 {
   Int offset ;
   IRExpr *data ;
};
struct __anonstruct_PutI_39 {
   IRRegArray *descr ;
   IRExpr *ix ;
   Int bias ;
   IRExpr *data ;
};
struct __anonstruct_WrTmp_40 {
   IRTemp tmp ;
   IRExpr *data ;
};
struct __anonstruct_Store_41 {
   IREndness end ;
   IRExpr *addr ;
   IRExpr *data ;
};
struct __anonstruct_CAS_42 {
   IRCAS *details ;
};
struct __anonstruct_LLSC_43 {
   IREndness end ;
   IRTemp result ;
   IRExpr *addr ;
   IRExpr *storedata ;
};
struct __anonstruct_Dirty_44 {
   IRDirty *details ;
};
struct __anonstruct_MBE_45 {
   IRMBusEvent event ;
};
struct __anonstruct_Exit_46 {
   IRExpr *guard ;
   IRJumpKind jk ;
   IRConst *dst ;
};
union __anonunion_Ist_34 {
   struct __anonstruct_NoOp_35 NoOp ;
   struct __anonstruct_IMark_36 IMark ;
   struct __anonstruct_AbiHint_37 AbiHint ;
   struct __anonstruct_Put_38 Put ;
   struct __anonstruct_PutI_39 PutI ;
   struct __anonstruct_WrTmp_40 WrTmp ;
   struct __anonstruct_Store_41 Store ;
   struct __anonstruct_CAS_42 CAS ;
   struct __anonstruct_LLSC_43 LLSC ;
   struct __anonstruct_Dirty_44 Dirty ;
   struct __anonstruct_MBE_45 MBE ;
   struct __anonstruct_Exit_46 Exit ;
};
struct _IRStmt {
   IRStmtTag tag ;
   union __anonunion_Ist_34 Ist ;
};
typedef struct _IRStmt IRStmt;
struct __anonstruct_IRTypeEnv_47 {
   IRType *types ;
   Int types_size ;
   Int types_used ;
};
typedef struct __anonstruct_IRTypeEnv_47 IRTypeEnv;
struct __anonstruct_IRSB_48 {
   IRTypeEnv *tyenv ;
   IRStmt **stmts ;
   Int stmts_size ;
   Int stmts_used ;
   IRExpr *next ;
   IRJumpKind jumpkind ;
};
typedef struct __anonstruct_IRSB_48 IRSB;
enum __anonenum_VexArch_49 {
    VexArch_INVALID = 0,
    VexArchX86 = 1,
    VexArchAMD64 = 2,
    VexArchARM = 3,
    VexArchPPC32 = 4,
    VexArchPPC64 = 5,
    VexArchS390X = 6
} ;
typedef enum __anonenum_VexArch_49 VexArch;
struct __anonstruct_VexArchInfo_50 {
   UInt hwcaps ;
   Int ppc_cache_line_szB ;
   UInt ppc_dcbz_szB ;
   UInt ppc_dcbzl_szB ;
};
typedef struct __anonstruct_VexArchInfo_50 VexArchInfo;
struct __anonstruct_VexAbiInfo_51 {
   Int guest_stack_redzone_size ;
   Bool guest_amd64_assume_fs_is_zero ;
   Bool guest_amd64_assume_gs_is_0x60 ;
   Bool guest_ppc_zap_RZ_at_blr ;
   Bool (*guest_ppc_zap_RZ_at_bl)(Addr64  ) ;
   Bool guest_ppc_sc_continues_at_LR ;
   Bool host_ppc_calls_use_fndescrs ;
   Bool host_ppc32_regalign_int64_args ;
};
typedef struct __anonstruct_VexAbiInfo_51 VexAbiInfo;
struct __anonstruct_VexControl_52 {
   Int iropt_verbosity ;
   Int iropt_level ;
   Bool iropt_precise_memory_exns ;
   Int iropt_unroll_thresh ;
   Int guest_max_insns ;
   Int guest_chase_thresh ;
   Bool guest_chase_cond ;
};
typedef struct __anonstruct_VexControl_52 VexControl;
union __anonunion_x_53 {
   char c ;
   short s ;
   int i ;
   long l ;
   long long ll ;
   float f ;
   double d ;
   void *pto ;
   void (*ptf)(void) ;
};
struct align {
   char c ;
   union __anonunion_x_53 x ;
};
struct __anonstruct_alwaysDefd_55 {
   Int offset ;
   Int size ;
};
struct __anonstruct_VexGuestLayout_54 {
   Int total_sizeB ;
   Int offset_SP ;
   Int sizeof_SP ;
   Int offset_FP ;
   Int sizeof_FP ;
   Int offset_IP ;
   Int sizeof_IP ;
   Int n_alwaysDefd ;
   struct __anonstruct_alwaysDefd_55 alwaysDefd[24] ;
};
typedef struct __anonstruct_VexGuestLayout_54 VexGuestLayout;
enum __anonenum_status_57 {
    VexTransOK = 0,
    VexTransAccessFail = 1,
    VexTransOutputFull = 2
} ;
struct __anonstruct_VexTranslateResult_56 {
   enum __anonenum_status_57 status ;
   UInt n_sc_extents ;
};
typedef struct __anonstruct_VexTranslateResult_56 VexTranslateResult;
struct __anonstruct_VexGuestExtents_58 {
   Addr64 base[3] ;
   UShort len[3] ;
   UShort n_used ;
};
typedef struct __anonstruct_VexGuestExtents_58 VexGuestExtents;
struct __anonstruct_VexTranslateArgs_59 {
   VexArch arch_guest ;
   VexArchInfo archinfo_guest ;
   VexArch arch_host ;
   VexArchInfo archinfo_host ;
   VexAbiInfo abiinfo_both ;
   void *callback_opaque ;
   UChar *guest_bytes ;
   Addr64 guest_bytes_addr ;
   Bool (*chase_into_ok)(void * , Addr64  ) ;
   VexGuestExtents *guest_extents ;
   UChar *host_bytes ;
   Int host_bytes_size ;
   Int *host_bytes_used ;
   IRSB *(*instrument1)(void * , IRSB * , VexGuestLayout * , VexGuestExtents * ,
                        IRType gWordTy , IRType hWordTy ) ;
   IRSB *(*instrument2)(void * , IRSB * , VexGuestLayout * , VexGuestExtents * ,
                        IRType gWordTy , IRType hWordTy ) ;
   IRSB *(*finaltidy)(IRSB * ) ;
   UInt (*needs_self_check)(void * , VexGuestExtents * ) ;
   Bool (*preamble_function)(void * , IRSB * ) ;
   Int traceflags ;
   void *dispatch_unassisted ;
   void *dispatch_assisted ;
};
typedef struct __anonstruct_VexTranslateArgs_59 VexTranslateArgs;
enum __anonenum_VexEmWarn_60 {
    EmWarn_NONE = 0,
    EmWarn_X86_x87exns = 1,
    EmWarn_X86_x87precision = 2,
    EmWarn_X86_sseExns = 3,
    EmWarn_X86_fz = 4,
    EmWarn_X86_daz = 5,
    EmWarn_X86_acFlag = 6,
    EmWarn_PPCexns = 7,
    EmWarn_PPC64_redir_overflow = 8,
    EmWarn_PPC64_redir_underflow = 9,
    EmWarn_NUMBER = 10
} ;
typedef enum __anonenum_VexEmWarn_60 VexEmWarn;
struct __anonstruct_VexGuestX86State_61 {
   UInt guest_EAX ;
   UInt guest_ECX ;
   UInt guest_EDX ;
   UInt guest_EBX ;
   UInt guest_ESP ;
   UInt guest_EBP ;
   UInt guest_ESI ;
   UInt guest_EDI ;
   UInt guest_CC_OP ;
   UInt guest_CC_DEP1 ;
   UInt guest_CC_DEP2 ;
   UInt guest_CC_NDEP ;
   UInt guest_DFLAG ;
   UInt guest_IDFLAG ;
   UInt guest_ACFLAG ;
   UInt guest_EIP ;
   ULong guest_FPREG[8] ;
   UChar guest_FPTAG[8] ;
   UInt guest_FPROUND ;
   UInt guest_FC3210 ;
   UInt guest_FTOP ;
   UInt guest_SSEROUND ;
   U128 guest_XMM0 ;
   U128 guest_XMM1 ;
   U128 guest_XMM2 ;
   U128 guest_XMM3 ;
   U128 guest_XMM4 ;
   U128 guest_XMM5 ;
   U128 guest_XMM6 ;
   U128 guest_XMM7 ;
   UShort guest_CS ;
   UShort guest_DS ;
   UShort guest_ES ;
   UShort guest_FS ;
   UShort guest_GS ;
   UShort guest_SS ;
   HWord guest_LDT ;
   HWord guest_GDT ;
   UInt guest_EMWARN ;
   UInt guest_TISTART ;
   UInt guest_TILEN ;
   UInt guest_NRADDR ;
   UInt guest_SC_CLASS ;
   UInt guest_IP_AT_SYSCALL ;
   UInt padding1 ;
   UInt padding2 ;
   UInt padding3 ;
};
typedef struct __anonstruct_VexGuestX86State_61 VexGuestX86State;
struct __anonstruct_Bits_64 {
   UShort LimitLow ;
   UShort BaseLow ;
   UInt BaseMid : 8 ;
   UInt Type : 5 ;
   UInt Dpl : 2 ;
   UInt Pres : 1 ;
   UInt LimitHi : 4 ;
   UInt Sys : 1 ;
   UInt Reserved_0 : 1 ;
   UInt Default_Big : 1 ;
   UInt Granularity : 1 ;
   UInt BaseHi : 8 ;
};
struct __anonstruct_Words_65 {
   UInt word1 ;
   UInt word2 ;
};
union __anonunion_LdtEnt_63 {
   struct __anonstruct_Bits_64 Bits ;
   struct __anonstruct_Words_65 Words ;
};
struct __anonstruct_VexGuestX86SegDescr_62 {
   union __anonunion_LdtEnt_63 LdtEnt ;
};
typedef struct __anonstruct_VexGuestX86SegDescr_62 VexGuestX86SegDescr;
struct __anonstruct_X86_68 {
   UInt r_ebp ;
};
struct __anonstruct_AMD64_69 {
   ULong r_rbp ;
};
struct __anonstruct_PPC32_70 {
   UInt r_lr ;
};
struct __anonstruct_PPC64_71 {
   ULong r_lr ;
};
struct __anonstruct_ARM_72 {
   UInt r14 ;
   UInt r12 ;
   UInt r11 ;
   UInt r7 ;
};
struct __anonstruct_S390X_73 {
   ULong r_fp ;
   ULong r_lr ;
};
union __anonunion_misc_67 {
   struct __anonstruct_X86_68 X86 ;
   struct __anonstruct_AMD64_69 AMD64 ;
   struct __anonstruct_PPC32_70 PPC32 ;
   struct __anonstruct_PPC64_71 PPC64 ;
   struct __anonstruct_ARM_72 ARM ;
   struct __anonstruct_S390X_73 S390X ;
};
struct __anonstruct_UnwindStartRegs_66 {
   ULong r_pc ;
   ULong r_sp ;
   union __anonunion_misc_67 misc ;
};
typedef struct __anonstruct_UnwindStartRegs_66 UnwindStartRegs;
typedef unsigned short __vki_kernel_mode_t;
typedef long __vki_kernel_off_t;
typedef int __vki_kernel_pid_t;
typedef unsigned short __vki_kernel_ipc_pid_t;
typedef unsigned short __vki_kernel_uid_t;
typedef unsigned short __vki_kernel_gid_t;
typedef unsigned int __vki_kernel_size_t;
typedef long __vki_kernel_time_t;
typedef long __vki_kernel_suseconds_t;
typedef long __vki_kernel_clock_t;
typedef int __vki_kernel_timer_t;
typedef int __vki_kernel_clockid_t;
typedef char *__vki_kernel_caddr_t;
typedef unsigned int __vki_kernel_uid32_t;
typedef unsigned int __vki_kernel_gid32_t;
typedef unsigned short __vki_kernel_old_uid_t;
typedef unsigned short __vki_kernel_old_gid_t;
typedef long long __vki_kernel_loff_t;
struct __anonstruct___vki_kernel_fsid_t_74 {
   int val[2] ;
};
typedef struct __anonstruct___vki_kernel_fsid_t_74 __vki_kernel_fsid_t;
struct __anonstruct___vki_kernel_fd_set_75 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___vki_kernel_fd_set_75 __vki_kernel_fd_set;
typedef int __vki_kernel_key_t;
typedef int __vki_kernel_mqd_t;
typedef __vki_kernel_fd_set vki_fd_set;
typedef __vki_kernel_mode_t vki_mode_t;
typedef __vki_kernel_off_t vki_off_t;
typedef __vki_kernel_pid_t vki_pid_t;
typedef __vki_kernel_key_t vki_key_t;
typedef __vki_kernel_suseconds_t vki_suseconds_t;
typedef __vki_kernel_timer_t vki_timer_t;
typedef __vki_kernel_clockid_t vki_clockid_t;
typedef __vki_kernel_mqd_t vki_mqd_t;
typedef __vki_kernel_uid32_t vki_uid_t;
typedef __vki_kernel_gid32_t vki_gid_t;
typedef __vki_kernel_old_uid_t vki_old_uid_t;
typedef __vki_kernel_old_gid_t vki_old_gid_t;
typedef __vki_kernel_loff_t vki_loff_t;
typedef __vki_kernel_size_t vki_size_t;
typedef __vki_kernel_time_t vki_time_t;
typedef __vki_kernel_clock_t vki_clock_t;
typedef __vki_kernel_caddr_t vki_caddr_t;
typedef unsigned long vki_u_long;
typedef unsigned int vki_uint;
typedef unsigned char __vki_u8;
typedef short __vki_s16;
typedef unsigned short __vki_u16;
typedef int __vki_s32;
typedef unsigned int __vki_u32;
typedef long long __vki_s64;
typedef unsigned long long __vki_u64;
typedef unsigned short vki_u16;
typedef unsigned int vki_u32;
typedef void __vki_signalfn_t(int  );
typedef __vki_signalfn_t *__vki_sighandler_t;
typedef void __vki_restorefn_t(void);
typedef __vki_restorefn_t *__vki_sigrestore_t;
typedef unsigned long vki_old_sigset_t;
struct __anonstruct_vki_sigset_t_76 {
   unsigned long sig[2] ;
};
typedef struct __anonstruct_vki_sigset_t_76 vki_sigset_t;
struct vki_old_sigaction {
   __vki_sighandler_t ksa_handler ;
   vki_old_sigset_t sa_mask ;
   unsigned long sa_flags ;
   __vki_sigrestore_t sa_restorer ;
};
struct vki_sigaction_base {
   __vki_sighandler_t ksa_handler ;
   unsigned long sa_flags ;
   __vki_sigrestore_t sa_restorer ;
   vki_sigset_t sa_mask ;
};
typedef struct vki_sigaction_base vki_sigaction_toK_t;
typedef struct vki_sigaction_base vki_sigaction_fromK_t;
struct vki_sigaltstack {
   void *ss_sp ;
   int ss_flags ;
   vki_size_t ss_size ;
};
typedef struct vki_sigaltstack vki_stack_t;
struct _vki_fpreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
};
struct _vki_fpxreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
   unsigned short padding[3] ;
};
struct _vki_xmmreg {
   unsigned long element[4] ;
};
struct _vki_fpstate {
   unsigned long cw ;
   unsigned long sw ;
   unsigned long tag ;
   unsigned long ipoff ;
   unsigned long cssel ;
   unsigned long dataoff ;
   unsigned long datasel ;
   struct _vki_fpreg _st[8] ;
   unsigned short status ;
   unsigned short magic ;
   unsigned long _fxsr_env[6] ;
   unsigned long mxcsr ;
   unsigned long reserved ;
   struct _vki_fpxreg _fxsr_st[8] ;
   struct _vki_xmmreg _xmm[8] ;
   unsigned long padding[56] ;
};
struct vki_sigcontext {
   unsigned short gs ;
   unsigned short __gsh ;
   unsigned short fs ;
   unsigned short __fsh ;
   unsigned short es ;
   unsigned short __esh ;
   unsigned short ds ;
   unsigned short __dsh ;
   unsigned long edi ;
   unsigned long esi ;
   unsigned long ebp ;
   unsigned long esp ;
   unsigned long ebx ;
   unsigned long edx ;
   unsigned long ecx ;
   unsigned long eax ;
   unsigned long trapno ;
   unsigned long err ;
   unsigned long eip ;
   unsigned short cs ;
   unsigned short __csh ;
   unsigned long eflags ;
   unsigned long esp_at_signal ;
   unsigned short ss ;
   unsigned short __ssh ;
   struct _vki_fpstate *fpstate ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
struct vki_f_owner_ex {
   int type ;
   __vki_kernel_pid_t pid ;
};
struct vki_stat {
   unsigned long st_dev ;
   unsigned long st_ino ;
   unsigned short st_mode ;
   unsigned short st_nlink ;
   unsigned short st_uid ;
   unsigned short st_gid ;
   unsigned long st_rdev ;
   unsigned long st_size ;
   unsigned long st_blksize ;
   unsigned long st_blocks ;
   unsigned long st_atime ;
   unsigned long st_atime_nsec ;
   unsigned long st_mtime ;
   unsigned long st_mtime_nsec ;
   unsigned long st_ctime ;
   unsigned long st_ctime_nsec ;
   unsigned long __unused4 ;
   unsigned long __unused5 ;
};
struct vki_stat64 {
   unsigned long long st_dev ;
   unsigned char __pad0[4] ;
   unsigned long __st_ino ;
   unsigned int st_mode ;
   unsigned int st_nlink ;
   unsigned long st_uid ;
   unsigned long st_gid ;
   unsigned long long st_rdev ;
   unsigned char __pad3[4] ;
   long long st_size ;
   unsigned long st_blksize ;
   unsigned long st_blocks ;
   unsigned long __pad4 ;
   unsigned long st_atime ;
   unsigned long st_atime_nsec ;
   unsigned long st_mtime ;
   unsigned int st_mtime_nsec ;
   unsigned long st_ctime ;
   unsigned long st_ctime_nsec ;
   unsigned long long st_ino ;
};
struct vki_statfs {
   __vki_u32 f_type ;
   __vki_u32 f_bsize ;
   __vki_u32 f_blocks ;
   __vki_u32 f_bfree ;
   __vki_u32 f_bavail ;
   __vki_u32 f_files ;
   __vki_u32 f_ffree ;
   __vki_kernel_fsid_t f_fsid ;
   __vki_u32 f_namelen ;
   __vki_u32 f_frsize ;
   __vki_u32 f_spare[5] ;
};
struct vki_winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};
struct vki_termio {
   unsigned short c_iflag ;
   unsigned short c_oflag ;
   unsigned short c_cflag ;
   unsigned short c_lflag ;
   unsigned char c_line ;
   unsigned char c_cc[8] ;
};
typedef unsigned char vki_cc_t;
typedef unsigned int vki_tcflag_t;
struct vki_termios {
   vki_tcflag_t c_iflag ;
   vki_tcflag_t c_oflag ;
   vki_tcflag_t c_cflag ;
   vki_tcflag_t c_lflag ;
   vki_cc_t c_line ;
   vki_cc_t c_cc[19] ;
};
struct vki_pollfd {
   int fd ;
   short events ;
   short revents ;
};
struct vki_user_i387_struct {
   long cwd ;
   long swd ;
   long twd ;
   long fip ;
   long fcs ;
   long foo ;
   long fos ;
   long st_space[20] ;
};
struct vki_user_fxsr_struct {
   unsigned short cwd ;
   unsigned short swd ;
   unsigned short twd ;
   unsigned short fop ;
   long fip ;
   long fcs ;
   long foo ;
   long fos ;
   long mxcsr ;
   long reserved ;
   long st_space[32] ;
   long xmm_space[32] ;
   long padding[56] ;
};
struct vki_user_regs_struct {
   long ebx ;
   long ecx ;
   long edx ;
   long esi ;
   long edi ;
   long ebp ;
   long eax ;
   unsigned short ds ;
   unsigned short __ds ;
   unsigned short es ;
   unsigned short __es ;
   unsigned short fs ;
   unsigned short __fs ;
   unsigned short gs ;
   unsigned short __gs ;
   long orig_eax ;
   long eip ;
   unsigned short cs ;
   unsigned short __cs ;
   long eflags ;
   long esp ;
   unsigned short ss ;
   unsigned short __ss ;
};
typedef unsigned long vki_elf_greg_t;
typedef vki_elf_greg_t vki_elf_gregset_t[sizeof(struct vki_user_regs_struct ) / sizeof(vki_elf_greg_t )];
typedef struct vki_user_i387_struct vki_elf_fpregset_t;
typedef struct vki_user_fxsr_struct vki_elf_fpxregset_t;
struct vki_ucontext {
   unsigned long uc_flags ;
   struct vki_ucontext *uc_link ;
   vki_stack_t uc_stack ;
   struct vki_sigcontext uc_mcontext ;
   vki_sigset_t uc_sigmask ;
};
struct vki_user_desc {
   unsigned int entry_number ;
   unsigned long base_addr ;
   unsigned int limit ;
   unsigned int seg_32bit : 1 ;
   unsigned int contents : 2 ;
   unsigned int read_exec_only : 1 ;
   unsigned int limit_in_pages : 1 ;
   unsigned int seg_not_present : 1 ;
   unsigned int useable : 1 ;
   unsigned int reserved : 25 ;
};
typedef struct vki_user_desc vki_modify_ldt_t;
struct vki_ipc64_perm {
   __vki_kernel_key_t key ;
   __vki_kernel_uid32_t uid ;
   __vki_kernel_gid32_t gid ;
   __vki_kernel_uid32_t cuid ;
   __vki_kernel_gid32_t cgid ;
   __vki_kernel_mode_t mode ;
   unsigned short __pad1 ;
   unsigned short seq ;
   unsigned short __pad2 ;
   unsigned long __unused1 ;
   unsigned long __unused2 ;
};
struct vki_semid64_ds {
   struct vki_ipc64_perm sem_perm ;
   __vki_kernel_time_t sem_otime ;
   unsigned long __unused1 ;
   __vki_kernel_time_t sem_ctime ;
   unsigned long __unused2 ;
   unsigned long sem_nsems ;
   unsigned long __unused3 ;
   unsigned long __unused4 ;
};
struct vki_msqid64_ds {
   struct vki_ipc64_perm msg_perm ;
   __vki_kernel_time_t msg_stime ;
   unsigned long __unused1 ;
   __vki_kernel_time_t msg_rtime ;
   unsigned long __unused2 ;
   __vki_kernel_time_t msg_ctime ;
   unsigned long __unused3 ;
   unsigned long msg_cbytes ;
   unsigned long msg_qnum ;
   unsigned long msg_qbytes ;
   __vki_kernel_pid_t msg_lspid ;
   __vki_kernel_pid_t msg_lrpid ;
   unsigned long __unused4 ;
   unsigned long __unused5 ;
};
struct vki_msgbuf;
struct vki_ipc_kludge {
   struct vki_msgbuf *msgp ;
   long msgtyp ;
};
struct vki_shmid64_ds {
   struct vki_ipc64_perm shm_perm ;
   vki_size_t shm_segsz ;
   __vki_kernel_time_t shm_atime ;
   unsigned long __unused1 ;
   __vki_kernel_time_t shm_dtime ;
   unsigned long __unused2 ;
   __vki_kernel_time_t shm_ctime ;
   unsigned long __unused3 ;
   __vki_kernel_pid_t shm_cpid ;
   __vki_kernel_pid_t shm_lpid ;
   unsigned long shm_nattch ;
   unsigned long __unused4 ;
   unsigned long __unused5 ;
};
struct vki_shminfo64 {
   unsigned long shmmax ;
   unsigned long shmmin ;
   unsigned long shmmni ;
   unsigned long shmseg ;
   unsigned long shmall ;
   unsigned long __unused1 ;
   unsigned long __unused2 ;
   unsigned long __unused3 ;
   unsigned long __unused4 ;
};
struct vki_vm86_regs {
   long ebx ;
   long ecx ;
   long edx ;
   long esi ;
   long edi ;
   long ebp ;
   long eax ;
   long __null_ds ;
   long __null_es ;
   long __null_fs ;
   long __null_gs ;
   long orig_eax ;
   long eip ;
   unsigned short cs ;
   unsigned short __csh ;
   long eflags ;
   long esp ;
   unsigned short ss ;
   unsigned short __ssh ;
   unsigned short es ;
   unsigned short __esh ;
   unsigned short ds ;
   unsigned short __dsh ;
   unsigned short fs ;
   unsigned short __fsh ;
   unsigned short gs ;
   unsigned short __gsh ;
};
struct vki_revectored_struct {
   unsigned long __map[8] ;
};
struct vki_vm86_struct {
   struct vki_vm86_regs regs ;
   unsigned long flags ;
   unsigned long screen_bitmap ;
   unsigned long cpu_type ;
   struct vki_revectored_struct int_revectored ;
   struct vki_revectored_struct int21_revectored ;
};
struct vki_vm86plus_info_struct {
   unsigned long force_return_for_pic : 1 ;
   unsigned long vm86dbg_active : 1 ;
   unsigned long vm86dbg_TFpendig : 1 ;
   unsigned long unused : 28 ;
   unsigned long is_vm86pus : 1 ;
   unsigned char vm86dbg_intxxtab[32] ;
};
struct vki_vm86plus_struct {
   struct vki_vm86_regs regs ;
   unsigned long flags ;
   unsigned long screen_bitmap ;
   unsigned long cpu_type ;
   struct vki_revectored_struct int_revectored ;
   struct vki_revectored_struct int21_revectored ;
   struct vki_vm86plus_info_struct vm86plus ;
};
typedef __vki_s32 vki_int32_t;
typedef __vki_s64 vki_int64_t;
typedef __vki_u8 vki_uint8_t;
typedef __vki_u16 vki_uint16_t;
typedef __vki_u32 vki_uint32_t;
struct vki_sysinfo {
   long uptime ;
   unsigned long loads[3] ;
   unsigned long totalram ;
   unsigned long freeram ;
   unsigned long sharedram ;
   unsigned long bufferram ;
   unsigned long totalswap ;
   unsigned long freeswap ;
   unsigned short procs ;
   unsigned short pad ;
   unsigned long totalhigh ;
   unsigned long freehigh ;
   unsigned int mem_unit ;
   char _f[(20U - 2U * sizeof(long )) - sizeof(int )] ;
};
struct vki_timespec {
   vki_time_t tv_sec ;
   long tv_nsec ;
};
struct vki_timeval {
   vki_time_t tv_sec ;
   vki_suseconds_t tv_usec ;
};
struct vki_timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
struct vki_itimerspec {
   struct vki_timespec it_interval ;
   struct vki_timespec it_value ;
};
struct vki_itimerval {
   struct vki_timeval it_interval ;
   struct vki_timeval it_value ;
};
struct vki_timex {
   unsigned int modes ;
   long offset ;
   long freq ;
   long maxerror ;
   long esterror ;
   int status ;
   long constant ;
   long precision ;
   long tolerance ;
   struct vki_timeval time ;
   long tick ;
   long ppsfreq ;
   long jitter ;
   int shift ;
   long stabil ;
   long jitcnt ;
   long calcnt ;
   long errcnt ;
   long stbcnt ;
   int  : 32 ;
   int  : 32 ;
   int  : 32 ;
   int  : 32 ;
   int  : 32 ;
   int  : 32 ;
   int  : 32 ;
   int  : 32 ;
   int  : 32 ;
   int  : 32 ;
   int  : 32 ;
   int  : 32 ;
};
struct vki_tms {
   vki_clock_t tms_utime ;
   vki_clock_t tms_stime ;
   vki_clock_t tms_cutime ;
   vki_clock_t tms_cstime ;
};
struct vki_utimbuf {
   vki_time_t actime ;
   vki_time_t modtime ;
};
struct vki_sched_param {
   int sched_priority ;
};
union vki_sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union vki_sigval vki_sigval_t;
struct __anonstruct__kill_78 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
};
struct __anonstruct__timer_79 {
   vki_timer_t _tid ;
   int _overrun ;
   char _pad[sizeof(vki_uid_t ) - sizeof(int )] ;
   vki_sigval_t _sigval ;
   int _sys_private ;
};
struct __anonstruct__rt_80 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
   vki_sigval_t _sigval ;
};
struct __anonstruct__sigchld_81 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
   int _status ;
   vki_clock_t _utime ;
   vki_clock_t _stime ;
};
struct __anonstruct__sigfault_82 {
   void *_addr ;
};
struct __anonstruct__sigpoll_83 {
   long _band ;
   int _fd ;
};
union __anonunion__sifields_77 {
   int _pad[(128U - 3U * sizeof(int )) / sizeof(int )] ;
   struct __anonstruct__kill_78 _kill ;
   struct __anonstruct__timer_79 _timer ;
   struct __anonstruct__rt_80 _rt ;
   struct __anonstruct__sigchld_81 _sigchld ;
   struct __anonstruct__sigfault_82 _sigfault ;
   struct __anonstruct__sigpoll_83 _sigpoll ;
};
struct vki_siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_77 _sifields ;
};
typedef struct vki_siginfo vki_siginfo_t;
struct __anonstruct__sigev_thread_85 {
   void (*_function)(vki_sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_84 {
   int _pad[(64U - (sizeof(int ) * 2U + sizeof(vki_sigval_t ))) / sizeof(int )] ;
   int _tid ;
   struct __anonstruct__sigev_thread_85 _sigev_thread ;
};
struct vki_sigevent {
   vki_sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_84 _sigev_un ;
};
typedef struct vki_sigevent vki_sigevent_t;
enum vki_sock_type {
    VKI_SOCK_STREAM = 1
} ;
struct vki_iovec {
   void *iov_base ;
   __vki_kernel_size_t iov_len ;
};
typedef unsigned short vki_sa_family_t;
struct vki_sockaddr {
   vki_sa_family_t sa_family ;
   char sa_data[14] ;
};
struct vki_msghdr {
   void *msg_name ;
   int msg_namelen ;
   struct vki_iovec *msg_iov ;
   __vki_kernel_size_t msg_iovlen ;
   void *msg_control ;
   __vki_kernel_size_t msg_controllen ;
   unsigned int msg_flags ;
};
struct vki_mmsghdr {
   struct vki_msghdr msg_hdr ;
   unsigned int msg_len ;
};
struct vki_cmsghdr {
   __vki_kernel_size_t cmsg_len ;
   int cmsg_level ;
   int cmsg_type ;
};
struct vki_in_addr {
   __vki_u32 s_addr ;
};
struct vki_sockaddr_in {
   vki_sa_family_t sin_family ;
   unsigned short sin_port ;
   struct vki_in_addr sin_addr ;
   unsigned char __pad[((16U - sizeof(short )) - sizeof(unsigned short )) - sizeof(struct vki_in_addr )] ;
};
union __anonunion_vki_in6_u_86 {
   __vki_u8 u6_addr8[16] ;
   __vki_u16 u6_addr16[8] ;
   __vki_u32 u6_addr32[4] ;
};
struct vki_in6_addr {
   union __anonunion_vki_in6_u_86 vki_in6_u ;
};
struct vki_sockaddr_in6 {
   unsigned short sin6_family ;
   __vki_u16 sin6_port ;
   __vki_u32 sin6_flowinfo ;
   struct vki_in6_addr sin6_addr ;
   __vki_u32 sin6_scope_id ;
};
struct vki_sockaddr_un {
   vki_sa_family_t sun_family ;
   char sun_path[108] ;
};
struct vki_ifmap {
   unsigned long mem_start ;
   unsigned long mem_end ;
   unsigned short base_addr ;
   unsigned char irq ;
   unsigned char dma ;
   unsigned char port ;
};
union __anonunion_ifs_ifsu_87 {
   void *raw_hdlc ;
   void *cisco ;
   void *fr ;
   void *fr_pvc ;
   void *fr_pvc_info ;
   void *sync ;
   void *te1 ;
};
struct vki_if_settings {
   unsigned int type ;
   unsigned int size ;
   union __anonunion_ifs_ifsu_87 ifs_ifsu ;
};
union __anonunion_ifr_ifrn_88 {
   char ifrn_name[16] ;
};
union __anonunion_ifr_ifru_89 {
   struct vki_sockaddr ifru_addr ;
   struct vki_sockaddr ifru_dstaddr ;
   struct vki_sockaddr ifru_broadaddr ;
   struct vki_sockaddr ifru_netmask ;
   struct vki_sockaddr ifru_hwaddr ;
   short ifru_flags ;
   int ifru_ivalue ;
   int ifru_mtu ;
   struct vki_ifmap ifru_map ;
   char ifru_slave[16] ;
   char ifru_newname[16] ;
   void *ifru_data ;
   struct vki_if_settings ifru_settings ;
};
struct vki_ifreq {
   union __anonunion_ifr_ifrn_88 ifr_ifrn ;
   union __anonunion_ifr_ifru_89 ifr_ifru ;
};
union __anonunion_ifc_ifcu_90 {
   char *ifcu_buf ;
   struct vki_ifreq *ifcu_req ;
};
struct vki_ifconf {
   int ifc_len ;
   union __anonunion_ifc_ifcu_90 ifc_ifcu ;
};
struct vki_arpreq {
   struct vki_sockaddr arp_pa ;
   struct vki_sockaddr arp_ha ;
   int arp_flags ;
   struct vki_sockaddr arp_netmask ;
   char arp_dev[16] ;
};
struct vki_rtentry {
   unsigned long rt_pad1 ;
   struct vki_sockaddr rt_dst ;
   struct vki_sockaddr rt_gateway ;
   struct vki_sockaddr rt_genmask ;
   unsigned short rt_flags ;
   short rt_pad2 ;
   unsigned long rt_pad3 ;
   void *rt_pad4 ;
   short rt_metric ;
   char *rt_dev ;
   unsigned long rt_mtu ;
   unsigned long rt_window ;
   unsigned short rt_irtt ;
};
typedef __vki_s32 vki_sctp_assoc_t;
enum vki_sctp_optname {
    VKI_SCTP_RTOINFO = 0,
    VKI_SCTP_ASSOCINFO = 1,
    VKI_SCTP_INITMSG = 2,
    VKI_SCTP_NODELAY = 3,
    VKI_SCTP_AUTOCLOSE = 4,
    VKI_SCTP_SET_PEER_PRIMARY_ADDR = 5,
    VKI_SCTP_PRIMARY_ADDR = 6,
    VKI_SCTP_ADAPTION_LAYER = 7,
    VKI_SCTP_DISABLE_FRAGMENTS = 8,
    VKI_SCTP_PEER_ADDR_PARAMS = 9,
    VKI_SCTP_DEFAULT_SEND_PARAM = 10,
    VKI_SCTP_EVENTS = 11,
    VKI_SCTP_I_WANT_MAPPED_V4_ADDR = 12,
    VKI_SCTP_MAXSEG = 13,
    VKI_SCTP_STATUS = 14,
    VKI_SCTP_GET_PEER_ADDR_INFO = 15,
    VKI_SCTP_SOCKOPT_BINDX_ADD = 100,
    VKI_SCTP_SOCKOPT_BINDX_REM = 101,
    VKI_SCTP_SOCKOPT_PEELOFF = 102,
    VKI_SCTP_GET_PEER_ADDRS_NUM = 103,
    VKI_SCTP_GET_PEER_ADDRS = 104,
    VKI_SCTP_GET_LOCAL_ADDRS_NUM = 105,
    VKI_SCTP_GET_LOCAL_ADDRS = 106,
    VKI_SCTP_SOCKOPT_CONNECTX = 107
} ;
struct vki_sctp_getaddrs {
   vki_sctp_assoc_t assoc_id ;
   int addr_num ;
   struct vki_sockaddr *addrs ;
};
struct vki_rusage {
   struct vki_timeval ru_utime ;
   struct vki_timeval ru_stime ;
   long ru_maxrss ;
   long ru_ixrss ;
   long ru_idrss ;
   long ru_isrss ;
   long ru_minflt ;
   long ru_majflt ;
   long ru_nswap ;
   long ru_inblock ;
   long ru_oublock ;
   long ru_msgsnd ;
   long ru_msgrcv ;
   long ru_nsignals ;
   long ru_nvcsw ;
   long ru_nivcsw ;
};
struct vki_rlimit {
   unsigned long rlim_cur ;
   unsigned long rlim_max ;
};
struct vki_rlimit64 {
   __vki_u64 rlim_cur ;
   __vki_u64 rlim_max ;
};
struct vki_elf_siginfo {
   int si_signo ;
   int si_code ;
   int si_errno ;
};
struct vki_elf_prstatus {
   struct vki_elf_siginfo pr_info ;
   short pr_cursig ;
   unsigned long pr_sigpend ;
   unsigned long pr_sighold ;
   vki_pid_t pr_pid ;
   vki_pid_t pr_ppid ;
   vki_pid_t pr_pgrp ;
   vki_pid_t pr_sid ;
   struct vki_timeval pr_utime ;
   struct vki_timeval pr_stime ;
   struct vki_timeval pr_cutime ;
   struct vki_timeval pr_cstime ;
   vki_elf_gregset_t pr_reg ;
   int pr_fpvalid ;
};
struct vki_elf_prpsinfo {
   char pr_state ;
   char pr_sname ;
   char pr_zomb ;
   char pr_nice ;
   unsigned long pr_flag ;
   __vki_kernel_uid_t pr_uid ;
   __vki_kernel_gid_t pr_gid ;
   vki_pid_t pr_pid ;
   vki_pid_t pr_ppid ;
   vki_pid_t pr_pgrp ;
   vki_pid_t pr_sid ;
   char pr_fname[16] ;
   char pr_psargs[80] ;
};
struct vki_epoll_event {
   __vki_u32 events ;
   __vki_u64 data ;
};
struct vki_mq_attr {
   long mq_flags ;
   long mq_maxmsg ;
   long mq_msgsize ;
   long mq_curmsgs ;
   long __reserved[4] ;
};
struct vki_new_utsname {
   char sysname[65] ;
   char nodename[65] ;
   char release[65] ;
   char version[65] ;
   char machine[65] ;
   char domainname[65] ;
};
struct vki_mii_ioctl_data {
   vki_u16 phy_id ;
   vki_u16 reg_num ;
   vki_u16 val_in ;
   vki_u16 val_out ;
};
struct __vki_user_cap_header_struct {
   __vki_u32 version ;
   int pid ;
};
typedef struct __vki_user_cap_header_struct *vki_cap_user_header_t;
struct __vki_user_cap_data_struct {
   __vki_u32 effective ;
   __vki_u32 permitted ;
   __vki_u32 inheritable ;
};
typedef struct __vki_user_cap_data_struct *vki_cap_user_data_t;
struct vki_ipc_perm {
   __vki_kernel_key_t key ;
   __vki_kernel_uid_t uid ;
   __vki_kernel_gid_t gid ;
   __vki_kernel_uid_t cuid ;
   __vki_kernel_gid_t cgid ;
   __vki_kernel_mode_t mode ;
   unsigned short seq ;
};
struct vki_semid_ds {
   struct vki_ipc_perm sem_perm ;
   __vki_kernel_time_t sem_otime ;
   __vki_kernel_time_t sem_ctime ;
   void *sem_base ;
   void *sem_pending ;
   void **sem_pending_last ;
   void *undo ;
   unsigned short sem_nsems ;
};
struct vki_sembuf {
   unsigned short sem_num ;
   short sem_op ;
   short sem_flg ;
};
struct vki_seminfo;
union vki_semun {
   int val ;
   struct vki_semid_ds *buf ;
   unsigned short *array ;
   struct vki_seminfo *__buf ;
   void *__pad ;
};
struct vki_seminfo {
   int semmap ;
   int semmni ;
   int semmns ;
   int semmnu ;
   int semmsl ;
   int semopm ;
   int semume ;
   int semusz ;
   int semvmx ;
   int semaem ;
};
struct vki_robust_list {
   struct vki_robust_list *next ;
};
struct vki_robust_list_head {
   struct vki_robust_list list ;
   long futex_offset ;
   struct vki_robust_list *list_op_pending ;
};
struct vki_dirent {
   long d_ino ;
   __vki_kernel_off_t d_off ;
   unsigned short d_reclen ;
   char d_name[256] ;
};
struct __vki_sysctl_args {
   int *name ;
   int nlen ;
   void *oldval ;
   vki_size_t *oldlenp ;
   void *newval ;
   vki_size_t newlen ;
   unsigned long __unused[4] ;
};
typedef unsigned long vki_aio_context_t;
enum __anonenum_91 {
    VKI_IOCB_CMD_PREAD = 0,
    VKI_IOCB_CMD_PWRITE = 1,
    VKI_IOCB_CMD_FSYNC = 2,
    VKI_IOCB_CMD_FDSYNC = 3,
    VKI_IOCB_CMD_PREADV = 7,
    VKI_IOCB_CMD_PWRITEV = 8
} ;
struct vki_io_event {
   __vki_u64 data ;
   __vki_u64 obj ;
   __vki_s64 result ;
   __vki_s64 result2 ;
};
struct vki_iocb {
   __vki_u64 aio_data ;
   __vki_u32 aio_key ;
   __vki_u32 aio_reserved1 ;
   __vki_u16 aio_lio_opcode ;
   __vki_s16 aio_reqprio ;
   __vki_u32 aio_fildes ;
   __vki_u64 aio_buf ;
   __vki_u64 aio_nbytes ;
   __vki_s64 aio_offset ;
   __vki_u64 aio_reserved2 ;
   __vki_u64 aio_reserved3 ;
};
struct vki_aio_ring {
   unsigned int id ;
   unsigned int nr ;
   unsigned int head ;
   unsigned int tail ;
   unsigned int magic ;
   unsigned int compat_features ;
   unsigned int incompat_features ;
   unsigned int header_length ;
   struct vki_io_event io_events[0] ;
};
struct vki_msg;
struct vki_msqid_ds {
   struct vki_ipc_perm msg_perm ;
   struct vki_msg *msg_first ;
   struct vki_msg *msg_last ;
   __vki_kernel_time_t msg_stime ;
   __vki_kernel_time_t msg_rtime ;
   __vki_kernel_time_t msg_ctime ;
   unsigned long msg_lcbytes ;
   unsigned long msg_lqbytes ;
   unsigned short msg_cbytes ;
   unsigned short msg_qnum ;
   unsigned short msg_qbytes ;
   __vki_kernel_ipc_pid_t msg_lspid ;
   __vki_kernel_ipc_pid_t msg_lrpid ;
};
struct vki_msgbuf {
   long mtype ;
   char mtext[1] ;
};
struct vki_msginfo {
   int msgpool ;
   int msgmap ;
   int msgmax ;
   int msgmnb ;
   int msgmni ;
   int msgssz ;
   int msgtql ;
   unsigned short msgseg ;
};
struct vki_shmid_ds {
   struct vki_ipc_perm shm_perm ;
   int shm_segsz ;
   __vki_kernel_time_t shm_atime ;
   __vki_kernel_time_t shm_dtime ;
   __vki_kernel_time_t shm_ctime ;
   __vki_kernel_ipc_pid_t shm_cpid ;
   __vki_kernel_ipc_pid_t shm_lpid ;
   unsigned short shm_nattch ;
   unsigned short shm_unused ;
   void *shm_unused2 ;
   void *shm_unused3 ;
};
struct vki_shminfo {
   int shmmax ;
   int shmmin ;
   int shmmni ;
   int shmseg ;
   int shmall ;
};
struct vki_shm_info {
   int used_ids ;
   unsigned long shm_tot ;
   unsigned long shm_rss ;
   unsigned long shm_swp ;
   unsigned long swap_attempts ;
   unsigned long swap_successes ;
};
struct vki_rtc_time {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
};
struct __anonstruct_vki_isdn_net_ioctl_phone_92 {
   char name[10] ;
   char phone[32] ;
   int outgoing ;
};
typedef struct __anonstruct_vki_isdn_net_ioctl_phone_92 vki_isdn_net_ioctl_phone;
struct vki_ppdev_frob_struct {
   unsigned char mask ;
   unsigned char val ;
};
struct vki_sg_io_hdr {
   int interface_id ;
   int dxfer_direction ;
   unsigned char cmd_len ;
   unsigned char mx_sb_len ;
   unsigned short iovec_count ;
   unsigned int dxfer_len ;
   void *dxferp ;
   unsigned char *cmdp ;
   void *sbp ;
   unsigned int timeout ;
   unsigned int flags ;
   int pack_id ;
   void *usr_ptr ;
   unsigned char status ;
   unsigned char masked_status ;
   unsigned char msg_status ;
   unsigned char sb_len_wr ;
   unsigned short host_status ;
   unsigned short driver_status ;
   int resid ;
   unsigned int duration ;
   unsigned int info ;
};
typedef struct vki_sg_io_hdr vki_sg_io_hdr_t;
struct vki_sg_scsi_id {
   int host_no ;
   int channel ;
   int scsi_id ;
   int lun ;
   int scsi_type ;
   short h_cmd_per_lun ;
   short d_queue_depth ;
   int unused[2] ;
};
typedef struct vki_sg_scsi_id vki_sg_scsi_id_t;
struct vki_scsi_idlun {
   __vki_u32 dev_id ;
   __vki_u32 host_unique_id ;
};
struct vki_cdrom_msf0 {
   __vki_u8 minute ;
   __vki_u8 second ;
   __vki_u8 frame ;
};
union vki_cdrom_addr {
   struct vki_cdrom_msf0 msf ;
   int lba ;
};
struct vki_cdrom_msf {
   __vki_u8 cdmsf_min0 ;
   __vki_u8 cdmsf_sec0 ;
   __vki_u8 cdmsf_frame0 ;
   __vki_u8 cdmsf_min1 ;
   __vki_u8 cdmsf_sec1 ;
   __vki_u8 cdmsf_frame1 ;
};
struct vki_cdrom_tochdr {
   __vki_u8 cdth_trk0 ;
   __vki_u8 cdth_trk1 ;
};
struct vki_cdrom_volctrl {
   __vki_u8 channel0 ;
   __vki_u8 channel1 ;
   __vki_u8 channel2 ;
   __vki_u8 channel3 ;
};
struct vki_cdrom_subchnl {
   __vki_u8 cdsc_format ;
   __vki_u8 cdsc_audiostatus ;
   __vki_u8 cdsc_adr : 4 ;
   __vki_u8 cdsc_ctrl : 4 ;
   __vki_u8 cdsc_trk ;
   __vki_u8 cdsc_ind ;
   union vki_cdrom_addr cdsc_absaddr ;
   union vki_cdrom_addr cdsc_reladdr ;
};
struct vki_cdrom_tocentry {
   __vki_u8 cdte_track ;
   __vki_u8 cdte_adr : 4 ;
   __vki_u8 cdte_ctrl : 4 ;
   __vki_u8 cdte_format ;
   union vki_cdrom_addr cdte_addr ;
   __vki_u8 cdte_datamode ;
};
struct vki_cdrom_read {
   int cdread_lba ;
   char *cdread_bufaddr ;
   int cdread_buflen ;
};
struct vki_cdrom_read_audio {
   union vki_cdrom_addr addr ;
   __vki_u8 addr_format ;
   int nframes ;
   __vki_u8 *buf ;
};
struct vki_cdrom_multisession {
   union vki_cdrom_addr addr ;
   __vki_u8 xa_flag ;
   __vki_u8 addr_format ;
};
struct vki_cdrom_mcn {
   __vki_u8 medium_catalog_number[14] ;
};
struct vki_cdrom_generic_command {
   unsigned char cmd[12] ;
   unsigned char *buffer ;
   unsigned int buflen ;
   int stat ;
   void *sense ;
   unsigned char data_direction ;
   int quiet ;
   int timeout ;
   void *reserved[1] ;
};
struct vki_audio_buf_info {
   int fragments ;
   int fragstotal ;
   int fragsize ;
   int bytes ;
};
typedef struct vki_audio_buf_info vki_audio_buf_info;
struct vki_hd_geometry {
   unsigned char heads ;
   unsigned char sectors ;
   unsigned short cylinders ;
   unsigned long start ;
};
struct vki_fb_fix_screeninfo {
   char id[16] ;
   unsigned long smem_start ;
   __vki_u32 smem_len ;
   __vki_u32 type ;
   __vki_u32 type_aux ;
   __vki_u32 visual ;
   __vki_u16 xpanstep ;
   __vki_u16 ypanstep ;
   __vki_u16 ywrapstep ;
   __vki_u32 line_length ;
   unsigned long mmio_start ;
   __vki_u32 mmio_len ;
   __vki_u32 accel ;
   __vki_u16 reserved[3] ;
};
struct vki_fb_bitfield {
   __vki_u32 offset ;
   __vki_u32 length ;
   __vki_u32 msb_right ;
};
struct vki_fb_var_screeninfo {
   __vki_u32 xres ;
   __vki_u32 yres ;
   __vki_u32 xres_virtual ;
   __vki_u32 yres_virtual ;
   __vki_u32 xoffset ;
   __vki_u32 yoffset ;
   __vki_u32 bits_per_pixel ;
   __vki_u32 grayscale ;
   struct vki_fb_bitfield red ;
   struct vki_fb_bitfield green ;
   struct vki_fb_bitfield blue ;
   struct vki_fb_bitfield transp ;
   __vki_u32 nonstd ;
   __vki_u32 activate ;
   __vki_u32 height ;
   __vki_u32 width ;
   __vki_u32 accel_flags ;
   __vki_u32 pixclock ;
   __vki_u32 left_margin ;
   __vki_u32 right_margin ;
   __vki_u32 upper_margin ;
   __vki_u32 lower_margin ;
   __vki_u32 hsync_len ;
   __vki_u32 vsync_len ;
   __vki_u32 sync ;
   __vki_u32 vmode ;
   __vki_u32 rotate ;
   __vki_u32 reserved[5] ;
};
struct vki_consolefontdesc {
   unsigned short charcount ;
   unsigned short charheight ;
   char *chardata ;
};
struct vki_unipair {
   unsigned short unicode ;
   unsigned short fontpos ;
};
struct vki_unimapdesc {
   unsigned short entry_ct ;
   struct vki_unipair *entries ;
};
struct vki_unimapinit {
   unsigned short advised_hashsize ;
   unsigned short advised_hashstep ;
   unsigned short advised_hashlevel ;
};
struct vki_kbentry {
   unsigned char kb_table ;
   unsigned char kb_index ;
   unsigned short kb_value ;
};
struct vki_kbsentry {
   unsigned char kb_func ;
   unsigned char kb_string[512] ;
};
struct vki_kbdiacr {
   unsigned char diacr ;
   unsigned char base ;
   unsigned char result ;
};
struct vki_kbdiacrs {
   unsigned int kb_cnt ;
   struct vki_kbdiacr kbdiacr[256] ;
};
struct vki_kbkeycode {
   unsigned int scancode ;
   unsigned int keycode ;
};
struct vki_kbd_repeat {
   int delay ;
   int period ;
};
struct vki_console_font_op {
   unsigned int op ;
   unsigned int flags ;
   unsigned int width ;
   unsigned int height ;
   unsigned int charcount ;
   unsigned char *data ;
};
typedef __vki_kernel_uid32_t vki_qid_t;
struct __anonstruct_94 {
   int  : 0 ;
};
struct __anonstruct_95 {
   int  : 0 ;
};
enum __anonenum_93 {
    VKI_SNDRV_PCM_IOCTL_HW_FREE = 16658,
    VKI_SNDRV_PCM_IOCTL_HWSYNC = 16674,
    VKI_SNDRV_PCM_IOCTL_PREPARE = 16704,
    VKI_SNDRV_PCM_IOCTL_RESET = 16705,
    VKI_SNDRV_PCM_IOCTL_START = 16706,
    VKI_SNDRV_PCM_IOCTL_DROP = 16707,
    VKI_SNDRV_PCM_IOCTL_DRAIN = 16708,
    VKI_SNDRV_PCM_IOCTL_PAUSE = 1074020677,
    VKI_SNDRV_PCM_IOCTL_RESUME = 16711,
    VKI_SNDRV_PCM_IOCTL_XRUN = 16712,
    VKI_SNDRV_PCM_IOCTL_LINK = 1074020704,
    VKI_SNDRV_PCM_IOCTL_UNLINK = 16737
} ;
enum __anonenum_96 {
    VKI_SNDRV_TIMER_IOCTL_START = 21664,
    VKI_SNDRV_TIMER_IOCTL_STOP = 21665,
    VKI_SNDRV_TIMER_IOCTL_CONTINUE = 21666,
    VKI_SNDRV_TIMER_IOCTL_PAUSE = 21667
} ;
struct vki_serial_icounter_struct {
   int cts ;
   int dsr ;
   int rng ;
   int dcd ;
   int rx ;
   int tx ;
   int frame ;
   int overrun ;
   int parity ;
   int brk ;
   int buf_overrun ;
   int reserved[9] ;
};
struct vki_vt_mode {
   char mode ;
   char waitv ;
   short relsig ;
   short acqsig ;
   short frsig ;
};
struct vki_vt_stat {
   unsigned short v_active ;
   unsigned short v_signal ;
   unsigned short v_state ;
};
struct vki_vt_sizes {
   unsigned short v_rows ;
   unsigned short v_cols ;
   unsigned short v_scrollsize ;
};
struct vki_vt_consize {
   unsigned short v_rows ;
   unsigned short v_cols ;
   unsigned short v_vlin ;
   unsigned short v_clin ;
   unsigned short v_vcol ;
   unsigned short v_ccol ;
};
struct vki_usbdevfs_ctrltransfer {
   __vki_u8 bRequestType ;
   __vki_u8 bRequest ;
   __vki_u16 wValue ;
   __vki_u16 wIndex ;
   __vki_u16 wLength ;
   __vki_u32 timeout ;
   void *data ;
};
struct vki_usbdevfs_bulktransfer {
   unsigned int ep ;
   unsigned int len ;
   unsigned int timeout ;
   void *data ;
};
struct vki_usbdevfs_getdriver {
   unsigned int interface ;
   char driver[256] ;
};
struct vki_usbdevfs_connectinfo {
   unsigned int devnum ;
   unsigned char slow ;
};
struct vki_usbdevfs_iso_packet_desc {
   unsigned int length ;
   unsigned int actual_length ;
   unsigned int status ;
};
struct vki_usbdevfs_urb {
   unsigned char type ;
   unsigned char endpoint ;
   int status ;
   unsigned int flags ;
   void *buffer ;
   int buffer_length ;
   int actual_length ;
   int start_frame ;
   int number_of_packets ;
   int error_count ;
   unsigned int signr ;
   void *usercontext ;
   struct vki_usbdevfs_iso_packet_desc iso_frame_desc[0] ;
};
struct vki_usbdevfs_ioctl {
   int ifno ;
   int ioctl_code ;
   void *data ;
};
struct vki_usbdevfs_setuppacket {
   __vki_u8 bRequestType ;
   __vki_u8 bRequest ;
   __vki_u16 wValue ;
   __vki_u16 wIndex ;
   __vki_u16 wLength ;
};
typedef vki_int32_t vki_key_serial_t;
typedef vki_uint32_t vki_key_perm_t;
struct vki_iw_param {
   __vki_s32 value ;
   __vki_u8 fixed ;
   __vki_u8 disabled ;
   __vki_u16 flags ;
};
struct vki_iw_point {
   void *pointer ;
   __vki_u16 length ;
   __vki_u16 flags ;
};
struct vki_iw_freq {
   __vki_s32 m ;
   __vki_s16 e ;
   __vki_u8 i ;
   __vki_u8 flags ;
};
struct vki_iw_quality {
   __vki_u8 qual ;
   __vki_u8 level ;
   __vki_u8 noise ;
   __vki_u8 updated ;
};
union vki_iwreq_data {
   char name[16] ;
   struct vki_iw_point essid ;
   struct vki_iw_param nwid ;
   struct vki_iw_freq freq ;
   struct vki_iw_param sens ;
   struct vki_iw_param bitrate ;
   struct vki_iw_param txpower ;
   struct vki_iw_param rts ;
   struct vki_iw_param frag ;
   __vki_u32 mode ;
   struct vki_iw_param retry ;
   struct vki_iw_point encoding ;
   struct vki_iw_param power ;
   struct vki_iw_quality qual ;
   struct vki_sockaddr ap_addr ;
   struct vki_sockaddr addr ;
   struct vki_iw_param param ;
   struct vki_iw_point data ;
};
union __anonunion_ifr_ifrn_97 {
   char ifrn_name[16] ;
};
struct vki_iwreq {
   union __anonunion_ifr_ifrn_97 ifr_ifrn ;
   union vki_iwreq_data u ;
};
union __anonunion____missing_field_name_98 {
   __vki_u64 sample_period ;
   __vki_u64 sample_freq ;
};
union __anonunion____missing_field_name_99 {
   __vki_u32 wakeup_events ;
   __vki_u32 wakeup_watermark ;
};
union __anonunion____missing_field_name_100 {
   __vki_u64 bp_addr ;
   __vki_u64 config1 ;
};
union __anonunion____missing_field_name_101 {
   __vki_u64 bp_len ;
   __vki_u64 config2 ;
};
struct vki_perf_event_attr {
   __vki_u32 type ;
   __vki_u32 size ;
   __vki_u64 config ;
   union __anonunion____missing_field_name_98 __annonCompField1 ;
   __vki_u64 sample_type ;
   __vki_u64 read_format ;
   __vki_u64 disabled : 1 ;
   __vki_u64 inherit : 1 ;
   __vki_u64 pinned : 1 ;
   __vki_u64 exclusive : 1 ;
   __vki_u64 exclude_user : 1 ;
   __vki_u64 exclude_kernel : 1 ;
   __vki_u64 exclude_hv : 1 ;
   __vki_u64 exclude_idle : 1 ;
   __vki_u64 mmap : 1 ;
   __vki_u64 comm : 1 ;
   __vki_u64 freq : 1 ;
   __vki_u64 inherit_stat : 1 ;
   __vki_u64 enable_on_exec : 1 ;
   __vki_u64 task : 1 ;
   __vki_u64 watermark : 1 ;
   __vki_u64 precise_ip : 2 ;
   __vki_u64 mmap_data : 1 ;
   __vki_u64 sample_id_all : 1 ;
   __vki_u64 __reserved_1 : 45 ;
   union __anonunion____missing_field_name_99 __annonCompField2 ;
   __vki_u32 bp_type ;
   union __anonunion____missing_field_name_100 __annonCompField3 ;
   union __anonunion____missing_field_name_101 __annonCompField4 ;
};
struct vki_getcpu_cache {
   unsigned long blob[128U / sizeof(long )] ;
};
typedef int __jmp_buf[6];
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_102 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_102 __sigset_t;
struct __jmp_buf_tag {
   __jmp_buf __jmpbuf ;
   int __mask_was_saved ;
   __sigset_t __saved_mask ;
};
typedef struct __jmp_buf_tag jmp_buf[1];
typedef struct __jmp_buf_tag sigjmp_buf[1];
enum ThreadStatus {
    VgTs_Empty = 0,
    VgTs_Init = 1,
    VgTs_Runnable = 2,
    VgTs_WaitSys = 3,
    VgTs_Yielding = 4,
    VgTs_Zombie = 5
} ;
typedef enum ThreadStatus ThreadStatus;
enum __anonenum_VgSchedReturnCode_103 {
    VgSrc_None = 0,
    VgSrc_ExitThread = 1,
    VgSrc_ExitProcess = 2,
    VgSrc_FatalSig = 3
} ;
typedef enum __anonenum_VgSchedReturnCode_103 VgSchedReturnCode;
typedef VexGuestX86State VexGuestArchState;
struct SyscallStatus;
struct SyscallStatus;
struct SyscallArgs;
struct SyscallArgs;
struct __anonstruct_ThreadArchState_104 {
   VexGuestArchState vex  __attribute__((__aligned__(16))) ;
   VexGuestArchState vex_shadow1  __attribute__((__aligned__(16))) ;
   VexGuestArchState vex_shadow2  __attribute__((__aligned__(16))) ;
   UChar vex_spill[4096]  __attribute__((__aligned__(16))) ;
};
typedef struct __anonstruct_ThreadArchState_104 ThreadArchState;
struct __anonstruct_ThreadOSstate_105 {
   Int lwpid ;
   Int threadgroup ;
   ThreadId parent ;
   Addr valgrind_stack_base ;
   Addr valgrind_stack_init_SP ;
   Word exitcode ;
   Int fatalsig ;
};
typedef struct __anonstruct_ThreadOSstate_105 ThreadOSstate;
struct SigQueue;
struct __anonstruct_ThreadState_106 {
   ThreadId tid ;
   ThreadStatus status ;
   VgSchedReturnCode exitreason ;
   ThreadArchState arch ;
   vki_sigset_t sig_mask ;
   vki_sigset_t tmp_sig_mask ;
   struct SigQueue *sig_queue ;
   SizeT client_stack_szB ;
   Addr client_stack_highest_word ;
   vki_stack_t altstack ;
   ThreadOSstate os_state ;
   UInt err_disablement_level ;
   Bool sched_jmpbuf_valid ;
   UInt sched_jmpbuf[9] ;
};
typedef struct __anonstruct_ThreadState_106 ThreadState;
enum __anonenum_Vg_FnNameKind_107 {
    Vg_FnNameNormal = 0,
    Vg_FnNameMain = 1,
    Vg_FnNameBelowMain = 2
} ;
typedef enum __anonenum_Vg_FnNameKind_107 Vg_FnNameKind;
struct __anonstruct_StackBlock_108 {
   PtrdiffT base ;
   SizeT szB ;
   Bool spRel ;
   Bool isVec ;
   HChar name[16] ;
};
typedef struct __anonstruct_StackBlock_108 StackBlock;
struct __anonstruct_GlobalBlock_109 {
   Addr addr ;
   SizeT szB ;
   Bool isVec ;
   HChar name[16] ;
   HChar soname[16] ;
};
typedef struct __anonstruct_GlobalBlock_109 GlobalBlock;
struct _DebugInfo;
typedef struct _DebugInfo DebugInfo;
enum __anonenum_VgSectKind_110 {
    Vg_SectUnknown = 0,
    Vg_SectText = 1,
    Vg_SectData = 2,
    Vg_SectBSS = 3,
    Vg_SectGOT = 4,
    Vg_SectPLT = 5,
    Vg_SectGOTPLT = 6,
    Vg_SectOPD = 7
} ;
typedef enum __anonenum_VgSectKind_110 VgSectKind;
struct __anonstruct_D3UnwindRegs_111 {
   Addr xip ;
   Addr xsp ;
   Addr xbp ;
};
typedef struct __anonstruct_D3UnwindRegs_111 D3UnwindRegs;
enum __anonenum_SegKind_112 {
    SkFree = 0,
    SkAnonC = 1,
    SkAnonV = 2,
    SkFileC = 3,
    SkFileV = 4,
    SkShmC = 5,
    SkResvn = 6
} ;
typedef enum __anonenum_SegKind_112 SegKind;
enum __anonenum_ShrinkMode_113 {
    SmLower = 0,
    SmFixed = 1,
    SmUpper = 2
} ;
typedef enum __anonenum_ShrinkMode_113 ShrinkMode;
struct __anonstruct_NSegment_114 {
   SegKind kind ;
   Addr start ;
   Addr end ;
   ShrinkMode smode ;
   ULong dev ;
   ULong ino ;
   Off64T offset ;
   UInt mode ;
   Int fnIdx ;
   Bool hasR ;
   Bool hasW ;
   Bool hasX ;
   Bool hasT ;
   Bool isCH ;
   Bool mark ;
};
typedef struct __anonstruct_NSegment_114 NSegment;
enum __anonenum_rkind_116 {
    MFixed = 0,
    MHint = 1,
    MAny = 2
} ;
struct __anonstruct_MapRequest_115 {
   enum __anonenum_rkind_116 rkind ;
   Addr start ;
   Addr len ;
};
typedef struct __anonstruct_MapRequest_115 MapRequest;
struct __anonstruct_VgStack_117 {
   HChar bytes[1064960] ;
};
typedef struct __anonstruct_VgStack_117 VgStack;
struct __anonstruct_FastCacheEntry_118 {
   Addr guest ;
   Addr host ;
};
typedef struct __anonstruct_FastCacheEntry_118 FastCacheEntry;
struct _BBProfEntry {
   Addr64 addr ;
   ULong score ;
};
typedef struct _BBProfEntry BBProfEntry;
struct _XArray;
typedef struct _XArray XArray;
struct _ExeContext;
typedef struct _ExeContext ExeContext;
enum __anonenum_VgRes_119 {
    Vg_LowRes = 0,
    Vg_MedRes = 1,
    Vg_HighRes = 2
} ;
typedef enum __anonenum_VgRes_119 VgRes;
typedef Int ErrorKind;
struct _Error;
typedef struct _Error Error;
typedef Int SuppKind;
struct _Supp;
typedef struct _Supp Supp;
enum __anonenum_CoreErrorKind_120 {
    ThreadErr = -1
} ;
typedef enum __anonenum_CoreErrorKind_120 CoreErrorKind;
enum __anonenum_PointKind_121 {
    software_breakpoint = 0,
    hardware_breakpoint = 1,
    write_watchpoint = 2,
    read_watchpoint = 3,
    access_watchpoint = 4
} ;
typedef enum __anonenum_PointKind_121 PointKind;
enum __anonenum_kwd_report_error_122 {
    kwd_report_none = 0,
    kwd_report_all = 1,
    kwd_report_duplicated_matches = 2
} ;
typedef enum __anonenum_kwd_report_error_122 kwd_report_error;
struct vg_stat {
   ULong dev ;
   ULong ino ;
   ULong nlink ;
   UInt mode ;
   UInt uid ;
   UInt gid ;
   ULong rdev ;
   Long size ;
   ULong blksize ;
   ULong blocks ;
   ULong atime ;
   ULong atime_nsec ;
   ULong mtime ;
   ULong mtime_nsec ;
   ULong ctime ;
   ULong ctime_nsec ;
};
enum __anonenum_VgMsgKind_123 {
    Vg_FailMsg = 0,
    Vg_UserMsg = 1,
    Vg_DebugMsg = 2,
    Vg_ClientMsg = 3
} ;
typedef enum __anonenum_VgMsgKind_123 VgMsgKind;
struct __anonstruct_OutputSink_124 {
   Int fd ;
   Bool is_socket ;
};
typedef struct __anonstruct_OutputSink_124 OutputSink;
typedef void (*vg_atfork_t)(ThreadId  );
typedef Int ArenaId;
struct vg_mallinfo {
   int arena ;
   int ordblks ;
   int smblks ;
   int hblks ;
   int hblkhd ;
   int usmblks ;
   int fsmblks ;
   int uordblks ;
   int fordblks ;
   int keepcost ;
};
enum __anonenum_VgVgdb_125 {
    Vg_VgdbNo = 0,
    Vg_VgdbYes = 1,
    Vg_VgdbFull = 2
} ;
typedef enum __anonenum_VgVgdb_125 VgVgdb;
enum FairSchedType {
    disable_fair_sched = 0,
    enable_fair_sched = 1,
    try_fair_sched = 2
} ;
enum __anonenum_VgSmc_126 {
    Vg_SmcNone = 0,
    Vg_SmcStack = 1,
    Vg_SmcAll = 2,
    Vg_SmcAllNonFile = 3
} ;
typedef enum __anonenum_VgSmc_126 VgSmc;
typedef Addr *StackTrace;
struct __anonstruct_VgCallbackClosure_127 {
   Addr64 nraddr ;
   Addr64 readdr ;
   ThreadId tid ;
};
typedef struct __anonstruct_VgCallbackClosure_127 VgCallbackClosure;
enum __anonenum_CorePart_128 {
    Vg_CoreStartup = 1,
    Vg_CoreSignal = 2,
    Vg_CoreSysCall = 3,
    Vg_CoreSysCallArgInMem = 4,
    Vg_CoreTranslate = 5,
    Vg_CoreClientReq = 6
} ;
typedef enum __anonenum_CorePart_128 CorePart;
struct __anonstruct_VgDetails_129 {
   Char *name ;
   Char *version ;
   Char *description ;
   Char *copyright_author ;
   Char *bug_reports_to ;
   UInt avg_translation_sizeB ;
};
typedef struct __anonstruct_VgDetails_129 VgDetails;
struct __anonstruct_VgNeeds_130 {
   Bool libc_freeres ;
   Bool core_errors ;
   Bool tool_errors ;
   Bool superblock_discards ;
   Bool command_line_options ;
   Bool client_requests ;
   Bool syscall_wrapper ;
   Bool sanity_checks ;
   Bool var_info ;
   Bool malloc_replacement ;
   Bool xml_output ;
   Bool final_IR_tidy_pass ;
};
typedef struct __anonstruct_VgNeeds_130 VgNeeds;
struct __anonstruct_VgToolInterface_131 {
   void (*tool_pre_clo_init)(void) ;
   void (*tool_post_clo_init)(void) ;
   IRSB *(*tool_instrument)(VgCallbackClosure * , IRSB * , VexGuestLayout * ,
                            VexGuestExtents * , IRType  , IRType  ) ;
   void (*tool_fini)(Int  ) ;
   Bool (*tool_eq_Error)(VgRes  , Error * , Error * ) ;
   void (*tool_before_pp_Error)(Error * ) ;
   void (*tool_pp_Error)(Error * ) ;
   Bool tool_show_ThreadIDs_for_errors ;
   UInt (*tool_update_extra)(Error * ) ;
   Bool (*tool_recognised_suppression)(Char * , Supp * ) ;
   Bool (*tool_read_extra_suppression_info)(Int  , Char ** , SizeT * , Supp * ) ;
   Bool (*tool_error_matches_suppression)(Error * , Supp * ) ;
   Char *(*tool_get_error_name)(Error * ) ;
   Bool (*tool_get_extra_suppression_info)(Error * , Char * , Int  ) ;
   void (*tool_discard_superblock_info)(Addr64  , VexGuestExtents  ) ;
   Bool (*tool_process_cmd_line_option)(Char * ) ;
   void (*tool_print_usage)(void) ;
   void (*tool_print_debug_usage)(void) ;
   Bool (*tool_handle_client_request)(ThreadId  , UWord * , UWord * ) ;
   void (*tool_pre_syscall)(ThreadId  , UInt  , UWord * , UInt  ) ;
   void (*tool_post_syscall)(ThreadId  , UInt  , UWord * , UInt  , SysRes  ) ;
   Bool (*tool_cheap_sanity_check)(void) ;
   Bool (*tool_expensive_sanity_check)(void) ;
   void *(*tool_malloc)(ThreadId  , SizeT  ) ;
   void *(*tool___builtin_new)(ThreadId  , SizeT  ) ;
   void *(*tool___builtin_vec_new)(ThreadId  , SizeT  ) ;
   void *(*tool_memalign)(ThreadId  , SizeT  , SizeT  ) ;
   void *(*tool_calloc)(ThreadId  , SizeT  , SizeT  ) ;
   void (*tool_free)(ThreadId  , void * ) ;
   void (*tool___builtin_delete)(ThreadId  , void * ) ;
   void (*tool___builtin_vec_delete)(ThreadId  , void * ) ;
   void *(*tool_realloc)(ThreadId  , void * , SizeT  ) ;
   SizeT (*tool_malloc_usable_size)(ThreadId  , void * ) ;
   SizeT tool_client_redzone_szB ;
   IRSB *(*tool_final_IR_tidy_pass)(IRSB * ) ;
   void (*track_new_mem_startup)(Addr  , SizeT  , Bool  , Bool  , Bool  ,
                                 ULong  ) ;
   void (*track_new_mem_stack_signal)(Addr  , SizeT  , ThreadId  ) ;
   void (*track_new_mem_brk)(Addr  , SizeT  , ThreadId  ) ;
   void (*track_new_mem_mmap)(Addr  , SizeT  , Bool  , Bool  , Bool  , ULong  ) ;
   void (*track_copy_mem_remap)(Addr src , Addr dst , SizeT  ) ;
   void (*track_change_mem_mprotect)(Addr  , SizeT  , Bool  , Bool  , Bool  ) ;
   void (*track_die_mem_stack_signal)(Addr  , SizeT  ) ;
   void (*track_die_mem_brk)(Addr  , SizeT  ) ;
   void (*track_die_mem_munmap)(Addr  , SizeT  ) ;
   void ( __attribute__((__regparm__(2))) (*track_new_mem_stack_4_w_ECU))(Addr  ,
                                                                          UInt  ) ;
   void ( __attribute__((__regparm__(2))) (*track_new_mem_stack_8_w_ECU))(Addr  ,
                                                                          UInt  ) ;
   void ( __attribute__((__regparm__(2))) (*track_new_mem_stack_12_w_ECU))(Addr  ,
                                                                           UInt  ) ;
   void ( __attribute__((__regparm__(2))) (*track_new_mem_stack_16_w_ECU))(Addr  ,
                                                                           UInt  ) ;
   void ( __attribute__((__regparm__(2))) (*track_new_mem_stack_32_w_ECU))(Addr  ,
                                                                           UInt  ) ;
   void ( __attribute__((__regparm__(2))) (*track_new_mem_stack_112_w_ECU))(Addr  ,
                                                                            UInt  ) ;
   void ( __attribute__((__regparm__(2))) (*track_new_mem_stack_128_w_ECU))(Addr  ,
                                                                            UInt  ) ;
   void ( __attribute__((__regparm__(2))) (*track_new_mem_stack_144_w_ECU))(Addr  ,
                                                                            UInt  ) ;
   void ( __attribute__((__regparm__(2))) (*track_new_mem_stack_160_w_ECU))(Addr  ,
                                                                            UInt  ) ;
   void (*track_new_mem_stack_w_ECU)(Addr  , SizeT  , UInt  ) ;
   void ( __attribute__((__regparm__(1))) (*track_new_mem_stack_4))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_new_mem_stack_8))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_new_mem_stack_12))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_new_mem_stack_16))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_new_mem_stack_32))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_new_mem_stack_112))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_new_mem_stack_128))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_new_mem_stack_144))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_new_mem_stack_160))(Addr  ) ;
   void (*track_new_mem_stack)(Addr  , SizeT  ) ;
   void ( __attribute__((__regparm__(1))) (*track_die_mem_stack_4))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_die_mem_stack_8))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_die_mem_stack_12))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_die_mem_stack_16))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_die_mem_stack_32))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_die_mem_stack_112))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_die_mem_stack_128))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_die_mem_stack_144))(Addr  ) ;
   void ( __attribute__((__regparm__(1))) (*track_die_mem_stack_160))(Addr  ) ;
   void (*track_die_mem_stack)(Addr  , SizeT  ) ;
   void (*track_ban_mem_stack)(Addr  , SizeT  ) ;
   void (*track_pre_mem_read)(CorePart  , ThreadId  , Char * , Addr  , SizeT  ) ;
   void (*track_pre_mem_read_asciiz)(CorePart  , ThreadId  , Char * , Addr  ) ;
   void (*track_pre_mem_write)(CorePart  , ThreadId  , Char * , Addr  , SizeT  ) ;
   void (*track_post_mem_write)(CorePart  , ThreadId  , Addr  , SizeT  ) ;
   void (*track_pre_reg_read)(CorePart  , ThreadId  , Char * , PtrdiffT  ,
                              SizeT  ) ;
   void (*track_post_reg_write)(CorePart  , ThreadId  , PtrdiffT  , SizeT  ) ;
   void (*track_post_reg_write_clientcall_return)(ThreadId  , PtrdiffT  ,
                                                  SizeT  , Addr  ) ;
   void (*track_start_client_code)(ThreadId  , ULong  ) ;
   void (*track_stop_client_code)(ThreadId  , ULong  ) ;
   void (*track_pre_thread_ll_create)(ThreadId  , ThreadId  ) ;
   void (*track_pre_thread_first_insn)(ThreadId  ) ;
   void (*track_pre_thread_ll_exit)(ThreadId  ) ;
   void (*track_pre_deliver_signal)(ThreadId  , Int sigNo , Bool  ) ;
   void (*track_post_deliver_signal)(ThreadId  , Int sigNo ) ;
};
typedef struct __anonstruct_VgToolInterface_131 VgToolInterface;
struct __anonstruct_ExeInfo_132 {
   HChar **argv ;
   Addr exe_base ;
   Addr exe_end ;
   Addr phdr ;
   Int phnum ;
   Addr interp_base ;
   Addr entry ;
   Addr init_ip ;
   Addr brkbase ;
   Addr init_toc ;
   HChar *interp_name ;
   HChar *interp_args ;
};
typedef struct __anonstruct_ExeInfo_132 ExeInfo;
struct SyscallArgs {
   Word sysno ;
   UWord arg1 ;
   UWord arg2 ;
   UWord arg3 ;
   UWord arg4 ;
   UWord arg5 ;
   UWord arg6 ;
   UWord arg7 ;
   UWord arg8 ;
};
typedef struct SyscallArgs SyscallArgs;
enum __anonenum_what_133 {
    SsComplete = 1,
    SsHandToKernel = 2,
    SsIdle = 3
} ;
struct SyscallStatus {
   enum __anonenum_what_133 what ;
   SysRes sres ;
};
typedef struct SyscallStatus SyscallStatus;
struct __anonstruct_SyscallArgLayout_134 {
   Int o_sysno ;
   Int o_arg1 ;
   Int o_arg2 ;
   Int o_arg3 ;
   Int o_arg4 ;
   Int o_arg5 ;
   Int o_arg6 ;
   Int uu_arg7 ;
   Int uu_arg8 ;
};
typedef struct __anonstruct_SyscallArgLayout_134 SyscallArgLayout;
struct __anonstruct_SyscallTableEntry_135 {
   void (*before)(ThreadId  , SyscallArgLayout * , SyscallArgs * ,
                  SyscallStatus * , UWord * ) ;
   void (*after)(ThreadId  , SyscallArgs * , SyscallStatus * ) ;
};
typedef struct __anonstruct_SyscallTableEntry_135 SyscallTableEntry;
struct OpenFd {
   Int fd ;
   Char *pathname ;
   ExeContext *where ;
   struct OpenFd *next ;
   struct OpenFd *prev ;
};
typedef struct OpenFd OpenFd;
union u {
   struct vki_sockaddr a ;
   struct vki_sockaddr_in in ;
   struct vki_sockaddr_un un ;
};
struct vki_pmsg_strbuf {
   int maxlen ;
   int len ;
   vki_caddr_t buf ;
};
struct strbuf;
struct itimerval;
struct statfs;
struct statfs64;
struct stat;
struct linux_dirent;
struct linux_dirent64;
struct rlimit;
struct rusage;
struct timeval;
struct timezone;
struct timespec;
struct iovec;
struct tms;
struct new_utsname;
__inline static Bool toBool(Int x ) 
{ 
  Int r ;
  int tmp ;

  {
  if (x == 0) {
    tmp = (int )((Bool )0);
  } else {
    tmp = (int )((Bool )1);
  }
  r = tmp;
  return ((Bool )r);
}
}
__inline static UChar toUChar(Int x ) 
{ 


  {
  x &= 255;
  return ((UChar )x);
}
}
__inline static HChar toHChar(Int x ) 
{ 


  {
  x &= 255;
  return ((HChar )x);
}
}
__inline static UShort toUShort(Int x ) 
{ 


  {
  x &= 65535;
  return ((UShort )x);
}
}
__inline static Short toShort(Int x ) 
{ 


  {
  x &= 65535;
  return ((Short )x);
}
}
__inline static UInt toUInt(Long x ) 
{ 


  {
  x &= 4294967295LL;
  return ((UInt )x);
}
}
__inline static ULong Ptr_to_ULong(void *p ) 
{ 
  UInt w ;

  {
  w = (UInt )p;
  return ((ULong )w);
}
}
__inline static void *ULong_to_Ptr(ULong n ) 
{ 
  UInt w ;

  {
  w = (UInt )n;
  return ((void *)w);
}
}
__inline static Bool sr_isError(SysRes sr ) 
{ 


  {
  return (sr._isError);
}
}
__inline static UWord sr_Res(SysRes sr ) 
{ 
  UWord tmp ;

  {
  if (sr._isError) {
    tmp = (UWord )0;
  } else {
    tmp = sr._val;
  }
  return (tmp);
}
}
__inline static UWord sr_ResHI(SysRes sr ) 
{ 


  {
  return ((UWord )0);
}
}
__inline static UWord sr_Err(SysRes sr ) 
{ 
  UWord tmp ;

  {
  if (sr._isError) {
    tmp = sr._val;
  } else {
    tmp = (UWord )0;
  }
  return (tmp);
}
}
__inline static Bool sr_EQ(SysRes sr1 , SysRes sr2 ) 
{ 
  int tmp ;

  {
  if (sr1._val == sr2._val) {
    if (sr1._isError) {
      if (sr2._isError) {
        tmp = 1;
      } else {
        goto _L;
      }
    } else
    _L: /* CIL Label */ 
    if (! sr1._isError) {
      if (! sr2._isError) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  return ((Bool )tmp);
}
}
extern void ppIRType(IRType  ) ;
extern Int sizeofIRType(IRType  ) ;
extern IRConst *IRConst_U1(Bool  ) ;
extern IRConst *IRConst_U8(UChar  ) ;
extern IRConst *IRConst_U16(UShort  ) ;
extern IRConst *IRConst_U32(UInt  ) ;
extern IRConst *IRConst_U64(ULong  ) ;
extern IRConst *IRConst_F32(Float  ) ;
extern IRConst *IRConst_F32i(UInt  ) ;
extern IRConst *IRConst_F64(Double  ) ;
extern IRConst *IRConst_F64i(ULong  ) ;
extern IRConst *IRConst_V128(UShort  ) ;
extern IRConst *deepCopyIRConst(IRConst * ) ;
extern void ppIRConst(IRConst * ) ;
extern Bool eqIRConst(IRConst * , IRConst * ) ;
extern IRCallee *mkIRCallee(Int regparms , HChar *name , void *addr ) ;
extern IRCallee *deepCopyIRCallee(IRCallee * ) ;
extern void ppIRCallee(IRCallee * ) ;
extern IRRegArray *mkIRRegArray(Int  , IRType  , Int  ) ;
extern IRRegArray *deepCopyIRRegArray(IRRegArray * ) ;
extern void ppIRRegArray(IRRegArray * ) ;
extern Bool eqIRRegArray(IRRegArray * , IRRegArray * ) ;
extern void ppIRTemp(IRTemp  ) ;
extern void ppIROp(IROp  ) ;
extern IRExpr *IRExpr_Binder(Int binder ) ;
extern IRExpr *IRExpr_Get(Int off , IRType ty ) ;
extern IRExpr *IRExpr_GetI(IRRegArray *descr , IRExpr *ix , Int bias ) ;
extern IRExpr *IRExpr_RdTmp(IRTemp tmp ) ;
extern IRExpr *IRExpr_Qop(IROp op , IRExpr *arg1 , IRExpr *arg2 , IRExpr *arg3 ,
                          IRExpr *arg4 ) ;
extern IRExpr *IRExpr_Triop(IROp op , IRExpr *arg1 , IRExpr *arg2 ,
                            IRExpr *arg3 ) ;
extern IRExpr *IRExpr_Binop(IROp op , IRExpr *arg1 , IRExpr *arg2 ) ;
extern IRExpr *IRExpr_Unop(IROp op , IRExpr *arg ) ;
extern IRExpr *IRExpr_Load(IREndness end , IRType ty , IRExpr *addr ) ;
extern IRExpr *IRExpr_Const(IRConst *con ) ;
extern IRExpr *IRExpr_CCall(IRCallee *cee , IRType retty , IRExpr **args ) ;
extern IRExpr *IRExpr_Mux0X(IRExpr *cond , IRExpr *expr0 , IRExpr *exprX ) ;
extern IRExpr *deepCopyIRExpr(IRExpr * ) ;
extern void ppIRExpr(IRExpr * ) ;
extern IRExpr **mkIRExprVec_0(void) ;
extern IRExpr **mkIRExprVec_1(IRExpr * ) ;
extern IRExpr **mkIRExprVec_2(IRExpr * , IRExpr * ) ;
extern IRExpr **mkIRExprVec_3(IRExpr * , IRExpr * , IRExpr * ) ;
extern IRExpr **mkIRExprVec_4(IRExpr * , IRExpr * , IRExpr * , IRExpr * ) ;
extern IRExpr **mkIRExprVec_5(IRExpr * , IRExpr * , IRExpr * , IRExpr * ,
                              IRExpr * ) ;
extern IRExpr **mkIRExprVec_6(IRExpr * , IRExpr * , IRExpr * , IRExpr * ,
                              IRExpr * , IRExpr * ) ;
extern IRExpr **mkIRExprVec_7(IRExpr * , IRExpr * , IRExpr * , IRExpr * ,
                              IRExpr * , IRExpr * , IRExpr * ) ;
extern IRExpr **mkIRExprVec_8(IRExpr * , IRExpr * , IRExpr * , IRExpr * ,
                              IRExpr * , IRExpr * , IRExpr * , IRExpr * ) ;
extern IRExpr **shallowCopyIRExprVec(IRExpr ** ) ;
extern IRExpr **deepCopyIRExprVec(IRExpr ** ) ;
extern IRExpr *mkIRExpr_HWord(HWord  ) ;
extern IRExpr *mkIRExprCCall(IRType retty , Int regparms , HChar *name ,
                             void *addr , IRExpr **args ) ;
__inline static Bool isIRAtom(IRExpr *e ) 
{ 
  int tmp ;
  Bool tmp___0 ;

  {
  if ((unsigned int )e->tag == 86019U) {
    tmp = 1;
  } else
  if ((unsigned int )e->tag == 86025U) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = toBool(tmp);
  return (tmp___0);
}
}
extern Bool eqIRAtom(IRExpr * , IRExpr * ) ;
extern void ppIRJumpKind(IRJumpKind  ) ;
extern void ppIREffect(IREffect  ) ;
extern void ppIRDirty(IRDirty * ) ;
extern IRDirty *emptyIRDirty(void) ;
extern IRDirty *deepCopyIRDirty(IRDirty * ) ;
extern IRDirty *unsafeIRDirty_0_N(Int regparms , HChar *name , void *addr ,
                                  IRExpr **args ) ;
extern IRDirty *unsafeIRDirty_1_N(IRTemp dst , Int regparms , HChar *name ,
                                  void *addr , IRExpr **args ) ;
extern void ppIRMBusEvent(IRMBusEvent  ) ;
extern void ppIRCAS(IRCAS *cas ) ;
extern IRCAS *mkIRCAS(IRTemp oldHi , IRTemp oldLo , IREndness end ,
                      IRExpr *addr , IRExpr *expdHi , IRExpr *expdLo ,
                      IRExpr *dataHi , IRExpr *dataLo ) ;
extern IRCAS *deepCopyIRCAS(IRCAS * ) ;
extern IRStmt *IRStmt_NoOp(void) ;
extern IRStmt *IRStmt_IMark(Addr64 addr , Int len , UChar delta ) ;
extern IRStmt *IRStmt_AbiHint(IRExpr *base , Int len , IRExpr *nia ) ;
extern IRStmt *IRStmt_Put(Int off , IRExpr *data ) ;
extern IRStmt *IRStmt_PutI(IRRegArray *descr , IRExpr *ix , Int bias ,
                           IRExpr *data ) ;
extern IRStmt *IRStmt_WrTmp(IRTemp tmp , IRExpr *data ) ;
extern IRStmt *IRStmt_Store(IREndness end , IRExpr *addr , IRExpr *data ) ;
extern IRStmt *IRStmt_CAS(IRCAS *details ) ;
extern IRStmt *IRStmt_LLSC(IREndness end , IRTemp result , IRExpr *addr ,
                           IRExpr *storedata ) ;
extern IRStmt *IRStmt_Dirty(IRDirty *details ) ;
extern IRStmt *IRStmt_MBE(IRMBusEvent event ) ;
extern IRStmt *IRStmt_Exit(IRExpr *guard , IRJumpKind jk , IRConst *dst ) ;
extern IRStmt *deepCopyIRStmt(IRStmt * ) ;
extern void ppIRStmt(IRStmt * ) ;
extern IRTemp newIRTemp(IRTypeEnv * , IRType  ) ;
extern IRTypeEnv *deepCopyIRTypeEnv(IRTypeEnv * ) ;
extern void ppIRTypeEnv(IRTypeEnv * ) ;
extern IRSB *emptyIRSB(void) ;
extern IRSB *deepCopyIRSB(IRSB * ) ;
extern IRSB *deepCopyIRSBExceptStmts(IRSB * ) ;
extern void ppIRSB(IRSB * ) ;
extern void addStmtToIRSB(IRSB * , IRStmt * ) ;
extern IRTypeEnv *emptyIRTypeEnv(void) ;
extern IRType typeOfIRConst(IRConst * ) ;
extern IRType typeOfIRTemp(IRTypeEnv * , IRTemp  ) ;
extern IRType typeOfIRExpr(IRTypeEnv * , IRExpr * ) ;
extern void sanityCheckIRSB(IRSB *bb , HChar *caller , Bool require_flatness ,
                            IRType guest_word_size ) ;
extern Bool isFlatIRStmt(IRStmt * ) ;
extern Bool isPlausibleIRType(IRType ty ) ;
extern HChar const   *LibVEX_ppVexArch(VexArch  ) ;
extern HChar const   *LibVEX_ppVexHwCaps(VexArch  , UInt  ) ;
extern void LibVEX_default_VexArchInfo(VexArchInfo *vai ) ;
extern void LibVEX_default_VexAbiInfo(VexAbiInfo *vbi ) ;
extern void LibVEX_default_VexControl(VexControl *vcon ) ;
extern HChar *private_LibVEX_alloc_first ;
extern HChar *private_LibVEX_alloc_curr ;
extern HChar *private_LibVEX_alloc_last ;
extern  __attribute__((__noreturn__)) void private_LibVEX_alloc_OOM(void) ;
__inline static void *LibVEX_Alloc(Int nbytes ) 
{ 
  HChar *curr ;
  HChar *next ;
  Int ALIGN ;

  {
  ALIGN = (Int )((HWord )(& ((struct align *)0)->x)) - 1;
  nbytes = (nbytes + ALIGN) & ~ ALIGN;
  curr = private_LibVEX_alloc_curr;
  next = curr + nbytes;
  if ((unsigned int )next >= (unsigned int )private_LibVEX_alloc_last) {
    private_LibVEX_alloc_OOM();
  } else {

  }
  private_LibVEX_alloc_curr = next;
  return ((void *)curr);
}
}
extern void LibVEX_ShowAllocStats(void) ;
extern void LibVEX_Init( __attribute__((__noreturn__)) void (*failure_exit)(void) ,
                        void (*log_bytes)(HChar * , Int nbytes ) ,
                        Int debuglevel , Bool valgrind_support ,
                        VexControl *vcon ) ;
extern VexTranslateResult LibVEX_Translate(VexTranslateArgs * ) ;
extern void LibVEX_ShowStats(void) ;
extern HChar *LibVEX_EmWarn_string(VexEmWarn  ) ;
extern void LibVEX_GuestX86_initialise(VexGuestX86State *vex_state ) ;
extern UInt LibVEX_GuestX86_get_eflags(VexGuestX86State *vex_state ) ;
extern void LibVEX_GuestX86_put_eflag_c(UInt new_carry_flag ,
                                        VexGuestX86State *vex_state ) ;
__inline static struct vki_cmsghdr *__vki_cmsg_nxthdr(void *__ctl ,
                                                      __vki_kernel_size_t __size ,
                                                      struct vki_cmsghdr *__cmsg ) 
{ 
  struct vki_cmsghdr *__ptr ;

  {
  __ptr = (struct vki_cmsghdr *)((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(long )) - 1U) & ~ (sizeof(long ) - 1U)));
  if ((unsigned long )((char *)(__ptr + 1) - (char *)__ctl) > (unsigned long )__size) {
    return ((struct vki_cmsghdr *)0);
  } else {

  }
  return (__ptr);
}
}
__inline static struct vki_cmsghdr *vki_cmsg_nxthdr(struct vki_msghdr *__msg ,
                                                    struct vki_cmsghdr *__cmsg ) 
{ 
  struct vki_cmsghdr *tmp ;

  {
  tmp = __vki_cmsg_nxthdr(__msg->msg_control, __msg->msg_controllen, __cmsg);
  return (tmp);
}
}
extern void vgPlain_vki_do_initial_consistency_checks(void) ;
extern Char *vgPlain_sysnum_string(Word sysnum , SizeT n_buf , Char *buf ) ;
extern Char *vgPlain_sysnum_string_extra(Word sysnum , SizeT n_buf , Char *buf ) ;
extern  __attribute__((__nothrow__)) int setjmp(struct __jmp_buf_tag *__env ) ;
extern  __attribute__((__nothrow__)) int __sigsetjmp(struct __jmp_buf_tag *__env ,
                                                     int __savemask ) ;
extern  __attribute__((__nothrow__)) int _setjmp(struct __jmp_buf_tag *__env ) ;
extern  __attribute__((__nothrow__,
__noreturn__)) void longjmp(struct __jmp_buf_tag *__env , int __val ) ;
extern  __attribute__((__nothrow__,
__noreturn__)) void _longjmp(struct __jmp_buf_tag *__env , int __val ) ;
extern  __attribute__((__nothrow__,
__noreturn__)) void siglongjmp(struct __jmp_buf_tag *__env , int __val ) ;
extern UWord __attribute__((__returns_twice__))  ( __attribute__((__regparm__(1))) VG_MINIMAL_SETJMP)(UInt *_env ) ;
extern  __attribute__((__noreturn__)) void ( __attribute__((__regparm__(1))) VG_MINIMAL_LONGJMP)(UInt *_env ) ;
extern ThreadId vgPlain_get_running_tid(void) ;
extern ThreadState vgPlain_threads[500] ;
extern ThreadId vgPlain_running_tid ;
extern HChar const   *vgPlain_name_of_ThreadStatus(ThreadStatus status ) ;
extern ThreadState *vgPlain_get_ThreadState(ThreadId tid ) ;
extern Bool vgPlain_is_valid_tid(ThreadId tid ) ;
extern Bool vgPlain_is_running_thread(ThreadId tid ) ;
extern Bool vgPlain_is_exiting(ThreadId tid ) ;
extern Int vgPlain_count_living_threads(void) ;
extern Int vgPlain_count_runnable_threads(void) ;
extern ThreadId vgPlain_lwpid_to_vgtid(Int lwpid ) ;
extern Bool vgPlain_get_filename(Addr a , Char *filename , Int n_filename ) ;
extern Bool vgPlain_get_fnname(Addr a , Char *fnname , Int n_fnname ) ;
extern Bool vgPlain_get_linenum(Addr a , UInt *linenum ) ;
extern Bool vgPlain_get_fnname_w_offset(Addr a , Char *fnname , Int n_fnname ) ;
extern Bool vgPlain_get_filename_linenum(Addr a , Char *filename ,
                                         Int n_filename , Char *dirname ,
                                         Int n_dirname ,
                                         Bool *dirname_available ,
                                         UInt *linenum ) ;
extern Bool vgPlain_get_fnname_if_entry(Addr a , Char *fnname , Int n_fnname ) ;
extern Vg_FnNameKind vgPlain_get_fnname_kind(Char *name ) ;
extern Vg_FnNameKind vgPlain_get_fnname_kind_from_IP(Addr ip ) ;
extern Bool vgPlain_get_datasym_and_offset(Addr data_addr , Char *dname ,
                                           Int n_dname , PtrdiffT *offset ) ;
extern Bool vgPlain_get_data_description(void *dname1v , void *dname2v ,
                                         Addr data_addr ) ;
extern Bool vgPlain_get_objname(Addr a , Char *objname , Int n_objname ) ;
extern Char *vgPlain_describe_IP(Addr eip , Char *buf , Int n_buf ) ;
extern void *vgPlain_di_get_stack_blocks_at_ip(Addr ip , Bool arrays_only ) ;
extern void *vgPlain_di_get_global_blocks_from_dihandle(ULong di_handle ,
                                                        Bool arrays_only ) ;
extern DebugInfo *vgPlain_find_DebugInfo(Addr a ) ;
extern Addr vgPlain_DebugInfo_get_text_avma(DebugInfo const   *di ) ;
extern SizeT vgPlain_DebugInfo_get_text_size(DebugInfo const   *di ) ;
extern Addr vgPlain_DebugInfo_get_plt_avma(DebugInfo const   *di ) ;
extern SizeT vgPlain_DebugInfo_get_plt_size(DebugInfo const   *di ) ;
extern Addr vgPlain_DebugInfo_get_gotplt_avma(DebugInfo const   *di ) ;
extern SizeT vgPlain_DebugInfo_get_gotplt_size(DebugInfo const   *di ) ;
extern UChar const   *vgPlain_DebugInfo_get_soname(DebugInfo const   *di ) ;
extern UChar const   *vgPlain_DebugInfo_get_filename(DebugInfo const   *di ) ;
extern PtrdiffT vgPlain_DebugInfo_get_text_bias(DebugInfo const   *di ) ;
extern DebugInfo const   *vgPlain_next_DebugInfo(DebugInfo const   *di ) ;
extern Int vgPlain_DebugInfo_syms_howmany(DebugInfo const   *di ) ;
extern void vgPlain_DebugInfo_syms_getidx(DebugInfo const   *di , Int idx ,
                                          Addr *avma , Addr *tocptr ,
                                          UInt *size , UChar **pri_name ,
                                          UChar ***sec_names , Bool *isText ,
                                          Bool *isIFunc ) ;
extern HChar const   *vgPlain_pp_SectKind(VgSectKind kind ) ;
extern VgSectKind vgPlain_DebugInfo_sect_kind(UChar *name , SizeT n_name ,
                                              Addr a ) ;
extern void vgPlain_di_initialise(void) ;
extern ULong vgPlain_di_notify_mmap(Addr a , Bool allow_SkFileV , Int use_fd ) ;
extern void vgPlain_di_notify_munmap(Addr a , SizeT len ) ;
extern void vgPlain_di_notify_mprotect(Addr a , SizeT len , UInt prot ) ;
extern void vgPlain_di_notify_pdb_debuginfo(Int fd , Addr avma ,
                                            SizeT total_size ,
                                            PtrdiffT unknown_purpose__reloc ) ;
extern void vgPlain_di_notify_vm_protect(Addr a , SizeT len , UInt prot ) ;
extern void vgPlain_di_discard_ALL_debuginfo(void) ;
extern Bool vgPlain_get_fnname_raw(Addr a , Char *buf , Int nbuf ) ;
extern Bool vgPlain_get_fnname_no_cxx_demangle(Addr a , Char *buf , Int nbuf ) ;
extern Bool vgPlain_use_CF_info(D3UnwindRegs *uregs , Addr min_accessible ,
                                Addr max_accessible ) ;
extern Bool vgPlain_use_FPO_info(Addr *ipP , Addr *spP , Addr *fpP ,
                                 Addr min_accessible , Addr max_accessible ) ;
extern Addr vgPlain_get_tocptr(Addr guest_code_addr ) ;
extern Bool vgPlain_lookup_symbol_SLOW(UChar *sopatt , UChar *name ,
                                       Addr *pEnt , Addr *pToc ) ;
extern Int vgPlain_am_get_segment_starts(Addr *starts , Int nStarts ) ;
extern NSegment const   *vgPlain_am_find_nsegment(Addr a ) ;
extern HChar *vgPlain_am_get_filename(NSegment const   * ) ;
extern Bool vgPlain_am_is_valid_for_client(Addr start , SizeT len , UInt prot ) ;
extern void *vgPlain_am_shadow_alloc(SizeT size ) ;
extern SysRes vgPlain_am_munmap_valgrind(Addr start , SizeT length ) ;
extern Addr vgPlain_am_startup(Addr sp_at_startup ) ;
extern NSegment const   *vgPlain_am_next_nsegment(NSegment *here , Bool fwds ) ;
extern Bool vgPlain_am_is_valid_for_client_or_free_or_resvn(Addr start ,
                                                            SizeT len ,
                                                            UInt prot ) ;
extern ULong vgPlain_am_get_anonsize_total(void) ;
extern void vgPlain_am_show_nsegments(Int logLevel , HChar *who ) ;
extern Bool vgPlain_am_do_sync_check(HChar const   *fn , HChar const   *file ,
                                     Int line ) ;
extern Addr vgPlain_am_get_advisory(MapRequest *req , Bool forClient , Bool *ok ) ;
extern Addr vgPlain_am_get_advisory_client_simple(Addr start , SizeT len ,
                                                  Bool *ok ) ;
extern Bool vgPlain_am_covered_by_single_free_segment(Addr start , SizeT len ) ;
extern Bool vgPlain_am_notify_client_mmap(Addr a , SizeT len , UInt prot ,
                                          UInt flags , Int fd , Off64T offset ) ;
extern Bool vgPlain_am_notify_client_shmat(Addr a , SizeT len , UInt prot ) ;
extern Bool vgPlain_am_notify_mprotect(Addr start , SizeT len , UInt prot ) ;
extern Bool vgPlain_am_notify_munmap(Addr start , SizeT len ) ;
extern SysRes vgPlain_am_do_mmap_NO_NOTIFY(Addr start , SizeT length ,
                                           UInt prot , UInt flags , Int fd ,
                                           Off64T offset ) ;
extern SysRes vgPlain_am_mmap_file_fixed_client(Addr start , SizeT length ,
                                                UInt prot , Int fd ,
                                                Off64T offset ) ;
extern SysRes vgPlain_am_mmap_named_file_fixed_client(Addr start ,
                                                      SizeT length , UInt prot ,
                                                      Int fd , Off64T offset ,
                                                      HChar const   *name ) ;
extern SysRes vgPlain_am_mmap_anon_fixed_client(Addr start , SizeT length ,
                                                UInt prot ) ;
extern SysRes vgPlain_am_mmap_anon_float_client(SizeT length , Int prot ) ;
extern SysRes vgPlain_am_sbrk_anon_float_client(SizeT length , Int prot ) ;
extern SysRes vgPlain_am_mmap_anon_float_valgrind(SizeT cszB ) ;
extern SysRes vgPlain_am_sbrk_anon_float_valgrind(SizeT cszB ) ;
extern SysRes vgPlain_am_mmap_file_float_valgrind(SizeT length , UInt prot ,
                                                  Int fd , Off64T offset ) ;
extern SysRes vgPlain_am_shared_mmap_file_float_valgrind(SizeT length ,
                                                         UInt prot , Int fd ,
                                                         Off64T offset ) ;
extern SysRes vgPlain_am_munmap_client(Bool *need_discard , Addr start ,
                                       SizeT length ) ;
extern Bool vgPlain_am_change_ownership_v_to_c(Addr start , SizeT len ) ;
extern void vgPlain_am_set_segment_isCH_if_SkAnonC(NSegment *seg ) ;
extern void vgPlain_am_set_segment_hasT_if_SkFileC_or_SkAnonC(NSegment * ) ;
extern Bool vgPlain_am_create_reservation(Addr start , SizeT length ,
                                          ShrinkMode smode , SSizeT extra ) ;
extern Bool vgPlain_am_extend_into_adjacent_reservation_client(NSegment *seg ,
                                                               SSizeT delta ) ;
extern Bool vgPlain_am_extend_map_client(Bool *need_discard , NSegment *seg ,
                                         SizeT delta ) ;
extern Bool vgPlain_am_relocate_nooverlap_client(Bool *need_discard ,
                                                 Addr old_addr , SizeT old_len ,
                                                 Addr new_addr , SizeT new_len ) ;
extern VgStack *vgPlain_am_alloc_VgStack(Addr *initial_sp ) ;
extern SizeT vgPlain_am_get_VgStack_unused_szB(VgStack *stack , SizeT limit ) ;
extern FastCacheEntry __attribute__((__aligned__(16)))  vgPlain_tt_fast[1 << 15] ;
extern UInt *vgPlain_tt_fastN[1 << 15] ;
extern void vgPlain_init_tt_tc(void) ;
extern void vgPlain_add_to_transtab(VexGuestExtents *vge , Addr64 entry ,
                                    AddrH code , UInt code_len ,
                                    Bool is_self_checking ) ;
extern Bool vgPlain_search_transtab(AddrH *result , Addr64 guest_addr ,
                                    Bool upd_cache ) ;
extern void vgPlain_discard_translations(Addr64 start , ULong range ,
                                         HChar *who ) ;
extern void vgPlain_print_tt_tc_stats(void) ;
extern UInt vgPlain_get_bbs_translated(void) ;
extern void vgPlain_add_to_unredir_transtab(VexGuestExtents *vge ,
                                            Addr64 entry , AddrH code ,
                                            UInt code_len ) ;
extern Bool vgPlain_search_unredir_transtab(AddrH *result , Addr64 guest_addr ) ;
extern ULong vgPlain_get_BB_profile(BBProfEntry *tops , UInt n_tops ) ;
extern XArray *vgPlain_newXA(void *(*alloc_fn)(HChar * , SizeT  ) , HChar *cc ,
                             void (*free_fn)(void * ) , Word elemSzB ) ;
extern void vgPlain_deleteXA(XArray * ) ;
extern void vgPlain_setCmpFnXA(XArray * , Int (*compar)(void * , void * ) ) ;
extern Word vgPlain_addToXA(XArray * , void *elem ) ;
extern Word vgPlain_addBytesToXA(XArray *xao , void *bytesV , Word nbytes ) ;
extern void vgPlain_sortXA(XArray * ) ;
extern Bool vgPlain_lookupXA(XArray * , void *key , Word *first , Word *last ) ;
extern Bool vgPlain_lookupXA_UNSAFE(XArray *xao , void *key , Word *first ,
                                    Word *last , Int (*cmpFn)(void * , void * ) ) ;
extern Word vgPlain_sizeXA(XArray * ) ;
extern void *vgPlain_indexXA(XArray * , Word  ) ;
extern void vgPlain_dropTailXA(XArray * , Word  ) ;
extern void vgPlain_dropHeadXA(XArray * , Word  ) ;
extern XArray *vgPlain_cloneXA(HChar *cc , XArray *xa ) ;
extern void vgPlain_getContentsXA_UNSAFE(XArray *sr , void **ctsP , Word *usedP ) ;
extern void ( /* format attribute */  vgPlain_xaprintf)(XArray *dst ,
                                                        HChar const   *format 
                                                        , ...) ;
extern XArray *vgPlain_args_for_client ;
extern XArray *vgPlain_args_for_valgrind ;
extern Int vgPlain_args_for_valgrind_noexecpass ;
extern HChar const   *vgPlain_args_the_exename ;
extern Addr vgPlain_clstk_base ;
extern Addr vgPlain_clstk_end ;
extern UWord vgPlain_clstk_id ;
extern UWord *vgPlain_client_auxv ;
extern Addr vgPlain_brk_base ;
extern Addr vgPlain_brk_limit ;
extern Int vgPlain_cl_exec_fd ;
extern Int vgPlain_cl_cmdline_fd ;
extern struct vki_rlimit vgPlain_client_rlimit_data ;
extern struct vki_rlimit vgPlain_client_rlimit_stack ;
extern HChar *vgPlain_name_of_launcher ;
extern Int vgPlain_fd_soft_limit ;
extern Int vgPlain_fd_hard_limit ;
extern Addr vgPlain_client___libc_freeres_wrapper ;
extern Addr vgPlain_client__dl_sysinfo_int80 ;
extern void vgPlain_debugLog_startup(Int level , HChar *who ) ;
extern void vgPlain_debugLog_setXml(Bool xml ) ;
extern Int vgPlain_debugLog_getLevel(void) ;
extern void ( /* format attribute */  vgPlain_debugLog)(Int level ,
                                                        HChar const   *modulename ,
                                                        HChar const   *format 
                                                        , ...) ;
extern UInt vgPlain_debugLog_vprintf(void (*send_fn)(HChar  , void * ) ,
                                     void *send_arg2 , HChar const   *format ,
                                     va_list vargs ) ;
extern ExeContext *vgPlain_record_ExeContext(ThreadId tid , Word first_ip_delta ) ;
extern ExeContext *vgPlain_record_depth_1_ExeContext(ThreadId tid ) ;
extern void vgPlain_apply_ExeContext(void (*action)(UInt n , Addr ip ) ,
                                     ExeContext *ec , UInt n_ips ) ;
extern Bool vgPlain_eq_ExeContext(VgRes res , ExeContext *e1 , ExeContext *e2 ) ;
extern void vgPlain_pp_ExeContext(ExeContext *ec ) ;
extern UInt vgPlain_get_ECU_from_ExeContext(ExeContext *e ) ;
extern Int vgPlain_get_ExeContext_n_ips(ExeContext *e ) ;
extern ExeContext *vgPlain_get_ExeContext_from_ECU(UInt uniq ) ;
extern ExeContext *vgPlain_make_depth_1_ExeContext_from_Addr(Addr a ) ;
__inline static Bool vgPlain_is_plausible_ECU(UInt ecu ) 
{ 
  int tmp ;

  {
  if (ecu > 0U) {
    if ((ecu & 3U) == 0U) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  return ((Bool )tmp);
}
}
extern ExeContext *vgPlain_make_ExeContext_from_StackTrace(Addr *ips ,
                                                           UInt n_ips ) ;
extern ExeContext *vgPlain_get_error_where(Error *err ) ;
extern ErrorKind vgPlain_get_error_kind(Error *err ) ;
extern Addr vgPlain_get_error_address(Error *err ) ;
extern Char *vgPlain_get_error_string(Error *err ) ;
extern void *vgPlain_get_error_extra(Error *err ) ;
extern void vgPlain_maybe_record_error(ThreadId tid , ErrorKind ekind , Addr a ,
                                       Char *s , void *extra ) ;
extern Bool vgPlain_unique_error(ThreadId tid , ErrorKind ekind , Addr a ,
                                 Char *s , void *extra , ExeContext *where ,
                                 Bool print_error , Bool allow_GDB_attach ,
                                 Bool count_error ) ;
extern Bool vgPlain_get_line(Int fd , Char **bufpp , SizeT *nBufp , Int *lineno ) ;
extern SuppKind vgPlain_get_supp_kind(Supp *su ) ;
extern Char *vgPlain_get_supp_string(Supp *su ) ;
extern void *vgPlain_get_supp_extra(Supp *su ) ;
extern void vgPlain_set_supp_kind(Supp *su , SuppKind suppkind ) ;
extern void vgPlain_set_supp_string(Supp *su , Char *string ) ;
extern void vgPlain_set_supp_extra(Supp *su , void *extra ) ;
extern void vgPlain_load_suppressions(void) ;
extern void vgPlain_show_all_errors(Int verbosity , Bool xml ) ;
extern void vgPlain_show_last_error(void) ;
extern void vgPlain_show_error_counts_as_XML(void) ;
extern Bool vgPlain_is_action_requested(Char *action , Bool *clo ) ;
extern Bool vgPlain_showing_core_errors(void) ;
extern UInt vgPlain_get_n_errs_found(void) ;
extern UInt vgPlain_get_n_errs_shown(void) ;
extern void vgPlain_print_errormgr_stats(void) ;
extern void vgPlain_gdbserver(ThreadId tid ) ;
extern Int vgPlain_dyn_vgdb_error ;
extern char *vgPlain_ppPointKind(PointKind kind ) ;
extern Bool vgPlain_is_watched(PointKind kind , Addr addr , Int szB ) ;
extern void vgPlain_needs_watchpoint(Bool (*watchpoint)(PointKind kind ,
                                                        Bool insert ,
                                                        Addr addr , SizeT len ) ) ;
extern UInt ( /* format attribute */  vgPlain_gdb_printf)(HChar const   *format 
                                                          , ...) ;
extern Int vgPlain_keyword_id(Char *keywords , Char *input_word ,
                              kwd_report_error report ) ;
extern void vgPlain_strtok_get_address_and_size(Addr *address , SizeT *szB ,
                                                Char **ssaveptr ) ;
extern Bool vgPlain_isspace(Char c ) ;
extern Bool vgPlain_isdigit(Char c ) ;
extern Char vgPlain_tolower(Char c ) ;
extern Long vgPlain_strtoll10(Char *str , Char **endptr ) ;
extern Long vgPlain_strtoll16(Char *str , Char **endptr ) ;
extern ULong vgPlain_strtoull10(Char *str , Char **endptr ) ;
extern ULong vgPlain_strtoull16(Char *str , Char **endptr ) ;
extern double vgPlain_strtod(Char *str , Char **endptr ) ;
extern SizeT vgPlain_strlen(Char const   *str ) ;
extern Char *vgPlain_strcat(Char *dest , Char const   *src ) ;
extern Char *vgPlain_strncat(Char *dest , Char const   *src , SizeT n ) ;
extern Char *vgPlain_strpbrk(Char const   *s , Char const   *accpt ) ;
extern Char *vgPlain_strcpy(Char *dest , Char const   *src ) ;
extern Char *vgPlain_strncpy(Char *dest , Char const   *src , SizeT ndest ) ;
extern Int vgPlain_strcmp(Char const   *s1 , Char const   *s2 ) ;
extern Int vgPlain_strcasecmp(Char const   *s1 , Char const   *s2 ) ;
extern Int vgPlain_strncmp(Char const   *s1 , Char const   *s2 , SizeT nmax ) ;
extern Int vgPlain_strncasecmp(Char const   *s1 , Char const   *s2 , SizeT nmax ) ;
extern Char *vgPlain_strstr(Char const   *haystack , Char *needle ) ;
extern Char *vgPlain_strcasestr(Char const   *haystack , Char *needle ) ;
extern Char *vgPlain_strchr(Char const   *s , Char c ) ;
extern Char *vgPlain_strrchr(Char const   *s , Char c ) ;
extern SizeT vgPlain_strspn(Char const   *s , Char const   *accpt ) ;
extern SizeT vgPlain_strcspn(Char const   *s , char const   *reject ) ;
extern Char *vgPlain_strtok_r(Char *s , Char const   *delim , Char **saveptr ) ;
extern Char *vgPlain_strtok(Char *s , Char const   *delim ) ;
extern Bool vgPlain_parse_Addr(UChar **ppc , Addr *result ) ;
extern void vgPlain_strncpy_safely(Char *dest , Char const   *src , SizeT ndest ) ;
extern void *vgPlain_memcpy(void *d , void const   *s , SizeT sz ) ;
extern void *vgPlain_memmove(void *d , void const   *s , SizeT sz ) ;
extern void *vgPlain_memset(void *s , Int c , SizeT sz ) ;
extern Int vgPlain_memcmp(void const   *s1 , void const   *s2 , SizeT n ) ;
__inline static void ( __attribute__((__always_inline__)) vgPlain_bzero_inline)(void *s ,
                                                                                SizeT sz ) 
{ 
  UWord *p ;
  UWord tmp ;
  UWord tmp___0 ;
  UWord tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;
  UWord tmp___4 ;
  UWord tmp___5 ;
  UWord tmp___6 ;
  UWord tmp___7 ;
  UWord tmp___8 ;
  UWord tmp___9 ;
  UWord tmp___10 ;
  UWord tmp___11 ;
  UWord tmp___12 ;
  UWord tmp___13 ;
  UWord tmp___14 ;
  UWord tmp___15 ;
  UWord tmp___16 ;
  UWord tmp___17 ;
  UWord tmp___18 ;
  UWord tmp___19 ;
  UWord tmp___20 ;
  UWord tmp___21 ;
  UWord tmp___22 ;
  UWord tmp___23 ;
  UWord tmp___24 ;
  UWord tmp___25 ;
  UWord tmp___26 ;
  long tmp___27 ;
  long tmp___28 ;

  {
  tmp___27 = __builtin_expect((long )(! (! (0UL == (sz & (Addr )(sizeof(UWord ) - 1U))))),
                              1L);
  if (tmp___27) {
    tmp___28 = __builtin_expect((long )(! (! (0UL == ((Addr )s & (Addr )(sizeof(UWord ) - 1U))))),
                                1L);
    if (tmp___28) {
      p = (UWord *)s;
      switch (sz / (SizeT )sizeof(UWord )) {
      case 8UL: 
      tmp___5 = 0UL;
      *(p + 7) = tmp___5;
      tmp___4 = tmp___5;
      *(p + 6) = tmp___4;
      tmp___3 = tmp___4;
      *(p + 5) = tmp___3;
      tmp___2 = tmp___3;
      *(p + 4) = tmp___2;
      tmp___1 = tmp___2;
      *(p + 3) = tmp___1;
      tmp___0 = tmp___1;
      *(p + 2) = tmp___0;
      tmp = tmp___0;
      *(p + 1) = tmp;
      *(p + 0) = tmp;
      return;
      case 7UL: 
      tmp___11 = 0UL;
      *(p + 6) = tmp___11;
      tmp___10 = tmp___11;
      *(p + 5) = tmp___10;
      tmp___9 = tmp___10;
      *(p + 4) = tmp___9;
      tmp___8 = tmp___9;
      *(p + 3) = tmp___8;
      tmp___7 = tmp___8;
      *(p + 2) = tmp___7;
      tmp___6 = tmp___7;
      *(p + 1) = tmp___6;
      *(p + 0) = tmp___6;
      return;
      case 6UL: 
      tmp___16 = 0UL;
      *(p + 5) = tmp___16;
      tmp___15 = tmp___16;
      *(p + 4) = tmp___15;
      tmp___14 = tmp___15;
      *(p + 3) = tmp___14;
      tmp___13 = tmp___14;
      *(p + 2) = tmp___13;
      tmp___12 = tmp___13;
      *(p + 1) = tmp___12;
      *(p + 0) = tmp___12;
      return;
      case 5UL: 
      tmp___20 = 0UL;
      *(p + 4) = tmp___20;
      tmp___19 = tmp___20;
      *(p + 3) = tmp___19;
      tmp___18 = tmp___19;
      *(p + 2) = tmp___18;
      tmp___17 = tmp___18;
      *(p + 1) = tmp___17;
      *(p + 0) = tmp___17;
      return;
      case 4UL: 
      tmp___23 = 0UL;
      *(p + 3) = tmp___23;
      tmp___22 = tmp___23;
      *(p + 2) = tmp___22;
      tmp___21 = tmp___22;
      *(p + 1) = tmp___21;
      *(p + 0) = tmp___21;
      return;
      case 3UL: 
      tmp___25 = 0UL;
      *(p + 2) = tmp___25;
      tmp___24 = tmp___25;
      *(p + 1) = tmp___24;
      *(p + 0) = tmp___24;
      return;
      case 2UL: 
      tmp___26 = 0UL;
      *(p + 1) = tmp___26;
      *(p + 0) = tmp___26;
      return;
      case 1UL: 
      *(p + 0) = 0UL;
      return;
      case 0UL: 
      return;
      default: 
      break;
      }
    } else {

    }
  } else {

  }
  vgPlain_memset(s, 0, sz);
  return;
}
}
extern void vgPlain_ssort(void *base , SizeT nmemb , SizeT size ,
                          Int (*compar)(void * , void * ) ) ;
extern Int vgPlain_log2(UInt x ) ;
extern Int vgPlain_log2_64(ULong x ) ;
extern UInt vgPlain_random(UInt *pSeed ) ;
extern  __attribute__((__noreturn__)) void vgPlain_exit(Int status ) ;
extern  __attribute__((__noreturn__)) void vgPlain_tool_panic(Char *str ) ;
extern  __attribute__((__noreturn__)) void vgPlain_assert_fail(Bool isCore ,
                                                               Char const   *expr ,
                                                               Char const   *file ,
                                                               Int line ,
                                                               Char const   *fn ,
                                                               HChar const   *format 
                                                               , ...) ;
extern  __attribute__((__noreturn__)) void vgPlain_core_panic(Char *str ) ;
extern  __attribute__((__noreturn__)) void vgPlain_core_panic_at(Char *str ,
                                                                 UnwindStartRegs * ) ;
extern  __attribute__((__noreturn__)) void vgPlain_unimplemented(Char *msg ) ;
extern void vgPlain_show_sched_status(void) ;
extern SysRes vgPlain_mknod(Char const   *pathname , Int mode , UWord dev ) ;
extern SysRes vgPlain_open(Char const   *pathname , Int flags , Int mode ) ;
extern Int vgPlain_fd_open(Char const   *pathname , Int flags , Int mode ) ;
extern void vgPlain_close(Int fd ) ;
extern Int vgPlain_read(Int fd , void *buf , Int count ) ;
extern Int vgPlain_write(Int fd , void const   *buf , Int count ) ;
extern Int vgPlain_pipe(Int *fd ) ;
extern Off64T vgPlain_lseek(Int fd , Off64T offset , Int whence ) ;
extern SysRes vgPlain_stat(Char const   *file_name , struct vg_stat *buf ) ;
extern Int vgPlain_fstat(Int fd , struct vg_stat *buf ) ;
extern SysRes vgPlain_dup(Int oldfd ) ;
extern SysRes vgPlain_dup2(Int oldfd , Int newfd ) ;
extern Int vgPlain_rename(Char const   *old_name , Char const   *new_name ) ;
extern Int vgPlain_unlink(Char const   *file_name ) ;
extern Int vgPlain_poll(struct vki_pollfd *fds , Int nfds , Int timeout ) ;
extern Int vgPlain_readlink(Char const   *path , Char *buf , UInt bufsize ) ;
extern Int vgPlain_getdents(Int fd , struct vki_dirent *dirp , UInt count ) ;
extern Char *vgPlain_basename(Char const   *path ) ;
extern Char *vgPlain_dirname(Char const   *path ) ;
extern HChar const   *vgPlain_tmpdir(void) ;
extern Bool vgPlain_get_startup_wd(Char *buf , SizeT size ) ;
extern Int vgPlain_safe_fd(Int oldfd ) ;
extern Int vgPlain_fcntl(Int fd , Int cmd , Addr arg ) ;
extern Bool vgPlain_resolve_filename(Int fd , HChar *buf , Int n_buf ) ;
extern Long vgPlain_fsize(Int fd ) ;
extern Bool vgPlain_is_dir(HChar const   *f ) ;
extern Int vgPlain_connect_via_socket(UChar *str ) ;
extern UInt vgPlain_htonl(UInt x ) ;
extern UInt vgPlain_ntohl(UInt x ) ;
extern UShort vgPlain_htons(UShort x ) ;
extern UShort vgPlain_ntohs(UShort x ) ;
extern Int vgPlain_socket(Int domain , Int type , Int protocol ) ;
extern Int vgPlain_write_socket(Int sd , void *msg , Int count ) ;
extern Int vgPlain_getsockname(Int sd , struct vki_sockaddr *name ,
                               Int *namelen ) ;
extern Int vgPlain_getpeername(Int sd , struct vki_sockaddr *name ,
                               Int *namelen ) ;
extern Int vgPlain_getsockopt(Int sd , Int level , Int optname , void *optval ,
                              Int *optlen ) ;
extern Int vgPlain_access(HChar const   *path , Bool irusr , Bool iwusr ,
                          Bool ixusr ) ;
extern Int vgPlain_check_executable(Bool *is_setuid , HChar const   *f ,
                                    Bool allow_setuid ) ;
extern SysRes vgPlain_pread(Int fd , void *buf , Int count , OffT offset ) ;
extern Int vgPlain_mkstemp(HChar *part_of_name , HChar *fullname ) ;
extern Bool vgPlain_record_startup_wd(void) ;
extern UInt ( /* format attribute */  vgPlain_sprintf)(Char *buf ,
                                                       HChar const   *format 
                                                       , ...) ;
extern UInt ( /* format attribute */  vgPlain_vsprintf)(Char *buf ,
                                                        HChar const   *format ,
                                                        va_list vargs ) ;
extern UInt ( /* format attribute */  vgPlain_snprintf)(Char *buf , Int size ,
                                                        HChar const   *format 
                                                        , ...) ;
extern UInt ( /* format attribute */  vgPlain_vsnprintf)(Char *buf , Int size ,
                                                         HChar const   *format ,
                                                         va_list vargs ) ;
extern void vgPlain_percentify(ULong n , ULong m , UInt d , Int n_buf ,
                               char *buf ) ;
extern UInt ( /* format attribute */  vgPlain_printf)(HChar const   *format 
                                                      , ...) ;
extern UInt ( /* format attribute */  vgPlain_vprintf)(HChar const   *format ,
                                                       va_list vargs ) ;
extern UInt ( /* format attribute */  vgPlain_printf_xml)(HChar const   *format 
                                                          , ...) ;
extern UInt ( /* format attribute */  vgPlain_vprintf_xml)(HChar const   *format ,
                                                           va_list vargs ) ;
extern void vgPlain_vcbprintf(void (*char_sink)(HChar  , void *opaque ) ,
                              void *opaque , HChar const   *format ,
                              va_list vargs ) ;
extern UInt ( /* format attribute */  vgPlain_message)(VgMsgKind kind ,
                                                       HChar const   *format 
                                                       , ...) ;
extern UInt ( /* format attribute */  vgPlain_vmessage)(VgMsgKind kind ,
                                                        HChar const   *format ,
                                                        va_list vargs ) ;
extern UInt ( /* format attribute */  vgPlain_fmsg)(HChar const   *format  , ...) ;
extern  __attribute__((__noreturn__)) void ( /* format attribute */  vgPlain_fmsg_bad_option)(HChar *opt ,
                                                                                              HChar const   *format 
                                                                                              , ...) ;
extern UInt ( /* format attribute */  vgPlain_umsg)(HChar const   *format  , ...) ;
extern UInt ( /* format attribute */  vgPlain_dmsg)(HChar const   *format  , ...) ;
extern void vgPlain_message_flush(void) ;
extern OutputSink vgPlain_log_output_sink ;
extern OutputSink vgPlain_xml_output_sink ;
extern void vgPlain_elapsed_wallclock_time(HChar *buf ) ;
extern  __attribute__((__noreturn__)) void vgPlain_err_missing_prog(void) ;
extern  __attribute__((__noreturn__)) void vgPlain_err_config_error(Char *format 
                                                                    , ...) ;
extern Char **vgPlain_client_envp ;
extern Char *vgPlain_getenv(Char *name ) ;
extern Char const   *vgPlain_libdir ;
extern Char const   *vgPlain_LD_PRELOAD_var_name ;
extern Int vgPlain_waitpid(Int pid , Int *status , Int options ) ;
extern Int vgPlain_system(Char *cmd ) ;
extern Int vgPlain_fork(void) ;
extern void vgPlain_execv(Char *filename , Char **argv ) ;
extern Int vgPlain_getrlimit(Int resource , struct vki_rlimit *rlim ) ;
extern Int vgPlain_setrlimit(Int resource , struct vki_rlimit  const  *rlim ) ;
extern Int vgPlain_prctl(Int option , ULong arg2 , ULong arg3 , ULong arg4 ,
                         ULong arg5 ) ;
extern Int vgPlain_gettid(void) ;
extern Int vgPlain_getpid(void) ;
extern Int vgPlain_getppid(void) ;
extern Int vgPlain_getpgrp(void) ;
extern Int vgPlain_geteuid(void) ;
extern Int vgPlain_getegid(void) ;
extern UInt vgPlain_read_millisecond_timer(void) ;
extern void vgPlain_atfork(void (*pre)(ThreadId  ) ,
                           void (*parent)(ThreadId  ) ,
                           void (*child)(ThreadId  ) ) ;
extern Char **vgPlain_env_setenv(Char ***envp , Char const   *varname ,
                                 Char const   *val ) ;
extern void vgPlain_env_unsetenv(Char **env , Char const   *varname ) ;
extern void vgPlain_env_remove_valgrind_env_stuff(Char **env ) ;
extern Char **vgPlain_env_clone(Char **env_clone ) ;
extern Int vgPlain_getgroups(Int size , UInt *list ) ;
extern Int vgPlain_ptrace(Int request , Int pid , void *addr , void *data ) ;
extern void vgPlain_do_atfork_pre(ThreadId tid ) ;
extern void vgPlain_do_atfork_parent(ThreadId tid ) ;
extern void vgPlain_do_atfork_child(ThreadId tid ) ;
extern Int vgPlain_sigprocmask(Int how , vki_sigset_t const   *set ,
                               vki_sigset_t *oldset ) ;
extern Int vgPlain_sigfillset(vki_sigset_t *set ) ;
extern Int vgPlain_sigemptyset(vki_sigset_t *set ) ;
extern Bool vgPlain_isfullsigset(vki_sigset_t const   *set ) ;
extern Bool vgPlain_isemptysigset(vki_sigset_t const   *set ) ;
extern Bool vgPlain_iseqsigset(vki_sigset_t const   *set1 ,
                               vki_sigset_t const   *set2 ) ;
extern Int vgPlain_sigaddset(vki_sigset_t *set , Int signum ) ;
extern Int vgPlain_sigdelset(vki_sigset_t *set , Int signum ) ;
extern Int vgPlain_sigismember(vki_sigset_t const   *set , Int signum ) ;
extern void vgPlain_sigaddset_from_set(vki_sigset_t *dst , vki_sigset_t *src ) ;
extern void vgPlain_sigdelset_from_set(vki_sigset_t *dst , vki_sigset_t *src ) ;
extern void vgPlain_sigintersectset(vki_sigset_t *dst , vki_sigset_t *src ) ;
extern void vgPlain_sigcomplementset(vki_sigset_t *dst , vki_sigset_t *src ) ;
extern Int vgPlain_sigaction(Int signum , vki_sigaction_toK_t const   *act ,
                             vki_sigaction_fromK_t *oldact ) ;
extern void vgPlain_convert_sigaction_fromK_to_toK(vki_sigaction_fromK_t * ,
                                                   vki_sigaction_toK_t * ) ;
extern Int vgPlain_kill(Int pid , Int signo ) ;
extern Int vgPlain_tkill(Int lwpid , Int signo ) ;
extern Int vgPlain_sigtimedwait_zero(vki_sigset_t const   * , vki_siginfo_t * ) ;
extern Addr vgPlain_get_IP(ThreadId tid ) ;
extern Addr vgPlain_get_SP(ThreadId tid ) ;
extern void vgPlain_get_shadow_regs_area(ThreadId tid , UChar *dst ,
                                         Int shadowNo , PtrdiffT offset ,
                                         SizeT size ) ;
extern void vgPlain_set_shadow_regs_area(ThreadId tid , Int shadowNo ,
                                         PtrdiffT offset , SizeT size ,
                                         UChar const   *src ) ;
extern void vgPlain_set_syscall_return_shadows(ThreadId tid , UWord s1res ,
                                               UWord s2res , UWord s1err ,
                                               UWord s2err ) ;
extern void vgPlain_apply_to_GP_regs(void (*f)(ThreadId tid , HChar *regname ,
                                               UWord val ) ) ;
extern void vgPlain_thread_stack_reset_iter(ThreadId *tid ) ;
extern Bool vgPlain_thread_stack_next(ThreadId *tid , Addr *stack_min ,
                                      Addr *stack_max ) ;
extern Addr vgPlain_thread_get_stack_max(ThreadId tid ) ;
extern SizeT vgPlain_thread_get_stack_size(ThreadId tid ) ;
extern Addr vgPlain_thread_get_altstack_min(ThreadId tid ) ;
extern SizeT vgPlain_thread_get_altstack_size(ThreadId tid ) ;
extern void *vgPlain_fnptr_to_fnentry(void * ) ;
extern Addr vgPlain_get_FP(ThreadId tid ) ;
extern void vgPlain_set_IP(ThreadId tid , Addr encip ) ;
extern void vgPlain_set_SP(ThreadId tid , Addr sp ) ;
extern void vgPlain_get_UnwindStartRegs(UnwindStartRegs *regs , ThreadId tid ) ;
extern Bool vgPlain_machine_get_hwcaps(void) ;
extern void vgPlain_machine_get_VexArchInfo(VexArch * , VexArchInfo * ) ;
extern UInt vgPlain_machine_x86_have_mxcsr ;
extern void *vgPlain_malloc(HChar *cc , SizeT nbytes ) ;
extern void vgPlain_free(void *p ) ;
extern void *vgPlain_calloc(HChar *cc , SizeT n , SizeT bytes_per_elem ) ;
extern void *vgPlain_realloc(HChar *cc , void *p , SizeT size ) ;
extern Char *vgPlain_strdup(HChar *cc , Char const   *s ) ;
extern SizeT vgPlain_malloc_usable_size(void *p ) ;
extern  __attribute__((__noreturn__)) void vgPlain_out_of_memory_NORETURN(HChar *who ,
                                                                          SizeT szB ) ;
extern void *vgPlain_arena_malloc(ArenaId arena , HChar *cc , SizeT nbytes ) ;
extern void vgPlain_arena_free(ArenaId arena , void *ptr ) ;
extern void *vgPlain_arena_calloc(ArenaId arena , HChar *cc , SizeT nmemb ,
                                  SizeT bytes_per_memb ) ;
extern void *vgPlain_arena_realloc(ArenaId arena , HChar *cc , void *ptr ,
                                   SizeT size ) ;
extern void *vgPlain_arena_memalign(ArenaId aid , HChar *cc , SizeT req_alignB ,
                                    SizeT req_pszB ) ;
extern Char *vgPlain_arena_strdup(ArenaId aid , HChar *cc , Char const   *s ) ;
extern SizeT vgPlain_arena_malloc_usable_size(ArenaId aid , void *payload ) ;
extern void vgPlain_mallinfo(ThreadId tid , struct vg_mallinfo *mi ) ;
extern void vgPlain_sanity_check_malloc_all(void) ;
extern void vgPlain_print_all_arena_stats(void) ;
extern void vgPlain_print_arena_cc_analysis(void) ;
extern Int vgPlain_clo_verbosity ;
extern Bool vgPlain_clo_stats ;
extern Int vgPlain_clo_vgdb_error ;
extern Bool vgPlain_clo_xml ;
extern HChar *vgPlain_clo_xml_user_comment ;
extern VexControl vgPlain_clo_vex_control ;
extern Int vgPlain_clo_backtrace_size ;
extern Bool vgPlain_clo_show_below_main ;
extern Char *vgPlain_expand_file_name(Char *option_name , Char *format ) ;
extern Bool vgPlain_clo_error_limit ;
extern Int vgPlain_clo_error_exitcode ;
extern VgVgdb vgPlain_clo_vgdb ;
extern Int vgPlain_clo_vgdb_poll ;
extern HChar *vgPlain_clo_vgdb_prefix ;
extern Bool vgPlain_clo_vgdb_shadow_registers ;
extern Bool vgPlain_clo_db_attach ;
extern Char *vgPlain_clo_db_command ;
extern Int vgPlain_clo_gen_suppressions ;
extern Int vgPlain_clo_sanity_level ;
extern Bool vgPlain_clo_demangle ;
extern Bool vgPlain_clo_trace_children ;
extern HChar *vgPlain_clo_trace_children_skip ;
extern HChar *vgPlain_clo_trace_children_skip_by_arg ;
extern Bool vgPlain_clo_child_silent_after_fork ;
extern Char *vgPlain_clo_log_fname_expanded ;
extern Char *vgPlain_clo_xml_fname_expanded ;
extern Bool vgPlain_clo_time_stamp ;
extern Int vgPlain_clo_input_fd ;
extern Int vgPlain_clo_n_suppressions ;
extern Char *vgPlain_clo_suppressions[100] ;
extern Int vgPlain_clo_n_fullpath_after ;
extern Char *vgPlain_clo_fullpath_after[100] ;
extern UChar vgPlain_clo_trace_flags ;
extern UChar vgPlain_clo_profile_flags ;
extern Int vgPlain_clo_trace_notbelow ;
extern Bool vgPlain_clo_trace_syscalls ;
extern Bool vgPlain_clo_trace_signals ;
extern Bool vgPlain_clo_trace_symtab ;
extern HChar *vgPlain_clo_trace_symtab_patt ;
extern Bool vgPlain_clo_trace_cfi ;
extern Bool vgPlain_clo_debug_dump_syms ;
extern Bool vgPlain_clo_debug_dump_line ;
extern Bool vgPlain_clo_debug_dump_frames ;
extern Bool vgPlain_clo_trace_redir ;
extern enum FairSchedType vgPlain_clo_fair_sched ;
extern Bool vgPlain_clo_trace_sched ;
extern Bool vgPlain_clo_profile_heap ;
extern Int vgPlain_clo_dump_error ;
extern Char *vgPlain_clo_sim_hints ;
extern Bool vgPlain_clo_sym_offsets ;
extern Bool vgPlain_clo_read_var_info ;
extern Char *vgPlain_clo_prefix_to_strip ;
extern Int vgPlain_clo_n_req_tsyms ;
extern HChar *vgPlain_clo_req_tsyms[100] ;
extern Bool vgPlain_clo_track_fds ;
extern Bool vgPlain_clo_run_libc_freeres ;
extern Bool vgPlain_clo_show_emwarns ;
extern Word vgPlain_clo_max_stackframe ;
extern Word vgPlain_clo_main_stacksize ;
extern Bool vgPlain_clo_wait_for_gdb ;
extern VgSmc vgPlain_clo_smc_check ;
extern HChar *vgPlain_clo_kernel_variant ;
extern Bool vgPlain_clo_dsymutil ;
extern Bool vgPlain_should_we_trace_this_child(HChar *child_exe_name ,
                                               HChar **child_argv ) ;
extern ThreadId vgPlain_alloc_ThreadState(void) ;
extern void vgPlain_exit_thread(ThreadId tid ) ;
extern void vgPlain_get_thread_out_of_syscall(ThreadId tid ) ;
extern void vgPlain_nuke_all_threads_except(ThreadId me ,
                                            VgSchedReturnCode reason ) ;
extern void vgPlain_acquire_BigLock(ThreadId tid , HChar *who ) ;
extern void vgPlain_acquire_BigLock_LL(HChar *who ) ;
extern void vgPlain_release_BigLock(ThreadId tid , ThreadStatus state ,
                                    HChar *who ) ;
extern void vgPlain_release_BigLock_LL(HChar *who ) ;
extern void vgPlain_vg_yield(void) ;
extern VgSchedReturnCode vgPlain_scheduler(ThreadId tid ) ;
extern ThreadId vgPlain_scheduler_init_phase1(void) ;
extern void vgPlain_scheduler_init_phase2(ThreadId main_tid , Addr clstack_end ,
                                          SizeT clstack_size ) ;
extern void vgPlain_disable_vgdb_poll(void) ;
extern void vgPlain_force_vgdb_poll(void) ;
extern void vgPlain_print_scheduler_stats(void) ;
extern Bool vgPlain_in_generated_code ;
extern void vgPlain_sanity_check_general(Bool force_expensive ) ;
extern void vgPlain_set_fault_catcher(void (*catcher)(Int sig , Addr addr ) ) ;
extern Int vgPlain_max_signal ;
extern void vgPlain_sigstartup_actions(void) ;
extern void vgPlain_poll_signals(ThreadId  ) ;
extern SysRes vgPlain_do_sys_sigaltstack(ThreadId tid , vki_stack_t *ss ,
                                         vki_stack_t *oss ) ;
extern SysRes vgPlain_do_sys_sigaction(Int signo ,
                                       vki_sigaction_toK_t const   *new_act ,
                                       vki_sigaction_fromK_t *old_act ) ;
extern SysRes vgPlain_do_sys_sigprocmask(ThreadId tid , Int how ,
                                         vki_sigset_t *set ,
                                         vki_sigset_t *oldset ) ;
extern void vgPlain_clear_out_queued_signals(ThreadId tid ,
                                             vki_sigset_t *saved_mask ) ;
extern void vgPlain_kill_self(Int sigNo ) ;
extern void vgPlain_synth_fault(ThreadId tid ) ;
extern void vgPlain_synth_fault_mapping(ThreadId tid , Addr addr ) ;
extern void vgPlain_synth_fault_perms(ThreadId tid , Addr addr ) ;
extern void vgPlain_synth_sigill(ThreadId tid , Addr addr ) ;
extern void vgPlain_synth_sigtrap(ThreadId tid ) ;
extern void vgPlain_synth_sigbus(ThreadId tid ) ;
extern Bool vgPlain_extend_stack(Addr addr , UInt maxsize ) ;
extern void vgPlain_set_default_handler(Int sig ) ;
extern UInt vgPlain_get_StackTrace(ThreadId tid , StackTrace ips , UInt n_ips ,
                                   StackTrace sps , StackTrace fps ,
                                   Word first_ip_delta ) ;
extern void vgPlain_apply_StackTrace(void (*action)(UInt n , Addr ip ,
                                                    void *opaque ) ,
                                     void *opaque , StackTrace ips , UInt n_ips ) ;
extern void vgPlain_pp_StackTrace(StackTrace ips , UInt n_ips ) ;
extern void vgPlain_get_and_pp_StackTrace(ThreadId tid , UInt n_ips ) ;
extern UInt vgPlain_get_StackTrace_wrk(ThreadId tid_if_known , Addr *ips ,
                                       UInt n_ips , Addr *sps , Addr *fps ,
                                       UnwindStartRegs *startRegs ,
                                       Addr fp_max_orig ) ;
extern SysRes vgPlain_do_syscall(UWord sysno , UWord  , UWord  , UWord  ,
                                 UWord  , UWord  , UWord  , UWord  , UWord  ) ;
extern SysRes vgPlain_mk_SysRes_x86_linux(Int val ) ;
extern SysRes vgPlain_mk_SysRes_amd64_linux(Long val ) ;
extern SysRes vgPlain_mk_SysRes_ppc32_linux(UInt val , UInt cr0so ) ;
extern SysRes vgPlain_mk_SysRes_ppc64_linux(ULong val , ULong cr0so ) ;
extern SysRes vgPlain_mk_SysRes_arm_linux(Int val ) ;
extern SysRes vgPlain_mk_SysRes_x86_darwin(UChar scclass , Bool isErr ,
                                           UInt wHI , UInt wLO ) ;
extern SysRes vgPlain_mk_SysRes_amd64_darwin(UChar scclass , Bool isErr ,
                                             ULong wHI , ULong wLO ) ;
extern SysRes vgPlain_mk_SysRes_s390x_linux(Long val ) ;
extern SysRes vgPlain_mk_SysRes_Error(UWord val ) ;
extern SysRes vgPlain_mk_SysRes_Success(UWord val ) ;
extern HChar const   *vgPlain_strerror(UWord errnum ) ;
extern void vgPlain_main_thread_wrapper_NORETURN(ThreadId tid ) ;
extern void vgPlain_client_syscall(ThreadId tid , UInt trc ) ;
extern void vgPlain_post_syscall(ThreadId tid ) ;
extern void vgPlain_clear_syscallInfo(Int tid ) ;
extern void vgPlain_fixup_guest_state_after_syscall_interrupted(ThreadId tid ,
                                                                Addr ip ,
                                                                SysRes sysret ,
                                                                Bool restart ) ;
void vgPlain_reap_threads(ThreadId self ) ;
extern void vgPlain_cleanup_thread(ThreadArchState * ) ;
void vgPlain_init_preopened_fds(void) ;
void vgPlain_show_open_fds(void) ;
extern void (*vgPlain_address_of_m_main_shutdown_actions_NORETURN)(ThreadId  ,
                                                                   VgSchedReturnCode  ) ;
extern void (*vgPlain_tl_pre_clo_init)(void) ;
extern void vgPlain_basic_tool_funcs(void (*post_clo_init)(void) ,
                                     IRSB *(*instrument)(VgCallbackClosure *closure ,
                                                         IRSB *sb_in ,
                                                         VexGuestLayout *layout ,
                                                         VexGuestExtents *vge ,
                                                         IRType gWordTy ,
                                                         IRType hWordTy ) ,
                                     void (*fini)(Int  ) ) ;
extern void vgPlain_details_name(Char *name ) ;
extern void vgPlain_details_version(Char *version ) ;
extern void vgPlain_details_description(Char *description ) ;
extern void vgPlain_details_copyright_author(Char *copyright_author ) ;
extern void vgPlain_details_avg_translation_sizeB(UInt size ) ;
extern void vgPlain_details_bug_reports_to(Char *bug_reports_to ) ;
extern void vgPlain_needs_libc_freeres(void) ;
extern void vgPlain_needs_core_errors(void) ;
extern void vgPlain_needs_tool_errors(Bool (*eq_Error)(VgRes res , Error *e1 ,
                                                       Error *e2 ) ,
                                      void (*before_pp_Error)(Error *err ) ,
                                      void (*pp_Error)(Error *err ) ,
                                      Bool show_ThreadIDs_for_errors ,
                                      UInt (*update_extra)(Error *err ) ,
                                      Bool (*recognised_suppression)(Char *name ,
                                                                     Supp *su ) ,
                                      Bool (*read_extra_suppression_info)(Int fd ,
                                                                          Char **bufpp ,
                                                                          SizeT *nBufp ,
                                                                          Supp *su ) ,
                                      Bool (*error_matches_suppression)(Error *err ,
                                                                        Supp *su ) ,
                                      Char *(*get_error_name)(Error *err ) ,
                                      Bool (*print_extra_suppression_info)(Error *err ,
                                                                           Char *buf ,
                                                                           Int nBuf ) ) ;
extern void vgPlain_needs_superblock_discards(void (*discard_superblock_info)(Addr64 orig_addr ,
                                                                              VexGuestExtents extents ) ) ;
extern void vgPlain_needs_command_line_options(Bool (*process_cmd_line_option)(Char *argv ) ,
                                               void (*print_usage)(void) ,
                                               void (*print_debug_usage)(void) ) ;
extern void vgPlain_needs_client_requests(Bool (*handle_client_request)(ThreadId tid ,
                                                                        UWord *arg_block ,
                                                                        UWord *ret ) ) ;
extern void vgPlain_needs_syscall_wrapper(void (*pre_syscall)(ThreadId tid ,
                                                              UInt syscallno ,
                                                              UWord *args ,
                                                              UInt nArgs ) ,
                                          void (*post_syscall)(ThreadId tid ,
                                                               UInt syscallno ,
                                                               UWord *args ,
                                                               UInt nArgs ,
                                                               SysRes res ) ) ;
extern void vgPlain_needs_sanity_checks(Bool (*cheap_sanity_check)(void) ,
                                        Bool (*expensive_sanity_check)(void) ) ;
extern void vgPlain_needs_var_info(void) ;
extern void vgPlain_needs_malloc_replacement(void *(*pmalloc)(ThreadId tid ,
                                                              SizeT n ) ,
                                             void *(*p__builtin_new)(ThreadId tid ,
                                                                     SizeT n ) ,
                                             void *(*p__builtin_vec_new)(ThreadId tid ,
                                                                         SizeT n ) ,
                                             void *(*pmemalign)(ThreadId tid ,
                                                                SizeT align ,
                                                                SizeT n ) ,
                                             void *(*pcalloc)(ThreadId tid ,
                                                              SizeT nmemb ,
                                                              SizeT size1 ) ,
                                             void (*pfree)(ThreadId tid ,
                                                           void *p ) ,
                                             void (*p__builtin_delete)(ThreadId tid ,
                                                                       void *p ) ,
                                             void (*p__builtin_vec_delete)(ThreadId tid ,
                                                                           void *p ) ,
                                             void *(*prealloc)(ThreadId tid ,
                                                               void *p ,
                                                               SizeT new_size ) ,
                                             SizeT (*pmalloc_usable_size)(ThreadId tid ,
                                                                          void *p ) ,
                                             SizeT client_malloc_redzone_szB ) ;
extern void vgPlain_needs_xml_output(void) ;
extern void vgPlain_needs_final_IR_tidy_pass(IRSB *(*final_tidy)(IRSB * ) ) ;
extern void vgPlain_track_new_mem_startup(void (*f)(Addr a , SizeT len ,
                                                    Bool rr , Bool ww ,
                                                    Bool xx , ULong di_handle ) ) ;
extern void vgPlain_track_new_mem_stack_signal(void (*f)(Addr a , SizeT len ,
                                                         ThreadId tid ) ) ;
extern void vgPlain_track_new_mem_brk(void (*f)(Addr a , SizeT len ,
                                                ThreadId tid ) ) ;
extern void vgPlain_track_new_mem_mmap(void (*f)(Addr a , SizeT len , Bool rr ,
                                                 Bool ww , Bool xx ,
                                                 ULong di_handle ) ) ;
extern void vgPlain_track_copy_mem_remap(void (*f)(Addr from , Addr to ,
                                                   SizeT len ) ) ;
extern void vgPlain_track_change_mem_mprotect(void (*f)(Addr a , SizeT len ,
                                                        Bool rr , Bool ww ,
                                                        Bool xx ) ) ;
extern void vgPlain_track_die_mem_stack_signal(void (*f)(Addr a , SizeT len ) ) ;
extern void vgPlain_track_die_mem_brk(void (*f)(Addr a , SizeT len ) ) ;
extern void vgPlain_track_die_mem_munmap(void (*f)(Addr a , SizeT len ) ) ;
extern void vgPlain_track_new_mem_stack_4_w_ECU(void ( __attribute__((__regparm__(2))) (*f))(Addr new_ESP ,
                                                                                             UInt ecu ) ) ;
extern void vgPlain_track_new_mem_stack_8_w_ECU(void ( __attribute__((__regparm__(2))) (*f))(Addr new_ESP ,
                                                                                             UInt ecu ) ) ;
extern void vgPlain_track_new_mem_stack_12_w_ECU(void ( __attribute__((__regparm__(2))) (*f))(Addr new_ESP ,
                                                                                              UInt ecu ) ) ;
extern void vgPlain_track_new_mem_stack_16_w_ECU(void ( __attribute__((__regparm__(2))) (*f))(Addr new_ESP ,
                                                                                              UInt ecu ) ) ;
extern void vgPlain_track_new_mem_stack_32_w_ECU(void ( __attribute__((__regparm__(2))) (*f))(Addr new_ESP ,
                                                                                              UInt ecu ) ) ;
extern void vgPlain_track_new_mem_stack_112_w_ECU(void ( __attribute__((__regparm__(2))) (*f))(Addr new_ESP ,
                                                                                               UInt ecu ) ) ;
extern void vgPlain_track_new_mem_stack_128_w_ECU(void ( __attribute__((__regparm__(2))) (*f))(Addr new_ESP ,
                                                                                               UInt ecu ) ) ;
extern void vgPlain_track_new_mem_stack_144_w_ECU(void ( __attribute__((__regparm__(2))) (*f))(Addr new_ESP ,
                                                                                               UInt ecu ) ) ;
extern void vgPlain_track_new_mem_stack_160_w_ECU(void ( __attribute__((__regparm__(2))) (*f))(Addr new_ESP ,
                                                                                               UInt ecu ) ) ;
extern void vgPlain_track_new_mem_stack_w_ECU(void (*f)(Addr a , SizeT len ,
                                                        UInt ecu ) ) ;
extern void vgPlain_track_new_mem_stack_4(void ( __attribute__((__regparm__(1))) (*f))(Addr new_ESP ) ) ;
extern void vgPlain_track_new_mem_stack_8(void ( __attribute__((__regparm__(1))) (*f))(Addr new_ESP ) ) ;
extern void vgPlain_track_new_mem_stack_12(void ( __attribute__((__regparm__(1))) (*f))(Addr new_ESP ) ) ;
extern void vgPlain_track_new_mem_stack_16(void ( __attribute__((__regparm__(1))) (*f))(Addr new_ESP ) ) ;
extern void vgPlain_track_new_mem_stack_32(void ( __attribute__((__regparm__(1))) (*f))(Addr new_ESP ) ) ;
extern void vgPlain_track_new_mem_stack_112(void ( __attribute__((__regparm__(1))) (*f))(Addr new_ESP ) ) ;
extern void vgPlain_track_new_mem_stack_128(void ( __attribute__((__regparm__(1))) (*f))(Addr new_ESP ) ) ;
extern void vgPlain_track_new_mem_stack_144(void ( __attribute__((__regparm__(1))) (*f))(Addr new_ESP ) ) ;
extern void vgPlain_track_new_mem_stack_160(void ( __attribute__((__regparm__(1))) (*f))(Addr new_ESP ) ) ;
extern void vgPlain_track_new_mem_stack(void (*f)(Addr a , SizeT len ) ) ;
extern void vgPlain_track_die_mem_stack_4(void ( __attribute__((__regparm__(1))) (*f))(Addr die_ESP ) ) ;
extern void vgPlain_track_die_mem_stack_8(void ( __attribute__((__regparm__(1))) (*f))(Addr die_ESP ) ) ;
extern void vgPlain_track_die_mem_stack_12(void ( __attribute__((__regparm__(1))) (*f))(Addr die_ESP ) ) ;
extern void vgPlain_track_die_mem_stack_16(void ( __attribute__((__regparm__(1))) (*f))(Addr die_ESP ) ) ;
extern void vgPlain_track_die_mem_stack_32(void ( __attribute__((__regparm__(1))) (*f))(Addr die_ESP ) ) ;
extern void vgPlain_track_die_mem_stack_112(void ( __attribute__((__regparm__(1))) (*f))(Addr die_ESP ) ) ;
extern void vgPlain_track_die_mem_stack_128(void ( __attribute__((__regparm__(1))) (*f))(Addr die_ESP ) ) ;
extern void vgPlain_track_die_mem_stack_144(void ( __attribute__((__regparm__(1))) (*f))(Addr die_ESP ) ) ;
extern void vgPlain_track_die_mem_stack_160(void ( __attribute__((__regparm__(1))) (*f))(Addr die_ESP ) ) ;
extern void vgPlain_track_die_mem_stack(void (*f)(Addr a , SizeT len ) ) ;
extern void vgPlain_track_ban_mem_stack(void (*f)(Addr a , SizeT len ) ) ;
extern void vgPlain_track_pre_mem_read(void (*f)(CorePart part , ThreadId tid ,
                                                 Char *s , Addr a , SizeT size ) ) ;
extern void vgPlain_track_pre_mem_read_asciiz(void (*f)(CorePart part ,
                                                        ThreadId tid , Char *s ,
                                                        Addr a ) ) ;
extern void vgPlain_track_pre_mem_write(void (*f)(CorePart part , ThreadId tid ,
                                                  Char *s , Addr a , SizeT size ) ) ;
extern void vgPlain_track_post_mem_write(void (*f)(CorePart part ,
                                                   ThreadId tid , Addr a ,
                                                   SizeT size ) ) ;
extern void vgPlain_track_pre_reg_read(void (*f)(CorePart part , ThreadId tid ,
                                                 Char *s ,
                                                 PtrdiffT guest_state_offset ,
                                                 SizeT size ) ) ;
extern void vgPlain_track_post_reg_write(void (*f)(CorePart part ,
                                                   ThreadId tid ,
                                                   PtrdiffT guest_state_offset ,
                                                   SizeT size ) ) ;
extern void vgPlain_track_post_reg_write_clientcall_return(void (*f)(ThreadId tid ,
                                                                     PtrdiffT guest_state_offset ,
                                                                     SizeT size ,
                                                                     Addr f ) ) ;
extern void vgPlain_track_start_client_code(void (*f)(ThreadId tid ,
                                                      ULong blocks_dispatched ) ) ;
extern void vgPlain_track_stop_client_code(void (*f)(ThreadId tid ,
                                                     ULong blocks_dispatched ) ) ;
extern void vgPlain_track_pre_thread_ll_create(void (*f)(ThreadId tid ,
                                                         ThreadId child ) ) ;
extern void vgPlain_track_pre_thread_first_insn(void (*f)(ThreadId tid ) ) ;
extern void vgPlain_track_pre_thread_ll_exit(void (*f)(ThreadId tid ) ) ;
extern void vgPlain_track_pre_deliver_signal(void (*f)(ThreadId tid ,
                                                       Int sigNo ,
                                                       Bool alt_stack ) ) ;
extern void vgPlain_track_post_deliver_signal(void (*f)(ThreadId tid ,
                                                        Int sigNo ) ) ;
extern VgDetails vgPlain_details ;
extern VgNeeds vgPlain_needs ;
extern VgToolInterface vgPlain_tdict ;
extern Bool vgPlain_sanity_check_needs(Char **failmsg ) ;
extern SysRes vgPlain_pre_exec_check(HChar const   *exe_name , Int *out_fd ,
                                     Bool allow_setuid ) ;
extern Int vgPlain_do_exec(HChar const   *exe , ExeInfo *info ) ;
extern SyscallTableEntry *vgModuleLocal_get_linux_syscall_entry(UInt sysno ) ;
__inline static UWord getRES(SyscallStatus *st ) 
{ 
  long tmp ;
  Bool tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  UWord tmp___3 ;

  {
  tmp = __builtin_expect((long )(! (! ((unsigned int )st->what == 1U))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"st->what == SsComplete",
                        (Char const   *)"m_syswrap/priv_types_n_macros.h", 305,
                        (Char const   *)"getRES", "");
  }
  tmp___0 = sr_isError(st->sres);
  if (tmp___0) {
    tmp___1 = 0;
  } else {
    tmp___1 = 1;
  }
  tmp___2 = __builtin_expect((long )tmp___1, 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"!sr_isError(st->sres)",
                        (Char const   *)"m_syswrap/priv_types_n_macros.h", 306,
                        (Char const   *)"getRES", "");
  }
  tmp___3 = sr_Res(st->sres);
  return (tmp___3);
}
}
__inline static UWord getRESHI(SyscallStatus *st ) 
{ 
  long tmp ;
  Bool tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  UWord tmp___3 ;

  {
  tmp = __builtin_expect((long )(! (! ((unsigned int )st->what == 1U))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"st->what == SsComplete",
                        (Char const   *)"m_syswrap/priv_types_n_macros.h", 311,
                        (Char const   *)"getRESHI", "");
  }
  tmp___0 = sr_isError(st->sres);
  if (tmp___0) {
    tmp___1 = 0;
  } else {
    tmp___1 = 1;
  }
  tmp___2 = __builtin_expect((long )tmp___1, 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"!sr_isError(st->sres)",
                        (Char const   *)"m_syswrap/priv_types_n_macros.h", 312,
                        (Char const   *)"getRESHI", "");
  }
  tmp___3 = sr_ResHI(st->sres);
  return (tmp___3);
}
}
__inline static UWord getERR(SyscallStatus *st ) 
{ 
  long tmp ;
  Bool tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  UWord tmp___3 ;

  {
  tmp = __builtin_expect((long )(! (! ((unsigned int )st->what == 1U))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"st->what == SsComplete",
                        (Char const   *)"m_syswrap/priv_types_n_macros.h", 317,
                        (Char const   *)"getERR", "");
  }
  tmp___0 = sr_isError(st->sres);
  if (tmp___0) {
    tmp___1 = 1;
  } else {
    tmp___1 = 0;
  }
  tmp___2 = __builtin_expect((long )tmp___1, 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"sr_isError(st->sres)",
                        (Char const   *)"m_syswrap/priv_types_n_macros.h", 318,
                        (Char const   *)"getERR", "");
  }
  tmp___3 = sr_Err(st->sres);
  return (tmp___3);
}
}
Bool vgModuleLocal_valid_client_addr(Addr start , SizeT size , ThreadId tid ,
                                     Char const   *syscallname ) ;
Bool vgModuleLocal_safe_to_deref(void *start , SizeT size ) ;
Bool vgModuleLocal_client_signal_OK(Int sigNo ) ;
Bool vgModuleLocal_fd_allowed(Int fd , Char const   *syscallname ,
                              ThreadId tid , Bool isNewFd ) ;
void vgModuleLocal_record_fd_open_named(ThreadId tid , Int fd ) ;
void vgModuleLocal_record_fd_open_nameless(ThreadId tid , Int fd ) ;
void vgModuleLocal_record_fd_open_with_given_name(ThreadId tid , Int fd ,
                                                  char *pathname ) ;
Bool vgModuleLocal_do_sigkill(Int pid , Int tgid ) ;
void vgModuleLocal_notify_core_and_tool_of_mmap(Addr a , SizeT len , UInt prot ,
                                                UInt flags , Int fd ,
                                                Off64T offset ) ;
void vgModuleLocal_notify_core_and_tool_of_munmap(Addr a , SizeT len ) ;
void vgModuleLocal_notify_core_and_tool_of_mprotect(Addr a , SizeT len ,
                                                    Int prot ) ;
void vgModuleLocal_buf_and_len_pre_check(ThreadId tid , Addr buf_p ,
                                         Addr buflen_p , Char *buf_s ,
                                         Char *buflen_s ) ;
void vgModuleLocal_buf_and_len_post_check(ThreadId tid , SysRes res ,
                                          Addr buf_p , Addr buflen_p , Char *s ) ;
void vgModuleLocal_PRE_unknown_ioctl(ThreadId tid , UWord request , UWord arg ) ;
void vgModuleLocal_POST_unknown_ioctl(ThreadId tid , UInt res , UWord request ,
                                      UWord arg ) ;
void vgSysWrap_generic_sys_ni_syscall_before(ThreadId tid ,
                                             SyscallArgLayout *layout ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ,
                                             UWord *flags ) ;
extern void vgSysWrap_generic_sys_ni_syscall_after(ThreadId tid ,
                                                   SyscallArgs *arrghs ,
                                                   SyscallStatus *status ) ;
void vgSysWrap_generic_sys_exit_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_exit_after(ThreadId tid ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ) ;
void vgSysWrap_generic_sys_fork_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_fork_after(ThreadId tid ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ) ;
void vgSysWrap_generic_sys_read_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_read_after(ThreadId tid , SyscallArgs *arrghs ,
                                      SyscallStatus *status ) ;
void vgSysWrap_generic_sys_write_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_write_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_open_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_open_after(ThreadId tid , SyscallArgs *arrghs ,
                                      SyscallStatus *status ) ;
void vgSysWrap_generic_sys_close_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_close_after(ThreadId tid , SyscallArgs *arrghs ,
                                       SyscallStatus *status ) ;
void vgSysWrap_generic_sys_waitpid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_waitpid_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) ;
void vgSysWrap_generic_sys_creat_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_creat_after(ThreadId tid , SyscallArgs *arrghs ,
                                       SyscallStatus *status ) ;
void vgSysWrap_generic_sys_link_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_link_after(ThreadId tid ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ) ;
void vgSysWrap_generic_sys_unlink_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_unlink_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_execve_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_execve_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_chdir_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_chdir_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_time_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_time_after(ThreadId tid , SyscallArgs *arrghs ,
                                      SyscallStatus *status ) ;
void vgSysWrap_generic_sys_mknod_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_mknod_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_chmod_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_chmod_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getpid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_getpid_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_alarm_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_alarm_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_pause_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_pause_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_access_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_access_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_kill_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_kill_after(ThreadId tid ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ) ;
void vgSysWrap_generic_sys_rename_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_rename_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_mkdir_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_mkdir_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_rmdir_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_rmdir_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_dup_before(ThreadId tid , SyscallArgLayout *layout ,
                                      SyscallArgs *arrghs ,
                                      SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_dup_after(ThreadId tid , SyscallArgs *arrghs ,
                                     SyscallStatus *status ) ;
void vgSysWrap_generic_sys_times_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_times_after(ThreadId tid , SyscallArgs *arrghs ,
                                       SyscallStatus *status ) ;
void vgSysWrap_generic_sys_setpgid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_setpgid_after(ThreadId tid ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ) ;
void vgSysWrap_generic_sys_umask_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_umask_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_dup2_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_dup2_after(ThreadId tid , SyscallArgs *arrghs ,
                                      SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getppid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_getppid_after(ThreadId tid ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getpgrp_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_getpgrp_after(ThreadId tid ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ) ;
void vgSysWrap_generic_sys_setsid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_setsid_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_munmap_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_munmap_after(ThreadId tid , SyscallArgs *arrghs ,
                                        SyscallStatus *status ) ;
void vgSysWrap_generic_sys_truncate_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_truncate_after(ThreadId tid ,
                                                 SyscallArgs *arrghs ,
                                                 SyscallStatus *status ) ;
void vgSysWrap_generic_sys_ftruncate_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
extern void vgSysWrap_generic_sys_ftruncate_after(ThreadId tid ,
                                                  SyscallArgs *arrghs ,
                                                  SyscallStatus *status ) ;
void vgSysWrap_generic_sys_fchmod_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_fchmod_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_msync_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_msync_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_readv_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_readv_after(ThreadId tid , SyscallArgs *arrghs ,
                                       SyscallStatus *status ) ;
void vgSysWrap_generic_sys_writev_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_writev_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getsid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_getsid_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_fdatasync_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
extern void vgSysWrap_generic_sys_fdatasync_after(ThreadId tid ,
                                                  SyscallArgs *arrghs ,
                                                  SyscallStatus *status ) ;
void vgSysWrap_generic_sys_mlock_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_mlock_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_munlock_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_munlock_after(ThreadId tid ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ) ;
void vgSysWrap_generic_sys_mlockall_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_mlockall_after(ThreadId tid ,
                                                 SyscallArgs *arrghs ,
                                                 SyscallStatus *status ) ;
void vgSysWrap_generic_sys_nanosleep_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
void vgSysWrap_generic_sys_nanosleep_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) ;
void vgSysWrap_generic_sys_mremap_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_mremap_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getuid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_getuid_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getgid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_getgid_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_geteuid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_geteuid_after(ThreadId tid ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getegid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_getegid_after(ThreadId tid ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getpgid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_getpgid_after(ThreadId tid ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ) ;
void vgSysWrap_generic_sys_fsync_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_fsync_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_wait4_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_wait4_after(ThreadId tid , SyscallArgs *arrghs ,
                                       SyscallStatus *status ) ;
void vgSysWrap_generic_sys_mprotect_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_mprotect_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getcwd_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_getcwd_after(ThreadId tid , SyscallArgs *arrghs ,
                                        SyscallStatus *status ) ;
void vgSysWrap_generic_sys_symlink_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_symlink_after(ThreadId tid ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getgroups_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
void vgSysWrap_generic_sys_getgroups_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) ;
void vgSysWrap_generic_sys_setgroups_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
extern void vgSysWrap_generic_sys_setgroups_after(ThreadId tid ,
                                                  SyscallArgs *arrghs ,
                                                  SyscallStatus *status ) ;
void vgSysWrap_generic_sys_chown_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_chown_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_setuid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_setuid_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_gettimeofday_before(ThreadId tid ,
                                               SyscallArgLayout *layout ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ,
                                               UWord *flags ) ;
void vgSysWrap_generic_sys_gettimeofday_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_madvise_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_madvise_after(ThreadId tid ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ) ;
void vgSysWrap_generic_sys_nice_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_nice_after(ThreadId tid ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ) ;
void vgSysWrap_generic_sys_sync_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_sync_after(ThreadId tid ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ) ;
void vgSysWrap_generic_sys_brk_before(ThreadId tid , SyscallArgLayout *layout ,
                                      SyscallArgs *arrghs ,
                                      SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_brk_after(ThreadId tid , SyscallArgs *arrghs ,
                                            SyscallStatus *status ) ;
void vgSysWrap_generic_sys_acct_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_acct_after(ThreadId tid ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ) ;
void vgSysWrap_generic_sys_chroot_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_chroot_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_readlink_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_readlink_after(ThreadId tid ,
                                                 SyscallArgs *arrghs ,
                                                 SyscallStatus *status ) ;
void vgSysWrap_generic_sys_fchdir_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_fchdir_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getdents_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_getdents_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) ;
void vgSysWrap_generic_sys_select_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_select_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_flock_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_flock_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_poll_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_poll_after(ThreadId tid , SyscallArgs *arrghs ,
                                      SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getrusage_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
void vgSysWrap_generic_sys_getrusage_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) ;
extern void vgSysWrap_generic_sys_stime_before(ThreadId tid ,
                                               SyscallArgLayout *layout ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ,
                                               UWord *flags ) ;
extern void vgSysWrap_generic_sys_stime_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) ;
void vgSysWrap_generic_sys_settimeofday_before(ThreadId tid ,
                                               SyscallArgLayout *layout ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ,
                                               UWord *flags ) ;
extern void vgSysWrap_generic_sys_settimeofday_after(ThreadId tid ,
                                                     SyscallArgs *arrghs ,
                                                     SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getpriority_before(ThreadId tid ,
                                              SyscallArgLayout *layout ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ,
                                              UWord *flags ) ;
extern void vgSysWrap_generic_sys_getpriority_after(ThreadId tid ,
                                                    SyscallArgs *arrghs ,
                                                    SyscallStatus *status ) ;
void vgSysWrap_generic_sys_setpriority_before(ThreadId tid ,
                                              SyscallArgLayout *layout ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ,
                                              UWord *flags ) ;
extern void vgSysWrap_generic_sys_setpriority_after(ThreadId tid ,
                                                    SyscallArgs *arrghs ,
                                                    SyscallStatus *status ) ;
void vgSysWrap_generic_sys_setitimer_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
void vgSysWrap_generic_sys_setitimer_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getitimer_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
void vgSysWrap_generic_sys_getitimer_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) ;
void vgSysWrap_generic_sys_setreuid_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_setreuid_after(ThreadId tid ,
                                                 SyscallArgs *arrghs ,
                                                 SyscallStatus *status ) ;
void vgSysWrap_generic_sys_setregid_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_setregid_after(ThreadId tid ,
                                                 SyscallArgs *arrghs ,
                                                 SyscallStatus *status ) ;
void vgSysWrap_generic_sys_fchown_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_fchown_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_setgid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_setgid_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_utimes_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_utimes_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
extern void vgSysWrap_generic_sys_sigaction_before(ThreadId tid ,
                                                   SyscallArgLayout *layout ,
                                                   SyscallArgs *arrghs ,
                                                   SyscallStatus *status ,
                                                   UWord *flags ) ;
extern void vgSysWrap_generic_sys_sigaction_after(ThreadId tid ,
                                                  SyscallArgs *arrghs ,
                                                  SyscallStatus *status ) ;
void vgSysWrap_generic_sys_newstat_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_newstat_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) ;
void vgSysWrap_generic_sys_newlstat_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_newlstat_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) ;
void vgSysWrap_generic_sys_newfstat_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_newfstat_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) ;
extern void vgSysWrap_generic_sys_ptrace_before(ThreadId tid ,
                                                SyscallArgLayout *layout ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ,
                                                UWord *flags ) ;
extern void vgSysWrap_generic_sys_ptrace_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_setrlimit_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
extern void vgSysWrap_generic_sys_setrlimit_after(ThreadId tid ,
                                                  SyscallArgs *arrghs ,
                                                  SyscallStatus *status ) ;
void vgSysWrap_generic_sys_old_getrlimit_before(ThreadId tid ,
                                                SyscallArgLayout *layout ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ,
                                                UWord *flags ) ;
void vgSysWrap_generic_sys_old_getrlimit_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_statfs_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_statfs_after(ThreadId tid , SyscallArgs *arrghs ,
                                        SyscallStatus *status ) ;
void vgSysWrap_generic_sys_fstatfs_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_fstatfs_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) ;
void vgSysWrap_generic_sys_iopl_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_iopl_after(ThreadId tid ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ) ;
extern void vgSysWrap_generic_sys_ipc_before(ThreadId tid ,
                                             SyscallArgLayout *layout ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ,
                                             UWord *flags ) ;
extern void vgSysWrap_generic_sys_ipc_after(ThreadId tid , SyscallArgs *arrghs ,
                                            SyscallStatus *status ) ;
void vgSysWrap_generic_sys_newuname_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_newuname_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) ;
void vgSysWrap_generic_sys_pread64_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_pread64_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) ;
void vgSysWrap_generic_sys_pwrite64_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_pwrite64_after(ThreadId tid ,
                                                 SyscallArgs *arrghs ,
                                                 SyscallStatus *status ) ;
void vgSysWrap_generic_sys_sigaltstack_before(ThreadId tid ,
                                              SyscallArgLayout *layout ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ,
                                              UWord *flags ) ;
void vgSysWrap_generic_sys_sigaltstack_after(ThreadId tid ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getpmsg_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_getpmsg_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) ;
void vgSysWrap_generic_sys_putpmsg_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_putpmsg_after(ThreadId tid ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getrlimit_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
void vgSysWrap_generic_sys_getrlimit_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) ;
void vgSysWrap_generic_sys_truncate64_before(ThreadId tid ,
                                             SyscallArgLayout *layout ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ,
                                             UWord *flags ) ;
extern void vgSysWrap_generic_sys_truncate64_after(ThreadId tid ,
                                                   SyscallArgs *arrghs ,
                                                   SyscallStatus *status ) ;
void vgSysWrap_generic_sys_ftruncate64_before(ThreadId tid ,
                                              SyscallArgLayout *layout ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ,
                                              UWord *flags ) ;
extern void vgSysWrap_generic_sys_ftruncate64_after(ThreadId tid ,
                                                    SyscallArgs *arrghs ,
                                                    SyscallStatus *status ) ;
void vgSysWrap_generic_sys_lchown_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) ;
extern void vgSysWrap_generic_sys_lchown_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) ;
void vgSysWrap_generic_sys_mincore_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_mincore_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) ;
void vgSysWrap_generic_sys_getdents64_before(ThreadId tid ,
                                             SyscallArgLayout *layout ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ,
                                             UWord *flags ) ;
void vgSysWrap_generic_sys_getdents64_after(ThreadId tid , SyscallArgs *arrghs ,
                                            SyscallStatus *status ) ;
void vgSysWrap_generic_sys_statfs64_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) ;
void vgSysWrap_generic_sys_statfs64_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) ;
void vgSysWrap_generic_sys_fstatfs64_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) ;
void vgSysWrap_generic_sys_fstatfs64_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) ;
void vgModuleLocal_generic_PRE_sys_socketpair(ThreadId tid , UWord arg0 ,
                                              UWord arg1 , UWord arg2 ,
                                              UWord arg3 ) ;
SysRes vgModuleLocal_generic_POST_sys_socketpair(ThreadId tid , SysRes res ,
                                                 UWord arg0 , UWord arg1 ,
                                                 UWord arg2 , UWord arg3 ) ;
SysRes vgModuleLocal_generic_POST_sys_socket(ThreadId tid , SysRes res ) ;
void vgModuleLocal_generic_PRE_sys_bind(ThreadId tid , UWord arg0 , UWord arg1 ,
                                        UWord arg2 ) ;
void vgModuleLocal_generic_PRE_sys_accept(ThreadId tid , UWord arg0 ,
                                          UWord arg1 , UWord arg2 ) ;
SysRes vgModuleLocal_generic_POST_sys_accept(ThreadId tid , SysRes res ,
                                             UWord arg0 , UWord arg1 ,
                                             UWord arg2 ) ;
void vgModuleLocal_generic_PRE_sys_sendto(ThreadId tid , UWord arg0 ,
                                          UWord arg1 , UWord arg2 , UWord arg3 ,
                                          UWord arg4 , UWord arg5 ) ;
void vgModuleLocal_generic_PRE_sys_send(ThreadId tid , UWord arg0 , UWord arg1 ,
                                        UWord arg2 ) ;
void vgModuleLocal_generic_PRE_sys_recvfrom(ThreadId tid , UWord arg0 ,
                                            UWord arg1 , UWord arg2 ,
                                            UWord arg3 , UWord arg4 ,
                                            UWord arg5 ) ;
void vgModuleLocal_generic_POST_sys_recvfrom(ThreadId tid , SysRes res ,
                                             UWord arg0 , UWord arg1 ,
                                             UWord arg2 , UWord arg3 ,
                                             UWord arg4 , UWord arg5 ) ;
void vgModuleLocal_generic_PRE_sys_recv(ThreadId tid , UWord arg0 , UWord arg1 ,
                                        UWord arg2 ) ;
void vgModuleLocal_generic_POST_sys_recv(ThreadId tid , UWord res , UWord arg0 ,
                                         UWord arg1 , UWord arg2 ) ;
void vgModuleLocal_generic_PRE_sys_connect(ThreadId tid , UWord arg0 ,
                                           UWord arg1 , UWord arg2 ) ;
void vgModuleLocal_generic_PRE_sys_setsockopt(ThreadId tid , UWord arg0 ,
                                              UWord arg1 , UWord arg2 ,
                                              UWord arg3 , UWord arg4 ) ;
void vgModuleLocal_generic_PRE_sys_getsockname(ThreadId tid , UWord arg0 ,
                                               UWord arg1 , UWord arg2 ) ;
void vgModuleLocal_generic_POST_sys_getsockname(ThreadId tid , SysRes res ,
                                                UWord arg0 , UWord arg1 ,
                                                UWord arg2 ) ;
void vgModuleLocal_generic_PRE_sys_getpeername(ThreadId tid , UWord arg0 ,
                                               UWord arg1 , UWord arg2 ) ;
void vgModuleLocal_generic_POST_sys_getpeername(ThreadId tid , SysRes res ,
                                                UWord arg0 , UWord arg1 ,
                                                UWord arg2 ) ;
void vgModuleLocal_generic_PRE_sys_sendmsg(ThreadId tid , Char *name ,
                                           struct vki_msghdr *msg ) ;
void vgModuleLocal_generic_PRE_sys_recvmsg(ThreadId tid , Char *name ,
                                           struct vki_msghdr *msg ) ;
void vgModuleLocal_generic_POST_sys_recvmsg(ThreadId tid , Char *name ,
                                            struct vki_msghdr *msg ,
                                            UInt length ) ;
void vgModuleLocal_generic_PRE_sys_semop(ThreadId tid , UWord arg0 ,
                                         UWord arg1 , UWord arg2 ) ;
void vgModuleLocal_generic_PRE_sys_semtimedop(ThreadId tid , UWord arg0 ,
                                              UWord arg1 , UWord arg2 ,
                                              UWord arg3 ) ;
void vgModuleLocal_generic_PRE_sys_semctl(ThreadId tid , UWord arg0 ,
                                          UWord arg1 , UWord arg2 , UWord arg3 ) ;
void vgModuleLocal_generic_POST_sys_semctl(ThreadId tid , UWord res ,
                                           UWord arg0 , UWord arg1 ,
                                           UWord arg2 , UWord arg3 ) ;
UWord vgModuleLocal_generic_PRE_sys_shmat(ThreadId tid , UWord arg0 ,
                                          UWord arg1 , UWord arg2 ) ;
void vgModuleLocal_generic_POST_sys_shmat(ThreadId tid , UWord res ,
                                          UWord arg0 , UWord arg1 , UWord arg2 ) ;
Bool vgModuleLocal_generic_PRE_sys_shmdt(ThreadId tid , UWord arg0 ) ;
void vgModuleLocal_generic_POST_sys_shmdt(ThreadId tid , UWord res , UWord arg0 ) ;
void vgModuleLocal_generic_PRE_sys_shmctl(ThreadId tid , UWord arg0 ,
                                          UWord arg1 , UWord arg2 ) ;
void vgModuleLocal_generic_POST_sys_shmctl(ThreadId tid , UWord res ,
                                           UWord arg0 , UWord arg1 , UWord arg2 ) ;
SysRes vgModuleLocal_generic_PRE_sys_mmap(ThreadId tid , UWord arg1 ,
                                          UWord arg2 , UWord arg3 , UWord arg4 ,
                                          UWord arg5 , Off64T arg6 ) ;
Bool vgModuleLocal_valid_client_addr(Addr start , SizeT size , ThreadId tid ,
                                     Char const   *syscallname ) 
{ 
  Bool ret ;

  {
  if (size == 0UL) {
    return ((Bool )1);
  } else {

  }
  ret = vgPlain_am_is_valid_for_client_or_free_or_resvn(start, size, (UInt )0);
  if (! ret) {
    if ((unsigned int )syscallname != (unsigned int )((void *)0)) {
      vgPlain_message((VgMsgKind )1,
                      "Warning: client syscall %s tried to modify addresses %#lx-%#lx\n",
                      syscallname, start, (start + size) - 1UL);
      if (vgPlain_clo_verbosity > 1) {
        vgPlain_get_and_pp_StackTrace(tid, (UInt )vgPlain_clo_backtrace_size);
      } else {

      }
    } else {

    }
  } else {

  }
  return (ret);
}
}
Bool vgModuleLocal_client_signal_OK(Int sigNo ) 
{ 
  Bool ret ;
  int tmp ;

  {
  if (sigNo >= 0) {
    if (sigNo <= vgPlain_max_signal - 1) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  ret = (Bool )tmp;
  return (ret);
}
}
Bool vgModuleLocal_safe_to_deref(void *start , SizeT size ) 
{ 
  Bool tmp ;

  {
  tmp = vgPlain_am_is_valid_for_client((Addr )start, size, (UInt )1);
  return (tmp);
}
}
static void page_align_addr_and_len(Addr *a , SizeT *len ) 
{ 
  Addr ra ;

  {
  ra = *a & ~ ((1UL << 12) - 1UL);
  *len = ((((*a + *len) + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL)) - ra;
  *a = ra;
  return;
}
}
static void notify_core_of_mmap(Addr a , SizeT len , UInt prot , UInt flags ,
                                Int fd , Off64T offset ) 
{ 
  Bool d ;
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! (0UL == (a & ((1UL << 12) - 1UL))))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_IS_PAGE_ALIGNED(a)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 151,
                        (Char const   *)"notify_core_of_mmap", "");
  }
  len = ((len + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL);
  d = vgPlain_am_notify_client_mmap(a, len, prot, flags, fd, offset);
  if (d) {
    vgPlain_discard_translations((Addr64 )a, (ULong )len,
                                 (HChar *)"notify_core_of_mmap");
  } else {

  }
  return;
}
}
static void notify_tool_of_mmap(Addr a , SizeT len , UInt prot ,
                                ULong di_handle ) 
{ 
  Bool rr ;
  Bool ww ;
  Bool xx ;
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! (0UL == (a & ((1UL << 12) - 1UL))))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_IS_PAGE_ALIGNED(a)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 167,
                        (Char const   *)"notify_tool_of_mmap", "");
  }
  len = ((len + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL);
  rr = toBool((Int )(prot & 1U));
  ww = toBool((Int )(prot & 2U));
  xx = toBool((Int )(prot & 4U));
  while (1) {
    if (vgPlain_tdict.track_new_mem_mmap) {
      (*(vgPlain_tdict.track_new_mem_mmap))(a, len, rr, ww, xx, di_handle);
    } else {

    }
    break;
  }
  return;
}
}
void vgModuleLocal_notify_core_and_tool_of_mmap(Addr a , SizeT len , UInt prot ,
                                                UInt flags , Int fd ,
                                                Off64T offset ) 
{ 


  {
  notify_core_of_mmap(a, len, prot, flags, fd, offset);
  notify_tool_of_mmap(a, len, prot, (ULong )0);
  return;
}
}
void vgModuleLocal_notify_core_and_tool_of_munmap(Addr a , SizeT len ) 
{ 
  Bool d ;

  {
  page_align_addr_and_len(& a, & len);
  d = vgPlain_am_notify_munmap(a, len);
  while (1) {
    if (vgPlain_tdict.track_die_mem_munmap) {
      (*(vgPlain_tdict.track_die_mem_munmap))(a, len);
    } else {

    }
    break;
  }
  vgPlain_di_notify_munmap(a, len);
  if (d) {
    vgPlain_discard_translations((Addr64 )a, (ULong )len,
                                 (HChar *)"ML_(notify_core_and_tool_of_munmap)");
  } else {

  }
  return;
}
}
void vgModuleLocal_notify_core_and_tool_of_mprotect(Addr a , SizeT len ,
                                                    Int prot ) 
{ 
  Bool rr ;
  Bool tmp ;
  Bool ww ;
  Bool tmp___0 ;
  Bool xx ;
  Bool tmp___1 ;
  Bool d ;

  {
  tmp = toBool(prot & 1);
  rr = tmp;
  tmp___0 = toBool(prot & 2);
  ww = tmp___0;
  tmp___1 = toBool(prot & 4);
  xx = tmp___1;
  page_align_addr_and_len(& a, & len);
  d = vgPlain_am_notify_mprotect(a, len, (UInt )prot);
  while (1) {
    if (vgPlain_tdict.track_change_mem_mprotect) {
      (*(vgPlain_tdict.track_change_mem_mprotect))(a, len, rr, ww, xx);
    } else {

    }
    break;
  }
  vgPlain_di_notify_mprotect(a, len, (UInt )prot);
  if (d) {
    vgPlain_discard_translations((Addr64 )a, (ULong )len,
                                 (HChar *)"ML_(notify_core_and_tool_of_mprotect)");
  } else {

  }
  return;
}
}
static SysRes do_mremap(Addr old_addr , SizeT old_len , Addr new_addr ,
                        SizeT new_len , UWord flags , ThreadId tid ) 
{ 
  Bool ok ;
  Bool d ;
  NSegment const   *old_seg ;
  Addr advised ;
  Bool f_fixed ;
  Bool tmp ;
  Bool f_maymove ;
  Bool tmp___0 ;
  char const   *tmp___1 ;
  char const   *tmp___2 ;
  Bool tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  long tmp___7 ;
  long tmp___8 ;
  SizeT tmp___9 ;
  SysRes tmp___10 ;
  long tmp___11 ;
  Addr needA ;
  SSizeT needL ;
  long tmp___12 ;
  SysRes tmp___13 ;
  Bool oldR ;
  Bool oldW ;
  Bool oldX ;
  int tmp___14 ;
  long tmp___15 ;
  SizeT tmp___16 ;
  SysRes tmp___17 ;
  long tmp___18 ;
  Addr needA___0 ;
  SizeT needL___0 ;
  SysRes tmp___19 ;
  long tmp___20 ;
  SysRes sres ;
  SysRes tmp___21 ;
  Bool tmp___22 ;
  SysRes tmp___23 ;
  long tmp___24 ;
  SysRes tmp___25 ;
  long tmp___26 ;
  SysRes tmp___27 ;
  SysRes tmp___28 ;

  {
  tmp = toBool((Int )(flags & 2UL));
  f_fixed = tmp;
  tmp___0 = toBool((Int )(flags & 1UL));
  f_maymove = tmp___0;
  if (flags & 4294967292UL) {
    goto eINVAL;
  } else {

  }
  if (! (0UL == (old_addr & ((1UL << 12) - 1UL)))) {
    goto eINVAL;
  } else {

  }
  old_len = ((old_len + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL);
  new_len = ((new_len + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL);
  if (new_len == 0UL) {
    goto eINVAL;
  } else {

  }
  if (old_len == 0UL) {
    goto eINVAL;
  } else {

  }
  if (old_addr + old_len < old_addr) {
    goto eINVAL;
  } else {

  }
  if ((int )f_fixed == 1) {
    if (new_addr + new_len < new_len) {
      goto eINVAL;
    } else {

    }
  } else {

  }
  if ((int )f_fixed == 1) {
    if ((int )f_maymove == 0) {
      goto eINVAL;
    } else {

    }
  } else {

  }
  tmp___3 = vgModuleLocal_valid_client_addr(old_addr, old_len, tid,
                                            (Char const   *)"mremap(old_addr)");
  if (tmp___3) {

  } else {
    goto eINVAL;
  }
  old_seg = vgPlain_am_find_nsegment(old_addr);
  if (old_addr < (Addr )old_seg->start) {
    goto eINVAL;
  } else
  if ((old_addr + old_len) - 1UL > (Addr )old_seg->end) {
    goto eINVAL;
  } else {

  }
  if ((unsigned int const   )old_seg->kind != 1U) {
    if ((unsigned int const   )old_seg->kind != 3U) {
      goto eINVAL;
    } else {

    }
  } else {

  }
  tmp___4 = __builtin_expect((long )(! (! (old_len > 0UL))), 1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"old_len > 0",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 303,
                        (Char const   *)"do_mremap", "");
  }
  tmp___5 = __builtin_expect((long )(! (! (new_len > 0UL))), 1L);
  if (tmp___5) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"new_len > 0",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 304,
                        (Char const   *)"do_mremap", "");
  }
  tmp___6 = __builtin_expect((long )(! (! (0UL == (old_len & ((1UL << 12) - 1UL))))),
                             1L);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_IS_PAGE_ALIGNED(old_len)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 305,
                        (Char const   *)"do_mremap", "");
  }
  tmp___7 = __builtin_expect((long )(! (! (0UL == (new_len & ((1UL << 12) - 1UL))))),
                             1L);
  if (tmp___7) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_IS_PAGE_ALIGNED(new_len)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 306,
                        (Char const   *)"do_mremap", "");
  }
  tmp___8 = __builtin_expect((long )(! (! (0UL == (old_addr & ((1UL << 12) - 1UL))))),
                             1L);
  if (tmp___8) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_IS_PAGE_ALIGNED(old_addr)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 307,
                        (Char const   *)"do_mremap", "");
  }
  if ((int )f_maymove == 0) {
    if (new_len < old_len) {
      goto shrink_in_place;
    } else {

    }
    if (new_len > old_len) {
      goto grow_in_place_or_fail;
    } else {

    }
    goto same_in_place;
  } else {

  }
  if ((int )f_maymove == 1) {
    if ((int )f_fixed == 0) {
      if (new_len < old_len) {
        goto shrink_in_place;
      } else {

      }
      if (new_len > old_len) {
        goto grow_in_place_or_move_anywhere_or_fail;
      } else {

      }
      goto same_in_place;
    } else {

    }
  } else {

  }
  if ((int )f_maymove == 1) {
    if ((int )f_fixed == 1) {
      if (! (0UL == (new_addr & ((1UL << 12) - 1UL)))) {
        goto eINVAL;
      } else {

      }
      if ((new_addr + new_len) - 1UL < old_addr) {

      } else
      if (new_addr > (old_addr + old_len) - 1UL) {

      } else {
        goto eINVAL;
      }
      if (new_addr == 0UL) {
        goto eINVAL;
      } else {

      }
      advised = vgPlain_am_get_advisory_client_simple(new_addr, new_len, & ok);
      if (! ok) {
        goto eNOMEM;
      } else
      if (advised != new_addr) {
        goto eNOMEM;
      } else {

      }
      ok = vgPlain_am_relocate_nooverlap_client(& d, old_addr, old_len,
                                                new_addr, new_len);
      if (ok) {
        while (1) {
          if (vgPlain_tdict.track_copy_mem_remap) {
            if (old_len < new_len) {
              tmp___9 = old_len;
            } else {
              tmp___9 = new_len;
            }
            (*(vgPlain_tdict.track_copy_mem_remap))(old_addr, new_addr, tmp___9);
          } else {

          }
          break;
        }
        if (new_len > old_len) {
          while (1) {
            if (vgPlain_tdict.track_new_mem_mmap) {
              (*(vgPlain_tdict.track_new_mem_mmap))(new_addr + old_len,
                                                    new_len - old_len,
                                                    (Bool )old_seg->hasR,
                                                    (Bool )old_seg->hasW,
                                                    (Bool )old_seg->hasX,
                                                    (ULong )0);
            } else {

            }
            break;
          }
        } else {

        }
        while (1) {
          if (vgPlain_tdict.track_die_mem_munmap) {
            (*(vgPlain_tdict.track_die_mem_munmap))(old_addr, old_len);
          } else {

          }
          break;
        }
        if (d) {
          vgPlain_discard_translations((Addr64 )old_addr, (ULong )old_len,
                                       (HChar *)"do_remap(1)");
          vgPlain_discard_translations((Addr64 )new_addr, (ULong )new_len,
                                       (HChar *)"do_remap(2)");
        } else {

        }
        tmp___10 = vgPlain_mk_SysRes_Success(new_addr);
        return (tmp___10);
      } else {

      }
      goto eNOMEM;
    } else {

    }
  } else {

  }
  tmp___11 = __builtin_expect(0L, 1L);
  if (tmp___11) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 391,
                        (Char const   *)"do_mremap", "");
  }
  grow_in_place_or_move_anywhere_or_fail: 
  needA = old_addr + old_len;
  needL = (SSizeT )(new_len - old_len);
  tmp___12 = __builtin_expect((long )(! (! (needL > 0L))), 1L);
  if (tmp___12) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"needL > 0",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 399,
                        (Char const   *)"do_mremap", "");
  }
  if (needA == 0UL) {
    goto eINVAL;
  } else {

  }
  advised = vgPlain_am_get_advisory_client_simple(needA, (SizeT )needL, & ok);
  if (ok) {
    ok = vgPlain_am_covered_by_single_free_segment(needA, (SizeT )needL);
  } else {

  }
  if (ok) {
    if (advised == needA) {
      ok = vgPlain_am_extend_map_client(& d, (NSegment *)old_seg, (SizeT )needL);
      if (ok) {
        while (1) {
          if (vgPlain_tdict.track_new_mem_mmap) {
            (*(vgPlain_tdict.track_new_mem_mmap))(needA, (SizeT )needL,
                                                  (Bool )old_seg->hasR,
                                                  (Bool )old_seg->hasW,
                                                  (Bool )old_seg->hasX,
                                                  (ULong )0);
          } else {

          }
          break;
        }
        if (d) {
          vgPlain_discard_translations((Addr64 )needA, (ULong )needL,
                                       (HChar *)"do_remap(3)");
        } else {

        }
        tmp___13 = vgPlain_mk_SysRes_Success(old_addr);
        return (tmp___13);
      } else {

      }
    } else {

    }
  } else {

  }
  advised = vgPlain_am_get_advisory_client_simple((Addr )0, new_len, & ok);
  if (ok) {
    oldR = (Bool )old_seg->hasR;
    oldW = (Bool )old_seg->hasW;
    oldX = (Bool )old_seg->hasX;
    if ((advised + new_len) - 1UL < old_addr) {
      tmp___14 = 1;
    } else
    if (advised > (old_addr + old_len) - 1UL) {
      tmp___14 = 1;
    } else {
      tmp___14 = 0;
    }
    tmp___15 = __builtin_expect((long )tmp___14, 1L);
    if (tmp___15) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"advised+new_len-1 < old_addr || advised > old_addr+old_len-1",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 430,
                          (Char const   *)"do_mremap", "");
    }
    ok = vgPlain_am_relocate_nooverlap_client(& d, old_addr, old_len, advised,
                                              new_len);
    if (ok) {
      while (1) {
        if (vgPlain_tdict.track_copy_mem_remap) {
          if (old_len < new_len) {
            tmp___16 = old_len;
          } else {
            tmp___16 = new_len;
          }
          (*(vgPlain_tdict.track_copy_mem_remap))(old_addr, advised, tmp___16);
        } else {

        }
        break;
      }
      if (new_len > old_len) {
        while (1) {
          if (vgPlain_tdict.track_new_mem_mmap) {
            (*(vgPlain_tdict.track_new_mem_mmap))(advised + old_len,
                                                  new_len - old_len, oldR, oldW,
                                                  oldX, (ULong )0);
          } else {

          }
          break;
        }
      } else {

      }
      while (1) {
        if (vgPlain_tdict.track_die_mem_munmap) {
          (*(vgPlain_tdict.track_die_mem_munmap))(old_addr, old_len);
        } else {

        }
        break;
      }
      if (d) {
        vgPlain_discard_translations((Addr64 )old_addr, (ULong )old_len,
                                     (HChar *)"do_remap(4)");
        vgPlain_discard_translations((Addr64 )advised, (ULong )new_len,
                                     (HChar *)"do_remap(5)");
      } else {

      }
      tmp___17 = vgPlain_mk_SysRes_Success(advised);
      return (tmp___17);
    } else {

    }
  } else {

  }
  goto eNOMEM;
  tmp___18 = __builtin_expect(0L, 1L);
  if (tmp___18) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 449,
                        (Char const   *)"do_mremap", "");
  }
  grow_in_place_or_fail: 
  needA___0 = old_addr + old_len;
  needL___0 = new_len - old_len;
  if (needA___0 == 0UL) {
    goto eINVAL;
  } else {

  }
  advised = vgPlain_am_get_advisory_client_simple(needA___0, needL___0, & ok);
  if (ok) {
    ok = vgPlain_am_covered_by_single_free_segment(needA___0, needL___0);
  } else {

  }
  if (! ok) {
    goto eNOMEM;
  } else
  if (advised != needA___0) {
    goto eNOMEM;
  } else {

  }
  ok = vgPlain_am_extend_map_client(& d, (NSegment *)old_seg, needL___0);
  if (! ok) {
    goto eNOMEM;
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_new_mem_mmap) {
      (*(vgPlain_tdict.track_new_mem_mmap))(needA___0, needL___0,
                                            (Bool )old_seg->hasR,
                                            (Bool )old_seg->hasW,
                                            (Bool )old_seg->hasX, (ULong )0);
    } else {

    }
    break;
  }
  if (d) {
    vgPlain_discard_translations((Addr64 )needA___0, (ULong )needL___0,
                                 (HChar *)"do_remap(6)");
  } else {

  }
  tmp___19 = vgPlain_mk_SysRes_Success(old_addr);
  return (tmp___19);
  tmp___20 = __builtin_expect(0L, 1L);
  if (tmp___20) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 476,
                        (Char const   *)"do_mremap", "");
  }
  shrink_in_place: 
  tmp___21 = vgPlain_am_munmap_client(& d, old_addr + new_len, old_len - new_len);
  sres = tmp___21;
  tmp___22 = sr_isError(sres);
  if (tmp___22) {
    return (sres);
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_die_mem_munmap) {
      (*(vgPlain_tdict.track_die_mem_munmap))(old_addr + new_len,
                                              old_len - new_len);
    } else {

    }
    break;
  }
  if (d) {
    vgPlain_discard_translations((Addr64 )(old_addr + new_len),
                                 (ULong )(old_len - new_len),
                                 (HChar *)"do_remap(7)");
  } else {

  }
  tmp___23 = vgPlain_mk_SysRes_Success(old_addr);
  return (tmp___23);
  tmp___24 = __builtin_expect(0L, 1L);
  if (tmp___24) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 489,
                        (Char const   *)"do_mremap", "");
  }
  same_in_place: 
  tmp___25 = vgPlain_mk_SysRes_Success(old_addr);
  return (tmp___25);
  tmp___26 = __builtin_expect(0L, 1L);
  if (tmp___26) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 493,
                        (Char const   *)"do_mremap", "");
  }
  eINVAL: 
  tmp___27 = vgPlain_mk_SysRes_Error((UWord )22);
  return (tmp___27);
  eNOMEM: 
  tmp___28 = vgPlain_mk_SysRes_Error((UWord )12);
  return (tmp___28);
}
}
static OpenFd *allocated_fds  =    (OpenFd *)((void *)0);
static Int fd_count  =    0;
static void record_fd_close(Int fd ) 
{ 
  OpenFd *i ;

  {
  i = allocated_fds;
  if (fd >= vgPlain_fd_hard_limit) {
    return;
  } else {

  }
  while (i) {
    if (i->fd == fd) {
      if (i->prev) {
        (i->prev)->next = i->next;
      } else {
        allocated_fds = i->next;
      }
      if (i->next) {
        (i->next)->prev = i->prev;
      } else {

      }
      if (i->pathname) {
        vgPlain_arena_free(0, (void *)i->pathname);
      } else {

      }
      vgPlain_arena_free(0, (void *)i);
      fd_count --;
      break;
    } else {

    }
    i = i->next;
  }
  return;
}
}
void vgModuleLocal_record_fd_open_with_given_name(ThreadId tid , Int fd ,
                                                  char *pathname ) 
{ 
  OpenFd *i ;
  void *tmp ;
  ExeContext *tmp___0 ;

  {
  if (fd >= vgPlain_fd_hard_limit) {
    return;
  } else {

  }
  i = allocated_fds;
  while (i) {
    if (i->fd == fd) {
      if (i->pathname) {
        vgPlain_arena_free(0, (void *)i->pathname);
      } else {

      }
      break;
    } else {

    }
    i = i->next;
  }
  if ((unsigned int )i == (unsigned int )((void *)0)) {
    tmp = vgPlain_arena_malloc(0, (HChar *)"syswrap.rfdowgn.1",
                               (SizeT )sizeof(OpenFd ));
    i = (OpenFd *)tmp;
    i->prev = (struct OpenFd *)((void *)0);
    i->next = allocated_fds;
    if (allocated_fds) {
      allocated_fds->prev = i;
    } else {

    }
    allocated_fds = i;
    fd_count ++;
  } else {

  }
  i->fd = fd;
  i->pathname = vgPlain_arena_strdup(0, (HChar *)"syswrap.rfdowgn.2",
                                     (Char const   *)pathname);
  if (tid == 4294967295U) {
    i->where = (ExeContext *)((void *)0);
  } else {
    tmp___0 = vgPlain_record_ExeContext(tid, (Word )0);
    i->where = tmp___0;
  }
  return;
}
}
static HChar buf[4096]  ;
void vgModuleLocal_record_fd_open_named(ThreadId tid , Int fd ) 
{ 
  Char *name ;
  Bool tmp ;

  {
  tmp = vgPlain_resolve_filename(fd, buf, 4096);
  if (tmp) {
    name = (Char *)(buf);
  } else {
    name = (Char *)((void *)0);
  }
  vgModuleLocal_record_fd_open_with_given_name(tid, fd, (char *)name);
  return;
}
}
void vgModuleLocal_record_fd_open_nameless(ThreadId tid , Int fd ) 
{ 


  {
  vgModuleLocal_record_fd_open_with_given_name(tid, fd, (char *)((void *)0));
  return;
}
}
static Char *unix2name(struct vki_sockaddr_un *sa , UInt len , Char *name ) 
{ 


  {
  if ((unsigned int )sa == (unsigned int )((void *)0)) {
    vgPlain_sprintf(name, "<unknown>");
  } else
  if (len == 0U) {
    vgPlain_sprintf(name, "<unknown>");
  } else
  if ((int )sa->sun_path[0] == 0) {
    vgPlain_sprintf(name, "<unknown>");
  } else {
    vgPlain_sprintf(name, "%s", sa->sun_path);
  }
  return (name);
}
}
static Char *inet2name(struct vki_sockaddr_in *sa , UInt len , Char *name ) 
{ 
  UInt addr ;
  UInt tmp ;
  UShort tmp___0 ;

  {
  if ((unsigned int )sa == (unsigned int )((void *)0)) {
    vgPlain_sprintf(name, "<unknown>");
  } else
  if (len == 0U) {
    vgPlain_sprintf(name, "<unknown>");
  } else {
    tmp = vgPlain_ntohl(sa->sin_addr.s_addr);
    addr = tmp;
    if (addr == 0U) {
      vgPlain_sprintf(name, "<unbound>");
    } else {
      tmp___0 = vgPlain_ntohs(sa->sin_port);
      vgPlain_sprintf(name, "%u.%u.%u.%u:%u", (addr >> 24) & 255U,
                      (addr >> 16) & 255U, (addr >> 8) & 255U, addr & 255U,
                      (int )tmp___0);
    }
  }
  return (name);
}
}
static char lname[32]  ;
static char pname[32]  ;
static char lname___0[256]  ;
static void getsockdetails(Int fd ) 
{ 
  union u laddr ;
  UInt llen ;
  struct vki_sockaddr_in paddr ;
  UInt plen ;
  Char *tmp ;
  Char *tmp___0 ;
  Char *tmp___1 ;
  Int tmp___2 ;
  Char *tmp___3 ;
  Int tmp___4 ;

  {
  llen = sizeof(laddr);
  vgPlain_memset((void *)(& laddr), 0, (SizeT )llen);
  tmp___4 = vgPlain_getsockname(fd, & laddr.a, (Int *)(& llen));
  if (tmp___4 != -1) {
    switch ((int )laddr.a.sa_family) {
    case 2: 
    plen = sizeof(struct vki_sockaddr_in );
    tmp___2 = vgPlain_getpeername(fd, (struct vki_sockaddr *)(& paddr),
                                  (Int *)(& plen));
    if (tmp___2 != -1) {
      tmp = inet2name(& paddr, plen, (Char *)(pname));
      tmp___0 = inet2name(& laddr.in, llen, (Char *)(lname));
      vgPlain_message((VgMsgKind )1, "Open AF_INET socket %d: %s <-> %s\n", fd,
                      tmp___0, tmp);
    } else {
      tmp___1 = inet2name(& laddr.in, llen, (Char *)(lname));
      vgPlain_message((VgMsgKind )1, "Open AF_INET socket %d: %s <-> unbound\n",
                      fd, tmp___1);
    }
    return;
    case 1: 
    tmp___3 = unix2name(& laddr.un, llen, (Char *)(lname___0));
    vgPlain_message((VgMsgKind )1, "Open AF_UNIX socket %d: %s\n", fd, tmp___3);
    return;
    default: 
    vgPlain_message((VgMsgKind )1, "Open pf-%d socket %d:\n",
                    (int )laddr.a.sa_family, fd);
    return;
    }
  } else {

  }
  vgPlain_message((VgMsgKind )1, "Open socket %d:\n", fd);
  return;
}
}
void vgPlain_show_open_fds(void) 
{ 
  OpenFd *i ;
  Int val ;
  UInt len ;
  Int tmp ;

  {
  i = allocated_fds;
  vgPlain_message((VgMsgKind )1, "FILE DESCRIPTORS: %d open at exit.\n",
                  fd_count);
  while (i) {
    if (i->pathname) {
      vgPlain_message((VgMsgKind )1, "Open file descriptor %d: %s\n", i->fd,
                      i->pathname);
    } else {
      len = sizeof(val);
      tmp = vgPlain_getsockopt(i->fd, 1, 3, (void *)(& val), (Int *)(& len));
      if (tmp == -1) {
        vgPlain_message((VgMsgKind )1, "Open file descriptor %d:\n", i->fd);
      } else {
        getsockdetails(i->fd);
      }
    }
    if (i->where) {
      vgPlain_pp_ExeContext(i->where);
      vgPlain_message((VgMsgKind )1, "\n");
    } else {
      vgPlain_message((VgMsgKind )1, "   <inherited from parent>\n");
      vgPlain_message((VgMsgKind )1, "\n");
    }
    i = i->next;
  }
  vgPlain_message((VgMsgKind )1, "\n");
  return;
}
}
static void init_preopened_fds_without_proc_self_fd(void) 
{ 
  struct vki_rlimit lim ;
  UInt count ;
  Int i ;
  Int tmp ;
  Int tmp___0 ;

  {
  tmp = vgPlain_getrlimit(7, & lim);
  if (tmp == -1) {
    count = (UInt )1024;
  } else {
    count = (UInt )lim.rlim_cur;
  }
  i = 0;
  while ((UInt )i < count) {
    tmp___0 = vgPlain_fcntl(i, 3, (Addr )0);
    if (tmp___0 != -1) {
      vgModuleLocal_record_fd_open_named((ThreadId )-1, i);
    } else {

    }
    i ++;
  }
  return;
}
}
void vgPlain_init_preopened_fds(void) 
{ 
  Int ret ;
  struct vki_dirent d ;
  SysRes f ;
  Bool tmp ;
  Char *s ;
  Int fno ;
  Long tmp___0 ;
  UWord tmp___1 ;
  Int tmp___2 ;
  Int tmp___3 ;
  UWord tmp___4 ;
  UWord tmp___5 ;
  UWord tmp___6 ;

  {
  f = vgPlain_open((Char const   *)"/proc/self/fd", 0, 0);
  tmp = sr_isError(f);
  if (tmp) {
    init_preopened_fds_without_proc_self_fd();
    return;
  } else {

  }
  while (1) {
    tmp___5 = sr_Res(f);
    ret = vgPlain_getdents((Int )tmp___5, & d, sizeof(d));
    if (ret != 0) {

    } else {
      break;
    }
    if (ret == -1) {
      goto out;
    } else {

    }
    tmp___2 = vgPlain_strcmp((Char const   *)(d.d_name), (Char const   *)".");
    if (tmp___2) {
      tmp___3 = vgPlain_strcmp((Char const   *)(d.d_name), (Char const   *)"..");
      if (tmp___3) {
        tmp___0 = vgPlain_strtoll10((Char *)(d.d_name), & s);
        fno = (Int )tmp___0;
        if ((int )*s == 0) {
          tmp___1 = sr_Res(f);
          if ((UWord )fno != tmp___1) {
            if (vgPlain_clo_track_fds) {
              vgModuleLocal_record_fd_open_named((ThreadId )-1, fno);
            } else {

            }
          } else {

          }
        } else {
          vgPlain_message((VgMsgKind )2,
                          "Warning: invalid file name in /proc/self/fd: %s\n",
                          d.d_name);
        }
      } else {

      }
    } else {

    }
    tmp___4 = sr_Res(f);
    vgPlain_lseek((Int )tmp___4, (Off64T )d.d_off, 0);
  }
  out: 
  tmp___6 = sr_Res(f);
  vgPlain_close((Int )tmp___6);
  return;
}
}
static Char *strdupcat(HChar *cc , Char const   *s1 , Char const   *s2 ,
                       ArenaId aid ) 
{ 
  UInt len ;
  SizeT tmp ;
  SizeT tmp___0 ;
  Char *result ;
  void *tmp___1 ;

  {
  tmp = vgPlain_strlen(s1);
  tmp___0 = vgPlain_strlen(s2);
  len = (UInt )((tmp + tmp___0) + 1UL);
  tmp___1 = vgPlain_arena_malloc(aid, cc, (SizeT )len);
  result = (Char *)tmp___1;
  vgPlain_strcpy(result, s1);
  vgPlain_strcat(result, s2);
  return (result);
}
}
static void pre_mem_read_sendmsg(ThreadId tid , Bool read , Char *msg ,
                                 Addr base , SizeT size ) 
{ 
  Char *outmsg ;
  Char *tmp ;

  {
  tmp = strdupcat((HChar *)"di.syswrap.pmrs.1", (Char const   *)"sendmsg",
                  (Char const   *)msg, 0);
  outmsg = tmp;
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, outmsg, base,
                                            size);
    } else {

    }
    break;
  }
  vgPlain_arena_free(0, (void *)outmsg);
  return;
}
}
static void pre_mem_write_recvmsg(ThreadId tid , Bool read , Char *msg ,
                                  Addr base , SizeT size ) 
{ 
  Char *outmsg ;
  Char *tmp ;

  {
  tmp = strdupcat((HChar *)"di.syswrap.pmwr.1", (Char const   *)"recvmsg",
                  (Char const   *)msg, 0);
  outmsg = tmp;
  if (read) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, outmsg, base,
                                              size);
      } else {

      }
      break;
    }
  } else {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid, outmsg, base,
                                               size);
      } else {

      }
      break;
    }
  }
  vgPlain_arena_free(0, (void *)outmsg);
  return;
}
}
static void post_mem_write_recvmsg(ThreadId tid , Bool read , Char *fieldName ,
                                   Addr base , SizeT size ) 
{ 


  {
  if (! read) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, base, size);
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
static void msghdr_foreachfield(ThreadId tid , Char *name ,
                                struct vki_msghdr *msg , UInt length ,
                                void (*foreach_func)(ThreadId  , Bool  ,
                                                     Char * , Addr  , SizeT  ) ) 
{ 
  Char *fieldName ;
  SizeT tmp ;
  void *tmp___0 ;
  struct vki_iovec *iov ;
  UInt i ;
  UInt iov_len ;
  __vki_kernel_size_t tmp___1 ;

  {
  if (! msg) {
    return;
  } else {

  }
  tmp = vgPlain_strlen((Char const   *)name);
  tmp___0 = vgPlain_arena_malloc(0, (HChar *)"di.syswrap.mfef", tmp + 32UL);
  fieldName = (Char *)tmp___0;
  vgPlain_sprintf(fieldName, "(%s)", name);
  (*foreach_func)(tid, (Bool )1, fieldName, (Addr )(& msg->msg_name),
                  (SizeT )sizeof(msg->msg_name));
  (*foreach_func)(tid, (Bool )1, fieldName, (Addr )(& msg->msg_namelen),
                  (SizeT )sizeof(msg->msg_namelen));
  (*foreach_func)(tid, (Bool )1, fieldName, (Addr )(& msg->msg_iov),
                  (SizeT )sizeof(msg->msg_iov));
  (*foreach_func)(tid, (Bool )1, fieldName, (Addr )(& msg->msg_iovlen),
                  (SizeT )sizeof(msg->msg_iovlen));
  (*foreach_func)(tid, (Bool )1, fieldName, (Addr )(& msg->msg_control),
                  (SizeT )sizeof(msg->msg_control));
  (*foreach_func)(tid, (Bool )1, fieldName, (Addr )(& msg->msg_controllen),
                  (SizeT )sizeof(msg->msg_controllen));
  (*foreach_func)(tid, (Bool )0, fieldName, (Addr )(& msg->msg_flags),
                  (SizeT )sizeof(msg->msg_flags));
  if (msg->msg_name) {
    vgPlain_sprintf(fieldName, "(%s.msg_name)", name);
    (*foreach_func)(tid, (Bool )0, fieldName, (Addr )msg->msg_name,
                    (SizeT )msg->msg_namelen);
  } else {

  }
  if (msg->msg_iov) {
    iov = msg->msg_iov;
    vgPlain_sprintf(fieldName, "(%s.msg_iov)", name);
    (*foreach_func)(tid, (Bool )1, fieldName, (Addr )iov,
                    (SizeT )(msg->msg_iovlen * sizeof(struct vki_iovec )));
    i = (UInt )0;
    while (i < msg->msg_iovlen) {
      if (iov->iov_len <= length) {
        tmp___1 = iov->iov_len;
      } else {
        tmp___1 = length;
      }
      iov_len = tmp___1;
      vgPlain_sprintf(fieldName, "(%s.msg_iov[%u])", name, i);
      (*foreach_func)(tid, (Bool )0, fieldName, (Addr )iov->iov_base,
                      (SizeT )iov_len);
      length -= iov_len;
      i ++;
      iov ++;
    }
  } else {

  }
  if (msg->msg_control) {
    vgPlain_sprintf(fieldName, "(%s.msg_control)", name);
    (*foreach_func)(tid, (Bool )0, fieldName, (Addr )msg->msg_control,
                    (SizeT )msg->msg_controllen);
  } else {

  }
  vgPlain_arena_free(0, (void *)fieldName);
  return;
}
}
static void check_cmsg_for_fds(ThreadId tid , struct vki_msghdr *msg ) 
{ 
  struct vki_cmsghdr *cm ;
  struct vki_cmsghdr *tmp ;
  Int *fds ;
  Int fdc ;
  Int i ;

  {
  if (msg->msg_controllen >= sizeof(struct vki_cmsghdr )) {
    tmp = (struct vki_cmsghdr *)msg->msg_control;
  } else {
    tmp = (struct vki_cmsghdr *)((void *)0);
  }
  cm = tmp;
  while (cm) {
    if (cm->cmsg_level == 1) {
      if (cm->cmsg_type == 1) {
        fds = (Int *)((void *)((char *)cm + (((sizeof(struct vki_cmsghdr ) + sizeof(long )) - 1U) & ~ (sizeof(long ) - 1U))));
        fdc = (Int )((cm->cmsg_len - (((sizeof(struct vki_cmsghdr ) + sizeof(long )) - 1U) & ~ (sizeof(long ) - 1U))) / sizeof(int ));
        i = 0;
        while (i < fdc) {
          if (vgPlain_clo_track_fds) {
            vgModuleLocal_record_fd_open_named(tid, *(fds + i));
          } else {

          }
          i ++;
        }
      } else {

      }
    } else {

    }
    cm = vki_cmsg_nxthdr(msg, cm);
  }
  return;
}
}
static void pre_mem_read_sockaddr(ThreadId tid , Char *description ,
                                  struct vki_sockaddr *sa , UInt salen ) 
{ 
  Char *outmsg ;
  struct vki_sockaddr_un *sun ;
  struct vki_sockaddr_in *sin ;
  struct vki_sockaddr_in6 *sin6 ;
  SizeT tmp ;
  void *tmp___0 ;

  {
  sun = (struct vki_sockaddr_un *)sa;
  sin = (struct vki_sockaddr_in *)sa;
  sin6 = (struct vki_sockaddr_in6 *)sa;
  if ((unsigned int )sa == (unsigned int )((void *)0)) {
    return;
  } else
  if (salen == 0U) {
    return;
  } else {

  }
  tmp = vgPlain_strlen((Char const   *)description);
  tmp___0 = vgPlain_arena_malloc(0, (HChar *)"di.syswrap.pmr_sockaddr.1",
                                 tmp + 30UL);
  outmsg = (Char *)tmp___0;
  vgPlain_sprintf(outmsg, (HChar const   *)description, "sa_family");
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, outmsg,
                                            (Addr )(& sa->sa_family),
                                            (SizeT )sizeof(vki_sa_family_t ));
    } else {

    }
    break;
  }
  switch ((int )sa->sa_family) {
  case 1: 
  vgPlain_sprintf(outmsg, (HChar const   *)description, "sun_path");
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid, outmsg,
                                                   (Addr )(sun->sun_path));
    } else {

    }
    break;
  }
  break;
  case 2: 
  vgPlain_sprintf(outmsg, (HChar const   *)description, "sin_port");
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, outmsg,
                                            (Addr )(& sin->sin_port),
                                            (SizeT )sizeof(sin->sin_port));
    } else {

    }
    break;
  }
  vgPlain_sprintf(outmsg, (HChar const   *)description, "sin_addr");
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, outmsg,
                                            (Addr )(& sin->sin_addr),
                                            (SizeT )sizeof(sin->sin_addr));
    } else {

    }
    break;
  }
  break;
  case 10: 
  vgPlain_sprintf(outmsg, (HChar const   *)description, "sin6_port");
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, outmsg,
                                            (Addr )(& sin6->sin6_port),
                                            (SizeT )sizeof(sin6->sin6_port));
    } else {

    }
    break;
  }
  vgPlain_sprintf(outmsg, (HChar const   *)description, "sin6_flowinfo");
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, outmsg,
                                            (Addr )(& sin6->sin6_flowinfo),
                                            (SizeT )sizeof(sin6->sin6_flowinfo));
    } else {

    }
    break;
  }
  vgPlain_sprintf(outmsg, (HChar const   *)description, "sin6_addr");
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, outmsg,
                                            (Addr )(& sin6->sin6_addr),
                                            (SizeT )sizeof(sin6->sin6_addr));
    } else {

    }
    break;
  }
  vgPlain_sprintf(outmsg, (HChar const   *)description, "sin6_scope_id");
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, outmsg,
                                            (Addr )(& sin6->sin6_scope_id),
                                            (SizeT )sizeof(sin6->sin6_scope_id));
    } else {

    }
    break;
  }
  break;
  default: 
  vgPlain_sprintf(outmsg, (HChar const   *)description, "");
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, outmsg,
                                            (Addr )sa, (SizeT )salen);
    } else {

    }
    break;
  }
  break;
  }
  vgPlain_arena_free(0, (void *)outmsg);
  return;
}
}
static UInt deref_UInt(ThreadId tid , Addr a , Char *s ) 
{ 
  UInt *a_p ;

  {
  a_p = (UInt *)a;
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, s, (Addr )a_p,
                                            (SizeT )sizeof(UInt ));
    } else {

    }
    break;
  }
  if ((unsigned int )a_p == (unsigned int )((void *)0)) {
    return ((UInt )0);
  } else {
    return (*a_p);
  }
}
}
void vgModuleLocal_buf_and_len_pre_check(ThreadId tid , Addr buf_p ,
                                         Addr buflen_p , Char *buf_s ,
                                         Char *buflen_s ) 
{ 
  UInt buflen_in ;
  UInt tmp ;

  {
  if (vgPlain_tdict.track_pre_mem_write) {
    tmp = deref_UInt(tid, buflen_p, buflen_s);
    buflen_in = tmp;
    if (buflen_in > 0U) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid, buf_s, buf_p,
                                             (SizeT )buflen_in);
    } else {

    }
  } else {

  }
  return;
}
}
void vgModuleLocal_buf_and_len_post_check(ThreadId tid , SysRes res ,
                                          Addr buf_p , Addr buflen_p , Char *s ) 
{ 
  UInt buflen_out ;
  UInt tmp ;
  Bool tmp___0 ;

  {
  tmp___0 = sr_isError(res);
  if (tmp___0) {

  } else
  if (vgPlain_tdict.track_post_mem_write) {
    tmp = deref_UInt(tid, buflen_p, s);
    buflen_out = tmp;
    if (buflen_out > 0U) {
      if (buf_p != (Addr )((void *)0)) {
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, buf_p,
                                                (SizeT )buflen_out);
      } else {

      }
    } else {

    }
  } else {

  }
  return;
}
}
static Addr do_brk(Addr newbrk ) 
{ 
  NSegment const   *aseg ;
  NSegment const   *rseg ;
  Addr newbrkP ;
  SizeT delta ;
  Bool ok ;
  Bool debug ;
  NSegment const   *seg ;
  NSegment const   *tmp ;
  NSegment const   *seg2 ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  long tmp___10 ;

  {
  debug = (Bool )0;
  if (debug) {
    vgPlain_printf("\ndo_brk: brk_base=%#lx brk_limit=%#lx newbrk=%#lx\n",
                   vgPlain_brk_base, vgPlain_brk_limit, newbrk);
  } else {

  }
  if (newbrk < vgPlain_brk_base) {
    goto bad;
  } else {

  }
  if (newbrk >= vgPlain_brk_base) {
    if (newbrk < vgPlain_brk_limit) {
      tmp = vgPlain_am_find_nsegment(newbrk);
      seg = tmp;
      if (seg) {
        if (seg->hasT) {
          vgPlain_discard_translations((Addr64 )newbrk,
                                       (ULong )(vgPlain_brk_limit - newbrk),
                                       (HChar *)"do_brk(shrink)");
        } else {

        }
      } else {

      }
      if (seg) {
        tmp___0 = __builtin_expect((long )(! (! (newbrk < vgPlain_brk_limit))),
                                   1L);
        if (tmp___0) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"newbrk < VG_(brk_limit)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              1080, (Char const   *)"do_brk", "");
        }
        seg2 = vgPlain_am_find_nsegment(vgPlain_brk_limit - 1UL);
        if (seg2) {
          if ((unsigned int )seg == (unsigned int )seg2) {
            if (seg->hasW) {
              vgPlain_memset((void *)newbrk, 0, vgPlain_brk_limit - newbrk);
            } else {

            }
          } else {

          }
        } else {

        }
      } else {

      }
      vgPlain_brk_limit = newbrk;
      return (newbrk);
    } else {

    }
  } else {

  }
  if (vgPlain_brk_limit > vgPlain_brk_base) {
    aseg = vgPlain_am_find_nsegment(vgPlain_brk_limit - 1UL);
  } else {
    aseg = vgPlain_am_find_nsegment(vgPlain_brk_limit);
  }
  rseg = vgPlain_am_next_nsegment((NSegment *)aseg, (Bool )1);
  tmp___1 = __builtin_expect((long )(! (! aseg)), 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"aseg",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1098,
                        (Char const   *)"do_brk", "");
  }
  tmp___2 = __builtin_expect((long )(! (! rseg)), 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"rseg",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1099,
                        (Char const   *)"do_brk", "");
  }
  tmp___3 = __builtin_expect((long )(! (! ((unsigned int const   )aseg->kind == 1U))),
                             1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"aseg->kind == SkAnonC",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1100,
                        (Char const   *)"do_brk", "");
  }
  tmp___4 = __builtin_expect((long )(! (! ((unsigned int const   )rseg->kind == 6U))),
                             1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"rseg->kind == SkResvn",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1101,
                        (Char const   *)"do_brk", "");
  }
  tmp___5 = __builtin_expect((long )(! (! (aseg->end + 1UL == rseg->start))), 1L);
  if (tmp___5) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"aseg->end+1 == rseg->start",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1102,
                        (Char const   *)"do_brk", "");
  }
  tmp___6 = __builtin_expect((long )(! (! (newbrk >= vgPlain_brk_base))), 1L);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"newbrk >= VG_(brk_base)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1104,
                        (Char const   *)"do_brk", "");
  }
  if (newbrk <= (Addr )rseg->start) {
    vgPlain_brk_limit = newbrk;
    return (newbrk);
  } else {

  }
  if (newbrk > (Addr )((rseg->end + 1UL) - (Addr const   )(1UL << 12))) {
    goto bad;
  } else {

  }
  newbrkP = ((newbrk + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL);
  if (newbrkP > (Addr )rseg->start) {
    if (newbrkP <= (Addr )((rseg->end + 1UL) - (Addr const   )(1UL << 12))) {
      tmp___7 = 1;
    } else {
      tmp___7 = 0;
    }
  } else {
    tmp___7 = 0;
  }
  tmp___8 = __builtin_expect((long )tmp___7, 1L);
  if (tmp___8) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"newbrkP > rseg->start && newbrkP <= rseg->end+1 - VKI_PAGE_SIZE",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1118,
                        (Char const   *)"do_brk", "");
  }
  delta = newbrkP - (Addr )rseg->start;
  tmp___9 = __builtin_expect((long )(! (! (delta > 0UL))), 1L);
  if (tmp___9) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"delta > 0",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1120,
                        (Char const   *)"do_brk", "");
  }
  tmp___10 = __builtin_expect((long )(! (! (0UL == (delta & ((1UL << 12) - 1UL))))),
                              1L);
  if (tmp___10) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_IS_PAGE_ALIGNED(delta)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1121,
                        (Char const   *)"do_brk", "");
  }
  ok = vgPlain_am_extend_into_adjacent_reservation_client((NSegment *)aseg,
                                                          (SSizeT )delta);
  if (! ok) {
    goto bad;
  } else {

  }
  vgPlain_brk_limit = newbrk;
  return (newbrk);
  bad: 
  return (vgPlain_brk_limit);
}
}
Bool vgModuleLocal_fd_allowed(Int fd , Char const   *syscallname ,
                              ThreadId tid , Bool isNewFd ) 
{ 
  Bool allowed ;
  Bool tmp ;

  {
  allowed = (Bool )1;
  if (fd < 0) {
    allowed = (Bool )0;
  } else
  if (fd >= vgPlain_fd_hard_limit) {
    allowed = (Bool )0;
  } else {

  }
  if (fd == vgPlain_log_output_sink.fd) {
    allowed = (Bool )0;
  } else
  if (fd == vgPlain_xml_output_sink.fd) {
    allowed = (Bool )0;
  } else {

  }
  if (isNewFd) {
    if (fd >= vgPlain_fd_soft_limit) {
      allowed = (Bool )0;
    } else {

    }
  } else {

  }
  if (! allowed) {
    tmp = vgPlain_showing_core_errors();
    if (tmp) {
      vgPlain_message((VgMsgKind )1,
                      "Warning: invalid file descriptor %d in syscall %s()\n",
                      fd, syscallname);
      if (fd == vgPlain_log_output_sink.fd) {
        if (vgPlain_log_output_sink.fd >= 0) {
          vgPlain_message((VgMsgKind )1,
                          "   Use --log-fd=<number> to select an alternative log fd.\n");
        } else {

        }
      } else {

      }
      if (fd == vgPlain_xml_output_sink.fd) {
        if (vgPlain_xml_output_sink.fd >= 0) {
          vgPlain_message((VgMsgKind )1,
                          "   Use --xml-fd=<number> to select an alternative XML output fd.\n");
        } else {

        }
      } else {

      }
      if (vgPlain_clo_verbosity > 1) {
        vgPlain_get_and_pp_StackTrace(tid, (UInt )vgPlain_clo_backtrace_size);
      } else {

      }
    } else {

    }
  } else {

  }
  return (allowed);
}
}
void vgModuleLocal_generic_PRE_sys_socketpair(ThreadId tid , UWord arg0 ,
                                              UWord arg1 , UWord arg2 ,
                                              UWord arg3 ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"socketcall.socketpair(sv)",
                                             arg3, (SizeT )(2U * sizeof(int )));
    } else {

    }
    break;
  }
  return;
}
}
SysRes vgModuleLocal_generic_POST_sys_socketpair(ThreadId tid , SysRes res ,
                                                 UWord arg0 , UWord arg1 ,
                                                 UWord arg2 , UWord arg3 ) 
{ 
  SysRes r ;
  Int fd1 ;
  Int fd2 ;
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  Bool tmp___2 ;
  Bool tmp___3 ;

  {
  r = res;
  fd1 = *((Int *)arg3 + 0);
  fd2 = *((Int *)arg3 + 1);
  tmp = sr_isError(res);
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"!sr_isError(res)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1243,
                        (Char const   *)"vgModuleLocal_generic_POST_sys_socketpair",
                        "");
  }
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arg3,
                                              (SizeT )(2U * sizeof(int )));
    } else {

    }
    break;
  }
  tmp___2 = vgModuleLocal_fd_allowed(fd1,
                                     (Char const   *)"socketcall.socketpair",
                                     tid, (Bool )1);
  if (tmp___2) {
    tmp___3 = vgModuleLocal_fd_allowed(fd2,
                                       (Char const   *)"socketcall.socketpair",
                                       tid, (Bool )1);
    if (tmp___3) {
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arg3,
                                                  (SizeT )(2U * sizeof(int )));
        } else {

        }
        break;
      }
      if (vgPlain_clo_track_fds) {
        vgModuleLocal_record_fd_open_nameless(tid, fd1);
        vgModuleLocal_record_fd_open_nameless(tid, fd2);
      } else {

      }
    } else {
      vgPlain_close(fd1);
      vgPlain_close(fd2);
      r = vgPlain_mk_SysRes_Error((UWord )24);
    }
  } else {
    vgPlain_close(fd1);
    vgPlain_close(fd2);
    r = vgPlain_mk_SysRes_Error((UWord )24);
  }
  return (r);
}
}
SysRes vgModuleLocal_generic_POST_sys_socket(ThreadId tid , SysRes res ) 
{ 
  SysRes r ;
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;
  UWord tmp___4 ;
  Bool tmp___5 ;

  {
  r = res;
  tmp = sr_isError(res);
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"!sr_isError(res)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1266,
                        (Char const   *)"vgModuleLocal_generic_POST_sys_socket",
                        "");
  }
  tmp___4 = sr_Res(res);
  tmp___5 = vgModuleLocal_fd_allowed((Int )tmp___4, (Char const   *)"socket",
                                     tid, (Bool )1);
  if (tmp___5) {
    if (vgPlain_clo_track_fds) {
      tmp___3 = sr_Res(res);
      vgModuleLocal_record_fd_open_nameless(tid, (Int )tmp___3);
    } else {

    }
  } else {
    tmp___2 = sr_Res(res);
    vgPlain_close((Int )tmp___2);
    r = vgPlain_mk_SysRes_Error((UWord )24);
  }
  return (r);
}
}
void vgModuleLocal_generic_PRE_sys_bind(ThreadId tid , UWord arg0 , UWord arg1 ,
                                        UWord arg2 ) 
{ 


  {
  pre_mem_read_sockaddr(tid, (Char *)"socketcall.bind(my_addr.%s)",
                        (struct vki_sockaddr *)arg1, (UInt )arg2);
  return;
}
}
void vgModuleLocal_generic_PRE_sys_accept(ThreadId tid , UWord arg0 ,
                                          UWord arg1 , UWord arg2 ) 
{ 
  Addr addr_p ;
  Addr addrlen_p ;

  {
  addr_p = arg1;
  addrlen_p = arg2;
  if (addr_p != (Addr )((void *)0)) {
    vgModuleLocal_buf_and_len_pre_check(tid, addr_p, addrlen_p,
                                        (Char *)"socketcall.accept(addr)",
                                        (Char *)"socketcall.accept(addrlen_in)");
  } else {

  }
  return;
}
}
SysRes vgModuleLocal_generic_POST_sys_accept(ThreadId tid , SysRes res ,
                                             UWord arg0 , UWord arg1 ,
                                             UWord arg2 ) 
{ 
  SysRes r ;
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  Addr addr_p ;
  Addr addrlen_p ;
  UWord tmp___3 ;
  UWord tmp___4 ;
  Bool tmp___5 ;

  {
  r = res;
  tmp = sr_isError(res);
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"!sr_isError(res)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1312,
                        (Char const   *)"vgModuleLocal_generic_POST_sys_accept",
                        "");
  }
  tmp___4 = sr_Res(res);
  tmp___5 = vgModuleLocal_fd_allowed((Int )tmp___4, (Char const   *)"accept",
                                     tid, (Bool )1);
  if (tmp___5) {
    addr_p = arg1;
    addrlen_p = arg2;
    if (addr_p != (Addr )((void *)0)) {
      vgModuleLocal_buf_and_len_post_check(tid, res, addr_p, addrlen_p,
                                           (Char *)"socketcall.accept(addrlen_out)");
    } else {

    }
    if (vgPlain_clo_track_fds) {
      tmp___3 = sr_Res(res);
      vgModuleLocal_record_fd_open_nameless(tid, (Int )tmp___3);
    } else {

    }
  } else {
    tmp___2 = sr_Res(res);
    vgPlain_close((Int )tmp___2);
    r = vgPlain_mk_SysRes_Error((UWord )24);
  }
  return (r);
}
}
void vgModuleLocal_generic_PRE_sys_sendto(ThreadId tid , UWord arg0 ,
                                          UWord arg1 , UWord arg2 , UWord arg3 ,
                                          UWord arg4 , UWord arg5 ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"socketcall.sendto(msg)",
                                            arg1, arg2);
    } else {

    }
    break;
  }
  pre_mem_read_sockaddr(tid, (Char *)"socketcall.sendto(to.%s)",
                        (struct vki_sockaddr *)arg4, (UInt )arg5);
  return;
}
}
void vgModuleLocal_generic_PRE_sys_send(ThreadId tid , UWord arg0 , UWord arg1 ,
                                        UWord arg2 ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"socketcall.send(msg)",
                                            arg1, arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgModuleLocal_generic_PRE_sys_recvfrom(ThreadId tid , UWord arg0 ,
                                            UWord arg1 , UWord arg2 ,
                                            UWord arg3 , UWord arg4 ,
                                            UWord arg5 ) 
{ 
  Addr buf_p ;
  Int len ;
  Addr from_p ;
  Addr fromlen_p ;

  {
  buf_p = arg1;
  len = (Int )arg2;
  from_p = arg4;
  fromlen_p = arg5;
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"socketcall.recvfrom(buf)",
                                             buf_p, (SizeT )len);
    } else {

    }
    break;
  }
  if (from_p != (Addr )((void *)0)) {
    vgModuleLocal_buf_and_len_pre_check(tid, from_p, fromlen_p,
                                        (Char *)"socketcall.recvfrom(from)",
                                        (Char *)"socketcall.recvfrom(fromlen_in)");
  } else {

  }
  return;
}
}
void vgModuleLocal_generic_POST_sys_recvfrom(ThreadId tid , SysRes res ,
                                             UWord arg0 , UWord arg1 ,
                                             UWord arg2 , UWord arg3 ,
                                             UWord arg4 , UWord arg5 ) 
{ 
  Addr buf_p ;
  Int len ;
  Addr from_p ;
  Addr fromlen_p ;
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;

  {
  buf_p = arg1;
  len = (Int )arg2;
  from_p = arg4;
  fromlen_p = arg5;
  tmp = sr_isError(res);
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"!sr_isError(res)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1391,
                        (Char const   *)"vgModuleLocal_generic_POST_sys_recvfrom",
                        "");
  }
  if (from_p != (Addr )((void *)0)) {
    vgModuleLocal_buf_and_len_post_check(tid, res, from_p, fromlen_p,
                                         (Char *)"socketcall.recvfrom(fromlen_out)");
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, buf_p,
                                              (SizeT )len);
    } else {

    }
    break;
  }
  return;
}
}
void vgModuleLocal_generic_PRE_sys_recv(ThreadId tid , UWord arg0 , UWord arg1 ,
                                        UWord arg2 ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"socketcall.recv(buf)",
                                             arg1, arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgModuleLocal_generic_POST_sys_recv(ThreadId tid , UWord res , UWord arg0 ,
                                         UWord arg1 , UWord arg2 ) 
{ 


  {
  if (res >= 0UL) {
    if (arg1 != 0UL) {
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arg1, arg2);
        } else {

        }
        break;
      }
    } else {

    }
  } else {

  }
  return;
}
}
void vgModuleLocal_generic_PRE_sys_connect(ThreadId tid , UWord arg0 ,
                                           UWord arg1 , UWord arg2 ) 
{ 


  {
  pre_mem_read_sockaddr(tid, (Char *)"socketcall.connect(serv_addr.%s)",
                        (struct vki_sockaddr *)arg1, (UInt )arg2);
  return;
}
}
void vgModuleLocal_generic_PRE_sys_setsockopt(ThreadId tid , UWord arg0 ,
                                              UWord arg1 , UWord arg2 ,
                                              UWord arg3 , UWord arg4 ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"socketcall.setsockopt(optval)",
                                            arg3, arg4);
    } else {

    }
    break;
  }
  return;
}
}
void vgModuleLocal_generic_PRE_sys_getsockname(ThreadId tid , UWord arg0 ,
                                               UWord arg1 , UWord arg2 ) 
{ 
  Addr name_p ;
  Addr namelen_p ;

  {
  name_p = arg1;
  namelen_p = arg2;
  vgModuleLocal_buf_and_len_pre_check(tid, name_p, namelen_p,
                                      (Char *)"socketcall.getsockname(name)",
                                      (Char *)"socketcall.getsockname(namelen_in)");
  return;
}
}
void vgModuleLocal_generic_POST_sys_getsockname(ThreadId tid , SysRes res ,
                                                UWord arg0 , UWord arg1 ,
                                                UWord arg2 ) 
{ 
  Addr name_p ;
  Addr namelen_p ;
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;

  {
  name_p = arg1;
  namelen_p = arg2;
  tmp = sr_isError(res);
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"!sr_isError(res)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1475,
                        (Char const   *)"vgModuleLocal_generic_POST_sys_getsockname",
                        "");
  }
  vgModuleLocal_buf_and_len_post_check(tid, res, name_p, namelen_p,
                                       (Char *)"socketcall.getsockname(namelen_out)");
  return;
}
}
void vgModuleLocal_generic_PRE_sys_getpeername(ThreadId tid , UWord arg0 ,
                                               UWord arg1 , UWord arg2 ) 
{ 
  Addr name_p ;
  Addr namelen_p ;

  {
  name_p = arg1;
  namelen_p = arg2;
  vgModuleLocal_buf_and_len_pre_check(tid, name_p, namelen_p,
                                      (Char *)"socketcall.getpeername(name)",
                                      (Char *)"socketcall.getpeername(namelen_in)");
  return;
}
}
void vgModuleLocal_generic_POST_sys_getpeername(ThreadId tid , SysRes res ,
                                                UWord arg0 , UWord arg1 ,
                                                UWord arg2 ) 
{ 
  Addr name_p ;
  Addr namelen_p ;
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;

  {
  name_p = arg1;
  namelen_p = arg2;
  tmp = sr_isError(res);
  if (tmp) {
    tmp___0 = 0;
  } else {
    tmp___0 = 1;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"!sr_isError(res)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 1502,
                        (Char const   *)"vgModuleLocal_generic_POST_sys_getpeername",
                        "");
  }
  vgModuleLocal_buf_and_len_post_check(tid, res, name_p, namelen_p,
                                       (Char *)"socketcall.getpeername(namelen_out)");
  return;
}
}
void vgModuleLocal_generic_PRE_sys_sendmsg(ThreadId tid , Char *name ,
                                           struct vki_msghdr *msg ) 
{ 


  {
  msghdr_foreachfield(tid, name, msg, (UInt )(~ 0), & pre_mem_read_sendmsg);
  return;
}
}
void vgModuleLocal_generic_PRE_sys_recvmsg(ThreadId tid , Char *name ,
                                           struct vki_msghdr *msg ) 
{ 


  {
  msghdr_foreachfield(tid, name, msg, (UInt )(~ 0), & pre_mem_write_recvmsg);
  return;
}
}
void vgModuleLocal_generic_POST_sys_recvmsg(ThreadId tid , Char *name ,
                                            struct vki_msghdr *msg ,
                                            UInt length ) 
{ 


  {
  msghdr_foreachfield(tid, name, msg, length, & post_mem_write_recvmsg);
  check_cmsg_for_fds(tid, msg);
  return;
}
}
void vgModuleLocal_generic_PRE_sys_semop(ThreadId tid , UWord arg0 ,
                                         UWord arg1 , UWord arg2 ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"semop(sops)", arg1,
                                            arg2 * (UWord )sizeof(struct vki_sembuf ));
    } else {

    }
    break;
  }
  return;
}
}
void vgModuleLocal_generic_PRE_sys_semtimedop(ThreadId tid , UWord arg0 ,
                                              UWord arg1 , UWord arg2 ,
                                              UWord arg3 ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"semtimedop(sops)", arg1,
                                            arg2 * (UWord )sizeof(struct vki_sembuf ));
    } else {

    }
    break;
  }
  if (arg3 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"semtimedop(timeout)",
                                              arg3,
                                              (SizeT )sizeof(struct vki_timespec ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
static UInt get_sem_count(Int semid ) 
{ 
  struct vki_semid_ds buf___0 ;
  union vki_semun arg ;
  SysRes res ;
  Bool tmp ;

  {
  buf___0.sem_nsems = (unsigned short)0;
  arg.buf = & buf___0;
  res = vgPlain_do_syscall((UWord )117, (UWord )3, (UWord )semid, (UWord )0,
                           (UWord )2, (UWord )(& arg), (UWord )0, (UWord )0,
                           (UWord )0);
  tmp = sr_isError(res);
  if (tmp) {
    return ((UInt )0);
  } else {

  }
  return ((UInt )buf___0.sem_nsems);
}
}
void vgModuleLocal_generic_PRE_sys_semctl(ThreadId tid , UWord arg0 ,
                                          UWord arg1 , UWord arg2 , UWord arg3 ) 
{ 
  union vki_semun arg ;
  UInt nsems ;

  {
  arg = *((union vki_semun *)(& arg3));
  switch (arg2) {
  case 275UL: 
  case 259UL: 
  case 19UL: 
  case 3UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"semctl(IPC_INFO, arg.buf)",
                                             (Addr )arg.buf,
                                             (SizeT )sizeof(struct vki_seminfo ));
    } else {

    }
    break;
  }
  break;
  case 18UL: 
  case 2UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"semctl(IPC_STAT, arg.buf)",
                                             (Addr )arg.buf,
                                             (SizeT )sizeof(struct vki_semid_ds ));
    } else {

    }
    break;
  }
  break;
  case 274UL: 
  case 258UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"semctl(IPC_STAT, arg.buf)",
                                             (Addr )arg.buf,
                                             (SizeT )sizeof(struct vki_semid64_ds ));
    } else {

    }
    break;
  }
  break;
  case 1UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"semctl(IPC_SET, arg.buf)",
                                            (Addr )arg.buf,
                                            (SizeT )sizeof(struct vki_semid_ds ));
    } else {

    }
    break;
  }
  break;
  case 257UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"semctl(IPC_SET, arg.buf)",
                                            (Addr )arg.buf,
                                            (SizeT )sizeof(struct vki_semid64_ds ));
    } else {

    }
    break;
  }
  break;
  case 269UL: 
  case 13UL: 
  nsems = get_sem_count((Int )arg0);
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"semctl(IPC_GETALL, arg.array)",
                                             (Addr )arg.array,
                                             (SizeT )(sizeof(unsigned short ) * nsems));
    } else {

    }
    break;
  }
  break;
  case 273UL: 
  case 17UL: 
  nsems = get_sem_count((Int )arg0);
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"semctl(IPC_SETALL, arg.array)",
                                            (Addr )arg.array,
                                            (SizeT )(sizeof(unsigned short ) * nsems));
    } else {

    }
    break;
  }
  break;
  }
  return;
}
}
void vgModuleLocal_generic_POST_sys_semctl(ThreadId tid , UWord res ,
                                           UWord arg0 , UWord arg1 ,
                                           UWord arg2 , UWord arg3 ) 
{ 
  union vki_semun arg ;
  UInt nsems ;

  {
  arg = *((union vki_semun *)(& arg3));
  switch (arg2) {
  case 275UL: 
  case 259UL: 
  case 19UL: 
  case 3UL: 
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, (Addr )arg.buf,
                                              (SizeT )sizeof(struct vki_seminfo ));
    } else {

    }
    break;
  }
  break;
  case 18UL: 
  case 2UL: 
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, (Addr )arg.buf,
                                              (SizeT )sizeof(struct vki_semid_ds ));
    } else {

    }
    break;
  }
  break;
  case 274UL: 
  case 258UL: 
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, (Addr )arg.buf,
                                              (SizeT )sizeof(struct vki_semid64_ds ));
    } else {

    }
    break;
  }
  break;
  case 269UL: 
  case 13UL: 
  nsems = get_sem_count((Int )arg0);
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                              (Addr )arg.array,
                                              (SizeT )(sizeof(unsigned short ) * nsems));
    } else {

    }
    break;
  }
  break;
  }
  return;
}
}
static UInt get_shm_size(Int shmid ) 
{ 
  struct vki_shmid_ds buf___0 ;
  SysRes __res ;
  SysRes tmp ;
  Bool tmp___0 ;

  {
  tmp = vgPlain_do_syscall((UWord )117, (UWord )24, (UWord )shmid, (UWord )2,
                           (UWord )0, (UWord )(& buf___0), (UWord )0, (UWord )0,
                           (UWord )0);
  __res = tmp;
  tmp___0 = sr_isError(__res);
  if (tmp___0) {
    return ((UInt )0);
  } else {

  }
  return ((UInt )buf___0.shm_segsz);
}
}
UWord vgModuleLocal_generic_PRE_sys_shmat(ThreadId tid , UWord arg0 ,
                                          UWord arg1 , UWord arg2 ) 
{ 
  UInt segmentSize ;
  UInt tmp ;
  UWord tmp___0 ;
  Bool ok ;
  long tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = get_shm_size((Int )arg0);
  segmentSize = tmp;
  if (arg1 == 0UL) {
    tmp___1 = __builtin_expect((long )(! (! (1UL << 12 >= 1UL << 12))), 1L);
    if (tmp___1) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VKI_SHMLBA >= VKI_PAGE_SIZE",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 1748,
                          (Char const   *)"vgModuleLocal_generic_PRE_sys_shmat",
                          "");
    }
    if (1UL << 12 > 1UL << 12) {
      segmentSize = (UInt )((unsigned long )segmentSize + ((1UL << 12) - (1UL << 12)));
    } else {

    }
    tmp___0 = vgPlain_am_get_advisory_client_simple((Addr )0,
                                                    (SizeT )segmentSize, & ok);
    if (ok) {
      if (1UL << 12 > 1UL << 12) {
        arg1 = ((tmp___0 + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL);
      } else {
        arg1 = tmp___0;
      }
    } else {

    }
  } else {
    tmp___2 = vgModuleLocal_valid_client_addr(arg1, (SizeT )segmentSize, tid,
                                              (Char const   *)"shmat");
    if (tmp___2) {

    } else {
      arg1 = (UWord )0;
    }
  }
  return (arg1);
}
}
void vgModuleLocal_generic_POST_sys_shmat(ThreadId tid , UWord res ,
                                          UWord arg0 , UWord arg1 , UWord arg2 ) 
{ 
  UInt segmentSize ;
  UInt tmp ;
  UInt prot ;
  Bool d ;

  {
  tmp = get_shm_size((Int )arg0);
  segmentSize = (UInt )((((unsigned long )tmp + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL));
  if (segmentSize > 0U) {
    prot = (UInt )3;
    if (arg2 & 4096UL) {
      prot &= 4294967293U;
    } else {

    }
    d = vgPlain_am_notify_client_shmat(res, (SizeT )segmentSize, prot);
    while (1) {
      if (vgPlain_tdict.track_new_mem_mmap) {
        (*(vgPlain_tdict.track_new_mem_mmap))(res, (SizeT )segmentSize,
                                              (Bool )1, (Bool )1, (Bool )0,
                                              (ULong )0);
      } else {

      }
      break;
    }
    if (d) {
      vgPlain_discard_translations((Addr64 )res,
                                   (ULong )((((unsigned long )segmentSize + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL)),
                                   (HChar *)"ML_(generic_POST_sys_shmat)");
    } else {

    }
  } else {

  }
  return;
}
}
Bool vgModuleLocal_generic_PRE_sys_shmdt(ThreadId tid , UWord arg0 ) 
{ 
  Bool tmp ;

  {
  tmp = vgModuleLocal_valid_client_addr(arg0, (SizeT )1, tid,
                                        (Char const   *)"shmdt");
  return (tmp);
}
}
void vgModuleLocal_generic_POST_sys_shmdt(ThreadId tid , UWord res , UWord arg0 ) 
{ 
  NSegment const   *s ;
  NSegment const   *tmp ;
  Addr s_start ;
  SizeT s_len ;
  Bool d ;
  long tmp___0 ;
  long tmp___1 ;

  {
  tmp = vgPlain_am_find_nsegment(arg0);
  s = tmp;
  if ((unsigned int )s != (unsigned int )((void *)0)) {
    s_start = (Addr )s->start;
    s_len = (SizeT )((s->end + 1UL) - s->start);
    tmp___0 = __builtin_expect((long )(! (! ((unsigned int const   )s->kind == 5U))),
                               1L);
    if (tmp___0) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"s->kind == SkShmC",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 1820,
                          (Char const   *)"vgModuleLocal_generic_POST_sys_shmdt",
                          "");
    }
    tmp___1 = __builtin_expect((long )(! (! (s->start == (Addr const   )arg0))),
                               1L);
    if (tmp___1) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"s->start == arg0",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 1821,
                          (Char const   *)"vgModuleLocal_generic_POST_sys_shmdt",
                          "");
    }
    d = vgPlain_am_notify_munmap(s_start, s_len);
    s = (NSegment const   *)((void *)0);
    while (1) {
      if (vgPlain_tdict.track_die_mem_munmap) {
        (*(vgPlain_tdict.track_die_mem_munmap))(s_start, s_len);
      } else {

      }
      break;
    }
    if (d) {
      vgPlain_discard_translations((Addr64 )s_start, (ULong )s_len,
                                   (HChar *)"ML_(generic_POST_sys_shmdt)");
    } else {

    }
  } else {

  }
  return;
}
}
void vgModuleLocal_generic_PRE_sys_shmctl(ThreadId tid , UWord arg0 ,
                                          UWord arg1 , UWord arg2 ) 
{ 


  {
  switch (arg1) {
  case 3UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"shmctl(IPC_INFO, buf)",
                                             arg2,
                                             (SizeT )sizeof(struct vki_shminfo ));
    } else {

    }
    break;
  }
  break;
  case 259UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"shmctl(IPC_INFO, buf)",
                                             arg2,
                                             (SizeT )sizeof(struct vki_shminfo64 ));
    } else {

    }
    break;
  }
  break;
  case 270UL: 
  case 14UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"shmctl(SHM_INFO, buf)",
                                             arg2,
                                             (SizeT )sizeof(struct vki_shm_info ));
    } else {

    }
    break;
  }
  break;
  case 13UL: 
  case 2UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"shmctl(IPC_STAT, buf)",
                                             arg2,
                                             (SizeT )sizeof(struct vki_shmid_ds ));
    } else {

    }
    break;
  }
  break;
  case 269UL: 
  case 258UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"shmctl(IPC_STAT, arg.buf)",
                                             arg2,
                                             (SizeT )sizeof(struct vki_shmid64_ds ));
    } else {

    }
    break;
  }
  break;
  case 1UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"shmctl(IPC_SET, arg.buf)",
                                            arg2,
                                            (SizeT )sizeof(struct vki_shmid_ds ));
    } else {

    }
    break;
  }
  break;
  case 257UL: 
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"shmctl(IPC_SET, arg.buf)",
                                            arg2,
                                            (SizeT )sizeof(struct vki_shmid64_ds ));
    } else {

    }
    break;
  }
  break;
  }
  return;
}
}
void vgModuleLocal_generic_POST_sys_shmctl(ThreadId tid , UWord res ,
                                           UWord arg0 , UWord arg1 , UWord arg2 ) 
{ 


  {
  switch (arg1) {
  case 3UL: 
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arg2,
                                              (SizeT )sizeof(struct vki_shminfo ));
    } else {

    }
    break;
  }
  break;
  case 259UL: 
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arg2,
                                              (SizeT )sizeof(struct vki_shminfo64 ));
    } else {

    }
    break;
  }
  break;
  case 270UL: 
  case 14UL: 
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arg2,
                                              (SizeT )sizeof(struct vki_shm_info ));
    } else {

    }
    break;
  }
  break;
  case 13UL: 
  case 2UL: 
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arg2,
                                              (SizeT )sizeof(struct vki_shmid_ds ));
    } else {

    }
    break;
  }
  break;
  case 269UL: 
  case 258UL: 
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arg2,
                                              (SizeT )sizeof(struct vki_shmid64_ds ));
    } else {

    }
    break;
  }
  break;
  }
  return;
}
}
SysRes vgModuleLocal_generic_PRE_sys_mmap(ThreadId tid , UWord arg1 ,
                                          UWord arg2 , UWord arg3 , UWord arg4 ,
                                          UWord arg5 , Off64T arg6 ) 
{ 
  Addr advised ;
  SysRes sres ;
  MapRequest mreq ;
  Bool mreq_ok ;
  SysRes tmp ;
  SysRes tmp___0 ;
  SysRes tmp___1 ;
  SysRes tmp___2 ;
  SysRes tmp___3 ;
  Bool tmp___4 ;
  ULong di_handle ;
  UWord tmp___5 ;
  UWord tmp___6 ;
  UWord tmp___7 ;
  Bool tmp___8 ;
  UWord tmp___9 ;
  int tmp___10 ;
  long tmp___11 ;
  Bool tmp___12 ;

  {
  if (arg2 == 0UL) {
    tmp = vgPlain_mk_SysRes_Error((UWord )22);
    return (tmp);
  } else {

  }
  if (! (0UL == (arg1 & ((1UL << 12) - 1UL)))) {
    tmp___0 = vgPlain_mk_SysRes_Error((UWord )22);
    return (tmp___0);
  } else {

  }
  if (! (0UL == ((Addr )arg6 & ((1UL << 12) - 1UL)))) {
    tmp___1 = vgPlain_mk_SysRes_Error((UWord )22);
    return (tmp___1);
  } else {

  }
  mreq.start = arg1;
  mreq.len = arg2;
  if (arg4 & 16UL) {
    mreq.rkind = (enum __anonenum_rkind_116 )0;
  } else
  if (arg1 != 0UL) {
    mreq.rkind = (enum __anonenum_rkind_116 )1;
  } else {
    mreq.rkind = (enum __anonenum_rkind_116 )2;
  }
  advised = vgPlain_am_get_advisory(& mreq, (Bool )1, & mreq_ok);
  if (! mreq_ok) {
    tmp___2 = vgPlain_mk_SysRes_Error((UWord )22);
    return (tmp___2);
  } else {

  }
  sres = vgPlain_am_do_mmap_NO_NOTIFY(advised, arg2, (UInt )arg3,
                                      (UInt )(arg4 | 16UL), (Int )arg5, arg6);
  if ((unsigned int )mreq.rkind == 1U) {
    tmp___4 = sr_isError(sres);
    if (tmp___4) {
      mreq.start = (Addr )0;
      mreq.len = arg2;
      mreq.rkind = (enum __anonenum_rkind_116 )2;
      advised = vgPlain_am_get_advisory(& mreq, (Bool )1, & mreq_ok);
      if (! mreq_ok) {
        tmp___3 = vgPlain_mk_SysRes_Error((UWord )22);
        return (tmp___3);
      } else {

      }
      sres = vgPlain_am_do_mmap_NO_NOTIFY(advised, arg2, (UInt )arg3,
                                          (UInt )(arg4 | 16UL), (Int )arg5, arg6);
    } else {

    }
  } else {

  }
  tmp___8 = sr_isError(sres);
  if (tmp___8) {

  } else {
    tmp___5 = sr_Res(sres);
    notify_core_of_mmap(tmp___5, arg2, (UInt )arg3, (UInt )arg4, (Int )arg5,
                        arg6);
    tmp___6 = sr_Res(sres);
    di_handle = vgPlain_di_notify_mmap(tmp___6, (Bool )0, (Int )arg5);
    tmp___7 = sr_Res(sres);
    notify_tool_of_mmap(tmp___7, arg2, (UInt )arg3, di_handle);
  }
  tmp___12 = sr_isError(sres);
  if (tmp___12) {

  } else
  if (arg4 & 16UL) {
    tmp___9 = sr_Res(sres);
    if (tmp___9 == arg1) {
      tmp___10 = 1;
    } else {
      tmp___10 = 0;
    }
    tmp___11 = __builtin_expect((long )tmp___10, 1L);
    if (tmp___11) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"sr_Res(sres) == arg1",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 2080,
                          (Char const   *)"vgModuleLocal_generic_PRE_sys_mmap",
                          "");
    }
  } else {

  }
  return (sres);
}
}
void vgSysWrap_generic_sys_exit_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  ThreadState *tst ;
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("exit( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2141,
                            (Char const   *)"vgSysWrap_generic_sys_exit_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2141,
                            (Char const   *)"vgSysWrap_generic_sys_exit_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"exit(status)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  tst = vgPlain_get_ThreadState(tid);
  tst->exitreason = (VgSchedReturnCode )1;
  tst->os_state.exitcode = (Word )arrghs->arg1;
  while (1) {
    status->what = (enum __anonenum_what_133 )1;
    status->sres = vgPlain_mk_SysRes_Success((UWord )0);
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_ni_syscall_before(ThreadId tid ,
                                             SyscallArgLayout *layout ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ,
                                             UWord *flags ) 
{ 
  Char qq_zz_buf[32] ;
  Char *tmp ;
  Word wzz ;
  int tmp___0 ;
  long tmp___1 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    tmp = vgPlain_sysnum_string(arrghs->sysno, (SizeT )32, qq_zz_buf);
    vgPlain_printf("unimplemented (by the kernel) syscall: %s! (ni_syscall)\n",
                   tmp);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  while (1) {
    wzz = (Word )38;
    if (wzz >= 0L) {
      if (wzz < 10000L) {
        tmp___0 = 1;
      } else {
        tmp___0 = 0;
      }
    } else {
      tmp___0 = 0;
    }
    tmp___1 = __builtin_expect((long )tmp___0, 1L);
    if (tmp___1) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 2155,
                          (Char const   *)"vgSysWrap_generic_sys_ni_syscall_before",
                          "");
    }
    status->what = (enum __anonenum_what_133 )1;
    status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_iopl_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_iopl ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2161,
                            (Char const   *)"vgSysWrap_generic_sys_iopl_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2161,
                            (Char const   *)"vgSysWrap_generic_sys_iopl_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"iopl(level)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_fsync_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_fsync ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2168,
                            (Char const   *)"vgSysWrap_generic_sys_fsync_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2168,
                            (Char const   *)"vgSysWrap_generic_sys_fsync_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fsync(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_fdatasync_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_fdatasync ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2175,
                            (Char const   *)"vgSysWrap_generic_sys_fdatasync_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2175,
                            (Char const   *)"vgSysWrap_generic_sys_fdatasync_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fdatasync(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_msync_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_msync ( %#lx, %llu, %ld )", arrghs->arg1,
                   (ULong )arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2183,
                            (Char const   *)"vgSysWrap_generic_sys_msync_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2183,
                            (Char const   *)"vgSysWrap_generic_sys_msync_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"msync(start)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2183,
                            (Char const   *)"vgSysWrap_generic_sys_msync_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2183,
                            (Char const   *)"vgSysWrap_generic_sys_msync_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"msync(length)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2183,
                            (Char const   *)"vgSysWrap_generic_sys_msync_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2183,
                            (Char const   *)"vgSysWrap_generic_sys_msync_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"msync(flags)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"msync(start)",
                                            arrghs->arg1, arrghs->arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_getpmsg_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  struct vki_pmsg_strbuf *ctrl ;
  struct vki_pmsg_strbuf *data ;
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Int here___2 ;
  long tmp___5 ;
  long tmp___6 ;
  Int here___3 ;
  long tmp___7 ;
  long tmp___8 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getpmsg ( %ld, %#lx, %#lx, %#lx, %#lx )", arrghs->arg1,
                   arrghs->arg2, arrghs->arg3, arrghs->arg4, arrghs->arg5);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2205,
                            (Char const   *)"vgSysWrap_generic_sys_getpmsg_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2205,
                            (Char const   *)"vgSysWrap_generic_sys_getpmsg_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getpmsg(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct strbuf *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct strbuf *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2205,
                            (Char const   *)"vgSysWrap_generic_sys_getpmsg_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2205,
                            (Char const   *)"vgSysWrap_generic_sys_getpmsg_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getpmsg(ctrl)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct strbuf *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(struct strbuf *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct strbuf *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2205,
                            (Char const   *)"vgSysWrap_generic_sys_getpmsg_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2205,
                            (Char const   *)"vgSysWrap_generic_sys_getpmsg_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getpmsg(data)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(struct strbuf *));
      break;
    }
    while (1) {
      here___2 = layout->o_arg4;
      tmp___5 = __builtin_expect((long )(! (! (sizeof(int *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2205,
                            (Char const   *)"vgSysWrap_generic_sys_getpmsg_before",
                            "");
      }
      tmp___6 = __builtin_expect((long )(! (! (here___2 >= 0))), 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2205,
                            (Char const   *)"vgSysWrap_generic_sys_getpmsg_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getpmsg(bandp)",
                                            (PtrdiffT )here___2,
                                            (SizeT )sizeof(int *));
      break;
    }
    while (1) {
      here___3 = layout->o_arg5;
      tmp___7 = __builtin_expect((long )(! (! (sizeof(int *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___7) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2205,
                            (Char const   *)"vgSysWrap_generic_sys_getpmsg_before",
                            "");
      }
      tmp___8 = __builtin_expect((long )(! (! (here___3 >= 0))), 1L);
      if (tmp___8) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2205,
                            (Char const   *)"vgSysWrap_generic_sys_getpmsg_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getpmsg(flagsp)",
                                            (PtrdiffT )here___3,
                                            (SizeT )sizeof(int *));
      break;
    }
  } else {

  }
  ctrl = (struct vki_pmsg_strbuf *)arrghs->arg2;
  data = (struct vki_pmsg_strbuf *)arrghs->arg3;
  if (ctrl) {
    if (ctrl->maxlen > 0) {
      while (1) {
        if (vgPlain_tdict.track_pre_mem_write) {
          (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                                 (Char *)"getpmsg(ctrl)",
                                                 (Addr )ctrl->buf,
                                                 (SizeT )ctrl->maxlen);
        } else {

        }
        break;
      }
    } else {

    }
  } else {

  }
  if (data) {
    if (data->maxlen > 0) {
      while (1) {
        if (vgPlain_tdict.track_pre_mem_write) {
          (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                                 (Char *)"getpmsg(data)",
                                                 (Addr )data->buf,
                                                 (SizeT )data->maxlen);
        } else {

        }
        break;
      }
    } else {

    }
  } else {

  }
  if (arrghs->arg4) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"getpmsg(bandp)",
                                               arrghs->arg4,
                                               (SizeT )sizeof(int ));
      } else {

      }
      break;
    }
  } else {

  }
  if (arrghs->arg5) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"getpmsg(flagsp)",
                                               arrghs->arg5,
                                               (SizeT )sizeof(int ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getpmsg_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) 
{ 
  struct vki_pmsg_strbuf *ctrl ;
  struct vki_pmsg_strbuf *data ;
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 2221,
                        (Char const   *)"vgSysWrap_generic_sys_getpmsg_after",
                        "");
  }
  ctrl = (struct vki_pmsg_strbuf *)arrghs->arg2;
  data = (struct vki_pmsg_strbuf *)arrghs->arg3;
  tmp___2 = getRES(status);
  if (tmp___2 == 0UL) {
    if (ctrl) {
      if (ctrl->len > 0) {
        while (1) {
          if (vgPlain_tdict.track_post_mem_write) {
            (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                    (Addr )ctrl->buf,
                                                    (SizeT )ctrl->len);
          } else {

          }
          break;
        }
      } else {

      }
    } else {

    }
  } else {

  }
  tmp___3 = getRES(status);
  if (tmp___3 == 0UL) {
    if (data) {
      if (data->len > 0) {
        while (1) {
          if (vgPlain_tdict.track_post_mem_write) {
            (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                    (Addr )data->buf,
                                                    (SizeT )data->len);
          } else {

          }
          break;
        }
      } else {

      }
    } else {

    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_putpmsg_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  struct vki_pmsg_strbuf *ctrl ;
  struct vki_pmsg_strbuf *data ;
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Int here___2 ;
  long tmp___5 ;
  long tmp___6 ;
  Int here___3 ;
  long tmp___7 ;
  long tmp___8 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_putpmsg ( %ld, %#lx, %#lx, %ld, %ld )", arrghs->arg1,
                   arrghs->arg2, arrghs->arg3, arrghs->arg4, arrghs->arg5);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2241,
                            (Char const   *)"vgSysWrap_generic_sys_putpmsg_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2241,
                            (Char const   *)"vgSysWrap_generic_sys_putpmsg_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"putpmsg(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct strbuf *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct strbuf *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2241,
                            (Char const   *)"vgSysWrap_generic_sys_putpmsg_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2241,
                            (Char const   *)"vgSysWrap_generic_sys_putpmsg_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"putpmsg(ctrl)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct strbuf *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(struct strbuf *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct strbuf *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2241,
                            (Char const   *)"vgSysWrap_generic_sys_putpmsg_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2241,
                            (Char const   *)"vgSysWrap_generic_sys_putpmsg_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"putpmsg(data)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(struct strbuf *));
      break;
    }
    while (1) {
      here___2 = layout->o_arg4;
      tmp___5 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2241,
                            (Char const   *)"vgSysWrap_generic_sys_putpmsg_before",
                            "");
      }
      tmp___6 = __builtin_expect((long )(! (! (here___2 >= 0))), 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2241,
                            (Char const   *)"vgSysWrap_generic_sys_putpmsg_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"putpmsg(band)",
                                            (PtrdiffT )here___2,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___3 = layout->o_arg5;
      tmp___7 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___7) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2241,
                            (Char const   *)"vgSysWrap_generic_sys_putpmsg_before",
                            "");
      }
      tmp___8 = __builtin_expect((long )(! (! (here___3 >= 0))), 1L);
      if (tmp___8) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2241,
                            (Char const   *)"vgSysWrap_generic_sys_putpmsg_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"putpmsg(flags)",
                                            (PtrdiffT )here___3,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  ctrl = (struct vki_pmsg_strbuf *)arrghs->arg2;
  data = (struct vki_pmsg_strbuf *)arrghs->arg3;
  if (ctrl) {
    if (ctrl->len > 0) {
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"putpmsg(ctrl)",
                                                (Addr )ctrl->buf,
                                                (SizeT )ctrl->len);
        } else {

        }
        break;
      }
    } else {

    }
  } else {

  }
  if (data) {
    if (data->len > 0) {
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"putpmsg(data)",
                                                (Addr )data->buf,
                                                (SizeT )data->len);
        } else {

        }
        break;
      }
    } else {

    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getitimer_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  struct vki_itimerval *value ;
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  struct vki_timeval *zztv ;
  struct vki_timeval *zztv___0 ;

  {
  value = (struct vki_itimerval *)arrghs->arg2;
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getitimer ( %ld, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2254,
                            (Char const   *)"vgSysWrap_generic_sys_getitimer_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2254,
                            (Char const   *)"vgSysWrap_generic_sys_getitimer_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getitimer(which)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct itimerval *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct itimerval *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2254,
                            (Char const   *)"vgSysWrap_generic_sys_getitimer_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2254,
                            (Char const   *)"vgSysWrap_generic_sys_getitimer_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getitimer(value)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct itimerval *));
      break;
    }
  } else {

  }
  while (1) {
    zztv = & value->it_interval;
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"getitimer(&value->it_interval)",
                                               (UWord )(& zztv->tv_sec),
                                               (SizeT )sizeof(zztv->tv_sec));
      } else {

      }
      break;
    }
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"getitimer(&value->it_interval)",
                                               (UWord )(& zztv->tv_usec),
                                               (SizeT )sizeof(zztv->tv_usec));
      } else {

      }
      break;
    }
    break;
  }
  while (1) {
    zztv___0 = & value->it_value;
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"getitimer(&value->it_value)",
                                               (UWord )(& zztv___0->tv_sec),
                                               (SizeT )sizeof(zztv___0->tv_sec));
      } else {

      }
      break;
    }
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"getitimer(&value->it_value)",
                                               (UWord )(& zztv___0->tv_usec),
                                               (SizeT )sizeof(zztv___0->tv_usec));
      } else {

      }
      break;
    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_getitimer_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) 
{ 
  struct vki_itimerval *value ;
  struct vki_timeval *zztv ;
  struct vki_timeval *zztv___0 ;

  {
  if (arrghs->arg2 != (Addr )((void *)0)) {
    value = (struct vki_itimerval *)arrghs->arg2;
    while (1) {
      zztv = & value->it_interval;
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  (UWord )(& zztv->tv_sec),
                                                  (SizeT )sizeof(zztv->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  (UWord )(& zztv->tv_usec),
                                                  (SizeT )sizeof(zztv->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
    while (1) {
      zztv___0 = & value->it_value;
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  (UWord )(& zztv___0->tv_sec),
                                                  (SizeT )sizeof(zztv___0->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  (UWord )(& zztv___0->tv_usec),
                                                  (SizeT )sizeof(zztv___0->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setitimer_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  struct vki_itimerval *value ;
  struct vki_timeval *zztv ;
  struct vki_timeval *zztv___0 ;
  struct vki_itimerval *ovalue ;
  struct vki_timeval *zztv___1 ;
  struct vki_timeval *zztv___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_setitimer ( %ld, %#lx, %#lx )", arrghs->arg1,
                   arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2274,
                            (Char const   *)"vgSysWrap_generic_sys_setitimer_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2274,
                            (Char const   *)"vgSysWrap_generic_sys_setitimer_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setitimer(which)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct itimerval *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct itimerval *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2274,
                            (Char const   *)"vgSysWrap_generic_sys_setitimer_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2274,
                            (Char const   *)"vgSysWrap_generic_sys_setitimer_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setitimer(value)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct itimerval *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(struct itimerval *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct itimerval *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2274,
                            (Char const   *)"vgSysWrap_generic_sys_setitimer_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2274,
                            (Char const   *)"vgSysWrap_generic_sys_setitimer_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setitimer(ovalue)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(struct itimerval *));
      break;
    }
  } else {

  }
  if (arrghs->arg2 != (Addr )((void *)0)) {
    value = (struct vki_itimerval *)arrghs->arg2;
    while (1) {
      zztv = & value->it_interval;
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"setitimer(&value->it_interval)",
                                                (UWord )(& zztv->tv_sec),
                                                (SizeT )sizeof(zztv->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"setitimer(&value->it_interval)",
                                                (UWord )(& zztv->tv_usec),
                                                (SizeT )sizeof(zztv->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
    while (1) {
      zztv___0 = & value->it_value;
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"setitimer(&value->it_value)",
                                                (UWord )(& zztv___0->tv_sec),
                                                (SizeT )sizeof(zztv___0->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"setitimer(&value->it_value)",
                                                (UWord )(& zztv___0->tv_usec),
                                                (SizeT )sizeof(zztv___0->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
  } else {

  }
  if (arrghs->arg3 != (Addr )((void *)0)) {
    ovalue = (struct vki_itimerval *)arrghs->arg3;
    while (1) {
      zztv___1 = & ovalue->it_interval;
      while (1) {
        if (vgPlain_tdict.track_pre_mem_write) {
          (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                                 (Char *)"setitimer(&ovalue->it_interval)",
                                                 (UWord )(& zztv___1->tv_sec),
                                                 (SizeT )sizeof(zztv___1->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_pre_mem_write) {
          (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                                 (Char *)"setitimer(&ovalue->it_interval)",
                                                 (UWord )(& zztv___1->tv_usec),
                                                 (SizeT )sizeof(zztv___1->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
    while (1) {
      zztv___2 = & ovalue->it_value;
      while (1) {
        if (vgPlain_tdict.track_pre_mem_write) {
          (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                                 (Char *)"setitimer(&ovalue->it_value)",
                                                 (UWord )(& zztv___2->tv_sec),
                                                 (SizeT )sizeof(zztv___2->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_pre_mem_write) {
          (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                                 (Char *)"setitimer(&ovalue->it_value)",
                                                 (UWord )(& zztv___2->tv_usec),
                                                 (SizeT )sizeof(zztv___2->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setitimer_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) 
{ 
  struct vki_itimerval *ovalue ;
  struct vki_timeval *zztv ;
  struct vki_timeval *zztv___0 ;

  {
  if (arrghs->arg3 != (Addr )((void *)0)) {
    ovalue = (struct vki_itimerval *)arrghs->arg3;
    while (1) {
      zztv = & ovalue->it_interval;
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  (UWord )(& zztv->tv_sec),
                                                  (SizeT )sizeof(zztv->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  (UWord )(& zztv->tv_usec),
                                                  (SizeT )sizeof(zztv->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
    while (1) {
      zztv___0 = & ovalue->it_value;
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  (UWord )(& zztv___0->tv_sec),
                                                  (SizeT )sizeof(zztv___0->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  (UWord )(& zztv___0->tv_usec),
                                                  (SizeT )sizeof(zztv___0->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_chroot_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_chroot ( %#lx )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2303,
                            (Char const   *)"vgSysWrap_generic_sys_chroot_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2303,
                            (Char const   *)"vgSysWrap_generic_sys_chroot_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"chroot(path)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"chroot(path)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_madvise_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_madvise ( %#lx, %llu, %ld )", arrghs->arg1,
                   (ULong )arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2312,
                            (Char const   *)"vgSysWrap_generic_sys_madvise_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2312,
                            (Char const   *)"vgSysWrap_generic_sys_madvise_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"madvise(start)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2312,
                            (Char const   *)"vgSysWrap_generic_sys_madvise_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2312,
                            (Char const   *)"vgSysWrap_generic_sys_madvise_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"madvise(length)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2312,
                            (Char const   *)"vgSysWrap_generic_sys_madvise_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2312,
                            (Char const   *)"vgSysWrap_generic_sys_madvise_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"madvise(advice)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_mremap_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Int here___2 ;
  long tmp___5 ;
  long tmp___6 ;
  Int here___3 ;
  long tmp___7 ;
  long tmp___8 ;
  Int here___4 ;
  long tmp___9 ;
  long tmp___10 ;
  Int here___5 ;
  long tmp___11 ;
  long tmp___12 ;
  Int here___6 ;
  long tmp___13 ;
  long tmp___14 ;
  Int here___7 ;
  long tmp___15 ;
  long tmp___16 ;

  {
  if (arrghs->arg4 & 2UL) {
    if (vgPlain_clo_trace_syscalls) {
      vgPlain_printf("sys_mremap ( %#lx, %llu, %ld, 0x%lx, %#lx )",
                     arrghs->arg1, (ULong )arrghs->arg2, arrghs->arg3,
                     arrghs->arg4, arrghs->arg5);
    } else {

    }
    if (vgPlain_tdict.track_pre_reg_read) {
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"(syscallno)",
                                            (PtrdiffT )layout->o_sysno,
                                            (SizeT )sizeof(UWord ));
      while (1) {
        here = layout->o_arg1;
        tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                               1L);
        if (tmp) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2326,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
        if (tmp___0) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2326,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"mremap(old_addr)",
                                              (PtrdiffT )here,
                                              (SizeT )sizeof(unsigned long ));
        break;
      }
      while (1) {
        here___0 = layout->o_arg2;
        tmp___1 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                   1L);
        if (tmp___1) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2326,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
        if (tmp___2) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2326,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"mremap(old_size)",
                                              (PtrdiffT )here___0,
                                              (SizeT )sizeof(unsigned long ));
        break;
      }
      while (1) {
        here___1 = layout->o_arg3;
        tmp___3 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                   1L);
        if (tmp___3) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2326,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
        if (tmp___4) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2326,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"mremap(new_size)",
                                              (PtrdiffT )here___1,
                                              (SizeT )sizeof(unsigned long ));
        break;
      }
      while (1) {
        here___2 = layout->o_arg4;
        tmp___5 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                   1L);
        if (tmp___5) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2326,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        tmp___6 = __builtin_expect((long )(! (! (here___2 >= 0))), 1L);
        if (tmp___6) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2326,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"mremap(flags)",
                                              (PtrdiffT )here___2,
                                              (SizeT )sizeof(unsigned long ));
        break;
      }
      while (1) {
        here___3 = layout->o_arg5;
        tmp___7 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                   1L);
        if (tmp___7) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2326,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        tmp___8 = __builtin_expect((long )(! (! (here___3 >= 0))), 1L);
        if (tmp___8) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2326,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"mremap(new_addr)",
                                              (PtrdiffT )here___3,
                                              (SizeT )sizeof(unsigned long ));
        break;
      }
    } else {

    }
  } else {
    if (vgPlain_clo_trace_syscalls) {
      vgPlain_printf("sys_mremap ( %#lx, %llu, %ld, 0x%lx )", arrghs->arg1,
                     (ULong )arrghs->arg2, arrghs->arg3, arrghs->arg4);
    } else {

    }
    if (vgPlain_tdict.track_pre_reg_read) {
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"(syscallno)",
                                            (PtrdiffT )layout->o_sysno,
                                            (SizeT )sizeof(UWord ));
      while (1) {
        here___4 = layout->o_arg1;
        tmp___9 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                   1L);
        if (tmp___9) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2332,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        tmp___10 = __builtin_expect((long )(! (! (here___4 >= 0))), 1L);
        if (tmp___10) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2332,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"mremap(old_addr)",
                                              (PtrdiffT )here___4,
                                              (SizeT )sizeof(unsigned long ));
        break;
      }
      while (1) {
        here___5 = layout->o_arg2;
        tmp___11 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                    1L);
        if (tmp___11) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2332,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        tmp___12 = __builtin_expect((long )(! (! (here___5 >= 0))), 1L);
        if (tmp___12) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2332,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"mremap(old_size)",
                                              (PtrdiffT )here___5,
                                              (SizeT )sizeof(unsigned long ));
        break;
      }
      while (1) {
        here___6 = layout->o_arg3;
        tmp___13 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                    1L);
        if (tmp___13) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2332,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        tmp___14 = __builtin_expect((long )(! (! (here___6 >= 0))), 1L);
        if (tmp___14) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2332,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"mremap(new_size)",
                                              (PtrdiffT )here___6,
                                              (SizeT )sizeof(unsigned long ));
        break;
      }
      while (1) {
        here___7 = layout->o_arg4;
        tmp___15 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                    1L);
        if (tmp___15) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2332,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        tmp___16 = __builtin_expect((long )(! (! (here___7 >= 0))), 1L);
        if (tmp___16) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2332,
                              (Char const   *)"vgSysWrap_generic_sys_mremap_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"mremap(flags)",
                                              (PtrdiffT )here___7,
                                              (SizeT )sizeof(unsigned long ));
        break;
      }
    } else {

    }
  }
  while (1) {
    status->what = (enum __anonenum_what_133 )1;
    status->sres = do_mremap(arrghs->arg1, arrghs->arg2, arrghs->arg5,
                             arrghs->arg3, arrghs->arg4, tid);
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_nice_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_nice ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2343,
                            (Char const   *)"vgSysWrap_generic_sys_nice_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2343,
                            (Char const   *)"vgSysWrap_generic_sys_nice_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"nice(inc)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_mlock_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_mlock ( %#lx, %llu )", arrghs->arg1,
                   (ULong )arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2350,
                            (Char const   *)"vgSysWrap_generic_sys_mlock_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2350,
                            (Char const   *)"vgSysWrap_generic_sys_mlock_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mlock(addr)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2350,
                            (Char const   *)"vgSysWrap_generic_sys_mlock_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2350,
                            (Char const   *)"vgSysWrap_generic_sys_mlock_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mlock(len)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_munlock_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_munlock ( %#lx, %llu )", arrghs->arg1,
                   (ULong )arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2357,
                            (Char const   *)"vgSysWrap_generic_sys_munlock_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2357,
                            (Char const   *)"vgSysWrap_generic_sys_munlock_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"munlock(addr)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2357,
                            (Char const   *)"vgSysWrap_generic_sys_munlock_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2357,
                            (Char const   *)"vgSysWrap_generic_sys_munlock_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"munlock(len)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_mlockall_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_mlockall ( %lx )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2364,
                            (Char const   *)"vgSysWrap_generic_sys_mlockall_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2364,
                            (Char const   *)"vgSysWrap_generic_sys_mlockall_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mlockall(flags)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setpriority_before(ThreadId tid ,
                                              SyscallArgLayout *layout ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ,
                                              UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_setpriority ( %ld, %ld, %ld )", arrghs->arg1,
                   arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2370,
                            (Char const   *)"vgSysWrap_generic_sys_setpriority_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2370,
                            (Char const   *)"vgSysWrap_generic_sys_setpriority_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setpriority(which)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2370,
                            (Char const   *)"vgSysWrap_generic_sys_setpriority_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2370,
                            (Char const   *)"vgSysWrap_generic_sys_setpriority_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setpriority(who)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2370,
                            (Char const   *)"vgSysWrap_generic_sys_setpriority_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2370,
                            (Char const   *)"vgSysWrap_generic_sys_setpriority_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setpriority(prio)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getpriority_before(ThreadId tid ,
                                              SyscallArgLayout *layout ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ,
                                              UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getpriority ( %ld, %ld )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2376,
                            (Char const   *)"vgSysWrap_generic_sys_getpriority_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2376,
                            (Char const   *)"vgSysWrap_generic_sys_getpriority_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getpriority(which)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2376,
                            (Char const   *)"vgSysWrap_generic_sys_getpriority_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2376,
                            (Char const   *)"vgSysWrap_generic_sys_getpriority_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getpriority(who)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_pwrite64_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Int here___2 ;
  long tmp___5 ;
  long tmp___6 ;
  Int here___3 ;
  long tmp___7 ;
  long tmp___8 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_pwrite64 ( %ld, %#lx, %llu, %lld )", arrghs->arg1,
                   arrghs->arg2, (ULong )arrghs->arg3,
                   (ULong )arrghs->arg4 | ((ULong )arrghs->arg5 << 32));
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2387,
                            (Char const   *)"vgSysWrap_generic_sys_pwrite64_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2387,
                            (Char const   *)"vgSysWrap_generic_sys_pwrite64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"pwrite64(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2387,
                            (Char const   *)"vgSysWrap_generic_sys_pwrite64_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2387,
                            (Char const   *)"vgSysWrap_generic_sys_pwrite64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"pwrite64(buf)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2387,
                            (Char const   *)"vgSysWrap_generic_sys_pwrite64_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2387,
                            (Char const   *)"vgSysWrap_generic_sys_pwrite64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"pwrite64(count)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
    while (1) {
      here___2 = layout->o_arg4;
      tmp___5 = __builtin_expect((long )(! (! (sizeof(vki_u32 ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_u32) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2387,
                            (Char const   *)"vgSysWrap_generic_sys_pwrite64_before",
                            "");
      }
      tmp___6 = __builtin_expect((long )(! (! (here___2 >= 0))), 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2387,
                            (Char const   *)"vgSysWrap_generic_sys_pwrite64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"pwrite64(offset_low)",
                                            (PtrdiffT )here___2,
                                            (SizeT )sizeof(vki_u32 ));
      break;
    }
    while (1) {
      here___3 = layout->o_arg5;
      tmp___7 = __builtin_expect((long )(! (! (sizeof(vki_u32 ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___7) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_u32) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2387,
                            (Char const   *)"vgSysWrap_generic_sys_pwrite64_before",
                            "");
      }
      tmp___8 = __builtin_expect((long )(! (! (here___3 >= 0))), 1L);
      if (tmp___8) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2387,
                            (Char const   *)"vgSysWrap_generic_sys_pwrite64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"pwrite64(offset_high)",
                                            (PtrdiffT )here___3,
                                            (SizeT )sizeof(vki_u32 ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"pwrite64(buf)",
                                            arrghs->arg2, arrghs->arg3);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_sync_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 


  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_sync ( )");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_fstatfs_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_fstatfs ( %ld, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2412,
                            (Char const   *)"vgSysWrap_generic_sys_fstatfs_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2412,
                            (Char const   *)"vgSysWrap_generic_sys_fstatfs_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fstatfs(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(struct statfs *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct statfs *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2412,
                            (Char const   *)"vgSysWrap_generic_sys_fstatfs_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2412,
                            (Char const   *)"vgSysWrap_generic_sys_fstatfs_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fstatfs(buf)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct statfs *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"fstatfs(buf)",
                                             arrghs->arg2,
                                             (SizeT )sizeof(struct vki_statfs ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_fstatfs_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                              (SizeT )sizeof(struct vki_statfs ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_fstatfs64_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;
  Int here___1 ;
  long tmp___4 ;
  long tmp___5 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_fstatfs64 ( %ld, %llu, %#lx )", arrghs->arg1,
                   (ULong )arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2426,
                            (Char const   *)"vgSysWrap_generic_sys_fstatfs64_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2426,
                            (Char const   *)"vgSysWrap_generic_sys_fstatfs64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fstatfs64(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2426,
                            (Char const   *)"vgSysWrap_generic_sys_fstatfs64_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2426,
                            (Char const   *)"vgSysWrap_generic_sys_fstatfs64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fstatfs64(size)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___4 = __builtin_expect((long )(! (! (sizeof(struct statfs64 *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct statfs64 *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2426,
                            (Char const   *)"vgSysWrap_generic_sys_fstatfs64_before",
                            "");
      }
      tmp___5 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2426,
                            (Char const   *)"vgSysWrap_generic_sys_fstatfs64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fstatfs64(buf)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(struct statfs64 *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"fstatfs64(buf)",
                                             arrghs->arg3, arrghs->arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_fstatfs64_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg3,
                                              arrghs->arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_getsid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getsid ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(vki_pid_t ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_pid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2437,
                            (Char const   *)"vgSysWrap_generic_sys_getsid_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2437,
                            (Char const   *)"vgSysWrap_generic_sys_getsid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getsid(pid)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(vki_pid_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_pread64_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Int here___2 ;
  long tmp___5 ;
  long tmp___6 ;
  Int here___3 ;
  long tmp___7 ;
  long tmp___8 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_pread64 ( %ld, %#lx, %llu, %lld )", arrghs->arg1,
                   arrghs->arg2, (ULong )arrghs->arg3,
                   (ULong )arrghs->arg4 | ((ULong )arrghs->arg5 << 32));
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2448,
                            (Char const   *)"vgSysWrap_generic_sys_pread64_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2448,
                            (Char const   *)"vgSysWrap_generic_sys_pread64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"pread64(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(char *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2448,
                            (Char const   *)"vgSysWrap_generic_sys_pread64_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2448,
                            (Char const   *)"vgSysWrap_generic_sys_pread64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"pread64(buf)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(char *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2448,
                            (Char const   *)"vgSysWrap_generic_sys_pread64_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2448,
                            (Char const   *)"vgSysWrap_generic_sys_pread64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"pread64(count)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
    while (1) {
      here___2 = layout->o_arg4;
      tmp___5 = __builtin_expect((long )(! (! (sizeof(vki_u32 ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_u32) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2448,
                            (Char const   *)"vgSysWrap_generic_sys_pread64_before",
                            "");
      }
      tmp___6 = __builtin_expect((long )(! (! (here___2 >= 0))), 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2448,
                            (Char const   *)"vgSysWrap_generic_sys_pread64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"pread64(offset_low)",
                                            (PtrdiffT )here___2,
                                            (SizeT )sizeof(vki_u32 ));
      break;
    }
    while (1) {
      here___3 = layout->o_arg5;
      tmp___7 = __builtin_expect((long )(! (! (sizeof(vki_u32 ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___7) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_u32) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2448,
                            (Char const   *)"vgSysWrap_generic_sys_pread64_before",
                            "");
      }
      tmp___8 = __builtin_expect((long )(! (! (here___3 >= 0))), 1L);
      if (tmp___8) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2448,
                            (Char const   *)"vgSysWrap_generic_sys_pread64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"pread64(offset_high)",
                                            (PtrdiffT )here___3,
                                            (SizeT )sizeof(vki_u32 ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"pread64(buf)",
                                             arrghs->arg2, arrghs->arg3);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_pread64_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 2462,
                        (Char const   *)"vgSysWrap_generic_sys_pread64_after",
                        "");
  }
  tmp___3 = getRES(status);
  if (tmp___3 > 0UL) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        tmp___2 = getRES(status);
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                                tmp___2);
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_mknod_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;
  Int here___1 ;
  long tmp___4 ;
  long tmp___5 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_mknod ( %#lx(%s), 0x%lx, 0x%lx )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2473,
                            (Char const   *)"vgSysWrap_generic_sys_mknod_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2473,
                            (Char const   *)"vgSysWrap_generic_sys_mknod_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mknod(pathname)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2473,
                            (Char const   *)"vgSysWrap_generic_sys_mknod_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2473,
                            (Char const   *)"vgSysWrap_generic_sys_mknod_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mknod(mode)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___4 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2473,
                            (Char const   *)"vgSysWrap_generic_sys_mknod_before",
                            "");
      }
      tmp___5 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2473,
                            (Char const   *)"vgSysWrap_generic_sys_mknod_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mknod(dev)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"mknod(pathname)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_flock_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_flock ( %ld, %ld )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2481,
                            (Char const   *)"vgSysWrap_generic_sys_flock_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2481,
                            (Char const   *)"vgSysWrap_generic_sys_flock_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"flock(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2481,
                            (Char const   *)"vgSysWrap_generic_sys_flock_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2481,
                            (Char const   *)"vgSysWrap_generic_sys_flock_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"flock(operation)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  return;
}
}
static void pre_argv_envp(Addr a , ThreadId tid , Char *s1 , Char *s2 ) 
{ 
  Addr a_deref ;
  Addr *a_p ;

  {
  while (1) {
    a_p = (Addr *)a;
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid, s1, (Addr )a_p,
                                              (SizeT )sizeof(Addr ));
      } else {

      }
      break;
    }
    a_deref = *a_p;
    if (0UL == a_deref) {
      break;
    } else {

    }
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read_asciiz) {
        (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid, s2,
                                                     a_deref);
      } else {

      }
      break;
    }
    a += (Addr )sizeof(char *);
  }
  return;
}
}
static Bool i_am_the_only_thread(void) 
{ 
  Int c ;
  Int tmp ;
  long tmp___0 ;

  {
  tmp = vgPlain_count_living_threads();
  c = tmp;
  tmp___0 = __builtin_expect((long )(! (! (c >= 1))), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"c >= 1",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 2502,
                        (Char const   *)"i_am_the_only_thread", "");
  }
  return ((Bool )(c == 1));
}
}
void vgPlain_reap_threads(ThreadId self ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;

  {
  while (1) {
    tmp = i_am_the_only_thread();
    if (tmp) {
      break;
    } else {

    }
    vgPlain_vg_yield();
    vgPlain_poll_signals(self);
  }
  tmp___0 = i_am_the_only_thread();
  if (tmp___0) {
    tmp___1 = 1;
  } else {
    tmp___1 = 0;
  }
  tmp___2 = __builtin_expect((long )tmp___1, 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"i_am_the_only_thread()",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 2514,
                        (Char const   *)"vgPlain_reap_threads", "");
  }
  return;
}
}
void vgSysWrap_generic_sys_execve_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Char *path ;
  Char **envp ;
  Char **argv ;
  Char **arg2copy ;
  Char *launcher_basename ;
  ThreadState *tst ;
  Int i ;
  Int j ;
  Int tot_args ;
  SysRes res ;
  Bool setuid_allowed ;
  Bool trace_this_child ;
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Bool tmp___5 ;
  int tmp___6 ;
  long tmp___7 ;
  Word wzz ;
  int tmp___8 ;
  long tmp___9 ;
  Bool tmp___10 ;
  Int q ;
  HChar **vec ;
  HChar **child_argv ;
  Word wzz___0 ;
  UWord tmp___11 ;
  int tmp___12 ;
  long tmp___13 ;
  Bool tmp___14 ;
  Word wzz___1 ;
  int tmp___15 ;
  long tmp___16 ;
  long tmp___17 ;
  long tmp___18 ;
  long tmp___19 ;
  Word tmp___20 ;
  int tmp___21 ;
  long tmp___22 ;
  Word tmp___23 ;
  void *tmp___24 ;
  Int tmp___25 ;
  Int tmp___26 ;
  void *tmp___27 ;
  Word tmp___28 ;
  Int tmp___29 ;
  Int tmp___30 ;
  Int tmp___31 ;
  long tmp___32 ;
  vki_sigset_t allsigs ;
  vki_siginfo_t info ;
  vki_sigaction_fromK_t sa_f ;
  vki_sigaction_toK_t sa_t ;
  Int tmp___33 ;
  Char **cpp ;
  Bool tmp___34 ;
  int tmp___35 ;
  long tmp___36 ;
  UWord tmp___37 ;

  {
  path = (Char *)((void *)0);
  envp = (Char **)((void *)0);
  argv = (Char **)((void *)0);
  launcher_basename = (Char *)((void *)0);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_execve ( %#lx(%s), %#lx, %#lx )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2533,
                            (Char const   *)"vgSysWrap_generic_sys_execve_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2533,
                            (Char const   *)"vgSysWrap_generic_sys_execve_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"execve(filename)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(char **) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(char **) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2533,
                            (Char const   *)"vgSysWrap_generic_sys_execve_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2533,
                            (Char const   *)"vgSysWrap_generic_sys_execve_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"execve(argv)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(char **));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(char **) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(char **) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2533,
                            (Char const   *)"vgSysWrap_generic_sys_execve_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2533,
                            (Char const   *)"vgSysWrap_generic_sys_execve_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"execve(envp)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(char **));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"execve(filename)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  if (arrghs->arg2 != 0UL) {
    pre_argv_envp(arrghs->arg2, tid, (Char *)"execve(argv)",
                  (Char *)"execve(argv[i])");
  } else {

  }
  if (arrghs->arg3 != 0UL) {
    pre_argv_envp(arrghs->arg3, tid, (Char *)"execve(envp)",
                  (Char *)"execve(envp[i])");
  } else {

  }
  tmp___5 = vgPlain_is_valid_tid(tid);
  if (tmp___5) {
    tmp___6 = 1;
  } else {
    tmp___6 = 0;
  }
  tmp___7 = __builtin_expect((long )tmp___6, 1L);
  if (tmp___7) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(is_valid_tid)(tid)",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 2540,
                        (Char const   *)"vgSysWrap_generic_sys_execve_before",
                        "");
  }
  tst = vgPlain_get_ThreadState(tid);
  if (arrghs->arg1 == 0UL) {
    goto _L;
  } else {
    tmp___10 = vgPlain_am_is_valid_for_client(arrghs->arg1, (SizeT )1, (UInt )1);
    if (tmp___10) {

    } else {
      _L: /* CIL Label */ 
      while (1) {
        wzz = (Word )14;
        if (wzz >= 0L) {
          if (wzz < 10000L) {
            tmp___8 = 1;
          } else {
            tmp___8 = 0;
          }
        } else {
          tmp___8 = 0;
        }
        tmp___9 = __builtin_expect((long )tmp___8, 1L);
        if (tmp___9) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"wzz >= 0 && wzz < 10000",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2553,
                              (Char const   *)"vgSysWrap_generic_sys_execve_before",
                              "");
        }
        status->what = (enum __anonenum_what_133 )1;
        status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
        break;
      }
      return;
    }
  }
  child_argv = (HChar **)arrghs->arg2;
  if (child_argv) {
    if ((unsigned int )*(child_argv + 0) == (unsigned int )((void *)0)) {
      child_argv = (HChar **)((void *)0);
    } else {

    }
  } else {

  }
  trace_this_child = vgPlain_should_we_trace_this_child((HChar *)arrghs->arg1,
                                                        child_argv);
  if (trace_this_child) {
    setuid_allowed = (Bool )0;
  } else {
    setuid_allowed = (Bool )1;
  }
  res = vgPlain_pre_exec_check((HChar const   *)((Char const   *)arrghs->arg1),
                               (Int *)((void *)0), setuid_allowed);
  tmp___14 = sr_isError(res);
  if (tmp___14) {
    while (1) {
      tmp___11 = sr_Err(res);
      wzz___0 = (Word )tmp___11;
      if (wzz___0 >= 0L) {
        if (wzz___0 < 10000L) {
          tmp___12 = 1;
        } else {
          tmp___12 = 0;
        }
      } else {
        tmp___12 = 0;
      }
      tmp___13 = __builtin_expect((long )tmp___12, 1L);
      if (tmp___13) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2587,
                            (Char const   *)"vgSysWrap_generic_sys_execve_before",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz___0);
      break;
    }
    return;
  } else {

  }
  if (trace_this_child) {
    if ((unsigned int )vgPlain_name_of_launcher == (unsigned int )((void *)0)) {
      goto _L___0;
    } else
    if ((int )*(vgPlain_name_of_launcher + 0) != 47) {
      _L___0: /* CIL Label */ 
      while (1) {
        wzz___1 = (Word )10;
        if (wzz___1 >= 0L) {
          if (wzz___1 < 10000L) {
            tmp___15 = 1;
          } else {
            tmp___15 = 0;
          }
        } else {
          tmp___15 = 0;
        }
        tmp___16 = __builtin_expect((long )tmp___15, 1L);
        if (tmp___16) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"wzz >= 0 && wzz < 10000",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              2597,
                              (Char const   *)"vgSysWrap_generic_sys_execve_before",
                              "");
        }
        status->what = (enum __anonenum_what_133 )1;
        status->sres = vgPlain_mk_SysRes_Error((UWord )wzz___1);
        break;
      }
      return;
    } else {

    }
  } else {

  }
  vgPlain_debugLog(1, "syswrap", "Exec of %s\n", (Char *)arrghs->arg1);
  if ((unsigned int )vgPlain_clo_vgdb != 0U) {
    vgPlain_gdbserver((ThreadId )0);
  } else {

  }
  vgPlain_nuke_all_threads_except(tid, (VgSchedReturnCode )1);
  vgPlain_reap_threads(tid);
  if (trace_this_child) {
    path = (Char *)vgPlain_name_of_launcher;
    tmp___17 = __builtin_expect((long )(! (! path)), 1L);
    if (tmp___17) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"path",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 2628,
                          (Char const   *)"vgSysWrap_generic_sys_execve_before",
                          "");
    }
    launcher_basename = vgPlain_strrchr((Char const   *)path, (Char )'/');
    if ((unsigned int )launcher_basename == (unsigned int )((void *)0)) {
      launcher_basename = path;
    } else
    if ((int )*(launcher_basename + 1) == 0) {
      launcher_basename = path;
    } else {
      launcher_basename ++;
    }
  } else {
    path = (Char *)arrghs->arg1;
  }
  if (arrghs->arg3 == 0UL) {
    envp = (Char **)((void *)0);
  } else {
    envp = vgPlain_env_clone((Char **)arrghs->arg3);
    if ((unsigned int )envp == (unsigned int )((void *)0)) {
      goto hosed;
    } else {

    }
    vgPlain_env_remove_valgrind_env_stuff(envp);
  }
  if (trace_this_child) {
    vgPlain_env_setenv(& envp, (Char const   *)"VALGRIND_LIB", vgPlain_libdir);
  } else {

  }
  if (! trace_this_child) {
    argv = (Char **)arrghs->arg2;
  } else {
    tmp___18 = __builtin_expect((long )(! (! vgPlain_args_for_valgrind)), 1L);
    if (tmp___18) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(args_for_valgrind)",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 2676,
                          (Char const   *)"vgSysWrap_generic_sys_execve_before",
                          "");
    }
    tmp___19 = __builtin_expect((long )(! (! (vgPlain_args_for_valgrind_noexecpass >= 0))),
                                1L);
    if (tmp___19) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VG_(args_for_valgrind_noexecpass) >= 0",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 2677,
                          (Char const   *)"vgSysWrap_generic_sys_execve_before",
                          "");
    }
    tmp___20 = vgPlain_sizeXA(vgPlain_args_for_valgrind);
    if ((Word )vgPlain_args_for_valgrind_noexecpass <= tmp___20) {
      tmp___21 = 1;
    } else {
      tmp___21 = 0;
    }
    tmp___22 = __builtin_expect((long )tmp___21, 1L);
    if (tmp___22) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VG_(args_for_valgrind_noexecpass) <= VG_(sizeXA)( VG_(args_for_valgrind) )",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 2679,
                          (Char const   *)"vgSysWrap_generic_sys_execve_before",
                          "");
    }
    tot_args = 1;
    tmp___23 = vgPlain_sizeXA(vgPlain_args_for_valgrind);
    tot_args = (Int )((Word )tot_args + tmp___23);
    tot_args -= vgPlain_args_for_valgrind_noexecpass;
    tot_args ++;
    arg2copy = (Char **)arrghs->arg2;
    if (arg2copy) {
      if (*(arg2copy + 0)) {
        i = 1;
        while (*(arg2copy + i)) {
          tot_args ++;
          i ++;
        }
      } else {

      }
    } else {

    }
    tmp___24 = vgPlain_malloc((HChar *)"di.syswrap.pre_sys_execve.1",
                              (SizeT )((unsigned int )(tot_args + 1) * sizeof(HChar *)));
    argv = (Char **)tmp___24;
    if ((unsigned int )argv == (unsigned int )((Char **)0)) {
      goto hosed;
    } else {

    }
    j = 0;
    tmp___25 = j;
    j ++;
    *(argv + tmp___25) = launcher_basename;
    i = 0;
    while (1) {
      tmp___28 = vgPlain_sizeXA(vgPlain_args_for_valgrind);
      if ((Word )i < tmp___28) {

      } else {
        break;
      }
      if (i < vgPlain_args_for_valgrind_noexecpass) {
        goto __Cont;
      } else {

      }
      tmp___26 = j;
      j ++;
      tmp___27 = vgPlain_indexXA(vgPlain_args_for_valgrind, (Word )i);
      *(argv + tmp___26) = (Char *)*((HChar **)tmp___27);
      __Cont: /* CIL Label */ 
      i ++;
    }
    tmp___29 = j;
    j ++;
    *(argv + tmp___29) = (Char *)arrghs->arg1;
    if (arg2copy) {
      if (*(arg2copy + 0)) {
        i = 1;
        while (*(arg2copy + i)) {
          tmp___30 = j;
          j ++;
          *(argv + tmp___30) = *(arg2copy + i);
          i ++;
        }
      } else {

      }
    } else {

    }
    tmp___31 = j;
    j ++;
    *(argv + tmp___31) = (Char *)((void *)0);
    tmp___32 = __builtin_expect((long )(! (! (j == tot_args + 1))), 1L);
    if (tmp___32) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"j == tot_args+1",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 2712,
                          (Char const   *)"vgSysWrap_generic_sys_execve_before",
                          "");
    }
  }
  vgPlain_setrlimit(2,
                    (struct vki_rlimit  const  *)(& vgPlain_client_rlimit_data));
  i = 1;
  while (i < vgPlain_max_signal) {
    vgPlain_do_sys_sigaction(i, (vki_sigaction_toK_t const   *)((void *)0),
                             & sa_f);
    vgPlain_convert_sigaction_fromK_to_toK(& sa_f, & sa_t);
    if ((unsigned int )sa_t.ksa_handler == (unsigned int )((__vki_sighandler_t )1)) {
      vgPlain_sigaction(i, (vki_sigaction_toK_t const   *)(& sa_t),
                        (vki_sigaction_fromK_t *)((void *)0));
    } else {
      sa_t.ksa_handler = (__vki_sighandler_t )0;
      vgPlain_sigaction(i, (vki_sigaction_toK_t const   *)(& sa_t),
                        (vki_sigaction_fromK_t *)((void *)0));
    }
    i ++;
  }
  vgPlain_sigfillset(& allsigs);
  while (1) {
    tmp___33 = vgPlain_sigtimedwait_zero((vki_sigset_t const   *)(& allsigs),
                                         & info);
    if (tmp___33 > 0) {

    } else {
      break;
    }
  }
  vgPlain_sigprocmask(2, (vki_sigset_t const   *)(& tst->sig_mask),
                      (vki_sigset_t *)((void *)0));
  while (1) {
    status->what = (enum __anonenum_what_133 )1;
    status->sres = vgPlain_do_syscall((UWord )11, (UWord )path, (UWord )argv,
                                      (UWord )envp, (UWord )0, (UWord )0,
                                      (UWord )0, (UWord )0, (UWord )0);
    break;
  }
  hosed: 
  if ((unsigned int )status->what == 1U) {
    tmp___34 = sr_isError(status->sres);
    if (tmp___34) {
      tmp___35 = 1;
    } else {
      tmp___35 = 0;
    }
  } else {
    tmp___35 = 0;
  }
  tmp___36 = __builtin_expect((long )tmp___35, 1L);
  if (tmp___36) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"FAILURE",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 2780,
                        (Char const   *)"vgSysWrap_generic_sys_execve_before",
                        "");
  }
  tmp___37 = getERR(status);
  vgPlain_message((VgMsgKind )1,
                  "execve(%#lx(%s), %#lx, %#lx) failed, errno %ld\n",
                  arrghs->arg1, (char *)arrghs->arg1, arrghs->arg2,
                  arrghs->arg3, tmp___37);
  vgPlain_message((VgMsgKind )1,
                  "EXEC FAILED: I can\'t recover from execve() failing, so I\'m dying.\n");
  vgPlain_message((VgMsgKind )1,
                  "Add more stringent tests in PRE(sys_execve), or work out how to recover.\n");
  vgPlain_exit(101);
}
}
void vgSysWrap_generic_sys_access_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_access ( %#lx(%s), %ld )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2793,
                            (Char const   *)"vgSysWrap_generic_sys_access_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2793,
                            (Char const   *)"vgSysWrap_generic_sys_access_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"access(pathname)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2793,
                            (Char const   *)"vgSysWrap_generic_sys_access_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2793,
                            (Char const   *)"vgSysWrap_generic_sys_access_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"access(mode)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"access(pathname)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_alarm_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_alarm ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2800,
                            (Char const   *)"vgSysWrap_generic_sys_alarm_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2800,
                            (Char const   *)"vgSysWrap_generic_sys_alarm_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"alarm(seconds)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_brk_before(ThreadId tid , SyscallArgLayout *layout ,
                                      SyscallArgs *arrghs ,
                                      SyscallStatus *status , UWord *flags ) 
{ 
  Addr brk_limit ;
  Addr brk_new ;
  Int here ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;

  {
  brk_limit = vgPlain_brk_limit;
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_brk ( %#lx )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2824,
                            (Char const   *)"vgSysWrap_generic_sys_brk_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2824,
                            (Char const   *)"vgSysWrap_generic_sys_brk_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"brk(end_data_segment)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
  } else {

  }
  brk_new = do_brk(arrghs->arg1);
  while (1) {
    status->what = (enum __anonenum_what_133 )1;
    status->sres = vgPlain_mk_SysRes_Success(brk_new);
    break;
  }
  if (brk_new == arrghs->arg1) {
    if (brk_new < brk_limit) {
      while (1) {
        if (vgPlain_tdict.track_die_mem_brk) {
          (*(vgPlain_tdict.track_die_mem_brk))(arrghs->arg1,
                                               brk_limit - arrghs->arg1);
        } else {

        }
        break;
      }
    } else
    if (brk_new > brk_limit) {
      while (1) {
        if (vgPlain_tdict.track_new_mem_brk) {
          (*(vgPlain_tdict.track_new_mem_brk))(brk_limit,
                                               arrghs->arg1 - brk_limit, tid);
        } else {

        }
        break;
      }
    } else {

    }
  } else {
    tmp___1 = __builtin_expect((long )(! (! (brk_limit == brk_new))), 1L);
    if (tmp___1) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"brk_limit == brk_new",
                          (Char const   *)"m_syswrap/syswrap-generic.c", 2843,
                          (Char const   *)"vgSysWrap_generic_sys_brk_before", "");
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_chdir_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_chdir ( %#lx(%s) )", arrghs->arg1, (char *)arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2851,
                            (Char const   *)"vgSysWrap_generic_sys_chdir_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2851,
                            (Char const   *)"vgSysWrap_generic_sys_chdir_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"chdir(path)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"chdir(path)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_chmod_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_chmod ( %#lx(%s), %ld )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2859,
                            (Char const   *)"vgSysWrap_generic_sys_chmod_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2859,
                            (Char const   *)"vgSysWrap_generic_sys_chmod_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"chmod(path)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(vki_mode_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_mode_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2859,
                            (Char const   *)"vgSysWrap_generic_sys_chmod_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2859,
                            (Char const   *)"vgSysWrap_generic_sys_chmod_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"chmod(mode)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_mode_t ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"chmod(path)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_chown_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;
  Int here___1 ;
  long tmp___4 ;
  long tmp___5 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_chown ( %#lx(%s), 0x%lx, 0x%lx )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2868,
                            (Char const   *)"vgSysWrap_generic_sys_chown_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2868,
                            (Char const   *)"vgSysWrap_generic_sys_chown_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"chown(path)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(vki_uid_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_uid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2868,
                            (Char const   *)"vgSysWrap_generic_sys_chown_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2868,
                            (Char const   *)"vgSysWrap_generic_sys_chown_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"chown(owner)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_uid_t ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___4 = __builtin_expect((long )(! (! (sizeof(vki_gid_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_gid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2868,
                            (Char const   *)"vgSysWrap_generic_sys_chown_before",
                            "");
      }
      tmp___5 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2868,
                            (Char const   *)"vgSysWrap_generic_sys_chown_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"chown(group)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(vki_gid_t ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"chown(path)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_lchown_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;
  Int here___1 ;
  long tmp___4 ;
  long tmp___5 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_lchown ( %#lx(%s), 0x%lx, 0x%lx )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2877,
                            (Char const   *)"vgSysWrap_generic_sys_lchown_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2877,
                            (Char const   *)"vgSysWrap_generic_sys_lchown_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"lchown(path)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(vki_uid_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_uid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2877,
                            (Char const   *)"vgSysWrap_generic_sys_lchown_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2877,
                            (Char const   *)"vgSysWrap_generic_sys_lchown_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"lchown(owner)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_uid_t ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___4 = __builtin_expect((long )(! (! (sizeof(vki_gid_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_gid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2877,
                            (Char const   *)"vgSysWrap_generic_sys_lchown_before",
                            "");
      }
      tmp___5 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2877,
                            (Char const   *)"vgSysWrap_generic_sys_lchown_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"lchown(group)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(vki_gid_t ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"lchown(path)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_close_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Word wzz ;
  int tmp___2 ;
  long tmp___3 ;
  Bool tmp___4 ;
  Int tmp___5 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_close ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2885,
                            (Char const   *)"vgSysWrap_generic_sys_close_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2885,
                            (Char const   *)"vgSysWrap_generic_sys_close_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"close(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  tmp___4 = vgModuleLocal_fd_allowed((Int )arrghs->arg1,
                                     (Char const   *)"close", tid, (Bool )0);
  if (tmp___4) {
    if (arrghs->arg1 == 2UL) {
      tmp___5 = vgPlain_debugLog_getLevel();
      if (tmp___5 > 0) {
        _L: /* CIL Label */ 
        while (1) {
          wzz = (Word )9;
          if (wzz >= 0L) {
            if (wzz < 10000L) {
              tmp___2 = 1;
            } else {
              tmp___2 = 0;
            }
          } else {
            tmp___2 = 0;
          }
          tmp___3 = __builtin_expect((long )tmp___2, 1L);
          if (tmp___3) {

          } else {
            vgPlain_assert_fail((Bool )1,
                                (Char const   *)"wzz >= 0 && wzz < 10000",
                                (Char const   *)"m_syswrap/syswrap-generic.c",
                                2892,
                                (Char const   *)"vgSysWrap_generic_sys_close_before",
                                "");
          }
          status->what = (enum __anonenum_what_133 )1;
          status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
          break;
        }
      } else {

      }
    } else {

    }
  } else {
    goto _L;
  }
  return;
}
}
void vgSysWrap_generic_sys_close_after(ThreadId tid , SyscallArgs *arrghs ,
                                       SyscallStatus *status ) 
{ 


  {
  if (vgPlain_clo_track_fds) {
    record_fd_close((Int )arrghs->arg1);
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_dup_before(ThreadId tid , SyscallArgLayout *layout ,
                                      SyscallArgs *arrghs ,
                                      SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_dup ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2903,
                            (Char const   *)"vgSysWrap_generic_sys_dup_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2903,
                            (Char const   *)"vgSysWrap_generic_sys_dup_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"dup(oldfd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_dup_after(ThreadId tid , SyscallArgs *arrghs ,
                                     SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  Word wzz ;
  int tmp___3 ;
  long tmp___4 ;
  UWord tmp___5 ;
  UWord tmp___6 ;
  Bool tmp___7 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 2908,
                        (Char const   *)"vgSysWrap_generic_sys_dup_after", "");
  }
  tmp___6 = getRES(status);
  tmp___7 = vgModuleLocal_fd_allowed((Int )tmp___6, (Char const   *)"dup", tid,
                                     (Bool )1);
  if (tmp___7) {
    if (vgPlain_clo_track_fds) {
      tmp___5 = getRES(status);
      vgModuleLocal_record_fd_open_named(tid, (Int )tmp___5);
    } else {

    }
  } else {
    tmp___2 = getRES(status);
    vgPlain_close((Int )tmp___2);
    while (1) {
      wzz = (Word )24;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___3 = 1;
        } else {
          tmp___3 = 0;
        }
      } else {
        tmp___3 = 0;
      }
      tmp___4 = __builtin_expect((long )tmp___3, 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2911,
                            (Char const   *)"vgSysWrap_generic_sys_dup_after",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_dup2_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Word wzz ;
  int tmp___3 ;
  long tmp___4 ;
  Bool tmp___5 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_dup2 ( %ld, %ld )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2921,
                            (Char const   *)"vgSysWrap_generic_sys_dup2_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2921,
                            (Char const   *)"vgSysWrap_generic_sys_dup2_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"dup2(oldfd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2921,
                            (Char const   *)"vgSysWrap_generic_sys_dup2_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2921,
                            (Char const   *)"vgSysWrap_generic_sys_dup2_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"dup2(newfd)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  tmp___5 = vgModuleLocal_fd_allowed((Int )arrghs->arg2, (Char const   *)"dup2",
                                     tid, (Bool )1);
  if (tmp___5) {

  } else {
    while (1) {
      wzz = (Word )9;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___3 = 1;
        } else {
          tmp___3 = 0;
        }
      } else {
        tmp___3 = 0;
      }
      tmp___4 = __builtin_expect((long )tmp___3, 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2923,
                            (Char const   *)"vgSysWrap_generic_sys_dup2_before",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_dup2_after(ThreadId tid , SyscallArgs *arrghs ,
                                      SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 2928,
                        (Char const   *)"vgSysWrap_generic_sys_dup2_after", "");
  }
  if (vgPlain_clo_track_fds) {
    tmp___2 = getRES(status);
    vgModuleLocal_record_fd_open_named(tid, (Int )tmp___2);
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_fchdir_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_fchdir ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2937,
                            (Char const   *)"vgSysWrap_generic_sys_fchdir_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2937,
                            (Char const   *)"vgSysWrap_generic_sys_fchdir_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fchdir(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_fchown_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;
  Int here___1 ;
  long tmp___4 ;
  long tmp___5 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_fchown ( %ld, %ld, %ld )", arrghs->arg1, arrghs->arg2,
                   arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2945,
                            (Char const   *)"vgSysWrap_generic_sys_fchown_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2945,
                            (Char const   *)"vgSysWrap_generic_sys_fchown_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fchown(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(vki_uid_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_uid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2945,
                            (Char const   *)"vgSysWrap_generic_sys_fchown_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2945,
                            (Char const   *)"vgSysWrap_generic_sys_fchown_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fchown(owner)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_uid_t ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___4 = __builtin_expect((long )(! (! (sizeof(vki_gid_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_gid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2945,
                            (Char const   *)"vgSysWrap_generic_sys_fchown_before",
                            "");
      }
      tmp___5 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2945,
                            (Char const   *)"vgSysWrap_generic_sys_fchown_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fchown(group)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(vki_gid_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_fchmod_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_fchmod ( %ld, %ld )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2952,
                            (Char const   *)"vgSysWrap_generic_sys_fchmod_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2952,
                            (Char const   *)"vgSysWrap_generic_sys_fchmod_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fchmod(fildes)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(vki_mode_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_mode_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2952,
                            (Char const   *)"vgSysWrap_generic_sys_fchmod_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2952,
                            (Char const   *)"vgSysWrap_generic_sys_fchmod_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fchmod(mode)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_mode_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_newfstat_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_newfstat ( %ld, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2959,
                            (Char const   *)"vgSysWrap_generic_sys_newfstat_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2959,
                            (Char const   *)"vgSysWrap_generic_sys_newfstat_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fstat(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(struct stat *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct stat *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2959,
                            (Char const   *)"vgSysWrap_generic_sys_newfstat_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 2959,
                            (Char const   *)"vgSysWrap_generic_sys_newfstat_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"fstat(buf)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct stat *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"fstat(buf)", arrghs->arg2,
                                             (SizeT )sizeof(struct vki_stat ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_newfstat_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                              (SizeT )sizeof(struct vki_stat ));
    } else {

    }
    break;
  }
  return;
}
}
static vki_sigset_t fork_saved_mask  ;
void vgSysWrap_generic_sys_fork_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  Bool is_child ;
  Int child_pid ;
  vki_sigset_t mask ;
  Bool tmp ;
  UWord tmp___0 ;
  UWord tmp___1 ;
  UWord tmp___2 ;
  Int tmp___3 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_fork ( )");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  vgPlain_sigfillset(& mask);
  vgPlain_sigprocmask(2, (vki_sigset_t const   *)(& mask), & fork_saved_mask);
  while (1) {
    status->what = (enum __anonenum_what_133 )1;
    status->sres = vgPlain_do_syscall((UWord )2, (UWord )0, (UWord )0,
                                      (UWord )0, (UWord )0, (UWord )0,
                                      (UWord )0, (UWord )0, (UWord )0);
    break;
  }
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      return;
    } else {

    }
  } else {
    return;
  }
  tmp___1 = getRES(status);
  if (tmp___1 == 0UL) {
    is_child = (Bool )1;
  } else {
    is_child = (Bool )0;
  }
  if (is_child) {
    child_pid = -1;
  } else {
    tmp___2 = getRES(status);
    child_pid = (Int )tmp___2;
  }
  vgPlain_do_atfork_pre(tid);
  if (is_child) {
    vgPlain_do_atfork_child(tid);
    vgPlain_sigprocmask(2, (vki_sigset_t const   *)(& fork_saved_mask),
                        (vki_sigset_t *)((void *)0));
    if (vgPlain_clo_child_silent_after_fork) {
      if (! vgPlain_log_output_sink.is_socket) {
        vgPlain_log_output_sink.fd = -1;
      } else {

      }
      if (! vgPlain_xml_output_sink.is_socket) {
        vgPlain_xml_output_sink.fd = -1;
      } else {

      }
    } else {

    }
  } else {
    vgPlain_do_atfork_parent(tid);
    if (vgPlain_clo_trace_syscalls) {
      tmp___3 = vgPlain_getpid();
      vgPlain_printf("   fork: process %d created child %d\n", tmp___3,
                     child_pid);
    } else {

    }
    vgPlain_sigprocmask(2, (vki_sigset_t const   *)(& fork_saved_mask),
                        (vki_sigset_t *)((void *)0));
  }
  return;
}
}
void vgSysWrap_generic_sys_ftruncate_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_ftruncate ( %ld, %ld )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3035,
                            (Char const   *)"vgSysWrap_generic_sys_ftruncate_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3035,
                            (Char const   *)"vgSysWrap_generic_sys_ftruncate_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"ftruncate(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3035,
                            (Char const   *)"vgSysWrap_generic_sys_ftruncate_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3035,
                            (Char const   *)"vgSysWrap_generic_sys_ftruncate_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"ftruncate(length)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_truncate_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_truncate ( %#lx(%s), %ld )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3043,
                            (Char const   *)"vgSysWrap_generic_sys_truncate_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3043,
                            (Char const   *)"vgSysWrap_generic_sys_truncate_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"truncate(path)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3043,
                            (Char const   *)"vgSysWrap_generic_sys_truncate_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3043,
                            (Char const   *)"vgSysWrap_generic_sys_truncate_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"truncate(length)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"truncate(path)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_ftruncate64_before(ThreadId tid ,
                                              SyscallArgLayout *layout ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ,
                                              UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_ftruncate64 ( %ld, %lld )", arrghs->arg1,
                   (ULong )arrghs->arg2 | ((ULong )arrghs->arg3 << 32));
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3054,
                            (Char const   *)"vgSysWrap_generic_sys_ftruncate64_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3054,
                            (Char const   *)"vgSysWrap_generic_sys_ftruncate64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"ftruncate64(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(UWord ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(UWord) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3054,
                            (Char const   *)"vgSysWrap_generic_sys_ftruncate64_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3054,
                            (Char const   *)"vgSysWrap_generic_sys_ftruncate64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"ftruncate64(length_low)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(UWord ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(UWord ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(UWord) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3054,
                            (Char const   *)"vgSysWrap_generic_sys_ftruncate64_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3054,
                            (Char const   *)"vgSysWrap_generic_sys_ftruncate64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"ftruncate64(length_high)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(UWord ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_truncate64_before(ThreadId tid ,
                                             SyscallArgLayout *layout ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ,
                                             UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_truncate64 ( %#lx, %lld )", arrghs->arg1,
                   (Long )((ULong )arrghs->arg2 | ((ULong )arrghs->arg3 << 32)));
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3069,
                            (Char const   *)"vgSysWrap_generic_sys_truncate64_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3069,
                            (Char const   *)"vgSysWrap_generic_sys_truncate64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"truncate64(path)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(UWord ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(UWord) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3069,
                            (Char const   *)"vgSysWrap_generic_sys_truncate64_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3069,
                            (Char const   *)"vgSysWrap_generic_sys_truncate64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"truncate64(length_low)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(UWord ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(UWord ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(UWord) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3069,
                            (Char const   *)"vgSysWrap_generic_sys_truncate64_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3069,
                            (Char const   *)"vgSysWrap_generic_sys_truncate64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"truncate64(length_high)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(UWord ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"truncate64(path)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_getdents_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getdents ( %ld, %#lx, %ld )", arrghs->arg1,
                   arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3084,
                            (Char const   *)"vgSysWrap_generic_sys_getdents_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3084,
                            (Char const   *)"vgSysWrap_generic_sys_getdents_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getdents(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct linux_dirent *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct linux_dirent *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3084,
                            (Char const   *)"vgSysWrap_generic_sys_getdents_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3084,
                            (Char const   *)"vgSysWrap_generic_sys_getdents_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getdents(dirp)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct linux_dirent *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3084,
                            (Char const   *)"vgSysWrap_generic_sys_getdents_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3084,
                            (Char const   *)"vgSysWrap_generic_sys_getdents_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getdents(count)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"getdents(dirp)",
                                             arrghs->arg2, arrghs->arg3);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_getdents_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3090,
                        (Char const   *)"vgSysWrap_generic_sys_getdents_after",
                        "");
  }
  tmp___3 = getRES(status);
  if (tmp___3 > 0UL) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        tmp___2 = getRES(status);
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                                tmp___2);
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getdents64_before(ThreadId tid ,
                                             SyscallArgLayout *layout ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ,
                                             UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getdents64 ( %ld, %#lx, %ld )", arrghs->arg1,
                   arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3101,
                            (Char const   *)"vgSysWrap_generic_sys_getdents64_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3101,
                            (Char const   *)"vgSysWrap_generic_sys_getdents64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getdents64(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct linux_dirent64 *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct linux_dirent64 *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3101,
                            (Char const   *)"vgSysWrap_generic_sys_getdents64_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3101,
                            (Char const   *)"vgSysWrap_generic_sys_getdents64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getdents64(dirp)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct linux_dirent64 *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3101,
                            (Char const   *)"vgSysWrap_generic_sys_getdents64_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3101,
                            (Char const   *)"vgSysWrap_generic_sys_getdents64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getdents64(count)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"getdents64(dirp)",
                                             arrghs->arg2, arrghs->arg3);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_getdents64_after(ThreadId tid , SyscallArgs *arrghs ,
                                            SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3107,
                        (Char const   *)"vgSysWrap_generic_sys_getdents64_after",
                        "");
  }
  tmp___3 = getRES(status);
  if (tmp___3 > 0UL) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        tmp___2 = getRES(status);
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                                tmp___2);
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getgroups_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getgroups ( %ld, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3115,
                            (Char const   *)"vgSysWrap_generic_sys_getgroups_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3115,
                            (Char const   *)"vgSysWrap_generic_sys_getgroups_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getgroups(size)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_gid_t *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_gid_t *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3115,
                            (Char const   *)"vgSysWrap_generic_sys_getgroups_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3115,
                            (Char const   *)"vgSysWrap_generic_sys_getgroups_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getgroups(list)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_gid_t *));
      break;
    }
  } else {

  }
  if (arrghs->arg1 > 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"getgroups(list)",
                                               arrghs->arg2,
                                               arrghs->arg1 * (UWord )sizeof(vki_gid_t ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getgroups_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3122,
                        (Char const   *)"vgSysWrap_generic_sys_getgroups_after",
                        "");
  }
  if (arrghs->arg1 > 0UL) {
    tmp___3 = getRES(status);
    if (tmp___3 > 0UL) {
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          tmp___2 = getRES(status);
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  arrghs->arg2,
                                                  tmp___2 * (UWord )sizeof(vki_gid_t ));
        } else {

        }
        break;
      }
    } else {

    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getcwd_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getcwd ( %#lx, %llu )", arrghs->arg1,
                   (ULong )arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3136,
                            (Char const   *)"vgSysWrap_generic_sys_getcwd_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3136,
                            (Char const   *)"vgSysWrap_generic_sys_getcwd_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getcwd(buf)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3136,
                            (Char const   *)"vgSysWrap_generic_sys_getcwd_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3136,
                            (Char const   *)"vgSysWrap_generic_sys_getcwd_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getcwd(size)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"getcwd(buf)",
                                             arrghs->arg1, arrghs->arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_getcwd_after(ThreadId tid , SyscallArgs *arrghs ,
                                        SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3142,
                        (Char const   *)"vgSysWrap_generic_sys_getcwd_after", "");
  }
  tmp___3 = getRES(status);
  if (tmp___3 != (Addr )((void *)0)) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        tmp___2 = getRES(status);
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg1,
                                                tmp___2);
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_geteuid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 


  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_geteuid ( )");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getegid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 


  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getegid ( )");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getgid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 


  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getgid ( )");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getpid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 


  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getpid ()");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getpgid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getpgid ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(vki_pid_t ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_pid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3174,
                            (Char const   *)"vgSysWrap_generic_sys_getpgid_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3174,
                            (Char const   *)"vgSysWrap_generic_sys_getpgid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getpgid(pid)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(vki_pid_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getpgrp_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 


  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getpgrp ()");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getppid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 


  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getppid ()");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  return;
}
}
static void common_post_getrlimit(ThreadId tid , UWord a1 , UWord a2 ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, a2,
                                              (SizeT )sizeof(struct vki_rlimit ));
    } else {

    }
    break;
  }
  switch (a1) {
  case 7UL: 
  ((struct vki_rlimit *)a2)->rlim_cur = (unsigned long )vgPlain_fd_soft_limit;
  ((struct vki_rlimit *)a2)->rlim_max = (unsigned long )vgPlain_fd_hard_limit;
  break;
  case 2UL: 
  *((struct vki_rlimit *)a2) = vgPlain_client_rlimit_data;
  break;
  case 3UL: 
  *((struct vki_rlimit *)a2) = vgPlain_client_rlimit_stack;
  break;
  }
  return;
}
}
void vgSysWrap_generic_sys_old_getrlimit_before(ThreadId tid ,
                                                SyscallArgLayout *layout ,
                                                SyscallArgs *arrghs ,
                                                SyscallStatus *status ,
                                                UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_old_getrlimit ( %ld, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3219,
                            (Char const   *)"vgSysWrap_generic_sys_old_getrlimit_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3219,
                            (Char const   *)"vgSysWrap_generic_sys_old_getrlimit_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"old_getrlimit(resource)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct rlimit *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct rlimit *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3219,
                            (Char const   *)"vgSysWrap_generic_sys_old_getrlimit_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3219,
                            (Char const   *)"vgSysWrap_generic_sys_old_getrlimit_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"old_getrlimit(rlim)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct rlimit *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"old_getrlimit(rlim)",
                                             arrghs->arg2,
                                             (SizeT )sizeof(struct vki_rlimit ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_old_getrlimit_after(ThreadId tid ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ) 
{ 


  {
  common_post_getrlimit(tid, arrghs->arg1, arrghs->arg2);
  return;
}
}
void vgSysWrap_generic_sys_getrlimit_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getrlimit ( %ld, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3232,
                            (Char const   *)"vgSysWrap_generic_sys_getrlimit_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3232,
                            (Char const   *)"vgSysWrap_generic_sys_getrlimit_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getrlimit(resource)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct rlimit *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct rlimit *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3232,
                            (Char const   *)"vgSysWrap_generic_sys_getrlimit_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3232,
                            (Char const   *)"vgSysWrap_generic_sys_getrlimit_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getrlimit(rlim)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct rlimit *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"getrlimit(rlim)",
                                             arrghs->arg2,
                                             (SizeT )sizeof(struct vki_rlimit ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_getrlimit_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) 
{ 


  {
  common_post_getrlimit(tid, arrghs->arg1, arrghs->arg2);
  return;
}
}
void vgSysWrap_generic_sys_getrusage_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getrusage ( %ld, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3244,
                            (Char const   *)"vgSysWrap_generic_sys_getrusage_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3244,
                            (Char const   *)"vgSysWrap_generic_sys_getrusage_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getrusage(who)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct rusage *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct rusage *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3244,
                            (Char const   *)"vgSysWrap_generic_sys_getrusage_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3244,
                            (Char const   *)"vgSysWrap_generic_sys_getrusage_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"getrusage(usage)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct rusage *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"getrusage(usage)",
                                             arrghs->arg2,
                                             (SizeT )sizeof(struct vki_rusage ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_getrusage_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3250,
                        (Char const   *)"vgSysWrap_generic_sys_getrusage_after",
                        "");
  }
  tmp___2 = getRES(status);
  if (tmp___2 == 0UL) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                                (SizeT )sizeof(struct vki_rusage ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_gettimeofday_before(ThreadId tid ,
                                               SyscallArgLayout *layout ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ,
                                               UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  struct vki_timeval *zztv ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_gettimeofday ( %#lx, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(struct timeval *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct timeval *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3259,
                            (Char const   *)"vgSysWrap_generic_sys_gettimeofday_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3259,
                            (Char const   *)"vgSysWrap_generic_sys_gettimeofday_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"gettimeofday(tv)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(struct timeval *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct timezone *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct timezone *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3259,
                            (Char const   *)"vgSysWrap_generic_sys_gettimeofday_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3259,
                            (Char const   *)"vgSysWrap_generic_sys_gettimeofday_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"gettimeofday(tz)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct timezone *));
      break;
    }
  } else {

  }
  if (arrghs->arg1 != 0UL) {
    while (1) {
      zztv = (struct vki_timeval *)arrghs->arg1;
      while (1) {
        if (vgPlain_tdict.track_pre_mem_write) {
          (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                                 (Char *)"gettimeofday(tv)",
                                                 (UWord )(& zztv->tv_sec),
                                                 (SizeT )sizeof(zztv->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_pre_mem_write) {
          (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                                 (Char *)"gettimeofday(tv)",
                                                 (UWord )(& zztv->tv_usec),
                                                 (SizeT )sizeof(zztv->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
  } else {

  }
  if (arrghs->arg2 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"gettimeofday(tz)",
                                               arrghs->arg2,
                                               (SizeT )sizeof(struct vki_timezone ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_gettimeofday_after(ThreadId tid ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  struct vki_timeval *zztv ;
  UWord tmp___2 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3269,
                        (Char const   *)"vgSysWrap_generic_sys_gettimeofday_after",
                        "");
  }
  tmp___2 = getRES(status);
  if (tmp___2 == 0UL) {
    if (arrghs->arg1 != 0UL) {
      while (1) {
        zztv = (struct vki_timeval *)arrghs->arg1;
        while (1) {
          if (vgPlain_tdict.track_post_mem_write) {
            (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                    (UWord )(& zztv->tv_sec),
                                                    (SizeT )sizeof(zztv->tv_sec));
          } else {

          }
          break;
        }
        while (1) {
          if (vgPlain_tdict.track_post_mem_write) {
            (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                    (UWord )(& zztv->tv_usec),
                                                    (SizeT )sizeof(zztv->tv_usec));
          } else {

          }
          break;
        }
        break;
      }
    } else {

    }
    if (arrghs->arg2 != 0UL) {
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  arrghs->arg2,
                                                  (SizeT )sizeof(struct vki_timezone ));
        } else {

        }
        break;
      }
    } else {

    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_settimeofday_before(ThreadId tid ,
                                               SyscallArgLayout *layout ,
                                               SyscallArgs *arrghs ,
                                               SyscallStatus *status ,
                                               UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  struct vki_timeval *zztv ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_settimeofday ( %#lx, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(struct timeval *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct timeval *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3282,
                            (Char const   *)"vgSysWrap_generic_sys_settimeofday_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3282,
                            (Char const   *)"vgSysWrap_generic_sys_settimeofday_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"settimeofday(tv)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(struct timeval *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct timezone *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct timezone *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3282,
                            (Char const   *)"vgSysWrap_generic_sys_settimeofday_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3282,
                            (Char const   *)"vgSysWrap_generic_sys_settimeofday_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"settimeofday(tz)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct timezone *));
      break;
    }
  } else {

  }
  if (arrghs->arg1 != 0UL) {
    while (1) {
      zztv = (struct vki_timeval *)arrghs->arg1;
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"settimeofday(tv)",
                                                (UWord )(& zztv->tv_sec),
                                                (SizeT )sizeof(zztv->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"settimeofday(tv)",
                                                (UWord )(& zztv->tv_usec),
                                                (SizeT )sizeof(zztv->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
  } else {

  }
  if (arrghs->arg2 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"settimeofday(tz)",
                                              arrghs->arg2,
                                              (SizeT )sizeof(struct vki_timezone ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_getuid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 


  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_getuid ( )");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  return;
}
}
void vgModuleLocal_PRE_unknown_ioctl(ThreadId tid , UWord request , UWord arg ) ;
static Int moans  =    3;
void vgModuleLocal_PRE_unknown_ioctl(ThreadId tid , UWord request , UWord arg ) 
{ 
  UInt dir ;
  UInt size ;
  Char *tmp ;

  {
  dir = (UInt )((request >> 30) & (unsigned long )((1 << 2) - 1));
  size = (UInt )((request >> 16) & (unsigned long )((1 << 14) - 1));
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"lax-ioctls");
  if ((unsigned int )tmp != (unsigned int )((void *)0)) {

  } else
  if (dir == 0U) {
    if (moans > 0) {
      if (! vgPlain_clo_xml) {
        moans --;
        vgPlain_umsg("Warning: noted but unhandled ioctl 0x%lx with no size/direction hints\n",
                     request);
        vgPlain_umsg("   This could cause spurious value errors to appear.\n");
        vgPlain_umsg("   See README_MISSING_SYSCALL_OR_IOCTL for guidance on writing a proper wrapper.\n");
      } else {

      }
    } else {

    }
  } else {
    if (dir & 1U) {
      if (size > 0U) {
        while (1) {
          if (vgPlain_tdict.track_pre_mem_read) {
            (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                  (Char *)"ioctl(generic)", arg,
                                                  (SizeT )size);
          } else {

          }
          break;
        }
      } else {

      }
    } else {

    }
    if (dir & 2U) {
      if (size > 0U) {
        while (1) {
          if (vgPlain_tdict.track_pre_mem_write) {
            (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                                   (Char *)"ioctl(generic)",
                                                   arg, (SizeT )size);
          } else {

          }
          break;
        }
      } else {

      }
    } else {

    }
  }
  return;
}
}
void vgModuleLocal_POST_unknown_ioctl(ThreadId tid , UInt res , UWord request ,
                                      UWord arg ) 
{ 
  UInt dir ;
  UInt size ;

  {
  dir = (UInt )((request >> 30) & (unsigned long )((1 << 2) - 1));
  size = (UInt )((request >> 16) & (unsigned long )((1 << 14) - 1));
  if (size > 0U) {
    if (dir & 2U) {
      if (res == 0U) {
        if (arg != (Addr )((void *)0)) {
          while (1) {
            if (vgPlain_tdict.track_post_mem_write) {
              (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arg,
                                                      (SizeT )size);
            } else {

            }
            break;
          }
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  return;
}
}
Bool vgModuleLocal_do_sigkill(Int pid , Int tgid ) 
{ 
  ThreadState *tst ;
  ThreadId tid ;
  Bool tmp ;
  Bool tmp___0 ;

  {
  if (pid <= 0) {
    return ((Bool )0);
  } else {

  }
  tid = vgPlain_lwpid_to_vgtid(pid);
  if (tid == 0U) {
    return ((Bool )0);
  } else {

  }
  tst = vgPlain_get_ThreadState(tid);
  if ((unsigned int )tst == (unsigned int )((void *)0)) {
    return ((Bool )0);
  } else
  if ((unsigned int )tst->status == 0U) {
    return ((Bool )0);
  } else {

  }
  if (tgid != -1) {
    if (tst->os_state.threadgroup != tgid) {
      return ((Bool )0);
    } else {

    }
  } else {

  }
  tmp___0 = vgPlain_is_exiting(tid);
  if (tmp___0) {

  } else {
    if (vgPlain_clo_trace_signals) {
      vgPlain_message((VgMsgKind )2, "Thread %d being killed with SIGKILL\n",
                      tst->tid);
    } else {

    }
    tst->exitreason = (VgSchedReturnCode )3;
    tst->os_state.fatalsig = 9;
    tmp = vgPlain_is_running_thread(tid);
    if (tmp) {

    } else {
      vgPlain_get_thread_out_of_syscall(tid);
    }
  }
  return ((Bool )1);
}
}
void vgSysWrap_generic_sys_kill_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Word wzz ;
  int tmp___3 ;
  long tmp___4 ;
  Bool tmp___5 ;
  Bool tmp___6 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_kill ( %ld, %ld )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3417,
                            (Char const   *)"vgSysWrap_generic_sys_kill_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3417,
                            (Char const   *)"vgSysWrap_generic_sys_kill_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"kill(pid)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3417,
                            (Char const   *)"vgSysWrap_generic_sys_kill_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3417,
                            (Char const   *)"vgSysWrap_generic_sys_kill_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"kill(sig)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  tmp___5 = vgModuleLocal_client_signal_OK((Int )arrghs->arg2);
  if (tmp___5) {

  } else {
    while (1) {
      wzz = (Word )22;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___3 = 1;
        } else {
          tmp___3 = 0;
        }
      } else {
        tmp___3 = 0;
      }
      tmp___4 = __builtin_expect((long )tmp___3, 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3419,
                            (Char const   *)"vgSysWrap_generic_sys_kill_before",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
    return;
  }
  if (arrghs->arg2 == 9UL) {
    tmp___6 = vgModuleLocal_do_sigkill((Int )arrghs->arg1, -1);
    if (tmp___6) {
      while (1) {
        status->what = (enum __anonenum_what_133 )1;
        status->sres = vgPlain_mk_SysRes_Success((UWord )0);
        break;
      }
    } else {
      goto _L;
    }
  } else {
    _L: /* CIL Label */ 
    while (1) {
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_do_syscall((UWord )arrghs->sysno, arrghs->arg1,
                                        arrghs->arg2, arrghs->arg3, (UWord )0,
                                        (UWord )0, (UWord )0, (UWord )0,
                                        (UWord )0);
      break;
    }
  }
  if (vgPlain_clo_trace_signals) {
    vgPlain_message((VgMsgKind )2, "kill: sent signal %ld to pid %ld\n",
                    arrghs->arg2, arrghs->arg1);
  } else {

  }
  *flags |= (unsigned long )(1 << 3);
  return;
}
}
void vgSysWrap_generic_sys_link_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_link ( %#lx(%s), %#lx(%s) )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2, (char *)arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3447,
                            (Char const   *)"vgSysWrap_generic_sys_link_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3447,
                            (Char const   *)"vgSysWrap_generic_sys_link_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"link(oldpath)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3447,
                            (Char const   *)"vgSysWrap_generic_sys_link_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3447,
                            (Char const   *)"vgSysWrap_generic_sys_link_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"link(newpath)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(char const   *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"link(oldpath)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"link(newpath)",
                                                   arrghs->arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_newlstat_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_newlstat ( %#lx(%s), %#lx )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3455,
                            (Char const   *)"vgSysWrap_generic_sys_newlstat_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3455,
                            (Char const   *)"vgSysWrap_generic_sys_newlstat_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"lstat(file_name)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct stat *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct stat *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3455,
                            (Char const   *)"vgSysWrap_generic_sys_newlstat_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3455,
                            (Char const   *)"vgSysWrap_generic_sys_newlstat_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"lstat(buf)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct stat *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"lstat(file_name)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"lstat(buf)", arrghs->arg2,
                                             (SizeT )sizeof(struct vki_stat ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_newlstat_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3462,
                        (Char const   *)"vgSysWrap_generic_sys_newlstat_after",
                        "");
  }
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                              (SizeT )sizeof(struct vki_stat ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_mkdir_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_mkdir ( %#lx(%s), %ld )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3470,
                            (Char const   *)"vgSysWrap_generic_sys_mkdir_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3470,
                            (Char const   *)"vgSysWrap_generic_sys_mkdir_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mkdir(pathname)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3470,
                            (Char const   *)"vgSysWrap_generic_sys_mkdir_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3470,
                            (Char const   *)"vgSysWrap_generic_sys_mkdir_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mkdir(mode)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"mkdir(pathname)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_mprotect_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Word wzz ;
  int tmp___5 ;
  long tmp___6 ;
  UInt grows ;
  NSegment const   *aseg ;
  NSegment const   *tmp___7 ;
  NSegment const   *rseg ;
  long tmp___8 ;
  Addr end ;
  Word wzz___0 ;
  int tmp___9 ;
  long tmp___10 ;
  Word wzz___1 ;
  int tmp___11 ;
  long tmp___12 ;
  Word wzz___2 ;
  int tmp___13 ;
  long tmp___14 ;
  Bool tmp___15 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_mprotect ( %#lx, %llu, %ld )", arrghs->arg1,
                   (ULong )arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3478,
                            (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3478,
                            (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mprotect(addr)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3478,
                            (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3478,
                            (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mprotect(len)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3478,
                            (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3478,
                            (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mprotect(prot)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
  } else {

  }
  tmp___15 = vgModuleLocal_valid_client_addr(arrghs->arg1, arrghs->arg2, tid,
                                             (Char const   *)"mprotect");
  if (tmp___15) {
    if (arrghs->arg3 & 50331648UL) {
      grows = (UInt )(arrghs->arg3 & 50331648UL);
      tmp___7 = vgPlain_am_find_nsegment(arrghs->arg1);
      aseg = tmp___7;
      tmp___8 = __builtin_expect((long )(! (! aseg)), 1L);
      if (tmp___8) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"aseg",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3504,
                            (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                            "");
      }
      if (grows == 16777216U) {
        rseg = vgPlain_am_next_nsegment((NSegment *)aseg, (Bool )0);
        if (rseg) {
          if ((unsigned int const   )rseg->kind == 6U) {
            if ((unsigned int const   )rseg->smode == 2U) {
              if (rseg->end + 1UL == aseg->start) {
                end = arrghs->arg1 + arrghs->arg2;
                arrghs->arg1 = (UWord )aseg->start;
                arrghs->arg2 = end - (Addr )aseg->start;
                arrghs->arg3 &= 4278190079UL;
              } else {
                goto _L___1;
              }
            } else {
              goto _L___1;
            }
          } else {
            goto _L___1;
          }
        } else {
          _L___1: /* CIL Label */ 
          _L___0: /* CIL Label */ 
          _L: /* CIL Label */ 
          while (1) {
            wzz___0 = (Word )22;
            if (wzz___0 >= 0L) {
              if (wzz___0 < 10000L) {
                tmp___9 = 1;
              } else {
                tmp___9 = 0;
              }
            } else {
              tmp___9 = 0;
            }
            tmp___10 = __builtin_expect((long )tmp___9, 1L);
            if (tmp___10) {

            } else {
              vgPlain_assert_fail((Bool )1,
                                  (Char const   *)"wzz >= 0 && wzz < 10000",
                                  (Char const   *)"m_syswrap/syswrap-generic.c",
                                  3517,
                                  (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                                  "");
            }
            status->what = (enum __anonenum_what_133 )1;
            status->sres = vgPlain_mk_SysRes_Error((UWord )wzz___0);
            break;
          }
        }
      } else
      if (grows == 33554432U) {
        rseg = vgPlain_am_next_nsegment((NSegment *)aseg, (Bool )1);
        if (rseg) {
          if ((unsigned int const   )rseg->kind == 6U) {
            if ((unsigned int const   )rseg->smode == 0U) {
              if (aseg->end + 1UL == rseg->start) {
                arrghs->arg2 = (UWord )((aseg->end - (Addr const   )arrghs->arg1) + 1UL);
                arrghs->arg3 &= 4261412863UL;
              } else {
                goto _L___4;
              }
            } else {
              goto _L___4;
            }
          } else {
            goto _L___4;
          }
        } else {
          _L___4: /* CIL Label */ 
          _L___3: /* CIL Label */ 
          _L___2: /* CIL Label */ 
          while (1) {
            wzz___1 = (Word )22;
            if (wzz___1 >= 0L) {
              if (wzz___1 < 10000L) {
                tmp___11 = 1;
              } else {
                tmp___11 = 0;
              }
            } else {
              tmp___11 = 0;
            }
            tmp___12 = __builtin_expect((long )tmp___11, 1L);
            if (tmp___12) {

            } else {
              vgPlain_assert_fail((Bool )1,
                                  (Char const   *)"wzz >= 0 && wzz < 10000",
                                  (Char const   *)"m_syswrap/syswrap-generic.c",
                                  3528,
                                  (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                                  "");
            }
            status->what = (enum __anonenum_what_133 )1;
            status->sres = vgPlain_mk_SysRes_Error((UWord )wzz___1);
            break;
          }
        }
      } else {
        while (1) {
          wzz___2 = (Word )22;
          if (wzz___2 >= 0L) {
            if (wzz___2 < 10000L) {
              tmp___13 = 1;
            } else {
              tmp___13 = 0;
            }
          } else {
            tmp___13 = 0;
          }
          tmp___14 = __builtin_expect((long )tmp___13, 1L);
          if (tmp___14) {

          } else {
            vgPlain_assert_fail((Bool )1,
                                (Char const   *)"wzz >= 0 && wzz < 10000",
                                (Char const   *)"m_syswrap/syswrap-generic.c",
                                3532,
                                (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                                "");
          }
          status->what = (enum __anonenum_what_133 )1;
          status->sres = vgPlain_mk_SysRes_Error((UWord )wzz___2);
          break;
        }
      }
    } else {

    }
  } else {
    while (1) {
      wzz = (Word )12;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___5 = 1;
        } else {
          tmp___5 = 0;
        }
      } else {
        tmp___5 = 0;
      }
      tmp___6 = __builtin_expect((long )tmp___5, 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3481,
                            (Char const   *)"vgSysWrap_generic_sys_mprotect_before",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_mprotect_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) 
{ 
  Addr a ;
  SizeT len ;
  Int prot ;

  {
  a = arrghs->arg1;
  len = arrghs->arg2;
  prot = (Int )arrghs->arg3;
  vgModuleLocal_notify_core_and_tool_of_mprotect(a, len, prot);
  return;
}
}
void vgSysWrap_generic_sys_munmap_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Word wzz ;
  int tmp___3 ;
  long tmp___4 ;
  Bool tmp___5 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_munmap ( %#lx, %llu )", arrghs->arg1,
                   (ULong )arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3551,
                            (Char const   *)"vgSysWrap_generic_sys_munmap_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3551,
                            (Char const   *)"vgSysWrap_generic_sys_munmap_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"munmap(start)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3551,
                            (Char const   *)"vgSysWrap_generic_sys_munmap_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3551,
                            (Char const   *)"vgSysWrap_generic_sys_munmap_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"munmap(length)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
  } else {

  }
  tmp___5 = vgModuleLocal_valid_client_addr(arrghs->arg1, arrghs->arg2, tid,
                                            (Char const   *)"munmap");
  if (tmp___5) {

  } else {
    while (1) {
      wzz = (Word )22;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___3 = 1;
        } else {
          tmp___3 = 0;
        }
      } else {
        tmp___3 = 0;
      }
      tmp___4 = __builtin_expect((long )tmp___3, 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3554,
                            (Char const   *)"vgSysWrap_generic_sys_munmap_before",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_munmap_after(ThreadId tid , SyscallArgs *arrghs ,
                                        SyscallStatus *status ) 
{ 
  Addr a ;
  SizeT len ;

  {
  a = arrghs->arg1;
  len = arrghs->arg2;
  vgModuleLocal_notify_core_and_tool_of_munmap((Addr )((Addr64 )a),
                                               (SizeT )((ULong )len));
  return;
}
}
void vgSysWrap_generic_sys_mincore_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_mincore ( %#lx, %llu, %#lx )", arrghs->arg1,
                   (ULong )arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3570,
                            (Char const   *)"vgSysWrap_generic_sys_mincore_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3570,
                            (Char const   *)"vgSysWrap_generic_sys_mincore_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mincore(start)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3570,
                            (Char const   *)"vgSysWrap_generic_sys_mincore_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3570,
                            (Char const   *)"vgSysWrap_generic_sys_mincore_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mincore(length)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(unsigned char *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3570,
                            (Char const   *)"vgSysWrap_generic_sys_mincore_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3570,
                            (Char const   *)"vgSysWrap_generic_sys_mincore_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"mincore(vec)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(unsigned char *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"mincore(vec)",
                                             arrghs->arg3,
                                             (((arrghs->arg2 + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL)) / (1UL << 12));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_mincore_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg3,
                                              (((arrghs->arg2 + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL)) / (1UL << 12));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_nanosleep_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  *flags |= (unsigned long )((1 << 1) | (1 << 2));
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_nanosleep ( %#lx, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(struct timespec *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct timespec *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3583,
                            (Char const   *)"vgSysWrap_generic_sys_nanosleep_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3583,
                            (Char const   *)"vgSysWrap_generic_sys_nanosleep_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"nanosleep(req)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(struct timespec *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct timespec *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct timespec *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3583,
                            (Char const   *)"vgSysWrap_generic_sys_nanosleep_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3583,
                            (Char const   *)"vgSysWrap_generic_sys_nanosleep_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"nanosleep(rem)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct timespec *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"nanosleep(req)",
                                            arrghs->arg1,
                                            (SizeT )sizeof(struct vki_timespec ));
    } else {

    }
    break;
  }
  if (arrghs->arg2 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"nanosleep(rem)",
                                               arrghs->arg2,
                                               (SizeT )sizeof(struct vki_timespec ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_nanosleep_after(ThreadId tid , SyscallArgs *arrghs ,
                                           SyscallStatus *status ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  Bool tmp___3 ;
  UWord tmp___4 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      goto _L;
    } else {
      tmp___1 = 1;
    }
  } else
  _L: /* CIL Label */ 
  if ((unsigned int )status->what == 1U) {
    tmp___0 = sr_isError(status->sres);
    if (tmp___0) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  } else {
    tmp___1 = 0;
  }
  tmp___2 = __builtin_expect((long )tmp___1, 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS || FAILURE",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3591,
                        (Char const   *)"vgSysWrap_generic_sys_nanosleep_after",
                        "");
  }
  if (arrghs->arg2 != 0UL) {
    if ((unsigned int )status->what == 1U) {
      tmp___3 = sr_isError(status->sres);
      if (tmp___3) {
        tmp___4 = getERR(status);
        if (tmp___4 == 4UL) {
          while (1) {
            if (vgPlain_tdict.track_post_mem_write) {
              (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                      arrghs->arg2,
                                                      (SizeT )sizeof(struct vki_timespec ));
            } else {

            }
            break;
          }
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_open_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Int here___2 ;
  long tmp___5 ;
  long tmp___6 ;
  Int here___3 ;
  long tmp___7 ;
  long tmp___8 ;
  HChar name[30] ;
  Char *arg1s ;
  SysRes sres ;
  Int tmp___9 ;
  OffT off ;
  UWord tmp___10 ;
  Off64T tmp___11 ;
  Word wzz ;
  int tmp___12 ;
  long tmp___13 ;
  Bool tmp___14 ;
  Bool tmp___15 ;
  Int tmp___16 ;
  int tmp___17 ;
  Int tmp___18 ;
  Int tmp___19 ;
  int tmp___20 ;
  Int tmp___21 ;

  {
  if (arrghs->arg2 & 64UL) {
    if (vgPlain_clo_trace_syscalls) {
      vgPlain_printf("sys_open ( %#lx(%s), %ld, %ld )", arrghs->arg1,
                     (char *)arrghs->arg1, arrghs->arg2, arrghs->arg3);
    } else {

    }
    if (vgPlain_tdict.track_pre_reg_read) {
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"(syscallno)",
                                            (PtrdiffT )layout->o_sysno,
                                            (SizeT )sizeof(UWord ));
      while (1) {
        here = layout->o_arg1;
        tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                               1L);
        if (tmp) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3602,
                              (Char const   *)"vgSysWrap_generic_sys_open_before",
                              "");
        }
        tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
        if (tmp___0) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3602,
                              (Char const   *)"vgSysWrap_generic_sys_open_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"open(filename)",
                                              (PtrdiffT )here,
                                              (SizeT )sizeof(char const   *));
        break;
      }
      while (1) {
        here___0 = layout->o_arg2;
        tmp___1 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                   1L);
        if (tmp___1) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(int) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3602,
                              (Char const   *)"vgSysWrap_generic_sys_open_before",
                              "");
        }
        tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
        if (tmp___2) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3602,
                              (Char const   *)"vgSysWrap_generic_sys_open_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"open(flags)",
                                              (PtrdiffT )here___0,
                                              (SizeT )sizeof(int ));
        break;
      }
      while (1) {
        here___1 = layout->o_arg3;
        tmp___3 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                   1L);
        if (tmp___3) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(int) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3602,
                              (Char const   *)"vgSysWrap_generic_sys_open_before",
                              "");
        }
        tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
        if (tmp___4) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3602,
                              (Char const   *)"vgSysWrap_generic_sys_open_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"open(mode)",
                                              (PtrdiffT )here___1,
                                              (SizeT )sizeof(int ));
        break;
      }
    } else {

    }
  } else {
    if (vgPlain_clo_trace_syscalls) {
      vgPlain_printf("sys_open ( %#lx(%s), %ld )", arrghs->arg1,
                     (char *)arrghs->arg1, arrghs->arg2);
    } else {

    }
    if (vgPlain_tdict.track_pre_reg_read) {
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"(syscallno)",
                                            (PtrdiffT )layout->o_sysno,
                                            (SizeT )sizeof(UWord ));
      while (1) {
        here___2 = layout->o_arg1;
        tmp___5 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                   1L);
        if (tmp___5) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3607,
                              (Char const   *)"vgSysWrap_generic_sys_open_before",
                              "");
        }
        tmp___6 = __builtin_expect((long )(! (! (here___2 >= 0))), 1L);
        if (tmp___6) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3607,
                              (Char const   *)"vgSysWrap_generic_sys_open_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"open(filename)",
                                              (PtrdiffT )here___2,
                                              (SizeT )sizeof(char const   *));
        break;
      }
      while (1) {
        here___3 = layout->o_arg2;
        tmp___7 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                   1L);
        if (tmp___7) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"sizeof(int) <= sizeof(UWord)",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3607,
                              (Char const   *)"vgSysWrap_generic_sys_open_before",
                              "");
        }
        tmp___8 = __builtin_expect((long )(! (! (here___3 >= 0))), 1L);
        if (tmp___8) {

        } else {
          vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3607,
                              (Char const   *)"vgSysWrap_generic_sys_open_before",
                              "");
        }
        (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                              (Char *)"open(flags)",
                                              (PtrdiffT )here___3,
                                              (SizeT )sizeof(int ));
        break;
      }
    } else {

    }
  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"open(filename)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  arg1s = (Char *)arrghs->arg1;
  tmp___9 = vgPlain_getpid();
  vgPlain_sprintf((Char *)(name), "/proc/%d/cmdline", tmp___9);
  tmp___15 = vgModuleLocal_safe_to_deref((void *)arg1s, (SizeT )1);
  if (tmp___15) {
    if ((unsigned int )arg1s != (unsigned int )((void *)0)) {
      if ((unsigned int )(name) != (unsigned int )((void *)0)) {
        tmp___18 = vgPlain_strcmp((Char const   *)arg1s, (Char const   *)(name));
        if (tmp___18 == 0) {
          tmp___17 = (int )((Bool )1);
        } else {
          tmp___17 = (int )((Bool )0);
        }
      } else {
        tmp___17 = (int )((Bool )0);
      }
    } else {
      tmp___17 = (int )((Bool )0);
    }
    if (tmp___17) {
      goto _L;
    } else {
      if ((unsigned int )arg1s != (unsigned int )((void *)0)) {
        if ((unsigned int )"/proc/self/cmdline" != (unsigned int )((void *)0)) {
          tmp___21 = vgPlain_strcmp((Char const   *)arg1s,
                                    (Char const   *)"/proc/self/cmdline");
          if (tmp___21 == 0) {
            tmp___20 = (int )((Bool )1);
          } else {
            tmp___20 = (int )((Bool )0);
          }
        } else {
          tmp___20 = (int )((Bool )0);
        }
      } else {
        tmp___20 = (int )((Bool )0);
      }
      if (tmp___20) {
        _L: /* CIL Label */ 
        sres = vgPlain_dup(vgPlain_cl_cmdline_fd);
        while (1) {
          status->what = (enum __anonenum_what_133 )1;
          status->sres = sres;
          break;
        }
        tmp___14 = sr_isError(sres);
        if (tmp___14) {

        } else {
          tmp___10 = sr_Res(sres);
          tmp___11 = vgPlain_lseek((Int )tmp___10, (Off64T )0, 0);
          off = (OffT )tmp___11;
          if (off < 0L) {
            while (1) {
              wzz = (Word )24;
              if (wzz >= 0L) {
                if (wzz < 10000L) {
                  tmp___12 = 1;
                } else {
                  tmp___12 = 0;
                }
              } else {
                tmp___12 = 0;
              }
              tmp___13 = __builtin_expect((long )tmp___12, 1L);
              if (tmp___13) {

              } else {
                vgPlain_assert_fail((Bool )1,
                                    (Char const   *)"wzz >= 0 && wzz < 10000",
                                    (Char const   *)"m_syswrap/syswrap-generic.c",
                                    3631,
                                    (Char const   *)"vgSysWrap_generic_sys_open_before",
                                    "");
              }
              status->what = (enum __anonenum_what_133 )1;
              status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
              break;
            }
          } else {

          }
        }
        return;
      } else {

      }
    }
  } else {

  }
  *flags |= (unsigned long )(1 << 1);
  return;
}
}
void vgSysWrap_generic_sys_open_after(ThreadId tid , SyscallArgs *arrghs ,
                                      SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  Word wzz ;
  int tmp___3 ;
  long tmp___4 ;
  UWord tmp___5 ;
  UWord tmp___6 ;
  Bool tmp___7 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3644,
                        (Char const   *)"vgSysWrap_generic_sys_open_after", "");
  }
  tmp___6 = getRES(status);
  tmp___7 = vgModuleLocal_fd_allowed((Int )tmp___6, (Char const   *)"open", tid,
                                     (Bool )1);
  if (tmp___7) {
    if (vgPlain_clo_track_fds) {
      tmp___5 = getRES(status);
      vgModuleLocal_record_fd_open_with_given_name(tid, (Int )tmp___5,
                                                   (char *)((Char *)arrghs->arg1));
    } else {

    }
  } else {
    tmp___2 = getRES(status);
    vgPlain_close((Int )tmp___2);
    while (1) {
      wzz = (Word )24;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___3 = 1;
        } else {
          tmp___3 = 0;
        }
      } else {
        tmp___3 = 0;
      }
      tmp___4 = __builtin_expect((long )tmp___3, 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3647,
                            (Char const   *)"vgSysWrap_generic_sys_open_after",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_read_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Word wzz ;
  int tmp___5 ;
  long tmp___6 ;
  Bool tmp___7 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_read ( %ld, %#lx, %llu )", arrghs->arg1, arrghs->arg2,
                   (ULong )arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3659,
                            (Char const   *)"vgSysWrap_generic_sys_read_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3659,
                            (Char const   *)"vgSysWrap_generic_sys_read_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"read(fd)", (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(char *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3659,
                            (Char const   *)"vgSysWrap_generic_sys_read_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3659,
                            (Char const   *)"vgSysWrap_generic_sys_read_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"read(buf)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(char *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3659,
                            (Char const   *)"vgSysWrap_generic_sys_read_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3659,
                            (Char const   *)"vgSysWrap_generic_sys_read_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"read(count)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
  } else {

  }
  tmp___7 = vgModuleLocal_fd_allowed((Int )arrghs->arg1, (Char const   *)"read",
                                     tid, (Bool )0);
  if (tmp___7) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"read(buf)",
                                               arrghs->arg2, arrghs->arg3);
      } else {

      }
      break;
    }
  } else {
    while (1) {
      wzz = (Word )9;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___5 = 1;
        } else {
          tmp___5 = 0;
        }
      } else {
        tmp___5 = 0;
      }
      tmp___6 = __builtin_expect((long )tmp___5, 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3662,
                            (Char const   *)"vgSysWrap_generic_sys_read_before",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_read_after(ThreadId tid , SyscallArgs *arrghs ,
                                      SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3669,
                        (Char const   *)"vgSysWrap_generic_sys_read_after", "");
  }
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      tmp___2 = getRES(status);
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                              tmp___2);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_write_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Bool ok ;
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Char *tmp___5 ;
  Word wzz ;
  int tmp___6 ;
  long tmp___7 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_write ( %ld, %#lx, %llu )", arrghs->arg1, arrghs->arg2,
                   (ULong )arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3679,
                            (Char const   *)"vgSysWrap_generic_sys_write_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3679,
                            (Char const   *)"vgSysWrap_generic_sys_write_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"write(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3679,
                            (Char const   *)"vgSysWrap_generic_sys_write_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3679,
                            (Char const   *)"vgSysWrap_generic_sys_write_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"write(buf)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3679,
                            (Char const   *)"vgSysWrap_generic_sys_write_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3679,
                            (Char const   *)"vgSysWrap_generic_sys_write_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"write(count)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
  } else {

  }
  ok = vgModuleLocal_fd_allowed((Int )arrghs->arg1, (Char const   *)"write",
                                tid, (Bool )0);
  if (! ok) {
    if (arrghs->arg1 == 2UL) {
      tmp___5 = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                               (Char *)"enable-outer");
      if (tmp___5) {
        ok = (Bool )1;
      } else {

      }
    } else {

    }
  } else {

  }
  if (! ok) {
    while (1) {
      wzz = (Word )9;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___6 = 1;
        } else {
          tmp___6 = 0;
        }
      } else {
        tmp___6 = 0;
      }
      tmp___7 = __builtin_expect((long )tmp___6, 1L);
      if (tmp___7) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3687,
                            (Char const   *)"vgSysWrap_generic_sys_write_before",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
  } else {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"write(buf)",
                                              arrghs->arg2, arrghs->arg3);
      } else {

      }
      break;
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_creat_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_creat ( %#lx(%s), %ld )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3696,
                            (Char const   *)"vgSysWrap_generic_sys_creat_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3696,
                            (Char const   *)"vgSysWrap_generic_sys_creat_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"creat(pathname)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3696,
                            (Char const   *)"vgSysWrap_generic_sys_creat_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3696,
                            (Char const   *)"vgSysWrap_generic_sys_creat_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"creat(mode)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"creat(pathname)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_creat_after(ThreadId tid , SyscallArgs *arrghs ,
                                       SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;
  Word wzz ;
  int tmp___3 ;
  long tmp___4 ;
  UWord tmp___5 ;
  UWord tmp___6 ;
  Bool tmp___7 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3702,
                        (Char const   *)"vgSysWrap_generic_sys_creat_after", "");
  }
  tmp___6 = getRES(status);
  tmp___7 = vgModuleLocal_fd_allowed((Int )tmp___6, (Char const   *)"creat",
                                     tid, (Bool )1);
  if (tmp___7) {
    if (vgPlain_clo_track_fds) {
      tmp___5 = getRES(status);
      vgModuleLocal_record_fd_open_with_given_name(tid, (Int )tmp___5,
                                                   (char *)((Char *)arrghs->arg1));
    } else {

    }
  } else {
    tmp___2 = getRES(status);
    vgPlain_close((Int )tmp___2);
    while (1) {
      wzz = (Word )24;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___3 = 1;
        } else {
          tmp___3 = 0;
        }
      } else {
        tmp___3 = 0;
      }
      tmp___4 = __builtin_expect((long )tmp___3, 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3705,
                            (Char const   *)"vgSysWrap_generic_sys_creat_after",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_poll_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  UInt i ;
  struct vki_pollfd *ufds ;
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  ufds = (struct vki_pollfd *)arrghs->arg1;
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_poll ( %#lx, %ld, %ld )\n", arrghs->arg1, arrghs->arg2,
                   arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(struct vki_pollfd *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct vki_pollfd *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3726,
                            (Char const   *)"vgSysWrap_generic_sys_poll_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3726,
                            (Char const   *)"vgSysWrap_generic_sys_poll_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"poll(ufds)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(struct vki_pollfd *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3726,
                            (Char const   *)"vgSysWrap_generic_sys_poll_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3726,
                            (Char const   *)"vgSysWrap_generic_sys_poll_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"poll(nfds)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(long ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3726,
                            (Char const   *)"vgSysWrap_generic_sys_poll_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3726,
                            (Char const   *)"vgSysWrap_generic_sys_poll_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"poll(timeout)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(long ));
      break;
    }
  } else {

  }
  i = (UInt )0;
  while ((UWord )i < arrghs->arg2) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"poll(ufds.fd)",
                                              (Addr )(& (ufds + i)->fd),
                                              (SizeT )sizeof((ufds + i)->fd));
      } else {

      }
      break;
    }
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"poll(ufds.events)",
                                              (Addr )(& (ufds + i)->events),
                                              (SizeT )sizeof((ufds + i)->events));
      } else {

      }
      break;
    }
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"poll(ufds.reventss)",
                                               (Addr )(& (ufds + i)->revents),
                                               (SizeT )sizeof((ufds + i)->revents));
      } else {

      }
      break;
    }
    i ++;
  }
  return;
}
}
void vgSysWrap_generic_sys_poll_after(ThreadId tid , SyscallArgs *arrghs ,
                                      SyscallStatus *status ) 
{ 
  UInt i ;
  struct vki_pollfd *ufds ;
  UWord tmp ;

  {
  tmp = getRES(status);
  if (tmp >= 0UL) {
    ufds = (struct vki_pollfd *)arrghs->arg1;
    i = (UInt )0;
    while ((UWord )i < arrghs->arg2) {
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  (Addr )(& (ufds + i)->revents),
                                                  (SizeT )sizeof((ufds + i)->revents));
        } else {

        }
        break;
      }
      i ++;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_readlink_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Word saved ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;
  Int here___1 ;
  long tmp___4 ;
  long tmp___5 ;
  HChar name[25] ;
  Char *arg1s ;
  Int tmp___6 ;
  Bool tmp___7 ;
  Int tmp___8 ;
  int tmp___9 ;
  Int tmp___10 ;
  Int tmp___11 ;
  int tmp___12 ;
  Int tmp___13 ;
  UWord tmp___14 ;
  Bool tmp___15 ;
  UWord tmp___16 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  saved = arrghs->sysno;
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_readlink ( %#lx(%s), %#lx, %llu )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2, (ULong )arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3755,
                            (Char const   *)"vgSysWrap_generic_sys_readlink_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3755,
                            (Char const   *)"vgSysWrap_generic_sys_readlink_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"readlink(path)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(char *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3755,
                            (Char const   *)"vgSysWrap_generic_sys_readlink_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3755,
                            (Char const   *)"vgSysWrap_generic_sys_readlink_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"readlink(buf)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(char *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___4 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3755,
                            (Char const   *)"vgSysWrap_generic_sys_readlink_before",
                            "");
      }
      tmp___5 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3755,
                            (Char const   *)"vgSysWrap_generic_sys_readlink_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"readlink(bufsiz)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"readlink(path)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"readlink(buf)",
                                             arrghs->arg2, arrghs->arg3);
    } else {

    }
    break;
  }
  arg1s = (Char *)arrghs->arg1;
  tmp___6 = vgPlain_getpid();
  vgPlain_sprintf((Char *)(name), "/proc/%d/exe", tmp___6);
  tmp___7 = vgModuleLocal_safe_to_deref((void *)arg1s, (SizeT )1);
  if (tmp___7) {
    if ((unsigned int )arg1s != (unsigned int )((void *)0)) {
      if ((unsigned int )(name) != (unsigned int )((void *)0)) {
        tmp___10 = vgPlain_strcmp((Char const   *)arg1s, (Char const   *)(name));
        if (tmp___10 == 0) {
          tmp___9 = (int )((Bool )1);
        } else {
          tmp___9 = (int )((Bool )0);
        }
      } else {
        tmp___9 = (int )((Bool )0);
      }
    } else {
      tmp___9 = (int )((Bool )0);
    }
    if (tmp___9) {
      goto _L___0;
    } else {
      if ((unsigned int )arg1s != (unsigned int )((void *)0)) {
        if ((unsigned int )"/proc/self/exe" != (unsigned int )((void *)0)) {
          tmp___13 = vgPlain_strcmp((Char const   *)arg1s,
                                    (Char const   *)"/proc/self/exe");
          if (tmp___13 == 0) {
            tmp___12 = (int )((Bool )1);
          } else {
            tmp___12 = (int )((Bool )0);
          }
        } else {
          tmp___12 = (int )((Bool )0);
        }
      } else {
        tmp___12 = (int )((Bool )0);
      }
      if (tmp___12) {
        _L___0: /* CIL Label */ 
        vgPlain_sprintf((Char *)(name), "/proc/self/fd/%d", vgPlain_cl_exec_fd);
        while (1) {
          status->what = (enum __anonenum_what_133 )1;
          status->sres = vgPlain_do_syscall((UWord )saved, (UWord )(name),
                                            arrghs->arg2, arrghs->arg3,
                                            (UWord )0, (UWord )0, (UWord )0,
                                            (UWord )0, (UWord )0);
          break;
        }
      } else {
        goto _L;
      }
    }
  } else {
    _L: /* CIL Label */ 
    while (1) {
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_do_syscall((UWord )saved, arrghs->arg1,
                                        arrghs->arg2, arrghs->arg3, (UWord )0,
                                        (UWord )0, (UWord )0, (UWord )0,
                                        (UWord )0);
      break;
    }
  }
  if ((unsigned int )status->what == 1U) {
    tmp___15 = sr_isError(status->sres);
    if (tmp___15) {

    } else {
      tmp___16 = getRES(status);
      if (tmp___16 > 0UL) {
        while (1) {
          if (vgPlain_tdict.track_post_mem_write) {
            tmp___14 = getRES(status);
            (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                    arrghs->arg2, tmp___14);
          } else {

          }
          break;
        }
      } else {

      }
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_readv_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int i ;
  struct vki_iovec *vec ;
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Word wzz ;
  int tmp___5 ;
  long tmp___6 ;
  Bool tmp___7 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_readv ( %ld, %#lx, %llu )", arrghs->arg1, arrghs->arg2,
                   (ULong )arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3795,
                            (Char const   *)"vgSysWrap_generic_sys_readv_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3795,
                            (Char const   *)"vgSysWrap_generic_sys_readv_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"readv(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct iovec  const  *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const struct iovec *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3795,
                            (Char const   *)"vgSysWrap_generic_sys_readv_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3795,
                            (Char const   *)"vgSysWrap_generic_sys_readv_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"readv(vector)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct iovec  const  *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3795,
                            (Char const   *)"vgSysWrap_generic_sys_readv_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3795,
                            (Char const   *)"vgSysWrap_generic_sys_readv_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"readv(count)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
  } else {

  }
  tmp___7 = vgModuleLocal_fd_allowed((Int )arrghs->arg1,
                                     (Char const   *)"readv", tid, (Bool )0);
  if (tmp___7) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"readv(vector)",
                                              arrghs->arg2,
                                              arrghs->arg3 * (UWord )sizeof(struct vki_iovec ));
      } else {

      }
      break;
    }
    if (arrghs->arg2 != 0UL) {
      vec = (struct vki_iovec *)arrghs->arg2;
      i = 0;
      while (i < (Int )arrghs->arg3) {
        while (1) {
          if (vgPlain_tdict.track_pre_mem_write) {
            (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                                   (Char *)"readv(vector[...])",
                                                   (Addr )(vec + i)->iov_base,
                                                   (SizeT )(vec + i)->iov_len);
          } else {

          }
          break;
        }
        i ++;
      }
    } else {

    }
  } else {
    while (1) {
      wzz = (Word )9;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___5 = 1;
        } else {
          tmp___5 = 0;
        }
      } else {
        tmp___5 = 0;
      }
      tmp___6 = __builtin_expect((long )tmp___5, 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3797,
                            (Char const   *)"vgSysWrap_generic_sys_readv_before",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_readv_after(ThreadId tid , SyscallArgs *arrghs ,
                                       SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  Int i ;
  struct vki_iovec *vec ;
  Int remains ;
  UWord tmp___2 ;
  Int nReadThisBuf ;
  UWord tmp___3 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 3813,
                        (Char const   *)"vgSysWrap_generic_sys_readv_after", "");
  }
  tmp___3 = getRES(status);
  if (tmp___3 > 0UL) {
    vec = (struct vki_iovec *)arrghs->arg2;
    tmp___2 = getRES(status);
    remains = (Int )tmp___2;
    i = 0;
    while (i < (Int )arrghs->arg3) {
      nReadThisBuf = (Int )(vec + i)->iov_len;
      if (nReadThisBuf > remains) {
        nReadThisBuf = remains;
      } else {

      }
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  (Addr )(vec + i)->iov_base,
                                                  (SizeT )nReadThisBuf);
        } else {

        }
        break;
      }
      remains -= nReadThisBuf;
      if (remains < 0) {
        vgPlain_core_panic((Char *)"readv: remains < 0");
      } else {

      }
      i ++;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_rename_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_rename ( %#lx(%s), %#lx(%s) )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2, (char *)arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3834,
                            (Char const   *)"vgSysWrap_generic_sys_rename_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3834,
                            (Char const   *)"vgSysWrap_generic_sys_rename_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"rename(oldpath)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3834,
                            (Char const   *)"vgSysWrap_generic_sys_rename_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3834,
                            (Char const   *)"vgSysWrap_generic_sys_rename_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"rename(newpath)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(char const   *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"rename(oldpath)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"rename(newpath)",
                                                   arrghs->arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_rmdir_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_rmdir ( %#lx(%s) )", arrghs->arg1, (char *)arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3843,
                            (Char const   *)"vgSysWrap_generic_sys_rmdir_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3843,
                            (Char const   *)"vgSysWrap_generic_sys_rmdir_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"rmdir(pathname)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"rmdir(pathname)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_select_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Int here___2 ;
  long tmp___5 ;
  long tmp___6 ;
  Int here___3 ;
  long tmp___7 ;
  long tmp___8 ;
  struct vki_timeval *zztv ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_select ( %ld, %#lx, %#lx, %#lx, %#lx )", arrghs->arg1,
                   arrghs->arg2, arrghs->arg3, arrghs->arg4, arrghs->arg5);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3853,
                            (Char const   *)"vgSysWrap_generic_sys_select_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3853,
                            (Char const   *)"vgSysWrap_generic_sys_select_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"select(n)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_fd_set *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_fd_set *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3853,
                            (Char const   *)"vgSysWrap_generic_sys_select_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3853,
                            (Char const   *)"vgSysWrap_generic_sys_select_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"select(readfds)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_fd_set *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(vki_fd_set *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_fd_set *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3853,
                            (Char const   *)"vgSysWrap_generic_sys_select_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3853,
                            (Char const   *)"vgSysWrap_generic_sys_select_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"select(writefds)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(vki_fd_set *));
      break;
    }
    while (1) {
      here___2 = layout->o_arg4;
      tmp___5 = __builtin_expect((long )(! (! (sizeof(vki_fd_set *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_fd_set *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3853,
                            (Char const   *)"vgSysWrap_generic_sys_select_before",
                            "");
      }
      tmp___6 = __builtin_expect((long )(! (! (here___2 >= 0))), 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3853,
                            (Char const   *)"vgSysWrap_generic_sys_select_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"select(exceptfds)",
                                            (PtrdiffT )here___2,
                                            (SizeT )sizeof(vki_fd_set *));
      break;
    }
    while (1) {
      here___3 = layout->o_arg5;
      tmp___7 = __builtin_expect((long )(! (! (sizeof(struct vki_timeval *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___7) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct vki_timeval *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3853,
                            (Char const   *)"vgSysWrap_generic_sys_select_before",
                            "");
      }
      tmp___8 = __builtin_expect((long )(! (! (here___3 >= 0))), 1L);
      if (tmp___8) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3853,
                            (Char const   *)"vgSysWrap_generic_sys_select_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"select(timeout)",
                                            (PtrdiffT )here___3,
                                            (SizeT )sizeof(struct vki_timeval *));
      break;
    }
  } else {

  }
  if (arrghs->arg2 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"select(readfds)",
                                              arrghs->arg2, arrghs->arg1 / 8UL);
      } else {

      }
      break;
    }
  } else {

  }
  if (arrghs->arg3 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"select(writefds)",
                                              arrghs->arg3, arrghs->arg1 / 8UL);
      } else {

      }
      break;
    }
  } else {

  }
  if (arrghs->arg4 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"select(exceptfds)",
                                              arrghs->arg4, arrghs->arg1 / 8UL);
      } else {

      }
      break;
    }
  } else {

  }
  if (arrghs->arg5 != 0UL) {
    while (1) {
      zztv = (struct vki_timeval *)arrghs->arg5;
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"select(timeout)",
                                                (UWord )(& zztv->tv_sec),
                                                (SizeT )sizeof(zztv->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"select(timeout)",
                                                (UWord )(& zztv->tv_usec),
                                                (SizeT )sizeof(zztv->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setgid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_setgid ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(vki_gid_t ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_gid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3871,
                            (Char const   *)"vgSysWrap_generic_sys_setgid_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3871,
                            (Char const   *)"vgSysWrap_generic_sys_setgid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setgid(gid)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(vki_gid_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setsid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 


  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_setsid ( )");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setgroups_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("setgroups ( %llu, %#lx )", (ULong )arrghs->arg1,
                   arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3883,
                            (Char const   *)"vgSysWrap_generic_sys_setgroups_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3883,
                            (Char const   *)"vgSysWrap_generic_sys_setgroups_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setgroups(size)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_gid_t *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_gid_t *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3883,
                            (Char const   *)"vgSysWrap_generic_sys_setgroups_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3883,
                            (Char const   *)"vgSysWrap_generic_sys_setgroups_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setgroups(list)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_gid_t *));
      break;
    }
  } else {

  }
  if (arrghs->arg1 > 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"setgroups(list)",
                                              arrghs->arg2,
                                              arrghs->arg1 * (UWord )sizeof(vki_gid_t ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setpgid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("setpgid ( %ld, %ld )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(vki_pid_t ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_pid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3891,
                            (Char const   *)"vgSysWrap_generic_sys_setpgid_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3891,
                            (Char const   *)"vgSysWrap_generic_sys_setpgid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setpgid(pid)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(vki_pid_t ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_pid_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_pid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3891,
                            (Char const   *)"vgSysWrap_generic_sys_setpgid_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3891,
                            (Char const   *)"vgSysWrap_generic_sys_setpgid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setpgid(pgid)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_pid_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setregid_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_setregid ( %ld, %ld )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(vki_gid_t ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_gid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3897,
                            (Char const   *)"vgSysWrap_generic_sys_setregid_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3897,
                            (Char const   *)"vgSysWrap_generic_sys_setregid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setregid(rgid)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(vki_gid_t ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_gid_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_gid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3897,
                            (Char const   *)"vgSysWrap_generic_sys_setregid_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3897,
                            (Char const   *)"vgSysWrap_generic_sys_setregid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setregid(egid)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_gid_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setreuid_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_setreuid ( 0x%lx, 0x%lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(vki_uid_t ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_uid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3903,
                            (Char const   *)"vgSysWrap_generic_sys_setreuid_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3903,
                            (Char const   *)"vgSysWrap_generic_sys_setreuid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setreuid(ruid)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(vki_uid_t ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_uid_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_uid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3903,
                            (Char const   *)"vgSysWrap_generic_sys_setreuid_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3903,
                            (Char const   *)"vgSysWrap_generic_sys_setreuid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setreuid(euid)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_uid_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setrlimit_before(ThreadId tid ,
                                            SyscallArgLayout *layout ,
                                            SyscallArgs *arrghs ,
                                            SyscallStatus *status ,
                                            UWord *flags ) 
{ 
  UWord arg1 ;
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Word wzz ;
  int tmp___3 ;
  long tmp___4 ;
  Word wzz___0 ;
  int tmp___5 ;
  long tmp___6 ;
  Word wzz___1 ;
  int tmp___7 ;
  long tmp___8 ;

  {
  arg1 = arrghs->arg1;
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_setrlimit ( %ld, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned int ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3911,
                            (Char const   *)"vgSysWrap_generic_sys_setrlimit_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3911,
                            (Char const   *)"vgSysWrap_generic_sys_setrlimit_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setrlimit(resource)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned int ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct rlimit *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct rlimit *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3911,
                            (Char const   *)"vgSysWrap_generic_sys_setrlimit_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3911,
                            (Char const   *)"vgSysWrap_generic_sys_setrlimit_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setrlimit(rlim)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct rlimit *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read) {
      (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                            (Char *)"setrlimit(rlim)",
                                            arrghs->arg2,
                                            (SizeT )sizeof(struct vki_rlimit ));
    } else {

    }
    break;
  }
  if (arg1 == 7UL) {
    if (((struct vki_rlimit *)arrghs->arg2)->rlim_cur > (unsigned long )vgPlain_fd_hard_limit) {
      goto _L;
    } else
    if (((struct vki_rlimit *)arrghs->arg2)->rlim_max != (unsigned long )vgPlain_fd_hard_limit) {
      _L: /* CIL Label */ 
      while (1) {
        wzz = (Word )1;
        if (wzz >= 0L) {
          if (wzz < 10000L) {
            tmp___3 = 1;
          } else {
            tmp___3 = 0;
          }
        } else {
          tmp___3 = 0;
        }
        tmp___4 = __builtin_expect((long )tmp___3, 1L);
        if (tmp___4) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"wzz >= 0 && wzz < 10000",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3923,
                              (Char const   *)"vgSysWrap_generic_sys_setrlimit_before",
                              "");
        }
        status->what = (enum __anonenum_what_133 )1;
        status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
        break;
      }
    } else {
      vgPlain_fd_soft_limit = (Int )((struct vki_rlimit *)arrghs->arg2)->rlim_cur;
      while (1) {
        status->what = (enum __anonenum_what_133 )1;
        status->sres = vgPlain_mk_SysRes_Success((UWord )0);
        break;
      }
    }
  } else
  if (arg1 == 2UL) {
    if (((struct vki_rlimit *)arrghs->arg2)->rlim_cur > vgPlain_client_rlimit_data.rlim_max) {
      goto _L___0;
    } else
    if (((struct vki_rlimit *)arrghs->arg2)->rlim_max > vgPlain_client_rlimit_data.rlim_max) {
      _L___0: /* CIL Label */ 
      while (1) {
        wzz___0 = (Word )1;
        if (wzz___0 >= 0L) {
          if (wzz___0 < 10000L) {
            tmp___5 = 1;
          } else {
            tmp___5 = 0;
          }
        } else {
          tmp___5 = 0;
        }
        tmp___6 = __builtin_expect((long )tmp___5, 1L);
        if (tmp___6) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"wzz >= 0 && wzz < 10000",
                              (Char const   *)"m_syswrap/syswrap-generic.c",
                              3933,
                              (Char const   *)"vgSysWrap_generic_sys_setrlimit_before",
                              "");
        }
        status->what = (enum __anonenum_what_133 )1;
        status->sres = vgPlain_mk_SysRes_Error((UWord )wzz___0);
        break;
      }
    } else {
      vgPlain_client_rlimit_data = *((struct vki_rlimit *)arrghs->arg2);
      while (1) {
        status->what = (enum __anonenum_what_133 )1;
        status->sres = vgPlain_mk_SysRes_Success((UWord )0);
        break;
      }
    }
  } else
  if (arg1 == 3UL) {
    if (tid == 1U) {
      if (((struct vki_rlimit *)arrghs->arg2)->rlim_cur > vgPlain_client_rlimit_stack.rlim_max) {
        goto _L___1;
      } else
      if (((struct vki_rlimit *)arrghs->arg2)->rlim_max > vgPlain_client_rlimit_stack.rlim_max) {
        _L___1: /* CIL Label */ 
        while (1) {
          wzz___1 = (Word )1;
          if (wzz___1 >= 0L) {
            if (wzz___1 < 10000L) {
              tmp___7 = 1;
            } else {
              tmp___7 = 0;
            }
          } else {
            tmp___7 = 0;
          }
          tmp___8 = __builtin_expect((long )tmp___7, 1L);
          if (tmp___8) {

          } else {
            vgPlain_assert_fail((Bool )1,
                                (Char const   *)"wzz >= 0 && wzz < 10000",
                                (Char const   *)"m_syswrap/syswrap-generic.c",
                                3943,
                                (Char const   *)"vgSysWrap_generic_sys_setrlimit_before",
                                "");
          }
          status->what = (enum __anonenum_what_133 )1;
          status->sres = vgPlain_mk_SysRes_Error((UWord )wzz___1);
          break;
        }
      } else {
        vgPlain_threads[tid].client_stack_szB = ((struct vki_rlimit *)arrghs->arg2)->rlim_cur;
        vgPlain_client_rlimit_stack = *((struct vki_rlimit *)arrghs->arg2);
        while (1) {
          status->what = (enum __anonenum_what_133 )1;
          status->sres = vgPlain_mk_SysRes_Success((UWord )0);
          break;
        }
      }
    } else {

    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_setuid_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_setuid ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(vki_uid_t ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_uid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3956,
                            (Char const   *)"vgSysWrap_generic_sys_setuid_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3956,
                            (Char const   *)"vgSysWrap_generic_sys_setuid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"setuid(uid)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(vki_uid_t ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_newstat_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_newstat ( %#lx(%s), %#lx )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3962,
                            (Char const   *)"vgSysWrap_generic_sys_newstat_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3962,
                            (Char const   *)"vgSysWrap_generic_sys_newstat_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"stat(file_name)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct stat *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct stat *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3962,
                            (Char const   *)"vgSysWrap_generic_sys_newstat_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3962,
                            (Char const   *)"vgSysWrap_generic_sys_newstat_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"stat(buf)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct stat *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"stat(file_name)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"stat(buf)", arrghs->arg2,
                                             (SizeT )sizeof(struct vki_stat ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_newstat_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                              (SizeT )sizeof(struct vki_stat ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_statfs_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_statfs ( %#lx(%s), %#lx )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3975,
                            (Char const   *)"vgSysWrap_generic_sys_statfs_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3975,
                            (Char const   *)"vgSysWrap_generic_sys_statfs_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"statfs(path)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct statfs *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct statfs *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3975,
                            (Char const   *)"vgSysWrap_generic_sys_statfs_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3975,
                            (Char const   *)"vgSysWrap_generic_sys_statfs_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"statfs(buf)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct statfs *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"statfs(path)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"statfs(buf)",
                                             arrghs->arg2,
                                             (SizeT )sizeof(struct vki_statfs ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_statfs_after(ThreadId tid , SyscallArgs *arrghs ,
                                        SyscallStatus *status ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                              (SizeT )sizeof(struct vki_statfs ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_statfs64_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_statfs64 ( %#lx(%s), %llu, %#lx )", arrghs->arg1,
                   (char *)arrghs->arg1, (ULong )arrghs->arg2, arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3988,
                            (Char const   *)"vgSysWrap_generic_sys_statfs64_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3988,
                            (Char const   *)"vgSysWrap_generic_sys_statfs64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"statfs64(path)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_size_t ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_size_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3988,
                            (Char const   *)"vgSysWrap_generic_sys_statfs64_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3988,
                            (Char const   *)"vgSysWrap_generic_sys_statfs64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"statfs64(size)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_size_t ));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(struct statfs64 *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct statfs64 *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3988,
                            (Char const   *)"vgSysWrap_generic_sys_statfs64_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 3988,
                            (Char const   *)"vgSysWrap_generic_sys_statfs64_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"statfs64(buf)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(struct statfs64 *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"statfs64(path)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"statfs64(buf)",
                                             arrghs->arg3, arrghs->arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_statfs64_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) 
{ 


  {
  while (1) {
    if (vgPlain_tdict.track_post_mem_write) {
      (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg3,
                                              arrghs->arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_symlink_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_symlink ( %#lx(%s), %#lx(%s) )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2, (char *)arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4001,
                            (Char const   *)"vgSysWrap_generic_sys_symlink_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4001,
                            (Char const   *)"vgSysWrap_generic_sys_symlink_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"symlink(oldpath)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4001,
                            (Char const   *)"vgSysWrap_generic_sys_symlink_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4001,
                            (Char const   *)"vgSysWrap_generic_sys_symlink_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"symlink(newpath)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(char const   *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"symlink(oldpath)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"symlink(newpath)",
                                                   arrghs->arg2);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_time_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_time ( %#lx )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4010,
                            (Char const   *)"vgSysWrap_generic_sys_time_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4010,
                            (Char const   *)"vgSysWrap_generic_sys_time_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"time(t)", (PtrdiffT )here,
                                            (SizeT )sizeof(int *));
      break;
    }
  } else {

  }
  if (arrghs->arg1 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"time(t)", arrghs->arg1,
                                               (SizeT )sizeof(vki_time_t ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_time_after(ThreadId tid , SyscallArgs *arrghs ,
                                      SyscallStatus *status ) 
{ 


  {
  if (arrghs->arg1 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg1,
                                                (SizeT )sizeof(vki_time_t ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_times_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_times ( %#lx )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(struct tms *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct tms *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4026,
                            (Char const   *)"vgSysWrap_generic_sys_times_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4026,
                            (Char const   *)"vgSysWrap_generic_sys_times_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"times(buf)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(struct tms *));
      break;
    }
  } else {

  }
  if (arrghs->arg1 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"times(buf)",
                                               arrghs->arg1,
                                               (SizeT )sizeof(struct vki_tms ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_times_after(ThreadId tid , SyscallArgs *arrghs ,
                                       SyscallStatus *status ) 
{ 


  {
  if (arrghs->arg1 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg1,
                                                (SizeT )sizeof(struct vki_tms ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_umask_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_umask ( %ld )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4042,
                            (Char const   *)"vgSysWrap_generic_sys_umask_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4042,
                            (Char const   *)"vgSysWrap_generic_sys_umask_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"umask(mask)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_unlink_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_unlink ( %#lx(%s) )", arrghs->arg1, (char *)arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4049,
                            (Char const   *)"vgSysWrap_generic_sys_unlink_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4049,
                            (Char const   *)"vgSysWrap_generic_sys_unlink_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"unlink(pathname)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"unlink(pathname)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_newuname_before(ThreadId tid ,
                                           SyscallArgLayout *layout ,
                                           SyscallArgs *arrghs ,
                                           SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_newuname ( %#lx )", arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(struct new_utsname *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct new_utsname *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4056,
                            (Char const   *)"vgSysWrap_generic_sys_newuname_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4056,
                            (Char const   *)"vgSysWrap_generic_sys_newuname_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"uname(buf)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(struct new_utsname *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_write) {
      (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                             (Char *)"uname(buf)", arrghs->arg1,
                                             (SizeT )sizeof(struct vki_new_utsname ));
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_newuname_after(ThreadId tid , SyscallArgs *arrghs ,
                                          SyscallStatus *status ) 
{ 


  {
  if (arrghs->arg1 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg1,
                                                (SizeT )sizeof(struct vki_new_utsname ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_waitpid_before(ThreadId tid ,
                                          SyscallArgLayout *layout ,
                                          SyscallArgs *arrghs ,
                                          SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_waitpid ( %ld, %#lx, %ld )", arrghs->arg1, arrghs->arg2,
                   arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(vki_pid_t ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_pid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4072,
                            (Char const   *)"vgSysWrap_generic_sys_waitpid_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4072,
                            (Char const   *)"vgSysWrap_generic_sys_waitpid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"waitpid(pid)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(vki_pid_t ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(unsigned int *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4072,
                            (Char const   *)"vgSysWrap_generic_sys_waitpid_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4072,
                            (Char const   *)"vgSysWrap_generic_sys_waitpid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"waitpid(status)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(unsigned int *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4072,
                            (Char const   *)"vgSysWrap_generic_sys_waitpid_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4072,
                            (Char const   *)"vgSysWrap_generic_sys_waitpid_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"waitpid(options)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(int ));
      break;
    }
  } else {

  }
  if (arrghs->arg2 != (Addr )((void *)0)) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"waitpid(status)",
                                               arrghs->arg2,
                                               (SizeT )sizeof(int ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_waitpid_after(ThreadId tid , SyscallArgs *arrghs ,
                                         SyscallStatus *status ) 
{ 


  {
  if (arrghs->arg2 != (Addr )((void *)0)) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                                (SizeT )sizeof(int ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_wait4_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Int here___2 ;
  long tmp___5 ;
  long tmp___6 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_wait4 ( %ld, %#lx, %ld, %#lx )", arrghs->arg1,
                   arrghs->arg2, arrghs->arg3, arrghs->arg4);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(vki_pid_t ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_pid_t) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4091,
                            (Char const   *)"vgSysWrap_generic_sys_wait4_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4091,
                            (Char const   *)"vgSysWrap_generic_sys_wait4_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"wait4(pid)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(vki_pid_t ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(unsigned int *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned int *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4091,
                            (Char const   *)"vgSysWrap_generic_sys_wait4_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4091,
                            (Char const   *)"vgSysWrap_generic_sys_wait4_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"wait4(status)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(unsigned int *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(int ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(int) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4091,
                            (Char const   *)"vgSysWrap_generic_sys_wait4_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4091,
                            (Char const   *)"vgSysWrap_generic_sys_wait4_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"wait4(options)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(int ));
      break;
    }
    while (1) {
      here___2 = layout->o_arg4;
      tmp___5 = __builtin_expect((long )(! (! (sizeof(struct rusage *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct rusage *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4091,
                            (Char const   *)"vgSysWrap_generic_sys_wait4_before",
                            "");
      }
      tmp___6 = __builtin_expect((long )(! (! (here___2 >= 0))), 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4091,
                            (Char const   *)"vgSysWrap_generic_sys_wait4_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"wait4(rusage)",
                                            (PtrdiffT )here___2,
                                            (SizeT )sizeof(struct rusage *));
      break;
    }
  } else {

  }
  if (arrghs->arg2 != (Addr )((void *)0)) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"wait4(status)",
                                               arrghs->arg2,
                                               (SizeT )sizeof(int ));
      } else {

      }
      break;
    }
  } else {

  }
  if (arrghs->arg4 != (Addr )((void *)0)) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"wait4(rusage)",
                                               arrghs->arg4,
                                               (SizeT )sizeof(struct vki_rusage ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_wait4_after(ThreadId tid , SyscallArgs *arrghs ,
                                       SyscallStatus *status ) 
{ 


  {
  if (arrghs->arg2 != (Addr )((void *)0)) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg2,
                                                (SizeT )sizeof(int ));
      } else {

      }
      break;
    }
  } else {

  }
  if (arrghs->arg4 != (Addr )((void *)0)) {
    while (1) {
      if (vgPlain_tdict.track_post_mem_write) {
        (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid, arrghs->arg4,
                                                (SizeT )sizeof(struct vki_rusage ));
      } else {

      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_writev_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Int i ;
  struct vki_iovec *vec ;
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  Int here___1 ;
  long tmp___3 ;
  long tmp___4 ;
  Word wzz ;
  int tmp___5 ;
  long tmp___6 ;
  Bool tmp___7 ;

  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_writev ( %ld, %#lx, %llu )", arrghs->arg1, arrghs->arg2,
                   (ULong )arrghs->arg3);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4114,
                            (Char const   *)"vgSysWrap_generic_sys_writev_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4114,
                            (Char const   *)"vgSysWrap_generic_sys_writev_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"writev(fd)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(struct iovec  const  *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const struct iovec *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4114,
                            (Char const   *)"vgSysWrap_generic_sys_writev_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4114,
                            (Char const   *)"vgSysWrap_generic_sys_writev_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"writev(vector)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct iovec  const  *));
      break;
    }
    while (1) {
      here___1 = layout->o_arg3;
      tmp___3 = __builtin_expect((long )(! (! (sizeof(unsigned long ) <= sizeof(UWord )))),
                                 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(unsigned long) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4114,
                            (Char const   *)"vgSysWrap_generic_sys_writev_before",
                            "");
      }
      tmp___4 = __builtin_expect((long )(! (! (here___1 >= 0))), 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4114,
                            (Char const   *)"vgSysWrap_generic_sys_writev_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"writev(count)",
                                            (PtrdiffT )here___1,
                                            (SizeT )sizeof(unsigned long ));
      break;
    }
  } else {

  }
  tmp___7 = vgModuleLocal_fd_allowed((Int )arrghs->arg1,
                                     (Char const   *)"writev", tid, (Bool )0);
  if (tmp___7) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"writev(vector)",
                                              arrghs->arg2,
                                              arrghs->arg3 * (UWord )sizeof(struct vki_iovec ));
      } else {

      }
      break;
    }
    if (arrghs->arg2 != 0UL) {
      vec = (struct vki_iovec *)arrghs->arg2;
      i = 0;
      while (i < (Int )arrghs->arg3) {
        while (1) {
          if (vgPlain_tdict.track_pre_mem_read) {
            (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                  (Char *)"writev(vector[...])",
                                                  (Addr )(vec + i)->iov_base,
                                                  (SizeT )(vec + i)->iov_len);
          } else {

          }
          break;
        }
        i ++;
      }
    } else {

    }
  } else {
    while (1) {
      wzz = (Word )9;
      if (wzz >= 0L) {
        if (wzz < 10000L) {
          tmp___5 = 1;
        } else {
          tmp___5 = 0;
        }
      } else {
        tmp___5 = 0;
      }
      tmp___6 = __builtin_expect((long )tmp___5, 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"wzz >= 0 && wzz < 10000",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4116,
                            (Char const   *)"vgSysWrap_generic_sys_writev_before",
                            "");
      }
      status->what = (enum __anonenum_what_133 )1;
      status->sres = vgPlain_mk_SysRes_Error((UWord )wzz);
      break;
    }
  }
  return;
}
}
void vgSysWrap_generic_sys_utimes_before(ThreadId tid ,
                                         SyscallArgLayout *layout ,
                                         SyscallArgs *arrghs ,
                                         SyscallStatus *status , UWord *flags ) 
{ 
  Char *tmp ;
  Int here ;
  long tmp___0 ;
  long tmp___1 ;
  Int here___0 ;
  long tmp___2 ;
  long tmp___3 ;
  struct vki_timeval *zztv ;
  struct vki_timeval *zztv___0 ;

  {
  tmp = vgPlain_strstr((Char const   *)vgPlain_clo_sim_hints,
                       (Char *)"fuse-compatible");
  if (tmp) {
    *flags |= (unsigned long )(1 << 1);
  } else {

  }
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_utimes ( %#lx(%s), %#lx )", arrghs->arg1,
                   (char *)arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp___0 = __builtin_expect((long )(! (! (sizeof(char *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4134,
                            (Char const   *)"vgSysWrap_generic_sys_utimes_before",
                            "");
      }
      tmp___1 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4134,
                            (Char const   *)"vgSysWrap_generic_sys_utimes_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"utimes(filename)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___2 = __builtin_expect((long )(! (! (sizeof(struct timeval *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(struct timeval *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4134,
                            (Char const   *)"vgSysWrap_generic_sys_utimes_before",
                            "");
      }
      tmp___3 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___3) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4134,
                            (Char const   *)"vgSysWrap_generic_sys_utimes_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"utimes(tvp)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(struct timeval *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"utimes(filename)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  if (arrghs->arg2 != 0UL) {
    while (1) {
      zztv = (struct vki_timeval *)arrghs->arg2;
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"utimes(tvp[0])",
                                                (UWord )(& zztv->tv_sec),
                                                (SizeT )sizeof(zztv->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"utimes(tvp[0])",
                                                (UWord )(& zztv->tv_usec),
                                                (SizeT )sizeof(zztv->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
    while (1) {
      zztv___0 = (struct vki_timeval *)(arrghs->arg2 + (UWord )sizeof(struct vki_timeval ));
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"utimes(tvp[1])",
                                                (UWord )(& zztv___0->tv_sec),
                                                (SizeT )sizeof(zztv___0->tv_sec));
        } else {

        }
        break;
      }
      while (1) {
        if (vgPlain_tdict.track_pre_mem_read) {
          (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                                (Char *)"utimes(tvp[1])",
                                                (UWord )(& zztv___0->tv_usec),
                                                (SizeT )sizeof(zztv___0->tv_usec));
        } else {

        }
        break;
      }
      break;
    }
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_acct_before(ThreadId tid , SyscallArgLayout *layout ,
                                       SyscallArgs *arrghs ,
                                       SyscallStatus *status , UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_acct ( %#lx(%s) )", arrghs->arg1, (char *)arrghs->arg1);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(char const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const char *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4145,
                            (Char const   *)"vgSysWrap_generic_sys_acct_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4145,
                            (Char const   *)"vgSysWrap_generic_sys_acct_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"acct(filename)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(char const   *));
      break;
    }
  } else {

  }
  while (1) {
    if (vgPlain_tdict.track_pre_mem_read_asciiz) {
      (*(vgPlain_tdict.track_pre_mem_read_asciiz))((CorePart )3, tid,
                                                   (Char *)"acct(filename)",
                                                   arrghs->arg1);
    } else {

    }
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_pause_before(ThreadId tid ,
                                        SyscallArgLayout *layout ,
                                        SyscallArgs *arrghs ,
                                        SyscallStatus *status , UWord *flags ) 
{ 


  {
  *flags |= (unsigned long )(1 << 1);
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sys_pause ( )");
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
  } else {

  }
  return;
}
}
void vgSysWrap_generic_sys_sigaltstack_before(ThreadId tid ,
                                              SyscallArgLayout *layout ,
                                              SyscallArgs *arrghs ,
                                              SyscallStatus *status ,
                                              UWord *flags ) 
{ 
  Int here ;
  long tmp ;
  long tmp___0 ;
  Int here___0 ;
  long tmp___1 ;
  long tmp___2 ;
  vki_stack_t const   *ss ;

  {
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_printf("sigaltstack ( %#lx, %#lx )", arrghs->arg1, arrghs->arg2);
  } else {

  }
  if (vgPlain_tdict.track_pre_reg_read) {
    (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                          (Char *)"(syscallno)",
                                          (PtrdiffT )layout->o_sysno,
                                          (SizeT )sizeof(UWord ));
    while (1) {
      here = layout->o_arg1;
      tmp = __builtin_expect((long )(! (! (sizeof(vki_stack_t const   *) <= sizeof(UWord )))),
                             1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(const vki_stack_t *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4160,
                            (Char const   *)"vgSysWrap_generic_sys_sigaltstack_before",
                            "");
      }
      tmp___0 = __builtin_expect((long )(! (! (here >= 0))), 1L);
      if (tmp___0) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4160,
                            (Char const   *)"vgSysWrap_generic_sys_sigaltstack_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"sigaltstack(ss)",
                                            (PtrdiffT )here,
                                            (SizeT )sizeof(vki_stack_t const   *));
      break;
    }
    while (1) {
      here___0 = layout->o_arg2;
      tmp___1 = __builtin_expect((long )(! (! (sizeof(vki_stack_t *) <= sizeof(UWord )))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"sizeof(vki_stack_t *) <= sizeof(UWord)",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4160,
                            (Char const   *)"vgSysWrap_generic_sys_sigaltstack_before",
                            "");
      }
      tmp___2 = __builtin_expect((long )(! (! (here___0 >= 0))), 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"here >= 0",
                            (Char const   *)"m_syswrap/syswrap-generic.c", 4160,
                            (Char const   *)"vgSysWrap_generic_sys_sigaltstack_before",
                            "");
      }
      (*(vgPlain_tdict.track_pre_reg_read))((CorePart )3, tid,
                                            (Char *)"sigaltstack(oss)",
                                            (PtrdiffT )here___0,
                                            (SizeT )sizeof(vki_stack_t *));
      break;
    }
  } else {

  }
  if (arrghs->arg1 != 0UL) {
    ss = (vki_stack_t const   *)((vki_stack_t *)arrghs->arg1);
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"sigaltstack(ss)",
                                              (Addr )(& ss->ss_sp),
                                              (SizeT )sizeof(ss->ss_sp));
      } else {

      }
      break;
    }
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"sigaltstack(ss)",
                                              (Addr )(& ss->ss_flags),
                                              (SizeT )sizeof(ss->ss_flags));
      } else {

      }
      break;
    }
    while (1) {
      if (vgPlain_tdict.track_pre_mem_read) {
        (*(vgPlain_tdict.track_pre_mem_read))((CorePart )3, tid,
                                              (Char *)"sigaltstack(ss)",
                                              (Addr )(& ss->ss_size),
                                              (SizeT )sizeof(ss->ss_size));
      } else {

      }
      break;
    }
  } else {

  }
  if (arrghs->arg2 != 0UL) {
    while (1) {
      if (vgPlain_tdict.track_pre_mem_write) {
        (*(vgPlain_tdict.track_pre_mem_write))((CorePart )3, tid,
                                               (Char *)"sigaltstack(oss)",
                                               arrghs->arg2,
                                               (SizeT )sizeof(vki_stack_t ));
      } else {

      }
      break;
    }
  } else {

  }
  while (1) {
    status->what = (enum __anonenum_what_133 )1;
    status->sres = vgPlain_do_sys_sigaltstack(tid, (vki_stack_t *)arrghs->arg1,
                                              (vki_stack_t *)arrghs->arg2);
    break;
  }
  return;
}
}
void vgSysWrap_generic_sys_sigaltstack_after(ThreadId tid ,
                                             SyscallArgs *arrghs ,
                                             SyscallStatus *status ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  UWord tmp___2 ;

  {
  if ((unsigned int )status->what == 1U) {
    tmp = sr_isError(status->sres);
    if (tmp) {
      tmp___0 = 0;
    } else {
      tmp___0 = 1;
    }
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"SUCCESS",
                        (Char const   *)"m_syswrap/syswrap-generic.c", 4178,
                        (Char const   *)"vgSysWrap_generic_sys_sigaltstack_after",
                        "");
  }
  tmp___2 = getRES(status);
  if (tmp___2 == 0UL) {
    if (arrghs->arg2 != 0UL) {
      while (1) {
        if (vgPlain_tdict.track_post_mem_write) {
          (*(vgPlain_tdict.track_post_mem_write))((CorePart )3, tid,
                                                  arrghs->arg2,
                                                  (SizeT )sizeof(vki_stack_t ));
        } else {

        }
        break;
      }
    } else {

    }
  } else {

  }
  return;
}
}
