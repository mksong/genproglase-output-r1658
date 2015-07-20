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
typedef UInt U256[8];
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
   UWord _valEx ;
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
    Ity_D32 = 69641,
    Ity_D64 = 69642,
    Ity_D128 = 69643,
    Ity_F128 = 69644,
    Ity_V128 = 69645,
    Ity_V256 = 69646
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
    Iop_AddD64 = 82367,
    Iop_SubD64 = 82368,
    Iop_MulD64 = 82369,
    Iop_DivD64 = 82370,
    Iop_AddD128 = 82371,
    Iop_SubD128 = 82372,
    Iop_MulD128 = 82373,
    Iop_DivD128 = 82374,
    Iop_ShlD64 = 82375,
    Iop_ShrD64 = 82376,
    Iop_ShlD128 = 82377,
    Iop_ShrD128 = 82378,
    Iop_D32toD64 = 82379,
    Iop_D64toD128 = 82380,
    Iop_I64StoD128 = 82381,
    Iop_D64toD32 = 82382,
    Iop_D128toD64 = 82383,
    Iop_I64StoD64 = 82384,
    Iop_D64toI64S = 82385,
    Iop_D128toI64S = 82386,
    Iop_RoundD64toInt = 82387,
    Iop_RoundD128toInt = 82388,
    Iop_CmpD64 = 82389,
    Iop_CmpD128 = 82390,
    Iop_QuantizeD64 = 82391,
    Iop_QuantizeD128 = 82392,
    Iop_SignificanceRoundD64 = 82393,
    Iop_SignificanceRoundD128 = 82394,
    Iop_ExtractExpD64 = 82395,
    Iop_ExtractExpD128 = 82396,
    Iop_InsertExpD64 = 82397,
    Iop_InsertExpD128 = 82398,
    Iop_D64HLtoD128 = 82399,
    Iop_D128HItoD64 = 82400,
    Iop_D128LOtoD64 = 82401,
    Iop_DPBtoBCD = 82402,
    Iop_BCDtoDPB = 82403,
    Iop_ReinterpI64asD64 = 82404,
    Iop_ReinterpD64asI64 = 82405,
    Iop_Add32Fx4 = 82406,
    Iop_Sub32Fx4 = 82407,
    Iop_Mul32Fx4 = 82408,
    Iop_Div32Fx4 = 82409,
    Iop_Max32Fx4 = 82410,
    Iop_Min32Fx4 = 82411,
    Iop_Add32Fx2 = 82412,
    Iop_Sub32Fx2 = 82413,
    Iop_CmpEQ32Fx4 = 82414,
    Iop_CmpLT32Fx4 = 82415,
    Iop_CmpLE32Fx4 = 82416,
    Iop_CmpUN32Fx4 = 82417,
    Iop_CmpGT32Fx4 = 82418,
    Iop_CmpGE32Fx4 = 82419,
    Iop_Abs32Fx4 = 82420,
    Iop_PwMax32Fx4 = 82421,
    Iop_PwMin32Fx4 = 82422,
    Iop_Sqrt32Fx4 = 82423,
    Iop_RSqrt32Fx4 = 82424,
    Iop_Neg32Fx4 = 82425,
    Iop_Recip32Fx4 = 82426,
    Iop_Recps32Fx4 = 82427,
    Iop_Rsqrte32Fx4 = 82428,
    Iop_Rsqrts32Fx4 = 82429,
    Iop_I32UtoFx4 = 82430,
    Iop_I32StoFx4 = 82431,
    Iop_FtoI32Ux4_RZ = 82432,
    Iop_FtoI32Sx4_RZ = 82433,
    Iop_QFtoI32Ux4_RZ = 82434,
    Iop_QFtoI32Sx4_RZ = 82435,
    Iop_RoundF32x4_RM = 82436,
    Iop_RoundF32x4_RP = 82437,
    Iop_RoundF32x4_RN = 82438,
    Iop_RoundF32x4_RZ = 82439,
    Iop_F32ToFixed32Ux4_RZ = 82440,
    Iop_F32ToFixed32Sx4_RZ = 82441,
    Iop_Fixed32UToF32x4_RN = 82442,
    Iop_Fixed32SToF32x4_RN = 82443,
    Iop_F32toF16x4 = 82444,
    Iop_F16toF32x4 = 82445,
    Iop_Add32F0x4 = 82446,
    Iop_Sub32F0x4 = 82447,
    Iop_Mul32F0x4 = 82448,
    Iop_Div32F0x4 = 82449,
    Iop_Max32F0x4 = 82450,
    Iop_Min32F0x4 = 82451,
    Iop_CmpEQ32F0x4 = 82452,
    Iop_CmpLT32F0x4 = 82453,
    Iop_CmpLE32F0x4 = 82454,
    Iop_CmpUN32F0x4 = 82455,
    Iop_Recip32F0x4 = 82456,
    Iop_Sqrt32F0x4 = 82457,
    Iop_RSqrt32F0x4 = 82458,
    Iop_Add64Fx2 = 82459,
    Iop_Sub64Fx2 = 82460,
    Iop_Mul64Fx2 = 82461,
    Iop_Div64Fx2 = 82462,
    Iop_Max64Fx2 = 82463,
    Iop_Min64Fx2 = 82464,
    Iop_CmpEQ64Fx2 = 82465,
    Iop_CmpLT64Fx2 = 82466,
    Iop_CmpLE64Fx2 = 82467,
    Iop_CmpUN64Fx2 = 82468,
    Iop_Recip64Fx2 = 82469,
    Iop_Sqrt64Fx2 = 82470,
    Iop_RSqrt64Fx2 = 82471,
    Iop_Add64F0x2 = 82472,
    Iop_Sub64F0x2 = 82473,
    Iop_Mul64F0x2 = 82474,
    Iop_Div64F0x2 = 82475,
    Iop_Max64F0x2 = 82476,
    Iop_Min64F0x2 = 82477,
    Iop_CmpEQ64F0x2 = 82478,
    Iop_CmpLT64F0x2 = 82479,
    Iop_CmpLE64F0x2 = 82480,
    Iop_CmpUN64F0x2 = 82481,
    Iop_Recip64F0x2 = 82482,
    Iop_Sqrt64F0x2 = 82483,
    Iop_RSqrt64F0x2 = 82484,
    Iop_V128to64 = 82485,
    Iop_V128HIto64 = 82486,
    Iop_64HLtoV128 = 82487,
    Iop_64UtoV128 = 82488,
    Iop_SetV128lo64 = 82489,
    Iop_32UtoV128 = 82490,
    Iop_V128to32 = 82491,
    Iop_SetV128lo32 = 82492,
    Iop_NotV128 = 82493,
    Iop_AndV128 = 82494,
    Iop_OrV128 = 82495,
    Iop_XorV128 = 82496,
    Iop_ShlV128 = 82497,
    Iop_ShrV128 = 82498,
    Iop_CmpNEZ8x16 = 82499,
    Iop_CmpNEZ16x8 = 82500,
    Iop_CmpNEZ32x4 = 82501,
    Iop_CmpNEZ64x2 = 82502,
    Iop_Add8x16 = 82503,
    Iop_Add16x8 = 82504,
    Iop_Add32x4 = 82505,
    Iop_Add64x2 = 82506,
    Iop_QAdd8Ux16 = 82507,
    Iop_QAdd16Ux8 = 82508,
    Iop_QAdd32Ux4 = 82509,
    Iop_QAdd64Ux2 = 82510,
    Iop_QAdd8Sx16 = 82511,
    Iop_QAdd16Sx8 = 82512,
    Iop_QAdd32Sx4 = 82513,
    Iop_QAdd64Sx2 = 82514,
    Iop_Sub8x16 = 82515,
    Iop_Sub16x8 = 82516,
    Iop_Sub32x4 = 82517,
    Iop_Sub64x2 = 82518,
    Iop_QSub8Ux16 = 82519,
    Iop_QSub16Ux8 = 82520,
    Iop_QSub32Ux4 = 82521,
    Iop_QSub64Ux2 = 82522,
    Iop_QSub8Sx16 = 82523,
    Iop_QSub16Sx8 = 82524,
    Iop_QSub32Sx4 = 82525,
    Iop_QSub64Sx2 = 82526,
    Iop_Mul8x16 = 82527,
    Iop_Mul16x8 = 82528,
    Iop_Mul32x4 = 82529,
    Iop_MulHi16Ux8 = 82530,
    Iop_MulHi32Ux4 = 82531,
    Iop_MulHi16Sx8 = 82532,
    Iop_MulHi32Sx4 = 82533,
    Iop_MullEven8Ux16 = 82534,
    Iop_MullEven16Ux8 = 82535,
    Iop_MullEven8Sx16 = 82536,
    Iop_MullEven16Sx8 = 82537,
    Iop_Mull8Ux8 = 82538,
    Iop_Mull8Sx8 = 82539,
    Iop_Mull16Ux4 = 82540,
    Iop_Mull16Sx4 = 82541,
    Iop_Mull32Ux2 = 82542,
    Iop_Mull32Sx2 = 82543,
    Iop_QDMulHi16Sx8 = 82544,
    Iop_QDMulHi32Sx4 = 82545,
    Iop_QRDMulHi16Sx8 = 82546,
    Iop_QRDMulHi32Sx4 = 82547,
    Iop_QDMulLong16Sx4 = 82548,
    Iop_QDMulLong32Sx2 = 82549,
    Iop_PolynomialMul8x16 = 82550,
    Iop_PolynomialMull8x8 = 82551,
    Iop_PwAdd8x16 = 82552,
    Iop_PwAdd16x8 = 82553,
    Iop_PwAdd32x4 = 82554,
    Iop_PwAdd32Fx2 = 82555,
    Iop_PwAddL8Ux16 = 82556,
    Iop_PwAddL16Ux8 = 82557,
    Iop_PwAddL32Ux4 = 82558,
    Iop_PwAddL8Sx16 = 82559,
    Iop_PwAddL16Sx8 = 82560,
    Iop_PwAddL32Sx4 = 82561,
    Iop_Abs8x16 = 82562,
    Iop_Abs16x8 = 82563,
    Iop_Abs32x4 = 82564,
    Iop_Avg8Ux16 = 82565,
    Iop_Avg16Ux8 = 82566,
    Iop_Avg32Ux4 = 82567,
    Iop_Avg8Sx16 = 82568,
    Iop_Avg16Sx8 = 82569,
    Iop_Avg32Sx4 = 82570,
    Iop_Max8Sx16 = 82571,
    Iop_Max16Sx8 = 82572,
    Iop_Max32Sx4 = 82573,
    Iop_Max8Ux16 = 82574,
    Iop_Max16Ux8 = 82575,
    Iop_Max32Ux4 = 82576,
    Iop_Min8Sx16 = 82577,
    Iop_Min16Sx8 = 82578,
    Iop_Min32Sx4 = 82579,
    Iop_Min8Ux16 = 82580,
    Iop_Min16Ux8 = 82581,
    Iop_Min32Ux4 = 82582,
    Iop_CmpEQ8x16 = 82583,
    Iop_CmpEQ16x8 = 82584,
    Iop_CmpEQ32x4 = 82585,
    Iop_CmpEQ64x2 = 82586,
    Iop_CmpGT8Sx16 = 82587,
    Iop_CmpGT16Sx8 = 82588,
    Iop_CmpGT32Sx4 = 82589,
    Iop_CmpGT64Sx2 = 82590,
    Iop_CmpGT8Ux16 = 82591,
    Iop_CmpGT16Ux8 = 82592,
    Iop_CmpGT32Ux4 = 82593,
    Iop_Cnt8x16 = 82594,
    Iop_Clz8Sx16 = 82595,
    Iop_Clz16Sx8 = 82596,
    Iop_Clz32Sx4 = 82597,
    Iop_Cls8Sx16 = 82598,
    Iop_Cls16Sx8 = 82599,
    Iop_Cls32Sx4 = 82600,
    Iop_ShlN8x16 = 82601,
    Iop_ShlN16x8 = 82602,
    Iop_ShlN32x4 = 82603,
    Iop_ShlN64x2 = 82604,
    Iop_ShrN8x16 = 82605,
    Iop_ShrN16x8 = 82606,
    Iop_ShrN32x4 = 82607,
    Iop_ShrN64x2 = 82608,
    Iop_SarN8x16 = 82609,
    Iop_SarN16x8 = 82610,
    Iop_SarN32x4 = 82611,
    Iop_SarN64x2 = 82612,
    Iop_Shl8x16 = 82613,
    Iop_Shl16x8 = 82614,
    Iop_Shl32x4 = 82615,
    Iop_Shl64x2 = 82616,
    Iop_Shr8x16 = 82617,
    Iop_Shr16x8 = 82618,
    Iop_Shr32x4 = 82619,
    Iop_Shr64x2 = 82620,
    Iop_Sar8x16 = 82621,
    Iop_Sar16x8 = 82622,
    Iop_Sar32x4 = 82623,
    Iop_Sar64x2 = 82624,
    Iop_Sal8x16 = 82625,
    Iop_Sal16x8 = 82626,
    Iop_Sal32x4 = 82627,
    Iop_Sal64x2 = 82628,
    Iop_Rol8x16 = 82629,
    Iop_Rol16x8 = 82630,
    Iop_Rol32x4 = 82631,
    Iop_QShl8x16 = 82632,
    Iop_QShl16x8 = 82633,
    Iop_QShl32x4 = 82634,
    Iop_QShl64x2 = 82635,
    Iop_QSal8x16 = 82636,
    Iop_QSal16x8 = 82637,
    Iop_QSal32x4 = 82638,
    Iop_QSal64x2 = 82639,
    Iop_QShlN8Sx16 = 82640,
    Iop_QShlN16Sx8 = 82641,
    Iop_QShlN32Sx4 = 82642,
    Iop_QShlN64Sx2 = 82643,
    Iop_QShlN8x16 = 82644,
    Iop_QShlN16x8 = 82645,
    Iop_QShlN32x4 = 82646,
    Iop_QShlN64x2 = 82647,
    Iop_QSalN8x16 = 82648,
    Iop_QSalN16x8 = 82649,
    Iop_QSalN32x4 = 82650,
    Iop_QSalN64x2 = 82651,
    Iop_QNarrowBin16Sto8Ux16 = 82652,
    Iop_QNarrowBin32Sto16Ux8 = 82653,
    Iop_QNarrowBin16Sto8Sx16 = 82654,
    Iop_QNarrowBin32Sto16Sx8 = 82655,
    Iop_QNarrowBin16Uto8Ux16 = 82656,
    Iop_QNarrowBin32Uto16Ux8 = 82657,
    Iop_NarrowBin16to8x16 = 82658,
    Iop_NarrowBin32to16x8 = 82659,
    Iop_NarrowUn16to8x8 = 82660,
    Iop_NarrowUn32to16x4 = 82661,
    Iop_NarrowUn64to32x2 = 82662,
    Iop_QNarrowUn16Sto8Sx8 = 82663,
    Iop_QNarrowUn32Sto16Sx4 = 82664,
    Iop_QNarrowUn64Sto32Sx2 = 82665,
    Iop_QNarrowUn16Sto8Ux8 = 82666,
    Iop_QNarrowUn32Sto16Ux4 = 82667,
    Iop_QNarrowUn64Sto32Ux2 = 82668,
    Iop_QNarrowUn16Uto8Ux8 = 82669,
    Iop_QNarrowUn32Uto16Ux4 = 82670,
    Iop_QNarrowUn64Uto32Ux2 = 82671,
    Iop_Widen8Uto16x8 = 82672,
    Iop_Widen16Uto32x4 = 82673,
    Iop_Widen32Uto64x2 = 82674,
    Iop_Widen8Sto16x8 = 82675,
    Iop_Widen16Sto32x4 = 82676,
    Iop_Widen32Sto64x2 = 82677,
    Iop_InterleaveHI8x16 = 82678,
    Iop_InterleaveHI16x8 = 82679,
    Iop_InterleaveHI32x4 = 82680,
    Iop_InterleaveHI64x2 = 82681,
    Iop_InterleaveLO8x16 = 82682,
    Iop_InterleaveLO16x8 = 82683,
    Iop_InterleaveLO32x4 = 82684,
    Iop_InterleaveLO64x2 = 82685,
    Iop_InterleaveOddLanes8x16 = 82686,
    Iop_InterleaveEvenLanes8x16 = 82687,
    Iop_InterleaveOddLanes16x8 = 82688,
    Iop_InterleaveEvenLanes16x8 = 82689,
    Iop_InterleaveOddLanes32x4 = 82690,
    Iop_InterleaveEvenLanes32x4 = 82691,
    Iop_CatOddLanes8x16 = 82692,
    Iop_CatOddLanes16x8 = 82693,
    Iop_CatOddLanes32x4 = 82694,
    Iop_CatEvenLanes8x16 = 82695,
    Iop_CatEvenLanes16x8 = 82696,
    Iop_CatEvenLanes32x4 = 82697,
    Iop_GetElem8x16 = 82698,
    Iop_GetElem16x8 = 82699,
    Iop_GetElem32x4 = 82700,
    Iop_GetElem64x2 = 82701,
    Iop_Dup8x16 = 82702,
    Iop_Dup16x8 = 82703,
    Iop_Dup32x4 = 82704,
    Iop_ExtractV128 = 82705,
    Iop_Reverse16_8x16 = 82706,
    Iop_Reverse32_8x16 = 82707,
    Iop_Reverse32_16x8 = 82708,
    Iop_Reverse64_8x16 = 82709,
    Iop_Reverse64_16x8 = 82710,
    Iop_Reverse64_32x4 = 82711,
    Iop_Perm8x16 = 82712,
    Iop_Recip32x4 = 82713,
    Iop_Rsqrte32x4 = 82714,
    Iop_V256to64_0 = 82715,
    Iop_V256to64_1 = 82716,
    Iop_V256to64_2 = 82717,
    Iop_V256to64_3 = 82718,
    Iop_64x4toV256 = 82719,
    Iop_V256toV128_0 = 82720,
    Iop_V256toV128_1 = 82721,
    Iop_V128HLtoV256 = 82722,
    Iop_AndV256 = 82723,
    Iop_OrV256 = 82724,
    Iop_XorV256 = 82725,
    Iop_NotV256 = 82726,
    Iop_Add64Fx4 = 82727,
    Iop_Sub64Fx4 = 82728,
    Iop_Mul64Fx4 = 82729,
    Iop_Div64Fx4 = 82730,
    Iop_Add32Fx8 = 82731,
    Iop_Sub32Fx8 = 82732,
    Iop_Mul32Fx8 = 82733,
    Iop_Div32Fx8 = 82734
} ;
typedef enum __anonenum_IROp_10 IROp;
enum __anonenum_IRRoundingMode_11 {
    Irrm_NEAREST = 0,
    Irrm_NegINF = 1,
    Irrm_PosINF = 2,
    Irrm_ZERO = 3
} ;
typedef enum __anonenum_IRRoundingMode_11 IRRoundingMode;
enum __anonenum_IRRoundingModeDFP_12 {
    Irrm_DFP_NEAREST = 0,
    Irrm_DFP_NegINF = 1,
    Irrm_DFP_PosINF = 2,
    Irrm_DFP_ZERO = 3,
    Irrm_DFP_NEAREST_TIE_AWAY_0 = 4,
    Irrm_DFP_PREPARE_SHORTER = 5,
    Irrm_DFP_AWAY_FROM_ZERO = 6,
    Irrm_DFP_NEAREST_TIE_TOWARD_0 = 7
} ;
typedef enum __anonenum_IRRoundingModeDFP_12 IRRoundingModeDFP;
enum __anonenum_IRCmpF64Result_13 {
    Ircr_UN = 69,
    Ircr_LT = 1,
    Ircr_GT = 0,
    Ircr_EQ = 64
} ;
typedef enum __anonenum_IRCmpF64Result_13 IRCmpF64Result;
typedef IRCmpF64Result IRCmpF32Result;
typedef IRCmpF64Result IRCmpF128Result;
struct _IRQop;
typedef struct _IRQop IRQop;
struct _IRTriop;
typedef struct _IRTriop IRTriop;
enum __anonenum_IRExprTag_14 {
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
typedef enum __anonenum_IRExprTag_14 IRExprTag;
struct _IRExpr;
typedef struct _IRExpr IRExpr;
struct __anonstruct_Binder_16 {
   Int binder ;
};
struct __anonstruct_Get_17 {
   Int offset ;
   IRType ty ;
};
struct __anonstruct_GetI_18 {
   IRRegArray *descr ;
   IRExpr *ix ;
   Int bias ;
};
struct __anonstruct_RdTmp_19 {
   IRTemp tmp ;
};
struct __anonstruct_Qop_20 {
   IRQop *details ;
};
struct __anonstruct_Triop_21 {
   IRTriop *details ;
};
struct __anonstruct_Binop_22 {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
};
struct __anonstruct_Unop_23 {
   IROp op ;
   IRExpr *arg ;
};
struct __anonstruct_Load_24 {
   IREndness end ;
   IRType ty ;
   IRExpr *addr ;
};
struct __anonstruct_Const_25 {
   IRConst *con ;
};
struct __anonstruct_CCall_26 {
   IRCallee *cee ;
   IRType retty ;
   IRExpr **args ;
};
struct __anonstruct_Mux0X_27 {
   IRExpr *cond ;
   IRExpr *expr0 ;
   IRExpr *exprX ;
};
union __anonunion_Iex_15 {
   struct __anonstruct_Binder_16 Binder ;
   struct __anonstruct_Get_17 Get ;
   struct __anonstruct_GetI_18 GetI ;
   struct __anonstruct_RdTmp_19 RdTmp ;
   struct __anonstruct_Qop_20 Qop ;
   struct __anonstruct_Triop_21 Triop ;
   struct __anonstruct_Binop_22 Binop ;
   struct __anonstruct_Unop_23 Unop ;
   struct __anonstruct_Load_24 Load ;
   struct __anonstruct_Const_25 Const ;
   struct __anonstruct_CCall_26 CCall ;
   struct __anonstruct_Mux0X_27 Mux0X ;
};
struct _IRExpr {
   IRExprTag tag ;
   union __anonunion_Iex_15 Iex ;
};
struct _IRTriop {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
   IRExpr *arg3 ;
};
struct _IRQop {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
   IRExpr *arg3 ;
   IRExpr *arg4 ;
};
enum __anonenum_IRJumpKind_28 {
    Ijk_INVALID = 90112,
    Ijk_Boring = 90113,
    Ijk_Call = 90114,
    Ijk_Ret = 90115,
    Ijk_ClientReq = 90116,
    Ijk_Yield = 90117,
    Ijk_EmWarn = 90118,
    Ijk_EmFail = 90119,
    Ijk_NoDecode = 90120,
    Ijk_MapFail = 90121,
    Ijk_TInval = 90122,
    Ijk_NoRedir = 90123,
    Ijk_SigTRAP = 90124,
    Ijk_SigSEGV = 90125,
    Ijk_SigBUS = 90126,
    Ijk_Sys_syscall = 90127,
    Ijk_Sys_int32 = 90128,
    Ijk_Sys_int128 = 90129,
    Ijk_Sys_int129 = 90130,
    Ijk_Sys_int130 = 90131,
    Ijk_Sys_sysenter = 90132
} ;
typedef enum __anonenum_IRJumpKind_28 IRJumpKind;
enum __anonenum_IREffect_29 {
    Ifx_None = 5888,
    Ifx_Read = 5889,
    Ifx_Write = 5890,
    Ifx_Modify = 5891
} ;
typedef enum __anonenum_IREffect_29 IREffect;
struct __anonstruct_fxState_30 {
   IREffect fx : 16 ;
   UShort offset ;
   UShort size ;
   UChar nRepeats ;
   UChar repeatLen ;
};
struct _IRDirty {
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
typedef struct _IRDirty IRDirty;
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
struct __anonstruct_IRPutI_33 {
   IRRegArray *descr ;
   IRExpr *ix ;
   Int bias ;
   IRExpr *data ;
};
typedef struct __anonstruct_IRPutI_33 IRPutI;
enum __anonenum_IRStmtTag_34 {
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
typedef enum __anonenum_IRStmtTag_34 IRStmtTag;
struct __anonstruct_NoOp_36 {

};
struct __anonstruct_IMark_37 {
   Addr64 addr ;
   Int len ;
   UChar delta ;
};
struct __anonstruct_AbiHint_38 {
   IRExpr *base ;
   Int len ;
   IRExpr *nia ;
};
struct __anonstruct_Put_39 {
   Int offset ;
   IRExpr *data ;
};
struct __anonstruct_PutI_40 {
   IRPutI *details ;
};
struct __anonstruct_WrTmp_41 {
   IRTemp tmp ;
   IRExpr *data ;
};
struct __anonstruct_Store_42 {
   IREndness end ;
   IRExpr *addr ;
   IRExpr *data ;
};
struct __anonstruct_CAS_43 {
   IRCAS *details ;
};
struct __anonstruct_LLSC_44 {
   IREndness end ;
   IRTemp result ;
   IRExpr *addr ;
   IRExpr *storedata ;
};
struct __anonstruct_Dirty_45 {
   IRDirty *details ;
};
struct __anonstruct_MBE_46 {
   IRMBusEvent event ;
};
struct __anonstruct_Exit_47 {
   IRExpr *guard ;
   IRConst *dst ;
   IRJumpKind jk ;
   Int offsIP ;
};
union __anonunion_Ist_35 {
   struct __anonstruct_NoOp_36 NoOp ;
   struct __anonstruct_IMark_37 IMark ;
   struct __anonstruct_AbiHint_38 AbiHint ;
   struct __anonstruct_Put_39 Put ;
   struct __anonstruct_PutI_40 PutI ;
   struct __anonstruct_WrTmp_41 WrTmp ;
   struct __anonstruct_Store_42 Store ;
   struct __anonstruct_CAS_43 CAS ;
   struct __anonstruct_LLSC_44 LLSC ;
   struct __anonstruct_Dirty_45 Dirty ;
   struct __anonstruct_MBE_46 MBE ;
   struct __anonstruct_Exit_47 Exit ;
};
struct _IRStmt {
   IRStmtTag tag ;
   union __anonunion_Ist_35 Ist ;
};
typedef struct _IRStmt IRStmt;
struct __anonstruct_IRTypeEnv_48 {
   IRType *types ;
   Int types_size ;
   Int types_used ;
};
typedef struct __anonstruct_IRTypeEnv_48 IRTypeEnv;
struct __anonstruct_IRSB_49 {
   IRTypeEnv *tyenv ;
   IRStmt **stmts ;
   Int stmts_size ;
   Int stmts_used ;
   IRExpr *next ;
   IRJumpKind jumpkind ;
   Int offsIP ;
};
typedef struct __anonstruct_IRSB_49 IRSB;
enum __anonenum_VexArch_50 {
    VexArch_INVALID = 0,
    VexArchX86 = 1,
    VexArchAMD64 = 2,
    VexArchARM = 3,
    VexArchPPC32 = 4,
    VexArchPPC64 = 5,
    VexArchS390X = 6,
    VexArchMIPS32 = 7
} ;
typedef enum __anonenum_VexArch_50 VexArch;
struct __anonstruct_VexArchInfo_51 {
   UInt hwcaps ;
   Int ppc_cache_line_szB ;
   UInt ppc_dcbz_szB ;
   UInt ppc_dcbzl_szB ;
};
typedef struct __anonstruct_VexArchInfo_51 VexArchInfo;
struct __anonstruct_VexAbiInfo_52 {
   Int guest_stack_redzone_size ;
   Bool guest_amd64_assume_fs_is_zero ;
   Bool guest_amd64_assume_gs_is_0x60 ;
   Bool guest_ppc_zap_RZ_at_blr ;
   Bool (*guest_ppc_zap_RZ_at_bl)(Addr64  ) ;
   Bool guest_ppc_sc_continues_at_LR ;
   Bool host_ppc_calls_use_fndescrs ;
   Bool host_ppc32_regalign_int64_args ;
};
typedef struct __anonstruct_VexAbiInfo_52 VexAbiInfo;
struct __anonstruct_VexControl_53 {
   Int iropt_verbosity ;
   Int iropt_level ;
   Bool iropt_precise_memory_exns ;
   Int iropt_unroll_thresh ;
   Int guest_max_insns ;
   Int guest_chase_thresh ;
   Bool guest_chase_cond ;
};
typedef struct __anonstruct_VexControl_53 VexControl;
union __anonunion_x_54 {
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
   union __anonunion_x_54 x ;
};
struct __anonstruct_alwaysDefd_56 {
   Int offset ;
   Int size ;
};
struct __anonstruct_VexGuestLayout_55 {
   Int total_sizeB ;
   Int offset_SP ;
   Int sizeof_SP ;
   Int offset_FP ;
   Int sizeof_FP ;
   Int offset_IP ;
   Int sizeof_IP ;
   Int n_alwaysDefd ;
   struct __anonstruct_alwaysDefd_56 alwaysDefd[24] ;
};
typedef struct __anonstruct_VexGuestLayout_55 VexGuestLayout;
enum __anonenum_status_58 {
    VexTransOK = 0,
    VexTransAccessFail = 1,
    VexTransOutputFull = 2
} ;
struct __anonstruct_VexTranslateResult_57 {
   enum __anonenum_status_58 status ;
   UInt n_sc_extents ;
   Int offs_profInc ;
   UInt n_guest_instrs ;
};
typedef struct __anonstruct_VexTranslateResult_57 VexTranslateResult;
struct __anonstruct_VexGuestExtents_59 {
   Addr64 base[3] ;
   UShort len[3] ;
   UShort n_used ;
};
typedef struct __anonstruct_VexGuestExtents_59 VexGuestExtents;
struct __anonstruct_VexTranslateArgs_60 {
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
   Bool addProfInc ;
   void *disp_cp_chain_me_to_slowEP ;
   void *disp_cp_chain_me_to_fastEP ;
   void *disp_cp_xindir ;
   void *disp_cp_xassisted ;
};
typedef struct __anonstruct_VexTranslateArgs_60 VexTranslateArgs;
struct __anonstruct_VexInvalRange_61 {
   HWord start ;
   HWord len ;
};
typedef struct __anonstruct_VexInvalRange_61 VexInvalRange;
enum __anonenum_VexEmWarn_62 {
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
typedef enum __anonenum_VexEmWarn_62 VexEmWarn;
struct __anonstruct_VexGuestX86State_63 {
   UInt host_EvC_FAILADDR ;
   UInt host_EvC_COUNTER ;
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
   UInt padding[5] ;
};
typedef struct __anonstruct_VexGuestX86State_63 VexGuestX86State;
struct __anonstruct_Bits_66 {
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
struct __anonstruct_Words_67 {
   UInt word1 ;
   UInt word2 ;
};
union __anonunion_LdtEnt_65 {
   struct __anonstruct_Bits_66 Bits ;
   struct __anonstruct_Words_67 Words ;
};
struct __anonstruct_VexGuestX86SegDescr_64 {
   union __anonunion_LdtEnt_65 LdtEnt ;
};
typedef struct __anonstruct_VexGuestX86SegDescr_64 VexGuestX86SegDescr;
struct __anonstruct_X86_70 {
   UInt r_ebp ;
};
struct __anonstruct_AMD64_71 {
   ULong r_rbp ;
};
struct __anonstruct_PPC32_72 {
   UInt r_lr ;
};
struct __anonstruct_PPC64_73 {
   ULong r_lr ;
};
struct __anonstruct_ARM_74 {
   UInt r14 ;
   UInt r12 ;
   UInt r11 ;
   UInt r7 ;
};
struct __anonstruct_S390X_75 {
   ULong r_fp ;
   ULong r_lr ;
};
struct __anonstruct_MIPS32_76 {
   UInt r30 ;
   UInt r31 ;
   UInt r28 ;
};
union __anonunion_misc_69 {
   struct __anonstruct_X86_70 X86 ;
   struct __anonstruct_AMD64_71 AMD64 ;
   struct __anonstruct_PPC32_72 PPC32 ;
   struct __anonstruct_PPC64_73 PPC64 ;
   struct __anonstruct_ARM_74 ARM ;
   struct __anonstruct_S390X_75 S390X ;
   struct __anonstruct_MIPS32_76 MIPS32 ;
};
struct __anonstruct_UnwindStartRegs_68 {
   ULong r_pc ;
   ULong r_sp ;
   union __anonunion_misc_69 misc ;
};
typedef struct __anonstruct_UnwindStartRegs_68 UnwindStartRegs;
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
struct __anonstruct___vki_kernel_fsid_t_77 {
   int val[2] ;
};
typedef struct __anonstruct___vki_kernel_fsid_t_77 __vki_kernel_fsid_t;
struct __anonstruct___vki_kernel_fd_set_78 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___vki_kernel_fd_set_78 __vki_kernel_fd_set;
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
struct __anonstruct_vki_sigset_t_79 {
   unsigned long sig[2] ;
};
typedef struct __anonstruct_vki_sigset_t_79 vki_sigset_t;
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
typedef __vki_u16 __vki_le16;
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
struct __anonstruct__kill_81 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
};
struct __anonstruct__timer_82 {
   vki_timer_t _tid ;
   int _overrun ;
   char _pad[sizeof(vki_uid_t ) - sizeof(int )] ;
   vki_sigval_t _sigval ;
   int _sys_private ;
};
struct __anonstruct__rt_83 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
   vki_sigval_t _sigval ;
};
struct __anonstruct__sigchld_84 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
   int _status ;
   vki_clock_t _utime ;
   vki_clock_t _stime ;
};
struct __anonstruct__sigfault_85 {
   void *_addr ;
};
struct __anonstruct__sigpoll_86 {
   long _band ;
   int _fd ;
};
union __anonunion__sifields_80 {
   int _pad[(128U - 3U * sizeof(int )) / sizeof(int )] ;
   struct __anonstruct__kill_81 _kill ;
   struct __anonstruct__timer_82 _timer ;
   struct __anonstruct__rt_83 _rt ;
   struct __anonstruct__sigchld_84 _sigchld ;
   struct __anonstruct__sigfault_85 _sigfault ;
   struct __anonstruct__sigpoll_86 _sigpoll ;
};
struct vki_siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_80 _sifields ;
};
typedef struct vki_siginfo vki_siginfo_t;
struct __anonstruct__sigev_thread_88 {
   void (*_function)(vki_sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_87 {
   int _pad[(64U - (sizeof(int ) * 2U + sizeof(vki_sigval_t ))) / sizeof(int )] ;
   int _tid ;
   struct __anonstruct__sigev_thread_88 _sigev_thread ;
};
struct vki_sigevent {
   vki_sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_87 _sigev_un ;
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
union __anonunion_vki_in6_u_89 {
   __vki_u8 u6_addr8[16] ;
   __vki_u16 u6_addr16[8] ;
   __vki_u32 u6_addr32[4] ;
};
struct vki_in6_addr {
   union __anonunion_vki_in6_u_89 vki_in6_u ;
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
union __anonunion_ifs_ifsu_90 {
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
   union __anonunion_ifs_ifsu_90 ifs_ifsu ;
};
union __anonunion_ifr_ifrn_91 {
   char ifrn_name[16] ;
};
union __anonunion_ifr_ifru_92 {
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
   union __anonunion_ifr_ifrn_91 ifr_ifrn ;
   union __anonunion_ifr_ifru_92 ifr_ifru ;
};
union __anonunion_ifc_ifcu_93 {
   char *ifcu_buf ;
   struct vki_ifreq *ifcu_req ;
};
struct vki_ifconf {
   int ifc_len ;
   union __anonunion_ifc_ifcu_93 ifc_ifcu ;
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
enum __anonenum_94 {
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
struct __anonstruct_vki_isdn_net_ioctl_phone_95 {
   char name[10] ;
   char phone[32] ;
   int outgoing ;
};
typedef struct __anonstruct_vki_isdn_net_ioctl_phone_95 vki_isdn_net_ioctl_phone;
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
struct __anonstruct_97 {
   int  : 0 ;
};
struct __anonstruct_98 {
   int  : 0 ;
};
enum __anonenum_96 {
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
enum __anonenum_99 {
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
struct vki_i2c_msg {
   __vki_u16 addr ;
   __vki_u16 flags ;
   __vki_u16 len ;
   __vki_u8 *buf ;
};
struct vki_i2c_rdwr_ioctl_data {
   struct vki_i2c_msg *msgs ;
   __vki_u32 nmsgs ;
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
union __anonunion_ifr_ifrn_100 {
   char ifrn_name[16] ;
};
struct vki_iwreq {
   union __anonunion_ifr_ifrn_100 ifr_ifrn ;
   union vki_iwreq_data u ;
};
union __anonunion____missing_field_name_101 {
   __vki_u64 sample_period ;
   __vki_u64 sample_freq ;
};
union __anonunion____missing_field_name_102 {
   __vki_u32 wakeup_events ;
   __vki_u32 wakeup_watermark ;
};
union __anonunion____missing_field_name_103 {
   __vki_u64 bp_addr ;
   __vki_u64 config1 ;
};
union __anonunion____missing_field_name_104 {
   __vki_u64 bp_len ;
   __vki_u64 config2 ;
};
struct vki_perf_event_attr {
   __vki_u32 type ;
   __vki_u32 size ;
   __vki_u64 config ;
   union __anonunion____missing_field_name_101 __annonCompField1 ;
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
   union __anonunion____missing_field_name_102 __annonCompField2 ;
   __vki_u32 bp_type ;
   union __anonunion____missing_field_name_103 __annonCompField3 ;
   union __anonunion____missing_field_name_104 __annonCompField4 ;
};
struct vki_getcpu_cache {
   unsigned long blob[128U / sizeof(long )] ;
};
struct __anonstruct_vki_bdaddr_t_105 {
   __vki_u8 b[6] ;
} __attribute__((__packed__)) ;
typedef struct __anonstruct_vki_bdaddr_t_105 vki_bdaddr_t;
struct vki_inquiry_info {
   vki_bdaddr_t bdaddr ;
   __vki_u8 pscan_rep_mode ;
   __vki_u8 pscan_period_mode ;
   __vki_u8 pscan_mode ;
   __vki_u8 dev_class[3] ;
   __vki_le16 clock_offset ;
} __attribute__((__packed__)) ;
struct vki_hci_inquiry_req {
   __vki_u16 dev_id ;
   __vki_u16 flags ;
   __vki_u8 lap[3] ;
   __vki_u8 length ;
   __vki_u8 num_rsp ;
};
enum __anonenum_SegKind_106 {
    SkFree = 0,
    SkAnonC = 1,
    SkAnonV = 2,
    SkFileC = 3,
    SkFileV = 4,
    SkShmC = 5,
    SkResvn = 6
} ;
typedef enum __anonenum_SegKind_106 SegKind;
enum __anonenum_ShrinkMode_107 {
    SmLower = 0,
    SmFixed = 1,
    SmUpper = 2
} ;
typedef enum __anonenum_ShrinkMode_107 ShrinkMode;
struct __anonstruct_NSegment_108 {
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
typedef struct __anonstruct_NSegment_108 NSegment;
enum __anonenum_rkind_110 {
    MFixed = 0,
    MHint = 1,
    MAny = 2
} ;
struct __anonstruct_MapRequest_109 {
   enum __anonenum_rkind_110 rkind ;
   Addr start ;
   Addr len ;
};
typedef struct __anonstruct_MapRequest_109 MapRequest;
struct __anonstruct_VgStack_111 {
   HChar bytes[1064960] ;
};
typedef struct __anonstruct_VgStack_111 VgStack;
enum __anonenum_VgMsgKind_112 {
    Vg_FailMsg = 0,
    Vg_UserMsg = 1,
    Vg_DebugMsg = 2,
    Vg_ClientMsg = 3
} ;
typedef enum __anonenum_VgMsgKind_112 VgMsgKind;
struct __anonstruct_OutputSink_113 {
   Int fd ;
   Bool is_socket ;
};
typedef struct __anonstruct_OutputSink_113 OutputSink;
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
enum __anonenum_VgVgdb_114 {
    Vg_VgdbNo = 0,
    Vg_VgdbYes = 1,
    Vg_VgdbFull = 2
} ;
typedef enum __anonenum_VgVgdb_114 VgVgdb;
enum FairSchedType {
    disable_fair_sched = 0,
    enable_fair_sched = 1,
    try_fair_sched = 2
} ;
enum __anonenum_VgSmc_115 {
    Vg_SmcNone = 0,
    Vg_SmcStack = 1,
    Vg_SmcAll = 2,
    Vg_SmcAllNonFile = 3
} ;
typedef enum __anonenum_VgSmc_115 VgSmc;
typedef int __jmp_buf[6];
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_116 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_116 __sigset_t;
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
enum __anonenum_VgSchedReturnCode_117 {
    VgSrc_None = 0,
    VgSrc_ExitThread = 1,
    VgSrc_ExitProcess = 2,
    VgSrc_FatalSig = 3
} ;
typedef enum __anonenum_VgSchedReturnCode_117 VgSchedReturnCode;
typedef VexGuestX86State VexGuestArchState;
struct SyscallStatus;
struct SyscallStatus;
struct SyscallArgs;
struct SyscallArgs;
struct __anonstruct_ThreadArchState_118 {
   VexGuestArchState vex  __attribute__((__aligned__(32))) ;
   VexGuestArchState vex_shadow1  __attribute__((__aligned__(32))) ;
   VexGuestArchState vex_shadow2  __attribute__((__aligned__(32))) ;
   UChar vex_spill[4096]  __attribute__((__aligned__(32))) ;
};
typedef struct __anonstruct_ThreadArchState_118 ThreadArchState;
struct __anonstruct_ThreadOSstate_119 {
   Int lwpid ;
   Int threadgroup ;
   ThreadId parent ;
   Addr valgrind_stack_base ;
   Addr valgrind_stack_init_SP ;
   Word exitcode ;
   Int fatalsig ;
};
typedef struct __anonstruct_ThreadOSstate_119 ThreadOSstate;
struct SigQueue;
struct __anonstruct_ThreadState_120 {
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
typedef struct __anonstruct_ThreadState_120 ThreadState;
struct __anonstruct_FastCacheEntry_121 {
   Addr guest ;
   Addr host ;
};
typedef struct __anonstruct_FastCacheEntry_121 FastCacheEntry;
struct _BBProfEntry {
   Addr64 addr ;
   ULong score ;
};
typedef struct _BBProfEntry BBProfEntry;
struct _ExeContext;
typedef struct _ExeContext ExeContext;
enum __anonenum_VgRes_122 {
    Vg_LowRes = 0,
    Vg_MedRes = 1,
    Vg_HighRes = 2
} ;
typedef enum __anonenum_VgRes_122 VgRes;
typedef Int ErrorKind;
struct _Error;
typedef struct _Error Error;
typedef Int SuppKind;
struct _Supp;
typedef struct _Supp Supp;
struct __anonstruct_VgCallbackClosure_123 {
   Addr64 nraddr ;
   Addr64 readdr ;
   ThreadId tid ;
};
typedef struct __anonstruct_VgCallbackClosure_123 VgCallbackClosure;
enum __anonenum_CorePart_124 {
    Vg_CoreStartup = 1,
    Vg_CoreSignal = 2,
    Vg_CoreSysCall = 3,
    Vg_CoreSysCallArgInMem = 4,
    Vg_CoreTranslate = 5,
    Vg_CoreClientReq = 6
} ;
typedef enum __anonenum_CorePart_124 CorePart;
struct __anonstruct_VgDetails_125 {
   Char *name ;
   Char *version ;
   Char *description ;
   Char *copyright_author ;
   Char *bug_reports_to ;
   UInt avg_translation_sizeB ;
};
typedef struct __anonstruct_VgDetails_125 VgDetails;
struct __anonstruct_VgNeeds_126 {
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
typedef struct __anonstruct_VgNeeds_126 VgNeeds;
struct __anonstruct_VgToolInterface_127 {
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
typedef struct __anonstruct_VgToolInterface_127 VgToolInterface;
typedef UChar UByte;
struct __anonstruct_Block_128 {
   UByte dummy ;
};
typedef struct __anonstruct_Block_128 Block;
struct _Superblock {
   SizeT n_payload_bytes ;
   struct _Superblock *unsplittable ;
   UByte padding[8U - (sizeof(struct _Superblock *) + sizeof(SizeT )) % 8U] ;
   UByte payload_bytes[0] ;
};
typedef struct _Superblock Superblock;
struct __anonstruct_Arena_129 {
   Char *name ;
   Bool clientmem ;
   SizeT rz_szB ;
   SizeT min_sblock_szB ;
   SizeT min_unsplittable_sblock_szB ;
   Block *freelist[112] ;
   Superblock **sblocks ;
   SizeT sblocks_size ;
   SizeT sblocks_used ;
   Superblock *sblocks_initial[50] ;
   Superblock *deferred_reclaimed_sb ;
   ULong stats__nreclaim_unsplit ;
   ULong stats__nreclaim_split ;
   SizeT stats__bytes_on_loan ;
   SizeT stats__bytes_mmaped ;
   SizeT stats__bytes_on_loan_max ;
   ULong stats__tot_blocks ;
   ULong stats__tot_bytes ;
   ULong stats__nsearches ;
   SizeT next_profile_at ;
   SizeT stats__bytes_mmaped_max ;
};
typedef struct __anonstruct_Arena_129 Arena;
struct __anonstruct_AnCC_130 {
   ULong nBytes ;
   ULong nBlocks ;
   HChar *cc ;
};
typedef struct __anonstruct_AnCC_130 AnCC;
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
__inline static UWord sr_ResEx(SysRes sr ) 
{ 
  UWord tmp ;

  {
  if (sr._isError) {
    tmp = (UWord )0;
  } else {
    tmp = sr._valEx;
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
extern void ppIRPutI(IRPutI *puti ) ;
extern IRPutI *mkIRPutI(IRRegArray *descr , IRExpr *ix , Int bias ,
                        IRExpr *data ) ;
extern IRPutI *deepCopyIRPutI(IRPutI * ) ;
extern IRStmt *IRStmt_NoOp(void) ;
extern IRStmt *IRStmt_IMark(Addr64 addr , Int len , UChar delta ) ;
extern IRStmt *IRStmt_AbiHint(IRExpr *base , Int len , IRExpr *nia ) ;
extern IRStmt *IRStmt_Put(Int off , IRExpr *data ) ;
extern IRStmt *IRStmt_PutI(IRPutI *details ) ;
extern IRStmt *IRStmt_WrTmp(IRTemp tmp , IRExpr *data ) ;
extern IRStmt *IRStmt_Store(IREndness end , IRExpr *addr , IRExpr *data ) ;
extern IRStmt *IRStmt_CAS(IRCAS *details ) ;
extern IRStmt *IRStmt_LLSC(IREndness end , IRTemp result , IRExpr *addr ,
                           IRExpr *storedata ) ;
extern IRStmt *IRStmt_Dirty(IRDirty *details ) ;
extern IRStmt *IRStmt_MBE(IRMBusEvent event ) ;
extern IRStmt *IRStmt_Exit(IRExpr *guard , IRJumpKind jk , IRConst *dst ,
                           Int offsIP ) ;
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
extern VexInvalRange LibVEX_Chain(VexArch arch_host , void *place_to_chain ,
                                  void *disp_cp_chain_me_EXPECTED ,
                                  void *place_to_jump_to ) ;
extern VexInvalRange LibVEX_UnChain(VexArch arch_host , void *place_to_unchain ,
                                    void *place_to_jump_to_EXPECTED ,
                                    void *disp_cp_chain_me ) ;
extern Int LibVEX_evCheckSzB(VexArch arch_host ) ;
extern VexInvalRange LibVEX_PatchProfInc(VexArch arch_host ,
                                         void *place_to_patch ,
                                         ULong *location_of_counter ) ;
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
void *vgPlain_malloc(HChar *cc , SizeT nbytes ) ;
void vgPlain_free(void *ptr ) ;
void *vgPlain_calloc(HChar *cc , SizeT nmemb , SizeT bytes_per_memb ) ;
void *vgPlain_realloc(HChar *cc , void *ptr , SizeT size ) ;
Char *vgPlain_strdup(HChar *cc , Char const   *s ) ;
SizeT vgPlain_malloc_usable_size(void *p ) ;
 __attribute__((__noreturn__)) void vgPlain_out_of_memory_NORETURN(HChar *who ,
                                                                   SizeT szB ) ;
void *vgPlain_arena_malloc(ArenaId aid , HChar *cc , SizeT req_pszB ) ;
void vgPlain_arena_free(ArenaId aid , void *ptr ) ;
void *vgPlain_arena_calloc(ArenaId aid , HChar *cc , SizeT nmemb ,
                           SizeT bytes_per_memb ) ;
void *vgPlain_arena_realloc(ArenaId aid , HChar *cc , void *ptr ,
                            SizeT req_pszB ) ;
void *vgPlain_arena_memalign(ArenaId aid , HChar *cc , SizeT req_alignB ,
                             SizeT req_pszB ) ;
__inline Char *vgPlain_arena_strdup(ArenaId aid , HChar *cc , Char const   *s ) ;
SizeT vgPlain_arena_malloc_usable_size(ArenaId aid , void *ptr ) ;
void vgPlain_mallinfo(ThreadId tid , struct vg_mallinfo *mi ) ;
void vgPlain_sanity_check_malloc_all(void) ;
void vgPlain_print_all_arena_stats(void) ;
void vgPlain_print_arena_cc_analysis(void) ;
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
extern HChar *vgPlain_clo_soname_synonyms ;
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
extern void vgPlain_init_Threads(void) ;
extern HChar const   *vgPlain_name_of_ThreadStatus(ThreadStatus status ) ;
extern ThreadState *vgPlain_get_ThreadState(ThreadId tid ) ;
extern Bool vgPlain_is_valid_tid(ThreadId tid ) ;
extern Bool vgPlain_is_running_thread(ThreadId tid ) ;
extern Bool vgPlain_is_exiting(ThreadId tid ) ;
extern Int vgPlain_count_living_threads(void) ;
extern Int vgPlain_count_runnable_threads(void) ;
extern ThreadId vgPlain_lwpid_to_vgtid(Int lwpid ) ;
extern FastCacheEntry __attribute__((__aligned__(16)))  vgPlain_tt_fast[1 << 15] ;
extern void vgPlain_init_tt_tc(void) ;
extern void vgPlain_add_to_transtab(VexGuestExtents *vge , Addr64 entry ,
                                    AddrH code , UInt code_len ,
                                    Bool is_self_checking , Int offs_profInc ,
                                    UInt n_guest_instrs , VexArch arch_host ) ;
extern void vgPlain_tt_tc_do_chaining(void *from__patch_addr , UInt to_sNo ,
                                      UInt to_tteNo , Bool to_fastEP ) ;
extern Bool vgPlain_search_transtab(AddrH *res_hcode , UInt *res_sNo ,
                                    UInt *res_tteNo , Addr64 guest_addr ,
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
Long vgPlain_free_queue_volume  =    (Long )0;
Long vgPlain_free_queue_length  =    (Long )0;
static void cc_analyse_alloc_arena(ArenaId aid ) ;
static char *probably_your_fault  =    (char *)"This is probably caused by your program erroneously writing past the\nend of a heap block and corrupting heap metadata.  If you fix any\ninvalid writes reported by Memcheck, this assertion failure will\nprobably go away.  Please try that before reporting this as a bug.\n";
__inline static SizeT mk_inuse_bszB(SizeT bszB ) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! (bszB != 0UL))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"bszB != 0",
                        (Char const   *)"m_mallocfree.c", 256,
                        (Char const   *)"mk_inuse_bszB",
                        (HChar const   *)probably_your_fault);
  }
  return (bszB & 4294967294UL);
}
}
__inline static SizeT mk_free_bszB(SizeT bszB ) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! (bszB != 0UL))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"bszB != 0",
                        (Char const   *)"m_mallocfree.c", 262,
                        (Char const   *)"mk_free_bszB",
                        (HChar const   *)probably_your_fault);
  }
  return (bszB | 1UL);
}
}
__inline static SizeT mk_plain_bszB(SizeT bszB ) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! (bszB != 0UL))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"bszB != 0",
                        (Char const   *)"m_mallocfree.c", 268,
                        (Char const   *)"mk_plain_bszB",
                        (HChar const   *)probably_your_fault);
  }
  return (bszB & 4294967294UL);
}
}
static SizeT set_at_init_hp_overhead_szB  =    (SizeT )-1000000;
__inline static SizeT get_bszB_as_is(Block *b ) 
{ 
  UByte *b2 ;
  SizeT bszB_lo ;
  SizeT bszB_hi ;
  SizeT tmp ;
  long tmp___0 ;

  {
  b2 = (UByte *)b;
  bszB_lo = *((SizeT *)(b2 + set_at_init_hp_overhead_szB));
  tmp = mk_plain_bszB(bszB_lo);
  bszB_hi = *((SizeT *)(b2 + (tmp - (SizeT )sizeof(SizeT ))));
  tmp___0 = __builtin_expect((long )(! (! (bszB_lo == bszB_hi))), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"bszB_lo == bszB_hi",
                        (Char const   *)"m_mallocfree.c", 290,
                        (Char const   *)"get_bszB_as_is",
                        "Heap block lo/hi size mismatch: lo = %llu, hi = %llu.\n%s",
                        (ULong )bszB_lo, (ULong )bszB_hi, probably_your_fault);
  }
  return (bszB_lo);
}
}
__inline static SizeT get_bszB(Block *b ) 
{ 
  SizeT tmp ;
  SizeT tmp___0 ;

  {
  tmp = get_bszB_as_is(b);
  tmp___0 = mk_plain_bszB(tmp);
  return (tmp___0);
}
}
__inline static void set_bszB(Block *b , SizeT bszB ) 
{ 
  UByte *b2 ;
  SizeT tmp ;

  {
  b2 = (UByte *)b;
  *((SizeT *)(b2 + set_at_init_hp_overhead_szB)) = bszB;
  tmp = mk_plain_bszB(bszB);
  *((SizeT *)(b2 + (tmp - (SizeT )sizeof(SizeT )))) = bszB;
  return;
}
}
__inline static Bool is_inuse_block(Block *b ) 
{ 
  SizeT bszB ;
  SizeT tmp ;
  long tmp___0 ;
  int tmp___1 ;

  {
  tmp = get_bszB_as_is(b);
  bszB = tmp;
  tmp___0 = __builtin_expect((long )(! (! (bszB != 0UL))), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"bszB != 0",
                        (Char const   *)"m_mallocfree.c", 317,
                        (Char const   *)"is_inuse_block",
                        (HChar const   *)probably_your_fault);
  }
  if (0UL != (bszB & 1UL)) {
    tmp___1 = (int )((Bool )0);
  } else {
    tmp___1 = (int )((Bool )1);
  }
  return ((Bool )tmp___1);
}
}
__inline static SizeT overhead_szB_lo(Arena *a ) 
{ 


  {
  return ((set_at_init_hp_overhead_szB + (SizeT )sizeof(SizeT )) + a->rz_szB);
}
}
__inline static SizeT overhead_szB_hi(Arena *a ) 
{ 


  {
  return (a->rz_szB + (SizeT )sizeof(SizeT ));
}
}
__inline static SizeT overhead_szB(Arena *a ) 
{ 
  SizeT tmp ;
  SizeT tmp___0 ;

  {
  tmp = overhead_szB_lo(a);
  tmp___0 = overhead_szB_hi(a);
  return (tmp + tmp___0);
}
}
__inline static SizeT min_useful_bszB(Arena *a ) 
{ 
  SizeT tmp ;

  {
  tmp = overhead_szB(a);
  return (tmp);
}
}
__inline static SizeT pszB_to_bszB(Arena *a , SizeT pszB ) 
{ 
  SizeT tmp ;

  {
  tmp = overhead_szB(a);
  return (pszB + tmp);
}
}
__inline static SizeT bszB_to_pszB(Arena *a , SizeT bszB ) 
{ 
  SizeT tmp ;
  int tmp___0 ;
  long tmp___1 ;
  SizeT tmp___2 ;

  {
  tmp = overhead_szB(a);
  if (bszB >= tmp) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"bszB >= overhead_szB(a)",
                        (Char const   *)"m_mallocfree.c", 362,
                        (Char const   *)"bszB_to_pszB",
                        (HChar const   *)probably_your_fault);
  }
  tmp___2 = overhead_szB(a);
  return (bszB - tmp___2);
}
}
__inline static SizeT get_pszB(Arena *a , Block *b ) 
{ 
  SizeT tmp ;
  SizeT tmp___0 ;

  {
  tmp = get_bszB(b);
  tmp___0 = bszB_to_pszB(a, tmp);
  return (tmp___0);
}
}
__inline static UByte *get_block_payload(Arena *a , Block *b ) 
{ 
  UByte *b2 ;
  SizeT tmp ;

  {
  b2 = (UByte *)b;
  tmp = overhead_szB_lo(a);
  return (b2 + tmp);
}
}
__inline static Block *get_payload_block(Arena *a , UByte *payload ) 
{ 
  SizeT tmp ;

  {
  tmp = overhead_szB_lo(a);
  return ((Block *)(payload + - tmp));
}
}
__inline static void set_prev_b(Block *b , Block *prev_p ) 
{ 
  UByte *b2 ;

  {
  b2 = (UByte *)b;
  *((Block **)(b2 + (set_at_init_hp_overhead_szB + (SizeT )sizeof(SizeT )))) = prev_p;
  return;
}
}
__inline static void set_next_b(Block *b , Block *next_p ) 
{ 
  UByte *b2 ;
  SizeT tmp ;

  {
  b2 = (UByte *)b;
  tmp = get_bszB(b);
  *((Block **)(b2 + ((tmp - (SizeT )sizeof(SizeT )) - (SizeT )sizeof(void *)))) = next_p;
  return;
}
}
__inline static Block *get_prev_b(Block *b ) 
{ 
  UByte *b2 ;

  {
  b2 = (UByte *)b;
  return (*((Block **)(b2 + (set_at_init_hp_overhead_szB + (SizeT )sizeof(SizeT )))));
}
}
__inline static Block *get_next_b(Block *b ) 
{ 
  UByte *b2 ;
  SizeT tmp ;

  {
  b2 = (UByte *)b;
  tmp = get_bszB(b);
  return (*((Block **)(b2 + ((tmp - (SizeT )sizeof(SizeT )) - (SizeT )sizeof(void *)))));
}
}
__inline static void set_cc(Block *b , HChar *cc ) 
{ 
  UByte *b2 ;
  long tmp ;

  {
  b2 = (UByte *)b;
  tmp = __builtin_expect((long )(! (! vgPlain_clo_profile_heap)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(clo_profile_heap)",
                        (Char const   *)"m_mallocfree.c", 426,
                        (Char const   *)"set_cc", "");
  }
  *((HChar **)(b2 + 0)) = cc;
  return;
}
}
__inline static HChar *get_cc(Block *b ) 
{ 
  UByte *b2 ;
  long tmp ;

  {
  b2 = (UByte *)b;
  tmp = __builtin_expect((long )(! (! vgPlain_clo_profile_heap)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(clo_profile_heap)",
                        (Char const   *)"m_mallocfree.c", 433,
                        (Char const   *)"get_cc", "");
  }
  return (*((HChar **)(b2 + 0)));
}
}
__inline static Block *get_predecessor_block(Block *b ) 
{ 
  UByte *b2 ;
  SizeT bszB ;
  SizeT tmp ;

  {
  b2 = (UByte *)b;
  tmp = mk_plain_bszB(*((SizeT *)(b2 + - sizeof(SizeT ))));
  bszB = tmp;
  return ((Block *)(b2 + - bszB));
}
}
__inline static void set_rz_lo_byte(Block *b , UInt rz_byteno , UByte v ) 
{ 
  UByte *b2 ;

  {
  b2 = (UByte *)b;
  *(b2 + ((set_at_init_hp_overhead_szB + (SizeT )sizeof(SizeT )) + (SizeT )rz_byteno)) = v;
  return;
}
}
__inline static void set_rz_hi_byte(Block *b , UInt rz_byteno , UByte v ) 
{ 
  UByte *b2 ;
  SizeT tmp ;

  {
  b2 = (UByte *)b;
  tmp = get_bszB(b);
  *(b2 + (((tmp - (SizeT )sizeof(SizeT )) - (SizeT )rz_byteno) - 1UL)) = v;
  return;
}
}
__inline static UByte get_rz_lo_byte(Block *b , UInt rz_byteno ) 
{ 
  UByte *b2 ;

  {
  b2 = (UByte *)b;
  return (*(b2 + ((set_at_init_hp_overhead_szB + (SizeT )sizeof(SizeT )) + (SizeT )rz_byteno)));
}
}
__inline static UByte get_rz_hi_byte(Block *b , UInt rz_byteno ) 
{ 
  UByte *b2 ;
  SizeT tmp ;

  {
  b2 = (UByte *)b;
  tmp = get_bszB(b);
  return (*(b2 + (((tmp - (SizeT )sizeof(SizeT )) - (SizeT )rz_byteno) - 1UL)));
}
}
static Arena vg_arena[8]  ;
static Arena *arenaId_to_ArenaP(ArenaId arena ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (arena >= 0) {
    if (arena < 8) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"arena >= 0 && arena < VG_N_ARENAS",
                        (Char const   *)"m_mallocfree.c", 490,
                        (Char const   *)"arenaId_to_ArenaP", "");
  }
  return (& vg_arena[arena]);
}
}
static void arena_init(ArenaId aid , Char *name , SizeT rz_szB ,
                       SizeT min_sblock_szB , SizeT min_unsplittable_sblock_szB ) 
{ 
  SizeT i ;
  Arena *a ;
  Arena *tmp ;
  long tmp___0 ;
  long tmp___1 ;
  SizeT tmp___2 ;
  SizeT tmp___3 ;
  SizeT tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;
  long tmp___7 ;

  {
  tmp = arenaId_to_ArenaP(aid);
  a = tmp;
  tmp___0 = __builtin_expect((long )(! (! (rz_szB < 128UL))), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"rz_szB < 128",
                        (Char const   *)"m_mallocfree.c", 506,
                        (Char const   *)"arena_init", "");
  }
  if (rz_szB < (SizeT )sizeof(void *)) {
    rz_szB = (SizeT )sizeof(void *);
  } else {

  }
  tmp___1 = __builtin_expect((long )(! (! (min_sblock_szB % (1UL << 12) == 0UL))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"(min_sblock_szB % VKI_PAGE_SIZE) == 0",
                        (Char const   *)"m_mallocfree.c", 509,
                        (Char const   *)"arena_init", "");
  }
  a->name = name;
  if (3 == aid) {
    a->clientmem = (Bool )1;
  } else {
    a->clientmem = (Bool )0;
  }
  a->rz_szB = rz_szB;
  while (1) {
    tmp___2 = overhead_szB_lo(a);
    if (0UL != tmp___2 % 8UL) {

    } else {
      break;
    }
    (a->rz_szB) ++;
  }
  tmp___3 = overhead_szB_lo(a);
  tmp___4 = overhead_szB_hi(a);
  if (tmp___3 - set_at_init_hp_overhead_szB == tmp___4) {
    tmp___5 = 1;
  } else {
    tmp___5 = 0;
  }
  tmp___6 = __builtin_expect((long )tmp___5, 1L);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"overhead_szB_lo(a) - hp_overhead_szB() == overhead_szB_hi(a)",
                        (Char const   *)"m_mallocfree.c", 518,
                        (Char const   *)"arena_init", "");
  }
  a->min_sblock_szB = min_sblock_szB;
  a->min_unsplittable_sblock_szB = min_unsplittable_sblock_szB;
  i = (SizeT )0;
  while (i < 112UL) {
    a->freelist[i] = (Block *)((void *)0);
    i ++;
  }
  a->sblocks = & a->sblocks_initial[0];
  a->sblocks_size = (SizeT )50;
  a->sblocks_used = (SizeT )0;
  a->stats__nreclaim_unsplit = (ULong )0;
  a->stats__nreclaim_split = (ULong )0;
  a->stats__bytes_on_loan = (SizeT )0;
  a->stats__bytes_mmaped = (SizeT )0;
  a->stats__bytes_on_loan_max = (SizeT )0;
  a->stats__bytes_mmaped_max = (SizeT )0;
  a->stats__tot_blocks = (ULong )0;
  a->stats__tot_bytes = (ULong )0;
  a->stats__nsearches = (ULong )0;
  a->next_profile_at = (SizeT )25000000;
  tmp___7 = __builtin_expect((long )(! (! (sizeof(a->sblocks_initial) == 50U * sizeof(Superblock *)))),
                             1L);
  if (tmp___7) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"sizeof(a->sblocks_initial) == SBLOCKS_SIZE_INITIAL * sizeof(Superblock*)",
                        (Char const   *)"m_mallocfree.c", 538,
                        (Char const   *)"arena_init", "");
  }
  return;
}
}
void vgPlain_print_all_arena_stats(void) 
{ 
  UInt i ;
  Arena *a ;
  Arena *tmp ;

  {
  i = (UInt )0;
  while (i < 8U) {
    tmp = arenaId_to_ArenaP((ArenaId )i);
    a = tmp;
    vgPlain_message((VgMsgKind )2,
                    "%8s: %8ld/%8ld  max/curr mmap\'d, %llu/%llu unsplit/split sb unmmap\'d,  %8ld/%8ld max/curr,  %10llu/%10llu totalloc-blocks/bytes,  %10llu searches\n",
                    a->name, a->stats__bytes_mmaped_max, a->stats__bytes_mmaped,
                    a->stats__nreclaim_unsplit, a->stats__nreclaim_split,
                    a->stats__bytes_on_loan_max, a->stats__bytes_on_loan,
                    a->stats__tot_blocks, a->stats__tot_bytes,
                    a->stats__nsearches);
    i ++;
  }
  return;
}
}
void vgPlain_print_arena_cc_analysis(void) 
{ 
  UInt i ;
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! vgPlain_clo_profile_heap)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(clo_profile_heap)",
                        (Char const   *)"m_mallocfree.c", 567,
                        (Char const   *)"vgPlain_print_arena_cc_analysis", "");
  }
  i = (UInt )0;
  while (i < 8U) {
    cc_analyse_alloc_arena((ArenaId )i);
    i ++;
  }
  return;
}
}
static Bool client_inited  =    (Bool )0;
static Bool nonclient_inited  =    (Bool )0;
static void ensure_mm_init(ArenaId aid ) ;
static SizeT client_rz_szB  =    (SizeT )8;
static void ensure_mm_init(ArenaId aid ) 
{ 
  Int ar_client_sbszB ;
  long tmp ;

  {
  if (3 == aid) {
    if (client_inited) {
      if (vgPlain_needs.malloc_replacement) {
        tmp = __builtin_expect((long )(! (! (client_rz_szB == vgPlain_tdict.tool_client_redzone_szB))),
                               1L);
        if (tmp) {

        } else {
          vgPlain_assert_fail((Bool )1,
                              (Char const   *)"client_rz_szB == VG_(tdict).tool_client_redzone_szB",
                              (Char const   *)"m_mallocfree.c", 611,
                              (Char const   *)"ensure_mm_init", "");
        }
      } else {

      }
      return;
    } else {

    }
    if (vgPlain_needs.malloc_replacement) {
      client_rz_szB = vgPlain_tdict.tool_client_redzone_szB;
      if (client_rz_szB > 128UL) {
        vgPlain_printf("\nTool error:\n  specified redzone size is too big (%llu)\n",
                       (ULong )client_rz_szB);
        vgPlain_exit(1);
      } else {

      }
    } else {

    }
    ar_client_sbszB = 4194304;
    arena_init(3, (Char *)"client", client_rz_szB, (SizeT )ar_client_sbszB,
               (SizeT )(ar_client_sbszB + 1));
    client_inited = (Bool )1;
  } else {
    if (nonclient_inited) {
      return;
    } else {

    }
    if (vgPlain_clo_profile_heap) {
      set_at_init_hp_overhead_szB = (SizeT )8;
    } else {
      set_at_init_hp_overhead_szB = (SizeT )0;
    }
    arena_init(0, (Char *)"core", (SizeT )4, (SizeT )1048576, (SizeT )1048577);
    arena_init(1, (Char *)"tool", (SizeT )4, (SizeT )4194304, (SizeT )4194305);
    arena_init(2, (Char *)"dinfo", (SizeT )4, (SizeT )1048576, (SizeT )1048577);
    arena_init(4, (Char *)"demangle", (SizeT )4, (SizeT )65536, (SizeT )65537);
    arena_init(5, (Char *)"exectxt", (SizeT )4, (SizeT )1048576, (SizeT )1048577);
    arena_init(6, (Char *)"errors", (SizeT )4, (SizeT )65536, (SizeT )65537);
    arena_init(7, (Char *)"ttaux", (SizeT )4, (SizeT )65536, (SizeT )65537);
    nonclient_inited = (Bool )1;
  }
  return;
}
}
 __attribute__((__noreturn__)) void vgPlain_out_of_memory_NORETURN(HChar *who ,
                                                                   SizeT szB ) ;
