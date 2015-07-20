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
    Iop_DivModU64to32 = 82016,
    Iop_DivModS64to32 = 82017,
    Iop_DivModU128to64 = 82018,
    Iop_DivModS128to64 = 82019,
    Iop_DivModS64to64 = 82020,
    Iop_8Uto16 = 82021,
    Iop_8Uto32 = 82022,
    Iop_8Uto64 = 82023,
    Iop_16Uto32 = 82024,
    Iop_16Uto64 = 82025,
    Iop_32Uto64 = 82026,
    Iop_8Sto16 = 82027,
    Iop_8Sto32 = 82028,
    Iop_8Sto64 = 82029,
    Iop_16Sto32 = 82030,
    Iop_16Sto64 = 82031,
    Iop_32Sto64 = 82032,
    Iop_64to8 = 82033,
    Iop_32to8 = 82034,
    Iop_64to16 = 82035,
    Iop_16to8 = 82036,
    Iop_16HIto8 = 82037,
    Iop_8HLto16 = 82038,
    Iop_32to16 = 82039,
    Iop_32HIto16 = 82040,
    Iop_16HLto32 = 82041,
    Iop_64to32 = 82042,
    Iop_64HIto32 = 82043,
    Iop_32HLto64 = 82044,
    Iop_128to64 = 82045,
    Iop_128HIto64 = 82046,
    Iop_64HLto128 = 82047,
    Iop_Not1 = 82048,
    Iop_32to1 = 82049,
    Iop_64to1 = 82050,
    Iop_1Uto8 = 82051,
    Iop_1Uto32 = 82052,
    Iop_1Uto64 = 82053,
    Iop_1Sto8 = 82054,
    Iop_1Sto16 = 82055,
    Iop_1Sto32 = 82056,
    Iop_1Sto64 = 82057,
    Iop_AddF64 = 82058,
    Iop_SubF64 = 82059,
    Iop_MulF64 = 82060,
    Iop_DivF64 = 82061,
    Iop_AddF32 = 82062,
    Iop_SubF32 = 82063,
    Iop_MulF32 = 82064,
    Iop_DivF32 = 82065,
    Iop_AddF64r32 = 82066,
    Iop_SubF64r32 = 82067,
    Iop_MulF64r32 = 82068,
    Iop_DivF64r32 = 82069,
    Iop_NegF64 = 82070,
    Iop_AbsF64 = 82071,
    Iop_NegF32 = 82072,
    Iop_AbsF32 = 82073,
    Iop_SqrtF64 = 82074,
    Iop_SqrtF64r32 = 82075,
    Iop_SqrtF32 = 82076,
    Iop_CmpF64 = 82077,
    Iop_CmpF32 = 82078,
    Iop_CmpF128 = 82079,
    Iop_F64toI16S = 82080,
    Iop_F64toI32S = 82081,
    Iop_F64toI64S = 82082,
    Iop_F64toI32U = 82083,
    Iop_I16StoF64 = 82084,
    Iop_I32StoF64 = 82085,
    Iop_I64StoF64 = 82086,
    Iop_I64UtoF64 = 82087,
    Iop_I64UtoF32 = 82088,
    Iop_I32UtoF64 = 82089,
    Iop_F32toI16S = 82090,
    Iop_F32toI32S = 82091,
    Iop_F32toI64S = 82092,
    Iop_I16StoF32 = 82093,
    Iop_I32StoF32 = 82094,
    Iop_I64StoF32 = 82095,
    Iop_F32toF64 = 82096,
    Iop_F64toF32 = 82097,
    Iop_ReinterpF64asI64 = 82098,
    Iop_ReinterpI64asF64 = 82099,
    Iop_ReinterpF32asI32 = 82100,
    Iop_ReinterpI32asF32 = 82101,
    Iop_F64HLtoF128 = 82102,
    Iop_F128HItoF64 = 82103,
    Iop_F128LOtoF64 = 82104,
    Iop_AddF128 = 82105,
    Iop_SubF128 = 82106,
    Iop_MulF128 = 82107,
    Iop_DivF128 = 82108,
    Iop_NegF128 = 82109,
    Iop_AbsF128 = 82110,
    Iop_SqrtF128 = 82111,
    Iop_I32StoF128 = 82112,
    Iop_I64StoF128 = 82113,
    Iop_F32toF128 = 82114,
    Iop_F64toF128 = 82115,
    Iop_F128toI32S = 82116,
    Iop_F128toI64S = 82117,
    Iop_F128toF64 = 82118,
    Iop_F128toF32 = 82119,
    Iop_AtanF64 = 82120,
    Iop_Yl2xF64 = 82121,
    Iop_Yl2xp1F64 = 82122,
    Iop_PRemF64 = 82123,
    Iop_PRemC3210F64 = 82124,
    Iop_PRem1F64 = 82125,
    Iop_PRem1C3210F64 = 82126,
    Iop_ScaleF64 = 82127,
    Iop_SinF64 = 82128,
    Iop_CosF64 = 82129,
    Iop_TanF64 = 82130,
    Iop_2xm1F64 = 82131,
    Iop_RoundF64toInt = 82132,
    Iop_RoundF32toInt = 82133,
    Iop_MAddF32 = 82134,
    Iop_MSubF32 = 82135,
    Iop_MAddF64 = 82136,
    Iop_MSubF64 = 82137,
    Iop_MAddF64r32 = 82138,
    Iop_MSubF64r32 = 82139,
    Iop_Est5FRSqrt = 82140,
    Iop_RoundF64toF64_NEAREST = 82141,
    Iop_RoundF64toF64_NegINF = 82142,
    Iop_RoundF64toF64_PosINF = 82143,
    Iop_RoundF64toF64_ZERO = 82144,
    Iop_TruncF64asF32 = 82145,
    Iop_RoundF64toF32 = 82146,
    Iop_CalcFPRF = 82147,
    Iop_Add16x2 = 82148,
    Iop_Sub16x2 = 82149,
    Iop_QAdd16Sx2 = 82150,
    Iop_QAdd16Ux2 = 82151,
    Iop_QSub16Sx2 = 82152,
    Iop_QSub16Ux2 = 82153,
    Iop_HAdd16Ux2 = 82154,
    Iop_HAdd16Sx2 = 82155,
    Iop_HSub16Ux2 = 82156,
    Iop_HSub16Sx2 = 82157,
    Iop_Add8x4 = 82158,
    Iop_Sub8x4 = 82159,
    Iop_QAdd8Sx4 = 82160,
    Iop_QAdd8Ux4 = 82161,
    Iop_QSub8Sx4 = 82162,
    Iop_QSub8Ux4 = 82163,
    Iop_HAdd8Ux4 = 82164,
    Iop_HAdd8Sx4 = 82165,
    Iop_HSub8Ux4 = 82166,
    Iop_HSub8Sx4 = 82167,
    Iop_Sad8Ux4 = 82168,
    Iop_CmpNEZ16x2 = 82169,
    Iop_CmpNEZ8x4 = 82170,
    Iop_I32UtoFx2 = 82171,
    Iop_I32StoFx2 = 82172,
    Iop_FtoI32Ux2_RZ = 82173,
    Iop_FtoI32Sx2_RZ = 82174,
    Iop_F32ToFixed32Ux2_RZ = 82175,
    Iop_F32ToFixed32Sx2_RZ = 82176,
    Iop_Fixed32UToF32x2_RN = 82177,
    Iop_Fixed32SToF32x2_RN = 82178,
    Iop_Max32Fx2 = 82179,
    Iop_Min32Fx2 = 82180,
    Iop_PwMax32Fx2 = 82181,
    Iop_PwMin32Fx2 = 82182,
    Iop_CmpEQ32Fx2 = 82183,
    Iop_CmpGT32Fx2 = 82184,
    Iop_CmpGE32Fx2 = 82185,
    Iop_Recip32Fx2 = 82186,
    Iop_Recps32Fx2 = 82187,
    Iop_Rsqrte32Fx2 = 82188,
    Iop_Rsqrts32Fx2 = 82189,
    Iop_Neg32Fx2 = 82190,
    Iop_Abs32Fx2 = 82191,
    Iop_CmpNEZ8x8 = 82192,
    Iop_CmpNEZ16x4 = 82193,
    Iop_CmpNEZ32x2 = 82194,
    Iop_Add8x8 = 82195,
    Iop_Add16x4 = 82196,
    Iop_Add32x2 = 82197,
    Iop_QAdd8Ux8 = 82198,
    Iop_QAdd16Ux4 = 82199,
    Iop_QAdd32Ux2 = 82200,
    Iop_QAdd64Ux1 = 82201,
    Iop_QAdd8Sx8 = 82202,
    Iop_QAdd16Sx4 = 82203,
    Iop_QAdd32Sx2 = 82204,
    Iop_QAdd64Sx1 = 82205,
    Iop_PwAdd8x8 = 82206,
    Iop_PwAdd16x4 = 82207,
    Iop_PwAdd32x2 = 82208,
    Iop_PwMax8Sx8 = 82209,
    Iop_PwMax16Sx4 = 82210,
    Iop_PwMax32Sx2 = 82211,
    Iop_PwMax8Ux8 = 82212,
    Iop_PwMax16Ux4 = 82213,
    Iop_PwMax32Ux2 = 82214,
    Iop_PwMin8Sx8 = 82215,
    Iop_PwMin16Sx4 = 82216,
    Iop_PwMin32Sx2 = 82217,
    Iop_PwMin8Ux8 = 82218,
    Iop_PwMin16Ux4 = 82219,
    Iop_PwMin32Ux2 = 82220,
    Iop_PwAddL8Ux8 = 82221,
    Iop_PwAddL16Ux4 = 82222,
    Iop_PwAddL32Ux2 = 82223,
    Iop_PwAddL8Sx8 = 82224,
    Iop_PwAddL16Sx4 = 82225,
    Iop_PwAddL32Sx2 = 82226,
    Iop_Sub8x8 = 82227,
    Iop_Sub16x4 = 82228,
    Iop_Sub32x2 = 82229,
    Iop_QSub8Ux8 = 82230,
    Iop_QSub16Ux4 = 82231,
    Iop_QSub32Ux2 = 82232,
    Iop_QSub64Ux1 = 82233,
    Iop_QSub8Sx8 = 82234,
    Iop_QSub16Sx4 = 82235,
    Iop_QSub32Sx2 = 82236,
    Iop_QSub64Sx1 = 82237,
    Iop_Abs8x8 = 82238,
    Iop_Abs16x4 = 82239,
    Iop_Abs32x2 = 82240,
    Iop_Mul8x8 = 82241,
    Iop_Mul16x4 = 82242,
    Iop_Mul32x2 = 82243,
    Iop_Mul32Fx2 = 82244,
    Iop_MulHi16Ux4 = 82245,
    Iop_MulHi16Sx4 = 82246,
    Iop_PolynomialMul8x8 = 82247,
    Iop_QDMulHi16Sx4 = 82248,
    Iop_QDMulHi32Sx2 = 82249,
    Iop_QRDMulHi16Sx4 = 82250,
    Iop_QRDMulHi32Sx2 = 82251,
    Iop_Avg8Ux8 = 82252,
    Iop_Avg16Ux4 = 82253,
    Iop_Max8Sx8 = 82254,
    Iop_Max16Sx4 = 82255,
    Iop_Max32Sx2 = 82256,
    Iop_Max8Ux8 = 82257,
    Iop_Max16Ux4 = 82258,
    Iop_Max32Ux2 = 82259,
    Iop_Min8Sx8 = 82260,
    Iop_Min16Sx4 = 82261,
    Iop_Min32Sx2 = 82262,
    Iop_Min8Ux8 = 82263,
    Iop_Min16Ux4 = 82264,
    Iop_Min32Ux2 = 82265,
    Iop_CmpEQ8x8 = 82266,
    Iop_CmpEQ16x4 = 82267,
    Iop_CmpEQ32x2 = 82268,
    Iop_CmpGT8Ux8 = 82269,
    Iop_CmpGT16Ux4 = 82270,
    Iop_CmpGT32Ux2 = 82271,
    Iop_CmpGT8Sx8 = 82272,
    Iop_CmpGT16Sx4 = 82273,
    Iop_CmpGT32Sx2 = 82274,
    Iop_Cnt8x8 = 82275,
    Iop_Clz8Sx8 = 82276,
    Iop_Clz16Sx4 = 82277,
    Iop_Clz32Sx2 = 82278,
    Iop_Cls8Sx8 = 82279,
    Iop_Cls16Sx4 = 82280,
    Iop_Cls32Sx2 = 82281,
    Iop_Shl8x8 = 82282,
    Iop_Shl16x4 = 82283,
    Iop_Shl32x2 = 82284,
    Iop_Shr8x8 = 82285,
    Iop_Shr16x4 = 82286,
    Iop_Shr32x2 = 82287,
    Iop_Sar8x8 = 82288,
    Iop_Sar16x4 = 82289,
    Iop_Sar32x2 = 82290,
    Iop_Sal8x8 = 82291,
    Iop_Sal16x4 = 82292,
    Iop_Sal32x2 = 82293,
    Iop_Sal64x1 = 82294,
    Iop_ShlN8x8 = 82295,
    Iop_ShlN16x4 = 82296,
    Iop_ShlN32x2 = 82297,
    Iop_ShrN8x8 = 82298,
    Iop_ShrN16x4 = 82299,
    Iop_ShrN32x2 = 82300,
    Iop_SarN8x8 = 82301,
    Iop_SarN16x4 = 82302,
    Iop_SarN32x2 = 82303,
    Iop_QShl8x8 = 82304,
    Iop_QShl16x4 = 82305,
    Iop_QShl32x2 = 82306,
    Iop_QShl64x1 = 82307,
    Iop_QSal8x8 = 82308,
    Iop_QSal16x4 = 82309,
    Iop_QSal32x2 = 82310,
    Iop_QSal64x1 = 82311,
    Iop_QShlN8Sx8 = 82312,
    Iop_QShlN16Sx4 = 82313,
    Iop_QShlN32Sx2 = 82314,
    Iop_QShlN64Sx1 = 82315,
    Iop_QShlN8x8 = 82316,
    Iop_QShlN16x4 = 82317,
    Iop_QShlN32x2 = 82318,
    Iop_QShlN64x1 = 82319,
    Iop_QSalN8x8 = 82320,
    Iop_QSalN16x4 = 82321,
    Iop_QSalN32x2 = 82322,
    Iop_QSalN64x1 = 82323,
    Iop_QNarrowBin16Sto8Ux8 = 82324,
    Iop_QNarrowBin16Sto8Sx8 = 82325,
    Iop_QNarrowBin32Sto16Sx4 = 82326,
    Iop_InterleaveHI8x8 = 82327,
    Iop_InterleaveHI16x4 = 82328,
    Iop_InterleaveHI32x2 = 82329,
    Iop_InterleaveLO8x8 = 82330,
    Iop_InterleaveLO16x4 = 82331,
    Iop_InterleaveLO32x2 = 82332,
    Iop_InterleaveOddLanes8x8 = 82333,
    Iop_InterleaveEvenLanes8x8 = 82334,
    Iop_InterleaveOddLanes16x4 = 82335,
    Iop_InterleaveEvenLanes16x4 = 82336,
    Iop_CatOddLanes8x8 = 82337,
    Iop_CatOddLanes16x4 = 82338,
    Iop_CatEvenLanes8x8 = 82339,
    Iop_CatEvenLanes16x4 = 82340,
    Iop_GetElem8x8 = 82341,
    Iop_GetElem16x4 = 82342,
    Iop_GetElem32x2 = 82343,
    Iop_SetElem8x8 = 82344,
    Iop_SetElem16x4 = 82345,
    Iop_SetElem32x2 = 82346,
    Iop_Dup8x8 = 82347,
    Iop_Dup16x4 = 82348,
    Iop_Dup32x2 = 82349,
    Iop_Extract64 = 82350,
    Iop_Reverse16_8x8 = 82351,
    Iop_Reverse32_8x8 = 82352,
    Iop_Reverse32_16x4 = 82353,
    Iop_Reverse64_8x8 = 82354,
    Iop_Reverse64_16x4 = 82355,
    Iop_Reverse64_32x2 = 82356,
    Iop_Perm8x8 = 82357,
    Iop_Recip32x2 = 82358,
    Iop_Rsqrte32x2 = 82359,
    Iop_Add32Fx4 = 82360,
    Iop_Sub32Fx4 = 82361,
    Iop_Mul32Fx4 = 82362,
    Iop_Div32Fx4 = 82363,
    Iop_Max32Fx4 = 82364,
    Iop_Min32Fx4 = 82365,
    Iop_Add32Fx2 = 82366,
    Iop_Sub32Fx2 = 82367,
    Iop_CmpEQ32Fx4 = 82368,
    Iop_CmpLT32Fx4 = 82369,
    Iop_CmpLE32Fx4 = 82370,
    Iop_CmpUN32Fx4 = 82371,
    Iop_CmpGT32Fx4 = 82372,
    Iop_CmpGE32Fx4 = 82373,
    Iop_Abs32Fx4 = 82374,
    Iop_PwMax32Fx4 = 82375,
    Iop_PwMin32Fx4 = 82376,
    Iop_Sqrt32Fx4 = 82377,
    Iop_RSqrt32Fx4 = 82378,
    Iop_Neg32Fx4 = 82379,
    Iop_Recip32Fx4 = 82380,
    Iop_Recps32Fx4 = 82381,
    Iop_Rsqrte32Fx4 = 82382,
    Iop_Rsqrts32Fx4 = 82383,
    Iop_I32UtoFx4 = 82384,
    Iop_I32StoFx4 = 82385,
    Iop_FtoI32Ux4_RZ = 82386,
    Iop_FtoI32Sx4_RZ = 82387,
    Iop_QFtoI32Ux4_RZ = 82388,
    Iop_QFtoI32Sx4_RZ = 82389,
    Iop_RoundF32x4_RM = 82390,
    Iop_RoundF32x4_RP = 82391,
    Iop_RoundF32x4_RN = 82392,
    Iop_RoundF32x4_RZ = 82393,
    Iop_F32ToFixed32Ux4_RZ = 82394,
    Iop_F32ToFixed32Sx4_RZ = 82395,
    Iop_Fixed32UToF32x4_RN = 82396,
    Iop_Fixed32SToF32x4_RN = 82397,
    Iop_F32toF16x4 = 82398,
    Iop_F16toF32x4 = 82399,
    Iop_Add32F0x4 = 82400,
    Iop_Sub32F0x4 = 82401,
    Iop_Mul32F0x4 = 82402,
    Iop_Div32F0x4 = 82403,
    Iop_Max32F0x4 = 82404,
    Iop_Min32F0x4 = 82405,
    Iop_CmpEQ32F0x4 = 82406,
    Iop_CmpLT32F0x4 = 82407,
    Iop_CmpLE32F0x4 = 82408,
    Iop_CmpUN32F0x4 = 82409,
    Iop_Recip32F0x4 = 82410,
    Iop_Sqrt32F0x4 = 82411,
    Iop_RSqrt32F0x4 = 82412,
    Iop_Add64Fx2 = 82413,
    Iop_Sub64Fx2 = 82414,
    Iop_Mul64Fx2 = 82415,
    Iop_Div64Fx2 = 82416,
    Iop_Max64Fx2 = 82417,
    Iop_Min64Fx2 = 82418,
    Iop_CmpEQ64Fx2 = 82419,
    Iop_CmpLT64Fx2 = 82420,
    Iop_CmpLE64Fx2 = 82421,
    Iop_CmpUN64Fx2 = 82422,
    Iop_Recip64Fx2 = 82423,
    Iop_Sqrt64Fx2 = 82424,
    Iop_RSqrt64Fx2 = 82425,
    Iop_Add64F0x2 = 82426,
    Iop_Sub64F0x2 = 82427,
    Iop_Mul64F0x2 = 82428,
    Iop_Div64F0x2 = 82429,
    Iop_Max64F0x2 = 82430,
    Iop_Min64F0x2 = 82431,
    Iop_CmpEQ64F0x2 = 82432,
    Iop_CmpLT64F0x2 = 82433,
    Iop_CmpLE64F0x2 = 82434,
    Iop_CmpUN64F0x2 = 82435,
    Iop_Recip64F0x2 = 82436,
    Iop_Sqrt64F0x2 = 82437,
    Iop_RSqrt64F0x2 = 82438,
    Iop_V128to64 = 82439,
    Iop_V128HIto64 = 82440,
    Iop_64HLtoV128 = 82441,
    Iop_64UtoV128 = 82442,
    Iop_SetV128lo64 = 82443,
    Iop_32UtoV128 = 82444,
    Iop_V128to32 = 82445,
    Iop_SetV128lo32 = 82446,
    Iop_NotV128 = 82447,
    Iop_AndV128 = 82448,
    Iop_OrV128 = 82449,
    Iop_XorV128 = 82450,
    Iop_ShlV128 = 82451,
    Iop_ShrV128 = 82452,
    Iop_CmpNEZ8x16 = 82453,
    Iop_CmpNEZ16x8 = 82454,
    Iop_CmpNEZ32x4 = 82455,
    Iop_CmpNEZ64x2 = 82456,
    Iop_Add8x16 = 82457,
    Iop_Add16x8 = 82458,
    Iop_Add32x4 = 82459,
    Iop_Add64x2 = 82460,
    Iop_QAdd8Ux16 = 82461,
    Iop_QAdd16Ux8 = 82462,
    Iop_QAdd32Ux4 = 82463,
    Iop_QAdd64Ux2 = 82464,
    Iop_QAdd8Sx16 = 82465,
    Iop_QAdd16Sx8 = 82466,
    Iop_QAdd32Sx4 = 82467,
    Iop_QAdd64Sx2 = 82468,
    Iop_Sub8x16 = 82469,
    Iop_Sub16x8 = 82470,
    Iop_Sub32x4 = 82471,
    Iop_Sub64x2 = 82472,
    Iop_QSub8Ux16 = 82473,
    Iop_QSub16Ux8 = 82474,
    Iop_QSub32Ux4 = 82475,
    Iop_QSub64Ux2 = 82476,
    Iop_QSub8Sx16 = 82477,
    Iop_QSub16Sx8 = 82478,
    Iop_QSub32Sx4 = 82479,
    Iop_QSub64Sx2 = 82480,
    Iop_Mul8x16 = 82481,
    Iop_Mul16x8 = 82482,
    Iop_Mul32x4 = 82483,
    Iop_MulHi16Ux8 = 82484,
    Iop_MulHi32Ux4 = 82485,
    Iop_MulHi16Sx8 = 82486,
    Iop_MulHi32Sx4 = 82487,
    Iop_MullEven8Ux16 = 82488,
    Iop_MullEven16Ux8 = 82489,
    Iop_MullEven8Sx16 = 82490,
    Iop_MullEven16Sx8 = 82491,
    Iop_Mull8Ux8 = 82492,
    Iop_Mull8Sx8 = 82493,
    Iop_Mull16Ux4 = 82494,
    Iop_Mull16Sx4 = 82495,
    Iop_Mull32Ux2 = 82496,
    Iop_Mull32Sx2 = 82497,
    Iop_QDMulHi16Sx8 = 82498,
    Iop_QDMulHi32Sx4 = 82499,
    Iop_QRDMulHi16Sx8 = 82500,
    Iop_QRDMulHi32Sx4 = 82501,
    Iop_QDMulLong16Sx4 = 82502,
    Iop_QDMulLong32Sx2 = 82503,
    Iop_PolynomialMul8x16 = 82504,
    Iop_PolynomialMull8x8 = 82505,
    Iop_PwAdd8x16 = 82506,
    Iop_PwAdd16x8 = 82507,
    Iop_PwAdd32x4 = 82508,
    Iop_PwAdd32Fx2 = 82509,
    Iop_PwAddL8Ux16 = 82510,
    Iop_PwAddL16Ux8 = 82511,
    Iop_PwAddL32Ux4 = 82512,
    Iop_PwAddL8Sx16 = 82513,
    Iop_PwAddL16Sx8 = 82514,
    Iop_PwAddL32Sx4 = 82515,
    Iop_Abs8x16 = 82516,
    Iop_Abs16x8 = 82517,
    Iop_Abs32x4 = 82518,
    Iop_Avg8Ux16 = 82519,
    Iop_Avg16Ux8 = 82520,
    Iop_Avg32Ux4 = 82521,
    Iop_Avg8Sx16 = 82522,
    Iop_Avg16Sx8 = 82523,
    Iop_Avg32Sx4 = 82524,
    Iop_Max8Sx16 = 82525,
    Iop_Max16Sx8 = 82526,
    Iop_Max32Sx4 = 82527,
    Iop_Max8Ux16 = 82528,
    Iop_Max16Ux8 = 82529,
    Iop_Max32Ux4 = 82530,
    Iop_Min8Sx16 = 82531,
    Iop_Min16Sx8 = 82532,
    Iop_Min32Sx4 = 82533,
    Iop_Min8Ux16 = 82534,
    Iop_Min16Ux8 = 82535,
    Iop_Min32Ux4 = 82536,
    Iop_CmpEQ8x16 = 82537,
    Iop_CmpEQ16x8 = 82538,
    Iop_CmpEQ32x4 = 82539,
    Iop_CmpGT8Sx16 = 82540,
    Iop_CmpGT16Sx8 = 82541,
    Iop_CmpGT32Sx4 = 82542,
    Iop_CmpGT64Sx2 = 82543,
    Iop_CmpGT8Ux16 = 82544,
    Iop_CmpGT16Ux8 = 82545,
    Iop_CmpGT32Ux4 = 82546,
    Iop_Cnt8x16 = 82547,
    Iop_Clz8Sx16 = 82548,
    Iop_Clz16Sx8 = 82549,
    Iop_Clz32Sx4 = 82550,
    Iop_Cls8Sx16 = 82551,
    Iop_Cls16Sx8 = 82552,
    Iop_Cls32Sx4 = 82553,
    Iop_ShlN8x16 = 82554,
    Iop_ShlN16x8 = 82555,
    Iop_ShlN32x4 = 82556,
    Iop_ShlN64x2 = 82557,
    Iop_ShrN8x16 = 82558,
    Iop_ShrN16x8 = 82559,
    Iop_ShrN32x4 = 82560,
    Iop_ShrN64x2 = 82561,
    Iop_SarN8x16 = 82562,
    Iop_SarN16x8 = 82563,
    Iop_SarN32x4 = 82564,
    Iop_SarN64x2 = 82565,
    Iop_Shl8x16 = 82566,
    Iop_Shl16x8 = 82567,
    Iop_Shl32x4 = 82568,
    Iop_Shl64x2 = 82569,
    Iop_Shr8x16 = 82570,
    Iop_Shr16x8 = 82571,
    Iop_Shr32x4 = 82572,
    Iop_Shr64x2 = 82573,
    Iop_Sar8x16 = 82574,
    Iop_Sar16x8 = 82575,
    Iop_Sar32x4 = 82576,
    Iop_Sar64x2 = 82577,
    Iop_Sal8x16 = 82578,
    Iop_Sal16x8 = 82579,
    Iop_Sal32x4 = 82580,
    Iop_Sal64x2 = 82581,
    Iop_Rol8x16 = 82582,
    Iop_Rol16x8 = 82583,
    Iop_Rol32x4 = 82584,
    Iop_QShl8x16 = 82585,
    Iop_QShl16x8 = 82586,
    Iop_QShl32x4 = 82587,
    Iop_QShl64x2 = 82588,
    Iop_QSal8x16 = 82589,
    Iop_QSal16x8 = 82590,
    Iop_QSal32x4 = 82591,
    Iop_QSal64x2 = 82592,
    Iop_QShlN8Sx16 = 82593,
    Iop_QShlN16Sx8 = 82594,
    Iop_QShlN32Sx4 = 82595,
    Iop_QShlN64Sx2 = 82596,
    Iop_QShlN8x16 = 82597,
    Iop_QShlN16x8 = 82598,
    Iop_QShlN32x4 = 82599,
    Iop_QShlN64x2 = 82600,
    Iop_QSalN8x16 = 82601,
    Iop_QSalN16x8 = 82602,
    Iop_QSalN32x4 = 82603,
    Iop_QSalN64x2 = 82604,
    Iop_QNarrowBin16Sto8Ux16 = 82605,
    Iop_QNarrowBin32Sto16Ux8 = 82606,
    Iop_QNarrowBin16Sto8Sx16 = 82607,
    Iop_QNarrowBin32Sto16Sx8 = 82608,
    Iop_QNarrowBin16Uto8Ux16 = 82609,
    Iop_QNarrowBin32Uto16Ux8 = 82610,
    Iop_NarrowBin16to8x16 = 82611,
    Iop_NarrowBin32to16x8 = 82612,
    Iop_NarrowUn16to8x8 = 82613,
    Iop_NarrowUn32to16x4 = 82614,
    Iop_NarrowUn64to32x2 = 82615,
    Iop_QNarrowUn16Sto8Sx8 = 82616,
    Iop_QNarrowUn32Sto16Sx4 = 82617,
    Iop_QNarrowUn64Sto32Sx2 = 82618,
    Iop_QNarrowUn16Sto8Ux8 = 82619,
    Iop_QNarrowUn32Sto16Ux4 = 82620,
    Iop_QNarrowUn64Sto32Ux2 = 82621,
    Iop_QNarrowUn16Uto8Ux8 = 82622,
    Iop_QNarrowUn32Uto16Ux4 = 82623,
    Iop_QNarrowUn64Uto32Ux2 = 82624,
    Iop_Widen8Uto16x8 = 82625,
    Iop_Widen16Uto32x4 = 82626,
    Iop_Widen32Uto64x2 = 82627,
    Iop_Widen8Sto16x8 = 82628,
    Iop_Widen16Sto32x4 = 82629,
    Iop_Widen32Sto64x2 = 82630,
    Iop_InterleaveHI8x16 = 82631,
    Iop_InterleaveHI16x8 = 82632,
    Iop_InterleaveHI32x4 = 82633,
    Iop_InterleaveHI64x2 = 82634,
    Iop_InterleaveLO8x16 = 82635,
    Iop_InterleaveLO16x8 = 82636,
    Iop_InterleaveLO32x4 = 82637,
    Iop_InterleaveLO64x2 = 82638,
    Iop_InterleaveOddLanes8x16 = 82639,
    Iop_InterleaveEvenLanes8x16 = 82640,
    Iop_InterleaveOddLanes16x8 = 82641,
    Iop_InterleaveEvenLanes16x8 = 82642,
    Iop_InterleaveOddLanes32x4 = 82643,
    Iop_InterleaveEvenLanes32x4 = 82644,
    Iop_CatOddLanes8x16 = 82645,
    Iop_CatOddLanes16x8 = 82646,
    Iop_CatOddLanes32x4 = 82647,
    Iop_CatEvenLanes8x16 = 82648,
    Iop_CatEvenLanes16x8 = 82649,
    Iop_CatEvenLanes32x4 = 82650,
    Iop_GetElem8x16 = 82651,
    Iop_GetElem16x8 = 82652,
    Iop_GetElem32x4 = 82653,
    Iop_GetElem64x2 = 82654,
    Iop_Dup8x16 = 82655,
    Iop_Dup16x8 = 82656,
    Iop_Dup32x4 = 82657,
    Iop_ExtractV128 = 82658,
    Iop_Reverse16_8x16 = 82659,
    Iop_Reverse32_8x16 = 82660,
    Iop_Reverse32_16x8 = 82661,
    Iop_Reverse64_8x16 = 82662,
    Iop_Reverse64_16x8 = 82663,
    Iop_Reverse64_32x4 = 82664,
    Iop_Perm8x16 = 82665,
    Iop_Recip32x4 = 82666,
    Iop_Rsqrte32x4 = 82667
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
    Imbe_Fence = 98304
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
struct __anonstruct_alwaysDefd_54 {
   Int offset ;
   Int size ;
};
struct __anonstruct_VexGuestLayout_53 {
   Int total_sizeB ;
   Int offset_SP ;
   Int sizeof_SP ;
   Int offset_FP ;
   Int sizeof_FP ;
   Int offset_IP ;
   Int sizeof_IP ;
   Int n_alwaysDefd ;
   struct __anonstruct_alwaysDefd_54 alwaysDefd[24] ;
};
typedef struct __anonstruct_VexGuestLayout_53 VexGuestLayout;
enum __anonenum_status_56 {
    VexTransOK = 0,
    VexTransAccessFail = 1,
    VexTransOutputFull = 2
} ;
struct __anonstruct_VexTranslateResult_55 {
   enum __anonenum_status_56 status ;
   UInt n_sc_extents ;
};
typedef struct __anonstruct_VexTranslateResult_55 VexTranslateResult;
struct __anonstruct_VexGuestExtents_57 {
   Addr64 base[3] ;
   UShort len[3] ;
   UShort n_used ;
};
typedef struct __anonstruct_VexGuestExtents_57 VexGuestExtents;
struct __anonstruct_VexTranslateArgs_58 {
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
typedef struct __anonstruct_VexTranslateArgs_58 VexTranslateArgs;
enum __anonenum_VexEmWarn_59 {
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
typedef enum __anonenum_VexEmWarn_59 VexEmWarn;
struct __anonstruct_VexGuestX86State_60 {
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
typedef struct __anonstruct_VexGuestX86State_60 VexGuestX86State;
struct __anonstruct_Bits_63 {
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
struct __anonstruct_Words_64 {
   UInt word1 ;
   UInt word2 ;
};
union __anonunion_LdtEnt_62 {
   struct __anonstruct_Bits_63 Bits ;
   struct __anonstruct_Words_64 Words ;
};
struct __anonstruct_VexGuestX86SegDescr_61 {
   union __anonunion_LdtEnt_62 LdtEnt ;
};
typedef struct __anonstruct_VexGuestX86SegDescr_61 VexGuestX86SegDescr;
struct __anonstruct_X86_67 {
   UInt r_ebp ;
};
struct __anonstruct_AMD64_68 {
   ULong r_rbp ;
};
struct __anonstruct_PPC32_69 {
   UInt r_lr ;
};
struct __anonstruct_PPC64_70 {
   ULong r_lr ;
};
struct __anonstruct_ARM_71 {
   UInt r14 ;
   UInt r12 ;
   UInt r11 ;
   UInt r7 ;
};
struct __anonstruct_S390X_72 {
   ULong r_fp ;
   ULong r_lr ;
};
union __anonunion_misc_66 {
   struct __anonstruct_X86_67 X86 ;
   struct __anonstruct_AMD64_68 AMD64 ;
   struct __anonstruct_PPC32_69 PPC32 ;
   struct __anonstruct_PPC64_70 PPC64 ;
   struct __anonstruct_ARM_71 ARM ;
   struct __anonstruct_S390X_72 S390X ;
};
struct __anonstruct_UnwindStartRegs_65 {
   ULong r_pc ;
   ULong r_sp ;
   union __anonunion_misc_66 misc ;
};
typedef struct __anonstruct_UnwindStartRegs_65 UnwindStartRegs;
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
struct __anonstruct___vki_kernel_fsid_t_73 {
   int val[2] ;
};
typedef struct __anonstruct___vki_kernel_fsid_t_73 __vki_kernel_fsid_t;
struct __anonstruct___vki_kernel_fd_set_74 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___vki_kernel_fd_set_74 __vki_kernel_fd_set;
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
struct __anonstruct_vki_sigset_t_75 {
   unsigned long sig[2] ;
};
typedef struct __anonstruct_vki_sigset_t_75 vki_sigset_t;
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
struct __anonstruct__kill_77 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
};
struct __anonstruct__timer_78 {
   vki_timer_t _tid ;
   int _overrun ;
   char _pad[sizeof(vki_uid_t ) - sizeof(int )] ;
   vki_sigval_t _sigval ;
   int _sys_private ;
};
struct __anonstruct__rt_79 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
   vki_sigval_t _sigval ;
};
struct __anonstruct__sigchld_80 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
   int _status ;
   vki_clock_t _utime ;
   vki_clock_t _stime ;
};
struct __anonstruct__sigfault_81 {
   void *_addr ;
};
struct __anonstruct__sigpoll_82 {
   long _band ;
   int _fd ;
};
union __anonunion__sifields_76 {
   int _pad[(128U - 3U * sizeof(int )) / sizeof(int )] ;
   struct __anonstruct__kill_77 _kill ;
   struct __anonstruct__timer_78 _timer ;
   struct __anonstruct__rt_79 _rt ;
   struct __anonstruct__sigchld_80 _sigchld ;
   struct __anonstruct__sigfault_81 _sigfault ;
   struct __anonstruct__sigpoll_82 _sigpoll ;
};
struct vki_siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_76 _sifields ;
};
typedef struct vki_siginfo vki_siginfo_t;
struct __anonstruct__sigev_thread_84 {
   void (*_function)(vki_sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_83 {
   int _pad[(64U - (sizeof(int ) * 2U + sizeof(vki_sigval_t ))) / sizeof(int )] ;
   int _tid ;
   struct __anonstruct__sigev_thread_84 _sigev_thread ;
};
struct vki_sigevent {
   vki_sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_83 _sigev_un ;
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
union __anonunion_vki_in6_u_85 {
   __vki_u8 u6_addr8[16] ;
   __vki_u16 u6_addr16[8] ;
   __vki_u32 u6_addr32[4] ;
};
struct vki_in6_addr {
   union __anonunion_vki_in6_u_85 vki_in6_u ;
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
union __anonunion_ifs_ifsu_86 {
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
   union __anonunion_ifs_ifsu_86 ifs_ifsu ;
};
union __anonunion_ifr_ifrn_87 {
   char ifrn_name[16] ;
};
union __anonunion_ifr_ifru_88 {
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
   union __anonunion_ifr_ifrn_87 ifr_ifrn ;
   union __anonunion_ifr_ifru_88 ifr_ifru ;
};
union __anonunion_ifc_ifcu_89 {
   char *ifcu_buf ;
   struct vki_ifreq *ifcu_req ;
};
struct vki_ifconf {
   int ifc_len ;
   union __anonunion_ifc_ifcu_89 ifc_ifcu ;
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
enum __anonenum_90 {
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
struct __anonstruct_vki_isdn_net_ioctl_phone_91 {
   char name[10] ;
   char phone[32] ;
   int outgoing ;
};
typedef struct __anonstruct_vki_isdn_net_ioctl_phone_91 vki_isdn_net_ioctl_phone;
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
struct __anonstruct_93 {
   int  : 0 ;
};
struct __anonstruct_94 {
   int  : 0 ;
};
enum __anonenum_92 {
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
enum __anonenum_95 {
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
union __anonunion_ifr_ifrn_96 {
   char ifrn_name[16] ;
};
struct vki_iwreq {
   union __anonunion_ifr_ifrn_96 ifr_ifrn ;
   union vki_iwreq_data u ;
};
union __anonunion____missing_field_name_97 {
   __vki_u64 sample_period ;
   __vki_u64 sample_freq ;
};
union __anonunion____missing_field_name_98 {
   __vki_u32 wakeup_events ;
   __vki_u32 wakeup_watermark ;
};
union __anonunion____missing_field_name_99 {
   __vki_u64 bp_addr ;
   __vki_u64 config1 ;
};
union __anonunion____missing_field_name_100 {
   __vki_u64 bp_len ;
   __vki_u64 config2 ;
};
struct vki_perf_event_attr {
   __vki_u32 type ;
   __vki_u32 size ;
   __vki_u64 config ;
   union __anonunion____missing_field_name_97 __annonCompField1 ;
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
   union __anonunion____missing_field_name_98 __annonCompField2 ;
   __vki_u32 bp_type ;
   union __anonunion____missing_field_name_99 __annonCompField3 ;
   union __anonunion____missing_field_name_100 __annonCompField4 ;
};
struct vki_getcpu_cache {
   unsigned long blob[128U / sizeof(long )] ;
};
typedef int __jmp_buf[6];
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_101 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_101 __sigset_t;
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
enum __anonenum_VgSchedReturnCode_102 {
    VgSrc_None = 0,
    VgSrc_ExitThread = 1,
    VgSrc_ExitProcess = 2,
    VgSrc_FatalSig = 3
} ;
typedef enum __anonenum_VgSchedReturnCode_102 VgSchedReturnCode;
typedef VexGuestX86State VexGuestArchState;
struct SyscallStatus;
struct SyscallStatus;
struct SyscallArgs;
struct SyscallArgs;
struct __anonstruct_ThreadArchState_103 {
   VexGuestArchState vex  __attribute__((__aligned__(16))) ;
   VexGuestArchState vex_shadow1  __attribute__((__aligned__(16))) ;
   VexGuestArchState vex_shadow2  __attribute__((__aligned__(16))) ;
   UChar vex_spill[4096]  __attribute__((__aligned__(16))) ;
};
typedef struct __anonstruct_ThreadArchState_103 ThreadArchState;
struct __anonstruct_ThreadOSstate_104 {
   Int lwpid ;
   Int threadgroup ;
   ThreadId parent ;
   Addr valgrind_stack_base ;
   Addr valgrind_stack_init_SP ;
   Word exitcode ;
   Int fatalsig ;
};
typedef struct __anonstruct_ThreadOSstate_104 ThreadOSstate;
struct SigQueue;
struct __anonstruct_ThreadState_105 {
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
   Bool sched_jmpbuf_valid ;
   jmp_buf sched_jmpbuf ;
};
typedef struct __anonstruct_ThreadState_105 ThreadState;
struct _XArray;
typedef struct _XArray XArray;
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
struct __anonstruct_AixCodeSegChange_111 {
   Addr code_start ;
   Word code_len ;
   Addr data_start ;
   Word data_len ;
   UChar *file_name ;
   UChar *mem_name ;
   Bool is_mainexe ;
   Bool acquire ;
};
typedef struct __anonstruct_AixCodeSegChange_111 AixCodeSegChange;
struct __anonstruct_VgStack_112 {
   HChar bytes[1064960] ;
};
typedef struct __anonstruct_VgStack_112 VgStack;
struct _ExeContext;
typedef struct _ExeContext ExeContext;
enum __anonenum_VgRes_113 {
    Vg_LowRes = 0,
    Vg_MedRes = 1,
    Vg_HighRes = 2
} ;
typedef enum __anonenum_VgRes_113 VgRes;
typedef Int ErrorKind;
struct _Error;
typedef struct _Error Error;
typedef Int SuppKind;
struct _Supp;
typedef struct _Supp Supp;
enum __anonenum_CoreErrorKind_114 {
    ThreadErr = -1
} ;
typedef enum __anonenum_CoreErrorKind_114 CoreErrorKind;
enum __anonenum_PointKind_115 {
    software_breakpoint = 0,
    hardware_breakpoint = 1,
    write_watchpoint = 2,
    read_watchpoint = 3,
    access_watchpoint = 4
} ;
typedef enum __anonenum_PointKind_115 PointKind;
enum __anonenum_kwd_report_error_116 {
    kwd_report_none = 0,
    kwd_report_all = 1,
    kwd_report_duplicated_matches = 2
} ;
typedef enum __anonenum_kwd_report_error_116 kwd_report_error;
enum __anonenum_FinishReason_117 {
    orderly_finish = 0,
    reset_after_error = 1,
    reset_after_fork = 2
} ;
typedef enum __anonenum_FinishReason_117 FinishReason;
struct __anonstruct_VgdbShared32_118 {
   int vgdb_pid ;
   int volatile   written_by_vgdb ;
   int volatile   seen_by_valgrind ;
   Addr32 invoke_gdbserver ;
   Addr32 threads ;
   int sizeof_ThreadState ;
   int offset_status ;
   int offset_lwpid ;
};
typedef struct __anonstruct_VgdbShared32_118 VgdbShared32;
struct __anonstruct_VgdbShared64_119 {
   int vgdb_pid ;
   int volatile   written_by_vgdb ;
   int volatile   seen_by_valgrind ;
   Addr64 invoke_gdbserver ;
   Addr64 threads ;
   int sizeof_ThreadState ;
   int offset_status ;
   int offset_lwpid ;
};
typedef struct __anonstruct_VgdbShared64_119 VgdbShared64;
typedef VgdbShared32 VgdbShared;
struct _IICreateImageInfo;
typedef struct _IICreateImageInfo IICreateImageInfo;
struct _IIFinaliseImageInfo;
typedef struct _IIFinaliseImageInfo IIFinaliseImageInfo;
struct _IICreateImageInfo {
   HChar *toolname ;
   Addr sp_at_startup ;
   Addr clstack_top ;
   HChar **argv ;
   HChar **envp ;
};
struct _IIFinaliseImageInfo {
   SizeT clstack_max_size ;
   Addr initial_client_SP ;
   Addr initial_client_IP ;
   Addr initial_client_TOC ;
   UInt *client_auxv ;
};
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
enum __anonenum_VgMsgKind_120 {
    Vg_FailMsg = 0,
    Vg_UserMsg = 1,
    Vg_DebugMsg = 2,
    Vg_ClientMsg = 3
} ;
typedef enum __anonenum_VgMsgKind_120 VgMsgKind;
struct __anonstruct_OutputSink_121 {
   Int fd ;
   Bool is_socket ;
};
typedef struct __anonstruct_OutputSink_121 OutputSink;
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
enum __anonenum_VgVgdb_122 {
    Vg_VgdbNo = 0,
    Vg_VgdbYes = 1,
    Vg_VgdbFull = 2
} ;
typedef enum __anonenum_VgVgdb_122 VgVgdb;
enum __anonenum_VgSmc_123 {
    Vg_SmcNone = 0,
    Vg_SmcStack = 1,
    Vg_SmcAll = 2,
    Vg_SmcAllNonFile = 3
} ;
typedef enum __anonenum_VgSmc_123 VgSmc;
enum __anonenum_Vg_FnNameKind_124 {
    Vg_FnNameNormal = 0,
    Vg_FnNameMain = 1,
    Vg_FnNameBelowMain = 2
} ;
typedef enum __anonenum_Vg_FnNameKind_124 Vg_FnNameKind;
struct __anonstruct_StackBlock_125 {
   PtrdiffT base ;
   SizeT szB ;
   Bool spRel ;
   Bool isVec ;
   HChar name[16] ;
};
typedef struct __anonstruct_StackBlock_125 StackBlock;
struct __anonstruct_GlobalBlock_126 {
   Addr addr ;
   SizeT szB ;
   Bool isVec ;
   HChar name[16] ;
   HChar soname[16] ;
};
typedef struct __anonstruct_GlobalBlock_126 GlobalBlock;
struct _DebugInfo;
typedef struct _DebugInfo DebugInfo;
enum __anonenum_VgSectKind_127 {
    Vg_SectUnknown = 0,
    Vg_SectText = 1,
    Vg_SectData = 2,
    Vg_SectBSS = 3,
    Vg_SectGOT = 4,
    Vg_SectPLT = 5,
    Vg_SectGOTPLT = 6,
    Vg_SectOPD = 7
} ;
typedef enum __anonenum_VgSectKind_127 VgSectKind;
struct __anonstruct_D3UnwindRegs_128 {
   Addr xip ;
   Addr xsp ;
   Addr xbp ;
};
typedef struct __anonstruct_D3UnwindRegs_128 D3UnwindRegs;
struct __anonstruct_VgCallbackClosure_129 {
   Addr64 nraddr ;
   Addr64 readdr ;
   ThreadId tid ;
};
typedef struct __anonstruct_VgCallbackClosure_129 VgCallbackClosure;
enum __anonenum_CorePart_130 {
    Vg_CoreStartup = 1,
    Vg_CoreSignal = 2,
    Vg_CoreSysCall = 3,
    Vg_CoreSysCallArgInMem = 4,
    Vg_CoreTranslate = 5,
    Vg_CoreClientReq = 6
} ;
typedef enum __anonenum_CorePart_130 CorePart;
struct __anonstruct_VgDetails_131 {
   Char *name ;
   Char *version ;
   Char *description ;
   Char *copyright_author ;
   Char *bug_reports_to ;
   UInt avg_translation_sizeB ;
};
typedef struct __anonstruct_VgDetails_131 VgDetails;
struct __anonstruct_VgNeeds_132 {
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
typedef struct __anonstruct_VgNeeds_132 VgNeeds;
struct __anonstruct_VgToolInterface_133 {
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
typedef struct __anonstruct_VgToolInterface_133 VgToolInterface;
struct __anonstruct_FastCacheEntry_134 {
   Addr guest ;
   Addr host ;
};
typedef struct __anonstruct_FastCacheEntry_134 FastCacheEntry;
struct _BBProfEntry {
   Addr64 addr ;
   ULong score ;
};
typedef struct _BBProfEntry BBProfEntry;
enum __anonenum_log_to_135 {
    VgLogTo_Fd = 0,
    VgLogTo_File = 1,
    VgLogTo_Socket = 2
} ;
struct __anonstruct_Addr_n_ULong_136 {
   Addr a ;
   ULong ull ;
};
typedef struct __anonstruct_Addr_n_ULong_136 Addr_n_ULong;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef int intptr_t;
typedef unsigned int uintptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef uint16_t Elf32_Half;
typedef uint16_t Elf64_Half;
typedef uint32_t Elf32_Word;
typedef int32_t Elf32_Sword;
typedef uint32_t Elf64_Word;
typedef int32_t Elf64_Sword;
typedef uint64_t Elf32_Xword;
typedef int64_t Elf32_Sxword;
typedef uint64_t Elf64_Xword;
typedef int64_t Elf64_Sxword;
typedef uint32_t Elf32_Addr;
typedef uint64_t Elf64_Addr;
typedef uint32_t Elf32_Off;
typedef uint64_t Elf64_Off;
typedef uint16_t Elf32_Section;
typedef uint16_t Elf64_Section;
typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;
struct __anonstruct_Elf32_Ehdr_137 {
   unsigned char e_ident[16] ;
   Elf32_Half e_type ;
   Elf32_Half e_machine ;
   Elf32_Word e_version ;
   Elf32_Addr e_entry ;
   Elf32_Off e_phoff ;
   Elf32_Off e_shoff ;
   Elf32_Word e_flags ;
   Elf32_Half e_ehsize ;
   Elf32_Half e_phentsize ;
   Elf32_Half e_phnum ;
   Elf32_Half e_shentsize ;
   Elf32_Half e_shnum ;
   Elf32_Half e_shstrndx ;
};
typedef struct __anonstruct_Elf32_Ehdr_137 Elf32_Ehdr;
struct __anonstruct_Elf64_Ehdr_138 {
   unsigned char e_ident[16] ;
   Elf64_Half e_type ;
   Elf64_Half e_machine ;
   Elf64_Word e_version ;
   Elf64_Addr e_entry ;
   Elf64_Off e_phoff ;
   Elf64_Off e_shoff ;
   Elf64_Word e_flags ;
   Elf64_Half e_ehsize ;
   Elf64_Half e_phentsize ;
   Elf64_Half e_phnum ;
   Elf64_Half e_shentsize ;
   Elf64_Half e_shnum ;
   Elf64_Half e_shstrndx ;
};
typedef struct __anonstruct_Elf64_Ehdr_138 Elf64_Ehdr;
struct __anonstruct_Elf32_Shdr_139 {
   Elf32_Word sh_name ;
   Elf32_Word sh_type ;
   Elf32_Word sh_flags ;
   Elf32_Addr sh_addr ;
   Elf32_Off sh_offset ;
   Elf32_Word sh_size ;
   Elf32_Word sh_link ;
   Elf32_Word sh_info ;
   Elf32_Word sh_addralign ;
   Elf32_Word sh_entsize ;
};
typedef struct __anonstruct_Elf32_Shdr_139 Elf32_Shdr;
struct __anonstruct_Elf64_Shdr_140 {
   Elf64_Word sh_name ;
   Elf64_Word sh_type ;
   Elf64_Xword sh_flags ;
   Elf64_Addr sh_addr ;
   Elf64_Off sh_offset ;
   Elf64_Xword sh_size ;
   Elf64_Word sh_link ;
   Elf64_Word sh_info ;
   Elf64_Xword sh_addralign ;
   Elf64_Xword sh_entsize ;
};
typedef struct __anonstruct_Elf64_Shdr_140 Elf64_Shdr;
struct __anonstruct_Elf32_Sym_141 {
   Elf32_Word st_name ;
   Elf32_Addr st_value ;
   Elf32_Word st_size ;
   unsigned char st_info ;
   unsigned char st_other ;
   Elf32_Section st_shndx ;
};
typedef struct __anonstruct_Elf32_Sym_141 Elf32_Sym;
struct __anonstruct_Elf64_Sym_142 {
   Elf64_Word st_name ;
   unsigned char st_info ;
   unsigned char st_other ;
   Elf64_Section st_shndx ;
   Elf64_Addr st_value ;
   Elf64_Xword st_size ;
};
typedef struct __anonstruct_Elf64_Sym_142 Elf64_Sym;
struct __anonstruct_Elf32_Syminfo_143 {
   Elf32_Half si_boundto ;
   Elf32_Half si_flags ;
};
typedef struct __anonstruct_Elf32_Syminfo_143 Elf32_Syminfo;
struct __anonstruct_Elf64_Syminfo_144 {
   Elf64_Half si_boundto ;
   Elf64_Half si_flags ;
};
typedef struct __anonstruct_Elf64_Syminfo_144 Elf64_Syminfo;
struct __anonstruct_Elf32_Rel_145 {
   Elf32_Addr r_offset ;
   Elf32_Word r_info ;
};
typedef struct __anonstruct_Elf32_Rel_145 Elf32_Rel;
struct __anonstruct_Elf64_Rel_146 {
   Elf64_Addr r_offset ;
   Elf64_Xword r_info ;
};
typedef struct __anonstruct_Elf64_Rel_146 Elf64_Rel;
struct __anonstruct_Elf32_Rela_147 {
   Elf32_Addr r_offset ;
   Elf32_Word r_info ;
   Elf32_Sword r_addend ;
};
typedef struct __anonstruct_Elf32_Rela_147 Elf32_Rela;
struct __anonstruct_Elf64_Rela_148 {
   Elf64_Addr r_offset ;
   Elf64_Xword r_info ;
   Elf64_Sxword r_addend ;
};
typedef struct __anonstruct_Elf64_Rela_148 Elf64_Rela;
struct __anonstruct_Elf32_Phdr_149 {
   Elf32_Word p_type ;
   Elf32_Off p_offset ;
   Elf32_Addr p_vaddr ;
   Elf32_Addr p_paddr ;
   Elf32_Word p_filesz ;
   Elf32_Word p_memsz ;
   Elf32_Word p_flags ;
   Elf32_Word p_align ;
};
typedef struct __anonstruct_Elf32_Phdr_149 Elf32_Phdr;
struct __anonstruct_Elf64_Phdr_150 {
   Elf64_Word p_type ;
   Elf64_Word p_flags ;
   Elf64_Off p_offset ;
   Elf64_Addr p_vaddr ;
   Elf64_Addr p_paddr ;
   Elf64_Xword p_filesz ;
   Elf64_Xword p_memsz ;
   Elf64_Xword p_align ;
};
typedef struct __anonstruct_Elf64_Phdr_150 Elf64_Phdr;
union __anonunion_d_un_152 {
   Elf32_Word d_val ;
   Elf32_Addr d_ptr ;
};
struct __anonstruct_Elf32_Dyn_151 {
   Elf32_Sword d_tag ;
   union __anonunion_d_un_152 d_un ;
};
typedef struct __anonstruct_Elf32_Dyn_151 Elf32_Dyn;
union __anonunion_d_un_154 {
   Elf64_Xword d_val ;
   Elf64_Addr d_ptr ;
};
struct __anonstruct_Elf64_Dyn_153 {
   Elf64_Sxword d_tag ;
   union __anonunion_d_un_154 d_un ;
};
typedef struct __anonstruct_Elf64_Dyn_153 Elf64_Dyn;
struct __anonstruct_Elf32_Verdef_155 {
   Elf32_Half vd_version ;
   Elf32_Half vd_flags ;
   Elf32_Half vd_ndx ;
   Elf32_Half vd_cnt ;
   Elf32_Word vd_hash ;
   Elf32_Word vd_aux ;
   Elf32_Word vd_next ;
};
typedef struct __anonstruct_Elf32_Verdef_155 Elf32_Verdef;
struct __anonstruct_Elf64_Verdef_156 {
   Elf64_Half vd_version ;
   Elf64_Half vd_flags ;
   Elf64_Half vd_ndx ;
   Elf64_Half vd_cnt ;
   Elf64_Word vd_hash ;
   Elf64_Word vd_aux ;
   Elf64_Word vd_next ;
};
typedef struct __anonstruct_Elf64_Verdef_156 Elf64_Verdef;
struct __anonstruct_Elf32_Verdaux_157 {
   Elf32_Word vda_name ;
   Elf32_Word vda_next ;
};
typedef struct __anonstruct_Elf32_Verdaux_157 Elf32_Verdaux;
struct __anonstruct_Elf64_Verdaux_158 {
   Elf64_Word vda_name ;
   Elf64_Word vda_next ;
};
typedef struct __anonstruct_Elf64_Verdaux_158 Elf64_Verdaux;
struct __anonstruct_Elf32_Verneed_159 {
   Elf32_Half vn_version ;
   Elf32_Half vn_cnt ;
   Elf32_Word vn_file ;
   Elf32_Word vn_aux ;
   Elf32_Word vn_next ;
};
typedef struct __anonstruct_Elf32_Verneed_159 Elf32_Verneed;
struct __anonstruct_Elf64_Verneed_160 {
   Elf64_Half vn_version ;
   Elf64_Half vn_cnt ;
   Elf64_Word vn_file ;
   Elf64_Word vn_aux ;
   Elf64_Word vn_next ;
};
typedef struct __anonstruct_Elf64_Verneed_160 Elf64_Verneed;
struct __anonstruct_Elf32_Vernaux_161 {
   Elf32_Word vna_hash ;
   Elf32_Half vna_flags ;
   Elf32_Half vna_other ;
   Elf32_Word vna_name ;
   Elf32_Word vna_next ;
};
typedef struct __anonstruct_Elf32_Vernaux_161 Elf32_Vernaux;
struct __anonstruct_Elf64_Vernaux_162 {
   Elf64_Word vna_hash ;
   Elf64_Half vna_flags ;
   Elf64_Half vna_other ;
   Elf64_Word vna_name ;
   Elf64_Word vna_next ;
};
typedef struct __anonstruct_Elf64_Vernaux_162 Elf64_Vernaux;
union __anonunion_a_un_164 {
   uint32_t a_val ;
};
struct __anonstruct_Elf32_auxv_t_163 {
   uint32_t a_type ;
   union __anonunion_a_un_164 a_un ;
};
typedef struct __anonstruct_Elf32_auxv_t_163 Elf32_auxv_t;
union __anonunion_a_un_166 {
   uint64_t a_val ;
};
struct __anonstruct_Elf64_auxv_t_165 {
   uint64_t a_type ;
   union __anonunion_a_un_166 a_un ;
};
typedef struct __anonstruct_Elf64_auxv_t_165 Elf64_auxv_t;
struct __anonstruct_Elf32_Nhdr_167 {
   Elf32_Word n_namesz ;
   Elf32_Word n_descsz ;
   Elf32_Word n_type ;
};
typedef struct __anonstruct_Elf32_Nhdr_167 Elf32_Nhdr;
struct __anonstruct_Elf64_Nhdr_168 {
   Elf64_Word n_namesz ;
   Elf64_Word n_descsz ;
   Elf64_Word n_type ;
};
typedef struct __anonstruct_Elf64_Nhdr_168 Elf64_Nhdr;
struct __anonstruct_Elf32_Move_169 {
   Elf32_Xword m_value ;
   Elf32_Word m_info ;
   Elf32_Word m_poffset ;
   Elf32_Half m_repeat ;
   Elf32_Half m_stride ;
};
typedef struct __anonstruct_Elf32_Move_169 Elf32_Move;
struct __anonstruct_Elf64_Move_170 {
   Elf64_Xword m_value ;
   Elf64_Xword m_info ;
   Elf64_Xword m_poffset ;
   Elf64_Half m_repeat ;
   Elf64_Half m_stride ;
};
typedef struct __anonstruct_Elf64_Move_170 Elf64_Move;
struct __anonstruct_gt_header_172 {
   Elf32_Word gt_current_g_value ;
   Elf32_Word gt_unused ;
};
struct __anonstruct_gt_entry_173 {
   Elf32_Word gt_g_value ;
   Elf32_Word gt_bytes ;
};
union __anonunion_Elf32_gptab_171 {
   struct __anonstruct_gt_header_172 gt_header ;
   struct __anonstruct_gt_entry_173 gt_entry ;
};
typedef union __anonunion_Elf32_gptab_171 Elf32_gptab;
struct __anonstruct_Elf32_RegInfo_174 {
   Elf32_Word ri_gprmask ;
   Elf32_Word ri_cprmask[4] ;
   Elf32_Sword ri_gp_value ;
};
typedef struct __anonstruct_Elf32_RegInfo_174 Elf32_RegInfo;
struct __anonstruct_Elf_Options_175 {
   unsigned char kind ;
   unsigned char size ;
   Elf32_Section section ;
   Elf32_Word info ;
};
typedef struct __anonstruct_Elf_Options_175 Elf_Options;
struct __anonstruct_Elf_Options_Hw_176 {
   Elf32_Word hwp_flags1 ;
   Elf32_Word hwp_flags2 ;
};
typedef struct __anonstruct_Elf_Options_Hw_176 Elf_Options_Hw;
struct __anonstruct_Elf32_Lib_177 {
   Elf32_Word l_name ;
   Elf32_Word l_time_stamp ;
   Elf32_Word l_checksum ;
   Elf32_Word l_version ;
   Elf32_Word l_flags ;
};
typedef struct __anonstruct_Elf32_Lib_177 Elf32_Lib;
struct __anonstruct_Elf64_Lib_178 {
   Elf64_Word l_name ;
   Elf64_Word l_time_stamp ;
   Elf64_Word l_checksum ;
   Elf64_Word l_version ;
   Elf64_Word l_flags ;
};
typedef struct __anonstruct_Elf64_Lib_178 Elf64_Lib;
typedef Elf32_Addr Elf32_Conflict;
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
  ALIGN = (Int )(sizeof(void *) - 1U);
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
extern void vgPlain_xaprintf_no_f_c(XArray *dst , HChar const   *format  , ...) ;
extern XArray *vgPlain_args_for_client ;
extern XArray *vgPlain_args_for_valgrind ;
extern Int vgPlain_args_for_valgrind_noexecpass ;
extern HChar const   *vgPlain_args_the_exename ;
extern Addr vgPlain_clstk_base ;
extern Addr vgPlain_clstk_end ;
extern UWord vgPlain_clstk_id ;
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
extern Bool vgPlain_am_notify_client_mmap(Addr a , SizeT len , UInt prot ,
                                          UInt flags , Int fd , Off64T offset ) ;
extern Bool vgPlain_am_notify_client_shmat(Addr a , SizeT len , UInt prot ) ;
extern Bool vgPlain_am_notify_mprotect(Addr start , SizeT len , UInt prot ) ;
extern Bool vgPlain_am_notify_munmap(Addr start , SizeT len ) ;
extern SysRes vgPlain_am_do_mmap_NO_NOTIFY(Addr start , SizeT length ,
                                           UInt prot , UInt flags , Int fd ,
                                           Off64T offset ) ;
extern void vgPlain_am_aix5_reread_procmap(AixCodeSegChange *directives ,
                                           Int *ndirectives ) ;
extern Int vgPlain_am_aix5_reread_procmap_howmany_directives(void) ;
extern void vgPlain_am_aix5_set_initial_client_sp(Addr  ) ;
extern Bool vgPlain_am_aix5_sbrk_allowed ;
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
extern Addr *vgPlain_get_segment_starts(Int *n_acquired ) ;
extern void vgPlain_split_up_argv(Int argc , HChar **argv ) ;
extern void vgPlain_debugLog_startup(Int level , HChar *who ) ;
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
extern void vgPlain_print_errormgr_stats(void) ;
extern void vgPlain_print_ExeContext_stats(void) ;
extern Addr *vgPlain_get_ExeContext_StackTrace(ExeContext *e ) ;
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
extern void vgPlain_gdbserver_prerun_action(ThreadId tid ) ;
extern Bool vgPlain_gdbserver_activity(ThreadId tid ) ;
extern Bool vgPlain_gdbserver_point(PointKind kind , Bool insert , Addr addr ,
                                    int len ) ;
extern void vgPlain_invoke_gdbserver(int check ) ;
extern Bool vgPlain_gdbserver_report_signal(Int signo , ThreadId tid ) ;
extern IRSB *vgPlain_instrument_for_gdbserver_if_needed(IRSB *sb_in ,
                                                        VexGuestLayout *layout ,
                                                        VexGuestExtents *vge ,
                                                        IRType gWordTy ,
                                                        IRType hWordTy ) ;
extern void vgPlain_gdbserver_status_output(void) ;
extern IIFinaliseImageInfo vgPlain_ii_create_image(IICreateImageInfo  ) ;
extern void vgPlain_ii_finalise_image(IIFinaliseImageInfo  ) ;
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
extern OffT vgPlain_lseek(Int fd , OffT offset , Int whence ) ;
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
extern UInt vgPlain_printf_xml_no_f_c(HChar const   *format  , ...) ;
extern void vgPlain_vcbprintf(void (*char_sink)(HChar  , void *opaque ) ,
                              void *opaque , HChar const   *format ,
                              va_list vargs ) ;
extern UInt vgPlain_message_no_f_c(VgMsgKind kind , HChar const   *format  , ...) ;
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
extern  __attribute__((__noreturn__)) void vgPlain_err_config_error(Char *msg ) ;
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
extern SysRes vgPlain_do_syscall(UWord sysno , UWord  , UWord  , UWord  ,
                                 UWord  , UWord  , UWord  , UWord  , UWord  ) ;
extern SysRes vgPlain_mk_SysRes_x86_linux(Int val ) ;
extern SysRes vgPlain_mk_SysRes_amd64_linux(Long val ) ;
extern SysRes vgPlain_mk_SysRes_ppc32_linux(UInt val , UInt cr0so ) ;
extern SysRes vgPlain_mk_SysRes_ppc64_linux(ULong val , ULong cr0so ) ;
extern SysRes vgPlain_mk_SysRes_arm_linux(Int val ) ;
extern SysRes vgPlain_mk_SysRes_ppc32_aix5(UInt val , UInt err ) ;
extern SysRes vgPlain_mk_SysRes_ppc64_aix5(ULong val , ULong err ) ;
extern SysRes vgPlain_mk_SysRes_x86_darwin(UChar scclass , Bool isErr ,
                                           UInt wHI , UInt wLO ) ;
extern SysRes vgPlain_mk_SysRes_amd64_darwin(UChar scclass , Bool isErr ,
                                             ULong wHI , ULong wLO ) ;
extern SysRes vgPlain_mk_SysRes_s390x_linux(Long val ) ;
extern SysRes vgPlain_mk_SysRes_Error(UWord val ) ;
extern SysRes vgPlain_mk_SysRes_Success(UWord val ) ;
extern HChar const   *vgPlain_strerror(UWord errnum ) ;
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
extern void vgPlain_apply_to_GP_regs(void (*f)(UWord val ) ) ;
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
extern Char *vgPlain_clo_vgdb_prefix ;
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
                                          UInt *size , HChar **name ,
                                          Bool *isText , Bool *isIFunc ) ;
extern HChar const   *vgPlain_pp_SectKind(VgSectKind kind ) ;
extern VgSectKind vgPlain_DebugInfo_sect_kind(UChar *name , SizeT n_name ,
                                              Addr a ) ;
extern void vgPlain_di_initialise(void) ;
extern ULong vgPlain_di_notify_mmap(Addr a , Bool allow_SkFileV ) ;
extern void vgPlain_di_notify_munmap(Addr a , SizeT len ) ;
extern void vgPlain_di_notify_mprotect(Addr a , SizeT len , UInt prot ) ;
extern void vgPlain_di_notify_pdb_debuginfo(Int fd , Addr avma ,
                                            SizeT total_size ,
                                            PtrdiffT unknown_purpose__reloc ) ;
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
extern void vgPlain_redir_notify_new_DebugInfo(DebugInfo * ) ;
extern void vgPlain_redir_notify_delete_DebugInfo(DebugInfo * ) ;
extern void vgPlain_redir_initialise(void) ;
extern void vgPlain_redir_add_ifunc_target(Addr old_from , Addr new_from ) ;
extern Addr vgPlain_redir_do_lookup(Addr orig , Bool *isWrap ) ;
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
extern ULong vgPlain_bbs_done(void) ;
extern void vgPlain_print_scheduler_stats(void) ;
extern Bool vgPlain_in_generated_code ;
extern void vgPlain_sanity_check_general(Bool force_expensive ) ;
extern Bool vgPlain_generic_match(Bool matchAll , void *patt , SizeT szbPatt ,
                                  UWord nPatt , UWord ixPatt , void *input ,
                                  SizeT szbInput , UWord nInput ,
                                  UWord ixInput , Bool (*pIsStar)(void * ) ,
                                  Bool (*pIsQuery)(void * ) ,
                                  Bool (*pattEQinp)(void * , void * ) ) ;
extern Bool vgPlain_string_match(Char const   *pat , Char const   *str ) ;
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
extern UWord vgPlain_register_stack(Addr start , Addr end ) ;
extern void vgPlain_deregister_stack(UWord id ) ;
extern void vgPlain_change_stack(UWord id , Addr start , Addr end ) ;
extern void vgPlain_stack_limits(Addr SP , Addr *start , Addr *end ) ;
extern void ( __attribute__((__regparm__(3))) vgPlain_unknown_SP_update)(Addr old_SP ,
                                                                         Addr new_SP ,
                                                                         UInt otag ) ;
extern void vgPlain_main_thread_wrapper_NORETURN(ThreadId tid ) ;
extern void vgPlain_client_syscall(ThreadId tid , UInt trc ) ;
extern void vgPlain_post_syscall(ThreadId tid ) ;
extern void vgPlain_clear_syscallInfo(Int tid ) ;
extern void vgPlain_fixup_guest_state_after_syscall_interrupted(ThreadId tid ,
                                                                Addr ip ,
                                                                SysRes sysret ,
                                                                Bool restart ) ;
extern void vgPlain_reap_threads(ThreadId self ) ;
extern void vgPlain_cleanup_thread(ThreadArchState * ) ;
extern void vgPlain_init_preopened_fds(void) ;
extern void vgPlain_show_open_fds(void) ;
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
extern Bool vgPlain_translate(ThreadId tid , Addr64 orig_addr ,
                              Bool debugging_translation ,
                              Int debugging_verbosity , ULong bbs_done ,
                              Bool allow_redirection ) ;
extern void vgPlain_print_translation_stats(void) ;
extern Addr vgPlain_trampoline_stuff_start ;
extern Addr vgPlain_trampoline_stuff_end ;
extern Addr vgPlain_x86_linux_SUBST_FOR_sigreturn ;
extern Addr vgPlain_x86_linux_SUBST_FOR_rt_sigreturn ;
extern Char *vgPlain_x86_linux_REDIR_FOR_index(Char const   * , Int  ) ;
extern UInt vgPlain_x86_linux_REDIR_FOR_strlen(void * ) ;
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
static void print_all_stats(void) 
{ 


  {
  vgPlain_print_translation_stats();
  vgPlain_print_tt_tc_stats();
  vgPlain_print_scheduler_stats();
  vgPlain_print_ExeContext_stats();
  vgPlain_print_errormgr_stats();
  if (vgPlain_clo_verbosity > 2) {
    vgPlain_message((VgMsgKind )2, "\n");
    vgPlain_message((VgMsgKind )2,
                    "------ Valgrind\'s internal memory use stats follow ------\n");
    vgPlain_sanity_check_malloc_all();
    vgPlain_message((VgMsgKind )2, "------\n");
    vgPlain_print_all_arena_stats();
    vgPlain_message((VgMsgKind )2, "\n");
  } else {

  }
  return;
}
}
static void usage_NORETURN(Bool debug_help ) 
{ 
  Char *usage1 ;
  Char *usage2 ;
  Char *usage3 ;
  Char *gdb_path ;
  long tmp ;
  long tmp___0 ;

  {
  usage1 = (Char *)"usage: valgrind [options] prog-and-args\n\n  tool-selection option, with default in [ ]:\n    --tool=<name>             use the Valgrind tool named <name> [memcheck]\n\n  basic user options for all Valgrind tools, with defaults in [ ]:\n    -h --help                 show this message\n    --help-debug              show this message, plus debugging options\n    --version                 show version\n    -q --quiet                run silently; only print error msgs\n    -v --verbose              be more verbose -- show misc extra info\n    --trace-children=no|yes   Valgrind-ise child processes (follow execve)? [no]\n    --trace-children-skip=patt1,patt2,...    specifies a list of executables\n                              that --trace-children=yes should not trace into\n    --trace-children-skip-by-arg=patt1,patt2,...   same as --trace-children-skip=\n                              but check the argv[] entries for children, rather\n                              than the exe name, to make a follow/no-follow decision\n    --child-silent-after-fork=no|yes omit child output between fork & exec? [no]\n    --vgdb=no|yes|full        activate gdbserver? [yes]\n                              full is slower but provides precise watchpoint/step\n    --vgdb-error=<number>     invoke gdbserver after <number> errors [%d] \n    --track-fds=no|yes        track open file descriptors? [no]\n    --time-stamp=no|yes       add timestamps to log messages? [no]\n    --log-fd=<number>         log messages to file descriptor [2=stderr]\n    --log-file=<file>         log messages to <file>\n    --log-socket=ipaddr:port  log messages to socket ipaddr:port\n\n  user options for Valgrind tools that report errors:\n    --xml=yes                 emit error output in XML (some tools only)\n    --xml-fd=<number>         XML output to file descriptor\n    --xml-file=<file>         XML output to <file>\n    --xml-socket=ipaddr:port  XML output to socket ipaddr:port\n    --xml-user-comment=STR    copy STR verbatim into XML output\n    --demangle=no|yes         automatically demangle C++ names? [yes]\n    --num-callers=<number>    show <number> callers in stack traces [12]\n    --error-limit=no|yes      stop showing new errors if too many? [yes]\n    --error-exitcode=<number> exit code to return if errors found [0=disable]\n    --show-below-main=no|yes  continue stack traces below main() [no]\n    --suppressions=<filename> suppress errors described in <filename>\n    --gen-suppressions=no|yes|all    print suppressions for errors? [no]\n    --db-attach=no|yes        start debugger when errors detected? [no]\n    --db-command=<command>    command to start debugger [%s -nw %%f %%p]\n    --input-fd=<number>       file descriptor for input [0=stdin]\n    --dsymutil=no|yes         run dsymutil on Mac OS X when helpful? [no]\n    --max-stackframe=<number> assume stack switch for SP changes larger\n                              than <number> bytes [2000000]\n    --main-stacksize=<number> set size of main thread\'s stack (in bytes)\n                              [use current \'ulimit\' value]\n\n  user options for Valgrind tools that replace malloc:\n    --alignment=<number>      set minimum alignment of heap allocations [%ld]\n\n  uncommon user options for all Valgrind tools:\n    --fullpath-after=         (with nothing after the \'=\')\n                              show full source paths in call stacks\n    --fullpath-after=string   like --fullpath-after=, but only show the\n                              part of the path after \'string\'.  Allows removal\n                              of path prefixes.  Use this flag multiple times\n                              to specify a set of prefixes to remove.\n    --smc-check=none|stack|all|all-non-file [stack]\n                              checks for self-modifying code: none, only for\n                              code found in stacks, for all code, or for all\n                              code except that from file-backed mappings\n    --read-var-info=yes|no    read debug info on stack and global variables\n                              and use it to print better error messages in\n                              tools that make use of it (Memcheck, Helgrind,\n                              DRD) [no]\n    --vgdb-poll=<number>      gdbserver poll max every <number> basic blocks [%d] \n    --vgdb-shadow-registers=no|yes   let gdb see the shadow registers [no]\n    --vgdb-prefix=<prefix>    prefix for vgdb FIFOs [%s]\n    --run-libc-freeres=no|yes free up glibc memory at exit on Linux? [yes]\n    --sim-hints=hint1,hint2,...  known hints:\n                                 lax-ioctls, enable-outer [none]\n    --kernel-variant=variant1,variant2,...  known variants: bproc [none]\n                              handle non-standard kernel variants\n    --show-emwarns=no|yes     show warnings about emulation limits? [no]\n    --require-text-symbol=:sonamepattern:symbolpattern    abort run if the\n                              stated shared object doesn\'t have the stated\n                              text symbol.  Patterns can contain ? and *.\n\n";
  usage2 = (Char *)"\n  debugging options for all Valgrind tools:\n    -d                        show verbose debugging output\n    --stats=no|yes            show tool and core statistics [no]\n    --sanity-level=<number>   level of sanity checking to do [1]\n    --trace-flags=<XXXXXXXX>   show generated code? (X = 0|1) [00000000]\n    --profile-flags=<XXXXXXXX> ditto, but for profiling (X = 0|1) [00000000]\n    --trace-notbelow=<number> only show BBs above <number> [999999999]\n    --trace-syscalls=no|yes   show all system calls? [no]\n    --trace-signals=no|yes    show signal handling details? [no]\n    --trace-symtab=no|yes     show symbol table details? [no]\n    --trace-symtab-patt=<patt> limit debuginfo tracing to obj name <patt>\n    --trace-cfi=no|yes        show call-frame-info details? [no]\n    --debug-dump=syms         mimic /usr/bin/readelf --syms\n    --debug-dump=line         mimic /usr/bin/readelf --debug-dump=line\n    --debug-dump=frames       mimic /usr/bin/readelf --debug-dump=frames\n    --trace-redir=no|yes      show redirection details? [no]\n    --trace-sched=no|yes      show thread scheduler details? [no]\n    --profile-heap=no|yes     profile Valgrind\'s own space use\n    --wait-for-gdb=yes|no     pause on startup to wait for gdb attach\n    --sym-offsets=yes|no      show syms in form \'name+offset\' ? [no]\n    --command-line-only=no|yes  only use command line options [no]\n\n  Vex options for all Valgrind tools:\n    --vex-iropt-verbosity=<0..9>           [0]\n    --vex-iropt-level=<0..2>               [2]\n    --vex-iropt-precise-memory-exns=no|yes [no]\n    --vex-iropt-unroll-thresh=<0..400>     [120]\n    --vex-guest-max-insns=<1..100>         [50]\n    --vex-guest-chase-thresh=<0..99>       [10]\n    --vex-guest-chase-cond=no|yes          [no]\n    --trace-flags and --profile-flags values (omit the middle space):\n       1000 0000   show conversion into IR\n       0100 0000   show after initial opt\n       0010 0000   show after instrumentation\n       0001 0000   show after second opt\n       0000 1000   show after tree building\n       0000 0100   show selecting insns\n       0000 0010   show after reg-alloc\n       0000 0001   show final assembly\n      (Nb: you need --trace-notbelow with --trace-flags for full details)\n\n  debugging options for Valgrind tools that report errors\n    --dump-error=<number>     show translation for basic block associated\n                              with <number>\'th error context [0=show none]\n\n  debugging options for Valgrind tools that replace malloc:\n    --trace-malloc=no|yes     show client malloc details? [no]\n\n";
  usage3 = (Char *)"\n  Extra options read from ~/.valgrindrc, $VALGRIND_OPTS, ./.valgrindrc\n\n  %s is %s\n  Valgrind is Copyright (C) 2000-2010, and GNU GPL\'d, by Julian Seward et al.\n  LibVEX is Copyright (C) 2004-2010, and GNU GPL\'d, by OpenWorks LLP et al.\n\n  Bug reports, feedback, admiration, abuse, etc, to: %s.\n\n";
  gdb_path = (Char *)"/no/gdb/was/found/at/configure/time";
  vgPlain_log_output_sink.fd = 1;
  vgPlain_log_output_sink.is_socket = (Bool )0;
  vgPlain_printf((HChar const   *)usage1, vgPlain_clo_vgdb_error, gdb_path, 8,
                 vgPlain_clo_vgdb_poll, vgPlain_clo_vgdb_prefix);
  if (vgPlain_details.name) {
    vgPlain_printf("  user options for %s:\n", vgPlain_details.name);
    if (vgPlain_needs.command_line_options) {
      tmp = __builtin_expect((long )(! (! vgPlain_tdict.tool_print_usage)), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"VG_(tdict).tool_print_usage",
                            (Char const   *)"m_main.c", 271,
                            (Char const   *)"usage_NORETURN",
                            "you forgot to set VgToolInterface function \'tool_print_usage\'");
      }
      (*(vgPlain_tdict.tool_print_usage))();
    } else {
      vgPlain_printf("    (none)\n");
    }
  } else {

  }
  if (debug_help) {
    vgPlain_printf("%s", usage2);
    if (vgPlain_details.name) {
      vgPlain_printf("  debugging options for %s:\n", vgPlain_details.name);
      if (vgPlain_needs.command_line_options) {
        tmp___0 = __builtin_expect((long )(! (! vgPlain_tdict.tool_print_debug_usage)),
                                   1L);
        if (tmp___0) {

        } else {
          vgPlain_assert_fail((Bool )0,
                              (Char const   *)"VG_(tdict).tool_print_debug_usage",
                              (Char const   *)"m_main.c", 282,
                              (Char const   *)"usage_NORETURN",
                              "you forgot to set VgToolInterface function \'tool_print_debug_usage\'");
        }
        (*(vgPlain_tdict.tool_print_debug_usage))();
      } else {
        vgPlain_printf("    (none)\n");
      }
    } else {

    }
  } else {

  }
  vgPlain_printf((HChar const   *)usage3, vgPlain_details.name,
                 vgPlain_details.copyright_author, "www.valgrind.org");
  vgPlain_exit(0);
}
}
static void early_process_cmd_line_options(Int *need_help , HChar **tool ) 
{ 
  UInt i ;
  HChar *str ;
  long tmp ;
  void *tmp___0 ;
  long tmp___1 ;
  SizeT tmp___2 ;
  Int tmp___3 ;
  int tmp___4 ;
  SizeT tmp___5 ;
  Int tmp___6 ;
  Char *val ;
  SizeT tmp___7 ;
  Char *s ;
  Long n ;
  Long tmp___8 ;
  int tmp___9 ;
  SizeT tmp___10 ;
  Int tmp___11 ;
  int tmp___12 ;
  SizeT tmp___13 ;
  Int tmp___14 ;
  Char *val___0 ;
  SizeT tmp___15 ;
  Char *s___0 ;
  Long n___0 ;
  Long tmp___16 ;
  SizeT tmp___17 ;
  Int tmp___18 ;
  int tmp___19 ;
  SizeT tmp___20 ;
  Int tmp___21 ;
  Char *val___1 ;
  SizeT tmp___22 ;
  Int tmp___23 ;
  int tmp___24 ;
  Int tmp___25 ;
  Int tmp___26 ;
  int tmp___27 ;
  Int tmp___28 ;
  Int tmp___29 ;
  int tmp___30 ;
  Int tmp___31 ;
  Int tmp___32 ;
  int tmp___33 ;
  Int tmp___34 ;
  Word tmp___35 ;

  {
  tmp = __builtin_expect((long )(! (! vgPlain_args_for_valgrind)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(args_for_valgrind)",
                        (Char const   *)"m_main.c", 313,
                        (Char const   *)"early_process_cmd_line_options", "");
  }
  i = (UInt )0;
  while (1) {
    tmp___35 = vgPlain_sizeXA(vgPlain_args_for_valgrind);
    if ((unsigned long )i < (unsigned long )tmp___35) {

    } else {
      break;
    }
    tmp___0 = vgPlain_indexXA(vgPlain_args_for_valgrind, (Word )i);
    str = *((HChar **)tmp___0);
    tmp___1 = __builtin_expect((long )(! (! str)), 1L);
    if (tmp___1) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"str",
                          (Char const   *)"m_main.c", 319,
                          (Char const   *)"early_process_cmd_line_options", "");
    }
    if ((unsigned int )str != (unsigned int )((void *)0)) {
      if ((unsigned int )"--version" != (unsigned int )((void *)0)) {
        tmp___34 = vgPlain_strcmp((Char const   *)str,
                                  (Char const   *)"--version");
        if (tmp___34 == 0) {
          tmp___33 = (int )((Bool )1);
        } else {
          tmp___33 = (int )((Bool )0);
        }
      } else {
        tmp___33 = (int )((Bool )0);
      }
    } else {
      tmp___33 = (int )((Bool )0);
    }
    if (tmp___33) {
      vgPlain_log_output_sink.fd = 1;
      vgPlain_log_output_sink.is_socket = (Bool )0;
      vgPlain_printf("valgrind-3.7.0.SVN\n");
      vgPlain_exit(0);
    } else {
      _L___4: /* CIL Label */ 
      if ((unsigned int )str != (unsigned int )((void *)0)) {
        if ((unsigned int )"--help" != (unsigned int )((void *)0)) {
          tmp___31 = vgPlain_strcmp((Char const   *)str,
                                    (Char const   *)"--help");
          if (tmp___31 == 0) {
            tmp___30 = (int )((Bool )1);
          } else {
            tmp___30 = (int )((Bool )0);
          }
        } else {
          tmp___30 = (int )((Bool )0);
        }
      } else {
        tmp___30 = (int )((Bool )0);
      }
      if (tmp___30) {
        (*need_help) ++;
      } else {
        _L___3: /* CIL Label */ 
        if ((unsigned int )str != (unsigned int )((void *)0)) {
          if ((unsigned int )"-h" != (unsigned int )((void *)0)) {
            tmp___28 = vgPlain_strcmp((Char const   *)str, (Char const   *)"-h");
            if (tmp___28 == 0) {
              tmp___27 = (int )((Bool )1);
            } else {
              tmp___27 = (int )((Bool )0);
            }
          } else {
            tmp___27 = (int )((Bool )0);
          }
        } else {
          tmp___27 = (int )((Bool )0);
        }
        if (tmp___27) {
          (*need_help) ++;
        } else {
          _L___2: /* CIL Label */ 
          if ((unsigned int )str != (unsigned int )((void *)0)) {
            if ((unsigned int )"--help-debug" != (unsigned int )((void *)0)) {
              tmp___25 = vgPlain_strcmp((Char const   *)str,
                                        (Char const   *)"--help-debug");
              if (tmp___25 == 0) {
                tmp___24 = (int )((Bool )1);
              } else {
                tmp___24 = (int )((Bool )0);
              }
            } else {
              tmp___24 = (int )((Bool )0);
            }
          } else {
            tmp___24 = (int )((Bool )0);
          }
          if (tmp___24) {
            *need_help += 2;
          } else {
            _L___1: /* CIL Label */ 
            if ((unsigned int )str != (unsigned int )((void *)0)) {
              if ((unsigned int )"--tool=" != (unsigned int )((void *)0)) {
                tmp___20 = vgPlain_strlen((Char const   *)"--tool");
                tmp___21 = vgPlain_strncmp((Char const   *)str,
                                           (Char const   *)"--tool=",
                                           tmp___20 + 1UL);
                if (tmp___21 == 0) {
                  tmp___19 = (int )((Bool )1);
                } else {
                  tmp___19 = (int )((Bool )0);
                }
              } else {
                tmp___19 = (int )((Bool )0);
              }
            } else {
              tmp___19 = (int )((Bool )0);
            }
            if (tmp___19) {
              tmp___22 = vgPlain_strlen((Char const   *)"--tool");
              val___1 = (Char *)(str + (tmp___22 + 1UL));
              *tool = (HChar *)val___1;
            } else {
              _L___0: /* CIL Label */ 
              if ((unsigned int )str != (unsigned int )((void *)0)) {
                if ((unsigned int )"--max-stackframe=" != (unsigned int )((void *)0)) {
                  tmp___13 = vgPlain_strlen((Char const   *)"--max-stackframe");
                  tmp___14 = vgPlain_strncmp((Char const   *)str,
                                             (Char const   *)"--max-stackframe=",
                                             tmp___13 + 1UL);
                  if (tmp___14 == 0) {
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
                tmp___15 = vgPlain_strlen((Char const   *)"--max-stackframe");
                val___0 = (Char *)(str + (tmp___15 + 1UL));
                tmp___16 = vgPlain_strtoll10(val___0, & s___0);
                n___0 = tmp___16;
                vgPlain_clo_max_stackframe = (Word )n___0;
                if (0 != (int )*(s___0 + 0)) {
                  vgPlain_fmsg_bad_option(str, "");
                } else
                if ((Long )vgPlain_clo_max_stackframe != n___0) {
                  vgPlain_fmsg_bad_option(str, "");
                } else {

                }
              } else {
                _L: /* CIL Label */ 
                if ((unsigned int )str != (unsigned int )((void *)0)) {
                  if ((unsigned int )"--main-stacksize=" != (unsigned int )((void *)0)) {
                    tmp___5 = vgPlain_strlen((Char const   *)"--main-stacksize");
                    tmp___6 = vgPlain_strncmp((Char const   *)str,
                                              (Char const   *)"--main-stacksize=",
                                              tmp___5 + 1UL);
                    if (tmp___6 == 0) {
                      tmp___4 = (int )((Bool )1);
                    } else {
                      tmp___4 = (int )((Bool )0);
                    }
                  } else {
                    tmp___4 = (int )((Bool )0);
                  }
                } else {
                  tmp___4 = (int )((Bool )0);
                }
                if (tmp___4) {
                  tmp___7 = vgPlain_strlen((Char const   *)"--main-stacksize");
                  val = (Char *)(str + (tmp___7 + 1UL));
                  tmp___8 = vgPlain_strtoll10(val, & s);
                  n = tmp___8;
                  vgPlain_clo_main_stacksize = (Word )n;
                  if (0 != (int )*(s + 0)) {
                    vgPlain_fmsg_bad_option(str, "");
                  } else
                  if ((Long )vgPlain_clo_main_stacksize != n) {
                    vgPlain_fmsg_bad_option(str, "");
                  } else {

                  }
                  tmp___9 = 1;
                } else {
                  tmp___9 = 0;
                }
              }
            }
          }
        }
      }
    }
    i ++;
  }
  return;
}
}
static void main_process_cmd_line_options(Bool *logging_to_fd ,
                                          Char **xml_fname_unexpanded ,
                                          HChar const   *toolname ) ;
static Char const   default_supp[13]  = 
  {      (Char const   )'d',      (Char const   )'e',      (Char const   )'f',      (Char const   )'a', 
        (Char const   )'u',      (Char const   )'l',      (Char const   )'t',      (Char const   )'.', 
        (Char const   )'s',      (Char const   )'u',      (Char const   )'p',      (Char const   )'p', 
        (Char const   )'\000'};
static void main_process_cmd_line_options(Bool *logging_to_fd ,
                                          Char **xml_fname_unexpanded ,
                                          HChar const   *toolname ) 
{ 
  SysRes sres ;
  Int i ;
  Int tmp_log_fd ;
  Int tmp_xml_fd ;
  Int toolname_len ;
  SizeT tmp ;
  Char *tmp_str ;
  enum __anonenum_log_to_135 log_to ;
  enum __anonenum_log_to_135 xml_to ;
  Char *log_fsname_unexpanded ;
  Char *xml_fsname_unexpanded ;
  long tmp___0 ;
  HChar *arg ;
  void *tmp___1 ;
  HChar *colon ;
  Char *tmp___2 ;
  Int tmp___3 ;
  int tmp___4 ;
  Int tmp___5 ;
  Int tmp___6 ;
  int tmp___7 ;
  Int tmp___8 ;
  Int tmp___9 ;
  int tmp___10 ;
  Int tmp___11 ;
  Char patt[7] ;
  Bool ok ;
  SizeT tmp___12 ;
  int tmp___13 ;
  Int j ;
  SizeT tmp___14 ;
  Int j___0 ;
  SizeT tmp___15 ;
  long tmp___16 ;
  Bool tmp___17 ;
  Int tmp___18 ;
  int tmp___19 ;
  Int tmp___20 ;
  Int tmp___21 ;
  int tmp___22 ;
  Int tmp___23 ;
  Int tmp___24 ;
  int tmp___25 ;
  Int tmp___26 ;
  SizeT tmp___27 ;
  Int tmp___28 ;
  int tmp___29 ;
  SizeT tmp___30 ;
  Int tmp___31 ;
  Char *val ;
  SizeT tmp___32 ;
  Char *s ;
  Long n ;
  Long tmp___33 ;
  SizeT tmp___34 ;
  Int tmp___35 ;
  int tmp___36 ;
  SizeT tmp___37 ;
  Int tmp___38 ;
  Char *val___0 ;
  SizeT tmp___39 ;
  SizeT tmp___40 ;
  Int tmp___41 ;
  int tmp___42 ;
  SizeT tmp___43 ;
  Int tmp___44 ;
  Char *val___1 ;
  SizeT tmp___45 ;
  SizeT tmp___46 ;
  Int tmp___47 ;
  int tmp___48 ;
  SizeT tmp___49 ;
  Int tmp___50 ;
  Char *val___2 ;
  SizeT tmp___51 ;
  SizeT tmp___52 ;
  Int tmp___53 ;
  int tmp___54 ;
  SizeT tmp___55 ;
  Int tmp___56 ;
  Char *val___3 ;
  SizeT tmp___57 ;
  SizeT tmp___58 ;
  Int tmp___59 ;
  int tmp___60 ;
  SizeT tmp___61 ;
  Int tmp___62 ;
  Char *val___4 ;
  SizeT tmp___63 ;
  SizeT tmp___64 ;
  Int tmp___65 ;
  int tmp___66 ;
  SizeT tmp___67 ;
  Int tmp___68 ;
  Char *val___5 ;
  SizeT tmp___69 ;
  SizeT tmp___70 ;
  Int tmp___71 ;
  int tmp___72 ;
  SizeT tmp___73 ;
  Int tmp___74 ;
  Char *val___6 ;
  SizeT tmp___75 ;
  SizeT tmp___76 ;
  Int tmp___77 ;
  int tmp___78 ;
  SizeT tmp___79 ;
  Int tmp___80 ;
  Char *val___7 ;
  SizeT tmp___81 ;
  SizeT tmp___82 ;
  Int tmp___83 ;
  int tmp___84 ;
  SizeT tmp___85 ;
  Int tmp___86 ;
  Char *val___8 ;
  SizeT tmp___87 ;
  SizeT tmp___88 ;
  Int tmp___89 ;
  int tmp___90 ;
  SizeT tmp___91 ;
  Int tmp___92 ;
  Char *val___9 ;
  SizeT tmp___93 ;
  SizeT tmp___94 ;
  Int tmp___95 ;
  int tmp___96 ;
  SizeT tmp___97 ;
  Int tmp___98 ;
  Char *val___10 ;
  SizeT tmp___99 ;
  Char *s___0 ;
  Long n___0 ;
  Long tmp___100 ;
  SizeT tmp___101 ;
  Int tmp___102 ;
  int tmp___103 ;
  SizeT tmp___104 ;
  Int tmp___105 ;
  Char *val___11 ;
  SizeT tmp___106 ;
  Char *s___1 ;
  Long n___1 ;
  Long tmp___107 ;
  SizeT tmp___108 ;
  Int tmp___109 ;
  int tmp___110 ;
  SizeT tmp___111 ;
  Int tmp___112 ;
  Char *val___12 ;
  SizeT tmp___113 ;
  Int tmp___114 ;
  int tmp___115 ;
  Int tmp___116 ;
  Int tmp___117 ;
  int tmp___118 ;
  Int tmp___119 ;
  SizeT tmp___120 ;
  Int tmp___121 ;
  int tmp___122 ;
  SizeT tmp___123 ;
  Int tmp___124 ;
  Char *val___13 ;
  SizeT tmp___125 ;
  Char *s___2 ;
  Long n___2 ;
  Long tmp___126 ;
  SizeT tmp___127 ;
  Int tmp___128 ;
  int tmp___129 ;
  SizeT tmp___130 ;
  Int tmp___131 ;
  Char *val___14 ;
  SizeT tmp___132 ;
  Char *s___3 ;
  Long n___3 ;
  Long tmp___133 ;
  SizeT tmp___134 ;
  Int tmp___135 ;
  int tmp___136 ;
  SizeT tmp___137 ;
  Int tmp___138 ;
  Char *val___15 ;
  SizeT tmp___139 ;
  Char *s___4 ;
  Long n___4 ;
  Long tmp___140 ;
  SizeT tmp___141 ;
  Int tmp___142 ;
  int tmp___143 ;
  SizeT tmp___144 ;
  Int tmp___145 ;
  Char *val___16 ;
  SizeT tmp___146 ;
  Int tmp___147 ;
  int tmp___148 ;
  Int tmp___149 ;
  Int tmp___150 ;
  int tmp___151 ;
  Int tmp___152 ;
  SizeT tmp___153 ;
  Int tmp___154 ;
  int tmp___155 ;
  SizeT tmp___156 ;
  Int tmp___157 ;
  Char *val___17 ;
  SizeT tmp___158 ;
  Char *s___5 ;
  Long n___5 ;
  Long tmp___159 ;
  SizeT tmp___160 ;
  Int tmp___161 ;
  int tmp___162 ;
  SizeT tmp___163 ;
  Int tmp___164 ;
  Char *val___18 ;
  SizeT tmp___165 ;
  Char *s___6 ;
  Long n___6 ;
  Long tmp___166 ;
  SizeT tmp___167 ;
  Int tmp___168 ;
  int tmp___169 ;
  SizeT tmp___170 ;
  Int tmp___171 ;
  Char *val___19 ;
  SizeT tmp___172 ;
  SizeT tmp___173 ;
  Int tmp___174 ;
  int tmp___175 ;
  SizeT tmp___176 ;
  Int tmp___177 ;
  Char *val___20 ;
  SizeT tmp___178 ;
  SizeT tmp___179 ;
  Int tmp___180 ;
  int tmp___181 ;
  SizeT tmp___182 ;
  Int tmp___183 ;
  Char *val___21 ;
  SizeT tmp___184 ;
  Int tmp___185 ;
  int tmp___186 ;
  Int tmp___187 ;
  Int tmp___188 ;
  int tmp___189 ;
  Int tmp___190 ;
  SizeT tmp___191 ;
  Int tmp___192 ;
  int tmp___193 ;
  SizeT tmp___194 ;
  Int tmp___195 ;
  Char *val___22 ;
  SizeT tmp___196 ;
  Int tmp___197 ;
  int tmp___198 ;
  Int tmp___199 ;
  Int tmp___200 ;
  int tmp___201 ;
  Int tmp___202 ;
  Int tmp___203 ;
  int tmp___204 ;
  Int tmp___205 ;
  Int tmp___206 ;
  int tmp___207 ;
  Int tmp___208 ;
  SizeT tmp___209 ;
  Int tmp___210 ;
  int tmp___211 ;
  SizeT tmp___212 ;
  Int tmp___213 ;
  Char *val___23 ;
  SizeT tmp___214 ;
  Char *s___7 ;
  Long n___7 ;
  Long tmp___215 ;
  SizeT tmp___216 ;
  Int tmp___217 ;
  int tmp___218 ;
  SizeT tmp___219 ;
  Int tmp___220 ;
  Char *val___24 ;
  SizeT tmp___221 ;
  Char *s___8 ;
  Long n___8 ;
  Long tmp___222 ;
  SizeT tmp___223 ;
  Int tmp___224 ;
  int tmp___225 ;
  SizeT tmp___226 ;
  Int tmp___227 ;
  Char *val___25 ;
  SizeT tmp___228 ;
  Char *s___9 ;
  Long n___9 ;
  Long tmp___229 ;
  SizeT tmp___230 ;
  Int tmp___231 ;
  int tmp___232 ;
  SizeT tmp___233 ;
  Int tmp___234 ;
  Char *val___26 ;
  SizeT tmp___235 ;
  Char *s___10 ;
  Long n___10 ;
  Long tmp___236 ;
  SizeT tmp___237 ;
  Int tmp___238 ;
  int tmp___239 ;
  SizeT tmp___240 ;
  Int tmp___241 ;
  Char *val___27 ;
  SizeT tmp___242 ;
  Int tmp___243 ;
  int tmp___244 ;
  Int tmp___245 ;
  Int tmp___246 ;
  int tmp___247 ;
  Int tmp___248 ;
  SizeT tmp___249 ;
  Int tmp___250 ;
  int tmp___251 ;
  SizeT tmp___252 ;
  Int tmp___253 ;
  Char *val___28 ;
  SizeT tmp___254 ;
  Int tmp___255 ;
  int tmp___256 ;
  Int tmp___257 ;
  Int tmp___258 ;
  int tmp___259 ;
  Int tmp___260 ;
  SizeT tmp___261 ;
  Int tmp___262 ;
  int tmp___263 ;
  SizeT tmp___264 ;
  Int tmp___265 ;
  Char *val___29 ;
  SizeT tmp___266 ;
  SizeT tmp___267 ;
  Int tmp___268 ;
  int tmp___269 ;
  SizeT tmp___270 ;
  Int tmp___271 ;
  Char *val___30 ;
  SizeT tmp___272 ;
  SizeT tmp___273 ;
  Int tmp___274 ;
  int tmp___275 ;
  SizeT tmp___276 ;
  Int tmp___277 ;
  Char *val___31 ;
  SizeT tmp___278 ;
  Int tmp___279 ;
  int tmp___280 ;
  Int tmp___281 ;
  Int tmp___282 ;
  int tmp___283 ;
  Int tmp___284 ;
  SizeT tmp___285 ;
  Int tmp___286 ;
  int tmp___287 ;
  SizeT tmp___288 ;
  Int tmp___289 ;
  Char *val___32 ;
  SizeT tmp___290 ;
  Int tmp___291 ;
  int tmp___292 ;
  Int tmp___293 ;
  Int tmp___294 ;
  int tmp___295 ;
  Int tmp___296 ;
  SizeT tmp___297 ;
  Int tmp___298 ;
  int tmp___299 ;
  SizeT tmp___300 ;
  Int tmp___301 ;
  Char *val___33 ;
  SizeT tmp___302 ;
  Int tmp___303 ;
  int tmp___304 ;
  Int tmp___305 ;
  Int tmp___306 ;
  int tmp___307 ;
  Int tmp___308 ;
  Int tmp___309 ;
  int tmp___310 ;
  Int tmp___311 ;
  Int tmp___312 ;
  int tmp___313 ;
  Int tmp___314 ;
  Int tmp___315 ;
  int tmp___316 ;
  Int tmp___317 ;
  SizeT tmp___318 ;
  Int tmp___319 ;
  int tmp___320 ;
  SizeT tmp___321 ;
  Int tmp___322 ;
  Char *val___34 ;
  SizeT tmp___323 ;
  Int tmp___324 ;
  int tmp___325 ;
  Int tmp___326 ;
  Int tmp___327 ;
  int tmp___328 ;
  Int tmp___329 ;
  SizeT tmp___330 ;
  Int tmp___331 ;
  int tmp___332 ;
  SizeT tmp___333 ;
  Int tmp___334 ;
  Char *val___35 ;
  SizeT tmp___335 ;
  SizeT tmp___336 ;
  Int tmp___337 ;
  int tmp___338 ;
  SizeT tmp___339 ;
  Int tmp___340 ;
  Char *val___36 ;
  SizeT tmp___341 ;
  Int tmp___342 ;
  int tmp___343 ;
  Int tmp___344 ;
  Int tmp___345 ;
  int tmp___346 ;
  Int tmp___347 ;
  SizeT tmp___348 ;
  Int tmp___349 ;
  int tmp___350 ;
  SizeT tmp___351 ;
  Int tmp___352 ;
  Char *val___37 ;
  SizeT tmp___353 ;
  Int tmp___354 ;
  int tmp___355 ;
  Int tmp___356 ;
  Int tmp___357 ;
  int tmp___358 ;
  Int tmp___359 ;
  SizeT tmp___360 ;
  Int tmp___361 ;
  int tmp___362 ;
  SizeT tmp___363 ;
  Int tmp___364 ;
  Char *val___38 ;
  SizeT tmp___365 ;
  Int tmp___366 ;
  int tmp___367 ;
  Int tmp___368 ;
  Int tmp___369 ;
  int tmp___370 ;
  Int tmp___371 ;
  SizeT tmp___372 ;
  Int tmp___373 ;
  int tmp___374 ;
  SizeT tmp___375 ;
  Int tmp___376 ;
  Char *val___39 ;
  SizeT tmp___377 ;
  Int tmp___378 ;
  int tmp___379 ;
  Int tmp___380 ;
  Int tmp___381 ;
  int tmp___382 ;
  Int tmp___383 ;
  SizeT tmp___384 ;
  Int tmp___385 ;
  int tmp___386 ;
  SizeT tmp___387 ;
  Int tmp___388 ;
  Char *val___40 ;
  SizeT tmp___389 ;
  Int tmp___390 ;
  int tmp___391 ;
  Int tmp___392 ;
  Int tmp___393 ;
  int tmp___394 ;
  Int tmp___395 ;
  SizeT tmp___396 ;
  Int tmp___397 ;
  int tmp___398 ;
  SizeT tmp___399 ;
  Int tmp___400 ;
  Char *val___41 ;
  SizeT tmp___401 ;
  Int tmp___402 ;
  int tmp___403 ;
  Int tmp___404 ;
  Int tmp___405 ;
  int tmp___406 ;
  Int tmp___407 ;
  SizeT tmp___408 ;
  Int tmp___409 ;
  int tmp___410 ;
  SizeT tmp___411 ;
  Int tmp___412 ;
  Char *val___42 ;
  SizeT tmp___413 ;
  Int tmp___414 ;
  int tmp___415 ;
  Int tmp___416 ;
  Int tmp___417 ;
  int tmp___418 ;
  Int tmp___419 ;
  SizeT tmp___420 ;
  Int tmp___421 ;
  int tmp___422 ;
  SizeT tmp___423 ;
  Int tmp___424 ;
  Char *val___43 ;
  SizeT tmp___425 ;
  Int tmp___426 ;
  int tmp___427 ;
  Int tmp___428 ;
  Int tmp___429 ;
  int tmp___430 ;
  Int tmp___431 ;
  SizeT tmp___432 ;
  Int tmp___433 ;
  int tmp___434 ;
  SizeT tmp___435 ;
  Int tmp___436 ;
  Char *val___44 ;
  SizeT tmp___437 ;
  Int tmp___438 ;
  int tmp___439 ;
  Int tmp___440 ;
  Int tmp___441 ;
  int tmp___442 ;
  Int tmp___443 ;
  SizeT tmp___444 ;
  Int tmp___445 ;
  int tmp___446 ;
  SizeT tmp___447 ;
  Int tmp___448 ;
  Char *val___45 ;
  SizeT tmp___449 ;
  Int tmp___450 ;
  int tmp___451 ;
  Int tmp___452 ;
  Int tmp___453 ;
  int tmp___454 ;
  Int tmp___455 ;
  SizeT tmp___456 ;
  Int tmp___457 ;
  int tmp___458 ;
  SizeT tmp___459 ;
  Int tmp___460 ;
  Char *val___46 ;
  SizeT tmp___461 ;
  Char *s___11 ;
  Long n___11 ;
  Long tmp___462 ;
  SizeT tmp___463 ;
  Int tmp___464 ;
  int tmp___465 ;
  SizeT tmp___466 ;
  Int tmp___467 ;
  Char *val___47 ;
  SizeT tmp___468 ;
  Int tmp___469 ;
  int tmp___470 ;
  Int tmp___471 ;
  Int tmp___472 ;
  int tmp___473 ;
  Int tmp___474 ;
  SizeT tmp___475 ;
  Int tmp___476 ;
  int tmp___477 ;
  SizeT tmp___478 ;
  Int tmp___479 ;
  Char *val___48 ;
  SizeT tmp___480 ;
  Int tmp___481 ;
  int tmp___482 ;
  Int tmp___483 ;
  Int tmp___484 ;
  int tmp___485 ;
  Int tmp___486 ;
  SizeT tmp___487 ;
  Int tmp___488 ;
  int tmp___489 ;
  SizeT tmp___490 ;
  Int tmp___491 ;
  Char *val___49 ;
  SizeT tmp___492 ;
  Int tmp___493 ;
  int tmp___494 ;
  Int tmp___495 ;
  Int tmp___496 ;
  int tmp___497 ;
  Int tmp___498 ;
  SizeT tmp___499 ;
  Int tmp___500 ;
  int tmp___501 ;
  SizeT tmp___502 ;
  Int tmp___503 ;
  Char *val___50 ;
  SizeT tmp___504 ;
  Int tmp___505 ;
  int tmp___506 ;
  Int tmp___507 ;
  Int tmp___508 ;
  int tmp___509 ;
  Int tmp___510 ;
  SizeT tmp___511 ;
  Int tmp___512 ;
  int tmp___513 ;
  SizeT tmp___514 ;
  Int tmp___515 ;
  Char *val___51 ;
  SizeT tmp___516 ;
  SizeT tmp___517 ;
  Int tmp___518 ;
  int tmp___519 ;
  SizeT tmp___520 ;
  Int tmp___521 ;
  Char *val___52 ;
  SizeT tmp___522 ;
  Char *s___12 ;
  Long n___12 ;
  Long tmp___523 ;
  SizeT tmp___524 ;
  Int tmp___525 ;
  int tmp___526 ;
  SizeT tmp___527 ;
  Int tmp___528 ;
  Char *val___53 ;
  SizeT tmp___529 ;
  Char *s___13 ;
  Long n___13 ;
  Long tmp___530 ;
  Int tmp___531 ;
  int tmp___532 ;
  Int tmp___533 ;
  Int tmp___534 ;
  int tmp___535 ;
  Int tmp___536 ;
  Int tmp___537 ;
  int tmp___538 ;
  Int tmp___539 ;
  SizeT tmp___540 ;
  Int tmp___541 ;
  int tmp___542 ;
  SizeT tmp___543 ;
  Int tmp___544 ;
  Char *val___54 ;
  SizeT tmp___545 ;
  Int tmp___546 ;
  int tmp___547 ;
  Int tmp___548 ;
  Int tmp___549 ;
  int tmp___550 ;
  Int tmp___551 ;
  SizeT tmp___552 ;
  Int tmp___553 ;
  int tmp___554 ;
  SizeT tmp___555 ;
  Int tmp___556 ;
  Char *val___55 ;
  SizeT tmp___557 ;
  Int tmp___558 ;
  int tmp___559 ;
  Int tmp___560 ;
  Int tmp___561 ;
  int tmp___562 ;
  Int tmp___563 ;
  Int tmp___564 ;
  int tmp___565 ;
  Int tmp___566 ;
  Int tmp___567 ;
  int tmp___568 ;
  Int tmp___569 ;
  Int tmp___570 ;
  int tmp___571 ;
  Int tmp___572 ;
  Int tmp___573 ;
  int tmp___574 ;
  Int tmp___575 ;
  Int tmp___576 ;
  int tmp___577 ;
  Int tmp___578 ;
  Int tmp___579 ;
  int tmp___580 ;
  Int tmp___581 ;
  Int tmp___582 ;
  int tmp___583 ;
  Int tmp___584 ;
  Int tmp___585 ;
  int tmp___586 ;
  Int tmp___587 ;
  Int tmp___588 ;
  int tmp___589 ;
  Int tmp___590 ;
  Int tmp___591 ;
  int tmp___592 ;
  Int tmp___593 ;
  Int tmp___594 ;
  int tmp___595 ;
  Int tmp___596 ;
  Word tmp___597 ;
  long tmp___598 ;
  long tmp___599 ;
  long tmp___600 ;
  long tmp___601 ;
  long tmp___602 ;
  long tmp___603 ;
  long tmp___604 ;
  long tmp___605 ;
  long tmp___606 ;
  Char *logfilename ;
  long tmp___607 ;
  SizeT tmp___608 ;
  int tmp___609 ;
  long tmp___610 ;
  UWord tmp___611 ;
  UWord tmp___612 ;
  HChar const   *tmp___613 ;
  Bool tmp___614 ;
  long tmp___615 ;
  SizeT tmp___616 ;
  int tmp___617 ;
  long tmp___618 ;
  long tmp___619 ;
  long tmp___620 ;
  long tmp___621 ;
  Char *xmlfilename ;
  long tmp___622 ;
  SizeT tmp___623 ;
  int tmp___624 ;
  long tmp___625 ;
  UWord tmp___626 ;
  UWord tmp___627 ;
  HChar const   *tmp___628 ;
  Bool tmp___629 ;
  long tmp___630 ;
  SizeT tmp___631 ;
  int tmp___632 ;
  long tmp___633 ;
  long tmp___634 ;
  long tmp___635 ;
  Int len ;
  SizeT tmp___636 ;
  Char *buf ;
  void *tmp___637 ;
  int tmp___638 ;

  {
  tmp = vgPlain_strlen((Char const   *)toolname);
  toolname_len = (Int )tmp;
  log_to = (enum __anonenum_log_to_135 )0;
  xml_to = (enum __anonenum_log_to_135 )0;
  log_fsname_unexpanded = (Char *)((void *)0);
  xml_fsname_unexpanded = (Char *)((void *)0);
  tmp_log_fd = 2;
  tmp_xml_fd = -1;
  if ((int const   )*("/root/mountpoint-genprog/genprog-many-bugs/valgrind-bug-11821-11822/valgrind/../local-root/lib/valgrind" + 0) != 47) {
    vgPlain_err_config_error((Char *)"Please use absolute paths in ./configure --prefix=... or --libdir=...");
  } else {

  }
  tmp___0 = __builtin_expect((long )(! (! vgPlain_args_for_valgrind)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(args_for_valgrind)",
                        (Char const   *)"m_main.c", 403,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  i = 0;
  while (1) {
    tmp___597 = vgPlain_sizeXA(vgPlain_args_for_valgrind);
    if ((Word )i < tmp___597) {

    } else {
      break;
    }
    tmp___1 = vgPlain_indexXA(vgPlain_args_for_valgrind, (Word )i);
    arg = *((HChar **)tmp___1);
    colon = arg;
    while (1) {
      if (*colon) {
        if ((int )*colon != 58) {
          if ((int )*colon != 61) {

          } else {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
      colon ++;
    }
    if ((int )*colon == 58) {
      if ((unsigned int )arg != (unsigned int )((void *)0)) {
        if ((unsigned int )"--" != (unsigned int )((void *)0)) {
          tmp___5 = vgPlain_strncmp((Char const   *)arg, (Char const   *)"--",
                                    (SizeT )2);
          if (tmp___5 == 0) {
            tmp___4 = (int )((Bool )1);
          } else {
            tmp___4 = (int )((Bool )0);
          }
        } else {
          tmp___4 = (int )((Bool )0);
        }
      } else {
        tmp___4 = (int )((Bool )0);
      }
      if (tmp___4) {
        if ((unsigned int )(arg + 2) != (unsigned int )((void *)0)) {
          if ((unsigned int )toolname != (unsigned int )((void *)0)) {
            tmp___8 = vgPlain_strncmp((Char const   *)(arg + 2),
                                      (Char const   *)toolname,
                                      (SizeT )toolname_len);
            if (tmp___8 == 0) {
              tmp___7 = (int )((Bool )1);
            } else {
              tmp___7 = (int )((Bool )0);
            }
          } else {
            tmp___7 = (int )((Bool )0);
          }
        } else {
          tmp___7 = (int )((Bool )0);
        }
        if (tmp___7) {
          if ((unsigned int )((arg + 2) + toolname_len) != (unsigned int )((void *)0)) {
            if ((unsigned int )":" != (unsigned int )((void *)0)) {
              tmp___11 = vgPlain_strncmp((Char const   *)((arg + 2) + toolname_len),
                                         (Char const   *)":", (SizeT )1);
              if (tmp___11 == 0) {
                tmp___10 = (int )((Bool )1);
              } else {
                tmp___10 = (int )((Bool )0);
              }
            } else {
              tmp___10 = (int )((Bool )0);
            }
          } else {
            tmp___10 = (int )((Bool )0);
          }
          if (tmp___10) {
            tmp___2 = vgPlain_strdup((HChar *)"main.mpclo.1",
                                     (Char const   *)((arg + toolname_len) + 1));
            arg = (HChar *)tmp___2;
            *(arg + 0) = (HChar )'-';
            *(arg + 1) = (HChar )'-';
          } else {
            goto __Cont;
          }
        } else {
          goto __Cont;
        }
      } else {
        goto __Cont;
      }
    } else {

    }
    if ((unsigned int )arg != (unsigned int )((void *)0)) {
      if ((unsigned int )"--tool=" != (unsigned int )((void *)0)) {
        tmp___596 = vgPlain_strncmp((Char const   *)arg,
                                    (Char const   *)"--tool=", (SizeT )7);
        if (tmp___596 == 0) {
          tmp___595 = (int )((Bool )1);
        } else {
          tmp___595 = (int )((Bool )0);
        }
      } else {
        tmp___595 = (int )((Bool )0);
      }
    } else {
      tmp___595 = (int )((Bool )0);
    }
    if (tmp___595) {

    } else {
      if ((unsigned int )arg != (unsigned int )((void *)0)) {
        if ((unsigned int )"--command-line-only=" != (unsigned int )((void *)0)) {
          tmp___593 = vgPlain_strncmp((Char const   *)arg,
                                      (Char const   *)"--command-line-only=",
                                      (SizeT )20);
          if (tmp___593 == 0) {
            tmp___592 = (int )((Bool )1);
          } else {
            tmp___592 = (int )((Bool )0);
          }
        } else {
          tmp___592 = (int )((Bool )0);
        }
      } else {
        tmp___592 = (int )((Bool )0);
      }
      if (tmp___592) {

      } else {
        if ((unsigned int )arg != (unsigned int )((void *)0)) {
          if ((unsigned int )"--" != (unsigned int )((void *)0)) {
            tmp___590 = vgPlain_strcmp((Char const   *)arg, (Char const   *)"--");
            if (tmp___590 == 0) {
              tmp___589 = (int )((Bool )1);
            } else {
              tmp___589 = (int )((Bool )0);
            }
          } else {
            tmp___589 = (int )((Bool )0);
          }
        } else {
          tmp___589 = (int )((Bool )0);
        }
        if (tmp___589) {

        } else {
          if ((unsigned int )arg != (unsigned int )((void *)0)) {
            if ((unsigned int )"-d" != (unsigned int )((void *)0)) {
              tmp___587 = vgPlain_strcmp((Char const   *)arg,
                                         (Char const   *)"-d");
              if (tmp___587 == 0) {
                tmp___586 = (int )((Bool )1);
              } else {
                tmp___586 = (int )((Bool )0);
              }
            } else {
              tmp___586 = (int )((Bool )0);
            }
          } else {
            tmp___586 = (int )((Bool )0);
          }
          if (tmp___586) {

          } else {
            if ((unsigned int )arg != (unsigned int )((void *)0)) {
              if ((unsigned int )"--max-stackframe" != (unsigned int )((void *)0)) {
                tmp___584 = vgPlain_strncmp((Char const   *)arg,
                                            (Char const   *)"--max-stackframe",
                                            (SizeT )16);
                if (tmp___584 == 0) {
                  tmp___583 = (int )((Bool )1);
                } else {
                  tmp___583 = (int )((Bool )0);
                }
              } else {
                tmp___583 = (int )((Bool )0);
              }
            } else {
              tmp___583 = (int )((Bool )0);
            }
            if (tmp___583) {

            } else {
              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                if ((unsigned int )"--main-stacksize" != (unsigned int )((void *)0)) {
                  tmp___581 = vgPlain_strncmp((Char const   *)arg,
                                              (Char const   *)"--main-stacksize",
                                              (SizeT )16);
                  if (tmp___581 == 0) {
                    tmp___580 = (int )((Bool )1);
                  } else {
                    tmp___580 = (int )((Bool )0);
                  }
                } else {
                  tmp___580 = (int )((Bool )0);
                }
              } else {
                tmp___580 = (int )((Bool )0);
              }
              if (tmp___580) {

              } else {
                if ((unsigned int )arg != (unsigned int )((void *)0)) {
                  if ((unsigned int )"--profile-heap" != (unsigned int )((void *)0)) {
                    tmp___578 = vgPlain_strncmp((Char const   *)arg,
                                                (Char const   *)"--profile-heap",
                                                (SizeT )14);
                    if (tmp___578 == 0) {
                      tmp___577 = (int )((Bool )1);
                    } else {
                      tmp___577 = (int )((Bool )0);
                    }
                  } else {
                    tmp___577 = (int )((Bool )0);
                  }
                } else {
                  tmp___577 = (int )((Bool )0);
                }
                if (tmp___577) {

                } else {
                  if ((unsigned int )arg != (unsigned int )((void *)0)) {
                    if ((unsigned int )"-v" != (unsigned int )((void *)0)) {
                      tmp___572 = vgPlain_strcmp((Char const   *)arg,
                                                 (Char const   *)"-v");
                      if (tmp___572 == 0) {
                        tmp___571 = (int )((Bool )1);
                      } else {
                        tmp___571 = (int )((Bool )0);
                      }
                    } else {
                      tmp___571 = (int )((Bool )0);
                    }
                  } else {
                    tmp___571 = (int )((Bool )0);
                  }
                  if (tmp___571) {
                    vgPlain_clo_verbosity ++;
                  } else {
                    if ((unsigned int )arg != (unsigned int )((void *)0)) {
                      if ((unsigned int )"--verbose" != (unsigned int )((void *)0)) {
                        tmp___575 = vgPlain_strcmp((Char const   *)arg,
                                                   (Char const   *)"--verbose");
                        if (tmp___575 == 0) {
                          tmp___574 = (int )((Bool )1);
                        } else {
                          tmp___574 = (int )((Bool )0);
                        }
                      } else {
                        tmp___574 = (int )((Bool )0);
                      }
                    } else {
                      tmp___574 = (int )((Bool )0);
                    }
                    if (tmp___574) {
                      vgPlain_clo_verbosity ++;
                    } else {
                      if ((unsigned int )arg != (unsigned int )((void *)0)) {
                        if ((unsigned int )"-q" != (unsigned int )((void *)0)) {
                          tmp___566 = vgPlain_strcmp((Char const   *)arg,
                                                     (Char const   *)"-q");
                          if (tmp___566 == 0) {
                            tmp___565 = (int )((Bool )1);
                          } else {
                            tmp___565 = (int )((Bool )0);
                          }
                        } else {
                          tmp___565 = (int )((Bool )0);
                        }
                      } else {
                        tmp___565 = (int )((Bool )0);
                      }
                      if (tmp___565) {
                        vgPlain_clo_verbosity --;
                      } else {
                        if ((unsigned int )arg != (unsigned int )((void *)0)) {
                          if ((unsigned int )"--quiet" != (unsigned int )((void *)0)) {
                            tmp___569 = vgPlain_strcmp((Char const   *)arg,
                                                       (Char const   *)"--quiet");
                            if (tmp___569 == 0) {
                              tmp___568 = (int )((Bool )1);
                            } else {
                              tmp___568 = (int )((Bool )0);
                            }
                          } else {
                            tmp___568 = (int )((Bool )0);
                          }
                        } else {
                          tmp___568 = (int )((Bool )0);
                        }
                        if (tmp___568) {
                          vgPlain_clo_verbosity --;
                        } else {
                          if ((unsigned int )arg != (unsigned int )((void *)0)) {
                            if ((unsigned int )"--stats=" != (unsigned int )((void *)0)) {
                              tmp___555 = vgPlain_strlen((Char const   *)"--stats");
                              tmp___556 = vgPlain_strncmp((Char const   *)arg,
                                                          (Char const   *)"--stats=",
                                                          tmp___555 + 1UL);
                              if (tmp___556 == 0) {
                                tmp___554 = (int )((Bool )1);
                              } else {
                                tmp___554 = (int )((Bool )0);
                              }
                            } else {
                              tmp___554 = (int )((Bool )0);
                            }
                          } else {
                            tmp___554 = (int )((Bool )0);
                          }
                          if (tmp___554) {
                            tmp___557 = vgPlain_strlen((Char const   *)"--stats");
                            val___55 = (Char *)(arg + (tmp___557 + 1UL));
                            if ((unsigned int )val___55 != (unsigned int )((void *)0)) {
                              if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                tmp___563 = vgPlain_strcmp((Char const   *)val___55,
                                                           (Char const   *)"yes");
                                if (tmp___563 == 0) {
                                  tmp___562 = (int )((Bool )1);
                                } else {
                                  tmp___562 = (int )((Bool )0);
                                }
                              } else {
                                tmp___562 = (int )((Bool )0);
                              }
                            } else {
                              tmp___562 = (int )((Bool )0);
                            }
                            if (tmp___562) {
                              vgPlain_clo_stats = (Bool )1;
                            } else {
                              if ((unsigned int )val___55 != (unsigned int )((void *)0)) {
                                if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                  tmp___560 = vgPlain_strcmp((Char const   *)val___55,
                                                             (Char const   *)"no");
                                  if (tmp___560 == 0) {
                                    tmp___559 = (int )((Bool )1);
                                  } else {
                                    tmp___559 = (int )((Bool )0);
                                  }
                                } else {
                                  tmp___559 = (int )((Bool )0);
                                }
                              } else {
                                tmp___559 = (int )((Bool )0);
                              }
                              if (tmp___559) {
                                vgPlain_clo_stats = (Bool )0;
                              } else {
                                vgPlain_fmsg_bad_option(arg,
                                                        "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                        val___55);
                              }
                            }
                          } else {
                            _L___68: /* CIL Label */ 
                            if ((unsigned int )arg != (unsigned int )((void *)0)) {
                              if ((unsigned int )"--xml=" != (unsigned int )((void *)0)) {
                                tmp___543 = vgPlain_strlen((Char const   *)"--xml");
                                tmp___544 = vgPlain_strncmp((Char const   *)arg,
                                                            (Char const   *)"--xml=",
                                                            tmp___543 + 1UL);
                                if (tmp___544 == 0) {
                                  tmp___542 = (int )((Bool )1);
                                } else {
                                  tmp___542 = (int )((Bool )0);
                                }
                              } else {
                                tmp___542 = (int )((Bool )0);
                              }
                            } else {
                              tmp___542 = (int )((Bool )0);
                            }
                            if (tmp___542) {
                              tmp___545 = vgPlain_strlen((Char const   *)"--xml");
                              val___54 = (Char *)(arg + (tmp___545 + 1UL));
                              if ((unsigned int )val___54 != (unsigned int )((void *)0)) {
                                if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                  tmp___551 = vgPlain_strcmp((Char const   *)val___54,
                                                             (Char const   *)"yes");
                                  if (tmp___551 == 0) {
                                    tmp___550 = (int )((Bool )1);
                                  } else {
                                    tmp___550 = (int )((Bool )0);
                                  }
                                } else {
                                  tmp___550 = (int )((Bool )0);
                                }
                              } else {
                                tmp___550 = (int )((Bool )0);
                              }
                              if (tmp___550) {
                                vgPlain_clo_xml = (Bool )1;
                              } else {
                                if ((unsigned int )val___54 != (unsigned int )((void *)0)) {
                                  if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                    tmp___548 = vgPlain_strcmp((Char const   *)val___54,
                                                               (Char const   *)"no");
                                    if (tmp___548 == 0) {
                                      tmp___547 = (int )((Bool )1);
                                    } else {
                                      tmp___547 = (int )((Bool )0);
                                    }
                                  } else {
                                    tmp___547 = (int )((Bool )0);
                                  }
                                } else {
                                  tmp___547 = (int )((Bool )0);
                                }
                                if (tmp___547) {
                                  vgPlain_clo_xml = (Bool )0;
                                } else {
                                  vgPlain_fmsg_bad_option(arg,
                                                          "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                          val___54);
                                }
                              }
                            } else {
                              _L___67: /* CIL Label */ 
                              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                if ((unsigned int )"--vgdb=no" != (unsigned int )((void *)0)) {
                                  tmp___539 = vgPlain_strcmp((Char const   *)arg,
                                                             (Char const   *)"--vgdb=no");
                                  if (tmp___539 == 0) {
                                    tmp___538 = (int )((Bool )1);
                                  } else {
                                    tmp___538 = (int )((Bool )0);
                                  }
                                } else {
                                  tmp___538 = (int )((Bool )0);
                                }
                              } else {
                                tmp___538 = (int )((Bool )0);
                              }
                              if (tmp___538) {
                                vgPlain_clo_vgdb = (VgVgdb )0;
                              } else {
                                _L___66: /* CIL Label */ 
                                if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                  if ((unsigned int )"--vgdb=yes" != (unsigned int )((void *)0)) {
                                    tmp___536 = vgPlain_strcmp((Char const   *)arg,
                                                               (Char const   *)"--vgdb=yes");
                                    if (tmp___536 == 0) {
                                      tmp___535 = (int )((Bool )1);
                                    } else {
                                      tmp___535 = (int )((Bool )0);
                                    }
                                  } else {
                                    tmp___535 = (int )((Bool )0);
                                  }
                                } else {
                                  tmp___535 = (int )((Bool )0);
                                }
                                if (tmp___535) {
                                  vgPlain_clo_vgdb = (VgVgdb )1;
                                } else {
                                  _L___65: /* CIL Label */ 
                                  if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                    if ((unsigned int )"--vgdb=full" != (unsigned int )((void *)0)) {
                                      tmp___533 = vgPlain_strcmp((Char const   *)arg,
                                                                 (Char const   *)"--vgdb=full");
                                      if (tmp___533 == 0) {
                                        tmp___532 = (int )((Bool )1);
                                      } else {
                                        tmp___532 = (int )((Bool )0);
                                      }
                                    } else {
                                      tmp___532 = (int )((Bool )0);
                                    }
                                  } else {
                                    tmp___532 = (int )((Bool )0);
                                  }
                                  if (tmp___532) {
                                    vgPlain_clo_vgdb = (VgVgdb )2;
                                  } else {
                                    _L___64: /* CIL Label */ 
                                    if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                      if ((unsigned int )"--vgdb-poll=" != (unsigned int )((void *)0)) {
                                        tmp___527 = vgPlain_strlen((Char const   *)"--vgdb-poll");
                                        tmp___528 = vgPlain_strncmp((Char const   *)arg,
                                                                    (Char const   *)"--vgdb-poll=",
                                                                    tmp___527 + 1UL);
                                        if (tmp___528 == 0) {
                                          tmp___526 = (int )((Bool )1);
                                        } else {
                                          tmp___526 = (int )((Bool )0);
                                        }
                                      } else {
                                        tmp___526 = (int )((Bool )0);
                                      }
                                    } else {
                                      tmp___526 = (int )((Bool )0);
                                    }
                                    if (tmp___526) {
                                      tmp___529 = vgPlain_strlen((Char const   *)"--vgdb-poll");
                                      val___53 = (Char *)(arg + (tmp___529 + 1UL));
                                      tmp___530 = vgPlain_strtoll10(val___53,
                                                                    & s___13);
                                      n___13 = tmp___530;
                                      vgPlain_clo_vgdb_poll = (Int )n___13;
                                      if (0 != (int )*(s___13 + 0)) {
                                        vgPlain_fmsg_bad_option(arg, "");
                                      } else
                                      if ((Long )vgPlain_clo_vgdb_poll != n___13) {
                                        vgPlain_fmsg_bad_option(arg, "");
                                      } else {

                                      }
                                    } else {
                                      _L___63: /* CIL Label */ 
                                      if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                        if ((unsigned int )"--vgdb-error=" != (unsigned int )((void *)0)) {
                                          tmp___520 = vgPlain_strlen((Char const   *)"--vgdb-error");
                                          tmp___521 = vgPlain_strncmp((Char const   *)arg,
                                                                      (Char const   *)"--vgdb-error=",
                                                                      tmp___520 + 1UL);
                                          if (tmp___521 == 0) {
                                            tmp___519 = (int )((Bool )1);
                                          } else {
                                            tmp___519 = (int )((Bool )0);
                                          }
                                        } else {
                                          tmp___519 = (int )((Bool )0);
                                        }
                                      } else {
                                        tmp___519 = (int )((Bool )0);
                                      }
                                      if (tmp___519) {
                                        tmp___522 = vgPlain_strlen((Char const   *)"--vgdb-error");
                                        val___52 = (Char *)(arg + (tmp___522 + 1UL));
                                        tmp___523 = vgPlain_strtoll10(val___52,
                                                                      & s___12);
                                        n___12 = tmp___523;
                                        vgPlain_clo_vgdb_error = (Int )n___12;
                                        if (0 != (int )*(s___12 + 0)) {
                                          vgPlain_fmsg_bad_option(arg, "");
                                        } else
                                        if ((Long )vgPlain_clo_vgdb_error != n___12) {
                                          vgPlain_fmsg_bad_option(arg, "");
                                        } else {

                                        }
                                      } else {
                                        _L___62: /* CIL Label */ 
                                        if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                          if ((unsigned int )"--vgdb-prefix=" != (unsigned int )((void *)0)) {
                                            tmp___514 = vgPlain_strlen((Char const   *)"--vgdb-prefix");
                                            tmp___515 = vgPlain_strncmp((Char const   *)arg,
                                                                        (Char const   *)"--vgdb-prefix=",
                                                                        tmp___514 + 1UL);
                                            if (tmp___515 == 0) {
                                              tmp___513 = (int )((Bool )1);
                                            } else {
                                              tmp___513 = (int )((Bool )0);
                                            }
                                          } else {
                                            tmp___513 = (int )((Bool )0);
                                          }
                                        } else {
                                          tmp___513 = (int )((Bool )0);
                                        }
                                        if (tmp___513) {
                                          tmp___516 = vgPlain_strlen((Char const   *)"--vgdb-prefix");
                                          val___51 = (Char *)(arg + (tmp___516 + 1UL));
                                          vgPlain_clo_vgdb_prefix = val___51;
                                        } else {
                                          _L___61: /* CIL Label */ 
                                          if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                            if ((unsigned int )"--vgdb-shadow-registers=" != (unsigned int )((void *)0)) {
                                              tmp___502 = vgPlain_strlen((Char const   *)"--vgdb-shadow-registers");
                                              tmp___503 = vgPlain_strncmp((Char const   *)arg,
                                                                          (Char const   *)"--vgdb-shadow-registers=",
                                                                          tmp___502 + 1UL);
                                              if (tmp___503 == 0) {
                                                tmp___501 = (int )((Bool )1);
                                              } else {
                                                tmp___501 = (int )((Bool )0);
                                              }
                                            } else {
                                              tmp___501 = (int )((Bool )0);
                                            }
                                          } else {
                                            tmp___501 = (int )((Bool )0);
                                          }
                                          if (tmp___501) {
                                            tmp___504 = vgPlain_strlen((Char const   *)"--vgdb-shadow-registers");
                                            val___50 = (Char *)(arg + (tmp___504 + 1UL));
                                            if ((unsigned int )val___50 != (unsigned int )((void *)0)) {
                                              if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                tmp___510 = vgPlain_strcmp((Char const   *)val___50,
                                                                           (Char const   *)"yes");
                                                if (tmp___510 == 0) {
                                                  tmp___509 = (int )((Bool )1);
                                                } else {
                                                  tmp___509 = (int )((Bool )0);
                                                }
                                              } else {
                                                tmp___509 = (int )((Bool )0);
                                              }
                                            } else {
                                              tmp___509 = (int )((Bool )0);
                                            }
                                            if (tmp___509) {
                                              vgPlain_clo_vgdb_shadow_registers = (Bool )1;
                                            } else {
                                              if ((unsigned int )val___50 != (unsigned int )((void *)0)) {
                                                if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                  tmp___507 = vgPlain_strcmp((Char const   *)val___50,
                                                                             (Char const   *)"no");
                                                  if (tmp___507 == 0) {
                                                    tmp___506 = (int )((Bool )1);
                                                  } else {
                                                    tmp___506 = (int )((Bool )0);
                                                  }
                                                } else {
                                                  tmp___506 = (int )((Bool )0);
                                                }
                                              } else {
                                                tmp___506 = (int )((Bool )0);
                                              }
                                              if (tmp___506) {
                                                vgPlain_clo_vgdb_shadow_registers = (Bool )0;
                                              } else {
                                                vgPlain_fmsg_bad_option(arg,
                                                                        "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                        val___50);
                                              }
                                            }
                                          } else {
                                            _L___60: /* CIL Label */ 
                                            if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                              if ((unsigned int )"--db-attach=" != (unsigned int )((void *)0)) {
                                                tmp___490 = vgPlain_strlen((Char const   *)"--db-attach");
                                                tmp___491 = vgPlain_strncmp((Char const   *)arg,
                                                                            (Char const   *)"--db-attach=",
                                                                            tmp___490 + 1UL);
                                                if (tmp___491 == 0) {
                                                  tmp___489 = (int )((Bool )1);
                                                } else {
                                                  tmp___489 = (int )((Bool )0);
                                                }
                                              } else {
                                                tmp___489 = (int )((Bool )0);
                                              }
                                            } else {
                                              tmp___489 = (int )((Bool )0);
                                            }
                                            if (tmp___489) {
                                              tmp___492 = vgPlain_strlen((Char const   *)"--db-attach");
                                              val___49 = (Char *)(arg + (tmp___492 + 1UL));
                                              if ((unsigned int )val___49 != (unsigned int )((void *)0)) {
                                                if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                  tmp___498 = vgPlain_strcmp((Char const   *)val___49,
                                                                             (Char const   *)"yes");
                                                  if (tmp___498 == 0) {
                                                    tmp___497 = (int )((Bool )1);
                                                  } else {
                                                    tmp___497 = (int )((Bool )0);
                                                  }
                                                } else {
                                                  tmp___497 = (int )((Bool )0);
                                                }
                                              } else {
                                                tmp___497 = (int )((Bool )0);
                                              }
                                              if (tmp___497) {
                                                vgPlain_clo_db_attach = (Bool )1;
                                              } else {
                                                if ((unsigned int )val___49 != (unsigned int )((void *)0)) {
                                                  if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                    tmp___495 = vgPlain_strcmp((Char const   *)val___49,
                                                                               (Char const   *)"no");
                                                    if (tmp___495 == 0) {
                                                      tmp___494 = (int )((Bool )1);
                                                    } else {
                                                      tmp___494 = (int )((Bool )0);
                                                    }
                                                  } else {
                                                    tmp___494 = (int )((Bool )0);
                                                  }
                                                } else {
                                                  tmp___494 = (int )((Bool )0);
                                                }
                                                if (tmp___494) {
                                                  vgPlain_clo_db_attach = (Bool )0;
                                                } else {
                                                  vgPlain_fmsg_bad_option(arg,
                                                                          "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                          val___49);
                                                }
                                              }
                                            } else {
                                              _L___59: /* CIL Label */ 
                                              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                if ((unsigned int )"--demangle=" != (unsigned int )((void *)0)) {
                                                  tmp___478 = vgPlain_strlen((Char const   *)"--demangle");
                                                  tmp___479 = vgPlain_strncmp((Char const   *)arg,
                                                                              (Char const   *)"--demangle=",
                                                                              tmp___478 + 1UL);
                                                  if (tmp___479 == 0) {
                                                    tmp___477 = (int )((Bool )1);
                                                  } else {
                                                    tmp___477 = (int )((Bool )0);
                                                  }
                                                } else {
                                                  tmp___477 = (int )((Bool )0);
                                                }
                                              } else {
                                                tmp___477 = (int )((Bool )0);
                                              }
                                              if (tmp___477) {
                                                tmp___480 = vgPlain_strlen((Char const   *)"--demangle");
                                                val___48 = (Char *)(arg + (tmp___480 + 1UL));
                                                if ((unsigned int )val___48 != (unsigned int )((void *)0)) {
                                                  if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                    tmp___486 = vgPlain_strcmp((Char const   *)val___48,
                                                                               (Char const   *)"yes");
                                                    if (tmp___486 == 0) {
                                                      tmp___485 = (int )((Bool )1);
                                                    } else {
                                                      tmp___485 = (int )((Bool )0);
                                                    }
                                                  } else {
                                                    tmp___485 = (int )((Bool )0);
                                                  }
                                                } else {
                                                  tmp___485 = (int )((Bool )0);
                                                }
                                                if (tmp___485) {
                                                  vgPlain_clo_demangle = (Bool )1;
                                                } else {
                                                  if ((unsigned int )val___48 != (unsigned int )((void *)0)) {
                                                    if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                      tmp___483 = vgPlain_strcmp((Char const   *)val___48,
                                                                                 (Char const   *)"no");
                                                      if (tmp___483 == 0) {
                                                        tmp___482 = (int )((Bool )1);
                                                      } else {
                                                        tmp___482 = (int )((Bool )0);
                                                      }
                                                    } else {
                                                      tmp___482 = (int )((Bool )0);
                                                    }
                                                  } else {
                                                    tmp___482 = (int )((Bool )0);
                                                  }
                                                  if (tmp___482) {
                                                    vgPlain_clo_demangle = (Bool )0;
                                                  } else {
                                                    vgPlain_fmsg_bad_option(arg,
                                                                            "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                            val___48);
                                                  }
                                                }
                                              } else {
                                                _L___58: /* CIL Label */ 
                                                if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                  if ((unsigned int )"--error-limit=" != (unsigned int )((void *)0)) {
                                                    tmp___466 = vgPlain_strlen((Char const   *)"--error-limit");
                                                    tmp___467 = vgPlain_strncmp((Char const   *)arg,
                                                                                (Char const   *)"--error-limit=",
                                                                                tmp___466 + 1UL);
                                                    if (tmp___467 == 0) {
                                                      tmp___465 = (int )((Bool )1);
                                                    } else {
                                                      tmp___465 = (int )((Bool )0);
                                                    }
                                                  } else {
                                                    tmp___465 = (int )((Bool )0);
                                                  }
                                                } else {
                                                  tmp___465 = (int )((Bool )0);
                                                }
                                                if (tmp___465) {
                                                  tmp___468 = vgPlain_strlen((Char const   *)"--error-limit");
                                                  val___47 = (Char *)(arg + (tmp___468 + 1UL));
                                                  if ((unsigned int )val___47 != (unsigned int )((void *)0)) {
                                                    if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                      tmp___474 = vgPlain_strcmp((Char const   *)val___47,
                                                                                 (Char const   *)"yes");
                                                      if (tmp___474 == 0) {
                                                        tmp___473 = (int )((Bool )1);
                                                      } else {
                                                        tmp___473 = (int )((Bool )0);
                                                      }
                                                    } else {
                                                      tmp___473 = (int )((Bool )0);
                                                    }
                                                  } else {
                                                    tmp___473 = (int )((Bool )0);
                                                  }
                                                  if (tmp___473) {
                                                    vgPlain_clo_error_limit = (Bool )1;
                                                  } else {
                                                    if ((unsigned int )val___47 != (unsigned int )((void *)0)) {
                                                      if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                        tmp___471 = vgPlain_strcmp((Char const   *)val___47,
                                                                                   (Char const   *)"no");
                                                        if (tmp___471 == 0) {
                                                          tmp___470 = (int )((Bool )1);
                                                        } else {
                                                          tmp___470 = (int )((Bool )0);
                                                        }
                                                      } else {
                                                        tmp___470 = (int )((Bool )0);
                                                      }
                                                    } else {
                                                      tmp___470 = (int )((Bool )0);
                                                    }
                                                    if (tmp___470) {
                                                      vgPlain_clo_error_limit = (Bool )0;
                                                    } else {
                                                      vgPlain_fmsg_bad_option(arg,
                                                                              "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                              val___47);
                                                    }
                                                  }
                                                } else {
                                                  _L___57: /* CIL Label */ 
                                                  if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                    if ((unsigned int )"--error-exitcode=" != (unsigned int )((void *)0)) {
                                                      tmp___459 = vgPlain_strlen((Char const   *)"--error-exitcode");
                                                      tmp___460 = vgPlain_strncmp((Char const   *)arg,
                                                                                  (Char const   *)"--error-exitcode=",
                                                                                  tmp___459 + 1UL);
                                                      if (tmp___460 == 0) {
                                                        tmp___458 = (int )((Bool )1);
                                                      } else {
                                                        tmp___458 = (int )((Bool )0);
                                                      }
                                                    } else {
                                                      tmp___458 = (int )((Bool )0);
                                                    }
                                                  } else {
                                                    tmp___458 = (int )((Bool )0);
                                                  }
                                                  if (tmp___458) {
                                                    tmp___461 = vgPlain_strlen((Char const   *)"--error-exitcode");
                                                    val___46 = (Char *)(arg + (tmp___461 + 1UL));
                                                    tmp___462 = vgPlain_strtoll10(val___46,
                                                                                  & s___11);
                                                    n___11 = tmp___462;
                                                    vgPlain_clo_error_exitcode = (Int )n___11;
                                                    if (0 != (int )*(s___11 + 0)) {
                                                      vgPlain_fmsg_bad_option(arg,
                                                                              "");
                                                    } else
                                                    if ((Long )vgPlain_clo_error_exitcode != n___11) {
                                                      vgPlain_fmsg_bad_option(arg,
                                                                              "");
                                                    } else {

                                                    }
                                                  } else {
                                                    _L___56: /* CIL Label */ 
                                                    if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                      if ((unsigned int )"--show-emwarns=" != (unsigned int )((void *)0)) {
                                                        tmp___447 = vgPlain_strlen((Char const   *)"--show-emwarns");
                                                        tmp___448 = vgPlain_strncmp((Char const   *)arg,
                                                                                    (Char const   *)"--show-emwarns=",
                                                                                    tmp___447 + 1UL);
                                                        if (tmp___448 == 0) {
                                                          tmp___446 = (int )((Bool )1);
                                                        } else {
                                                          tmp___446 = (int )((Bool )0);
                                                        }
                                                      } else {
                                                        tmp___446 = (int )((Bool )0);
                                                      }
                                                    } else {
                                                      tmp___446 = (int )((Bool )0);
                                                    }
                                                    if (tmp___446) {
                                                      tmp___449 = vgPlain_strlen((Char const   *)"--show-emwarns");
                                                      val___45 = (Char *)(arg + (tmp___449 + 1UL));
                                                      if ((unsigned int )val___45 != (unsigned int )((void *)0)) {
                                                        if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                          tmp___455 = vgPlain_strcmp((Char const   *)val___45,
                                                                                     (Char const   *)"yes");
                                                          if (tmp___455 == 0) {
                                                            tmp___454 = (int )((Bool )1);
                                                          } else {
                                                            tmp___454 = (int )((Bool )0);
                                                          }
                                                        } else {
                                                          tmp___454 = (int )((Bool )0);
                                                        }
                                                      } else {
                                                        tmp___454 = (int )((Bool )0);
                                                      }
                                                      if (tmp___454) {
                                                        vgPlain_clo_show_emwarns = (Bool )1;
                                                      } else {
                                                        if ((unsigned int )val___45 != (unsigned int )((void *)0)) {
                                                          if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                            tmp___452 = vgPlain_strcmp((Char const   *)val___45,
                                                                                       (Char const   *)"no");
                                                            if (tmp___452 == 0) {
                                                              tmp___451 = (int )((Bool )1);
                                                            } else {
                                                              tmp___451 = (int )((Bool )0);
                                                            }
                                                          } else {
                                                            tmp___451 = (int )((Bool )0);
                                                          }
                                                        } else {
                                                          tmp___451 = (int )((Bool )0);
                                                        }
                                                        if (tmp___451) {
                                                          vgPlain_clo_show_emwarns = (Bool )0;
                                                        } else {
                                                          vgPlain_fmsg_bad_option(arg,
                                                                                  "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                  val___45);
                                                        }
                                                      }
                                                    } else {
                                                      _L___55: /* CIL Label */ 
                                                      if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                        if ((unsigned int )"--run-libc-freeres=" != (unsigned int )((void *)0)) {
                                                          tmp___435 = vgPlain_strlen((Char const   *)"--run-libc-freeres");
                                                          tmp___436 = vgPlain_strncmp((Char const   *)arg,
                                                                                      (Char const   *)"--run-libc-freeres=",
                                                                                      tmp___435 + 1UL);
                                                          if (tmp___436 == 0) {
                                                            tmp___434 = (int )((Bool )1);
                                                          } else {
                                                            tmp___434 = (int )((Bool )0);
                                                          }
                                                        } else {
                                                          tmp___434 = (int )((Bool )0);
                                                        }
                                                      } else {
                                                        tmp___434 = (int )((Bool )0);
                                                      }
                                                      if (tmp___434) {
                                                        tmp___437 = vgPlain_strlen((Char const   *)"--run-libc-freeres");
                                                        val___44 = (Char *)(arg + (tmp___437 + 1UL));
                                                        if ((unsigned int )val___44 != (unsigned int )((void *)0)) {
                                                          if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                            tmp___443 = vgPlain_strcmp((Char const   *)val___44,
                                                                                       (Char const   *)"yes");
                                                            if (tmp___443 == 0) {
                                                              tmp___442 = (int )((Bool )1);
                                                            } else {
                                                              tmp___442 = (int )((Bool )0);
                                                            }
                                                          } else {
                                                            tmp___442 = (int )((Bool )0);
                                                          }
                                                        } else {
                                                          tmp___442 = (int )((Bool )0);
                                                        }
                                                        if (tmp___442) {
                                                          vgPlain_clo_run_libc_freeres = (Bool )1;
                                                        } else {
                                                          if ((unsigned int )val___44 != (unsigned int )((void *)0)) {
                                                            if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                              tmp___440 = vgPlain_strcmp((Char const   *)val___44,
                                                                                         (Char const   *)"no");
                                                              if (tmp___440 == 0) {
                                                                tmp___439 = (int )((Bool )1);
                                                              } else {
                                                                tmp___439 = (int )((Bool )0);
                                                              }
                                                            } else {
                                                              tmp___439 = (int )((Bool )0);
                                                            }
                                                          } else {
                                                            tmp___439 = (int )((Bool )0);
                                                          }
                                                          if (tmp___439) {
                                                            vgPlain_clo_run_libc_freeres = (Bool )0;
                                                          } else {
                                                            vgPlain_fmsg_bad_option(arg,
                                                                                    "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                    val___44);
                                                          }
                                                        }
                                                      } else {
                                                        _L___54: /* CIL Label */ 
                                                        if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                          if ((unsigned int )"--show-below-main=" != (unsigned int )((void *)0)) {
                                                            tmp___423 = vgPlain_strlen((Char const   *)"--show-below-main");
                                                            tmp___424 = vgPlain_strncmp((Char const   *)arg,
                                                                                        (Char const   *)"--show-below-main=",
                                                                                        tmp___423 + 1UL);
                                                            if (tmp___424 == 0) {
                                                              tmp___422 = (int )((Bool )1);
                                                            } else {
                                                              tmp___422 = (int )((Bool )0);
                                                            }
                                                          } else {
                                                            tmp___422 = (int )((Bool )0);
                                                          }
                                                        } else {
                                                          tmp___422 = (int )((Bool )0);
                                                        }
                                                        if (tmp___422) {
                                                          tmp___425 = vgPlain_strlen((Char const   *)"--show-below-main");
                                                          val___43 = (Char *)(arg + (tmp___425 + 1UL));
                                                          if ((unsigned int )val___43 != (unsigned int )((void *)0)) {
                                                            if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                              tmp___431 = vgPlain_strcmp((Char const   *)val___43,
                                                                                         (Char const   *)"yes");
                                                              if (tmp___431 == 0) {
                                                                tmp___430 = (int )((Bool )1);
                                                              } else {
                                                                tmp___430 = (int )((Bool )0);
                                                              }
                                                            } else {
                                                              tmp___430 = (int )((Bool )0);
                                                            }
                                                          } else {
                                                            tmp___430 = (int )((Bool )0);
                                                          }
                                                          if (tmp___430) {
                                                            vgPlain_clo_show_below_main = (Bool )1;
                                                          } else {
                                                            if ((unsigned int )val___43 != (unsigned int )((void *)0)) {
                                                              if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                tmp___428 = vgPlain_strcmp((Char const   *)val___43,
                                                                                           (Char const   *)"no");
                                                                if (tmp___428 == 0) {
                                                                  tmp___427 = (int )((Bool )1);
                                                                } else {
                                                                  tmp___427 = (int )((Bool )0);
                                                                }
                                                              } else {
                                                                tmp___427 = (int )((Bool )0);
                                                              }
                                                            } else {
                                                              tmp___427 = (int )((Bool )0);
                                                            }
                                                            if (tmp___427) {
                                                              vgPlain_clo_show_below_main = (Bool )0;
                                                            } else {
                                                              vgPlain_fmsg_bad_option(arg,
                                                                                      "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                      val___43);
                                                            }
                                                          }
                                                        } else {
                                                          _L___53: /* CIL Label */ 
                                                          if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                            if ((unsigned int )"--time-stamp=" != (unsigned int )((void *)0)) {
                                                              tmp___411 = vgPlain_strlen((Char const   *)"--time-stamp");
                                                              tmp___412 = vgPlain_strncmp((Char const   *)arg,
                                                                                          (Char const   *)"--time-stamp=",
                                                                                          tmp___411 + 1UL);
                                                              if (tmp___412 == 0) {
                                                                tmp___410 = (int )((Bool )1);
                                                              } else {
                                                                tmp___410 = (int )((Bool )0);
                                                              }
                                                            } else {
                                                              tmp___410 = (int )((Bool )0);
                                                            }
                                                          } else {
                                                            tmp___410 = (int )((Bool )0);
                                                          }
                                                          if (tmp___410) {
                                                            tmp___413 = vgPlain_strlen((Char const   *)"--time-stamp");
                                                            val___42 = (Char *)(arg + (tmp___413 + 1UL));
                                                            if ((unsigned int )val___42 != (unsigned int )((void *)0)) {
                                                              if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                tmp___419 = vgPlain_strcmp((Char const   *)val___42,
                                                                                           (Char const   *)"yes");
                                                                if (tmp___419 == 0) {
                                                                  tmp___418 = (int )((Bool )1);
                                                                } else {
                                                                  tmp___418 = (int )((Bool )0);
                                                                }
                                                              } else {
                                                                tmp___418 = (int )((Bool )0);
                                                              }
                                                            } else {
                                                              tmp___418 = (int )((Bool )0);
                                                            }
                                                            if (tmp___418) {
                                                              vgPlain_clo_time_stamp = (Bool )1;
                                                            } else {
                                                              if ((unsigned int )val___42 != (unsigned int )((void *)0)) {
                                                                if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                  tmp___416 = vgPlain_strcmp((Char const   *)val___42,
                                                                                             (Char const   *)"no");
                                                                  if (tmp___416 == 0) {
                                                                    tmp___415 = (int )((Bool )1);
                                                                  } else {
                                                                    tmp___415 = (int )((Bool )0);
                                                                  }
                                                                } else {
                                                                  tmp___415 = (int )((Bool )0);
                                                                }
                                                              } else {
                                                                tmp___415 = (int )((Bool )0);
                                                              }
                                                              if (tmp___415) {
                                                                vgPlain_clo_time_stamp = (Bool )0;
                                                              } else {
                                                                vgPlain_fmsg_bad_option(arg,
                                                                                        "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                        val___42);
                                                              }
                                                            }
                                                          } else {
                                                            _L___52: /* CIL Label */ 
                                                            if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                              if ((unsigned int )"--track-fds=" != (unsigned int )((void *)0)) {
                                                                tmp___399 = vgPlain_strlen((Char const   *)"--track-fds");
                                                                tmp___400 = vgPlain_strncmp((Char const   *)arg,
                                                                                            (Char const   *)"--track-fds=",
                                                                                            tmp___399 + 1UL);
                                                                if (tmp___400 == 0) {
                                                                  tmp___398 = (int )((Bool )1);
                                                                } else {
                                                                  tmp___398 = (int )((Bool )0);
                                                                }
                                                              } else {
                                                                tmp___398 = (int )((Bool )0);
                                                              }
                                                            } else {
                                                              tmp___398 = (int )((Bool )0);
                                                            }
                                                            if (tmp___398) {
                                                              tmp___401 = vgPlain_strlen((Char const   *)"--track-fds");
                                                              val___41 = (Char *)(arg + (tmp___401 + 1UL));
                                                              if ((unsigned int )val___41 != (unsigned int )((void *)0)) {
                                                                if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                  tmp___407 = vgPlain_strcmp((Char const   *)val___41,
                                                                                             (Char const   *)"yes");
                                                                  if (tmp___407 == 0) {
                                                                    tmp___406 = (int )((Bool )1);
                                                                  } else {
                                                                    tmp___406 = (int )((Bool )0);
                                                                  }
                                                                } else {
                                                                  tmp___406 = (int )((Bool )0);
                                                                }
                                                              } else {
                                                                tmp___406 = (int )((Bool )0);
                                                              }
                                                              if (tmp___406) {
                                                                vgPlain_clo_track_fds = (Bool )1;
                                                              } else {
                                                                if ((unsigned int )val___41 != (unsigned int )((void *)0)) {
                                                                  if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                    tmp___404 = vgPlain_strcmp((Char const   *)val___41,
                                                                                               (Char const   *)"no");
                                                                    if (tmp___404 == 0) {
                                                                      tmp___403 = (int )((Bool )1);
                                                                    } else {
                                                                      tmp___403 = (int )((Bool )0);
                                                                    }
                                                                  } else {
                                                                    tmp___403 = (int )((Bool )0);
                                                                  }
                                                                } else {
                                                                  tmp___403 = (int )((Bool )0);
                                                                }
                                                                if (tmp___403) {
                                                                  vgPlain_clo_track_fds = (Bool )0;
                                                                } else {
                                                                  vgPlain_fmsg_bad_option(arg,
                                                                                          "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                          val___41);
                                                                }
                                                              }
                                                            } else {
                                                              _L___51: /* CIL Label */ 
                                                              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                if ((unsigned int )"--trace-children=" != (unsigned int )((void *)0)) {
                                                                  tmp___387 = vgPlain_strlen((Char const   *)"--trace-children");
                                                                  tmp___388 = vgPlain_strncmp((Char const   *)arg,
                                                                                              (Char const   *)"--trace-children=",
                                                                                              tmp___387 + 1UL);
                                                                  if (tmp___388 == 0) {
                                                                    tmp___386 = (int )((Bool )1);
                                                                  } else {
                                                                    tmp___386 = (int )((Bool )0);
                                                                  }
                                                                } else {
                                                                  tmp___386 = (int )((Bool )0);
                                                                }
                                                              } else {
                                                                tmp___386 = (int )((Bool )0);
                                                              }
                                                              if (tmp___386) {
                                                                tmp___389 = vgPlain_strlen((Char const   *)"--trace-children");
                                                                val___40 = (Char *)(arg + (tmp___389 + 1UL));
                                                                if ((unsigned int )val___40 != (unsigned int )((void *)0)) {
                                                                  if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                    tmp___395 = vgPlain_strcmp((Char const   *)val___40,
                                                                                               (Char const   *)"yes");
                                                                    if (tmp___395 == 0) {
                                                                      tmp___394 = (int )((Bool )1);
                                                                    } else {
                                                                      tmp___394 = (int )((Bool )0);
                                                                    }
                                                                  } else {
                                                                    tmp___394 = (int )((Bool )0);
                                                                  }
                                                                } else {
                                                                  tmp___394 = (int )((Bool )0);
                                                                }
                                                                if (tmp___394) {
                                                                  vgPlain_clo_trace_children = (Bool )1;
                                                                } else {
                                                                  if ((unsigned int )val___40 != (unsigned int )((void *)0)) {
                                                                    if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                      tmp___392 = vgPlain_strcmp((Char const   *)val___40,
                                                                                                 (Char const   *)"no");
                                                                      if (tmp___392 == 0) {
                                                                        tmp___391 = (int )((Bool )1);
                                                                      } else {
                                                                        tmp___391 = (int )((Bool )0);
                                                                      }
                                                                    } else {
                                                                      tmp___391 = (int )((Bool )0);
                                                                    }
                                                                  } else {
                                                                    tmp___391 = (int )((Bool )0);
                                                                  }
                                                                  if (tmp___391) {
                                                                    vgPlain_clo_trace_children = (Bool )0;
                                                                  } else {
                                                                    vgPlain_fmsg_bad_option(arg,
                                                                                            "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                            val___40);
                                                                  }
                                                                }
                                                              } else {
                                                                _L___50: /* CIL Label */ 
                                                                if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                  if ((unsigned int )"--child-silent-after-fork=" != (unsigned int )((void *)0)) {
                                                                    tmp___375 = vgPlain_strlen((Char const   *)"--child-silent-after-fork");
                                                                    tmp___376 = vgPlain_strncmp((Char const   *)arg,
                                                                                                (Char const   *)"--child-silent-after-fork=",
                                                                                                tmp___375 + 1UL);
                                                                    if (tmp___376 == 0) {
                                                                      tmp___374 = (int )((Bool )1);
                                                                    } else {
                                                                      tmp___374 = (int )((Bool )0);
                                                                    }
                                                                  } else {
                                                                    tmp___374 = (int )((Bool )0);
                                                                  }
                                                                } else {
                                                                  tmp___374 = (int )((Bool )0);
                                                                }
                                                                if (tmp___374) {
                                                                  tmp___377 = vgPlain_strlen((Char const   *)"--child-silent-after-fork");
                                                                  val___39 = (Char *)(arg + (tmp___377 + 1UL));
                                                                  if ((unsigned int )val___39 != (unsigned int )((void *)0)) {
                                                                    if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                      tmp___383 = vgPlain_strcmp((Char const   *)val___39,
                                                                                                 (Char const   *)"yes");
                                                                      if (tmp___383 == 0) {
                                                                        tmp___382 = (int )((Bool )1);
                                                                      } else {
                                                                        tmp___382 = (int )((Bool )0);
                                                                      }
                                                                    } else {
                                                                      tmp___382 = (int )((Bool )0);
                                                                    }
                                                                  } else {
                                                                    tmp___382 = (int )((Bool )0);
                                                                  }
                                                                  if (tmp___382) {
                                                                    vgPlain_clo_child_silent_after_fork = (Bool )1;
                                                                  } else {
                                                                    if ((unsigned int )val___39 != (unsigned int )((void *)0)) {
                                                                      if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                        tmp___380 = vgPlain_strcmp((Char const   *)val___39,
                                                                                                   (Char const   *)"no");
                                                                        if (tmp___380 == 0) {
                                                                          tmp___379 = (int )((Bool )1);
                                                                        } else {
                                                                          tmp___379 = (int )((Bool )0);
                                                                        }
                                                                      } else {
                                                                        tmp___379 = (int )((Bool )0);
                                                                      }
                                                                    } else {
                                                                      tmp___379 = (int )((Bool )0);
                                                                    }
                                                                    if (tmp___379) {
                                                                      vgPlain_clo_child_silent_after_fork = (Bool )0;
                                                                    } else {
                                                                      vgPlain_fmsg_bad_option(arg,
                                                                                              "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                              val___39);
                                                                    }
                                                                  }
                                                                } else {
                                                                  _L___49: /* CIL Label */ 
                                                                  if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                    if ((unsigned int )"--trace-sched=" != (unsigned int )((void *)0)) {
                                                                      tmp___363 = vgPlain_strlen((Char const   *)"--trace-sched");
                                                                      tmp___364 = vgPlain_strncmp((Char const   *)arg,
                                                                                                  (Char const   *)"--trace-sched=",
                                                                                                  tmp___363 + 1UL);
                                                                      if (tmp___364 == 0) {
                                                                        tmp___362 = (int )((Bool )1);
                                                                      } else {
                                                                        tmp___362 = (int )((Bool )0);
                                                                      }
                                                                    } else {
                                                                      tmp___362 = (int )((Bool )0);
                                                                    }
                                                                  } else {
                                                                    tmp___362 = (int )((Bool )0);
                                                                  }
                                                                  if (tmp___362) {
                                                                    tmp___365 = vgPlain_strlen((Char const   *)"--trace-sched");
                                                                    val___38 = (Char *)(arg + (tmp___365 + 1UL));
                                                                    if ((unsigned int )val___38 != (unsigned int )((void *)0)) {
                                                                      if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                        tmp___371 = vgPlain_strcmp((Char const   *)val___38,
                                                                                                   (Char const   *)"yes");
                                                                        if (tmp___371 == 0) {
                                                                          tmp___370 = (int )((Bool )1);
                                                                        } else {
                                                                          tmp___370 = (int )((Bool )0);
                                                                        }
                                                                      } else {
                                                                        tmp___370 = (int )((Bool )0);
                                                                      }
                                                                    } else {
                                                                      tmp___370 = (int )((Bool )0);
                                                                    }
                                                                    if (tmp___370) {
                                                                      vgPlain_clo_trace_sched = (Bool )1;
                                                                    } else {
                                                                      if ((unsigned int )val___38 != (unsigned int )((void *)0)) {
                                                                        if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                          tmp___368 = vgPlain_strcmp((Char const   *)val___38,
                                                                                                     (Char const   *)"no");
                                                                          if (tmp___368 == 0) {
                                                                            tmp___367 = (int )((Bool )1);
                                                                          } else {
                                                                            tmp___367 = (int )((Bool )0);
                                                                          }
                                                                        } else {
                                                                          tmp___367 = (int )((Bool )0);
                                                                        }
                                                                      } else {
                                                                        tmp___367 = (int )((Bool )0);
                                                                      }
                                                                      if (tmp___367) {
                                                                        vgPlain_clo_trace_sched = (Bool )0;
                                                                      } else {
                                                                        vgPlain_fmsg_bad_option(arg,
                                                                                                "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                val___38);
                                                                      }
                                                                    }
                                                                  } else {
                                                                    _L___48: /* CIL Label */ 
                                                                    if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                      if ((unsigned int )"--trace-signals=" != (unsigned int )((void *)0)) {
                                                                        tmp___351 = vgPlain_strlen((Char const   *)"--trace-signals");
                                                                        tmp___352 = vgPlain_strncmp((Char const   *)arg,
                                                                                                    (Char const   *)"--trace-signals=",
                                                                                                    tmp___351 + 1UL);
                                                                        if (tmp___352 == 0) {
                                                                          tmp___350 = (int )((Bool )1);
                                                                        } else {
                                                                          tmp___350 = (int )((Bool )0);
                                                                        }
                                                                      } else {
                                                                        tmp___350 = (int )((Bool )0);
                                                                      }
                                                                    } else {
                                                                      tmp___350 = (int )((Bool )0);
                                                                    }
                                                                    if (tmp___350) {
                                                                      tmp___353 = vgPlain_strlen((Char const   *)"--trace-signals");
                                                                      val___37 = (Char *)(arg + (tmp___353 + 1UL));
                                                                      if ((unsigned int )val___37 != (unsigned int )((void *)0)) {
                                                                        if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                          tmp___359 = vgPlain_strcmp((Char const   *)val___37,
                                                                                                     (Char const   *)"yes");
                                                                          if (tmp___359 == 0) {
                                                                            tmp___358 = (int )((Bool )1);
                                                                          } else {
                                                                            tmp___358 = (int )((Bool )0);
                                                                          }
                                                                        } else {
                                                                          tmp___358 = (int )((Bool )0);
                                                                        }
                                                                      } else {
                                                                        tmp___358 = (int )((Bool )0);
                                                                      }
                                                                      if (tmp___358) {
                                                                        vgPlain_clo_trace_signals = (Bool )1;
                                                                      } else {
                                                                        if ((unsigned int )val___37 != (unsigned int )((void *)0)) {
                                                                          if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                            tmp___356 = vgPlain_strcmp((Char const   *)val___37,
                                                                                                       (Char const   *)"no");
                                                                            if (tmp___356 == 0) {
                                                                              tmp___355 = (int )((Bool )1);
                                                                            } else {
                                                                              tmp___355 = (int )((Bool )0);
                                                                            }
                                                                          } else {
                                                                            tmp___355 = (int )((Bool )0);
                                                                          }
                                                                        } else {
                                                                          tmp___355 = (int )((Bool )0);
                                                                        }
                                                                        if (tmp___355) {
                                                                          vgPlain_clo_trace_signals = (Bool )0;
                                                                        } else {
                                                                          vgPlain_fmsg_bad_option(arg,
                                                                                                  "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                  val___37);
                                                                        }
                                                                      }
                                                                    } else {
                                                                      _L___47: /* CIL Label */ 
                                                                      if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                        if ((unsigned int )"--trace-symtab=" != (unsigned int )((void *)0)) {
                                                                          tmp___339 = vgPlain_strlen((Char const   *)"--trace-symtab");
                                                                          tmp___340 = vgPlain_strncmp((Char const   *)arg,
                                                                                                      (Char const   *)"--trace-symtab=",
                                                                                                      tmp___339 + 1UL);
                                                                          if (tmp___340 == 0) {
                                                                            tmp___338 = (int )((Bool )1);
                                                                          } else {
                                                                            tmp___338 = (int )((Bool )0);
                                                                          }
                                                                        } else {
                                                                          tmp___338 = (int )((Bool )0);
                                                                        }
                                                                      } else {
                                                                        tmp___338 = (int )((Bool )0);
                                                                      }
                                                                      if (tmp___338) {
                                                                        tmp___341 = vgPlain_strlen((Char const   *)"--trace-symtab");
                                                                        val___36 = (Char *)(arg + (tmp___341 + 1UL));
                                                                        if ((unsigned int )val___36 != (unsigned int )((void *)0)) {
                                                                          if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                            tmp___347 = vgPlain_strcmp((Char const   *)val___36,
                                                                                                       (Char const   *)"yes");
                                                                            if (tmp___347 == 0) {
                                                                              tmp___346 = (int )((Bool )1);
                                                                            } else {
                                                                              tmp___346 = (int )((Bool )0);
                                                                            }
                                                                          } else {
                                                                            tmp___346 = (int )((Bool )0);
                                                                          }
                                                                        } else {
                                                                          tmp___346 = (int )((Bool )0);
                                                                        }
                                                                        if (tmp___346) {
                                                                          vgPlain_clo_trace_symtab = (Bool )1;
                                                                        } else {
                                                                          if ((unsigned int )val___36 != (unsigned int )((void *)0)) {
                                                                            if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                              tmp___344 = vgPlain_strcmp((Char const   *)val___36,
                                                                                                         (Char const   *)"no");
                                                                              if (tmp___344 == 0) {
                                                                                tmp___343 = (int )((Bool )1);
                                                                              } else {
                                                                                tmp___343 = (int )((Bool )0);
                                                                              }
                                                                            } else {
                                                                              tmp___343 = (int )((Bool )0);
                                                                            }
                                                                          } else {
                                                                            tmp___343 = (int )((Bool )0);
                                                                          }
                                                                          if (tmp___343) {
                                                                            vgPlain_clo_trace_symtab = (Bool )0;
                                                                          } else {
                                                                            vgPlain_fmsg_bad_option(arg,
                                                                                                    "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                    val___36);
                                                                          }
                                                                        }
                                                                      } else {
                                                                        _L___46: /* CIL Label */ 
                                                                        if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                          if ((unsigned int )"--trace-symtab-patt=" != (unsigned int )((void *)0)) {
                                                                            tmp___333 = vgPlain_strlen((Char const   *)"--trace-symtab-patt");
                                                                            tmp___334 = vgPlain_strncmp((Char const   *)arg,
                                                                                                        (Char const   *)"--trace-symtab-patt=",
                                                                                                        tmp___333 + 1UL);
                                                                            if (tmp___334 == 0) {
                                                                              tmp___332 = (int )((Bool )1);
                                                                            } else {
                                                                              tmp___332 = (int )((Bool )0);
                                                                            }
                                                                          } else {
                                                                            tmp___332 = (int )((Bool )0);
                                                                          }
                                                                        } else {
                                                                          tmp___332 = (int )((Bool )0);
                                                                        }
                                                                        if (tmp___332) {
                                                                          tmp___335 = vgPlain_strlen((Char const   *)"--trace-symtab-patt");
                                                                          val___35 = (Char *)(arg + (tmp___335 + 1UL));
                                                                          vgPlain_clo_trace_symtab_patt = (HChar *)val___35;
                                                                        } else {
                                                                          _L___45: /* CIL Label */ 
                                                                          if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                            if ((unsigned int )"--trace-cfi=" != (unsigned int )((void *)0)) {
                                                                              tmp___321 = vgPlain_strlen((Char const   *)"--trace-cfi");
                                                                              tmp___322 = vgPlain_strncmp((Char const   *)arg,
                                                                                                          (Char const   *)"--trace-cfi=",
                                                                                                          tmp___321 + 1UL);
                                                                              if (tmp___322 == 0) {
                                                                                tmp___320 = (int )((Bool )1);
                                                                              } else {
                                                                                tmp___320 = (int )((Bool )0);
                                                                              }
                                                                            } else {
                                                                              tmp___320 = (int )((Bool )0);
                                                                            }
                                                                          } else {
                                                                            tmp___320 = (int )((Bool )0);
                                                                          }
                                                                          if (tmp___320) {
                                                                            tmp___323 = vgPlain_strlen((Char const   *)"--trace-cfi");
                                                                            val___34 = (Char *)(arg + (tmp___323 + 1UL));
                                                                            if ((unsigned int )val___34 != (unsigned int )((void *)0)) {
                                                                              if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                                tmp___329 = vgPlain_strcmp((Char const   *)val___34,
                                                                                                           (Char const   *)"yes");
                                                                                if (tmp___329 == 0) {
                                                                                  tmp___328 = (int )((Bool )1);
                                                                                } else {
                                                                                  tmp___328 = (int )((Bool )0);
                                                                                }
                                                                              } else {
                                                                                tmp___328 = (int )((Bool )0);
                                                                              }
                                                                            } else {
                                                                              tmp___328 = (int )((Bool )0);
                                                                            }
                                                                            if (tmp___328) {
                                                                              vgPlain_clo_trace_cfi = (Bool )1;
                                                                            } else {
                                                                              if ((unsigned int )val___34 != (unsigned int )((void *)0)) {
                                                                                if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                                  tmp___326 = vgPlain_strcmp((Char const   *)val___34,
                                                                                                             (Char const   *)"no");
                                                                                  if (tmp___326 == 0) {
                                                                                    tmp___325 = (int )((Bool )1);
                                                                                  } else {
                                                                                    tmp___325 = (int )((Bool )0);
                                                                                  }
                                                                                } else {
                                                                                  tmp___325 = (int )((Bool )0);
                                                                                }
                                                                              } else {
                                                                                tmp___325 = (int )((Bool )0);
                                                                              }
                                                                              if (tmp___325) {
                                                                                vgPlain_clo_trace_cfi = (Bool )0;
                                                                              } else {
                                                                                vgPlain_fmsg_bad_option(arg,
                                                                                                        "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                        val___34);
                                                                              }
                                                                            }
                                                                          } else {
                                                                            _L___44: /* CIL Label */ 
                                                                            if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                              if ((unsigned int )"--debug-dump=syms" != (unsigned int )((void *)0)) {
                                                                                tmp___317 = vgPlain_strcmp((Char const   *)arg,
                                                                                                           (Char const   *)"--debug-dump=syms");
                                                                                if (tmp___317 == 0) {
                                                                                  tmp___316 = (int )((Bool )1);
                                                                                } else {
                                                                                  tmp___316 = (int )((Bool )0);
                                                                                }
                                                                              } else {
                                                                                tmp___316 = (int )((Bool )0);
                                                                              }
                                                                            } else {
                                                                              tmp___316 = (int )((Bool )0);
                                                                            }
                                                                            if (tmp___316) {
                                                                              vgPlain_clo_debug_dump_syms = (Bool )1;
                                                                            } else {
                                                                              _L___43: /* CIL Label */ 
                                                                              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                if ((unsigned int )"--debug-dump=line" != (unsigned int )((void *)0)) {
                                                                                  tmp___314 = vgPlain_strcmp((Char const   *)arg,
                                                                                                             (Char const   *)"--debug-dump=line");
                                                                                  if (tmp___314 == 0) {
                                                                                    tmp___313 = (int )((Bool )1);
                                                                                  } else {
                                                                                    tmp___313 = (int )((Bool )0);
                                                                                  }
                                                                                } else {
                                                                                  tmp___313 = (int )((Bool )0);
                                                                                }
                                                                              } else {
                                                                                tmp___313 = (int )((Bool )0);
                                                                              }
                                                                              if (tmp___313) {
                                                                                vgPlain_clo_debug_dump_line = (Bool )1;
                                                                              } else {
                                                                                _L___42: /* CIL Label */ 
                                                                                if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                  if ((unsigned int )"--debug-dump=frames" != (unsigned int )((void *)0)) {
                                                                                    tmp___311 = vgPlain_strcmp((Char const   *)arg,
                                                                                                               (Char const   *)"--debug-dump=frames");
                                                                                    if (tmp___311 == 0) {
                                                                                      tmp___310 = (int )((Bool )1);
                                                                                    } else {
                                                                                      tmp___310 = (int )((Bool )0);
                                                                                    }
                                                                                  } else {
                                                                                    tmp___310 = (int )((Bool )0);
                                                                                  }
                                                                                } else {
                                                                                  tmp___310 = (int )((Bool )0);
                                                                                }
                                                                                if (tmp___310) {
                                                                                  vgPlain_clo_debug_dump_frames = (Bool )1;
                                                                                } else {
                                                                                  _L___41: /* CIL Label */ 
                                                                                  if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                    if ((unsigned int )"--trace-redir=" != (unsigned int )((void *)0)) {
                                                                                      tmp___300 = vgPlain_strlen((Char const   *)"--trace-redir");
                                                                                      tmp___301 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                  (Char const   *)"--trace-redir=",
                                                                                                                  tmp___300 + 1UL);
                                                                                      if (tmp___301 == 0) {
                                                                                        tmp___299 = (int )((Bool )1);
                                                                                      } else {
                                                                                        tmp___299 = (int )((Bool )0);
                                                                                      }
                                                                                    } else {
                                                                                      tmp___299 = (int )((Bool )0);
                                                                                    }
                                                                                  } else {
                                                                                    tmp___299 = (int )((Bool )0);
                                                                                  }
                                                                                  if (tmp___299) {
                                                                                    tmp___302 = vgPlain_strlen((Char const   *)"--trace-redir");
                                                                                    val___33 = (Char *)(arg + (tmp___302 + 1UL));
                                                                                    if ((unsigned int )val___33 != (unsigned int )((void *)0)) {
                                                                                      if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                                        tmp___308 = vgPlain_strcmp((Char const   *)val___33,
                                                                                                                   (Char const   *)"yes");
                                                                                        if (tmp___308 == 0) {
                                                                                          tmp___307 = (int )((Bool )1);
                                                                                        } else {
                                                                                          tmp___307 = (int )((Bool )0);
                                                                                        }
                                                                                      } else {
                                                                                        tmp___307 = (int )((Bool )0);
                                                                                      }
                                                                                    } else {
                                                                                      tmp___307 = (int )((Bool )0);
                                                                                    }
                                                                                    if (tmp___307) {
                                                                                      vgPlain_clo_trace_redir = (Bool )1;
                                                                                    } else {
                                                                                      if ((unsigned int )val___33 != (unsigned int )((void *)0)) {
                                                                                        if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                                          tmp___305 = vgPlain_strcmp((Char const   *)val___33,
                                                                                                                     (Char const   *)"no");
                                                                                          if (tmp___305 == 0) {
                                                                                            tmp___304 = (int )((Bool )1);
                                                                                          } else {
                                                                                            tmp___304 = (int )((Bool )0);
                                                                                          }
                                                                                        } else {
                                                                                          tmp___304 = (int )((Bool )0);
                                                                                        }
                                                                                      } else {
                                                                                        tmp___304 = (int )((Bool )0);
                                                                                      }
                                                                                      if (tmp___304) {
                                                                                        vgPlain_clo_trace_redir = (Bool )0;
                                                                                      } else {
                                                                                        vgPlain_fmsg_bad_option(arg,
                                                                                                                "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                                val___33);
                                                                                      }
                                                                                    }
                                                                                  } else {
                                                                                    _L___40: /* CIL Label */ 
                                                                                    if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                      if ((unsigned int )"--trace-syscalls=" != (unsigned int )((void *)0)) {
                                                                                        tmp___288 = vgPlain_strlen((Char const   *)"--trace-syscalls");
                                                                                        tmp___289 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                    (Char const   *)"--trace-syscalls=",
                                                                                                                    tmp___288 + 1UL);
                                                                                        if (tmp___289 == 0) {
                                                                                          tmp___287 = (int )((Bool )1);
                                                                                        } else {
                                                                                          tmp___287 = (int )((Bool )0);
                                                                                        }
                                                                                      } else {
                                                                                        tmp___287 = (int )((Bool )0);
                                                                                      }
                                                                                    } else {
                                                                                      tmp___287 = (int )((Bool )0);
                                                                                    }
                                                                                    if (tmp___287) {
                                                                                      tmp___290 = vgPlain_strlen((Char const   *)"--trace-syscalls");
                                                                                      val___32 = (Char *)(arg + (tmp___290 + 1UL));
                                                                                      if ((unsigned int )val___32 != (unsigned int )((void *)0)) {
                                                                                        if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                                          tmp___296 = vgPlain_strcmp((Char const   *)val___32,
                                                                                                                     (Char const   *)"yes");
                                                                                          if (tmp___296 == 0) {
                                                                                            tmp___295 = (int )((Bool )1);
                                                                                          } else {
                                                                                            tmp___295 = (int )((Bool )0);
                                                                                          }
                                                                                        } else {
                                                                                          tmp___295 = (int )((Bool )0);
                                                                                        }
                                                                                      } else {
                                                                                        tmp___295 = (int )((Bool )0);
                                                                                      }
                                                                                      if (tmp___295) {
                                                                                        vgPlain_clo_trace_syscalls = (Bool )1;
                                                                                      } else {
                                                                                        if ((unsigned int )val___32 != (unsigned int )((void *)0)) {
                                                                                          if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                                            tmp___293 = vgPlain_strcmp((Char const   *)val___32,
                                                                                                                       (Char const   *)"no");
                                                                                            if (tmp___293 == 0) {
                                                                                              tmp___292 = (int )((Bool )1);
                                                                                            } else {
                                                                                              tmp___292 = (int )((Bool )0);
                                                                                            }
                                                                                          } else {
                                                                                            tmp___292 = (int )((Bool )0);
                                                                                          }
                                                                                        } else {
                                                                                          tmp___292 = (int )((Bool )0);
                                                                                        }
                                                                                        if (tmp___292) {
                                                                                          vgPlain_clo_trace_syscalls = (Bool )0;
                                                                                        } else {
                                                                                          vgPlain_fmsg_bad_option(arg,
                                                                                                                  "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                                  val___32);
                                                                                        }
                                                                                      }
                                                                                    } else {
                                                                                      _L___39: /* CIL Label */ 
                                                                                      if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                        if ((unsigned int )"--wait-for-gdb=" != (unsigned int )((void *)0)) {
                                                                                          tmp___276 = vgPlain_strlen((Char const   *)"--wait-for-gdb");
                                                                                          tmp___277 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                      (Char const   *)"--wait-for-gdb=",
                                                                                                                      tmp___276 + 1UL);
                                                                                          if (tmp___277 == 0) {
                                                                                            tmp___275 = (int )((Bool )1);
                                                                                          } else {
                                                                                            tmp___275 = (int )((Bool )0);
                                                                                          }
                                                                                        } else {
                                                                                          tmp___275 = (int )((Bool )0);
                                                                                        }
                                                                                      } else {
                                                                                        tmp___275 = (int )((Bool )0);
                                                                                      }
                                                                                      if (tmp___275) {
                                                                                        tmp___278 = vgPlain_strlen((Char const   *)"--wait-for-gdb");
                                                                                        val___31 = (Char *)(arg + (tmp___278 + 1UL));
                                                                                        if ((unsigned int )val___31 != (unsigned int )((void *)0)) {
                                                                                          if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                                            tmp___284 = vgPlain_strcmp((Char const   *)val___31,
                                                                                                                       (Char const   *)"yes");
                                                                                            if (tmp___284 == 0) {
                                                                                              tmp___283 = (int )((Bool )1);
                                                                                            } else {
                                                                                              tmp___283 = (int )((Bool )0);
                                                                                            }
                                                                                          } else {
                                                                                            tmp___283 = (int )((Bool )0);
                                                                                          }
                                                                                        } else {
                                                                                          tmp___283 = (int )((Bool )0);
                                                                                        }
                                                                                        if (tmp___283) {
                                                                                          vgPlain_clo_wait_for_gdb = (Bool )1;
                                                                                        } else {
                                                                                          if ((unsigned int )val___31 != (unsigned int )((void *)0)) {
                                                                                            if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                                              tmp___281 = vgPlain_strcmp((Char const   *)val___31,
                                                                                                                         (Char const   *)"no");
                                                                                              if (tmp___281 == 0) {
                                                                                                tmp___280 = (int )((Bool )1);
                                                                                              } else {
                                                                                                tmp___280 = (int )((Bool )0);
                                                                                              }
                                                                                            } else {
                                                                                              tmp___280 = (int )((Bool )0);
                                                                                            }
                                                                                          } else {
                                                                                            tmp___280 = (int )((Bool )0);
                                                                                          }
                                                                                          if (tmp___280) {
                                                                                            vgPlain_clo_wait_for_gdb = (Bool )0;
                                                                                          } else {
                                                                                            vgPlain_fmsg_bad_option(arg,
                                                                                                                    "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                                    val___31);
                                                                                          }
                                                                                        }
                                                                                      } else {
                                                                                        _L___38: /* CIL Label */ 
                                                                                        if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                          if ((unsigned int )"--db-command=" != (unsigned int )((void *)0)) {
                                                                                            tmp___270 = vgPlain_strlen((Char const   *)"--db-command");
                                                                                            tmp___271 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                        (Char const   *)"--db-command=",
                                                                                                                        tmp___270 + 1UL);
                                                                                            if (tmp___271 == 0) {
                                                                                              tmp___269 = (int )((Bool )1);
                                                                                            } else {
                                                                                              tmp___269 = (int )((Bool )0);
                                                                                            }
                                                                                          } else {
                                                                                            tmp___269 = (int )((Bool )0);
                                                                                          }
                                                                                        } else {
                                                                                          tmp___269 = (int )((Bool )0);
                                                                                        }
                                                                                        if (tmp___269) {
                                                                                          tmp___272 = vgPlain_strlen((Char const   *)"--db-command");
                                                                                          val___30 = (Char *)(arg + (tmp___272 + 1UL));
                                                                                          vgPlain_clo_db_command = val___30;
                                                                                        } else {
                                                                                          _L___37: /* CIL Label */ 
                                                                                          if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                            if ((unsigned int )"--sim-hints=" != (unsigned int )((void *)0)) {
                                                                                              tmp___264 = vgPlain_strlen((Char const   *)"--sim-hints");
                                                                                              tmp___265 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                          (Char const   *)"--sim-hints=",
                                                                                                                          tmp___264 + 1UL);
                                                                                              if (tmp___265 == 0) {
                                                                                                tmp___263 = (int )((Bool )1);
                                                                                              } else {
                                                                                                tmp___263 = (int )((Bool )0);
                                                                                              }
                                                                                            } else {
                                                                                              tmp___263 = (int )((Bool )0);
                                                                                            }
                                                                                          } else {
                                                                                            tmp___263 = (int )((Bool )0);
                                                                                          }
                                                                                          if (tmp___263) {
                                                                                            tmp___266 = vgPlain_strlen((Char const   *)"--sim-hints");
                                                                                            val___29 = (Char *)(arg + (tmp___266 + 1UL));
                                                                                            vgPlain_clo_sim_hints = val___29;
                                                                                          } else {
                                                                                            _L___36: /* CIL Label */ 
                                                                                            if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                              if ((unsigned int )"--sym-offsets=" != (unsigned int )((void *)0)) {
                                                                                                tmp___252 = vgPlain_strlen((Char const   *)"--sym-offsets");
                                                                                                tmp___253 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                            (Char const   *)"--sym-offsets=",
                                                                                                                            tmp___252 + 1UL);
                                                                                                if (tmp___253 == 0) {
                                                                                                  tmp___251 = (int )((Bool )1);
                                                                                                } else {
                                                                                                  tmp___251 = (int )((Bool )0);
                                                                                                }
                                                                                              } else {
                                                                                                tmp___251 = (int )((Bool )0);
                                                                                              }
                                                                                            } else {
                                                                                              tmp___251 = (int )((Bool )0);
                                                                                            }
                                                                                            if (tmp___251) {
                                                                                              tmp___254 = vgPlain_strlen((Char const   *)"--sym-offsets");
                                                                                              val___28 = (Char *)(arg + (tmp___254 + 1UL));
                                                                                              if ((unsigned int )val___28 != (unsigned int )((void *)0)) {
                                                                                                if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                                                  tmp___260 = vgPlain_strcmp((Char const   *)val___28,
                                                                                                                             (Char const   *)"yes");
                                                                                                  if (tmp___260 == 0) {
                                                                                                    tmp___259 = (int )((Bool )1);
                                                                                                  } else {
                                                                                                    tmp___259 = (int )((Bool )0);
                                                                                                  }
                                                                                                } else {
                                                                                                  tmp___259 = (int )((Bool )0);
                                                                                                }
                                                                                              } else {
                                                                                                tmp___259 = (int )((Bool )0);
                                                                                              }
                                                                                              if (tmp___259) {
                                                                                                vgPlain_clo_sym_offsets = (Bool )1;
                                                                                              } else {
                                                                                                if ((unsigned int )val___28 != (unsigned int )((void *)0)) {
                                                                                                  if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                                                    tmp___257 = vgPlain_strcmp((Char const   *)val___28,
                                                                                                                               (Char const   *)"no");
                                                                                                    if (tmp___257 == 0) {
                                                                                                      tmp___256 = (int )((Bool )1);
                                                                                                    } else {
                                                                                                      tmp___256 = (int )((Bool )0);
                                                                                                    }
                                                                                                  } else {
                                                                                                    tmp___256 = (int )((Bool )0);
                                                                                                  }
                                                                                                } else {
                                                                                                  tmp___256 = (int )((Bool )0);
                                                                                                }
                                                                                                if (tmp___256) {
                                                                                                  vgPlain_clo_sym_offsets = (Bool )0;
                                                                                                } else {
                                                                                                  vgPlain_fmsg_bad_option(arg,
                                                                                                                          "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                                          val___28);
                                                                                                }
                                                                                              }
                                                                                            } else {
                                                                                              _L___35: /* CIL Label */ 
                                                                                              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                if ((unsigned int )"--read-var-info=" != (unsigned int )((void *)0)) {
                                                                                                  tmp___240 = vgPlain_strlen((Char const   *)"--read-var-info");
                                                                                                  tmp___241 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                              (Char const   *)"--read-var-info=",
                                                                                                                              tmp___240 + 1UL);
                                                                                                  if (tmp___241 == 0) {
                                                                                                    tmp___239 = (int )((Bool )1);
                                                                                                  } else {
                                                                                                    tmp___239 = (int )((Bool )0);
                                                                                                  }
                                                                                                } else {
                                                                                                  tmp___239 = (int )((Bool )0);
                                                                                                }
                                                                                              } else {
                                                                                                tmp___239 = (int )((Bool )0);
                                                                                              }
                                                                                              if (tmp___239) {
                                                                                                tmp___242 = vgPlain_strlen((Char const   *)"--read-var-info");
                                                                                                val___27 = (Char *)(arg + (tmp___242 + 1UL));
                                                                                                if ((unsigned int )val___27 != (unsigned int )((void *)0)) {
                                                                                                  if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                                                    tmp___248 = vgPlain_strcmp((Char const   *)val___27,
                                                                                                                               (Char const   *)"yes");
                                                                                                    if (tmp___248 == 0) {
                                                                                                      tmp___247 = (int )((Bool )1);
                                                                                                    } else {
                                                                                                      tmp___247 = (int )((Bool )0);
                                                                                                    }
                                                                                                  } else {
                                                                                                    tmp___247 = (int )((Bool )0);
                                                                                                  }
                                                                                                } else {
                                                                                                  tmp___247 = (int )((Bool )0);
                                                                                                }
                                                                                                if (tmp___247) {
                                                                                                  vgPlain_clo_read_var_info = (Bool )1;
                                                                                                } else {
                                                                                                  if ((unsigned int )val___27 != (unsigned int )((void *)0)) {
                                                                                                    if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                                                      tmp___245 = vgPlain_strcmp((Char const   *)val___27,
                                                                                                                                 (Char const   *)"no");
                                                                                                      if (tmp___245 == 0) {
                                                                                                        tmp___244 = (int )((Bool )1);
                                                                                                      } else {
                                                                                                        tmp___244 = (int )((Bool )0);
                                                                                                      }
                                                                                                    } else {
                                                                                                      tmp___244 = (int )((Bool )0);
                                                                                                    }
                                                                                                  } else {
                                                                                                    tmp___244 = (int )((Bool )0);
                                                                                                  }
                                                                                                  if (tmp___244) {
                                                                                                    vgPlain_clo_read_var_info = (Bool )0;
                                                                                                  } else {
                                                                                                    vgPlain_fmsg_bad_option(arg,
                                                                                                                            "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                                            val___27);
                                                                                                  }
                                                                                                }
                                                                                              } else {
                                                                                                _L___34: /* CIL Label */ 
                                                                                                if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                  if ((unsigned int )"--dump-error=" != (unsigned int )((void *)0)) {
                                                                                                    tmp___233 = vgPlain_strlen((Char const   *)"--dump-error");
                                                                                                    tmp___234 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                (Char const   *)"--dump-error=",
                                                                                                                                tmp___233 + 1UL);
                                                                                                    if (tmp___234 == 0) {
                                                                                                      tmp___232 = (int )((Bool )1);
                                                                                                    } else {
                                                                                                      tmp___232 = (int )((Bool )0);
                                                                                                    }
                                                                                                  } else {
                                                                                                    tmp___232 = (int )((Bool )0);
                                                                                                  }
                                                                                                } else {
                                                                                                  tmp___232 = (int )((Bool )0);
                                                                                                }
                                                                                                if (tmp___232) {
                                                                                                  tmp___235 = vgPlain_strlen((Char const   *)"--dump-error");
                                                                                                  val___26 = (Char *)(arg + (tmp___235 + 1UL));
                                                                                                  tmp___236 = vgPlain_strtoll10(val___26,
                                                                                                                                & s___10);
                                                                                                  n___10 = tmp___236;
                                                                                                  vgPlain_clo_dump_error = (Int )n___10;
                                                                                                  if (0 != (int )*(s___10 + 0)) {
                                                                                                    vgPlain_fmsg_bad_option(arg,
                                                                                                                            "");
                                                                                                  } else
                                                                                                  if ((Long )vgPlain_clo_dump_error != n___10) {
                                                                                                    vgPlain_fmsg_bad_option(arg,
                                                                                                                            "");
                                                                                                  } else {

                                                                                                  }
                                                                                                } else {
                                                                                                  _L___33: /* CIL Label */ 
                                                                                                  if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                    if ((unsigned int )"--input-fd=" != (unsigned int )((void *)0)) {
                                                                                                      tmp___226 = vgPlain_strlen((Char const   *)"--input-fd");
                                                                                                      tmp___227 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                  (Char const   *)"--input-fd=",
                                                                                                                                  tmp___226 + 1UL);
                                                                                                      if (tmp___227 == 0) {
                                                                                                        tmp___225 = (int )((Bool )1);
                                                                                                      } else {
                                                                                                        tmp___225 = (int )((Bool )0);
                                                                                                      }
                                                                                                    } else {
                                                                                                      tmp___225 = (int )((Bool )0);
                                                                                                    }
                                                                                                  } else {
                                                                                                    tmp___225 = (int )((Bool )0);
                                                                                                  }
                                                                                                  if (tmp___225) {
                                                                                                    tmp___228 = vgPlain_strlen((Char const   *)"--input-fd");
                                                                                                    val___25 = (Char *)(arg + (tmp___228 + 1UL));
                                                                                                    tmp___229 = vgPlain_strtoll10(val___25,
                                                                                                                                  & s___9);
                                                                                                    n___9 = tmp___229;
                                                                                                    vgPlain_clo_input_fd = (Int )n___9;
                                                                                                    if (0 != (int )*(s___9 + 0)) {
                                                                                                      vgPlain_fmsg_bad_option(arg,
                                                                                                                              "");
                                                                                                    } else
                                                                                                    if ((Long )vgPlain_clo_input_fd != n___9) {
                                                                                                      vgPlain_fmsg_bad_option(arg,
                                                                                                                              "");
                                                                                                    } else {

                                                                                                    }
                                                                                                  } else {
                                                                                                    _L___32: /* CIL Label */ 
                                                                                                    if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                      if ((unsigned int )"--sanity-level=" != (unsigned int )((void *)0)) {
                                                                                                        tmp___219 = vgPlain_strlen((Char const   *)"--sanity-level");
                                                                                                        tmp___220 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                    (Char const   *)"--sanity-level=",
                                                                                                                                    tmp___219 + 1UL);
                                                                                                        if (tmp___220 == 0) {
                                                                                                          tmp___218 = (int )((Bool )1);
                                                                                                        } else {
                                                                                                          tmp___218 = (int )((Bool )0);
                                                                                                        }
                                                                                                      } else {
                                                                                                        tmp___218 = (int )((Bool )0);
                                                                                                      }
                                                                                                    } else {
                                                                                                      tmp___218 = (int )((Bool )0);
                                                                                                    }
                                                                                                    if (tmp___218) {
                                                                                                      tmp___221 = vgPlain_strlen((Char const   *)"--sanity-level");
                                                                                                      val___24 = (Char *)(arg + (tmp___221 + 1UL));
                                                                                                      tmp___222 = vgPlain_strtoll10(val___24,
                                                                                                                                    & s___8);
                                                                                                      n___8 = tmp___222;
                                                                                                      vgPlain_clo_sanity_level = (Int )n___8;
                                                                                                      if (0 != (int )*(s___8 + 0)) {
                                                                                                        vgPlain_fmsg_bad_option(arg,
                                                                                                                                "");
                                                                                                      } else
                                                                                                      if ((Long )vgPlain_clo_sanity_level != n___8) {
                                                                                                        vgPlain_fmsg_bad_option(arg,
                                                                                                                                "");
                                                                                                      } else {

                                                                                                      }
                                                                                                    } else {
                                                                                                      _L___31: /* CIL Label */ 
                                                                                                      if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                        if ((unsigned int )"--num-callers=" != (unsigned int )((void *)0)) {
                                                                                                          tmp___212 = vgPlain_strlen((Char const   *)"--num-callers");
                                                                                                          tmp___213 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                      (Char const   *)"--num-callers=",
                                                                                                                                      tmp___212 + 1UL);
                                                                                                          if (tmp___213 == 0) {
                                                                                                            tmp___211 = (int )((Bool )1);
                                                                                                          } else {
                                                                                                            tmp___211 = (int )((Bool )0);
                                                                                                          }
                                                                                                        } else {
                                                                                                          tmp___211 = (int )((Bool )0);
                                                                                                        }
                                                                                                      } else {
                                                                                                        tmp___211 = (int )((Bool )0);
                                                                                                      }
                                                                                                      if (tmp___211) {
                                                                                                        tmp___214 = vgPlain_strlen((Char const   *)"--num-callers");
                                                                                                        val___23 = (Char *)(arg + (tmp___214 + 1UL));
                                                                                                        tmp___215 = vgPlain_strtoll10(val___23,
                                                                                                                                      & s___7);
                                                                                                        n___7 = tmp___215;
                                                                                                        vgPlain_clo_backtrace_size = (Int )n___7;
                                                                                                        if (0 != (int )*(s___7 + 0)) {
                                                                                                          vgPlain_fmsg_bad_option(arg,
                                                                                                                                  "");
                                                                                                        } else
                                                                                                        if ((Long )vgPlain_clo_backtrace_size != n___7) {
                                                                                                          vgPlain_fmsg_bad_option(arg,
                                                                                                                                  "");
                                                                                                        } else {

                                                                                                        }
                                                                                                        if (vgPlain_clo_backtrace_size < 1) {
                                                                                                          vgPlain_fmsg_bad_option(arg,
                                                                                                                                  "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                  "--num-callers",
                                                                                                                                  (Long )1,
                                                                                                                                  (Long )50);
                                                                                                        } else
                                                                                                        if (vgPlain_clo_backtrace_size > 50) {
                                                                                                          vgPlain_fmsg_bad_option(arg,
                                                                                                                                  "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                  "--num-callers",
                                                                                                                                  (Long )1,
                                                                                                                                  (Long )50);
                                                                                                        } else {

                                                                                                        }
                                                                                                      } else {
                                                                                                        _L___30: /* CIL Label */ 
                                                                                                        if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                          if ((unsigned int )"--smc-check=none" != (unsigned int )((void *)0)) {
                                                                                                            tmp___208 = vgPlain_strcmp((Char const   *)arg,
                                                                                                                                       (Char const   *)"--smc-check=none");
                                                                                                            if (tmp___208 == 0) {
                                                                                                              tmp___207 = (int )((Bool )1);
                                                                                                            } else {
                                                                                                              tmp___207 = (int )((Bool )0);
                                                                                                            }
                                                                                                          } else {
                                                                                                            tmp___207 = (int )((Bool )0);
                                                                                                          }
                                                                                                        } else {
                                                                                                          tmp___207 = (int )((Bool )0);
                                                                                                        }
                                                                                                        if (tmp___207) {
                                                                                                          vgPlain_clo_smc_check = (VgSmc )0;
                                                                                                        } else {
                                                                                                          _L___29: /* CIL Label */ 
                                                                                                          if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                            if ((unsigned int )"--smc-check=stack" != (unsigned int )((void *)0)) {
                                                                                                              tmp___205 = vgPlain_strcmp((Char const   *)arg,
                                                                                                                                         (Char const   *)"--smc-check=stack");
                                                                                                              if (tmp___205 == 0) {
                                                                                                                tmp___204 = (int )((Bool )1);
                                                                                                              } else {
                                                                                                                tmp___204 = (int )((Bool )0);
                                                                                                              }
                                                                                                            } else {
                                                                                                              tmp___204 = (int )((Bool )0);
                                                                                                            }
                                                                                                          } else {
                                                                                                            tmp___204 = (int )((Bool )0);
                                                                                                          }
                                                                                                          if (tmp___204) {
                                                                                                            vgPlain_clo_smc_check = (VgSmc )1;
                                                                                                          } else {
                                                                                                            _L___28: /* CIL Label */ 
                                                                                                            if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                              if ((unsigned int )"--smc-check=all" != (unsigned int )((void *)0)) {
                                                                                                                tmp___202 = vgPlain_strcmp((Char const   *)arg,
                                                                                                                                           (Char const   *)"--smc-check=all");
                                                                                                                if (tmp___202 == 0) {
                                                                                                                  tmp___201 = (int )((Bool )1);
                                                                                                                } else {
                                                                                                                  tmp___201 = (int )((Bool )0);
                                                                                                                }
                                                                                                              } else {
                                                                                                                tmp___201 = (int )((Bool )0);
                                                                                                              }
                                                                                                            } else {
                                                                                                              tmp___201 = (int )((Bool )0);
                                                                                                            }
                                                                                                            if (tmp___201) {
                                                                                                              vgPlain_clo_smc_check = (VgSmc )2;
                                                                                                            } else {
                                                                                                              _L___27: /* CIL Label */ 
                                                                                                              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                if ((unsigned int )"--smc-check=all-non-file" != (unsigned int )((void *)0)) {
                                                                                                                  tmp___199 = vgPlain_strcmp((Char const   *)arg,
                                                                                                                                             (Char const   *)"--smc-check=all-non-file");
                                                                                                                  if (tmp___199 == 0) {
                                                                                                                    tmp___198 = (int )((Bool )1);
                                                                                                                  } else {
                                                                                                                    tmp___198 = (int )((Bool )0);
                                                                                                                  }
                                                                                                                } else {
                                                                                                                  tmp___198 = (int )((Bool )0);
                                                                                                                }
                                                                                                              } else {
                                                                                                                tmp___198 = (int )((Bool )0);
                                                                                                              }
                                                                                                              if (tmp___198) {
                                                                                                                vgPlain_clo_smc_check = (VgSmc )3;
                                                                                                              } else {
                                                                                                                _L___26: /* CIL Label */ 
                                                                                                                if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                  if ((unsigned int )"--kernel-variant=" != (unsigned int )((void *)0)) {
                                                                                                                    tmp___194 = vgPlain_strlen((Char const   *)"--kernel-variant");
                                                                                                                    tmp___195 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                (Char const   *)"--kernel-variant=",
                                                                                                                                                tmp___194 + 1UL);
                                                                                                                    if (tmp___195 == 0) {
                                                                                                                      tmp___193 = (int )((Bool )1);
                                                                                                                    } else {
                                                                                                                      tmp___193 = (int )((Bool )0);
                                                                                                                    }
                                                                                                                  } else {
                                                                                                                    tmp___193 = (int )((Bool )0);
                                                                                                                  }
                                                                                                                } else {
                                                                                                                  tmp___193 = (int )((Bool )0);
                                                                                                                }
                                                                                                                if (tmp___193) {
                                                                                                                  tmp___196 = vgPlain_strlen((Char const   *)"--kernel-variant");
                                                                                                                  val___22 = (Char *)(arg + (tmp___196 + 1UL));
                                                                                                                  vgPlain_clo_kernel_variant = (HChar *)val___22;
                                                                                                                } else {
                                                                                                                  _L___25: /* CIL Label */ 
                                                                                                                  if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                    if ((unsigned int )"--dsymutil=" != (unsigned int )((void *)0)) {
                                                                                                                      tmp___182 = vgPlain_strlen((Char const   *)"--dsymutil");
                                                                                                                      tmp___183 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                  (Char const   *)"--dsymutil=",
                                                                                                                                                  tmp___182 + 1UL);
                                                                                                                      if (tmp___183 == 0) {
                                                                                                                        tmp___181 = (int )((Bool )1);
                                                                                                                      } else {
                                                                                                                        tmp___181 = (int )((Bool )0);
                                                                                                                      }
                                                                                                                    } else {
                                                                                                                      tmp___181 = (int )((Bool )0);
                                                                                                                    }
                                                                                                                  } else {
                                                                                                                    tmp___181 = (int )((Bool )0);
                                                                                                                  }
                                                                                                                  if (tmp___181) {
                                                                                                                    tmp___184 = vgPlain_strlen((Char const   *)"--dsymutil");
                                                                                                                    val___21 = (Char *)(arg + (tmp___184 + 1UL));
                                                                                                                    if ((unsigned int )val___21 != (unsigned int )((void *)0)) {
                                                                                                                      if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                                                                        tmp___190 = vgPlain_strcmp((Char const   *)val___21,
                                                                                                                                                   (Char const   *)"yes");
                                                                                                                        if (tmp___190 == 0) {
                                                                                                                          tmp___189 = (int )((Bool )1);
                                                                                                                        } else {
                                                                                                                          tmp___189 = (int )((Bool )0);
                                                                                                                        }
                                                                                                                      } else {
                                                                                                                        tmp___189 = (int )((Bool )0);
                                                                                                                      }
                                                                                                                    } else {
                                                                                                                      tmp___189 = (int )((Bool )0);
                                                                                                                    }
                                                                                                                    if (tmp___189) {
                                                                                                                      vgPlain_clo_dsymutil = (Bool )1;
                                                                                                                    } else {
                                                                                                                      if ((unsigned int )val___21 != (unsigned int )((void *)0)) {
                                                                                                                        if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                                                                          tmp___187 = vgPlain_strcmp((Char const   *)val___21,
                                                                                                                                                     (Char const   *)"no");
                                                                                                                          if (tmp___187 == 0) {
                                                                                                                            tmp___186 = (int )((Bool )1);
                                                                                                                          } else {
                                                                                                                            tmp___186 = (int )((Bool )0);
                                                                                                                          }
                                                                                                                        } else {
                                                                                                                          tmp___186 = (int )((Bool )0);
                                                                                                                        }
                                                                                                                      } else {
                                                                                                                        tmp___186 = (int )((Bool )0);
                                                                                                                      }
                                                                                                                      if (tmp___186) {
                                                                                                                        vgPlain_clo_dsymutil = (Bool )0;
                                                                                                                      } else {
                                                                                                                        vgPlain_fmsg_bad_option(arg,
                                                                                                                                                "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                                                                val___21);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  } else {
                                                                                                                    _L___24: /* CIL Label */ 
                                                                                                                    if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                      if ((unsigned int )"--trace-children-skip=" != (unsigned int )((void *)0)) {
                                                                                                                        tmp___176 = vgPlain_strlen((Char const   *)"--trace-children-skip");
                                                                                                                        tmp___177 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                    (Char const   *)"--trace-children-skip=",
                                                                                                                                                    tmp___176 + 1UL);
                                                                                                                        if (tmp___177 == 0) {
                                                                                                                          tmp___175 = (int )((Bool )1);
                                                                                                                        } else {
                                                                                                                          tmp___175 = (int )((Bool )0);
                                                                                                                        }
                                                                                                                      } else {
                                                                                                                        tmp___175 = (int )((Bool )0);
                                                                                                                      }
                                                                                                                    } else {
                                                                                                                      tmp___175 = (int )((Bool )0);
                                                                                                                    }
                                                                                                                    if (tmp___175) {
                                                                                                                      tmp___178 = vgPlain_strlen((Char const   *)"--trace-children-skip");
                                                                                                                      val___20 = (Char *)(arg + (tmp___178 + 1UL));
                                                                                                                      vgPlain_clo_trace_children_skip = (HChar *)val___20;
                                                                                                                    } else {
                                                                                                                      _L___23: /* CIL Label */ 
                                                                                                                      if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                        if ((unsigned int )"--trace-children-skip-by-arg=" != (unsigned int )((void *)0)) {
                                                                                                                          tmp___170 = vgPlain_strlen((Char const   *)"--trace-children-skip-by-arg");
                                                                                                                          tmp___171 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                      (Char const   *)"--trace-children-skip-by-arg=",
                                                                                                                                                      tmp___170 + 1UL);
                                                                                                                          if (tmp___171 == 0) {
                                                                                                                            tmp___169 = (int )((Bool )1);
                                                                                                                          } else {
                                                                                                                            tmp___169 = (int )((Bool )0);
                                                                                                                          }
                                                                                                                        } else {
                                                                                                                          tmp___169 = (int )((Bool )0);
                                                                                                                        }
                                                                                                                      } else {
                                                                                                                        tmp___169 = (int )((Bool )0);
                                                                                                                      }
                                                                                                                      if (tmp___169) {
                                                                                                                        tmp___172 = vgPlain_strlen((Char const   *)"--trace-children-skip-by-arg");
                                                                                                                        val___19 = (Char *)(arg + (tmp___172 + 1UL));
                                                                                                                        vgPlain_clo_trace_children_skip_by_arg = (HChar *)val___19;
                                                                                                                      } else {
                                                                                                                        _L___22: /* CIL Label */ 
                                                                                                                        if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                          if ((unsigned int )"--vex-iropt-verbosity=" != (unsigned int )((void *)0)) {
                                                                                                                            tmp___163 = vgPlain_strlen((Char const   *)"--vex-iropt-verbosity");
                                                                                                                            tmp___164 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                        (Char const   *)"--vex-iropt-verbosity=",
                                                                                                                                                        tmp___163 + 1UL);
                                                                                                                            if (tmp___164 == 0) {
                                                                                                                              tmp___162 = (int )((Bool )1);
                                                                                                                            } else {
                                                                                                                              tmp___162 = (int )((Bool )0);
                                                                                                                            }
                                                                                                                          } else {
                                                                                                                            tmp___162 = (int )((Bool )0);
                                                                                                                          }
                                                                                                                        } else {
                                                                                                                          tmp___162 = (int )((Bool )0);
                                                                                                                        }
                                                                                                                        if (tmp___162) {
                                                                                                                          tmp___165 = vgPlain_strlen((Char const   *)"--vex-iropt-verbosity");
                                                                                                                          val___18 = (Char *)(arg + (tmp___165 + 1UL));
                                                                                                                          tmp___166 = vgPlain_strtoll10(val___18,
                                                                                                                                                        & s___6);
                                                                                                                          n___6 = tmp___166;
                                                                                                                          vgPlain_clo_vex_control.iropt_verbosity = (Int )n___6;
                                                                                                                          if (0 != (int )*(s___6 + 0)) {
                                                                                                                            vgPlain_fmsg_bad_option(arg,
                                                                                                                                                    "");
                                                                                                                          } else
                                                                                                                          if ((Long )vgPlain_clo_vex_control.iropt_verbosity != n___6) {
                                                                                                                            vgPlain_fmsg_bad_option(arg,
                                                                                                                                                    "");
                                                                                                                          } else {

                                                                                                                          }
                                                                                                                          if (vgPlain_clo_vex_control.iropt_verbosity < 0) {
                                                                                                                            vgPlain_fmsg_bad_option(arg,
                                                                                                                                                    "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                                    "--vex-iropt-verbosity",
                                                                                                                                                    (Long )0,
                                                                                                                                                    (Long )10);
                                                                                                                          } else
                                                                                                                          if (vgPlain_clo_vex_control.iropt_verbosity > 10) {
                                                                                                                            vgPlain_fmsg_bad_option(arg,
                                                                                                                                                    "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                                    "--vex-iropt-verbosity",
                                                                                                                                                    (Long )0,
                                                                                                                                                    (Long )10);
                                                                                                                          } else {

                                                                                                                          }
                                                                                                                        } else {
                                                                                                                          _L___21: /* CIL Label */ 
                                                                                                                          if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                            if ((unsigned int )"--vex-iropt-level=" != (unsigned int )((void *)0)) {
                                                                                                                              tmp___156 = vgPlain_strlen((Char const   *)"--vex-iropt-level");
                                                                                                                              tmp___157 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                          (Char const   *)"--vex-iropt-level=",
                                                                                                                                                          tmp___156 + 1UL);
                                                                                                                              if (tmp___157 == 0) {
                                                                                                                                tmp___155 = (int )((Bool )1);
                                                                                                                              } else {
                                                                                                                                tmp___155 = (int )((Bool )0);
                                                                                                                              }
                                                                                                                            } else {
                                                                                                                              tmp___155 = (int )((Bool )0);
                                                                                                                            }
                                                                                                                          } else {
                                                                                                                            tmp___155 = (int )((Bool )0);
                                                                                                                          }
                                                                                                                          if (tmp___155) {
                                                                                                                            tmp___158 = vgPlain_strlen((Char const   *)"--vex-iropt-level");
                                                                                                                            val___17 = (Char *)(arg + (tmp___158 + 1UL));
                                                                                                                            tmp___159 = vgPlain_strtoll10(val___17,
                                                                                                                                                          & s___5);
                                                                                                                            n___5 = tmp___159;
                                                                                                                            vgPlain_clo_vex_control.iropt_level = (Int )n___5;
                                                                                                                            if (0 != (int )*(s___5 + 0)) {
                                                                                                                              vgPlain_fmsg_bad_option(arg,
                                                                                                                                                      "");
                                                                                                                            } else
                                                                                                                            if ((Long )vgPlain_clo_vex_control.iropt_level != n___5) {
                                                                                                                              vgPlain_fmsg_bad_option(arg,
                                                                                                                                                      "");
                                                                                                                            } else {

                                                                                                                            }
                                                                                                                            if (vgPlain_clo_vex_control.iropt_level < 0) {
                                                                                                                              vgPlain_fmsg_bad_option(arg,
                                                                                                                                                      "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                                      "--vex-iropt-level",
                                                                                                                                                      (Long )0,
                                                                                                                                                      (Long )2);
                                                                                                                            } else
                                                                                                                            if (vgPlain_clo_vex_control.iropt_level > 2) {
                                                                                                                              vgPlain_fmsg_bad_option(arg,
                                                                                                                                                      "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                                      "--vex-iropt-level",
                                                                                                                                                      (Long )0,
                                                                                                                                                      (Long )2);
                                                                                                                            } else {

                                                                                                                            }
                                                                                                                          } else {
                                                                                                                            _L___20: /* CIL Label */ 
                                                                                                                            if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                              if ((unsigned int )"--vex-iropt-precise-memory-exns=" != (unsigned int )((void *)0)) {
                                                                                                                                tmp___144 = vgPlain_strlen((Char const   *)"--vex-iropt-precise-memory-exns");
                                                                                                                                tmp___145 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                            (Char const   *)"--vex-iropt-precise-memory-exns=",
                                                                                                                                                            tmp___144 + 1UL);
                                                                                                                                if (tmp___145 == 0) {
                                                                                                                                  tmp___143 = (int )((Bool )1);
                                                                                                                                } else {
                                                                                                                                  tmp___143 = (int )((Bool )0);
                                                                                                                                }
                                                                                                                              } else {
                                                                                                                                tmp___143 = (int )((Bool )0);
                                                                                                                              }
                                                                                                                            } else {
                                                                                                                              tmp___143 = (int )((Bool )0);
                                                                                                                            }
                                                                                                                            if (tmp___143) {
                                                                                                                              tmp___146 = vgPlain_strlen((Char const   *)"--vex-iropt-precise-memory-exns");
                                                                                                                              val___16 = (Char *)(arg + (tmp___146 + 1UL));
                                                                                                                              if ((unsigned int )val___16 != (unsigned int )((void *)0)) {
                                                                                                                                if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                                                                                  tmp___152 = vgPlain_strcmp((Char const   *)val___16,
                                                                                                                                                             (Char const   *)"yes");
                                                                                                                                  if (tmp___152 == 0) {
                                                                                                                                    tmp___151 = (int )((Bool )1);
                                                                                                                                  } else {
                                                                                                                                    tmp___151 = (int )((Bool )0);
                                                                                                                                  }
                                                                                                                                } else {
                                                                                                                                  tmp___151 = (int )((Bool )0);
                                                                                                                                }
                                                                                                                              } else {
                                                                                                                                tmp___151 = (int )((Bool )0);
                                                                                                                              }
                                                                                                                              if (tmp___151) {
                                                                                                                                vgPlain_clo_vex_control.iropt_precise_memory_exns = (Bool )1;
                                                                                                                              } else {
                                                                                                                                if ((unsigned int )val___16 != (unsigned int )((void *)0)) {
                                                                                                                                  if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                                                                                    tmp___149 = vgPlain_strcmp((Char const   *)val___16,
                                                                                                                                                               (Char const   *)"no");
                                                                                                                                    if (tmp___149 == 0) {
                                                                                                                                      tmp___148 = (int )((Bool )1);
                                                                                                                                    } else {
                                                                                                                                      tmp___148 = (int )((Bool )0);
                                                                                                                                    }
                                                                                                                                  } else {
                                                                                                                                    tmp___148 = (int )((Bool )0);
                                                                                                                                  }
                                                                                                                                } else {
                                                                                                                                  tmp___148 = (int )((Bool )0);
                                                                                                                                }
                                                                                                                                if (tmp___148) {
                                                                                                                                  vgPlain_clo_vex_control.iropt_precise_memory_exns = (Bool )0;
                                                                                                                                } else {
                                                                                                                                  vgPlain_fmsg_bad_option(arg,
                                                                                                                                                          "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                                                                          val___16);
                                                                                                                                }
                                                                                                                              }
                                                                                                                            } else {
                                                                                                                              _L___19: /* CIL Label */ 
                                                                                                                              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                if ((unsigned int )"--vex-iropt-unroll-thresh=" != (unsigned int )((void *)0)) {
                                                                                                                                  tmp___137 = vgPlain_strlen((Char const   *)"--vex-iropt-unroll-thresh");
                                                                                                                                  tmp___138 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                              (Char const   *)"--vex-iropt-unroll-thresh=",
                                                                                                                                                              tmp___137 + 1UL);
                                                                                                                                  if (tmp___138 == 0) {
                                                                                                                                    tmp___136 = (int )((Bool )1);
                                                                                                                                  } else {
                                                                                                                                    tmp___136 = (int )((Bool )0);
                                                                                                                                  }
                                                                                                                                } else {
                                                                                                                                  tmp___136 = (int )((Bool )0);
                                                                                                                                }
                                                                                                                              } else {
                                                                                                                                tmp___136 = (int )((Bool )0);
                                                                                                                              }
                                                                                                                              if (tmp___136) {
                                                                                                                                tmp___139 = vgPlain_strlen((Char const   *)"--vex-iropt-unroll-thresh");
                                                                                                                                val___15 = (Char *)(arg + (tmp___139 + 1UL));
                                                                                                                                tmp___140 = vgPlain_strtoll10(val___15,
                                                                                                                                                              & s___4);
                                                                                                                                n___4 = tmp___140;
                                                                                                                                vgPlain_clo_vex_control.iropt_unroll_thresh = (Int )n___4;
                                                                                                                                if (0 != (int )*(s___4 + 0)) {
                                                                                                                                  vgPlain_fmsg_bad_option(arg,
                                                                                                                                                          "");
                                                                                                                                } else
                                                                                                                                if ((Long )vgPlain_clo_vex_control.iropt_unroll_thresh != n___4) {
                                                                                                                                  vgPlain_fmsg_bad_option(arg,
                                                                                                                                                          "");
                                                                                                                                } else {

                                                                                                                                }
                                                                                                                                if (vgPlain_clo_vex_control.iropt_unroll_thresh < 0) {
                                                                                                                                  vgPlain_fmsg_bad_option(arg,
                                                                                                                                                          "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                                          "--vex-iropt-unroll-thresh",
                                                                                                                                                          (Long )0,
                                                                                                                                                          (Long )400);
                                                                                                                                } else
                                                                                                                                if (vgPlain_clo_vex_control.iropt_unroll_thresh > 400) {
                                                                                                                                  vgPlain_fmsg_bad_option(arg,
                                                                                                                                                          "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                                          "--vex-iropt-unroll-thresh",
                                                                                                                                                          (Long )0,
                                                                                                                                                          (Long )400);
                                                                                                                                } else {

                                                                                                                                }
                                                                                                                              } else {
                                                                                                                                _L___18: /* CIL Label */ 
                                                                                                                                if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                  if ((unsigned int )"--vex-guest-max-insns=" != (unsigned int )((void *)0)) {
                                                                                                                                    tmp___130 = vgPlain_strlen((Char const   *)"--vex-guest-max-insns");
                                                                                                                                    tmp___131 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                (Char const   *)"--vex-guest-max-insns=",
                                                                                                                                                                tmp___130 + 1UL);
                                                                                                                                    if (tmp___131 == 0) {
                                                                                                                                      tmp___129 = (int )((Bool )1);
                                                                                                                                    } else {
                                                                                                                                      tmp___129 = (int )((Bool )0);
                                                                                                                                    }
                                                                                                                                  } else {
                                                                                                                                    tmp___129 = (int )((Bool )0);
                                                                                                                                  }
                                                                                                                                } else {
                                                                                                                                  tmp___129 = (int )((Bool )0);
                                                                                                                                }
                                                                                                                                if (tmp___129) {
                                                                                                                                  tmp___132 = vgPlain_strlen((Char const   *)"--vex-guest-max-insns");
                                                                                                                                  val___14 = (Char *)(arg + (tmp___132 + 1UL));
                                                                                                                                  tmp___133 = vgPlain_strtoll10(val___14,
                                                                                                                                                                & s___3);
                                                                                                                                  n___3 = tmp___133;
                                                                                                                                  vgPlain_clo_vex_control.guest_max_insns = (Int )n___3;
                                                                                                                                  if (0 != (int )*(s___3 + 0)) {
                                                                                                                                    vgPlain_fmsg_bad_option(arg,
                                                                                                                                                            "");
                                                                                                                                  } else
                                                                                                                                  if ((Long )vgPlain_clo_vex_control.guest_max_insns != n___3) {
                                                                                                                                    vgPlain_fmsg_bad_option(arg,
                                                                                                                                                            "");
                                                                                                                                  } else {

                                                                                                                                  }
                                                                                                                                  if (vgPlain_clo_vex_control.guest_max_insns < 1) {
                                                                                                                                    vgPlain_fmsg_bad_option(arg,
                                                                                                                                                            "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                                            "--vex-guest-max-insns",
                                                                                                                                                            (Long )1,
                                                                                                                                                            (Long )100);
                                                                                                                                  } else
                                                                                                                                  if (vgPlain_clo_vex_control.guest_max_insns > 100) {
                                                                                                                                    vgPlain_fmsg_bad_option(arg,
                                                                                                                                                            "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                                            "--vex-guest-max-insns",
                                                                                                                                                            (Long )1,
                                                                                                                                                            (Long )100);
                                                                                                                                  } else {

                                                                                                                                  }
                                                                                                                                } else {
                                                                                                                                  _L___17: /* CIL Label */ 
                                                                                                                                  if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                    if ((unsigned int )"--vex-guest-chase-thresh=" != (unsigned int )((void *)0)) {
                                                                                                                                      tmp___123 = vgPlain_strlen((Char const   *)"--vex-guest-chase-thresh");
                                                                                                                                      tmp___124 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                  (Char const   *)"--vex-guest-chase-thresh=",
                                                                                                                                                                  tmp___123 + 1UL);
                                                                                                                                      if (tmp___124 == 0) {
                                                                                                                                        tmp___122 = (int )((Bool )1);
                                                                                                                                      } else {
                                                                                                                                        tmp___122 = (int )((Bool )0);
                                                                                                                                      }
                                                                                                                                    } else {
                                                                                                                                      tmp___122 = (int )((Bool )0);
                                                                                                                                    }
                                                                                                                                  } else {
                                                                                                                                    tmp___122 = (int )((Bool )0);
                                                                                                                                  }
                                                                                                                                  if (tmp___122) {
                                                                                                                                    tmp___125 = vgPlain_strlen((Char const   *)"--vex-guest-chase-thresh");
                                                                                                                                    val___13 = (Char *)(arg + (tmp___125 + 1UL));
                                                                                                                                    tmp___126 = vgPlain_strtoll10(val___13,
                                                                                                                                                                  & s___2);
                                                                                                                                    n___2 = tmp___126;
                                                                                                                                    vgPlain_clo_vex_control.guest_chase_thresh = (Int )n___2;
                                                                                                                                    if (0 != (int )*(s___2 + 0)) {
                                                                                                                                      vgPlain_fmsg_bad_option(arg,
                                                                                                                                                              "");
                                                                                                                                    } else
                                                                                                                                    if ((Long )vgPlain_clo_vex_control.guest_chase_thresh != n___2) {
                                                                                                                                      vgPlain_fmsg_bad_option(arg,
                                                                                                                                                              "");
                                                                                                                                    } else {

                                                                                                                                    }
                                                                                                                                    if (vgPlain_clo_vex_control.guest_chase_thresh < 0) {
                                                                                                                                      vgPlain_fmsg_bad_option(arg,
                                                                                                                                                              "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                                              "--vex-guest-chase-thresh",
                                                                                                                                                              (Long )0,
                                                                                                                                                              (Long )99);
                                                                                                                                    } else
                                                                                                                                    if (vgPlain_clo_vex_control.guest_chase_thresh > 99) {
                                                                                                                                      vgPlain_fmsg_bad_option(arg,
                                                                                                                                                              "\'%s\' argument must be between %lld and %lld\n",
                                                                                                                                                              "--vex-guest-chase-thresh",
                                                                                                                                                              (Long )0,
                                                                                                                                                              (Long )99);
                                                                                                                                    } else {

                                                                                                                                    }
                                                                                                                                  } else {
                                                                                                                                    _L___16: /* CIL Label */ 
                                                                                                                                    if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                      if ((unsigned int )"--vex-guest-chase-cond=" != (unsigned int )((void *)0)) {
                                                                                                                                        tmp___111 = vgPlain_strlen((Char const   *)"--vex-guest-chase-cond");
                                                                                                                                        tmp___112 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                    (Char const   *)"--vex-guest-chase-cond=",
                                                                                                                                                                    tmp___111 + 1UL);
                                                                                                                                        if (tmp___112 == 0) {
                                                                                                                                          tmp___110 = (int )((Bool )1);
                                                                                                                                        } else {
                                                                                                                                          tmp___110 = (int )((Bool )0);
                                                                                                                                        }
                                                                                                                                      } else {
                                                                                                                                        tmp___110 = (int )((Bool )0);
                                                                                                                                      }
                                                                                                                                    } else {
                                                                                                                                      tmp___110 = (int )((Bool )0);
                                                                                                                                    }
                                                                                                                                    if (tmp___110) {
                                                                                                                                      tmp___113 = vgPlain_strlen((Char const   *)"--vex-guest-chase-cond");
                                                                                                                                      val___12 = (Char *)(arg + (tmp___113 + 1UL));
                                                                                                                                      if ((unsigned int )val___12 != (unsigned int )((void *)0)) {
                                                                                                                                        if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
                                                                                                                                          tmp___119 = vgPlain_strcmp((Char const   *)val___12,
                                                                                                                                                                     (Char const   *)"yes");
                                                                                                                                          if (tmp___119 == 0) {
                                                                                                                                            tmp___118 = (int )((Bool )1);
                                                                                                                                          } else {
                                                                                                                                            tmp___118 = (int )((Bool )0);
                                                                                                                                          }
                                                                                                                                        } else {
                                                                                                                                          tmp___118 = (int )((Bool )0);
                                                                                                                                        }
                                                                                                                                      } else {
                                                                                                                                        tmp___118 = (int )((Bool )0);
                                                                                                                                      }
                                                                                                                                      if (tmp___118) {
                                                                                                                                        vgPlain_clo_vex_control.guest_chase_cond = (Bool )1;
                                                                                                                                      } else {
                                                                                                                                        if ((unsigned int )val___12 != (unsigned int )((void *)0)) {
                                                                                                                                          if ((unsigned int )"no" != (unsigned int )((void *)0)) {
                                                                                                                                            tmp___116 = vgPlain_strcmp((Char const   *)val___12,
                                                                                                                                                                       (Char const   *)"no");
                                                                                                                                            if (tmp___116 == 0) {
                                                                                                                                              tmp___115 = (int )((Bool )1);
                                                                                                                                            } else {
                                                                                                                                              tmp___115 = (int )((Bool )0);
                                                                                                                                            }
                                                                                                                                          } else {
                                                                                                                                            tmp___115 = (int )((Bool )0);
                                                                                                                                          }
                                                                                                                                        } else {
                                                                                                                                          tmp___115 = (int )((Bool )0);
                                                                                                                                        }
                                                                                                                                        if (tmp___115) {
                                                                                                                                          vgPlain_clo_vex_control.guest_chase_cond = (Bool )0;
                                                                                                                                        } else {
                                                                                                                                          vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                  "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                                                                                                                                                  val___12);
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    } else {
                                                                                                                                      _L___15: /* CIL Label */ 
                                                                                                                                      if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                        if ((unsigned int )"--log-fd=" != (unsigned int )((void *)0)) {
                                                                                                                                          tmp___104 = vgPlain_strlen((Char const   *)"--log-fd");
                                                                                                                                          tmp___105 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                      (Char const   *)"--log-fd=",
                                                                                                                                                                      tmp___104 + 1UL);
                                                                                                                                          if (tmp___105 == 0) {
                                                                                                                                            tmp___103 = (int )((Bool )1);
                                                                                                                                          } else {
                                                                                                                                            tmp___103 = (int )((Bool )0);
                                                                                                                                          }
                                                                                                                                        } else {
                                                                                                                                          tmp___103 = (int )((Bool )0);
                                                                                                                                        }
                                                                                                                                      } else {
                                                                                                                                        tmp___103 = (int )((Bool )0);
                                                                                                                                      }
                                                                                                                                      if (tmp___103) {
                                                                                                                                        tmp___106 = vgPlain_strlen((Char const   *)"--log-fd");
                                                                                                                                        val___11 = (Char *)(arg + (tmp___106 + 1UL));
                                                                                                                                        tmp___107 = vgPlain_strtoll10(val___11,
                                                                                                                                                                      & s___1);
                                                                                                                                        n___1 = tmp___107;
                                                                                                                                        tmp_log_fd = (Int )n___1;
                                                                                                                                        if (0 != (int )*(s___1 + 0)) {
                                                                                                                                          vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                  "");
                                                                                                                                        } else
                                                                                                                                        if ((Long )tmp_log_fd != n___1) {
                                                                                                                                          vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                  "");
                                                                                                                                        } else {

                                                                                                                                        }
                                                                                                                                        log_to = (enum __anonenum_log_to_135 )0;
                                                                                                                                        log_fsname_unexpanded = (Char *)((void *)0);
                                                                                                                                      } else {
                                                                                                                                        _L___14: /* CIL Label */ 
                                                                                                                                        if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                          if ((unsigned int )"--xml-fd=" != (unsigned int )((void *)0)) {
                                                                                                                                            tmp___97 = vgPlain_strlen((Char const   *)"--xml-fd");
                                                                                                                                            tmp___98 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                       (Char const   *)"--xml-fd=",
                                                                                                                                                                       tmp___97 + 1UL);
                                                                                                                                            if (tmp___98 == 0) {
                                                                                                                                              tmp___96 = (int )((Bool )1);
                                                                                                                                            } else {
                                                                                                                                              tmp___96 = (int )((Bool )0);
                                                                                                                                            }
                                                                                                                                          } else {
                                                                                                                                            tmp___96 = (int )((Bool )0);
                                                                                                                                          }
                                                                                                                                        } else {
                                                                                                                                          tmp___96 = (int )((Bool )0);
                                                                                                                                        }
                                                                                                                                        if (tmp___96) {
                                                                                                                                          tmp___99 = vgPlain_strlen((Char const   *)"--xml-fd");
                                                                                                                                          val___10 = (Char *)(arg + (tmp___99 + 1UL));
                                                                                                                                          tmp___100 = vgPlain_strtoll10(val___10,
                                                                                                                                                                        & s___0);
                                                                                                                                          n___0 = tmp___100;
                                                                                                                                          tmp_xml_fd = (Int )n___0;
                                                                                                                                          if (0 != (int )*(s___0 + 0)) {
                                                                                                                                            vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                    "");
                                                                                                                                          } else
                                                                                                                                          if ((Long )tmp_xml_fd != n___0) {
                                                                                                                                            vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                    "");
                                                                                                                                          } else {

                                                                                                                                          }
                                                                                                                                          xml_to = (enum __anonenum_log_to_135 )0;
                                                                                                                                          xml_fsname_unexpanded = (Char *)((void *)0);
                                                                                                                                        } else {
                                                                                                                                          _L___13: /* CIL Label */ 
                                                                                                                                          if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                            if ((unsigned int )"--log-file=" != (unsigned int )((void *)0)) {
                                                                                                                                              tmp___91 = vgPlain_strlen((Char const   *)"--log-file");
                                                                                                                                              tmp___92 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                         (Char const   *)"--log-file=",
                                                                                                                                                                         tmp___91 + 1UL);
                                                                                                                                              if (tmp___92 == 0) {
                                                                                                                                                tmp___90 = (int )((Bool )1);
                                                                                                                                              } else {
                                                                                                                                                tmp___90 = (int )((Bool )0);
                                                                                                                                              }
                                                                                                                                            } else {
                                                                                                                                              tmp___90 = (int )((Bool )0);
                                                                                                                                            }
                                                                                                                                          } else {
                                                                                                                                            tmp___90 = (int )((Bool )0);
                                                                                                                                          }
                                                                                                                                          if (tmp___90) {
                                                                                                                                            tmp___93 = vgPlain_strlen((Char const   *)"--log-file");
                                                                                                                                            val___9 = (Char *)(arg + (tmp___93 + 1UL));
                                                                                                                                            log_fsname_unexpanded = val___9;
                                                                                                                                            log_to = (enum __anonenum_log_to_135 )1;
                                                                                                                                          } else {
                                                                                                                                            _L___12: /* CIL Label */ 
                                                                                                                                            if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                              if ((unsigned int )"--xml-file=" != (unsigned int )((void *)0)) {
                                                                                                                                                tmp___85 = vgPlain_strlen((Char const   *)"--xml-file");
                                                                                                                                                tmp___86 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                           (Char const   *)"--xml-file=",
                                                                                                                                                                           tmp___85 + 1UL);
                                                                                                                                                if (tmp___86 == 0) {
                                                                                                                                                  tmp___84 = (int )((Bool )1);
                                                                                                                                                } else {
                                                                                                                                                  tmp___84 = (int )((Bool )0);
                                                                                                                                                }
                                                                                                                                              } else {
                                                                                                                                                tmp___84 = (int )((Bool )0);
                                                                                                                                              }
                                                                                                                                            } else {
                                                                                                                                              tmp___84 = (int )((Bool )0);
                                                                                                                                            }
                                                                                                                                            if (tmp___84) {
                                                                                                                                              tmp___87 = vgPlain_strlen((Char const   *)"--xml-file");
                                                                                                                                              val___8 = (Char *)(arg + (tmp___87 + 1UL));
                                                                                                                                              xml_fsname_unexpanded = val___8;
                                                                                                                                              xml_to = (enum __anonenum_log_to_135 )1;
                                                                                                                                            } else {
                                                                                                                                              _L___11: /* CIL Label */ 
                                                                                                                                              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                if ((unsigned int )"--log-socket=" != (unsigned int )((void *)0)) {
                                                                                                                                                  tmp___79 = vgPlain_strlen((Char const   *)"--log-socket");
                                                                                                                                                  tmp___80 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                             (Char const   *)"--log-socket=",
                                                                                                                                                                             tmp___79 + 1UL);
                                                                                                                                                  if (tmp___80 == 0) {
                                                                                                                                                    tmp___78 = (int )((Bool )1);
                                                                                                                                                  } else {
                                                                                                                                                    tmp___78 = (int )((Bool )0);
                                                                                                                                                  }
                                                                                                                                                } else {
                                                                                                                                                  tmp___78 = (int )((Bool )0);
                                                                                                                                                }
                                                                                                                                              } else {
                                                                                                                                                tmp___78 = (int )((Bool )0);
                                                                                                                                              }
                                                                                                                                              if (tmp___78) {
                                                                                                                                                tmp___81 = vgPlain_strlen((Char const   *)"--log-socket");
                                                                                                                                                val___7 = (Char *)(arg + (tmp___81 + 1UL));
                                                                                                                                                log_fsname_unexpanded = val___7;
                                                                                                                                                log_to = (enum __anonenum_log_to_135 )2;
                                                                                                                                              } else {
                                                                                                                                                _L___10: /* CIL Label */ 
                                                                                                                                                if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                  if ((unsigned int )"--xml-socket=" != (unsigned int )((void *)0)) {
                                                                                                                                                    tmp___73 = vgPlain_strlen((Char const   *)"--xml-socket");
                                                                                                                                                    tmp___74 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                               (Char const   *)"--xml-socket=",
                                                                                                                                                                               tmp___73 + 1UL);
                                                                                                                                                    if (tmp___74 == 0) {
                                                                                                                                                      tmp___72 = (int )((Bool )1);
                                                                                                                                                    } else {
                                                                                                                                                      tmp___72 = (int )((Bool )0);
                                                                                                                                                    }
                                                                                                                                                  } else {
                                                                                                                                                    tmp___72 = (int )((Bool )0);
                                                                                                                                                  }
                                                                                                                                                } else {
                                                                                                                                                  tmp___72 = (int )((Bool )0);
                                                                                                                                                }
                                                                                                                                                if (tmp___72) {
                                                                                                                                                  tmp___75 = vgPlain_strlen((Char const   *)"--xml-socket");
                                                                                                                                                  val___6 = (Char *)(arg + (tmp___75 + 1UL));
                                                                                                                                                  xml_fsname_unexpanded = val___6;
                                                                                                                                                  xml_to = (enum __anonenum_log_to_135 )2;
                                                                                                                                                } else {
                                                                                                                                                  _L___9: /* CIL Label */ 
                                                                                                                                                  if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                    if ((unsigned int )"--xml-user-comment=" != (unsigned int )((void *)0)) {
                                                                                                                                                      tmp___67 = vgPlain_strlen((Char const   *)"--xml-user-comment");
                                                                                                                                                      tmp___68 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                                 (Char const   *)"--xml-user-comment=",
                                                                                                                                                                                 tmp___67 + 1UL);
                                                                                                                                                      if (tmp___68 == 0) {
                                                                                                                                                        tmp___66 = (int )((Bool )1);
                                                                                                                                                      } else {
                                                                                                                                                        tmp___66 = (int )((Bool )0);
                                                                                                                                                      }
                                                                                                                                                    } else {
                                                                                                                                                      tmp___66 = (int )((Bool )0);
                                                                                                                                                    }
                                                                                                                                                  } else {
                                                                                                                                                    tmp___66 = (int )((Bool )0);
                                                                                                                                                  }
                                                                                                                                                  if (tmp___66) {
                                                                                                                                                    tmp___69 = vgPlain_strlen((Char const   *)"--xml-user-comment");
                                                                                                                                                    val___5 = (Char *)(arg + (tmp___69 + 1UL));
                                                                                                                                                    vgPlain_clo_xml_user_comment = (HChar *)val___5;
                                                                                                                                                  } else {
                                                                                                                                                    _L___8: /* CIL Label */ 
                                                                                                                                                    if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                      if ((unsigned int )"--suppressions=" != (unsigned int )((void *)0)) {
                                                                                                                                                        tmp___61 = vgPlain_strlen((Char const   *)"--suppressions");
                                                                                                                                                        tmp___62 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                                   (Char const   *)"--suppressions=",
                                                                                                                                                                                   tmp___61 + 1UL);
                                                                                                                                                        if (tmp___62 == 0) {
                                                                                                                                                          tmp___60 = (int )((Bool )1);
                                                                                                                                                        } else {
                                                                                                                                                          tmp___60 = (int )((Bool )0);
                                                                                                                                                        }
                                                                                                                                                      } else {
                                                                                                                                                        tmp___60 = (int )((Bool )0);
                                                                                                                                                      }
                                                                                                                                                    } else {
                                                                                                                                                      tmp___60 = (int )((Bool )0);
                                                                                                                                                    }
                                                                                                                                                    if (tmp___60) {
                                                                                                                                                      tmp___63 = vgPlain_strlen((Char const   *)"--suppressions");
                                                                                                                                                      val___4 = (Char *)(arg + (tmp___63 + 1UL));
                                                                                                                                                      tmp_str = val___4;
                                                                                                                                                      if (vgPlain_clo_n_suppressions >= 100) {
                                                                                                                                                        vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                "Too many suppression files specified.\nIncrease VG_CLO_MAX_SFILES and recompile.\n");
                                                                                                                                                      } else {

                                                                                                                                                      }
                                                                                                                                                      vgPlain_clo_suppressions[vgPlain_clo_n_suppressions] = tmp_str;
                                                                                                                                                      vgPlain_clo_n_suppressions ++;
                                                                                                                                                    } else {
                                                                                                                                                      _L___7: /* CIL Label */ 
                                                                                                                                                      if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                        if ((unsigned int )"--fullpath-after=" != (unsigned int )((void *)0)) {
                                                                                                                                                          tmp___55 = vgPlain_strlen((Char const   *)"--fullpath-after");
                                                                                                                                                          tmp___56 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                                     (Char const   *)"--fullpath-after=",
                                                                                                                                                                                     tmp___55 + 1UL);
                                                                                                                                                          if (tmp___56 == 0) {
                                                                                                                                                            tmp___54 = (int )((Bool )1);
                                                                                                                                                          } else {
                                                                                                                                                            tmp___54 = (int )((Bool )0);
                                                                                                                                                          }
                                                                                                                                                        } else {
                                                                                                                                                          tmp___54 = (int )((Bool )0);
                                                                                                                                                        }
                                                                                                                                                      } else {
                                                                                                                                                        tmp___54 = (int )((Bool )0);
                                                                                                                                                      }
                                                                                                                                                      if (tmp___54) {
                                                                                                                                                        tmp___57 = vgPlain_strlen((Char const   *)"--fullpath-after");
                                                                                                                                                        val___3 = (Char *)(arg + (tmp___57 + 1UL));
                                                                                                                                                        tmp_str = val___3;
                                                                                                                                                        if (vgPlain_clo_n_fullpath_after >= 100) {
                                                                                                                                                          vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                  "Too many --fullpath-after= specifications.\nIncrease VG_CLO_MAX_FULLPATH_AFTER and recompile.\n");
                                                                                                                                                        } else {

                                                                                                                                                        }
                                                                                                                                                        vgPlain_clo_fullpath_after[vgPlain_clo_n_fullpath_after] = tmp_str;
                                                                                                                                                        vgPlain_clo_n_fullpath_after ++;
                                                                                                                                                      } else {
                                                                                                                                                        _L___6: /* CIL Label */ 
                                                                                                                                                        if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                          if ((unsigned int )"--require-text-symbol=" != (unsigned int )((void *)0)) {
                                                                                                                                                            tmp___49 = vgPlain_strlen((Char const   *)"--require-text-symbol");
                                                                                                                                                            tmp___50 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                                       (Char const   *)"--require-text-symbol=",
                                                                                                                                                                                       tmp___49 + 1UL);
                                                                                                                                                            if (tmp___50 == 0) {
                                                                                                                                                              tmp___48 = (int )((Bool )1);
                                                                                                                                                            } else {
                                                                                                                                                              tmp___48 = (int )((Bool )0);
                                                                                                                                                            }
                                                                                                                                                          } else {
                                                                                                                                                            tmp___48 = (int )((Bool )0);
                                                                                                                                                          }
                                                                                                                                                        } else {
                                                                                                                                                          tmp___48 = (int )((Bool )0);
                                                                                                                                                        }
                                                                                                                                                        if (tmp___48) {
                                                                                                                                                          tmp___51 = vgPlain_strlen((Char const   *)"--require-text-symbol");
                                                                                                                                                          val___2 = (Char *)(arg + (tmp___51 + 1UL));
                                                                                                                                                          tmp_str = val___2;
                                                                                                                                                          if (vgPlain_clo_n_req_tsyms >= 100) {
                                                                                                                                                            vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                    "Too many --require-text-symbol= specifications.\nIncrease VG_CLO_MAX_REQ_TSYMS and recompile.\n");
                                                                                                                                                          } else {

                                                                                                                                                          }
                                                                                                                                                          ok = (Bool )1;
                                                                                                                                                          if (tmp_str) {
                                                                                                                                                            tmp___12 = vgPlain_strlen((Char const   *)tmp_str);
                                                                                                                                                            if (tmp___12 > 0UL) {
                                                                                                                                                              tmp___13 = 1;
                                                                                                                                                            } else {
                                                                                                                                                              tmp___13 = 0;
                                                                                                                                                            }
                                                                                                                                                          } else {
                                                                                                                                                            tmp___13 = 0;
                                                                                                                                                          }
                                                                                                                                                          ok = (Bool )tmp___13;
                                                                                                                                                          if (ok) {
                                                                                                                                                            patt[3] = *(tmp_str + 0);
                                                                                                                                                            patt[0] = patt[3];
                                                                                                                                                            patt[4] = (Char )'?';
                                                                                                                                                            patt[1] = patt[4];
                                                                                                                                                            patt[5] = (Char )'*';
                                                                                                                                                            patt[2] = patt[5];
                                                                                                                                                            patt[6] = (Char )0;
                                                                                                                                                            ok = vgPlain_string_match((Char const   *)(patt),
                                                                                                                                                                                      (Char const   *)tmp_str);
                                                                                                                                                          } else {

                                                                                                                                                          }
                                                                                                                                                          if (! ok) {
                                                                                                                                                            vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                    "Invalid --require-text-symbol= specification.\n");
                                                                                                                                                          } else {

                                                                                                                                                          }
                                                                                                                                                          vgPlain_clo_req_tsyms[vgPlain_clo_n_req_tsyms] = (HChar *)tmp_str;
                                                                                                                                                          vgPlain_clo_n_req_tsyms ++;
                                                                                                                                                        } else {
                                                                                                                                                          _L___5: /* CIL Label */ 
                                                                                                                                                          if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                            if ((unsigned int )"--trace-flags=" != (unsigned int )((void *)0)) {
                                                                                                                                                              tmp___43 = vgPlain_strlen((Char const   *)"--trace-flags");
                                                                                                                                                              tmp___44 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                                         (Char const   *)"--trace-flags=",
                                                                                                                                                                                         tmp___43 + 1UL);
                                                                                                                                                              if (tmp___44 == 0) {
                                                                                                                                                                tmp___42 = (int )((Bool )1);
                                                                                                                                                              } else {
                                                                                                                                                                tmp___42 = (int )((Bool )0);
                                                                                                                                                              }
                                                                                                                                                            } else {
                                                                                                                                                              tmp___42 = (int )((Bool )0);
                                                                                                                                                            }
                                                                                                                                                          } else {
                                                                                                                                                            tmp___42 = (int )((Bool )0);
                                                                                                                                                          }
                                                                                                                                                          if (tmp___42) {
                                                                                                                                                            tmp___45 = vgPlain_strlen((Char const   *)"--trace-flags");
                                                                                                                                                            val___1 = (Char *)(arg + (tmp___45 + 1UL));
                                                                                                                                                            tmp_str = val___1;
                                                                                                                                                            tmp___14 = vgPlain_strlen((Char const   *)tmp_str);
                                                                                                                                                            if (8UL != tmp___14) {
                                                                                                                                                              vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                      "--trace-flags argument must have 8 digits\n");
                                                                                                                                                            } else {

                                                                                                                                                            }
                                                                                                                                                            j = 0;
                                                                                                                                                            while (j < 8) {
                                                                                                                                                              if (48 == (int )*(tmp_str + j)) {

                                                                                                                                                              } else
                                                                                                                                                              if (49 == (int )*(tmp_str + j)) {
                                                                                                                                                                vgPlain_clo_trace_flags = (UChar )((int )vgPlain_clo_trace_flags | (1 << (7 - j)));
                                                                                                                                                              } else {
                                                                                                                                                                vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                        "--trace-flags argument can only contain 0s and 1s\n");
                                                                                                                                                              }
                                                                                                                                                              j ++;
                                                                                                                                                            }
                                                                                                                                                          } else {
                                                                                                                                                            _L___4: /* CIL Label */ 
                                                                                                                                                            if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                              if ((unsigned int )"--profile-flags=" != (unsigned int )((void *)0)) {
                                                                                                                                                                tmp___37 = vgPlain_strlen((Char const   *)"--profile-flags");
                                                                                                                                                                tmp___38 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                                           (Char const   *)"--profile-flags=",
                                                                                                                                                                                           tmp___37 + 1UL);
                                                                                                                                                                if (tmp___38 == 0) {
                                                                                                                                                                  tmp___36 = (int )((Bool )1);
                                                                                                                                                                } else {
                                                                                                                                                                  tmp___36 = (int )((Bool )0);
                                                                                                                                                                }
                                                                                                                                                              } else {
                                                                                                                                                                tmp___36 = (int )((Bool )0);
                                                                                                                                                              }
                                                                                                                                                            } else {
                                                                                                                                                              tmp___36 = (int )((Bool )0);
                                                                                                                                                            }
                                                                                                                                                            if (tmp___36) {
                                                                                                                                                              tmp___39 = vgPlain_strlen((Char const   *)"--profile-flags");
                                                                                                                                                              val___0 = (Char *)(arg + (tmp___39 + 1UL));
                                                                                                                                                              tmp_str = val___0;
                                                                                                                                                              tmp___15 = vgPlain_strlen((Char const   *)tmp_str);
                                                                                                                                                              if (8UL != tmp___15) {
                                                                                                                                                                vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                        "--profile-flags argument must have 8 digits\n");
                                                                                                                                                              } else {

                                                                                                                                                              }
                                                                                                                                                              j___0 = 0;
                                                                                                                                                              while (j___0 < 8) {
                                                                                                                                                                if (48 == (int )*(tmp_str + j___0)) {

                                                                                                                                                                } else
                                                                                                                                                                if (49 == (int )*(tmp_str + j___0)) {
                                                                                                                                                                  vgPlain_clo_profile_flags = (UChar )((int )vgPlain_clo_profile_flags | (1 << (7 - j___0)));
                                                                                                                                                                } else {
                                                                                                                                                                  vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                          "--profile-flags argument can only contain 0s and 1s\n");
                                                                                                                                                                }
                                                                                                                                                                j___0 ++;
                                                                                                                                                              }
                                                                                                                                                            } else {
                                                                                                                                                              _L___3: /* CIL Label */ 
                                                                                                                                                              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                                if ((unsigned int )"--trace-notbelow=" != (unsigned int )((void *)0)) {
                                                                                                                                                                  tmp___30 = vgPlain_strlen((Char const   *)"--trace-notbelow");
                                                                                                                                                                  tmp___31 = vgPlain_strncmp((Char const   *)arg,
                                                                                                                                                                                             (Char const   *)"--trace-notbelow=",
                                                                                                                                                                                             tmp___30 + 1UL);
                                                                                                                                                                  if (tmp___31 == 0) {
                                                                                                                                                                    tmp___29 = (int )((Bool )1);
                                                                                                                                                                  } else {
                                                                                                                                                                    tmp___29 = (int )((Bool )0);
                                                                                                                                                                  }
                                                                                                                                                                } else {
                                                                                                                                                                  tmp___29 = (int )((Bool )0);
                                                                                                                                                                }
                                                                                                                                                              } else {
                                                                                                                                                                tmp___29 = (int )((Bool )0);
                                                                                                                                                              }
                                                                                                                                                              if (tmp___29) {
                                                                                                                                                                tmp___32 = vgPlain_strlen((Char const   *)"--trace-notbelow");
                                                                                                                                                                val = (Char *)(arg + (tmp___32 + 1UL));
                                                                                                                                                                tmp___33 = vgPlain_strtoll10(val,
                                                                                                                                                                                             & s);
                                                                                                                                                                n = tmp___33;
                                                                                                                                                                vgPlain_clo_trace_notbelow = (Int )n;
                                                                                                                                                                if (0 != (int )*(s + 0)) {
                                                                                                                                                                  vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                          "");
                                                                                                                                                                } else
                                                                                                                                                                if ((Long )vgPlain_clo_trace_notbelow != n) {
                                                                                                                                                                  vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                          "");
                                                                                                                                                                } else {

                                                                                                                                                                }
                                                                                                                                                              } else {
                                                                                                                                                                _L___2: /* CIL Label */ 
                                                                                                                                                                if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                                  if ((unsigned int )"--gen-suppressions=no" != (unsigned int )((void *)0)) {
                                                                                                                                                                    tmp___26 = vgPlain_strcmp((Char const   *)arg,
                                                                                                                                                                                              (Char const   *)"--gen-suppressions=no");
                                                                                                                                                                    if (tmp___26 == 0) {
                                                                                                                                                                      tmp___25 = (int )((Bool )1);
                                                                                                                                                                    } else {
                                                                                                                                                                      tmp___25 = (int )((Bool )0);
                                                                                                                                                                    }
                                                                                                                                                                  } else {
                                                                                                                                                                    tmp___25 = (int )((Bool )0);
                                                                                                                                                                  }
                                                                                                                                                                } else {
                                                                                                                                                                  tmp___25 = (int )((Bool )0);
                                                                                                                                                                }
                                                                                                                                                                if (tmp___25) {
                                                                                                                                                                  vgPlain_clo_gen_suppressions = 0;
                                                                                                                                                                } else {
                                                                                                                                                                  _L___1: /* CIL Label */ 
                                                                                                                                                                  if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                                    if ((unsigned int )"--gen-suppressions=yes" != (unsigned int )((void *)0)) {
                                                                                                                                                                      tmp___23 = vgPlain_strcmp((Char const   *)arg,
                                                                                                                                                                                                (Char const   *)"--gen-suppressions=yes");
                                                                                                                                                                      if (tmp___23 == 0) {
                                                                                                                                                                        tmp___22 = (int )((Bool )1);
                                                                                                                                                                      } else {
                                                                                                                                                                        tmp___22 = (int )((Bool )0);
                                                                                                                                                                      }
                                                                                                                                                                    } else {
                                                                                                                                                                      tmp___22 = (int )((Bool )0);
                                                                                                                                                                    }
                                                                                                                                                                  } else {
                                                                                                                                                                    tmp___22 = (int )((Bool )0);
                                                                                                                                                                  }
                                                                                                                                                                  if (tmp___22) {
                                                                                                                                                                    vgPlain_clo_gen_suppressions = 1;
                                                                                                                                                                  } else {
                                                                                                                                                                    _L___0: /* CIL Label */ 
                                                                                                                                                                    if ((unsigned int )arg != (unsigned int )((void *)0)) {
                                                                                                                                                                      if ((unsigned int )"--gen-suppressions=all" != (unsigned int )((void *)0)) {
                                                                                                                                                                        tmp___20 = vgPlain_strcmp((Char const   *)arg,
                                                                                                                                                                                                  (Char const   *)"--gen-suppressions=all");
                                                                                                                                                                        if (tmp___20 == 0) {
                                                                                                                                                                          tmp___19 = (int )((Bool )1);
                                                                                                                                                                        } else {
                                                                                                                                                                          tmp___19 = (int )((Bool )0);
                                                                                                                                                                        }
                                                                                                                                                                      } else {
                                                                                                                                                                        tmp___19 = (int )((Bool )0);
                                                                                                                                                                      }
                                                                                                                                                                    } else {
                                                                                                                                                                      tmp___19 = (int )((Bool )0);
                                                                                                                                                                    }
                                                                                                                                                                    if (tmp___19) {
                                                                                                                                                                      vgPlain_clo_gen_suppressions = 2;
                                                                                                                                                                    } else
                                                                                                                                                                    _L: /* CIL Label */ 
                                                                                                                                                                    if (! vgPlain_needs.command_line_options) {
                                                                                                                                                                      vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                              "");
                                                                                                                                                                    } else {
                                                                                                                                                                      tmp___16 = __builtin_expect((long )(! (! vgPlain_tdict.tool_process_cmd_line_option)),
                                                                                                                                                                                                  1L);
                                                                                                                                                                      if (tmp___16) {

                                                                                                                                                                      } else {
                                                                                                                                                                        vgPlain_assert_fail((Bool )0,
                                                                                                                                                                                            (Char const   *)"VG_(tdict).tool_process_cmd_line_option",
                                                                                                                                                                                            (Char const   *)"m_main.c",
                                                                                                                                                                                            674,
                                                                                                                                                                                            (Char const   *)"main_process_cmd_line_options",
                                                                                                                                                                                            "you forgot to set VgToolInterface function \'tool_process_cmd_line_option\'");
                                                                                                                                                                      }
                                                                                                                                                                      tmp___17 = (*(vgPlain_tdict.tool_process_cmd_line_option))((Char *)arg);
                                                                                                                                                                      if (tmp___17) {

                                                                                                                                                                      } else {
                                                                                                                                                                        vgPlain_fmsg_bad_option(arg,
                                                                                                                                                                                                "");
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  }
                                                                                                                                                                }
                                                                                                                                                              }
                                                                                                                                                            }
                                                                                                                                                          }
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                    }
                                                                                                                                                  }
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                      }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              }
                                                                                                                            }
                                                                                                                          }
                                                                                                                        }
                                                                                                                      }
                                                                                                                    }
                                                                                                                  }
                                                                                                                }
                                                                                                              }
                                                                                                            }
                                                                                                          }
                                                                                                        }
                                                                                                      }
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    __Cont: /* CIL Label */ 
    i ++;
  }
  if (vgPlain_clo_vex_control.guest_chase_thresh >= vgPlain_clo_vex_control.guest_max_insns) {
    vgPlain_clo_vex_control.guest_chase_thresh = vgPlain_clo_vex_control.guest_max_insns - 1;
  } else {

  }
  if (vgPlain_clo_vex_control.guest_chase_thresh < 0) {
    vgPlain_clo_vex_control.guest_chase_thresh = 0;
  } else {

  }
  if (vgPlain_clo_verbosity < 0) {
    vgPlain_clo_verbosity = 0;
  } else {

  }
  vgPlain_dyn_vgdb_error = vgPlain_clo_vgdb_error;
  if (vgPlain_clo_gen_suppressions > 0) {
    if (! vgPlain_needs.core_errors) {
      if (! vgPlain_needs.tool_errors) {
        vgPlain_fmsg_bad_option((HChar *)"--gen-suppressions=yes",
                                "Can\'t use --gen-suppressions= with %s\nbecause it doesn\'t generate errors.\n",
                                vgPlain_details.name);
      } else {

      }
    } else {

    }
  } else {

  }
  if (vgPlain_clo_xml) {
    if (! vgPlain_needs.xml_output) {
      vgPlain_clo_xml = (Bool )0;
      vgPlain_fmsg_bad_option((HChar *)"--xml=yes",
                              "%s does not support XML output.\n",
                              vgPlain_details.name);
    } else {

    }
  } else {

  }
  tmp___598 = __builtin_expect((long )(! (! (vgPlain_clo_gen_suppressions >= 0))),
                               1L);
  if (tmp___598) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(clo_gen_suppressions) >= 0",
                        (Char const   *)"m_main.c", 714,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp___599 = __builtin_expect((long )(! (! (vgPlain_clo_gen_suppressions <= 2))),
                               1L);
  if (tmp___599) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(clo_gen_suppressions) <= 2",
                        (Char const   *)"m_main.c", 715,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  if (vgPlain_clo_xml) {
    if (vgPlain_clo_gen_suppressions == 1) {
      vgPlain_fmsg_bad_option((HChar *)"--xml=yes together with --gen-suppressions=yes",
                              "When --xml=yes is specified, --gen-suppressions=no\nor --gen-suppressions=all is allowed, but not --gen-suppressions=yes.\n");
    } else {

    }
    if (vgPlain_clo_db_attach) {
      vgPlain_fmsg_bad_option((HChar *)"--xml=yes together with --db-attach=yes",
                              "--db-attach=yes is not allowed with --xml=yes\nbecause it would require user input.\n");
    } else {

    }
    if (vgPlain_clo_dump_error > 0) {
      vgPlain_fmsg_bad_option((HChar *)"--xml=yes together with --dump-error",
                              "");
    } else {

    }
    vgPlain_clo_error_limit = (Bool )0;
  } else {

  }
  tmp___600 = __builtin_expect((long )(! (! (vgPlain_log_output_sink.fd == 2))),
                               1L);
  if (tmp___600) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(log_output_sink).fd == 2",
                        (Char const   *)"m_main.c", 777,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp___601 = __builtin_expect((long )(! (! ((int )vgPlain_log_output_sink.is_socket == 0))),
                               1L);
  if (tmp___601) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(log_output_sink).is_socket == False",
                        (Char const   *)"m_main.c", 778,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp___602 = __builtin_expect((long )(! (! ((unsigned int )vgPlain_clo_log_fname_expanded == (unsigned int )((void *)0)))),
                               1L);
  if (tmp___602) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(clo_log_fname_expanded) == NULL",
                        (Char const   *)"m_main.c", 779,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp___603 = __builtin_expect((long )(! (! (vgPlain_xml_output_sink.fd == -1))),
                               1L);
  if (tmp___603) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(xml_output_sink).fd == -1",
                        (Char const   *)"m_main.c", 781,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp___604 = __builtin_expect((long )(! (! ((int )vgPlain_xml_output_sink.is_socket == 0))),
                               1L);
  if (tmp___604) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(xml_output_sink).is_socket == False",
                        (Char const   *)"m_main.c", 782,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp___605 = __builtin_expect((long )(! (! ((unsigned int )vgPlain_clo_xml_fname_expanded == (unsigned int )((void *)0)))),
                               1L);
  if (tmp___605) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(clo_xml_fname_expanded) == NULL",
                        (Char const   *)"m_main.c", 783,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  switch ((unsigned int )log_to) {
  case 0U: 
  tmp___606 = __builtin_expect((long )(! (! ((unsigned int )log_fsname_unexpanded == (unsigned int )((void *)0)))),
                               1L);
  if (tmp___606) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"log_fsname_unexpanded == NULL",
                        (Char const   *)"m_main.c", 790,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  break;
  case 1U: 
  tmp___607 = __builtin_expect((long )(! (! ((unsigned int )log_fsname_unexpanded != (unsigned int )((void *)0)))),
                               1L);
  if (tmp___607) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"log_fsname_unexpanded != NULL",
                        (Char const   *)"m_main.c", 796,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp___608 = vgPlain_strlen((Char const   *)log_fsname_unexpanded);
  if (tmp___608 <= 900UL) {
    tmp___609 = 1;
  } else {
    tmp___609 = 0;
  }
  tmp___610 = __builtin_expect((long )tmp___609, 1L);
  if (tmp___610) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(strlen)(log_fsname_unexpanded) <= 900",
                        (Char const   *)"m_main.c", 797,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  logfilename = vgPlain_expand_file_name((Char *)"--log-file",
                                         log_fsname_unexpanded);
  sres = vgPlain_open((Char const   *)logfilename, 577, 384);
  tmp___614 = sr_isError(sres);
  if (tmp___614) {
    tmp___612 = sr_Err(sres);
    tmp___613 = vgPlain_strerror(tmp___612);
    vgPlain_fmsg("can\'t create log file \'%s\': %s\n", logfilename, tmp___613);
    vgPlain_exit(1);
  } else {
    tmp___611 = sr_Res(sres);
    tmp_log_fd = (Int )tmp___611;
    vgPlain_clo_log_fname_expanded = logfilename;
  }
  break;
  case 2U: 
  tmp___615 = __builtin_expect((long )(! (! ((unsigned int )log_fsname_unexpanded != (unsigned int )((void *)0)))),
                               1L);
  if (tmp___615) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"log_fsname_unexpanded != NULL",
                        (Char const   *)"m_main.c", 819,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp___616 = vgPlain_strlen((Char const   *)log_fsname_unexpanded);
  if (tmp___616 <= 900UL) {
    tmp___617 = 1;
  } else {
    tmp___617 = 0;
  }
  tmp___618 = __builtin_expect((long )tmp___617, 1L);
  if (tmp___618) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(strlen)(log_fsname_unexpanded) <= 900",
                        (Char const   *)"m_main.c", 820,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp_log_fd = vgPlain_connect_via_socket((UChar *)log_fsname_unexpanded);
  if (tmp_log_fd == -1) {
    vgPlain_fmsg("Invalid --log-socket spec of \'%s\'\n", log_fsname_unexpanded);
    vgPlain_exit(1);
  } else {

  }
  if (tmp_log_fd == -2) {
    vgPlain_umsg("failed to connect to logging server \'%s\'.\nLog messages will sent to stderr instead.\n",
                 log_fsname_unexpanded);
    tmp___619 = __builtin_expect((long )(! (! (vgPlain_log_output_sink.fd == 2))),
                                 1L);
    if (tmp___619) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VG_(log_output_sink).fd == 2",
                          (Char const   *)"m_main.c", 834,
                          (Char const   *)"main_process_cmd_line_options", "");
    }
    tmp_log_fd = 2;
  } else {
    tmp___620 = __builtin_expect((long )(! (! (tmp_log_fd > 0))), 1L);
    if (tmp___620) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"tmp_log_fd > 0",
                          (Char const   *)"m_main.c", 837,
                          (Char const   *)"main_process_cmd_line_options", "");
    }
    vgPlain_log_output_sink.is_socket = (Bool )1;
  }
  break;
  }
  switch ((unsigned int )xml_to) {
  case 0U: 
  tmp___621 = __builtin_expect((long )(! (! ((unsigned int )xml_fsname_unexpanded == (unsigned int )((void *)0)))),
                               1L);
  if (tmp___621) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"xml_fsname_unexpanded == NULL",
                        (Char const   *)"m_main.c", 849,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  break;
  case 1U: 
  tmp___622 = __builtin_expect((long )(! (! ((unsigned int )xml_fsname_unexpanded != (unsigned int )((void *)0)))),
                               1L);
  if (tmp___622) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"xml_fsname_unexpanded != NULL",
                        (Char const   *)"m_main.c", 855,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp___623 = vgPlain_strlen((Char const   *)xml_fsname_unexpanded);
  if (tmp___623 <= 900UL) {
    tmp___624 = 1;
  } else {
    tmp___624 = 0;
  }
  tmp___625 = __builtin_expect((long )tmp___624, 1L);
  if (tmp___625) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(strlen)(xml_fsname_unexpanded) <= 900",
                        (Char const   *)"m_main.c", 856,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  xmlfilename = vgPlain_expand_file_name((Char *)"--xml-file",
                                         xml_fsname_unexpanded);
  sres = vgPlain_open((Char const   *)xmlfilename, 577, 384);
  tmp___629 = sr_isError(sres);
  if (tmp___629) {
    tmp___627 = sr_Err(sres);
    tmp___628 = vgPlain_strerror(tmp___627);
    vgPlain_fmsg("can\'t create XML file \'%s\': %s\n", xmlfilename, tmp___628);
    vgPlain_exit(1);
  } else {
    tmp___626 = sr_Res(sres);
    tmp_xml_fd = (Int )tmp___626;
    vgPlain_clo_xml_fname_expanded = xmlfilename;
    *xml_fname_unexpanded = vgPlain_strdup((HChar *)"main.mpclo.2",
                                           (Char const   *)xml_fsname_unexpanded);
  }
  break;
  case 2U: 
  tmp___630 = __builtin_expect((long )(! (! ((unsigned int )xml_fsname_unexpanded != (unsigned int )((void *)0)))),
                               1L);
  if (tmp___630) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"xml_fsname_unexpanded != NULL",
                        (Char const   *)"m_main.c", 881,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp___631 = vgPlain_strlen((Char const   *)xml_fsname_unexpanded);
  if (tmp___631 <= 900UL) {
    tmp___632 = 1;
  } else {
    tmp___632 = 0;
  }
  tmp___633 = __builtin_expect((long )tmp___632, 1L);
  if (tmp___633) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(strlen)(xml_fsname_unexpanded) <= 900",
                        (Char const   *)"m_main.c", 882,
                        (Char const   *)"main_process_cmd_line_options", "");
  }
  tmp_xml_fd = vgPlain_connect_via_socket((UChar *)xml_fsname_unexpanded);
  if (tmp_xml_fd == -1) {
    vgPlain_fmsg("Invalid --xml-socket spec of \'%s\'\n", xml_fsname_unexpanded);
    vgPlain_exit(1);
  } else {

  }
  if (tmp_xml_fd == -2) {
    vgPlain_umsg("failed to connect to XML logging server \'%s\'.\nXML output will sent to stderr instead.\n",
                 xml_fsname_unexpanded);
    tmp___634 = __builtin_expect((long )(! (! (vgPlain_xml_output_sink.fd == 2))),
                                 1L);
    if (tmp___634) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VG_(xml_output_sink).fd == 2",
                          (Char const   *)"m_main.c", 895,
                          (Char const   *)"main_process_cmd_line_options", "");
    }
    tmp_xml_fd = 2;
  } else {
    tmp___635 = __builtin_expect((long )(! (! (tmp_xml_fd > 0))), 1L);
    if (tmp___635) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"tmp_xml_fd > 0",
                          (Char const   *)"m_main.c", 898,
                          (Char const   *)"main_process_cmd_line_options", "");
    }
    vgPlain_xml_output_sink.is_socket = (Bool )1;
  }
  break;
  }
  if (vgPlain_clo_xml) {
    if (tmp_xml_fd == -1) {
      vgPlain_fmsg_bad_option((HChar *)"--xml=yes, but no XML destination specified",
                              "--xml=yes has been specified, but there is no XML output\ndestination.  You must specify an XML output destination\nusing --xml-fd, --xml-file or --xml-socket.\n");
    } else {

    }
  } else {

  }
  if (tmp_log_fd >= 0) {
    tmp_log_fd = vgPlain_fcntl(tmp_log_fd, 0, (Addr )vgPlain_fd_hard_limit);
    if (tmp_log_fd < 0) {
      vgPlain_message((VgMsgKind )1,
                      "valgrind: failed to move logfile fd into safe range, using stderr\n");
      vgPlain_log_output_sink.fd = 2;
      vgPlain_log_output_sink.is_socket = (Bool )0;
    } else {
      vgPlain_log_output_sink.fd = tmp_log_fd;
      vgPlain_fcntl(vgPlain_log_output_sink.fd, 2, (Addr )1);
    }
  } else {
    vgPlain_log_output_sink.fd = -1;
    vgPlain_log_output_sink.is_socket = (Bool )0;
  }
  if (tmp_xml_fd >= 0) {
    tmp_xml_fd = vgPlain_fcntl(tmp_xml_fd, 0, (Addr )vgPlain_fd_hard_limit);
    if (tmp_xml_fd < 0) {
      vgPlain_message((VgMsgKind )1,
                      "valgrind: failed to move XML file fd into safe range, using stderr\n");
      vgPlain_xml_output_sink.fd = 2;
      vgPlain_xml_output_sink.is_socket = (Bool )0;
    } else {
      vgPlain_xml_output_sink.fd = tmp_xml_fd;
      vgPlain_fcntl(vgPlain_xml_output_sink.fd, 2, (Addr )1);
    }
  } else {
    vgPlain_xml_output_sink.fd = -1;
    vgPlain_xml_output_sink.is_socket = (Bool )0;
  }
  if (vgPlain_clo_n_suppressions < 99) {
    if (vgPlain_needs.core_errors) {
      goto _L___69;
    } else
    if (vgPlain_needs.tool_errors) {
      _L___69: /* CIL Label */ 
      tmp___636 = vgPlain_strlen(vgPlain_libdir);
      len = (Int )((tmp___636 + 1UL) + (SizeT )sizeof(default_supp));
      tmp___637 = vgPlain_arena_malloc(0, (HChar *)"main.mpclo.3", (SizeT )len);
      buf = (Char *)tmp___637;
      vgPlain_sprintf(buf, "%s/%s", vgPlain_libdir, default_supp);
      vgPlain_clo_suppressions[vgPlain_clo_n_suppressions] = buf;
      vgPlain_clo_n_suppressions ++;
    } else {

    }
  } else {

  }
  if ((unsigned int )log_to == 0U) {
    tmp___638 = 1;
  } else
  if ((unsigned int )log_to == 2U) {
    tmp___638 = 1;
  } else {
    tmp___638 = 0;
  }
  *logging_to_fd = (Bool )tmp___638;
  return;
}
}
static void print_file_vars(Char *format ) 
{ 
  Int i ;
  Char *qualname ;
  Char *qual ;

  {
  i = 0;
  while (*(format + i)) {
    if ((int )*(format + i) == 37) {
      i ++;
      if (113 == (int )*(format + i)) {
        i ++;
        if (123 == (int )*(format + i)) {
          i ++;
          qualname = format + i;
          while (1) {
            if (125 == (int )*(format + i)) {
              *(format + i) = (Char )0;
              qual = vgPlain_getenv(qualname);
              break;
            } else {

            }
            i ++;
          }
          vgPlain_printf_xml_no_f_c("<logfilequalifier> <var>%t</var> <value>%t</value> </logfilequalifier>\n",
                                    qualname, qual);
          *(format + i) = (Char )'}';
          i ++;
        } else {

        }
      } else {

      }
    } else {
      i ++;
    }
  }
  return;
}
}
static void umsg_or_xml_arg(Char const   *arg ,
                            UInt (*umsg_or_xml)(HChar const   *  , ...) ) 
{ 
  SizeT len ;
  SizeT tmp ;
  Char *special ;
  Int i ;
  Char *tmp___0 ;

  {
  tmp = vgPlain_strlen(arg);
  len = tmp;
  special = (Char *)" \\<>";
  i = 0;
  while ((SizeT )i < len) {
    tmp___0 = vgPlain_strchr((Char const   *)special, (Char )*(arg + i));
    if (tmp___0) {
      (*umsg_or_xml)("\\");
    } else {

    }
    (*umsg_or_xml)("%c", (int const   )*(arg + i));
    i ++;
  }
  return;
}
}
static void print_preamble(Bool logging_to_fd , Char *xml_fname_unexpanded ,
                           HChar const   *toolname ) 
{ 
  Int i ;
  HChar *xpre ;
  char const   *tmp ;
  HChar *xpost ;
  char const   *tmp___0 ;
  UInt (*umsg_or_xml)(HChar const   *  , ...) ;
  UInt ( /* format attribute */  (*tmp___1))(HChar const   *format  , ...) ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  Char *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  SizeT tmp___8 ;
  Int tmp___9 ;
  int tmp___10 ;
  Int tmp___11 ;
  char const   *tmp___12 ;
  HChar *s ;
  void *tmp___13 ;
  Word tmp___14 ;
  Int tmp___15 ;
  Int tmp___16 ;
  Int tmp___17 ;
  void *tmp___18 ;
  Word tmp___19 ;
  void *tmp___20 ;
  Word tmp___21 ;
  SysRes fd ;
  VexArch vex_arch ;
  VexArchInfo vex_archinfo ;
  void *tmp___22 ;
  Word tmp___23 ;
  Char version_buf[256] ;
  Int n ;
  UWord tmp___24 ;
  Int tmp___25 ;
  long tmp___26 ;
  UWord tmp___27 ;
  Bool tmp___28 ;
  HChar const   *tmp___29 ;
  HChar const   *tmp___30 ;

  {
  if (vgPlain_clo_xml) {
    tmp = "  <line>";
  } else {
    tmp = "";
  }
  xpre = (HChar *)tmp;
  if (vgPlain_clo_xml) {
    tmp___0 = "</line>";
  } else {
    tmp___0 = "";
  }
  xpost = (HChar *)tmp___0;
  if (vgPlain_clo_xml) {
    tmp___1 = & vgPlain_printf_xml;
  } else {
    tmp___1 = & vgPlain_umsg;
  }
  umsg_or_xml = (UInt (*)(HChar const   *  , ...))tmp___1;
  tmp___2 = __builtin_expect((long )(! (! vgPlain_args_for_client)), 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(args_for_client)",
                        (Char const   *)"m_main.c", 1057,
                        (Char const   *)"print_preamble", "");
  }
  tmp___3 = __builtin_expect((long )(! (! vgPlain_args_for_valgrind)), 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(args_for_valgrind)",
                        (Char const   *)"m_main.c", 1058,
                        (Char const   *)"print_preamble", "");
  }
  tmp___4 = __builtin_expect((long )(! (! toolname)), 1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"toolname",
                        (Char const   *)"m_main.c", 1059,
                        (Char const   *)"print_preamble", "");
  }
  if (vgPlain_clo_xml) {
    vgPlain_printf_xml("<?xml version=\"1.0\"?>\n");
    vgPlain_printf_xml("\n");
    vgPlain_printf_xml("<valgrindoutput>\n");
    vgPlain_printf_xml("\n");
    vgPlain_printf_xml("<protocolversion>4</protocolversion>\n");
    vgPlain_printf_xml("<protocoltool>%s</protocoltool>\n", toolname);
    vgPlain_printf_xml("\n");
  } else {

  }
  if (vgPlain_clo_xml) {
    goto _L;
  } else
  if (vgPlain_clo_verbosity > 0) {
    _L: /* CIL Label */ 
    if (vgPlain_clo_xml) {
      vgPlain_printf_xml("<preamble>\n");
    } else {

    }
    if ((unsigned int )((void *)0) == (unsigned int )vgPlain_details.version) {
      tmp___5 = (Char *)"";
    } else {
      tmp___5 = vgPlain_details.version;
    }
    if ((unsigned int )((void *)0) == (unsigned int )vgPlain_details.version) {
      tmp___6 = "";
    } else {
      tmp___6 = "-";
    }
    if (vgPlain_clo_xml) {
      tmp___7 = "%s%t%t%t, %t%s\n";
    } else {
      tmp___7 = "%s%s%s%s, %s%s\n";
    }
    (*umsg_or_xml)(tmp___7, xpre, vgPlain_details.name, tmp___6, tmp___5,
                   vgPlain_details.description, xpost);
    tmp___8 = vgPlain_strlen((Char const   *)toolname);
    if (tmp___8 >= 4UL) {
      if ((unsigned int )toolname != (unsigned int )((void *)0)) {
        if ((unsigned int )"exp-" != (unsigned int )((void *)0)) {
          tmp___11 = vgPlain_strncmp((Char const   *)toolname,
                                     (Char const   *)"exp-", (SizeT )4);
          if (tmp___11 == 0) {
            tmp___10 = (int )((Bool )1);
          } else {
            tmp___10 = (int )((Bool )0);
          }
        } else {
          tmp___10 = (int )((Bool )0);
        }
      } else {
        tmp___10 = (int )((Bool )0);
      }
      if (tmp___10) {
        (*umsg_or_xml)("%sNOTE: This is an Experimental-Class Valgrind Tool%s\n",
                       xpre, xpost);
      } else {

      }
    } else {

    }
    if (vgPlain_clo_xml) {
      tmp___12 = "%s%t%s\n";
    } else {
      tmp___12 = "%s%s%s\n";
    }
    (*umsg_or_xml)(tmp___12, xpre, vgPlain_details.copyright_author, xpost);
    (*umsg_or_xml)("%sUsing Valgrind-%s and LibVEX; rerun with -h for copyright info%s\n",
                   xpre, "3.7.0.SVN", xpost);
    (*umsg_or_xml)("%sCommand: ", xpre);
    if (vgPlain_args_the_exename) {
      umsg_or_xml_arg((Char const   *)vgPlain_args_the_exename, umsg_or_xml);
    } else {

    }
    i = 0;
    while (1) {
      tmp___14 = vgPlain_sizeXA(vgPlain_args_for_client);
      if ((Word )i < tmp___14) {

      } else {
        break;
      }
      tmp___13 = vgPlain_indexXA(vgPlain_args_for_client, (Word )i);
      s = *((HChar **)tmp___13);
      (*umsg_or_xml)(" ");
      umsg_or_xml_arg((Char const   *)s, umsg_or_xml);
      i ++;
    }
    (*umsg_or_xml)("%s\n", xpost);
    if (vgPlain_clo_xml) {
      vgPlain_printf_xml("</preamble>\n");
    } else {

    }
  } else {

  }
  if (! vgPlain_clo_xml) {
    if (vgPlain_clo_verbosity > 0) {
      if (! logging_to_fd) {
        tmp___15 = vgPlain_getppid();
        vgPlain_umsg("Parent PID: %d\n", tmp___15);
      } else {
        goto _L___1;
      }
    } else {
      goto _L___1;
    }
  } else
  _L___1: /* CIL Label */ 
  _L___0: /* CIL Label */ 
  if (vgPlain_clo_xml) {
    vgPlain_printf_xml("\n");
    tmp___16 = vgPlain_getpid();
    vgPlain_printf_xml("<pid>%d</pid>\n", tmp___16);
    tmp___17 = vgPlain_getppid();
    vgPlain_printf_xml("<ppid>%d</ppid>\n", tmp___17);
    vgPlain_printf_xml_no_f_c("<tool>%t</tool>\n", toolname);
    if (xml_fname_unexpanded) {
      print_file_vars(xml_fname_unexpanded);
    } else {

    }
    if (vgPlain_clo_xml_user_comment) {
      vgPlain_printf_xml("<usercomment>%s</usercomment>\n",
                         vgPlain_clo_xml_user_comment);
    } else {

    }
    vgPlain_printf_xml("\n");
    vgPlain_printf_xml("<args>\n");
    vgPlain_printf_xml("  <vargv>\n");
    if (vgPlain_name_of_launcher) {
      vgPlain_printf_xml_no_f_c("    <exe>%t</exe>\n", vgPlain_name_of_launcher);
    } else {
      vgPlain_printf_xml_no_f_c("    <exe>%t</exe>\n", "(launcher name unknown)");
    }
    i = 0;
    while (1) {
      tmp___19 = vgPlain_sizeXA(vgPlain_args_for_valgrind);
      if ((Word )i < tmp___19) {

      } else {
        break;
      }
      tmp___18 = vgPlain_indexXA(vgPlain_args_for_valgrind, (Word )i);
      vgPlain_printf_xml_no_f_c("    <arg>%t</arg>\n", *((HChar **)tmp___18));
      i ++;
    }
    vgPlain_printf_xml("  </vargv>\n");
    vgPlain_printf_xml("  <argv>\n");
    if (vgPlain_args_the_exename) {
      vgPlain_printf_xml_no_f_c("    <exe>%t</exe>\n", vgPlain_args_the_exename);
    } else {

    }
    i = 0;
    while (1) {
      tmp___21 = vgPlain_sizeXA(vgPlain_args_for_client);
      if ((Word )i < tmp___21) {

      } else {
        break;
      }
      tmp___20 = vgPlain_indexXA(vgPlain_args_for_client, (Word )i);
      vgPlain_printf_xml_no_f_c("    <arg>%t</arg>\n", *((HChar **)tmp___20));
      i ++;
    }
    vgPlain_printf_xml("  </argv>\n");
    vgPlain_printf_xml("</args>\n");
  } else {

  }
  if (vgPlain_clo_xml) {
    vgPlain_printf_xml("\n");
  } else
  if (vgPlain_clo_verbosity > 0) {
    vgPlain_umsg("\n");
  } else {

  }
  if (vgPlain_clo_verbosity > 1) {
    if (! logging_to_fd) {
      vgPlain_message((VgMsgKind )2, "\n");
    } else {

    }
    vgPlain_message((VgMsgKind )2, "Valgrind options:\n");
    i = 0;
    while (1) {
      tmp___23 = vgPlain_sizeXA(vgPlain_args_for_valgrind);
      if ((Word )i < tmp___23) {

      } else {
        break;
      }
      tmp___22 = vgPlain_indexXA(vgPlain_args_for_valgrind, (Word )i);
      vgPlain_message((VgMsgKind )2, "   %s\n", *((HChar **)tmp___22));
      i ++;
    }
    vgPlain_message((VgMsgKind )2, "Contents of /proc/version:\n");
    fd = vgPlain_open((Char const   *)"/proc/version", 0, 0);
    tmp___28 = sr_isError(fd);
    if (tmp___28) {
      vgPlain_message((VgMsgKind )2, "  can\'t open /proc/version\n");
    } else {
      tmp___24 = sr_Res(fd);
      tmp___25 = vgPlain_read((Int )tmp___24, (void *)(version_buf), 256);
      n = tmp___25;
      tmp___26 = __builtin_expect((long )(! (! (n <= 256))), 1L);
      if (tmp___26) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"n <= BUF_LEN",
                            (Char const   *)"m_main.c", 1199,
                            (Char const   *)"print_preamble", "");
      }
      if (n > 0) {
        version_buf[n - 1] = (Char )'\000';
        vgPlain_message((VgMsgKind )2, "  %s\n", version_buf);
      } else {
        vgPlain_message((VgMsgKind )2, "  (empty?)\n");
      }
      tmp___27 = sr_Res(fd);
      vgPlain_close((Int )tmp___27);
    }
    vgPlain_machine_get_VexArchInfo(& vex_arch, & vex_archinfo);
    tmp___29 = LibVEX_ppVexHwCaps(vex_arch, vex_archinfo.hwcaps);
    tmp___30 = LibVEX_ppVexArch(vex_arch);
    vgPlain_message((VgMsgKind )2, "Arch and hwcaps: %s, %s\n", tmp___30,
                    tmp___29);
    vgPlain_message((VgMsgKind )2,
                    "Page sizes: currently %d, max supported %d\n",
                    (Int )(1UL << 12), (Int )(1UL << 12));
    vgPlain_message((VgMsgKind )2, "Valgrind library directory: %s\n",
                    vgPlain_libdir);
  } else {

  }
  return;
}
}
static void setup_file_descriptors(void) 
{ 
  struct vki_rlimit rl ;
  Bool show ;
  Int tmp ;

  {
  show = (Bool )0;
  tmp = vgPlain_getrlimit(7, & rl);
  if (tmp < 0) {
    rl.rlim_cur = 1024UL;
    rl.rlim_max = 1024UL;
  } else {

  }
  if (show) {
    vgPlain_printf("fd limits: host, before: cur %lu max %lu\n", rl.rlim_cur,
                   rl.rlim_max);
  } else {

  }
  if (rl.rlim_cur + 10UL <= rl.rlim_max) {
    rl.rlim_cur += 10UL;
  } else {
    rl.rlim_cur = rl.rlim_max;
  }
  vgPlain_fd_soft_limit = (Int )(rl.rlim_cur - 10UL);
  vgPlain_fd_hard_limit = (Int )(rl.rlim_cur - 10UL);
  vgPlain_setrlimit(7, (struct vki_rlimit  const  *)(& rl));
  if (show) {
    vgPlain_printf("fd limits: host,  after: cur %lu max %lu\n", rl.rlim_cur,
                   rl.rlim_max);
    vgPlain_printf("fd limits: guest       : cur %u max %u\n",
                   vgPlain_fd_soft_limit, vgPlain_fd_hard_limit);
  } else {

  }
  if (vgPlain_cl_exec_fd != -1) {
    vgPlain_cl_exec_fd = vgPlain_safe_fd(vgPlain_cl_exec_fd);
  } else {

  }
  return;
}
}
static void show_BB_profile(BBProfEntry *tops , UInt n_tops , ULong score_total ) 
{ 
  ULong score_cumul ;
  ULong score_here ;
  Char buf_cumul[10] ;
  Char buf_here[10] ;
  Char name[64] ;
  Int r ;

  {
  vgPlain_printf("\n");
  vgPlain_printf("-----------------------------------------------------------\n");
  vgPlain_printf("--- BEGIN BB Profile (summary of scores)                ---\n");
  vgPlain_printf("-----------------------------------------------------------\n");
  vgPlain_printf("\n");
  vgPlain_printf("Total score = %lld\n\n", score_total);
  score_cumul = (ULong )0;
  r = 0;
  while ((UInt )r < n_tops) {
    if ((tops + r)->addr == 0ULL) {
      goto __Cont;
    } else {

    }
    name[0] = (Char )0;
    vgPlain_get_fnname_w_offset((Addr )(tops + r)->addr, name, 64);
    name[63] = (Char )0;
    score_here = (tops + r)->score;
    score_cumul += score_here;
    vgPlain_percentify(score_cumul, score_total, (UInt )2, 6,
                       (char *)(buf_cumul));
    vgPlain_percentify(score_here, score_total, (UInt )2, 6, (char *)(buf_here));
    vgPlain_printf("%3d: (%9lld %s)   %9lld %s      0x%llx %s\n", r,
                   score_cumul, buf_cumul, score_here, buf_here,
                   (tops + r)->addr, name);
    __Cont: /* CIL Label */ 
    r ++;
  }
  vgPlain_printf("\n");
  vgPlain_printf("-----------------------------------------------------------\n");
  vgPlain_printf("--- BB Profile (BB details)                             ---\n");
  vgPlain_printf("-----------------------------------------------------------\n");
  vgPlain_printf("\n");
  score_cumul = (ULong )0;
  r = 0;
  while ((UInt )r < n_tops) {
    if ((tops + r)->addr == 0ULL) {
      goto __Cont___0;
    } else {

    }
    name[0] = (Char )0;
    vgPlain_get_fnname_w_offset((Addr )(tops + r)->addr, name, 64);
    name[63] = (Char )0;
    score_here = (tops + r)->score;
    score_cumul += score_here;
    vgPlain_percentify(score_cumul, score_total, (UInt )2, 6,
                       (char *)(buf_cumul));
    vgPlain_percentify(score_here, score_total, (UInt )2, 6, (char *)(buf_here));
    vgPlain_printf("\n");
    vgPlain_printf("=-=-=-=-=-=-=-=-=-=-=-=-=-= begin BB rank %d =-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n",
                   r);
    vgPlain_printf("%3d: (%9lld %s)   %9lld %s      0x%llx %s\n", r,
                   score_cumul, buf_cumul, score_here, buf_here,
                   (tops + r)->addr, name);
    vgPlain_printf("\n");
    vgPlain_discard_translations((tops + r)->addr, (ULong )1,
                                 (HChar *)"bb profile");
    vgPlain_translate((ThreadId )0, (tops + r)->addr, (Bool )1,
                      (Int )vgPlain_clo_profile_flags, (ULong )0, (Bool )1);
    vgPlain_printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=  end BB rank %d  =-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n",
                   r);
    __Cont___0: /* CIL Label */ 
    r ++;
  }
  vgPlain_printf("\n");
  vgPlain_printf("-----------------------------------------------------------\n");
  vgPlain_printf("--- END BB Profile                                      ---\n");
  vgPlain_printf("-----------------------------------------------------------\n");
  vgPlain_printf("\n");
  return;
}
}
VgStack vgPlain_interim_stack  ;
static IICreateImageInfo the_iicii  ;
static IIFinaliseImageInfo the_iifii  ;
static void final_tidyup(ThreadId tid ) ;
static void shutdown_actions_NORETURN(ThreadId tid ,
                                      VgSchedReturnCode tids_schedretcode ) ;
static Int valgrind_main(Int argc , HChar **argv , HChar **envp ) 
{ 
  HChar *toolname ;
  Int need_help ;
  ThreadId tid_main ;
  Bool logging_to_fd ;
  Char *xml_fname_unexpanded ;
  Int loglevel ;
  Int i ;
  struct vki_rlimit zero ;
  XArray *addr2dihandle ;
  Int tmp ;
  int tmp___0 ;
  Int tmp___1 ;
  Int tmp___2 ;
  int tmp___3 ;
  Int tmp___4 ;
  SizeT tmp___5 ;
  Int tmp___6 ;
  int tmp___7 ;
  SizeT tmp___8 ;
  Int tmp___9 ;
  Char *val ;
  SizeT tmp___10 ;
  Int tmp___11 ;
  int tmp___12 ;
  Int tmp___13 ;
  Int tmp___14 ;
  int tmp___15 ;
  Int tmp___16 ;
  int tmp___17 ;
  HChar *limLo ;
  HChar *limHi ;
  HChar *aLocal ;
  int tmp___18 ;
  long tmp___19 ;
  int tmp___20 ;
  long tmp___21 ;
  long tmp___22 ;
  long tmp___23 ;
  long tmp___24 ;
  void *p ;
  void *tmp___25 ;
  HChar *cp ;
  Char *tmp___26 ;
  Char *tmp___27 ;
  VexArch vex_arch ;
  VexArchInfo vex_archinfo ;
  Bool ok ;
  Bool tmp___28 ;
  HChar const   *tmp___29 ;
  HChar const   *tmp___30 ;
  Bool ok___0 ;
  Bool tmp___31 ;
  Char buf[4097] ;
  Bool ok___1 ;
  Bool tmp___32 ;
  long tmp___33 ;
  long tmp___34 ;
  long tmp___35 ;
  void *tmp___36 ;
  Word tmp___37 ;
  void *tmp___38 ;
  Word tmp___39 ;
  HChar buf___0[50] ;
  HChar buf2[114] ;
  HChar nul[1] ;
  Int fd ;
  Int r ;
  HChar const   *exename ;
  Int tmp___40 ;
  SizeT tmp___41 ;
  HChar *arg ;
  void *tmp___42 ;
  SizeT tmp___43 ;
  Word tmp___44 ;
  long tmp___45 ;
  Char *s ;
  Bool ok___2 ;
  Long iters ;
  Long volatile   q ;
  Int tmp___46 ;
  long tmp___47 ;
  long tmp___48 ;
  Addr *seg_starts ;
  Int n_seg_starts ;
  Addr_n_ULong anu ;
  int tmp___49 ;
  long tmp___50 ;
  Bool change_ownership_v_c_OK ;
  Addr co_start ;
  Addr co_endPlus ;
  long tmp___51 ;
  int tmp___52 ;
  long tmp___53 ;
  Addr *seg_starts___0 ;
  Int n_seg_starts___0 ;
  long tmp___54 ;
  long tmp___55 ;
  int tmp___56 ;
  long tmp___57 ;
  Word j ;
  Word n ;
  NSegment const   *seg ;
  NSegment const   *tmp___58 ;
  long tmp___59 ;
  long tmp___60 ;
  int tmp___61 ;
  int tmp___62 ;
  int tmp___63 ;
  Addr_n_ULong *anl ;
  void *tmp___64 ;
  long tmp___65 ;
  int tmp___66 ;
  long tmp___67 ;
  void *tmp___68 ;
  ULong tmp___69 ;
  SSizeT inaccessible_len ;
  NSegment const   *seg___0 ;
  NSegment const   *tmp___70 ;
  long tmp___71 ;
  long tmp___72 ;
  long tmp___73 ;
  long tmp___74 ;
  long tmp___75 ;
  long tmp___76 ;
  NSegment const   *seg___1 ;
  NSegment const   *tmp___77 ;
  long tmp___78 ;
  long tmp___79 ;
  long tmp___80 ;
  long tmp___81 ;
  HChar buf___1[50] ;
  long tmp___82 ;

  {
  toolname = (HChar *)"memcheck";
  need_help = 0;
  tid_main = (ThreadId )0;
  logging_to_fd = (Bool )0;
  xml_fname_unexpanded = (Char *)((void *)0);
  zero.rlim_cur = 0UL;
  zero.rlim_max = 0UL;
  addr2dihandle = (XArray *)((void *)0);
  vgPlain_client_envp = (Char **)envp;
  loglevel = 0;
  i = 1;
  while (i < argc) {
    if ((int )*(*(argv + i) + 0) != 45) {
      break;
    } else {

    }
    if ((unsigned int )*(argv + i) != (unsigned int )((void *)0)) {
      if ((unsigned int )"--" != (unsigned int )((void *)0)) {
        tmp___1 = vgPlain_strcmp((Char const   *)*(argv + i),
                                 (Char const   *)"--");
        if (tmp___1 == 0) {
          tmp___0 = (int )((Bool )1);
        } else {
          tmp___0 = (int )((Bool )0);
        }
      } else {
        tmp___0 = (int )((Bool )0);
      }
    } else {
      tmp___0 = (int )((Bool )0);
    }
    if (tmp___0) {
      break;
    } else {

    }
    if ((unsigned int )*(argv + i) != (unsigned int )((void *)0)) {
      if ((unsigned int )"-d" != (unsigned int )((void *)0)) {
        tmp___4 = vgPlain_strcmp((Char const   *)*(argv + i),
                                 (Char const   *)"-d");
        if (tmp___4 == 0) {
          tmp___3 = (int )((Bool )1);
        } else {
          tmp___3 = (int )((Bool )0);
        }
      } else {
        tmp___3 = (int )((Bool )0);
      }
    } else {
      tmp___3 = (int )((Bool )0);
    }
    if (tmp___3) {
      loglevel ++;
    } else {

    }
    if ((unsigned int )*(argv + i) != (unsigned int )((void *)0)) {
      if ((unsigned int )"--profile-heap=" != (unsigned int )((void *)0)) {
        tmp___8 = vgPlain_strlen((Char const   *)"--profile-heap");
        tmp___9 = vgPlain_strncmp((Char const   *)*(argv + i),
                                  (Char const   *)"--profile-heap=",
                                  tmp___8 + 1UL);
        if (tmp___9 == 0) {
          tmp___7 = (int )((Bool )1);
        } else {
          tmp___7 = (int )((Bool )0);
        }
      } else {
        tmp___7 = (int )((Bool )0);
      }
    } else {
      tmp___7 = (int )((Bool )0);
    }
    if (tmp___7) {
      tmp___10 = vgPlain_strlen((Char const   *)"--profile-heap");
      val = (Char *)(*(argv + i) + (tmp___10 + 1UL));
      if ((unsigned int )val != (unsigned int )((void *)0)) {
        if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
          tmp___16 = vgPlain_strcmp((Char const   *)val, (Char const   *)"yes");
          if (tmp___16 == 0) {
            tmp___15 = (int )((Bool )1);
          } else {
            tmp___15 = (int )((Bool )0);
          }
        } else {
          tmp___15 = (int )((Bool )0);
        }
      } else {
        tmp___15 = (int )((Bool )0);
      }
      if (tmp___15) {
        vgPlain_clo_profile_heap = (Bool )1;
      } else {
        if ((unsigned int )val != (unsigned int )((void *)0)) {
          if ((unsigned int )"no" != (unsigned int )((void *)0)) {
            tmp___13 = vgPlain_strcmp((Char const   *)val, (Char const   *)"no");
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
          vgPlain_clo_profile_heap = (Bool )0;
        } else {
          vgPlain_fmsg_bad_option(*(argv + i),
                                  "Invalid boolean value \'%s\' (should be \'yes\' or \'no\')\n",
                                  val);
        }
      }
      tmp___17 = 1;
    } else {
      tmp___17 = 0;
    }
    i ++;
  }
  vgPlain_debugLog_startup(loglevel, (HChar *)"Stage 2 (main)");
  vgPlain_debugLog(1, "main",
                   "Welcome to Valgrind version 3.7.0.SVN debug logging\n");
  vgPlain_debugLog(1, "main", "Checking current stack is plausible\n");
  limLo = & vgPlain_interim_stack.bytes[0];
  limHi = limLo + sizeof(vgPlain_interim_stack);
  aLocal = (HChar *)(& zero);
  if ((unsigned int )aLocal < (unsigned int )limLo) {
    vgPlain_debugLog(0, "main", "Root stack %p to %p, a local %p\n", limLo,
                     limHi, aLocal);
    vgPlain_debugLog(0, "main",
                     "Valgrind: FATAL: Initial stack switched failed.\n");
    vgPlain_debugLog(0, "main", "   Cannot continue.  Sorry.\n");
    vgPlain_exit(1);
  } else
  if ((unsigned int )aLocal >= (unsigned int )limHi) {
    vgPlain_debugLog(0, "main", "Root stack %p to %p, a local %p\n", limLo,
                     limHi, aLocal);
    vgPlain_debugLog(0, "main",
                     "Valgrind: FATAL: Initial stack switched failed.\n");
    vgPlain_debugLog(0, "main", "   Cannot continue.  Sorry.\n");
    vgPlain_exit(1);
  } else {

  }
  vgPlain_debugLog(1, "main", "Checking initial stack was noted\n");
  if (the_iicii.sp_at_startup == 0UL) {
    vgPlain_debugLog(0, "main",
                     "Valgrind: FATAL: Initial stack was not noted.\n");
    vgPlain_debugLog(0, "main", "   Cannot continue.  Sorry.\n");
    vgPlain_exit(1);
  } else {

  }
  vgPlain_debugLog(1, "main", "Starting the address space manager\n");
  if (1UL << 12 == 4096UL) {
    tmp___18 = 1;
  } else
  if (1UL << 12 == 65536UL) {
    tmp___18 = 1;
  } else {
    tmp___18 = 0;
  }
  tmp___19 = __builtin_expect((long )tmp___18, 1L);
  if (tmp___19) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VKI_PAGE_SIZE == 4096 || VKI_PAGE_SIZE == 65536",
                        (Char const   *)"m_main.c", 1574,
                        (Char const   *)"valgrind_main", "");
  }
  if (1UL << 12 == 4096UL) {
    tmp___20 = 1;
  } else
  if (1UL << 12 == 65536UL) {
    tmp___20 = 1;
  } else {
    tmp___20 = 0;
  }
  tmp___21 = __builtin_expect((long )tmp___20, 1L);
  if (tmp___21) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VKI_MAX_PAGE_SIZE == 4096 || VKI_MAX_PAGE_SIZE == 65536",
                        (Char const   *)"m_main.c", 1575,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___22 = __builtin_expect((long )(! (! (1UL << 12 <= 1UL << 12))), 1L);
  if (tmp___22) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VKI_PAGE_SIZE <= VKI_MAX_PAGE_SIZE",
                        (Char const   *)"m_main.c", 1576,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___23 = __builtin_expect((long )(! (! (1UL << 12 == (unsigned long )(1 << 12)))),
                              1L);
  if (tmp___23) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VKI_PAGE_SIZE == (1 << VKI_PAGE_SHIFT)",
                        (Char const   *)"m_main.c", 1577,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___24 = __builtin_expect((long )(! (! (1UL << 12 == (unsigned long )(1 << 12)))),
                              1L);
  if (tmp___24) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VKI_MAX_PAGE_SIZE == (1 << VKI_MAX_PAGE_SHIFT)",
                        (Char const   *)"m_main.c", 1578,
                        (Char const   *)"valgrind_main", "");
  }
  the_iicii.clstack_top = vgPlain_am_startup(the_iicii.sp_at_startup);
  vgPlain_debugLog(1, "main", "Address space manager is running\n");
  vgPlain_debugLog(1, "main", "Starting the dynamic memory manager\n");
  tmp___25 = vgPlain_malloc((HChar *)"main.vm.1", (SizeT )12345);
  p = tmp___25;
  if (p) {
    vgPlain_free(p);
  } else {

  }
  vgPlain_debugLog(1, "main", "Dynamic memory manager is running\n");
  vgPlain_debugLog(1, "main", "Initialise m_debuginfo\n");
  vgPlain_di_initialise();
  tmp___26 = vgPlain_getenv((Char *)"VALGRIND_LIB");
  cp = (HChar *)tmp___26;
  if ((unsigned int )cp != (unsigned int )((void *)0)) {
    vgPlain_libdir = (Char const   *)cp;
  } else {

  }
  vgPlain_debugLog(1, "main", "VG_(libdir) = %s\n", vgPlain_libdir);
  vgPlain_debugLog(1, "main", "Getting launcher\'s name ...\n");
  tmp___27 = vgPlain_getenv((Char *)"VALGRIND_LAUNCHER");
  vgPlain_name_of_launcher = (HChar *)tmp___27;
  if ((unsigned int )vgPlain_name_of_launcher == (unsigned int )((void *)0)) {
    vgPlain_printf("valgrind: You cannot run \'%s\' directly.\n", *(argv + 0));
    vgPlain_printf("valgrind: You should use $prefix/bin/valgrind.\n");
    vgPlain_exit(1);
  } else {

  }
  vgPlain_debugLog(1, "main", "... %s\n", vgPlain_name_of_launcher);
  vgPlain_getrlimit(2, & vgPlain_client_rlimit_data);
  zero.rlim_max = vgPlain_client_rlimit_data.rlim_max;
  vgPlain_setrlimit(2, (struct vki_rlimit  const  *)(& zero));
  vgPlain_getrlimit(3, & vgPlain_client_rlimit_stack);
  vgPlain_debugLog(1, "main", "Get hardware capabilities ...\n");
  tmp___28 = vgPlain_machine_get_hwcaps();
  ok = tmp___28;
  if (! ok) {
    vgPlain_printf("\n");
    vgPlain_printf("valgrind: fatal error: unsupported CPU.\n");
    vgPlain_printf("   Supported CPUs are:\n");
    vgPlain_printf("   * x86 (practically any; Pentium-I or above), AMD Athlon or above)\n");
    vgPlain_printf("   * AMD Athlon64/Opteron\n");
    vgPlain_printf("   * PowerPC (most; ppc405 and above)\n");
    vgPlain_printf("   * System z (64bit only - s390x; z900 and above)\n");
    vgPlain_printf("\n");
    vgPlain_exit(1);
  } else {

  }
  vgPlain_machine_get_VexArchInfo(& vex_arch, & vex_archinfo);
  tmp___29 = LibVEX_ppVexHwCaps(vex_arch, vex_archinfo.hwcaps);
  tmp___30 = LibVEX_ppVexArch(vex_arch);
  vgPlain_debugLog(1, "main", "... arch = %s, hwcaps = %s\n", tmp___30, tmp___29);
  vgPlain_debugLog(1, "main", "Getting the working directory at startup\n");
  tmp___31 = vgPlain_record_startup_wd();
  ok___0 = tmp___31;
  if (! ok___0) {
    vgPlain_err_config_error((Char *)"Can\'t establish current working directory at startup");
  } else {

  }
  tmp___32 = vgPlain_get_startup_wd(buf, (SizeT )sizeof(buf));
  ok___1 = tmp___32;
  tmp___33 = __builtin_expect((long )(! (! ok___1)), 1L);
  if (tmp___33) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"ok",
                        (Char const   *)"m_main.c", 1677,
                        (Char const   *)"valgrind_main", "");
  }
  buf[4096] = (Char )0;
  vgPlain_debugLog(1, "main", "... %s\n", buf);
  vgPlain_debugLog(1, "main", "Split up command line\n");
  vgPlain_split_up_argv(argc, argv);
  tmp___34 = __builtin_expect((long )(! (! vgPlain_args_for_valgrind)), 1L);
  if (tmp___34) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(args_for_valgrind)",
                        (Char const   *)"m_main.c", 1697,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___35 = __builtin_expect((long )(! (! vgPlain_args_for_client)), 1L);
  if (tmp___35) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(args_for_client)",
                        (Char const   *)"m_main.c", 1698,
                        (Char const   *)"valgrind_main", "");
  }
  vgPlain_debugLog(1, "main",
                   "(early_) Process Valgrind\'s command line options\n");
  early_process_cmd_line_options(& need_help, & toolname);
  LibVEX_default_VexControl(& vgPlain_clo_vex_control);
  if (! need_help) {
    vgPlain_debugLog(1, "main", "Create initial image\n");
    the_iicii.argv = argv;
    the_iicii.envp = envp;
    the_iicii.toolname = toolname;
    the_iifii = vgPlain_ii_create_image(the_iicii);
  } else {

  }
  vgPlain_debugLog(1, "main", "Setup file descriptors\n");
  setup_file_descriptors();
  if (! need_help) {
    vgPlain_debugLog(1, "main", "Create fake /proc/<pid>/cmdline\n");
    tmp___40 = vgPlain_getpid();
    vgPlain_sprintf((Char *)(buf___0), "proc_%d_cmdline", tmp___40);
    fd = vgPlain_mkstemp(buf___0, buf2);
    if (fd == -1) {
      vgPlain_err_config_error((Char *)"Can\'t create client cmdline file in /tmp.");
    } else {

    }
    nul[0] = (HChar )0;
    if (vgPlain_args_the_exename) {
      exename = vgPlain_args_the_exename;
    } else {
      exename = "unknown_exename";
    }
    tmp___41 = vgPlain_strlen((Char const   *)exename);
    vgPlain_write(fd, (void const   *)exename, (Int )tmp___41);
    vgPlain_write(fd, (void const   *)(nul), 1);
    i = 0;
    while (1) {
      tmp___44 = vgPlain_sizeXA(vgPlain_args_for_client);
      if ((Word )i < tmp___44) {

      } else {
        break;
      }
      tmp___42 = vgPlain_indexXA(vgPlain_args_for_client, (Word )i);
      arg = *((HChar **)tmp___42);
      tmp___43 = vgPlain_strlen((Char const   *)arg);
      vgPlain_write(fd, (void const   *)arg, (Int )tmp___43);
      vgPlain_write(fd, (void const   *)(nul), 1);
      i ++;
    }
    r = vgPlain_unlink((Char const   *)(buf2));
    if (r) {
      vgPlain_err_config_error((Char *)"Can\'t delete client cmdline file in /tmp.");
    } else {

    }
    vgPlain_cl_cmdline_fd = fd;
  } else {

  }
  vgPlain_debugLog(1, "main", "Initialise the tool part 1 (pre_clo_init)\n");
  (*vgPlain_tl_pre_clo_init)();
  vgPlain_debugLog(1, "main", "Print help and quit, if requested\n");
  if (need_help) {
    usage_NORETURN((Bool )(need_help >= 2));
  } else {

  }
  vgPlain_debugLog(1, "main",
                   "(main_) Process Valgrind\'s command line options, setup logging\n");
  main_process_cmd_line_options(& logging_to_fd, & xml_fname_unexpanded,
                                (HChar const   *)toolname);
  vgPlain_read_millisecond_timer();
  vgPlain_debugLog(1, "main", "Print the preamble...\n");
  print_preamble(logging_to_fd, xml_fname_unexpanded, (HChar const   *)toolname);
  vgPlain_debugLog(1, "main", "...finished the preamble\n");
  vgPlain_debugLog(1, "main", "Initialise the tool part 2 (post_clo_init)\n");
  tmp___45 = __builtin_expect((long )(! (! vgPlain_tdict.tool_post_clo_init)),
                              1L);
  if (tmp___45) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"VG_(tdict).tool_post_clo_init",
                        (Char const   *)"m_main.c", 1916,
                        (Char const   *)"valgrind_main",
                        "you forgot to set VgToolInterface function \'tool_post_clo_init\'");
  }
  (*(vgPlain_tdict.tool_post_clo_init))();
  ok___2 = vgPlain_sanity_check_needs(& s);
  if (! ok___2) {
    vgPlain_tool_panic(s);
  } else {

  }
  vgPlain_debugLog(1, "main", "Initialise TT/TC\n");
  vgPlain_init_tt_tc();
  vgPlain_debugLog(1, "main", "Initialise redirects\n");
  vgPlain_redir_initialise();
  if (vgPlain_clo_wait_for_gdb) {
    vgPlain_debugLog(1, "main", "Wait for GDB\n");
    tmp___46 = vgPlain_getpid();
    vgPlain_printf("pid=%d, entering delay loop\n", tmp___46);
    iters = (Long )5;
    iters *= 1000000000LL;
    q = (Long volatile   )0;
    while (q < (Long volatile   )iters) {
      q += (Long volatile   )1;
    }
  } else {

  }
  if (vgPlain_clo_track_fds) {
    vgPlain_debugLog(1, "main", "Init preopened fds\n");
    vgPlain_init_preopened_fds();
  } else {

  }
  vgPlain_debugLog(1, "main", "Load initial debug info\n");
  tmp___47 = __builtin_expect((long )(! (! (! addr2dihandle))), 1L);
  if (tmp___47) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"!addr2dihandle",
                        (Char const   *)"m_main.c", 2009,
                        (Char const   *)"valgrind_main", "");
  }
  addr2dihandle = vgPlain_newXA(& vgPlain_malloc, (HChar *)"main.vm.2",
                                & vgPlain_free, (Word )sizeof(Addr_n_ULong ));
  tmp___48 = __builtin_expect((long )(! (! addr2dihandle)), 1L);
  if (tmp___48) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"addr2dihandle",
                        (Char const   *)"m_main.c", 2012,
                        (Char const   *)"valgrind_main", "");
  }
  seg_starts = vgPlain_get_segment_starts(& n_seg_starts);
  if (seg_starts) {
    if (n_seg_starts >= 0) {
      tmp___49 = 1;
    } else {
      tmp___49 = 0;
    }
  } else {
    tmp___49 = 0;
  }
  tmp___50 = __builtin_expect((long )tmp___49, 1L);
  if (tmp___50) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"seg_starts && n_seg_starts >= 0",
                        (Char const   *)"m_main.c", 2020,
                        (Char const   *)"valgrind_main", "");
  }
  i = 0;
  while (i < n_seg_starts) {
    anu.ull = vgPlain_di_notify_mmap(*(seg_starts + i), (Bool )1);
    if (anu.ull > 0ULL) {
      anu.a = *(seg_starts + i);
      vgPlain_addToXA(addr2dihandle, (void *)(& anu));
    } else {

    }
    i ++;
  }
  vgPlain_free((void *)seg_starts);
  co_start = (Addr )(& vgPlain_trampoline_stuff_start) & ~ ((1UL << 12) - 1UL);
  co_endPlus = (((Addr )(& vgPlain_trampoline_stuff_end) + (1UL << 12)) - 1UL) & ~ ((1UL << 12) - 1UL);
  vgPlain_debugLog(1, "redir",
                   "transfer ownership V -> C of 0x%llx .. 0x%llx\n",
                   (ULong )co_start, (ULong )co_endPlus - 1ULL);
  change_ownership_v_c_OK = vgPlain_am_change_ownership_v_to_c(co_start,
                                                               co_endPlus - co_start);
  tmp___51 = __builtin_expect((long )(! (! change_ownership_v_c_OK)), 1L);
  if (tmp___51) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"change_ownership_v_c_OK",
                        (Char const   *)"m_main.c", 2107,
                        (Char const   *)"valgrind_main", "");
  }
  vgPlain_debugLog(1, "main", "Initialise scheduler (phase 1)\n");
  tid_main = vgPlain_scheduler_init_phase1();
  if (tid_main >= 0U) {
    if (tid_main < 500U) {
      if (tid_main != 0U) {
        tmp___52 = 1;
      } else {
        tmp___52 = 0;
      }
    } else {
      tmp___52 = 0;
    }
  } else {
    tmp___52 = 0;
  }
  tmp___53 = __builtin_expect((long )tmp___52, 1L);
  if (tmp___53) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"tid_main >= 0 && tid_main < VG_N_THREADS && tid_main != VG_INVALID_THREADID",
                        (Char const   *)"m_main.c", 2117,
                        (Char const   *)"valgrind_main", "");
  }
  while (1) {
    if (vgPlain_tdict.track_pre_thread_ll_create) {
      (*(vgPlain_tdict.track_pre_thread_ll_create))((ThreadId )0, tid_main);
    } else {

    }
    break;
  }
  vgPlain_debugLog(1, "main", "Tell tool about initial permissions\n");
  tmp___54 = __builtin_expect((long )(! (! addr2dihandle)), 1L);
  if (tmp___54) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"addr2dihandle",
                        (Char const   *)"m_main.c", 2137,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___55 = __builtin_expect((long )(! (! (vgPlain_running_tid == 0U))), 1L);
  if (tmp___55) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"VG_(running_tid) == VG_INVALID_THREADID",
                        (Char const   *)"m_main.c", 2142,
                        (Char const   *)"valgrind_main", "");
  }
  vgPlain_running_tid = tid_main;
  seg_starts___0 = vgPlain_get_segment_starts(& n_seg_starts___0);
  if (seg_starts___0) {
    if (n_seg_starts___0 >= 0) {
      tmp___56 = 1;
    } else {
      tmp___56 = 0;
    }
  } else {
    tmp___56 = 0;
  }
  tmp___57 = __builtin_expect((long )tmp___56, 1L);
  if (tmp___57) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"seg_starts && n_seg_starts >= 0",
                        (Char const   *)"m_main.c", 2146,
                        (Char const   *)"valgrind_main", "");
  }
  i = 0;
  while (i < n_seg_starts___0) {
    tmp___58 = vgPlain_am_find_nsegment(*(seg_starts___0 + i));
    seg = tmp___58;
    tmp___59 = __builtin_expect((long )(! (! seg)), 1L);
    if (tmp___59) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"seg",
                          (Char const   *)"m_main.c", 2153,
                          (Char const   *)"valgrind_main", "");
    }
    if ((unsigned int const   )seg->kind == 3U) {
      goto _L;
    } else
    if ((unsigned int const   )seg->kind == 1U) {
      _L: /* CIL Label */ 
      tmp___60 = __builtin_expect((long )(! (! (seg->start == (Addr const   )*(seg_starts___0 + i)))),
                                  1L);
      if (tmp___60) {

      } else {
        vgPlain_assert_fail((Bool )1,
                            (Char const   *)"seg->start == seg_starts[i]",
                            (Char const   *)"m_main.c", 2176,
                            (Char const   *)"valgrind_main", "");
      }
      if (seg->hasX) {
        tmp___61 = 'x';
      } else {
        tmp___61 = '-';
      }
      if (seg->hasW) {
        tmp___62 = 'w';
      } else {
        tmp___62 = '-';
      }
      if (seg->hasR) {
        tmp___63 = 'r';
      } else {
        tmp___63 = '-';
      }
      vgPlain_debugLog(2, "main", "tell tool about %010lx-%010lx %c%c%c\n",
                       seg->start, seg->end, tmp___63, tmp___62, tmp___61);
      n = vgPlain_sizeXA(addr2dihandle);
      j = (Word )0;
      while (j < n) {
        tmp___64 = vgPlain_indexXA(addr2dihandle, j);
        anl = (Addr_n_ULong *)tmp___64;
        if (anl->a == (Addr )seg->start) {
          tmp___65 = __builtin_expect((long )(! (! (anl->ull > 0ULL))), 1L);
          if (tmp___65) {

          } else {
            vgPlain_assert_fail((Bool )0, (Char const   *)"anl->ull > 0",
                                (Char const   *)"m_main.c", 2189,
                                (Char const   *)"valgrind_main", "");
          }
          break;
        } else {

        }
        j ++;
      }
      if (j >= 0L) {
        if (j <= n) {
          tmp___66 = 1;
        } else {
          tmp___66 = 0;
        }
      } else {
        tmp___66 = 0;
      }
      tmp___67 = __builtin_expect((long )tmp___66, 1L);
      if (tmp___67) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"j >= 0 && j <= n",
                            (Char const   *)"m_main.c", 2193,
                            (Char const   *)"valgrind_main", "");
      }
      while (1) {
        if (vgPlain_tdict.track_new_mem_startup) {
          if (j < n) {
            tmp___68 = vgPlain_indexXA(addr2dihandle, j);
            tmp___69 = ((Addr_n_ULong *)tmp___68)->ull;
          } else {
            tmp___69 = (ULong )0;
          }
          (*(vgPlain_tdict.track_new_mem_startup))((Addr )seg->start,
                                                   (SizeT )((seg->end + 1UL) - seg->start),
                                                   (Bool )seg->hasR,
                                                   (Bool )seg->hasW,
                                                   (Bool )seg->hasX, tmp___69);
        } else {

        }
        break;
      }
    } else {

    }
    i ++;
  }
  vgPlain_free((void *)seg_starts___0);
  vgPlain_deleteXA(addr2dihandle);
  tmp___70 = vgPlain_am_find_nsegment(the_iifii.initial_client_SP);
  seg___0 = tmp___70;
  tmp___71 = __builtin_expect((long )(! (! seg___0)), 1L);
  if (tmp___71) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"seg",
                        (Char const   *)"m_main.c", 2211,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___72 = __builtin_expect((long )(! (! ((unsigned int const   )seg___0->kind == 1U))),
                              1L);
  if (tmp___72) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"seg->kind == SkAnonC",
                        (Char const   *)"m_main.c", 2212,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___73 = __builtin_expect((long )(! (! (the_iifii.initial_client_SP >= (Addr )seg___0->start))),
                              1L);
  if (tmp___73) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"the_iifii.initial_client_SP >= seg->start",
                        (Char const   *)"m_main.c", 2213,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___74 = __builtin_expect((long )(! (! (the_iifii.initial_client_SP <= (Addr )seg___0->end))),
                              1L);
  if (tmp___74) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"the_iifii.initial_client_SP <= seg->end",
                        (Char const   *)"m_main.c", 2214,
                        (Char const   *)"valgrind_main", "");
  }
  inaccessible_len = (SSizeT )(the_iifii.initial_client_SP - (Addr )seg___0->start);
  tmp___75 = __builtin_expect((long )(! (! (inaccessible_len >= 0L))), 1L);
  if (tmp___75) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"inaccessible_len >= 0",
                        (Char const   *)"m_main.c", 2227,
                        (Char const   *)"valgrind_main", "");
  }
  if (inaccessible_len > 0L) {
    while (1) {
      if (vgPlain_tdict.track_die_mem_stack) {
        (*(vgPlain_tdict.track_die_mem_stack))((Addr )seg___0->start,
                                               (SizeT )inaccessible_len);
      } else {

      }
      break;
    }
  } else {

  }
  vgPlain_debugLog(2, "main", "mark stack inaccessible %010lx-%010lx\n",
                   seg___0->start, the_iifii.initial_client_SP - 1UL);
  while (1) {
    if (vgPlain_tdict.track_new_mem_startup) {
      (*(vgPlain_tdict.track_new_mem_startup))((Addr )(& vgPlain_trampoline_stuff_start),
                                               (Addr )(& vgPlain_trampoline_stuff_end) - (Addr )(& vgPlain_trampoline_stuff_start),
                                               (Bool )0, (Bool )0, (Bool )1,
                                               (ULong )0);
    } else {

    }
    break;
  }
  vgPlain_running_tid = (ThreadId )0;
  tmp___76 = __builtin_expect((long )(! (! (vgPlain_running_tid == 0U))), 1L);
  if (tmp___76) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"VG_(running_tid) == VG_INVALID_THREADID",
                        (Char const   *)"m_main.c", 2249,
                        (Char const   *)"valgrind_main", "");
  }
  vgPlain_debugLog(1, "main", "Initialise scheduler (phase 2)\n");
  tmp___77 = vgPlain_am_find_nsegment(the_iifii.initial_client_SP);
  seg___1 = tmp___77;
  tmp___78 = __builtin_expect((long )(! (! seg___1)), 1L);
  if (tmp___78) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"seg",
                        (Char const   *)"m_main.c", 2261,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___79 = __builtin_expect((long )(! (! ((unsigned int const   )seg___1->kind == 1U))),
                              1L);
  if (tmp___79) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"seg->kind == SkAnonC",
                        (Char const   *)"m_main.c", 2262,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___80 = __builtin_expect((long )(! (! (the_iifii.initial_client_SP >= (Addr )seg___1->start))),
                              1L);
  if (tmp___80) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"the_iifii.initial_client_SP >= seg->start",
                        (Char const   *)"m_main.c", 2263,
                        (Char const   *)"valgrind_main", "");
  }
  tmp___81 = __builtin_expect((long )(! (! (the_iifii.initial_client_SP <= (Addr )seg___1->end))),
                              1L);
  if (tmp___81) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"the_iifii.initial_client_SP <= seg->end",
                        (Char const   *)"m_main.c", 2264,
                        (Char const   *)"valgrind_main", "");
  }
  vgPlain_scheduler_init_phase2(tid_main, (Addr )seg___1->end,
                                the_iifii.clstack_max_size);
  vgPlain_debugLog(1, "main", "Finalise initial image\n");
  vgPlain_ii_finalise_image(the_iifii);
  vgPlain_debugLog(1, "main", "Initialise signal management\n");
  vgPlain_vki_do_initial_consistency_checks();
  vgPlain_sigstartup_actions();
  if (vgPlain_needs.core_errors) {
    vgPlain_debugLog(1, "main", "Load suppressions\n");
    vgPlain_load_suppressions();
  } else
  if (vgPlain_needs.tool_errors) {
    vgPlain_debugLog(1, "main", "Load suppressions\n");
    vgPlain_load_suppressions();
  } else {

  }
  vgPlain_clstk_id = vgPlain_register_stack(vgPlain_clstk_base,
                                            vgPlain_clstk_end);
  vgPlain_debugLog(1, "main", "\n");
  vgPlain_debugLog(1, "main", "\n");
  vgPlain_am_show_nsegments(1, (HChar *)"Memory layout at client startup");
  vgPlain_debugLog(1, "main", "\n");
  vgPlain_debugLog(1, "main", "\n");
  if (vgPlain_clo_xml) {
    vgPlain_elapsed_wallclock_time(buf___1);
    vgPlain_printf_xml_no_f_c("<status>\n  <state>RUNNING</state>\n  <time>%t</time>\n</status>\n",
                              buf___1);
    vgPlain_printf_xml_no_f_c("\n");
  } else {

  }
  vgPlain_debugLog(1, "main", "Running thread 1\n");
  vgPlain_address_of_m_main_shutdown_actions_NORETURN = & shutdown_actions_NORETURN;
  vgPlain_main_thread_wrapper_NORETURN((ThreadId )1);
  tmp___82 = __builtin_expect(0L, 1L);
  if (tmp___82) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_main.c", 2346,
                        (Char const   *)"valgrind_main", "");
  }
  return (0);
}
}
static void shutdown_actions_NORETURN(ThreadId tid ,
                                      VgSchedReturnCode tids_schedretcode ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  Int tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;
  Bool tmp___7 ;
  int tmp___8 ;
  long tmp___9 ;
  Int tmp___10 ;
  int tmp___11 ;
  long tmp___12 ;
  Int tmp___13 ;
  int tmp___14 ;
  long tmp___15 ;
  Bool tmp___16 ;
  int tmp___17 ;
  long tmp___18 ;
  Int tmp___19 ;
  int tmp___20 ;
  long tmp___21 ;
  HChar buf[50] ;
  long tmp___22 ;
  BBProfEntry tops[200] ;
  ULong score_total ;
  ULong tmp___23 ;
  UInt tmp___24 ;
  long tmp___25 ;

  {
  vgPlain_debugLog(1, "main", "entering VG_(shutdown_actions_NORETURN)\n");
  vgPlain_am_show_nsegments(1, (HChar *)"Memory layout at client shutdown");
  tmp = vgPlain_is_running_thread(tid);
  if (tmp) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(is_running_thread)(tid)",
                        (Char const   *)"m_main.c", 2373,
                        (Char const   *)"shutdown_actions_NORETURN", "");
  }
  if ((unsigned int )tids_schedretcode == 1U) {
    tmp___2 = 1;
  } else
  if ((unsigned int )tids_schedretcode == 2U) {
    tmp___2 = 1;
  } else
  if ((unsigned int )tids_schedretcode == 3U) {
    tmp___2 = 1;
  } else {
    tmp___2 = 0;
  }
  tmp___3 = __builtin_expect((long )tmp___2, 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"tids_schedretcode == VgSrc_ExitThread || tids_schedretcode == VgSrc_ExitProcess || tids_schedretcode == VgSrc_FatalSig",
                        (Char const   *)"m_main.c", 2377,
                        (Char const   *)"shutdown_actions_NORETURN", "");
  }
  if ((unsigned int )tids_schedretcode == 1U) {
    tmp___4 = vgPlain_count_living_threads();
    if (tmp___4 == 1) {
      tmp___5 = 1;
    } else {
      tmp___5 = 0;
    }
    tmp___6 = __builtin_expect((long )tmp___5, 1L);
    if (tmp___6) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VG_(count_living_threads)() == 1",
                          (Char const   *)"m_main.c", 2382,
                          (Char const   *)"shutdown_actions_NORETURN", "");
    }
    vgPlain_reap_threads(tid);
    final_tidyup(tid);
    tmp___7 = vgPlain_is_running_thread(tid);
    if (tmp___7) {
      tmp___8 = 1;
    } else {
      tmp___8 = 0;
    }
    tmp___9 = __builtin_expect((long )tmp___8, 1L);
    if (tmp___9) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VG_(is_running_thread)(tid)",
                          (Char const   *)"m_main.c", 2393,
                          (Char const   *)"shutdown_actions_NORETURN", "");
    }
    tmp___10 = vgPlain_count_living_threads();
    if (tmp___10 == 1) {
      tmp___11 = 1;
    } else {
      tmp___11 = 0;
    }
    tmp___12 = __builtin_expect((long )tmp___11, 1L);
    if (tmp___12) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VG_(count_living_threads)() == 1",
                          (Char const   *)"m_main.c", 2394,
                          (Char const   *)"shutdown_actions_NORETURN", "");
    }
  } else {
    tmp___13 = vgPlain_count_living_threads();
    if (tmp___13 >= 1) {
      tmp___14 = 1;
    } else {
      tmp___14 = 0;
    }
    tmp___15 = __builtin_expect((long )tmp___14, 1L);
    if (tmp___15) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VG_(count_living_threads)() >= 1",
                          (Char const   *)"m_main.c", 2402,
                          (Char const   *)"shutdown_actions_NORETURN", "");
    }
    final_tidyup(tid);
    tmp___16 = vgPlain_is_running_thread(tid);
    if (tmp___16) {
      tmp___17 = 1;
    } else {
      tmp___17 = 0;
    }
    tmp___18 = __builtin_expect((long )tmp___17, 1L);
    if (tmp___18) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VG_(is_running_thread)(tid)",
                          (Char const   *)"m_main.c", 2410,
                          (Char const   *)"shutdown_actions_NORETURN", "");
    }
    tmp___19 = vgPlain_count_living_threads();
    if (tmp___19 >= 1) {
      tmp___20 = 1;
    } else {
      tmp___20 = 0;
    }
    tmp___21 = __builtin_expect((long )tmp___20, 1L);
    if (tmp___21) {

    } else {
      vgPlain_assert_fail((Bool )1,
                          (Char const   *)"VG_(count_living_threads)() >= 1",
                          (Char const   *)"m_main.c", 2411,
                          (Char const   *)"shutdown_actions_NORETURN", "");
    }
  }
  vgPlain_threads[tid].status = (ThreadStatus )0;
  if (vgPlain_clo_xml) {
    vgPlain_printf_xml("\n");
  } else
  if (vgPlain_clo_verbosity > 0) {
    vgPlain_message((VgMsgKind )1, "\n");
  } else {

  }
  if (vgPlain_clo_xml) {
    vgPlain_elapsed_wallclock_time(buf);
    vgPlain_printf_xml_no_f_c("<status>\n  <state>FINISHED</state>\n  <time>%t</time>\n</status>\n\n",
                              buf);
  } else {

  }
  if (vgPlain_clo_track_fds) {
    vgPlain_show_open_fds();
  } else {

  }
  tmp___22 = __builtin_expect((long )(! (! vgPlain_tdict.tool_fini)), 1L);
  if (tmp___22) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"VG_(tdict).tool_fini",
                        (Char const   *)"m_main.c", 2443,
                        (Char const   *)"shutdown_actions_NORETURN",
                        "you forgot to set VgToolInterface function \'tool_fini\'");
  }
  (*(vgPlain_tdict.tool_fini))(0);
  if (vgPlain_clo_xml) {
    if (vgPlain_needs.core_errors) {
      vgPlain_show_error_counts_as_XML();
    } else
    if (vgPlain_needs.tool_errors) {
      vgPlain_show_error_counts_as_XML();
    } else {

    }
  } else {

  }
  if (vgPlain_needs.core_errors) {
    vgPlain_show_all_errors(vgPlain_clo_verbosity, vgPlain_clo_xml);
  } else
  if (vgPlain_needs.tool_errors) {
    vgPlain_show_all_errors(vgPlain_clo_verbosity, vgPlain_clo_xml);
  } else {

  }
  if (vgPlain_clo_xml) {
    vgPlain_printf_xml("\n");
    vgPlain_printf_xml("</valgrindoutput>\n");
    vgPlain_printf_xml("\n");
  } else {

  }
  vgPlain_sanity_check_general((Bool )1);
  if (vgPlain_clo_stats) {
    print_all_stats();
  } else {

  }
  if (vgPlain_clo_profile_heap) {
    vgPlain_print_arena_cc_analysis();
  } else {

  }
  if ((int )vgPlain_clo_profile_flags > 0) {
    tmp___23 = vgPlain_get_BB_profile(tops, (UInt )200);
    score_total = tmp___23;
    show_BB_profile(tops, (UInt )200, score_total);
  } else {

  }
  vgPlain_message_flush();
  vgPlain_gdbserver((ThreadId )0);
  vgPlain_debugLog(1, "core_os", "VG_(terminate_NORETURN)(tid=%lld)\n",
                   (ULong )tid);
  switch ((unsigned int )tids_schedretcode) {
  case 2U: 
  case 1U: 
  if (vgPlain_clo_error_exitcode > 0) {
    tmp___24 = vgPlain_get_n_errs_found();
    if (tmp___24 > 0U) {
      vgPlain_exit(vgPlain_clo_error_exitcode);
    } else {
      vgPlain_exit((Int )vgPlain_threads[tid].os_state.exitcode);
    }
  } else {
    vgPlain_exit((Int )vgPlain_threads[tid].os_state.exitcode);
  }
  vgPlain_core_panic((Char *)"entered the afterlife in main() -- ExitT/P");
  break;
  case 3U: 
  tmp___25 = __builtin_expect((long )(! (! (vgPlain_threads[tid].os_state.fatalsig != 0))),
                              1L);
  if (tmp___25) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"VG_(threads)[tid].os_state.fatalsig != 0",
                        (Char const   *)"m_main.c", 2518,
                        (Char const   *)"shutdown_actions_NORETURN", "");
  }
  vgPlain_kill_self(vgPlain_threads[tid].os_state.fatalsig);
  vgPlain_core_panic((Char *)"main(): signal was supposed to be fatal");
  break;
  default: 
  vgPlain_core_panic((Char *)"main(): unexpected scheduler return code");
  }
  return;
}
}
static void final_tidyup(ThreadId tid ) 
{ 
  Addr __libc_freeres_wrapper ;
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  Bool tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  Bool tmp___5 ;
  int tmp___6 ;
  long tmp___7 ;

  {
  __libc_freeres_wrapper = vgPlain_client___libc_freeres_wrapper;
  tmp = vgPlain_is_running_thread(tid);
  if (tmp) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(is_running_thread)(tid)",
                        (Char const   *)"m_main.c", 2550,
                        (Char const   *)"final_tidyup", "");
  }
  if (! vgPlain_needs.libc_freeres) {
    return;
  } else
  if (! vgPlain_clo_run_libc_freeres) {
    return;
  } else
  if (0UL == __libc_freeres_wrapper) {
    return;
  } else {

  }
  if (vgPlain_clo_verbosity > 2) {
    vgPlain_message((VgMsgKind )2,
                    "Caught __NR_exit; running __libc_freeres()\n");
  } else
  if (vgPlain_clo_trace_syscalls) {
    vgPlain_message((VgMsgKind )2,
                    "Caught __NR_exit; running __libc_freeres()\n");
  } else
  if (vgPlain_clo_trace_sched) {
    vgPlain_message((VgMsgKind )2,
                    "Caught __NR_exit; running __libc_freeres()\n");
  } else {

  }
  vgPlain_set_IP(tid, __libc_freeres_wrapper);
  vgPlain_sigprocmask(0, (vki_sigset_t const   *)((void *)0),
                      & vgPlain_threads[tid].sig_mask);
  vgPlain_threads[tid].tmp_sig_mask = vgPlain_threads[tid].sig_mask;
  vgPlain_set_default_handler(11);
  vgPlain_set_default_handler(7);
  vgPlain_set_default_handler(4);
  vgPlain_set_default_handler(8);
  tmp___2 = vgPlain_is_exiting(tid);
  if (tmp___2) {
    tmp___3 = 1;
  } else {
    tmp___3 = 0;
  }
  tmp___4 = __builtin_expect((long )tmp___3, 1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(is_exiting)(tid)",
                        (Char const   *)"m_main.c", 2599,
                        (Char const   *)"final_tidyup", "");
  }
  vgPlain_threads[tid].exitreason = (VgSchedReturnCode )0;
  vgPlain_scheduler(tid);
  tmp___5 = vgPlain_is_exiting(tid);
  if (tmp___5) {
    tmp___6 = 1;
  } else {
    tmp___6 = 0;
  }
  tmp___7 = __builtin_expect((long )tmp___6, 1L);
  if (tmp___7) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(is_exiting)(tid)",
                        (Char const   *)"m_main.c", 2607,
                        (Char const   *)"final_tidyup", "");
  }
  return;
}
}
void *memcpy(void *dest , void const   *src , SizeT n ) ;
void *memcpy(void *dest , void const   *src , SizeT n ) 
{ 
  void *tmp ;

  {
  tmp = vgPlain_memcpy(dest, src, n);
  return (tmp);
}
}
void *memset(void *s , int c , SizeT n ) ;
void *memset(void *s , int c , SizeT n ) 
{ 
  void *tmp ;

  {
  tmp = vgPlain_memset(s, c, n);
  return (tmp);
}
}
void abort(void) ;
void abort(void) 
{ 
  long tmp ;

  {
  vgPlain_printf("Something called raise().\n");
  tmp = __builtin_expect(0L, 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_main.c", 2652,
                        (Char const   *)"abort", "");
  }
  return;
}
}
__asm__("\n.text\n\t.globl _start\n\t.type _start,@function\n_start:\n\tmovl  $vgPlain_interim_stack, %eax\n\taddl  $8192, %eax\n\taddl  $(4096 * 256), %eax\n\tsubl  $16, %eax\n\tandl  $~15, %eax\n\txchgl %eax, %esp\n\tpushl %eax\n\tcall  _start_in_C_linux\n\thlt\n.previous\n");
void _start_in_C_linux(UWord *pArgc ) ;
void _start_in_C_linux(UWord *pArgc ) 
{ 
  Int r ;
  Word argc ;
  HChar **argv ;
  HChar **envp ;

  {
  argc = (Word )*(pArgc + 0);
  argv = (HChar **)(pArgc + 1);
  envp = (HChar **)(pArgc + ((1L + argc) + 1L));
  vgPlain_memset((void *)(& the_iicii), 0, (SizeT )sizeof(the_iicii));
  vgPlain_memset((void *)(& the_iifii), 0, (SizeT )sizeof(the_iifii));
  the_iicii.sp_at_startup = (Addr )pArgc;
  r = valgrind_main((Int )argc, argv, envp);
  vgPlain_exit(r);
}
}