static Bool alreadyCrashing  =    (Bool )0;
 __attribute__((__noreturn__)) void vgPlain_out_of_memory_NORETURN(HChar *who ,
                                                                   SizeT szB ) ;
void vgPlain_out_of_memory_NORETURN(HChar *who , SizeT szB ) 
{ 
  ULong tot_alloc ;
  ULong tmp ;
  Char *s1 ;

  {
  tmp = vgPlain_am_get_anonsize_total();
  tot_alloc = tmp;
  s1 = (Char *)"\n    Valgrind\'s memory management: out of memory:\n       %s\'s request for %llu bytes failed.\n       %llu bytes have already been allocated.\n    Valgrind cannot continue.  Sorry.\n\n    There are several possible reasons for this.\n    - You have some kind of memory limit in place.  Look at the\n      output of \'ulimit -a\'.  Is there a limit on the size of\n      virtual memory or address space?\n    - You have run out of swap space.\n    - Valgrind has a bug.  If you think this is the case or you are\n    not sure, please let us know and we\'ll try to fix it.\n    Please note that programs can take substantially more memory than\n    normal when running under Valgrind tools, eg. up to twice or\n    more, depending on the tool.  On a 64-bit machine, Valgrind\n    should be able to make use of up 32GB memory.  On a 32-bit\n    machine, Valgrind should be able to use all the memory available\n    to a single process, up to 4GB if that\'s how you have your\n    kernel configured.  Most 32-bit Linux setups allow a maximum of\n    3GB per process.\n\n    Whatever the reason, Valgrind cannot continue.  Sorry.\n";
  if (! alreadyCrashing) {
    alreadyCrashing = (Bool )1;
    vgPlain_message((VgMsgKind )1, (HChar const   *)s1, who, (ULong )szB,
                    tot_alloc);
  } else {
    vgPlain_debugLog(0, "mallocfree", (HChar const   *)s1, who, (ULong )szB,
                     tot_alloc);
  }
  vgPlain_exit(1);
}
}
static void *align_upwards(void *p , SizeT align ) 
{ 
  Addr a ;

  {
  a = (Addr )p;
  if (a % align == 0UL) {
    return ((void *)a);
  } else {

  }
  return ((void *)((a - a % align) + align));
}
}
static void deferred_reclaimSuperblock(Arena *a , Superblock *sb ) ;
static Superblock *newSuperblock(Arena *a , SizeT cszB ) 
{ 
  Superblock *sb ;
  SysRes sres ;
  Bool unsplittable ;
  ArenaId aid ;
  Arena *arena ;
  Arena *tmp ;
  Bool tmp___0 ;
  UWord tmp___1 ;
  NSegment const   *tmp___2 ;
  UWord tmp___3 ;
  Bool tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;

  {
  aid = 0;
  while (aid < 8) {
    tmp = arenaId_to_ArenaP(aid);
    arena = tmp;
    if ((unsigned int )arena->deferred_reclaimed_sb != (unsigned int )((void *)0)) {
      deferred_reclaimSuperblock(arena, (Superblock *)((void *)0));
    } else {

    }
    aid ++;
  }
  cszB += (SizeT )sizeof(Superblock );
  if (cszB < a->min_sblock_szB) {
    cszB = a->min_sblock_szB;
  } else {

  }
  cszB = ((cszB + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL);
  if (cszB >= a->min_unsplittable_sblock_szB) {
    unsplittable = (Bool )1;
  } else {
    unsplittable = (Bool )0;
  }
  if (a->clientmem) {
    if (unsplittable) {
      sres = vgPlain_am_mmap_anon_float_client(cszB, 7);
    } else {
      sres = vgPlain_am_sbrk_anon_float_client(cszB, 7);
    }
    tmp___0 = sr_isError(sres);
    if (tmp___0) {
      return ((Superblock *)0);
    } else {

    }
    tmp___1 = sr_Res(sres);
    sb = (Superblock *)tmp___1;
    tmp___2 = vgPlain_am_find_nsegment((Addr )sb);
    vgPlain_am_set_segment_isCH_if_SkAnonC((NSegment *)tmp___2);
  } else {
    if (unsplittable) {
      sres = vgPlain_am_mmap_anon_float_valgrind(cszB);
    } else {
      sres = vgPlain_am_sbrk_anon_float_valgrind(cszB);
    }
    tmp___4 = sr_isError(sres);
    if (tmp___4) {
      vgPlain_out_of_memory_NORETURN((HChar *)"newSuperblock", cszB);
      sb = (Superblock *)((void *)0);
    } else {
      tmp___3 = sr_Res(sres);
      sb = (Superblock *)tmp___3;
    }
  }
  tmp___5 = __builtin_expect((long )(! (! ((unsigned int )((void *)0) != (unsigned int )sb))),
                             1L);
  if (tmp___5) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"NULL != sb",
                        (Char const   *)"m_mallocfree.c", 780,
                        (Char const   *)"newSuperblock", "");
  }
  while (1) {
    break;
  }
  tmp___6 = __builtin_expect((long )(! (! (0UL == (Addr )sb % 8UL))), 1L);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"0 == (Addr)sb % VG_MIN_MALLOC_SZB",
                        (Char const   *)"m_mallocfree.c", 782,
                        (Char const   *)"newSuperblock", "");
  }
  sb->n_payload_bytes = cszB - (SizeT )sizeof(Superblock );
  if (unsplittable) {
    sb->unsplittable = sb;
  } else {
    sb->unsplittable = (struct _Superblock *)((void *)0);
  }
  a->stats__bytes_mmaped += cszB;
  if (a->stats__bytes_mmaped > a->stats__bytes_mmaped_max) {
    a->stats__bytes_mmaped_max = a->stats__bytes_mmaped;
  } else {

  }
  if (a->clientmem) {
    tmp___7 = "CLIENT";
  } else {
    tmp___7 = "VALGRIND";
  }
  if (unsplittable) {
    tmp___8 = "unsplittable";
  } else {
    tmp___8 = "";
  }
  vgPlain_debugLog(1, "mallocfree",
                   "newSuperblock at %p (pszB %7ld) %s owner %s/%s\n", sb,
                   sb->n_payload_bytes, tmp___8, tmp___7, a->name);
  return (sb);
}
}
static void reclaimSuperblock(Arena *a , Superblock *sb ) 
{ 
  SysRes sres ;
  SizeT cszB ;
  UInt i ;
  UInt j ;
  char const   *tmp ;
  char const   *tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  Bool need_discard ;
  Bool tmp___3 ;
  int tmp___4 ;
  long tmp___5 ;
  Bool tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;

  {
  if (a->clientmem) {
    tmp = "CLIENT";
  } else {
    tmp = "VALGRIND";
  }
  if (sb->unsplittable) {
    tmp___0 = "unsplittable";
  } else {
    tmp___0 = "";
  }
  vgPlain_debugLog(1, "mallocfree",
                   "reclaimSuperblock at %p (pszB %7ld) %s owner %s/%s\n", sb,
                   sb->n_payload_bytes, tmp___0, tmp, a->name);
  cszB = (SizeT )sizeof(Superblock ) + sb->n_payload_bytes;
  i = (UInt )0;
  while ((SizeT )i < a->sblocks_used) {
    if ((unsigned int )*(a->sblocks + i) == (unsigned int )sb) {
      break;
    } else {

    }
    i ++;
  }
  if (i >= 0U) {
    if ((SizeT )i < a->sblocks_used) {
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
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"i >= 0 && i < a->sblocks_used",
                        (Char const   *)"m_mallocfree.c", 820,
                        (Char const   *)"reclaimSuperblock", "");
  }
  j = i;
  while ((SizeT )j < a->sblocks_used) {
    *(a->sblocks + j) = *(a->sblocks + (j + 1U));
    j ++;
  }
  (a->sblocks_used) --;
  *(a->sblocks + a->sblocks_used) = (Superblock *)((void *)0);
  a->stats__bytes_mmaped -= cszB;
  if (sb->unsplittable) {
    (a->stats__nreclaim_unsplit) ++;
  } else {
    (a->stats__nreclaim_split) ++;
  }
  if (a->clientmem) {
    need_discard = (Bool )0;
    sres = vgPlain_am_munmap_client(& need_discard, (Addr )sb, cszB);
    tmp___3 = sr_isError(sres);
    if (tmp___3) {
      tmp___4 = 0;
    } else {
      tmp___4 = 1;
    }
    tmp___5 = __builtin_expect((long )tmp___4, 1L);
    if (tmp___5) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"! sr_isError(sres)",
                          (Char const   *)"m_mallocfree.c", 838,
                          (Char const   *)"reclaimSuperblock",
                          "superblock client munmap failure\n");
    }
    if (need_discard) {
      vgPlain_discard_translations((Addr64 )((Addr )sb), (ULong )cszB,
                                   (HChar *)"reclaimSuperblock");
    } else {

    }
  } else {
    sres = vgPlain_am_munmap_valgrind((Addr )sb, cszB);
    tmp___6 = sr_isError(sres);
    if (tmp___6) {
      tmp___7 = 0;
    } else {
      tmp___7 = 1;
    }
    tmp___8 = __builtin_expect((long )tmp___7, 1L);
    if (tmp___8) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"! sr_isError(sres)",
                          (Char const   *)"m_mallocfree.c", 853,
                          (Char const   *)"reclaimSuperblock",
                          "superblock valgrind munmap failure\n");
    }
  }
  return;
}
}
static Superblock *findSb(Arena *a , Block *b ) 
{ 
  SizeT min ;
  SizeT max ;
  Superblock *sb ;
  SizeT pos ;
  int tmp ;
  long tmp___0 ;

  {
  min = (SizeT )0;
  max = a->sblocks_used;
  while (min <= max) {
    pos = min + (max - min) / 2UL;
    if (pos >= 0UL) {
      if (pos < a->sblocks_used) {
        tmp = 1;
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
    tmp___0 = __builtin_expect((long )tmp, 1L);
    if (tmp___0) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"pos >= 0 && pos < a->sblocks_used",
                          (Char const   *)"m_mallocfree.c", 869,
                          (Char const   *)"findSb", "");
    }
    sb = *(a->sblocks + pos);
    if ((unsigned int )((Block *)(& sb->payload_bytes[0])) <= (unsigned int )b) {
      if ((unsigned int )b < (unsigned int )((Block *)(& sb->payload_bytes[sb->n_payload_bytes]))) {
        return (sb);
      } else {
        goto _L;
      }
    } else
    _L: /* CIL Label */ 
    if ((unsigned int )((Block *)(& sb->payload_bytes[0])) <= (unsigned int )b) {
      min = pos + 1UL;
    } else {
      max = pos - 1UL;
    }
  }
  vgPlain_printf("findSb: can\'t find pointer %p in arena \'%s\'\n", b, a->name);
  vgPlain_core_panic((Char *)"findSb: VG_(arena_free)() in wrong arena?");
  return ((Superblock *)((void *)0));
}
}
static UInt pszB_to_listNo(SizeT pszB ) 
{ 
  SizeT n ;
  long tmp ;

  {
  n = pszB / 8UL;
  tmp = __builtin_expect((long )(! (! (0UL == pszB % 8UL))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"0 == pszB % VG_MIN_MALLOC_SZB",
                        (Char const   *)"m_mallocfree.c", 900,
                        (Char const   *)"pszB_to_listNo", "");
  }
  if (n < 64UL) {
    return ((UInt )n);
  } else {

  }
  if (n < 67UL) {
    return ((UInt )64);
  } else {

  }
  if (n < 70UL) {
    return ((UInt )65);
  } else {

  }
  if (n < 74UL) {
    return ((UInt )66);
  } else {

  }
  if (n < 77UL) {
    return ((UInt )67);
  } else {

  }
  if (n < 81UL) {
    return ((UInt )68);
  } else {

  }
  if (n < 85UL) {
    return ((UInt )69);
  } else {

  }
  if (n < 90UL) {
    return ((UInt )70);
  } else {

  }
  if (n < 94UL) {
    return ((UInt )71);
  } else {

  }
  if (n < 99UL) {
    return ((UInt )72);
  } else {

  }
  if (n < 104UL) {
    return ((UInt )73);
  } else {

  }
  if (n < 109UL) {
    return ((UInt )74);
  } else {

  }
  if (n < 114UL) {
    return ((UInt )75);
  } else {

  }
  if (n < 120UL) {
    return ((UInt )76);
  } else {

  }
  if (n < 126UL) {
    return ((UInt )77);
  } else {

  }
  if (n < 133UL) {
    return ((UInt )78);
  } else {

  }
  if (n < 139UL) {
    return ((UInt )79);
  } else {

  }
  if (n < 153UL) {
    return ((UInt )80);
  } else {

  }
  if (n < 169UL) {
    return ((UInt )81);
  } else {

  }
  if (n < 185UL) {
    return ((UInt )82);
  } else {

  }
  if (n < 204UL) {
    return ((UInt )83);
  } else {

  }
  if (n < 224UL) {
    return ((UInt )84);
  } else {

  }
  if (n < 247UL) {
    return ((UInt )85);
  } else {

  }
  if (n < 272UL) {
    return ((UInt )86);
  } else {

  }
  if (n < 299UL) {
    return ((UInt )87);
  } else {

  }
  if (n < 329UL) {
    return ((UInt )88);
  } else {

  }
  if (n < 362UL) {
    return ((UInt )89);
  } else {

  }
  if (n < 398UL) {
    return ((UInt )90);
  } else {

  }
  if (n < 438UL) {
    return ((UInt )91);
  } else {

  }
  if (n < 482UL) {
    return ((UInt )92);
  } else {

  }
  if (n < 530UL) {
    return ((UInt )93);
  } else {

  }
  if (n < 583UL) {
    return ((UInt )94);
  } else {

  }
  if (n < 641UL) {
    return ((UInt )95);
  } else {

  }
  if (n < 770UL) {
    return ((UInt )96);
  } else {

  }
  if (n < 924UL) {
    return ((UInt )97);
  } else {

  }
  if (n < 1109UL) {
    return ((UInt )98);
  } else {

  }
  if (n < 1331UL) {
    return ((UInt )99);
  } else {

  }
  if (n < 1597UL) {
    return ((UInt )100);
  } else {

  }
  if (n < 1916UL) {
    return ((UInt )101);
  } else {

  }
  if (n < 2300UL) {
    return ((UInt )102);
  } else {

  }
  if (n < 2760UL) {
    return ((UInt )103);
  } else {

  }
  if (n < 3312UL) {
    return ((UInt )104);
  } else {

  }
  if (n < 3974UL) {
    return ((UInt )105);
  } else {

  }
  if (n < 4769UL) {
    return ((UInt )106);
  } else {

  }
  if (n < 5723UL) {
    return ((UInt )107);
  } else {

  }
  if (n < 6868UL) {
    return ((UInt )108);
  } else {

  }
  if (n < 8241UL) {
    return ((UInt )109);
  } else {

  }
  if (n < 9890UL) {
    return ((UInt )110);
  } else {

  }
  return ((UInt )111);
}
}
static SizeT cache[112]  ;
static SizeT listNo_to_pszB_min(UInt listNo ) ;
static Bool cache_valid  =    (Bool )0;
static SizeT listNo_to_pszB_min(UInt listNo ) 
{ 
  UInt i ;
  SizeT pszB ;
  UInt tmp ;
  long tmp___0 ;

  {
  if (! cache_valid) {
    i = (UInt )0;
    while (i < 112U) {
      pszB = (SizeT )0;
      while (1) {
        tmp = pszB_to_listNo(pszB);
        if (tmp < i) {

        } else {
          break;
        }
        pszB += 8UL;
      }
      cache[i] = pszB;
      i ++;
    }
    cache_valid = (Bool )1;
  } else {

  }
  tmp___0 = __builtin_expect((long )(! (! (listNo <= 112U))), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"listNo <= N_MALLOC_LISTS",
                        (Char const   *)"m_mallocfree.c", 978,
                        (Char const   *)"listNo_to_pszB_min", "");
  }
  return (cache[listNo]);
}
}
static SizeT listNo_to_pszB_max(UInt listNo ) 
{ 
  long tmp ;
  SizeT tmp___0 ;

  {
  tmp = __builtin_expect((long )(! (! (listNo <= 112U))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"listNo <= N_MALLOC_LISTS",
                        (Char const   *)"m_mallocfree.c", 986,
                        (Char const   *)"listNo_to_pszB_max", "");
  }
  if (listNo == 111U) {
    return (~ ((SizeT )0));
  } else {
    tmp___0 = listNo_to_pszB_min(listNo + 1U);
    return (tmp___0 - 1UL);
  }
}
}
static void swizzle(Arena *a , UInt lno ) 
{ 
  Block *p_best ;
  Block *pp ;
  Block *pn ;
  UInt i ;

  {
  p_best = a->freelist[lno];
  if ((unsigned int )p_best == (unsigned int )((void *)0)) {
    return;
  } else {

  }
  pp = p_best;
  pn = pp;
  i = (UInt )0;
  while (i < 5U) {
    pn = get_next_b(pn);
    pp = get_prev_b(pp);
    if ((unsigned int )pn < (unsigned int )p_best) {
      p_best = pn;
    } else {

    }
    if ((unsigned int )pp < (unsigned int )p_best) {
      p_best = pp;
    } else {

    }
    i ++;
  }
  if ((unsigned int )p_best < (unsigned int )a->freelist[lno]) {
    a->freelist[lno] = p_best;
  } else {

  }
  return;
}
}
static Bool blockSane(Arena *a , Block *b ) 
{ 
  UInt i ;
  UByte tmp ;
  UByte tmp___0 ;
  Bool tmp___1 ;

  {
  if (! a->clientmem) {
    tmp___1 = is_inuse_block(b);
    if (tmp___1) {
      while (1) {
        break;
      }
      while (1) {
        break;
      }
      i = (UInt )0;
      while ((SizeT )i < a->rz_szB) {
        tmp = get_rz_lo_byte(b, i);
        if ((int )tmp != (int )((UByte )(((Addr )b & 255UL) ^ 49UL))) {
          vgPlain_printf("blockSane: fail -- %s\n", "redzone-lo");
          return ((Bool )0);
        } else {

        }
        tmp___0 = get_rz_hi_byte(b, i);
        if ((int )tmp___0 != (int )((UByte )(((Addr )b & 255UL) ^ 124UL))) {
          vgPlain_printf("blockSane: fail -- %s\n", "redzone-hi");
          return ((Bool )0);
        } else {

        }
        i ++;
      }
      while (1) {
        break;
      }
      while (1) {
        break;
      }
    } else {

    }
  } else {

  }
  return ((Bool )1);
}
}
static void ppSuperblocks(Arena *a ) 
{ 
  UInt i ;
  UInt j ;
  UInt blockno ;
  SizeT b_bszB ;
  Superblock *sb ;
  char const   *tmp ;
  UInt tmp___0 ;
  Block *b ;
  Bool tmp___1 ;
  char const   *tmp___2 ;
  Bool tmp___3 ;
  Bool tmp___4 ;
  char const   *tmp___5 ;
  Bool tmp___6 ;
  long tmp___7 ;

  {
  blockno = (UInt )1;
  j = (UInt )0;
  while ((SizeT )j < a->sblocks_used) {
    sb = *(a->sblocks + j);
    vgPlain_printf("\n");
    if (sb->unsplittable) {
      tmp = "unsplittable";
    } else {
      tmp = "";
    }
    tmp___0 = blockno;
    blockno ++;
    vgPlain_printf("superblock %d at %p %s, sb->n_pl_bs = %lu\n", tmp___0, sb,
                   tmp, sb->n_payload_bytes);
    i = (UInt )0;
    while ((SizeT )i < sb->n_payload_bytes) {
      b = (Block *)(& sb->payload_bytes[i]);
      b_bszB = get_bszB(b);
      vgPlain_printf("   block at %d, bszB %lu: ", i, b_bszB);
      tmp___3 = is_inuse_block(b);
      if (tmp___3) {
        tmp___2 = "inuse";
      } else {
        tmp___2 = "free";
      }
      vgPlain_printf("%s, ", tmp___2);
      tmp___6 = blockSane(a, b);
      if (tmp___6) {
        tmp___5 = "ok";
      } else {
        tmp___5 = "BAD";
      }
      vgPlain_printf("%s\n", tmp___5);
      i = (UInt )((SizeT )i + b_bszB);
    }
    tmp___7 = __builtin_expect((long )(! (! ((SizeT )i == sb->n_payload_bytes))),
                               1L);
    if (tmp___7) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"i == sb->n_payload_bytes",
                          (Char const   *)"m_mallocfree.c", 1092,
                          (Char const   *)"ppSuperblocks", "");
    }
    j ++;
  }
  vgPlain_printf("end of superblocks\n\n");
  return;
}
}
static void sanity_check_malloc_arena(ArenaId aid ) 
{ 
  UInt i ;
  UInt j ;
  UInt superblockctr ;
  UInt blockctr_sb ;
  UInt blockctr_li ;
  UInt blockctr_sb_free ;
  UInt listno ;
  SizeT b_bszB ;
  SizeT b_pszB ;
  SizeT list_min_pszB ;
  SizeT list_max_pszB ;
  Bool thisFree ;
  Bool lastWasFree ;
  Bool sblockarrOK ;
  Block *b ;
  Block *b_prev ;
  SizeT arena_bytes_on_loan ;
  Arena *a ;
  int tmp ;
  int tmp___0 ;
  Superblock *sb ;
  SizeT tmp___1 ;
  Bool tmp___2 ;
  Bool tmp___3 ;
  int tmp___4 ;
  SizeT tmp___5 ;
  Block *tmp___6 ;

  {
  a = arenaId_to_ArenaP(aid);
  if ((unsigned int )a->sblocks != (unsigned int )((void *)0)) {
    if (a->sblocks_size >= 50UL) {
      if (a->sblocks_used <= a->sblocks_size) {
        if (a->sblocks_size == 50UL) {
          tmp = (unsigned int )a->sblocks == (unsigned int )(& a->sblocks_initial[0]);
        } else {
          tmp = (unsigned int )a->sblocks != (unsigned int )(& a->sblocks_initial[0]);
        }
        if (tmp) {
          tmp___0 = 1;
        } else {
          tmp___0 = 0;
        }
      } else {
        tmp___0 = 0;
      }
    } else {
      tmp___0 = 0;
    }
  } else {
    tmp___0 = 0;
  }
  sblockarrOK = (Bool )tmp___0;
  if (! sblockarrOK) {
    vgPlain_printf("sanity_check_malloc_arena: sblock array BAD\n");
    vgPlain_core_panic((Char *)"sanity_check_malloc_arena");
  } else {

  }
  blockctr_sb_free = (UInt )0;
  blockctr_sb = blockctr_sb_free;
  superblockctr = blockctr_sb;
  arena_bytes_on_loan = (SizeT )0;
  j = (UInt )0;
  while ((SizeT )j < a->sblocks_used) {
    sb = *(a->sblocks + j);
    lastWasFree = (Bool )0;
    superblockctr ++;
    i = (UInt )0;
    while ((SizeT )i < sb->n_payload_bytes) {
      blockctr_sb ++;
      b = (Block *)(& sb->payload_bytes[i]);
      b_bszB = get_bszB_as_is(b);
      tmp___2 = blockSane(a, b);
      if (tmp___2) {

      } else {
        vgPlain_printf("sanity_check_malloc_arena: sb %p, block %d (bszB %lu):  BAD\n",
                       sb, i, b_bszB);
        vgPlain_core_panic((Char *)"sanity_check_malloc_arena");
      }
      tmp___3 = is_inuse_block(b);
      if (tmp___3) {
        tmp___4 = 0;
      } else {
        tmp___4 = 1;
      }
      thisFree = (Bool )tmp___4;
      if (thisFree) {
        if (lastWasFree) {
          vgPlain_printf("sanity_check_malloc_arena: sb %p, block %d (bszB %lu): UNMERGED FREES\n",
                         sb, i, b_bszB);
          vgPlain_core_panic((Char *)"sanity_check_malloc_arena");
        } else {

        }
      } else {

      }
      if (thisFree) {
        blockctr_sb_free ++;
      } else {

      }
      if (! thisFree) {
        tmp___5 = bszB_to_pszB(a, b_bszB);
        arena_bytes_on_loan += tmp___5;
      } else {

      }
      lastWasFree = thisFree;
      tmp___1 = mk_plain_bszB(b_bszB);
      i = (UInt )((SizeT )i + tmp___1);
    }
    if ((SizeT )i > sb->n_payload_bytes) {
      vgPlain_printf("sanity_check_malloc_arena: sb %p: last block overshoots end\n",
                     sb);
      vgPlain_core_panic((Char *)"sanity_check_malloc_arena");
    } else {

    }
    j ++;
  }
  if (arena_bytes_on_loan != a->stats__bytes_on_loan) {
    ppSuperblocks(a);
    vgPlain_core_panic((Char *)"sanity_check_malloc_arena");
  } else {

  }
  blockctr_li = (UInt )0;
  listno = (UInt )0;
  while (listno < 112U) {
    list_min_pszB = listNo_to_pszB_min(listno);
    list_max_pszB = listNo_to_pszB_max(listno);
    b = a->freelist[listno];
    if ((unsigned int )b == (unsigned int )((void *)0)) {
      goto __Cont;
    } else {

    }
    while (1) {
      b_prev = b;
      b = get_next_b(b);
      tmp___6 = get_prev_b(b);
      if ((unsigned int )tmp___6 != (unsigned int )b_prev) {
        vgPlain_printf("sanity_check_malloc_arena: list %d at %p: BAD LINKAGE\n",
                       listno, b);
        vgPlain_core_panic((Char *)"sanity_check_malloc_arena");
      } else {

      }
      b_pszB = get_pszB(a, b);
      if (b_pszB < list_min_pszB) {
        vgPlain_printf("sanity_check_malloc_arena: list %d at %p: WRONG CHAIN SIZE %luB (%luB, %luB)\n",
                       listno, b, b_pszB, list_min_pszB, list_max_pszB);
        vgPlain_core_panic((Char *)"sanity_check_malloc_arena");
      } else
      if (b_pszB > list_max_pszB) {
        vgPlain_printf("sanity_check_malloc_arena: list %d at %p: WRONG CHAIN SIZE %luB (%luB, %luB)\n",
                       listno, b, b_pszB, list_min_pszB, list_max_pszB);
        vgPlain_core_panic((Char *)"sanity_check_malloc_arena");
      } else {

      }
      blockctr_li ++;
      if ((unsigned int )b == (unsigned int )a->freelist[listno]) {
        break;
      } else {

      }
    }
    __Cont: /* CIL Label */ 
    listno ++;
  }
  if (blockctr_sb_free != blockctr_li) {
    ppSuperblocks(a);
    vgPlain_core_panic((Char *)"sanity_check_malloc_arena");
  } else {

  }
  if (vgPlain_clo_verbosity > 2) {
    vgPlain_message((VgMsgKind )2,
                    "%8s: %2d sbs, %5d bs, %2d/%-2d free bs, %7ld mmap, %7ld loan\n",
                    a->name, superblockctr, blockctr_sb, blockctr_sb_free,
                    blockctr_li, a->stats__bytes_mmaped, a->stats__bytes_on_loan);
  } else {

  }
  return;
}
}
static AnCC anCCs[1000]  ;
static Int cmp_AnCC_by_vol(void *v1 , void *v2 ) 
{ 
  AnCC *ancc1 ;
  AnCC *ancc2 ;

  {
  ancc1 = (AnCC *)v1;
  ancc2 = (AnCC *)v2;
  if (ancc1->nBytes < ancc2->nBytes) {
    return (-1);
  } else {

  }
  if (ancc1->nBytes > ancc2->nBytes) {
    return (1);
  } else {

  }
  return (0);
}
}
static void cc_analyse_alloc_arena(ArenaId aid ) 
{ 
  Word i ;
  Word j ;
  Word k ;
  Arena *a ;
  Block *b ;
  Bool thisFree ;
  Bool lastWasFree ;
  SizeT b_bszB ;
  HChar *cc ;
  UInt n_ccs ;
  Superblock *sb ;
  SizeT tmp ;
  long tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  HChar *tmp___5 ;
  SizeT tmp___6 ;
  long tmp___7 ;
  long tmp___8 ;
  Int tmp___9 ;
  int tmp___10 ;
  long tmp___11 ;
  long tmp___12 ;
  int tmp___13 ;
  long tmp___14 ;
  SizeT tmp___15 ;
  long tmp___16 ;

  {
  n_ccs = (UInt )0;
  a = arenaId_to_ArenaP(aid);
  if ((unsigned int )a->name == (unsigned int )((void *)0)) {
    return;
  } else {

  }
  sanity_check_malloc_arena(aid);
  vgPlain_printf("-------- Arena \"%s\": %lu/%lu max/curr mmap\'d, %llu/%llu unsplit/split sb unmmap\'d, %lu/%lu max/curr on_loan --------\n",
                 a->name, a->stats__bytes_mmaped_max, a->stats__bytes_mmaped,
                 a->stats__nreclaim_unsplit, a->stats__nreclaim_split,
                 a->stats__bytes_on_loan_max, a->stats__bytes_on_loan);
  j = (Word )0;
  while ((SizeT )j < a->sblocks_used) {
    sb = *(a->sblocks + j);
    lastWasFree = (Bool )0;
    i = (Word )0;
    while ((SizeT )i < sb->n_payload_bytes) {
      b = (Block *)(& sb->payload_bytes[i]);
      b_bszB = get_bszB_as_is(b);
      tmp___1 = blockSane(a, b);
      if (tmp___1) {

      } else {
        vgPlain_printf("sanity_check_malloc_arena: sb %p, block %ld (bszB %lu):  BAD\n",
                       sb, i, b_bszB);
        tmp___0 = __builtin_expect(0L, 1L);
        if (tmp___0) {

        } else {
          vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                              (Char const   *)"m_mallocfree.c", 1275,
                              (Char const   *)"cc_analyse_alloc_arena", "");
        }
      }
      tmp___2 = is_inuse_block(b);
      if (tmp___2) {
        tmp___3 = 0;
      } else {
        tmp___3 = 1;
      }
      thisFree = (Bool )tmp___3;
      if (thisFree) {
        if (lastWasFree) {
          vgPlain_printf("sanity_check_malloc_arena: sb %p, block %ld (bszB %lu): UNMERGED FREES\n",
                         sb, i, b_bszB);
          tmp___4 = __builtin_expect(0L, 1L);
          if (tmp___4) {

          } else {
            vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                                (Char const   *)"m_mallocfree.c", 1281,
                                (Char const   *)"cc_analyse_alloc_arena", "");
          }
        } else {

        }
      } else {

      }
      lastWasFree = thisFree;
      if (thisFree) {
        goto __Cont;
      } else {

      }
      cc = get_cc(b);
      tmp___7 = __builtin_expect((long )(! (! cc)), 1L);
      if (tmp___7) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"cc",
                            (Char const   *)"m_mallocfree.c", 1293,
                            (Char const   *)"cc_analyse_alloc_arena", "");
      }
      k = (Word )0;
      while ((unsigned long )k < (unsigned long )n_ccs) {
        tmp___8 = __builtin_expect((long )(! (! anCCs[k].cc)), 1L);
        if (tmp___8) {

        } else {
          vgPlain_assert_fail((Bool )0, (Char const   *)"anCCs[k].cc",
                              (Char const   *)"m_mallocfree.c", 1295,
                              (Char const   *)"cc_analyse_alloc_arena", "");
        }
        tmp___9 = vgPlain_strcmp((Char const   *)cc, (Char const   *)anCCs[k].cc);
        if (0 == tmp___9) {
          break;
        } else {

        }
        k ++;
      }
      if (k >= 0L) {
        if ((unsigned long )k <= (unsigned long )n_ccs) {
          tmp___10 = 1;
        } else {
          tmp___10 = 0;
        }
      } else {
        tmp___10 = 0;
      }
      tmp___11 = __builtin_expect((long )tmp___10, 1L);
      if (tmp___11) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"k >= 0 && k <= n_ccs",
                            (Char const   *)"m_mallocfree.c", 1299,
                            (Char const   *)"cc_analyse_alloc_arena", "");
      }
      if ((unsigned long )k == (unsigned long )n_ccs) {
        tmp___12 = __builtin_expect((long )(! (! (n_ccs < 999U))), 1L);
        if (tmp___12) {

        } else {
          vgPlain_assert_fail((Bool )0, (Char const   *)"n_ccs < N_AN_CCS-1",
                              (Char const   *)"m_mallocfree.c", 1302,
                              (Char const   *)"cc_analyse_alloc_arena", "");
        }
        n_ccs ++;
        anCCs[k].nBytes = (ULong )0;
        anCCs[k].nBlocks = (ULong )0;
        anCCs[k].cc = cc;
      } else {

      }
      if (k >= 0L) {
        if ((unsigned long )k < (unsigned long )n_ccs) {
          if (k < 1000L) {
            tmp___13 = 1;
          } else {
            tmp___13 = 0;
          }
        } else {
          tmp___13 = 0;
        }
      } else {
        tmp___13 = 0;
      }
      tmp___14 = __builtin_expect((long )tmp___13, 1L);
      if (tmp___14) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"k >= 0 && k < n_ccs && k < N_AN_CCS",
                            (Char const   *)"m_mallocfree.c", 1309,
                            (Char const   *)"cc_analyse_alloc_arena", "");
      }
      tmp___15 = bszB_to_pszB(a, b_bszB);
      anCCs[k].nBytes += (ULong )tmp___15;
      (anCCs[k].nBlocks) ++;
      __Cont: /* CIL Label */ 
      tmp = mk_plain_bszB(b_bszB);
      i = (Word )((SizeT )i + tmp);
    }
    if ((SizeT )i > sb->n_payload_bytes) {
      vgPlain_printf("sanity_check_malloc_arena: sb %p: last block overshoots end\n",
                     sb);
      tmp___16 = __builtin_expect(0L, 1L);
      if (tmp___16) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                            (Char const   *)"m_mallocfree.c", 1316,
                            (Char const   *)"cc_analyse_alloc_arena", "");
      }
    } else {

    }
    j ++;
  }
  vgPlain_ssort((void *)(& anCCs[0]), (SizeT )n_ccs, (SizeT )sizeof(anCCs[0]),
                & cmp_AnCC_by_vol);
  k = (Word )0;
  while ((unsigned long )k < (unsigned long )n_ccs) {
    vgPlain_printf("%\'13llu in %\'9llu: %s\n", anCCs[k].nBytes,
                   anCCs[k].nBlocks, anCCs[k].cc);
    k ++;
  }
  vgPlain_printf("\n");
  return;
}
}
void vgPlain_sanity_check_malloc_all(void) 
{ 
  UInt i ;

  {
  i = (UInt )0;
  while (i < 8U) {
    if (i == 3U) {
      if (! client_inited) {
        goto __Cont;
      } else {

      }
    } else {

    }
    sanity_check_malloc_arena((ArenaId )i);
    __Cont: /* CIL Label */ 
    i ++;
  }
  return;
}
}
static void mkFreeBlock(Arena *a , Block *b , SizeT bszB , UInt b_lno ) 
{ 
  SizeT pszB ;
  SizeT tmp ;
  UInt tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  SizeT tmp___3 ;
  Block *b_prev ;
  Block *tmp___4 ;
  Block *b_next ;

  {
  tmp = bszB_to_pszB(a, bszB);
  pszB = tmp;
  tmp___0 = pszB_to_listNo(pszB);
  if (b_lno == tmp___0) {
    tmp___1 = 1;
  } else {
    tmp___1 = 0;
  }
  tmp___2 = __builtin_expect((long )tmp___1, 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"b_lno == pszB_to_listNo(pszB)",
                        (Char const   *)"m_mallocfree.c", 1353,
                        (Char const   *)"mkFreeBlock", "");
  }
  while (1) {
    break;
  }
  tmp___3 = mk_free_bszB(bszB);
  set_bszB(b, tmp___3);
  if ((unsigned int )a->freelist[b_lno] == (unsigned int )((void *)0)) {
    set_prev_b(b, b);
    set_next_b(b, b);
    a->freelist[b_lno] = b;
  } else {
    tmp___4 = get_prev_b(a->freelist[b_lno]);
    b_prev = tmp___4;
    b_next = a->freelist[b_lno];
    set_next_b(b_prev, b);
    set_prev_b(b_next, b);
    set_next_b(b, b_next);
    set_prev_b(b, b_prev);
  }
  return;
}
}
static void mkInuseBlock(Arena *a , Block *b , SizeT bszB ) 
{ 
  UInt i ;
  SizeT tmp ;
  int tmp___0 ;
  long tmp___1 ;
  SizeT tmp___2 ;

  {
  tmp = min_useful_bszB(a);
  if (bszB >= tmp) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"bszB >= min_useful_bszB(a)",
                        (Char const   *)"m_mallocfree.c", 1382,
                        (Char const   *)"mkInuseBlock", "");
  }
  while (1) {
    break;
  }
  tmp___2 = mk_inuse_bszB(bszB);
  set_bszB(b, tmp___2);
  set_prev_b(b, (Block *)((void *)0));
  set_next_b(b, (Block *)((void *)0));
  if (! a->clientmem) {
    i = (UInt )0;
    while ((SizeT )i < a->rz_szB) {
      set_rz_lo_byte(b, i, (UByte )(((Addr )b & 255UL) ^ 49UL));
      set_rz_hi_byte(b, i, (UByte )(((Addr )b & 255UL) ^ 124UL));
      i ++;
    }
  } else {

  }
  return;
}
}
static void unlinkBlock(Arena *a , Block *b , UInt listno ) 
{ 
  long tmp ;
  Block *tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  Block *b_prev ;
  Block *tmp___3 ;
  Block *b_next ;
  Block *tmp___4 ;
  Block *tmp___5 ;

  {
  tmp = __builtin_expect((long )(! (! (listno < 112U))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"listno < N_MALLOC_LISTS",
                        (Char const   *)"m_mallocfree.c", 1402,
                        (Char const   *)"unlinkBlock", "");
  }
  tmp___5 = get_prev_b(b);
  if ((unsigned int )tmp___5 == (unsigned int )b) {
    tmp___0 = get_next_b(b);
    if ((unsigned int )tmp___0 == (unsigned int )b) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
    tmp___2 = __builtin_expect((long )tmp___1, 1L);
    if (tmp___2) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"get_next_b(b) == b",
                          (Char const   *)"m_mallocfree.c", 1405,
                          (Char const   *)"unlinkBlock", "");
    }
    a->freelist[listno] = (Block *)((void *)0);
  } else {
    tmp___3 = get_prev_b(b);
    b_prev = tmp___3;
    tmp___4 = get_next_b(b);
    b_next = tmp___4;
    a->freelist[listno] = b_prev;
    set_next_b(b_prev, b_next);
    set_prev_b(b_next, b_prev);
    swizzle(a, listno);
  }
  set_prev_b(b, (Block *)((void *)0));
  set_next_b(b, (Block *)((void *)0));
  return;
}
}
__inline static SizeT align_req_pszB(SizeT req_pszB ) 
{ 
  SizeT n ;

  {
  n = (SizeT )7;
  return ((req_pszB + n) & ~ n);
}
}
void *vgPlain_arena_malloc(ArenaId aid , HChar *cc , SizeT req_pszB ) 
{ 
  SizeT req_bszB ;
  SizeT frag_bszB ;
  SizeT b_bszB ;
  UInt lno ;
  UInt i ;
  Superblock *new_sb ;
  Block *b ;
  Arena *a ;
  void *v ;
  UWord stats__nsearches ;
  long tmp ;
  long tmp___0 ;
  UWord nsearches_this_level ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  Superblock **array ;
  SysRes sres ;
  SysRes tmp___6 ;
  Bool tmp___7 ;
  UWord tmp___8 ;
  long tmp___9 ;
  SizeT tmp___10 ;
  long tmp___11 ;
  long tmp___12 ;
  long tmp___13 ;
  long tmp___14 ;
  SizeT tmp___15 ;
  UInt tmp___16 ;
  SizeT tmp___17 ;
  SizeT loaned ;
  SizeT tmp___18 ;
  UByte *tmp___19 ;
  long tmp___20 ;

  {
  new_sb = (Superblock *)((void *)0);
  b = (Block *)((void *)0);
  stats__nsearches = (UWord )0;
  ensure_mm_init(aid);
  a = arenaId_to_ArenaP(aid);
  tmp = __builtin_expect((long )(! (! (req_pszB < 4294967295UL))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"req_pszB < MAX_PSZB",
                        (Char const   *)"m_mallocfree.c", 1445,
                        (Char const   *)"vgPlain_arena_malloc", "");
  }
  req_pszB = align_req_pszB(req_pszB);
  req_bszB = pszB_to_bszB(a, req_pszB);
  tmp___0 = __builtin_expect((long )(! (! cc)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"cc",
                        (Char const   *)"m_mallocfree.c", 1451,
                        (Char const   *)"vgPlain_arena_malloc", "");
  }
  lno = pszB_to_listNo(req_pszB);
  while (lno < 112U) {
    nsearches_this_level = (UWord )0;
    b = a->freelist[lno];
    if ((unsigned int )((void *)0) == (unsigned int )b) {
      goto __Cont;
    } else {

    }
    while (1) {
      stats__nsearches ++;
      nsearches_this_level ++;
      tmp___2 = __builtin_expect((long )(! (! (nsearches_this_level >= 100UL))),
                                 0L);
      if (tmp___2) {
        if (lno < 111U) {
          b = a->freelist[lno];
          tmp___1 = __builtin_expect((long )(! (! b)), 1L);
          if (tmp___1) {

          } else {
            vgPlain_assert_fail((Bool )1, (Char const   *)"b",
                                (Char const   *)"m_mallocfree.c", 1488,
                                (Char const   *)"vgPlain_arena_malloc", "");
          }
          a->freelist[lno] = get_next_b(b);
          break;
        } else {

        }
      } else {

      }
      b_bszB = get_bszB(b);
      if (b_bszB >= req_bszB) {
        goto obtained_block;
      } else {

      }
      b = get_next_b(b);
      if ((unsigned int )b == (unsigned int )a->freelist[lno]) {
        break;
      } else {

      }
    }
    __Cont: /* CIL Label */ 
    lno ++;
  }
  tmp___3 = __builtin_expect((long )(! (! (lno == 112U))), 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"lno == N_MALLOC_LISTS",
                        (Char const   *)"m_mallocfree.c", 1500,
                        (Char const   *)"vgPlain_arena_malloc", "");
  }
  new_sb = newSuperblock(a, req_bszB);
  if ((unsigned int )((void *)0) == (unsigned int )new_sb) {
    tmp___4 = __builtin_expect((long )(! (! (3 == aid))), 1L);
    if (tmp___4) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"VG_AR_CLIENT == aid",
                          (Char const   *)"m_mallocfree.c", 1505,
                          (Char const   *)"vgPlain_arena_malloc", "");
    }
    return ((void *)0);
  } else {

  }
  tmp___5 = __builtin_expect((long )(! (! (a->sblocks_used <= a->sblocks_size))),
                             1L);
  if (tmp___5) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"a->sblocks_used <= a->sblocks_size",
                        (Char const   *)"m_mallocfree.c", 1509,
                        (Char const   *)"vgPlain_arena_malloc", "");
  }
  if (a->sblocks_used == a->sblocks_size) {
    tmp___6 = vgPlain_am_sbrk_anon_float_valgrind(((SizeT )sizeof(Superblock *) * a->sblocks_size) * 2UL);
    sres = tmp___6;
    tmp___7 = sr_isError(sres);
    if (tmp___7) {
      vgPlain_out_of_memory_NORETURN((HChar *)"arena_init",
                                     ((SizeT )sizeof(Superblock *) * a->sblocks_size) * 2UL);
    } else {

    }
    tmp___8 = sr_Res(sres);
    array = (Superblock **)tmp___8;
    i = (UInt )0;
    while ((SizeT )i < a->sblocks_used) {
      *(array + i) = *(a->sblocks + i);
      i ++;
    }
    a->sblocks_size *= 2UL;
    a->sblocks = array;
    vgPlain_debugLog(1, "mallocfree",
                     "sblock array for arena `%s\' resized to %ld\n", a->name,
                     a->sblocks_size);
  } else {

  }
  tmp___9 = __builtin_expect((long )(! (! (a->sblocks_used < a->sblocks_size))),
                             1L);
  if (tmp___9) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"a->sblocks_used < a->sblocks_size",
                        (Char const   *)"m_mallocfree.c", 1529,
                        (Char const   *)"vgPlain_arena_malloc", "");
  }
  i = (UInt )a->sblocks_used;
  while (i > 0U) {
    if ((unsigned int )*(a->sblocks + (i - 1U)) > (unsigned int )new_sb) {
      *(a->sblocks + i) = *(a->sblocks + (i - 1U));
    } else {
      break;
    }
    i --;
  }
  *(a->sblocks + i) = new_sb;
  (a->sblocks_used) ++;
  b = (Block *)(& new_sb->payload_bytes[0]);
  tmp___10 = bszB_to_pszB(a, new_sb->n_payload_bytes);
  lno = pszB_to_listNo(tmp___10);
  mkFreeBlock(a, b, new_sb->n_payload_bytes, lno);
  if (vgPlain_clo_profile_heap) {
    set_cc(b, (HChar *)"admin.free-new-sb-1");
  } else {

  }
  obtained_block: 
  tmp___11 = __builtin_expect((long )(! (! ((unsigned int )b != (unsigned int )((void *)0)))),
                              1L);
  if (tmp___11) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"b != NULL",
                        (Char const   *)"m_mallocfree.c", 1552,
                        (Char const   *)"vgPlain_arena_malloc", "");
  }
  tmp___12 = __builtin_expect((long )(! (! (lno < 112U))), 1L);
  if (tmp___12) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"lno < N_MALLOC_LISTS",
                        (Char const   *)"m_mallocfree.c", 1553,
                        (Char const   *)"vgPlain_arena_malloc", "");
  }
  tmp___13 = __builtin_expect((long )(! (! ((unsigned int )a->freelist[lno] != (unsigned int )((void *)0)))),
                              1L);
  if (tmp___13) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"a->freelist[lno] != NULL",
                        (Char const   *)"m_mallocfree.c", 1554,
                        (Char const   *)"vgPlain_arena_malloc", "");
  }
  b_bszB = get_bszB(b);
  tmp___14 = __builtin_expect((long )(! (! (b_bszB >= req_bszB))), 1L);
  if (tmp___14) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"b_bszB >= req_bszB",
                        (Char const   *)"m_mallocfree.c", 1558,
                        (Char const   *)"vgPlain_arena_malloc", "");
  }
  frag_bszB = b_bszB - req_bszB;
  tmp___17 = min_useful_bszB(a);
  if (frag_bszB >= tmp___17) {
    if ((unsigned int )((void *)0) == (unsigned int )new_sb) {
      goto _L___0;
    } else
    if (! new_sb->unsplittable) {
      _L___0: /* CIL Label */ 
      unlinkBlock(a, b, lno);
      mkInuseBlock(a, b, req_bszB);
      if (vgPlain_clo_profile_heap) {
        set_cc(b, cc);
      } else {

      }
      tmp___15 = bszB_to_pszB(a, frag_bszB);
      tmp___16 = pszB_to_listNo(tmp___15);
      mkFreeBlock(a, b + req_bszB, frag_bszB, tmp___16);
      if (vgPlain_clo_profile_heap) {
        set_cc(b + req_bszB, (HChar *)"admin.fragmentation-1");
      } else {

      }
      b_bszB = get_bszB(b);
    } else {
      goto _L;
    }
  } else {
    _L: /* CIL Label */ 
    unlinkBlock(a, b, lno);
    mkInuseBlock(a, b, b_bszB);
    if (vgPlain_clo_profile_heap) {
      set_cc(b, cc);
    } else {

    }
  }
  tmp___18 = bszB_to_pszB(a, b_bszB);
  loaned = tmp___18;
  a->stats__bytes_on_loan += loaned;
  if (a->stats__bytes_on_loan > a->stats__bytes_on_loan_max) {
    a->stats__bytes_on_loan_max = a->stats__bytes_on_loan;
    if (a->stats__bytes_on_loan_max >= a->next_profile_at) {
      a->next_profile_at = (SizeT )(((ULong )a->stats__bytes_on_loan_max * 105ULL) / 100ULL);
      if (vgPlain_clo_profile_heap) {
        cc_analyse_alloc_arena(aid);
      } else {

      }
    } else {

    }
  } else {

  }
  (a->stats__tot_blocks) ++;
  a->stats__tot_bytes += (ULong )loaned;
  a->stats__nsearches += (ULong )stats__nsearches;
  tmp___19 = get_block_payload(a, b);
  v = (void *)tmp___19;
  tmp___20 = __builtin_expect((long )(! (! (((Addr )v & 7UL) == 0UL))), 1L);
  if (tmp___20) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"(((Addr)v) & (VG_MIN_MALLOC_SZB-1)) == 0",
                        (Char const   *)"m_mallocfree.c", 1608,
                        (Char const   *)"vgPlain_arena_malloc", "");
  }
  while (1) {
    break;
  }
  return (v);
}
}
static void deferred_reclaimSuperblock(Arena *a , Superblock *sb ) 
{ 
  char const   *tmp ;
  char const   *tmp___0 ;
  char const   *tmp___1 ;
  UByte *def_sb_start ;
  UByte *def_sb_end ;
  Superblock *def_sb ;
  Block *b ;
  Bool tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  UInt b_listno ;
  SizeT b_bszB ;
  SizeT b_pszB ;
  Bool tmp___5 ;

  {
  if ((unsigned int )sb == (unsigned int )((void *)0)) {
    if (! a->deferred_reclaimed_sb) {
      return;
    } else {

    }
    if (a->clientmem) {
      tmp = "CLIENT";
    } else {
      tmp = "VALGRIND";
    }
    vgPlain_debugLog(1, "mallocfree",
                     "deferred_reclaimSuperblock NULL (prev %p) owner %s/%s\n",
                     a->deferred_reclaimed_sb, tmp, a->name);
  } else {
    if (a->clientmem) {
      tmp___0 = "CLIENT";
    } else {
      tmp___0 = "VALGRIND";
    }
    if (sb->unsplittable) {
      tmp___1 = "unsplittable";
    } else {
      tmp___1 = "";
    }
    vgPlain_debugLog(1, "mallocfree",
                     "deferred_reclaimSuperblock at %p (pszB %7ld) %s (prev %p) owner %s/%s\n",
                     sb, sb->n_payload_bytes, tmp___1, a->deferred_reclaimed_sb,
                     tmp___0, a->name);
  }
  if (a->deferred_reclaimed_sb) {
    if ((unsigned int )a->deferred_reclaimed_sb != (unsigned int )sb) {
      def_sb = a->deferred_reclaimed_sb;
      def_sb_start = & def_sb->payload_bytes[0];
      def_sb_end = & def_sb->payload_bytes[def_sb->n_payload_bytes - 1UL];
      b = (Block *)def_sb_start;
      tmp___2 = blockSane(a, b);
      if (tmp___2) {
        tmp___3 = 1;
      } else {
        tmp___3 = 0;
      }
      tmp___4 = __builtin_expect((long )tmp___3, 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"blockSane(a, b)",
                            (Char const   *)"m_mallocfree.c", 1689,
                            (Char const   *)"deferred_reclaimSuperblock", "");
      }
      tmp___5 = is_inuse_block(b);
      if (tmp___5) {

      } else {
        b_bszB = get_bszB(b);
        b_pszB = bszB_to_pszB(a, b_bszB);
        if ((unsigned int )((b + b_bszB) - 1) == (unsigned int )((Block *)def_sb_end)) {
          b_listno = pszB_to_listNo(b_pszB);
          unlinkBlock(a, b, b_listno);
          reclaimSuperblock(a, def_sb);
          a->deferred_reclaimed_sb = (Superblock *)((void *)0);
        } else {

        }
      }
    } else {

    }
  } else {

  }
  a->deferred_reclaimed_sb = sb;
  return;
}
}
void vgPlain_arena_free(ArenaId aid , void *ptr ) 
{ 
  Superblock *sb ;
  UByte *sb_start ;
  UByte *sb_end ;
  Block *other_b ;
  Block *b ;
  SizeT b_bszB ;
  SizeT b_pszB ;
  SizeT other_bszB ;
  UInt b_listno ;
  Arena *a ;
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  SizeT tmp___2 ;
  UInt tmp___3 ;
  SizeT tmp___4 ;
  Bool tmp___5 ;
  long tmp___6 ;
  SizeT tmp___7 ;
  SizeT tmp___8 ;
  UInt tmp___9 ;
  SizeT tmp___10 ;
  Bool tmp___11 ;
  long tmp___12 ;
  SizeT tmp___13 ;
  long tmp___14 ;
  long tmp___15 ;

  {
  ensure_mm_init(aid);
  a = arenaId_to_ArenaP(aid);
  if ((unsigned int )ptr == (unsigned int )((void *)0)) {
    return;
  } else {

  }
  b = get_payload_block(a, (UByte *)ptr);
  if (aid != 3) {
    tmp = blockSane(a, b);
    if (tmp) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
    tmp___1 = __builtin_expect((long )tmp___0, 1L);
    if (tmp___1) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"blockSane(a, b)",
                          (Char const   *)"m_mallocfree.c", 1739,
                          (Char const   *)"vgPlain_arena_free", "");
    }
  } else {

  }
  b_bszB = get_bszB(b);
  b_pszB = bszB_to_pszB(a, b_bszB);
  sb = findSb(a, b);
  sb_start = & sb->payload_bytes[0];
  sb_end = & sb->payload_bytes[sb->n_payload_bytes - 1UL];
  a->stats__bytes_on_loan -= b_pszB;
  if (aid != 3) {
    vgPlain_memset(ptr, 221, b_pszB);
  } else {

  }
  if (! sb->unsplittable) {
    b_listno = pszB_to_listNo(b_pszB);
    mkFreeBlock(a, b, b_bszB, b_listno);
    if (vgPlain_clo_profile_heap) {
      set_cc(b, (HChar *)"admin.free-1");
    } else {

    }
    other_b = b + b_bszB;
    tmp___7 = min_useful_bszB(a);
    if ((unsigned int )((other_b + tmp___7) - 1) <= (unsigned int )((Block *)sb_end)) {
      other_bszB = get_bszB(other_b);
      tmp___5 = is_inuse_block(other_b);
      if (tmp___5) {

      } else {
        unlinkBlock(a, b, b_listno);
        tmp___2 = bszB_to_pszB(a, other_bszB);
        tmp___3 = pszB_to_listNo(tmp___2);
        unlinkBlock(a, other_b, tmp___3);
        b_bszB += other_bszB;
        tmp___4 = bszB_to_pszB(a, b_bszB);
        b_listno = pszB_to_listNo(tmp___4);
        mkFreeBlock(a, b, b_bszB, b_listno);
        if (vgPlain_clo_profile_heap) {
          set_cc(b, (HChar *)"admin.free-2");
        } else {

        }
      }
    } else {
      tmp___6 = __builtin_expect((long )(! (! ((unsigned int )(other_b - 1) == (unsigned int )((Block *)sb_end)))),
                                 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"other_b-1 == (Block*)sb_end",
                            (Char const   *)"m_mallocfree.c", 1789,
                            (Char const   *)"vgPlain_arena_free", "");
      }
    }
    tmp___13 = min_useful_bszB(a);
    if ((unsigned int )b >= (unsigned int )((Block *)sb_start + tmp___13)) {
      other_b = get_predecessor_block(b);
      other_bszB = get_bszB(other_b);
      tmp___11 = is_inuse_block(other_b);
      if (tmp___11) {

      } else {
        unlinkBlock(a, b, b_listno);
        tmp___8 = bszB_to_pszB(a, other_bszB);
        tmp___9 = pszB_to_listNo(tmp___8);
        unlinkBlock(a, other_b, tmp___9);
        b = other_b;
        b_bszB += other_bszB;
        tmp___10 = bszB_to_pszB(a, b_bszB);
        b_listno = pszB_to_listNo(tmp___10);
        mkFreeBlock(a, b, b_bszB, b_listno);
        if (vgPlain_clo_profile_heap) {
          set_cc(b, (HChar *)"admin.free-3");
        } else {

        }
      }
    } else {
      tmp___12 = __builtin_expect((long )(! (! ((unsigned int )((Block *)sb_start) == (unsigned int )b))),
                                  1L);
      if (tmp___12) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"(Block*)sb_start == b",
                            (Char const   *)"m_mallocfree.c", 1814,
                            (Char const   *)"vgPlain_arena_free", "");
      }
    }
    if ((unsigned int )((Block *)sb_start) == (unsigned int )b) {
      if ((unsigned int )((b + b_bszB) - 1) == (unsigned int )((Block *)sb_end)) {
        deferred_reclaimSuperblock(a, sb);
      } else {

      }
    } else {

    }
    while (1) {
      break;
    }
    while (1) {
      break;
    }
    while (1) {
      break;
    }
    while (1) {
      break;
    }
  } else {
    tmp___14 = __builtin_expect((long )(! (! ((unsigned int )((Block *)sb_start) == (unsigned int )b))),
                                1L);
    if (tmp___14) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"(Block*)sb_start == b",
                          (Char const   *)"m_mallocfree.c", 1850,
                          (Char const   *)"vgPlain_arena_free", "");
    }
    other_b = b + b_bszB;
    tmp___15 = __builtin_expect((long )(! (! ((unsigned int )(other_b - 1) == (unsigned int )((Block *)sb_end)))),
                                1L);
    if (tmp___15) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"other_b-1 == (Block*)sb_end",
                          (Char const   *)"m_mallocfree.c", 1854,
                          (Char const   *)"vgPlain_arena_free", "");
    }
    while (1) {
      break;
    }
    reclaimSuperblock(a, sb);
  }
  return;
}
}
void *vgPlain_arena_memalign(ArenaId aid , HChar *cc , SizeT req_alignB ,
                             SizeT req_pszB ) 
{ 
  SizeT base_pszB_req ;
  SizeT base_pszB_act ;
  SizeT frag_bszB ;
  Block *base_b ;
  Block *align_b ;
  UByte *base_p ;
  UByte *align_p ;
  SizeT saved_bytes_on_loan ;
  Arena *a ;
  long tmp ;
  long tmp___0 ;
  Int tmp___1 ;
  long tmp___2 ;
  SizeT tmp___3 ;
  SizeT save_min_unsplittable_sblock_szB ;
  void *tmp___4 ;
  SizeT tmp___5 ;
  SizeT tmp___6 ;
  void *tmp___7 ;
  SizeT tmp___8 ;
  int tmp___9 ;
  long tmp___10 ;
  SizeT tmp___11 ;
  UInt tmp___12 ;
  SizeT tmp___13 ;
  Block *tmp___14 ;
  Bool tmp___15 ;
  int tmp___16 ;
  long tmp___17 ;
  Block *tmp___18 ;
  SizeT tmp___19 ;
  int tmp___20 ;
  long tmp___21 ;
  Block *tmp___22 ;
  SizeT tmp___23 ;
  long tmp___24 ;

  {
  ensure_mm_init(aid);
  a = arenaId_to_ArenaP(aid);
  tmp = __builtin_expect((long )(! (! (req_pszB < 4294967295UL))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"req_pszB < MAX_PSZB",
                        (Char const   *)"m_mallocfree.c", 1917,
                        (Char const   *)"vgPlain_arena_memalign", "");
  }
  tmp___0 = __builtin_expect((long )(! (! cc)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"cc",
                        (Char const   *)"m_mallocfree.c", 1921,
                        (Char const   *)"vgPlain_arena_memalign", "");
  }
  if (req_alignB < 8UL) {
    vgPlain_printf("VG_(arena_memalign)(%p, %lu, %lu)\nbad alignment value %lu\n(it is too small, too big, or not a power of two)",
                   a, req_alignB, req_pszB, req_alignB);
    vgPlain_core_panic((Char *)"VG_(arena_memalign)");
  } else
  if (req_alignB > 1048576UL) {
    vgPlain_printf("VG_(arena_memalign)(%p, %lu, %lu)\nbad alignment value %lu\n(it is too small, too big, or not a power of two)",
                   a, req_alignB, req_pszB, req_alignB);
    vgPlain_core_panic((Char *)"VG_(arena_memalign)");
  } else {
    tmp___1 = vgPlain_log2((UInt )req_alignB);
    if (tmp___1 == -1) {
      vgPlain_printf("VG_(arena_memalign)(%p, %lu, %lu)\nbad alignment value %lu\n(it is too small, too big, or not a power of two)",
                     a, req_alignB, req_pszB, req_alignB);
      vgPlain_core_panic((Char *)"VG_(arena_memalign)");
    } else {

    }
  }
  tmp___2 = __builtin_expect((long )(! (! (req_alignB % 8UL == 0UL))), 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"req_alignB % VG_MIN_MALLOC_SZB == 0",
                        (Char const   *)"m_mallocfree.c", 1936,
                        (Char const   *)"vgPlain_arena_memalign", "");
  }
  req_pszB = align_req_pszB(req_pszB);
  tmp___3 = min_useful_bszB(a);
  base_pszB_req = (req_pszB + tmp___3) + req_alignB;
  saved_bytes_on_loan = a->stats__bytes_on_loan;
  save_min_unsplittable_sblock_szB = a->min_unsplittable_sblock_szB;
  a->min_unsplittable_sblock_szB = ~ ((SizeT )0);
  tmp___4 = vgPlain_arena_malloc(aid, cc, base_pszB_req);
  base_p = (UByte *)tmp___4;
  a->min_unsplittable_sblock_szB = save_min_unsplittable_sblock_szB;
  a->stats__bytes_on_loan = saved_bytes_on_loan;
  if ((unsigned int )base_p == (unsigned int )((UByte *)0)) {
    return ((void *)0);
  } else {

  }
  while (1) {
    break;
  }
  while (1) {
    break;
  }
  base_b = get_payload_block(a, base_p);
  tmp___5 = overhead_szB_lo(a);
  tmp___6 = overhead_szB_hi(a);
  tmp___7 = align_upwards((void *)((base_b + 2UL * tmp___5) + tmp___6),
                          req_alignB);
  align_p = (UByte *)tmp___7;
  align_b = get_payload_block(a, align_p);
  frag_bszB = (SizeT )(align_b - base_b);
  tmp___8 = min_useful_bszB(a);
  if (frag_bszB >= tmp___8) {
    tmp___9 = 1;
  } else {
    tmp___9 = 0;
  }
  tmp___10 = __builtin_expect((long )tmp___9, 1L);
  if (tmp___10) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"frag_bszB >= min_useful_bszB(a)",
                        (Char const   *)"m_mallocfree.c", 1982,
                        (Char const   *)"vgPlain_arena_memalign", "");
  }
  base_pszB_act = get_pszB(a, base_b);
  tmp___11 = bszB_to_pszB(a, frag_bszB);
  tmp___12 = pszB_to_listNo(tmp___11);
  mkFreeBlock(a, base_b, frag_bszB, tmp___12);
  if (vgPlain_clo_profile_heap) {
    set_cc(base_b, (HChar *)"admin.frag-memalign-1");
  } else {

  }
  tmp___13 = overhead_szB_hi(a);
  mkInuseBlock(a, align_b,
               (SizeT )(((base_p + base_pszB_act) + tmp___13) - (UByte *)align_b));
  if (vgPlain_clo_profile_heap) {
    set_cc(align_b, cc);
  } else {

  }
  tmp___14 = get_payload_block(a, align_p);
  tmp___15 = is_inuse_block(tmp___14);
  if (tmp___15) {
    tmp___16 = 1;
  } else {
    tmp___16 = 0;
  }
  tmp___17 = __builtin_expect((long )tmp___16, 1L);
  if (tmp___17) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"is_inuse_block(get_payload_block(a, align_p))",
                        (Char const   *)"m_mallocfree.c", 2001,
                        (Char const   *)"vgPlain_arena_memalign", "");
  }
  tmp___18 = get_payload_block(a, align_p);
  tmp___19 = get_pszB(a, tmp___18);
  if (req_pszB <= tmp___19) {
    tmp___20 = 1;
  } else {
    tmp___20 = 0;
  }
  tmp___21 = __builtin_expect((long )tmp___20, 1L);
  if (tmp___21) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"req_pszB <= get_pszB(a, get_payload_block(a, align_p))",
                        (Char const   *)"m_mallocfree.c", 2003,
                        (Char const   *)"vgPlain_arena_memalign", "");
  }
  tmp___22 = get_payload_block(a, align_p);
  tmp___23 = get_pszB(a, tmp___22);
  a->stats__bytes_on_loan += tmp___23;
  if (a->stats__bytes_on_loan > a->stats__bytes_on_loan_max) {
    a->stats__bytes_on_loan_max = a->stats__bytes_on_loan;
  } else {

  }
  tmp___24 = __builtin_expect((long )(! (! ((Addr )align_p % req_alignB == 0UL))),
                              1L);
  if (tmp___24) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"(((Addr)align_p) % req_alignB) == 0",
                        (Char const   *)"m_mallocfree.c", 2017,
                        (Char const   *)"vgPlain_arena_memalign", "");
  }
  while (1) {
    break;
  }
  return ((void *)align_p);
}
}
SizeT vgPlain_arena_malloc_usable_size(ArenaId aid , void *ptr ) 
{ 
  Arena *a ;
  Arena *tmp ;
  Block *b ;
  Block *tmp___0 ;
  SizeT tmp___1 ;

  {
  tmp = arenaId_to_ArenaP(aid);
  a = tmp;
  tmp___0 = get_payload_block(a, (UByte *)ptr);
  b = tmp___0;
  tmp___1 = get_pszB(a, b);
  return (tmp___1);
}
}
void vgPlain_mallinfo(ThreadId tid , struct vg_mallinfo *mi ) 
{ 
  UWord i ;
  UWord free_blocks ;
  UWord free_blocks_size ;
  Arena *a ;
  Arena *tmp ;
  Block *b ;
  SizeT tmp___0 ;

  {
  tmp = arenaId_to_ArenaP(3);
  a = tmp;
  free_blocks = (UWord )0;
  free_blocks_size = free_blocks;
  i = (UWord )0;
  while (i < 112UL) {
    b = a->freelist[i];
    if ((unsigned int )b == (unsigned int )((void *)0)) {
      goto __Cont;
    } else {

    }
    while (1) {
      free_blocks ++;
      tmp___0 = get_pszB(a, b);
      free_blocks_size += tmp___0;
      b = get_next_b(b);
      if ((unsigned int )b == (unsigned int )a->freelist[i]) {
        break;
      } else {

      }
    }
    __Cont: /* CIL Label */ 
    i ++;
  }
  mi->arena = (int )a->stats__bytes_mmaped;
  mi->ordblks = (int )((Long )free_blocks + vgPlain_free_queue_length);
  mi->smblks = 0;
  mi->hblks = 0;
  mi->hblkhd = 0;
  mi->usmblks = 0;
  mi->fsmblks = 0;
  mi->uordblks = (int )((Long )a->stats__bytes_on_loan - vgPlain_free_queue_volume);
  mi->fordblks = (int )((Long )free_blocks_size + vgPlain_free_queue_volume);
  mi->keepcost = 0;
  return;
}
}
void *vgPlain_arena_calloc(ArenaId aid , HChar *cc , SizeT nmemb ,
                           SizeT bytes_per_memb ) 
{ 
  SizeT size ;
  UChar *p ;
  int tmp ;
  long tmp___0 ;
  void *tmp___1 ;

  {
  size = nmemb * bytes_per_memb;
  if (size >= nmemb) {
    if (size >= bytes_per_memb) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"size >= nmemb && size >= bytes_per_memb",
                        (Char const   *)"m_mallocfree.c", 2106,
                        (Char const   *)"vgPlain_arena_calloc", "");
  }
  tmp___1 = vgPlain_arena_malloc(aid, cc, size);
  p = (UChar *)tmp___1;
  vgPlain_memset((void *)p, 0, size);
  return ((void *)p);
}
}
void *vgPlain_arena_realloc(ArenaId aid , HChar *cc , void *ptr ,
                            SizeT req_pszB ) 
{ 
  Arena *a ;
  SizeT old_pszB ;
  UChar *p_new ;
  Block *b ;
  long tmp ;
  void *tmp___0 ;
  Bool tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  Bool tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;
  void *tmp___7 ;

  {
  ensure_mm_init(aid);
  a = arenaId_to_ArenaP(aid);
  tmp = __builtin_expect((long )(! (! (req_pszB < 4294967295UL))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"req_pszB < MAX_PSZB",
                        (Char const   *)"m_mallocfree.c", 2127,
                        (Char const   *)"vgPlain_arena_realloc", "");
  }
  if ((unsigned int )((void *)0) == (unsigned int )ptr) {
    tmp___0 = vgPlain_arena_malloc(aid, cc, req_pszB);
    return (tmp___0);
  } else {

  }
  if (req_pszB == 0UL) {
    vgPlain_arena_free(aid, ptr);
    return ((void *)0);
  } else {

  }
  b = get_payload_block(a, (UByte *)ptr);
  tmp___1 = blockSane(a, b);
  if (tmp___1) {
    tmp___2 = 1;
  } else {
    tmp___2 = 0;
  }
  tmp___3 = __builtin_expect((long )tmp___2, 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"blockSane(a, b)",
                        (Char const   *)"m_mallocfree.c", 2139,
                        (Char const   *)"vgPlain_arena_realloc", "");
  }
  tmp___4 = is_inuse_block(b);
  if (tmp___4) {
    tmp___5 = 1;
  } else {
    tmp___5 = 0;
  }
  tmp___6 = __builtin_expect((long )tmp___5, 1L);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"is_inuse_block(b)",
                        (Char const   *)"m_mallocfree.c", 2141,
                        (Char const   *)"vgPlain_arena_realloc", "");
  }
  old_pszB = get_pszB(a, b);
  if (req_pszB <= old_pszB) {
    return (ptr);
  } else {

  }
  tmp___7 = vgPlain_arena_malloc(aid, cc, req_pszB);
  p_new = (UChar *)tmp___7;
  vgPlain_memcpy((void *)p_new, (void const   *)ptr, old_pszB);
  vgPlain_arena_free(aid, ptr);
  return ((void *)p_new);
}
}
__inline Char *vgPlain_arena_strdup(ArenaId aid , HChar *cc , Char const   *s ) 
{ 
  Int i ;
  Int len ;
  Char *res ;
  SizeT tmp ;
  void *tmp___0 ;

  {
  if ((unsigned int )s == (unsigned int )((void *)0)) {
    return ((Char *)((void *)0));
  } else {

  }
  tmp = vgPlain_strlen(s);
  len = (Int )(tmp + 1UL);
  tmp___0 = vgPlain_arena_malloc(aid, cc, (SizeT )len);
  res = (Char *)tmp___0;
  i = 0;
  while (i < len) {
    *(res + i) = (Char )*(s + i);
    i ++;
  }
  return (res);
}
}
void *vgPlain_malloc(HChar *cc , SizeT nbytes ) 
{ 
  void *tmp ;

  {
  tmp = vgPlain_arena_malloc(1, cc, nbytes);
  return (tmp);
}
}
void vgPlain_free(void *ptr ) 
{ 


  {
  vgPlain_arena_free(1, ptr);
  return;
}
}
void *vgPlain_calloc(HChar *cc , SizeT nmemb , SizeT bytes_per_memb ) 
{ 
  void *tmp ;

  {
  tmp = vgPlain_arena_calloc(1, cc, nmemb, bytes_per_memb);
  return (tmp);
}
}
void *vgPlain_realloc(HChar *cc , void *ptr , SizeT size ) 
{ 
  void *tmp ;

  {
  tmp = vgPlain_arena_realloc(1, cc, ptr, size);
  return (tmp);
}
}
Char *vgPlain_strdup(HChar *cc , Char const   *s ) 
{ 
  Char *tmp ;

  {
  tmp = vgPlain_arena_strdup(1, cc, s);
  return (tmp);
}
}
SizeT vgPlain_malloc_usable_size(void *p ) 
{ 
  SizeT tmp ;

  {
  tmp = vgPlain_arena_malloc_usable_size(3, p);
  return (tmp);
}
}
