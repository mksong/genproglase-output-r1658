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
typedef void (*vg_atfork_t)(ThreadId  );
enum __anonenum_VgMsgKind_101 {
    Vg_FailMsg = 0,
    Vg_UserMsg = 1,
    Vg_DebugMsg = 2,
    Vg_ClientMsg = 3
} ;
typedef enum __anonenum_VgMsgKind_101 VgMsgKind;
struct __anonstruct_OutputSink_102 {
   Int fd ;
   Bool is_socket ;
};
typedef struct __anonstruct_OutputSink_102 OutputSink;
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
enum __anonenum_PointKind_103 {
    software_breakpoint = 0,
    hardware_breakpoint = 1,
    write_watchpoint = 2,
    read_watchpoint = 3,
    access_watchpoint = 4
} ;
typedef enum __anonenum_PointKind_103 PointKind;
enum __anonenum_kwd_report_error_104 {
    kwd_report_none = 0,
    kwd_report_all = 1,
    kwd_report_duplicated_matches = 2
} ;
typedef enum __anonenum_kwd_report_error_104 kwd_report_error;
enum __anonenum_FinishReason_105 {
    orderly_finish = 0,
    reset_after_error = 1,
    reset_after_fork = 2
} ;
typedef enum __anonenum_FinishReason_105 FinishReason;
struct __anonstruct_VgdbShared32_106 {
   int vgdb_pid ;
   int volatile   written_by_vgdb ;
   int volatile   seen_by_valgrind ;
   Addr32 invoke_gdbserver ;
   Addr32 threads ;
   int sizeof_ThreadState ;
   int offset_status ;
   int offset_lwpid ;
};
typedef struct __anonstruct_VgdbShared32_106 VgdbShared32;
struct __anonstruct_VgdbShared64_107 {
   int vgdb_pid ;
   int volatile   written_by_vgdb ;
   int volatile   seen_by_valgrind ;
   Addr64 invoke_gdbserver ;
   Addr64 threads ;
   int sizeof_ThreadState ;
   int offset_status ;
   int offset_lwpid ;
};
typedef struct __anonstruct_VgdbShared64_107 VgdbShared64;
typedef VgdbShared32 VgdbShared;
enum __anonenum_VgVgdb_108 {
    Vg_VgdbNo = 0,
    Vg_VgdbYes = 1,
    Vg_VgdbFull = 2
} ;
typedef enum __anonenum_VgVgdb_108 VgVgdb;
enum __anonenum_VgSmc_109 {
    Vg_SmcNone = 0,
    Vg_SmcStack = 1,
    Vg_SmcAll = 2,
    Vg_SmcAllNonFile = 3
} ;
typedef enum __anonenum_VgSmc_109 VgSmc;
typedef int __jmp_buf[6];
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_110 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_110 __sigset_t;
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
enum __anonenum_VgSchedReturnCode_111 {
    VgSrc_None = 0,
    VgSrc_ExitThread = 1,
    VgSrc_ExitProcess = 2,
    VgSrc_FatalSig = 3
} ;
typedef enum __anonenum_VgSchedReturnCode_111 VgSchedReturnCode;
typedef VexGuestX86State VexGuestArchState;
struct SyscallStatus;
struct SyscallStatus;
struct SyscallArgs;
struct SyscallArgs;
struct __anonstruct_ThreadArchState_112 {
   VexGuestArchState vex  __attribute__((__aligned__(16))) ;
   VexGuestArchState vex_shadow1  __attribute__((__aligned__(16))) ;
   VexGuestArchState vex_shadow2  __attribute__((__aligned__(16))) ;
   UChar vex_spill[4096]  __attribute__((__aligned__(16))) ;
};
typedef struct __anonstruct_ThreadArchState_112 ThreadArchState;
struct __anonstruct_ThreadOSstate_113 {
   Int lwpid ;
   Int threadgroup ;
   ThreadId parent ;
   Addr valgrind_stack_base ;
   Addr valgrind_stack_init_SP ;
   Word exitcode ;
   Int fatalsig ;
};
typedef struct __anonstruct_ThreadOSstate_113 ThreadOSstate;
struct SigQueue;
struct __anonstruct_ThreadState_114 {
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
typedef struct __anonstruct_ThreadState_114 ThreadState;
struct __anonstruct_FastCacheEntry_115 {
   Addr guest ;
   Addr host ;
};
typedef struct __anonstruct_FastCacheEntry_115 FastCacheEntry;
struct _BBProfEntry {
   Addr64 addr ;
   ULong score ;
};
typedef struct _BBProfEntry BBProfEntry;
struct _VgHashNode {
   struct _VgHashNode *next ;
   UWord key ;
};
typedef struct _VgHashNode VgHashNode;
struct _VgHashTable;
typedef struct _VgHashTable *VgHashTable;
enum __anonenum_Vg_FnNameKind_116 {
    Vg_FnNameNormal = 0,
    Vg_FnNameMain = 1,
    Vg_FnNameBelowMain = 2
} ;
typedef enum __anonenum_Vg_FnNameKind_116 Vg_FnNameKind;
struct __anonstruct_StackBlock_117 {
   PtrdiffT base ;
   SizeT szB ;
   Bool spRel ;
   Bool isVec ;
   HChar name[16] ;
};
typedef struct __anonstruct_StackBlock_117 StackBlock;
struct __anonstruct_GlobalBlock_118 {
   Addr addr ;
   SizeT szB ;
   Bool isVec ;
   HChar name[16] ;
   HChar soname[16] ;
};
typedef struct __anonstruct_GlobalBlock_118 GlobalBlock;
struct _DebugInfo;
typedef struct _DebugInfo DebugInfo;
enum __anonenum_VgSectKind_119 {
    Vg_SectUnknown = 0,
    Vg_SectText = 1,
    Vg_SectData = 2,
    Vg_SectBSS = 3,
    Vg_SectGOT = 4,
    Vg_SectPLT = 5,
    Vg_SectGOTPLT = 6,
    Vg_SectOPD = 7
} ;
typedef enum __anonenum_VgSectKind_119 VgSectKind;
struct _XArray;
typedef struct _XArray XArray;
struct _ExeContext;
typedef struct _ExeContext ExeContext;
enum __anonenum_VgRes_120 {
    Vg_LowRes = 0,
    Vg_MedRes = 1,
    Vg_HighRes = 2
} ;
typedef enum __anonenum_VgRes_120 VgRes;
typedef Int ErrorKind;
struct _Error;
typedef struct _Error Error;
typedef Int SuppKind;
struct _Supp;
typedef struct _Supp Supp;
enum __anonenum_CoreErrorKind_121 {
    ThreadErr = -1
} ;
typedef enum __anonenum_CoreErrorKind_121 CoreErrorKind;
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
struct __anonstruct_VgCallbackClosure_122 {
   Addr64 nraddr ;
   Addr64 readdr ;
   ThreadId tid ;
};
typedef struct __anonstruct_VgCallbackClosure_122 VgCallbackClosure;
enum __anonenum_CorePart_123 {
    Vg_CoreStartup = 1,
    Vg_CoreSignal = 2,
    Vg_CoreSysCall = 3,
    Vg_CoreSysCallArgInMem = 4,
    Vg_CoreTranslate = 5,
    Vg_CoreClientReq = 6
} ;
typedef enum __anonenum_CorePart_123 CorePart;
struct __anonstruct_VgDetails_124 {
   Char *name ;
   Char *version ;
   Char *description ;
   Char *copyright_author ;
   Char *bug_reports_to ;
   UInt avg_translation_sizeB ;
};
typedef struct __anonstruct_VgDetails_124 VgDetails;
struct __anonstruct_VgNeeds_125 {
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
typedef struct __anonstruct_VgNeeds_125 VgNeeds;
struct __anonstruct_VgToolInterface_126 {
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
typedef struct __anonstruct_VgToolInterface_126 VgToolInterface;
enum __anonenum_SegKind_127 {
    SkFree = 0,
    SkAnonC = 1,
    SkAnonV = 2,
    SkFileC = 3,
    SkFileV = 4,
    SkShmC = 5,
    SkResvn = 6
} ;
typedef enum __anonenum_SegKind_127 SegKind;
enum __anonenum_ShrinkMode_128 {
    SmLower = 0,
    SmFixed = 1,
    SmUpper = 2
} ;
typedef enum __anonenum_ShrinkMode_128 ShrinkMode;
struct __anonstruct_NSegment_129 {
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
typedef struct __anonstruct_NSegment_129 NSegment;
enum __anonenum_rkind_131 {
    MFixed = 0,
    MHint = 1,
    MAny = 2
} ;
struct __anonstruct_MapRequest_130 {
   enum __anonenum_rkind_131 rkind ;
   Addr start ;
   Addr len ;
};
typedef struct __anonstruct_MapRequest_130 MapRequest;
struct __anonstruct_AixCodeSegChange_132 {
   Addr code_start ;
   Word code_len ;
   Addr data_start ;
   Word data_len ;
   UChar *file_name ;
   UChar *mem_name ;
   Bool is_mainexe ;
   Bool acquire ;
};
typedef struct __anonstruct_AixCodeSegChange_132 AixCodeSegChange;
struct __anonstruct_VgStack_133 {
   HChar bytes[1064960] ;
};
typedef struct __anonstruct_VgStack_133 VgStack;
struct __anonstruct_OrigFn_134 {
   unsigned int nraddr ;
};
typedef struct __anonstruct_OrigFn_134 OrigFn;
enum __anonenum_Vg_ClientRequest_135 {
    VG_USERREQ__RUNNING_ON_VALGRIND = 4097,
    VG_USERREQ__DISCARD_TRANSLATIONS = 4098,
    VG_USERREQ__CLIENT_CALL0 = 4353,
    VG_USERREQ__CLIENT_CALL1 = 4354,
    VG_USERREQ__CLIENT_CALL2 = 4355,
    VG_USERREQ__CLIENT_CALL3 = 4356,
    VG_USERREQ__COUNT_ERRORS = 4609,
    VG_USERREQ__GDB_MONITOR_COMMAND = 4610,
    VG_USERREQ__MALLOCLIKE_BLOCK = 4865,
    VG_USERREQ__RESIZEINPLACE_BLOCK = 4875,
    VG_USERREQ__FREELIKE_BLOCK = 4866,
    VG_USERREQ__CREATE_MEMPOOL = 4867,
    VG_USERREQ__DESTROY_MEMPOOL = 4868,
    VG_USERREQ__MEMPOOL_ALLOC = 4869,
    VG_USERREQ__MEMPOOL_FREE = 4870,
    VG_USERREQ__MEMPOOL_TRIM = 4871,
    VG_USERREQ__MOVE_MEMPOOL = 4872,
    VG_USERREQ__MEMPOOL_CHANGE = 4873,
    VG_USERREQ__MEMPOOL_EXISTS = 4874,
    VG_USERREQ__PRINTF = 5121,
    VG_USERREQ__PRINTF_BACKTRACE = 5122,
    VG_USERREQ__PRINTF_VALIST_BY_REF = 5123,
    VG_USERREQ__PRINTF_BACKTRACE_VALIST_BY_REF = 5124,
    VG_USERREQ__STACK_REGISTER = 5377,
    VG_USERREQ__STACK_DEREGISTER = 5378,
    VG_USERREQ__STACK_CHANGE = 5379,
    VG_USERREQ__LOAD_PDB_DEBUGINFO = 5633,
    VG_USERREQ__MAP_IP_TO_SRCLOC = 5889
} ;
typedef enum __anonenum_Vg_ClientRequest_135 Vg_ClientRequest;
typedef unsigned char gdb_byte;
typedef Addr CORE_ADDR;
struct inferior_list_entry;
struct inferior_list {
   struct inferior_list_entry *head ;
   struct inferior_list_entry *tail ;
};
struct inferior_list_entry {
   unsigned long id ;
   struct inferior_list_entry *next ;
};
struct thread_info;
struct thread_info;
struct inferior_list_entry;
struct reg;
enum target_signal {
    TARGET_SIGNAL_0 = 0,
    TARGET_SIGNAL_FIRST = 0,
    TARGET_SIGNAL_HUP = 1,
    TARGET_SIGNAL_INT = 2,
    TARGET_SIGNAL_QUIT = 3,
    TARGET_SIGNAL_ILL = 4,
    TARGET_SIGNAL_TRAP = 5,
    TARGET_SIGNAL_ABRT = 6,
    TARGET_SIGNAL_EMT = 7,
    TARGET_SIGNAL_FPE = 8,
    TARGET_SIGNAL_KILL = 9,
    TARGET_SIGNAL_BUS = 10,
    TARGET_SIGNAL_SEGV = 11,
    TARGET_SIGNAL_SYS = 12,
    TARGET_SIGNAL_PIPE = 13,
    TARGET_SIGNAL_ALRM = 14,
    TARGET_SIGNAL_TERM = 15,
    TARGET_SIGNAL_URG = 16,
    TARGET_SIGNAL_STOP = 17,
    TARGET_SIGNAL_TSTP = 18,
    TARGET_SIGNAL_CONT = 19,
    TARGET_SIGNAL_CHLD = 20,
    TARGET_SIGNAL_TTIN = 21,
    TARGET_SIGNAL_TTOU = 22,
    TARGET_SIGNAL_IO = 23,
    TARGET_SIGNAL_XCPU = 24,
    TARGET_SIGNAL_XFSZ = 25,
    TARGET_SIGNAL_VTALRM = 26,
    TARGET_SIGNAL_PROF = 27,
    TARGET_SIGNAL_WINCH = 28,
    TARGET_SIGNAL_LOST = 29,
    TARGET_SIGNAL_USR1 = 30,
    TARGET_SIGNAL_USR2 = 31,
    TARGET_SIGNAL_PWR = 32,
    TARGET_SIGNAL_POLL = 33,
    TARGET_SIGNAL_WIND = 34,
    TARGET_SIGNAL_PHONE = 35,
    TARGET_SIGNAL_WAITING = 36,
    TARGET_SIGNAL_LWP = 37,
    TARGET_SIGNAL_DANGER = 38,
    TARGET_SIGNAL_GRANT = 39,
    TARGET_SIGNAL_RETRACT = 40,
    TARGET_SIGNAL_MSG = 41,
    TARGET_SIGNAL_SOUND = 42,
    TARGET_SIGNAL_SAK = 43,
    TARGET_SIGNAL_PRIO = 44,
    TARGET_SIGNAL_REALTIME_33 = 45,
    TARGET_SIGNAL_REALTIME_34 = 46,
    TARGET_SIGNAL_REALTIME_35 = 47,
    TARGET_SIGNAL_REALTIME_36 = 48,
    TARGET_SIGNAL_REALTIME_37 = 49,
    TARGET_SIGNAL_REALTIME_38 = 50,
    TARGET_SIGNAL_REALTIME_39 = 51,
    TARGET_SIGNAL_REALTIME_40 = 52,
    TARGET_SIGNAL_REALTIME_41 = 53,
    TARGET_SIGNAL_REALTIME_42 = 54,
    TARGET_SIGNAL_REALTIME_43 = 55,
    TARGET_SIGNAL_REALTIME_44 = 56,
    TARGET_SIGNAL_REALTIME_45 = 57,
    TARGET_SIGNAL_REALTIME_46 = 58,
    TARGET_SIGNAL_REALTIME_47 = 59,
    TARGET_SIGNAL_REALTIME_48 = 60,
    TARGET_SIGNAL_REALTIME_49 = 61,
    TARGET_SIGNAL_REALTIME_50 = 62,
    TARGET_SIGNAL_REALTIME_51 = 63,
    TARGET_SIGNAL_REALTIME_52 = 64,
    TARGET_SIGNAL_REALTIME_53 = 65,
    TARGET_SIGNAL_REALTIME_54 = 66,
    TARGET_SIGNAL_REALTIME_55 = 67,
    TARGET_SIGNAL_REALTIME_56 = 68,
    TARGET_SIGNAL_REALTIME_57 = 69,
    TARGET_SIGNAL_REALTIME_58 = 70,
    TARGET_SIGNAL_REALTIME_59 = 71,
    TARGET_SIGNAL_REALTIME_60 = 72,
    TARGET_SIGNAL_REALTIME_61 = 73,
    TARGET_SIGNAL_REALTIME_62 = 74,
    TARGET_SIGNAL_REALTIME_63 = 75,
    TARGET_SIGNAL_CANCEL = 76,
    TARGET_SIGNAL_REALTIME_32 = 77,
    TARGET_SIGNAL_REALTIME_64 = 78,
    TARGET_SIGNAL_REALTIME_65 = 79,
    TARGET_SIGNAL_REALTIME_66 = 80,
    TARGET_SIGNAL_REALTIME_67 = 81,
    TARGET_SIGNAL_REALTIME_68 = 82,
    TARGET_SIGNAL_REALTIME_69 = 83,
    TARGET_SIGNAL_REALTIME_70 = 84,
    TARGET_SIGNAL_REALTIME_71 = 85,
    TARGET_SIGNAL_REALTIME_72 = 86,
    TARGET_SIGNAL_REALTIME_73 = 87,
    TARGET_SIGNAL_REALTIME_74 = 88,
    TARGET_SIGNAL_REALTIME_75 = 89,
    TARGET_SIGNAL_REALTIME_76 = 90,
    TARGET_SIGNAL_REALTIME_77 = 91,
    TARGET_SIGNAL_REALTIME_78 = 92,
    TARGET_SIGNAL_REALTIME_79 = 93,
    TARGET_SIGNAL_REALTIME_80 = 94,
    TARGET_SIGNAL_REALTIME_81 = 95,
    TARGET_SIGNAL_REALTIME_82 = 96,
    TARGET_SIGNAL_REALTIME_83 = 97,
    TARGET_SIGNAL_REALTIME_84 = 98,
    TARGET_SIGNAL_REALTIME_85 = 99,
    TARGET_SIGNAL_REALTIME_86 = 100,
    TARGET_SIGNAL_REALTIME_87 = 101,
    TARGET_SIGNAL_REALTIME_88 = 102,
    TARGET_SIGNAL_REALTIME_89 = 103,
    TARGET_SIGNAL_REALTIME_90 = 104,
    TARGET_SIGNAL_REALTIME_91 = 105,
    TARGET_SIGNAL_REALTIME_92 = 106,
    TARGET_SIGNAL_REALTIME_93 = 107,
    TARGET_SIGNAL_REALTIME_94 = 108,
    TARGET_SIGNAL_REALTIME_95 = 109,
    TARGET_SIGNAL_REALTIME_96 = 110,
    TARGET_SIGNAL_REALTIME_97 = 111,
    TARGET_SIGNAL_REALTIME_98 = 112,
    TARGET_SIGNAL_REALTIME_99 = 113,
    TARGET_SIGNAL_REALTIME_100 = 114,
    TARGET_SIGNAL_REALTIME_101 = 115,
    TARGET_SIGNAL_REALTIME_102 = 116,
    TARGET_SIGNAL_REALTIME_103 = 117,
    TARGET_SIGNAL_REALTIME_104 = 118,
    TARGET_SIGNAL_REALTIME_105 = 119,
    TARGET_SIGNAL_REALTIME_106 = 120,
    TARGET_SIGNAL_REALTIME_107 = 121,
    TARGET_SIGNAL_REALTIME_108 = 122,
    TARGET_SIGNAL_REALTIME_109 = 123,
    TARGET_SIGNAL_REALTIME_110 = 124,
    TARGET_SIGNAL_REALTIME_111 = 125,
    TARGET_SIGNAL_REALTIME_112 = 126,
    TARGET_SIGNAL_REALTIME_113 = 127,
    TARGET_SIGNAL_REALTIME_114 = 128,
    TARGET_SIGNAL_REALTIME_115 = 129,
    TARGET_SIGNAL_REALTIME_116 = 130,
    TARGET_SIGNAL_REALTIME_117 = 131,
    TARGET_SIGNAL_REALTIME_118 = 132,
    TARGET_SIGNAL_REALTIME_119 = 133,
    TARGET_SIGNAL_REALTIME_120 = 134,
    TARGET_SIGNAL_REALTIME_121 = 135,
    TARGET_SIGNAL_REALTIME_122 = 136,
    TARGET_SIGNAL_REALTIME_123 = 137,
    TARGET_SIGNAL_REALTIME_124 = 138,
    TARGET_SIGNAL_REALTIME_125 = 139,
    TARGET_SIGNAL_REALTIME_126 = 140,
    TARGET_SIGNAL_REALTIME_127 = 141,
    TARGET_SIGNAL_INFO = 142,
    TARGET_SIGNAL_UNKNOWN = 143,
    TARGET_SIGNAL_DEFAULT = 144,
    TARGET_EXC_BAD_ACCESS = 145,
    TARGET_EXC_BAD_INSTRUCTION = 146,
    TARGET_EXC_ARITHMETIC = 147,
    TARGET_EXC_EMULATION = 148,
    TARGET_EXC_SOFTWARE = 149,
    TARGET_EXC_BREAKPOINT = 150,
    TARGET_SIGNAL_LAST = 151
} ;
struct thread_resume {
   unsigned long thread ;
   int leave_stopped ;
   int step ;
   int sig ;
};
struct target_ops {
   int (*thread_alive)(unsigned long pid ) ;
   void (*resume)(struct thread_resume *resume_info ) ;
   unsigned char (*wait)(char *status ) ;
   void (*fetch_registers)(int regno ) ;
   void (*store_registers)(int regno ) ;
   int (*read_memory)(CORE_ADDR memaddr , unsigned char *myaddr , int len ) ;
   int (*write_memory)(CORE_ADDR memaddr , unsigned char const   *myaddr ,
                       int len ) ;
   void (*send_signal)(int  ) ;
   char *(*target_xml)(void) ;
   char *(*shadow_target_xml)(void) ;
   int (*insert_watchpoint)(char type , CORE_ADDR addr , int len ) ;
   int (*remove_watchpoint)(char type , CORE_ADDR addr , int len ) ;
   int (*stopped_by_watchpoint)(void) ;
   CORE_ADDR (*stopped_data_address)(void) ;
};
enum __anonenum_transfer_direction_136 {
    valgrind_to_gdbserver = 0,
    gdbserver_to_valgrind = 1
} ;
typedef enum __anonenum_transfer_direction_136 transfer_direction;
enum __anonenum_CallReason_137 {
    init_reason = 0,
    vgdb_reason = 1,
    core_reason = 2,
    break_reason = 3,
    watch_reason = 4,
    signal_reason = 5
} ;
typedef enum __anonenum_CallReason_137 CallReason;
enum __anonenum_GS_Kind_138 {
    GS_break = 0,
    GS_jump = 1
} ;
typedef enum __anonenum_GS_Kind_138 GS_Kind;
struct _GS_Address {
   struct _GS_Address *next ;
   Addr addr ;
   GS_Kind kind ;
};
typedef struct _GS_Address GS_Address;
struct _GS_Watch {
   struct _GS_Watch *next ;
   Addr addr ;
   SizeT len ;
   PointKind kind ;
};
typedef struct _GS_Watch GS_Watch;
struct mon_out_buf {
   char buf[8190] ;
   int next ;
   UInt ret ;
};
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
extern void vgPlain_debugLog_startup(Int level , HChar *who ) ;
extern Int vgPlain_debugLog_getLevel(void) ;
extern void ( /* format attribute */  vgPlain_debugLog)(Int level ,
                                                        HChar const   *modulename ,
                                                        HChar const   *format 
                                                        , ...) ;
extern UInt vgPlain_debugLog_vprintf(void (*send_fn)(HChar  , void * ) ,
                                     void *send_arg2 , HChar const   *format ,
                                     va_list vargs ) ;
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
void vgPlain_gdbserver(ThreadId tid ) ;
Int vgPlain_dyn_vgdb_error  ;
char *vgPlain_ppPointKind(PointKind kind ) ;
Bool vgPlain_is_watched(PointKind kind , Addr addr , Int szB ) ;
void vgPlain_needs_watchpoint(Bool (*watchpoint)(PointKind kind , Bool insert ,
                                                 Addr addr , SizeT len ) ) ;
UInt ( /* format attribute */  vgPlain_gdb_printf)(HChar const   *format  , ...) ;
Int vgPlain_keyword_id(Char *keywords , Char *input_word ,
                       kwd_report_error report ) ;
void vgPlain_strtok_get_address_and_size(Addr *address , SizeT *szB ,
                                         Char **ssaveptr ) ;
void vgPlain_gdbserver_prerun_action(ThreadId tid ) ;
Bool vgPlain_gdbserver_activity(ThreadId tid ) ;
Bool vgPlain_gdbserver_point(PointKind kind , Bool insert , Addr addr , int len ) ;
void vgPlain_invoke_gdbserver(int check ) ;
Bool vgPlain_gdbserver_report_signal(Int sigNo , ThreadId tid ) ;
IRSB *vgPlain_instrument_for_gdbserver_if_needed(IRSB *sb_in ,
                                                 VexGuestLayout *layout ,
                                                 VexGuestExtents *vge ,
                                                 IRType gWordTy ,
                                                 IRType hWordTy ) ;
void vgPlain_gdbserver_status_output(void) ;
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
extern VgHashTable vgPlain_HT_construct(HChar *name ) ;
extern Int vgPlain_HT_count_nodes(VgHashTable table ) ;
extern void vgPlain_HT_add_node(VgHashTable t , void *node ) ;
extern void *vgPlain_HT_lookup(VgHashTable table , UWord key ) ;
extern void *vgPlain_HT_remove(VgHashTable table , UWord key ) ;
extern VgHashNode **vgPlain_HT_to_array(VgHashTable t , UInt *n_elems ) ;
extern void vgPlain_HT_ResetIter(VgHashTable table ) ;
extern void *vgPlain_HT_Next(VgHashTable table ) ;
extern void vgPlain_HT_destruct(VgHashTable t ) ;
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
extern void vgPlain_apply_to_GP_regs(void (*f)(UWord val ) ) ;
extern void vgPlain_thread_stack_reset_iter(ThreadId *tid ) ;
extern Bool vgPlain_thread_stack_next(ThreadId *tid , Addr *stack_min ,
                                      Addr *stack_max ) ;
extern Addr vgPlain_thread_get_stack_max(ThreadId tid ) ;
extern SizeT vgPlain_thread_get_stack_size(ThreadId tid ) ;
extern Addr vgPlain_thread_get_altstack_min(ThreadId tid ) ;
extern SizeT vgPlain_thread_get_altstack_size(ThreadId tid ) ;
extern void *vgPlain_fnptr_to_fnentry(void * ) ;
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
static int ( /* format attribute */  VALGRIND_PRINTF)(char const   *format 
                                                      , ...)  __attribute__((__unused__)) ;
static int ( /* format attribute */  VALGRIND_PRINTF)(char const   *format 
                                                      , ...)  __attribute__((__unused__)) ;
static int ( /* format attribute */  VALGRIND_PRINTF)(char const   *format 
                                                      , ...) 
{ 
  unsigned long _qzz_res ;
  va_list vargs ;
  unsigned int volatile   _zzq_args[6] ;
  unsigned int volatile   _zzq_result ;

  {
  __builtin_va_start(vargs, format);
  _zzq_args[0] = (unsigned int volatile   )5123U;
  _zzq_args[1] = (unsigned int volatile   )((unsigned int )((unsigned long )format));
  _zzq_args[2] = (unsigned int volatile   )((unsigned int )((unsigned long )(& vargs)));
  _zzq_args[3] = (unsigned int volatile   )0U;
  _zzq_args[4] = (unsigned int volatile   )0U;
  _zzq_args[5] = (unsigned int volatile   )0U;
  __asm__  volatile   ("roll $3,  %%edi ; roll $13, %%edi\n\t"
                       "roll $29, %%edi ; roll $19, %%edi\n\t"
                       "xchgl %%ebx,%%ebx": "=d" (_zzq_result): "a" (& _zzq_args[0]),
                       "0" (0): "cc", "memory");
  _qzz_res = (unsigned long )_zzq_result;
  __builtin_va_end(vargs);
  return ((int )_qzz_res);
}
}
static int ( /* format attribute */  VALGRIND_PRINTF_BACKTRACE)(char const   *format 
                                                                , ...)  __attribute__((__unused__)) ;
static int ( /* format attribute */  VALGRIND_PRINTF_BACKTRACE)(char const   *format 
                                                                , ...)  __attribute__((__unused__)) ;
static int ( /* format attribute */  VALGRIND_PRINTF_BACKTRACE)(char const   *format 
                                                                , ...) 
{ 
  unsigned long _qzz_res ;
  va_list vargs ;
  unsigned int volatile   _zzq_args[6] ;
  unsigned int volatile   _zzq_result ;

  {
  __builtin_va_start(vargs, format);
  _zzq_args[0] = (unsigned int volatile   )5124U;
  _zzq_args[1] = (unsigned int volatile   )((unsigned int )((unsigned long )format));
  _zzq_args[2] = (unsigned int volatile   )((unsigned int )((unsigned long )(& vargs)));
  _zzq_args[3] = (unsigned int volatile   )0U;
  _zzq_args[4] = (unsigned int volatile   )0U;
  _zzq_args[5] = (unsigned int volatile   )0U;
  __asm__  volatile   ("roll $3,  %%edi ; roll $13, %%edi\n\t"
                       "roll $29, %%edi ; roll $19, %%edi\n\t"
                       "xchgl %%ebx,%%ebx": "=d" (_zzq_result): "a" (& _zzq_args[0]),
                       "0" (0): "cc", "memory");
  _qzz_res = (unsigned long )_zzq_result;
  __builtin_va_end(vargs);
  return ((int )_qzz_res);
}
}
extern void gdbserver_init(void) ;
extern void server_main(void) ;
extern void gdbserver_terminate(void) ;
extern void monitor_output(char *s ) ;
extern int remote_desc_activity(char *msg ) ;
extern void remote_utils_output_status(void) ;
extern Bool remote_connected(void) ;
extern void remote_finish(FinishReason reason ) ;
extern void reset_valgrind_sink(char *info ) ;
extern Addr thumb_pc(Addr pc ) ;
extern Bool valgrind_single_stepping(void) ;
extern void valgrind_set_single_stepping(Bool  ) ;
extern Addr valgrind_get_ignore_break_once(void) ;
extern void vgPlain_set_watchpoint_stop_address(Addr addr ) ;
extern ThreadId vgdb_interrupted_tid ;
extern void *new_register_cache(void) ;
extern void free_register_cache(void *regcache ) ;
extern void regcache_invalidate_one(struct inferior_list_entry * ) ;
extern void regcache_invalidate(void) ;
extern void registers_to_string(char *buf ) ;
extern void registers_from_string(char *buf ) ;
extern int registers_length(void) ;
extern struct reg *find_register_by_number(int n ) ;
extern int register_size(int n ) ;
extern int find_regno(char const   *name ) ;
extern char const   **gdbserver_expedite_regs ;
extern void supply_register(int n , void const   *buf , Bool *mod ) ;
extern void supply_register_from_string(int n , char const   *buf , Bool *mod ) ;
extern void supply_register_by_name(char const   *name , void const   *buf ,
                                    Bool *mod ) ;
extern void collect_register(int n , void *buf ) ;
extern void collect_register_as_string(int n , char *buf ) ;
extern void collect_register_by_name(char const   *name , void *buf ) ;
extern void gdbserver_signal_encountered(Int sigNo ) ;
extern Bool gdbserver_deliver_signal(Int sigNo ) ;
extern int pass_signals[] ;
extern struct target_ops *the_target ;
extern void set_target_ops(struct target_ops * ) ;
extern int read_inferior_memory(CORE_ADDR memaddr , unsigned char *myaddr ,
                                int len ) ;
extern int write_inferior_memory(CORE_ADDR memaddr ,
                                 unsigned char const   *myaddr , int len ) ;
extern void set_desired_inferior(int id ) ;
extern void *vgPlain_dmemcpy(void *d , void const   *s , SizeT sz , Bool *mod ) ;
extern void vgPlain_transfer(void *valgrind , void *gdbserver ,
                             transfer_direction dir , SizeT sz , Bool *mod ) ;
extern void initialize_low(void) ;
extern void initialize_shadow_low(Bool shadow_mode ) ;
extern struct inferior_list all_threads ;
extern void add_inferior_to_list(struct inferior_list *list ,
                                 struct inferior_list_entry *new_inferior ) ;
extern void for_each_inferior(struct inferior_list *list ,
                              void (*action)(struct inferior_list_entry * ) ) ;
extern struct thread_info *current_inferior ;
extern void remove_inferior(struct inferior_list *list ,
                            struct inferior_list_entry *entry ) ;
extern void remove_thread(struct thread_info *thread ) ;
extern void add_thread(unsigned long thread_id , void *target_data ,
                       unsigned int  ) ;
extern unsigned int thread_id_to_gdb_id(unsigned long  ) ;
extern unsigned int thread_to_gdb_id(struct thread_info * ) ;
extern unsigned long gdb_id_to_thread_id(unsigned int  ) ;
extern struct thread_info *gdb_id_to_thread(unsigned int  ) ;
extern void clear_inferiors(void) ;
extern struct inferior_list_entry *find_inferior(struct inferior_list * ,
                                                 int (*func)(struct inferior_list_entry * ,
                                                             void * ) ,
                                                 void *arg ) ;
extern struct inferior_list_entry *find_inferior_id(struct inferior_list *list ,
                                                    unsigned long id ) ;
extern void *inferior_target_data(struct thread_info * ) ;
extern void set_inferior_target_data(struct thread_info * , void * ) ;
extern void *inferior_regcache_data(struct thread_info * ) ;
extern void set_inferior_regcache_data(struct thread_info * , void * ) ;
extern void change_inferior_id(struct inferior_list *list ,
                               unsigned long new_id ) ;
extern unsigned long cont_thread ;
extern unsigned long general_thread ;
extern unsigned long step_thread ;
extern unsigned long thread_from_wait ;
extern unsigned long old_thread_from_wait ;
extern jmp_buf toplevel ;
extern Bool noack_mode ;
extern int putpkt(char *buf ) ;
extern int putpkt_binary(char *buf , int len ) ;
extern int getpkt(char *buf ) ;
extern void remote_open(char *name ) ;
extern void remote_close(void) ;
extern void sync_gdb_connection(void) ;
extern void write_ok(char *buf ) ;
extern void write_enn(char *buf ) ;
extern void convert_ascii_to_int(char *from , unsigned char *to , int n ) ;
extern void convert_int_to_ascii(unsigned char *from , char *to , int n ) ;
extern void prepare_resume_reply(char *buf , char status , unsigned char sig ) ;
extern void decode_address(CORE_ADDR *addrp , char const   *start , int len ) ;
extern void decode_m_packet(char *from , CORE_ADDR *mem_addr_ptr ,
                            unsigned int *len_ptr ) ;
extern void decode_M_packet(char *from , CORE_ADDR *mem_addr_ptr ,
                            unsigned int *len_ptr , unsigned char *to ) ;
extern int decode_X_packet(char *from , int packet_len ,
                           CORE_ADDR *mem_addr_ptr , unsigned int *len_ptr ,
                           unsigned char *to ) ;
extern int unhexify(char *bin , char const   *hex , int count ) ;
extern int hexify(char *hex , char const   *bin , int count ) ;
extern int remote_escape_output(gdb_byte const   *buffer , int len ,
                                gdb_byte *out_buf , int *out_len ,
                                int out_maxlen ) ;
extern enum target_signal target_signal_from_host(int hostsig ) ;
extern int target_signal_to_host_p(enum target_signal oursig ) ;
extern int target_signal_to_host(enum target_signal oursig ) ;
extern char *target_signal_to_name(enum target_signal  ) ;
extern  __attribute__((__noreturn__)) void ( /* format attribute */  error)(char const   *string 
                                                                            , ...) ;
extern void ( /* format attribute */  sr_perror)(SysRes sr , char *string  , ...) ;
extern  __attribute__((__noreturn__)) void ( /* format attribute */  fatal)(char const   *string 
                                                                            , ...) ;
extern void ( /* format attribute */  warning)(char const   *string  , ...) ;
extern void init_registers(void) ;
extern char const   version[] ;
void ( __attribute__((__regparm__(1))) vgPlain_helperc_CallDebugger)(HWord iaddr ) ;
void ( __attribute__((__regparm__(1))) vgPlain_helperc_invalidate_if_not_gdbserved)(Addr addr ) ;
static void invalidate_current_ip(ThreadId tid , char *who ) ;
static char *ppCallReason(CallReason reason ) 
{ 
  long tmp ;

  {
  switch ((unsigned int )reason) {
  case 0U: 
  return ((char *)"init_reason");
  case 1U: 
  return ((char *)"vgdb_reason");
  case 2U: 
  return ((char *)"core_reason");
  case 3U: 
  return ((char *)"break_reason");
  case 4U: 
  return ((char *)"watch_reason");
  case 5U: 
  return ((char *)"signal_reason");
  default: 
  tmp = __builtin_expect(0L, 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 81,
                        (Char const   *)"ppCallReason", "");
  }
  }
  return ((char *)0);
}
}
static Addr ignore_this_break_once  =    (Addr )0;
static void call_gdbserver(ThreadId tid , CallReason reason ) ;
static void *C2v(CORE_ADDR addr ) 
{ 


  {
  return ((void *)addr);
}
}
static char buf[2][200]  ;
static char *sym(Addr addr , Bool is_code ) ;
static int w  =    0;
static char *sym(Addr addr , Bool is_code ) 
{ 
  PtrdiffT offset ;
  int tmp ;

  {
  if (w == 2) {
    w = 0;
  } else {

  }
  if (is_code) {
    vgPlain_describe_IP(addr, (Char *)(buf[w]), 200);
  } else {
    vgPlain_get_datasym_and_offset(addr, (Char *)(buf[w]), 200, & offset);
  }
  tmp = w;
  w ++;
  return (buf[tmp]);
}
}
static int gdbserver_called  =    0;
static int gdbserver_exited  =    0;
static VgHashTable gs_addresses  =    (VgHashTable )((void *)0);
static Addr HT_addr(Addr addr ) 
{ 


  {
  return (addr);
}
}
static void add_gs_address(Addr addr , GS_Kind kind , char *from ) 
{ 
  GS_Address *p ;
  void *tmp ;

  {
  tmp = vgPlain_arena_malloc(0, from, (SizeT )sizeof(GS_Address ));
  p = (GS_Address *)tmp;
  p->addr = HT_addr(addr);
  p->kind = kind;
  vgPlain_HT_add_node(gs_addresses, (void *)p);
  vgPlain_discard_translations((Addr64 )addr, (ULong )2, from);
  return;
}
}
static void remove_gs_address(GS_Address *g , char *from ) 
{ 


  {
  vgPlain_HT_remove(gs_addresses, g->addr);
  vgPlain_discard_translations((Addr64 )g->addr, (ULong )2, from);
  vgPlain_arena_free(0, (void *)g);
  return;
}
}
char *vgPlain_ppPointKind(PointKind kind ) 
{ 
  long tmp ;

  {
  switch ((unsigned int )kind) {
  case 0U: 
  return ((char *)"software_breakpoint");
  case 1U: 
  return ((char *)"hardware_breakpoint");
  case 2U: 
  return ((char *)"write_watchpoint");
  case 3U: 
  return ((char *)"read_watchpoint");
  case 4U: 
  return ((char *)"access_watchpoint");
  default: 
  tmp = __builtin_expect(0L, 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 230,
                        (Char const   *)"vgPlain_ppPointKind", "");
  }
  }
  return ((char *)0);
}
}
static VgHashTable gs_watches  =    (VgHashTable )((void *)0);
static void breakpoint(Bool insert , CORE_ADDR addr ) 
{ 
  GS_Address *g ;
  Addr tmp ;
  void *tmp___0 ;
  Bool tmp___1 ;
  char const   *tmp___2 ;
  char const   *tmp___3 ;
  void *tmp___4 ;
  Int tmp___5 ;
  int tmp___6 ;
  long tmp___7 ;

  {
  tmp = HT_addr(addr);
  tmp___0 = vgPlain_HT_lookup(gs_addresses, tmp);
  g = (GS_Address *)tmp___0;
  if (insert) {
    if ((unsigned int )g == (unsigned int )((void *)0)) {
      add_gs_address(addr, (GS_Kind )0, (char *)"m_gdbserver breakpoint insert");
    } else {
      g->kind = (GS_Kind )0;
    }
  } else
  if ((unsigned int )g != (unsigned int )((void *)0)) {
    if ((unsigned int )g->kind == 0U) {
      tmp___1 = valgrind_single_stepping();
      if (tmp___1) {
        g->kind = (GS_Kind )1;
      } else {
        remove_gs_address(g, (char *)"m_gdbserver breakpoint remove");
      }
    } else {
      goto _L;
    }
  } else {
    _L: /* CIL Label */ 
    while (1) {
      tmp___5 = vgPlain_debugLog_getLevel();
      if (tmp___5 >= 1) {
        tmp___6 = 1;
      } else {
        tmp___6 = 0;
      }
      tmp___7 = __builtin_expect((long )tmp___6, 0L);
      if (tmp___7) {
        if ((unsigned int )g == (unsigned int )((void *)0)) {
          tmp___3 = "NULL";
        } else {
          if ((unsigned int )g->kind == 1U) {
            tmp___2 = "GS_jump";
          } else {
            tmp___2 = "GS_break";
          }
          tmp___3 = tmp___2;
        }
        tmp___4 = C2v(addr);
        vgPlain_debugLog(1, "gdbsrv", "remove break addr %p %s\n", tmp___4,
                         tmp___3);
      } else {

      }
      break;
    }
  }
  return;
}
}
static Bool (*tool_watchpoint)(PointKind kind , Bool insert , Addr addr ,
                               SizeT len )  =    (Bool (*)(PointKind kind , Bool insert , Addr addr , SizeT len ))((void *)0);
void vgPlain_needs_watchpoint(Bool (*watchpoint)(PointKind kind , Bool insert ,
                                                 Addr addr , SizeT len ) ) 
{ 


  {
  tool_watchpoint = watchpoint;
  return;
}
}
Bool vgPlain_gdbserver_point(PointKind kind , Bool insert , Addr addr , int len ) 
{ 
  Bool res ;
  GS_Watch *g ;
  Bool is_code ;
  int tmp ;
  char *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  char const   *tmp___3 ;
  Int tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  long tmp___11 ;

  {
  if ((unsigned int )kind == 0U) {
    tmp = 1;
  } else
  if ((unsigned int )kind == 1U) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  is_code = (Bool )tmp;
  while (1) {
    tmp___4 = vgPlain_debugLog_getLevel();
    if (tmp___4 >= 1) {
      tmp___5 = 1;
    } else {
      tmp___5 = 0;
    }
    tmp___6 = __builtin_expect((long )tmp___5, 0L);
    if (tmp___6) {
      tmp___0 = sym(addr, is_code);
      tmp___1 = C2v(addr);
      tmp___2 = vgPlain_ppPointKind(kind);
      if (insert) {
        tmp___3 = "insert";
      } else {
        tmp___3 = "remove";
      }
      vgPlain_debugLog(1, "gdbsrv", "%s %s at addr %p %s\n", tmp___3, tmp___2,
                       tmp___1, tmp___0);
    } else {

    }
    break;
  }
  if (is_code) {
    breakpoint(insert, addr);
    return ((Bool )1);
  } else {

  }
  if ((unsigned int )kind == 4U) {
    tmp___7 = 1;
  } else
  if ((unsigned int )kind == 3U) {
    tmp___7 = 1;
  } else
  if ((unsigned int )kind == 2U) {
    tmp___7 = 1;
  } else {
    tmp___7 = 0;
  }
  tmp___8 = __builtin_expect((long )tmp___7, 1L);
  if (tmp___8) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"kind == access_watchpoint || kind == read_watchpoint || kind == write_watchpoint",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 314,
                        (Char const   *)"vgPlain_gdbserver_point", "");
  }
  if ((unsigned int )tool_watchpoint == (unsigned int )((void *)0)) {
    return ((Bool )0);
  } else {

  }
  res = (*tool_watchpoint)(kind, insert, addr, (SizeT )len);
  if (! res) {
    return ((Bool )0);
  } else {

  }
  tmp___9 = vgPlain_HT_lookup(gs_watches, addr);
  g = (GS_Watch *)tmp___9;
  if (insert) {
    if ((unsigned int )g == (unsigned int )((void *)0)) {
      tmp___10 = vgPlain_arena_malloc(0, (HChar *)"gdbserver_point watchpoint",
                                      (SizeT )sizeof(GS_Watch ));
      g = (GS_Watch *)tmp___10;
      g->addr = addr;
      g->len = (SizeT )len;
      g->kind = kind;
      vgPlain_HT_add_node(gs_watches, (void *)g);
    } else {
      g->kind = kind;
    }
  } else {
    tmp___11 = __builtin_expect((long )(! (! ((unsigned int )g != (unsigned int )((void *)0)))),
                                1L);
    if (tmp___11) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"g != NULL",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 336,
                          (Char const   *)"vgPlain_gdbserver_point", "");
    }
    vgPlain_HT_remove(gs_watches, g->addr);
    vgPlain_arena_free(0, (void *)g);
  }
  return ((Bool )1);
}
}
Bool vgPlain_is_watched(PointKind kind , Addr addr , Int szB ) 
{ 
  GS_Watch *g ;
  Bool watched ;
  ThreadId tid ;
  Addr to ;
  int tmp ;
  long tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  Int tmp___3 ;
  int tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  void *tmp___7 ;

  {
  watched = (Bool )0;
  tid = vgPlain_running_tid;
  if (! gdbserver_called) {
    return ((Bool )0);
  } else {

  }
  to = addr + (Addr )szB;
  if ((unsigned int )kind == 4U) {
    tmp = 1;
  } else
  if ((unsigned int )kind == 3U) {
    tmp = 1;
  } else
  if ((unsigned int )kind == 2U) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1,
                        (Char const   *)"kind == access_watchpoint || kind == read_watchpoint || kind == write_watchpoint",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 356,
                        (Char const   *)"vgPlain_is_watched", "");
  }
  while (1) {
    tmp___3 = vgPlain_debugLog_getLevel();
    if (tmp___3 >= 1) {
      tmp___4 = 1;
    } else {
      tmp___4 = 0;
    }
    tmp___5 = __builtin_expect((long )tmp___4, 0L);
    if (tmp___5) {
      tmp___1 = C2v(addr);
      tmp___2 = vgPlain_ppPointKind(kind);
      vgPlain_debugLog(1, "gdbsrv",
                       "tid %d VG_(is_watched) %s addr %p szB %d\n", tid,
                       tmp___2, tmp___1, szB);
    } else {

    }
    break;
  }
  vgPlain_HT_ResetIter(gs_watches);
  while (1) {
    tmp___7 = vgPlain_HT_Next(gs_watches);
    g = (GS_Watch *)tmp___7;
    if (g) {

    } else {
      break;
    }
    switch ((unsigned int )g->kind) {
    case 1U: 
    case 0U: 
    break;
    case 2U: 
    case 3U: 
    case 4U: 
    if (to <= g->addr) {
      continue;
    } else
    if (addr >= g->addr + g->len) {
      continue;
    } else {

    }
    watched = (Bool )1;
    if ((unsigned int )kind == 4U) {
      goto _L;
    } else
    if ((unsigned int )g->kind == 4U) {
      goto _L;
    } else
    if ((unsigned int )g->kind == (unsigned int )kind) {
      _L: /* CIL Label */ 
      if (g->addr <= addr) {
        vgPlain_set_watchpoint_stop_address(addr);
      } else {
        vgPlain_set_watchpoint_stop_address(g->addr);
      }
      if ((unsigned int )kind == 2U) {
        valgrind_set_single_stepping((Bool )1);
        invalidate_current_ip(tid, (char *)"m_gdbserver write watchpoint");
      } else {
        call_gdbserver(tid, (CallReason )4);
        vgPlain_set_watchpoint_stop_address((Addr )0);
      }
      return ((Bool )1);
    } else {

    }
    break;
    default: 
    tmp___6 = __builtin_expect(0L, 1L);
    if (tmp___6) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 410,
                          (Char const   *)"vgPlain_is_watched", "");
    }
    }
  }
  return (watched);
}
}
static VgVgdb vgPlain_gdbserver_instrumentation_needed(VexGuestExtents *vge ) 
{ 
  GS_Address *g ;
  int e ;
  Int tmp ;
  int tmp___0 ;
  long tmp___1 ;
  Bool tmp___2 ;
  Int tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  void *tmp___6 ;
  Int tmp___7 ;
  int tmp___8 ;
  long tmp___9 ;
  Addr tmp___10 ;
  Addr tmp___11 ;
  void *tmp___12 ;
  Int tmp___13 ;
  int tmp___14 ;
  long tmp___15 ;

  {
  if (! gdbserver_called) {
    return ((VgVgdb )0);
  } else {

  }
  tmp___2 = valgrind_single_stepping();
  if (tmp___2) {
    while (1) {
      tmp = vgPlain_debugLog_getLevel();
      if (tmp >= 2) {
        tmp___0 = 1;
      } else {
        tmp___0 = 0;
      }
      tmp___1 = __builtin_expect((long )tmp___0, 0L);
      if (tmp___1) {
        vgPlain_debugLog(2, "gdbsrv",
                         "gdbserver_instrumentation_needed due to single stepping\n");
      } else {

      }
      break;
    }
    return ((VgVgdb )1);
  } else {

  }
  if ((unsigned int )vgPlain_clo_vgdb == 1U) {
    tmp___3 = vgPlain_HT_count_nodes(gs_addresses);
    if (tmp___3 == 0) {
      return ((VgVgdb )0);
    } else {

    }
  } else {

  }
  vgPlain_HT_ResetIter(gs_addresses);
  while (1) {
    tmp___12 = vgPlain_HT_Next(gs_addresses);
    g = (GS_Address *)tmp___12;
    if (g) {

    } else {
      break;
    }
    e = 0;
    while (e < (int )vge->n_used) {
      tmp___10 = HT_addr((Addr )vge->base[e]);
      if (g->addr >= tmp___10) {
        tmp___11 = HT_addr((Addr )vge->base[e]);
        if (g->addr < tmp___11 + (Addr )vge->len[e]) {
          while (1) {
            tmp___7 = vgPlain_debugLog_getLevel();
            if (tmp___7 >= 2) {
              tmp___8 = 1;
            } else {
              tmp___8 = 0;
            }
            tmp___9 = __builtin_expect((long )tmp___8, 0L);
            if (tmp___9) {
              if ((unsigned int )g->kind == 1U) {
                tmp___4 = "GS_jump";
              } else {
                tmp___4 = "GS_break";
              }
              tmp___5 = sym(g->addr, (Bool )1);
              tmp___6 = C2v(g->addr);
              vgPlain_debugLog(2, "gdbsrv",
                               "gdbserver_instrumentation_needed %p %s reason %s\n",
                               tmp___6, tmp___5, tmp___4);
            } else {

            }
            break;
          }
          return ((VgVgdb )1);
        } else {

        }
      } else {

      }
      e ++;
    }
  }
  if ((unsigned int )vgPlain_clo_vgdb == 2U) {
    while (1) {
      tmp___13 = vgPlain_debugLog_getLevel();
      if (tmp___13 >= 4) {
        tmp___14 = 1;
      } else {
        tmp___14 = 0;
      }
      tmp___15 = __builtin_expect((long )tmp___14, 0L);
      if (tmp___15) {
        vgPlain_debugLog(4, "gdbsrv",
                         "gdbserver_instrumentation_needed due to VG_(clo_vgdb) == Vg_VgdbFull\n");
      } else {

      }
      break;
    }
    return ((VgVgdb )2);
  } else {

  }
  return ((VgVgdb )0);
}
}
static void clear_gdbserved_addresses(Bool clear_only_jumps ) 
{ 
  GS_Address **ag ;
  UInt n_elems ;
  int i ;
  Int tmp ;
  Int tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  VgHashNode **tmp___3 ;

  {
  while (1) {
    tmp___0 = vgPlain_debugLog_getLevel();
    if (tmp___0 >= 1) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
    tmp___2 = __builtin_expect((long )tmp___1, 0L);
    if (tmp___2) {
      tmp = vgPlain_HT_count_nodes(gs_addresses);
      vgPlain_debugLog(1, "gdbsrv",
                       "clear_gdbserved_addresses: scanning hash table nodes %d\n",
                       tmp);
    } else {

    }
    break;
  }
  tmp___3 = vgPlain_HT_to_array(gs_addresses, & n_elems);
  ag = (GS_Address **)tmp___3;
  i = 0;
  while ((UInt )i < n_elems) {
    if (! clear_only_jumps) {
      remove_gs_address(*(ag + i), (char *)"clear_gdbserved_addresses");
    } else
    if ((unsigned int )(*(ag + i))->kind == 1U) {
      remove_gs_address(*(ag + i), (char *)"clear_gdbserved_addresses");
    } else {

    }
    i ++;
  }
  vgPlain_free((void *)ag);
  return;
}
}
static void clear_watched_addresses(void) 
{ 
  GS_Watch **ag ;
  UInt n_elems ;
  int i ;
  Int tmp ;
  Int tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  VgHashNode **tmp___3 ;
  long tmp___4 ;
  Bool tmp___5 ;

  {
  while (1) {
    tmp___0 = vgPlain_debugLog_getLevel();
    if (tmp___0 >= 1) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
    tmp___2 = __builtin_expect((long )tmp___1, 0L);
    if (tmp___2) {
      tmp = vgPlain_HT_count_nodes(gs_watches);
      vgPlain_debugLog(1, "gdbsrv",
                       "clear_watched_addresses: scanning hash table nodes %d\n",
                       tmp);
    } else {

    }
    break;
  }
  tmp___3 = vgPlain_HT_to_array(gs_watches, & n_elems);
  ag = (GS_Watch **)tmp___3;
  i = 0;
  while ((UInt )i < n_elems) {
    tmp___5 = vgPlain_gdbserver_point((*(ag + i))->kind, (Bool )0,
                                      (*(ag + i))->addr, (int )(*(ag + i))->len);
    if (tmp___5) {

    } else {
      tmp___4 = __builtin_expect(0L, 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                            (Char const   *)"m_gdbserver/m_gdbserver.c", 498,
                            (Char const   *)"clear_watched_addresses", "");
      }
    }
    i ++;
  }
  vgPlain_free((void *)ag);
  return;
}
}
static void invalidate_if_jump_not_yet_gdbserved(Addr addr , char *from ) 
{ 
  Addr tmp ;
  void *tmp___0 ;

  {
  tmp = HT_addr(addr);
  tmp___0 = vgPlain_HT_lookup(gs_addresses, tmp);
  if (tmp___0) {
    return;
  } else {

  }
  add_gs_address(addr, (GS_Kind )1, from);
  return;
}
}
static void invalidate_current_ip(ThreadId tid , char *who ) 
{ 
  Addr tmp ;

  {
  tmp = vgPlain_get_IP(tid);
  invalidate_if_jump_not_yet_gdbserved(tmp, who);
  return;
}
}
void vgPlain_gdbserver_prerun_action(ThreadId tid ) 
{ 
  Bool tmp ;

  {
  if (vgPlain_dyn_vgdb_error == 0) {
    vgPlain_umsg("(action at startup) vgdb me ... \n");
    vgPlain_gdbserver(tid);
  } else {
    tmp = vgPlain_gdbserver_activity(tid);
    if (tmp) {
      vgPlain_gdbserver(tid);
    } else {

    }
  }
  return;
}
}
static void gdbserver_cleanup_in_child_after_fork(ThreadId me ) 
{ 
  Int tmp ;
  Int tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;

  {
  while (1) {
    tmp___0 = vgPlain_debugLog_getLevel();
    if (tmp___0 >= 1) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
    tmp___2 = __builtin_expect((long )tmp___1, 0L);
    if (tmp___2) {
      tmp = vgPlain_getpid();
      vgPlain_debugLog(1, "gdbsrv",
                       "thread %d gdbserver_cleanup_in_child_after_fork pid %d\n",
                       me, tmp);
    } else {

    }
    break;
  }
  remote_finish((FinishReason )2);
  if (gdbserver_called) {
    gdbserver_called = 0;
    tmp___3 = __builtin_expect((long )(! (! ((unsigned int )gs_addresses != (unsigned int )((void *)0)))),
                               1L);
    if (tmp___3) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"gs_addresses != NULL",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 549,
                          (Char const   *)"gdbserver_cleanup_in_child_after_fork",
                          "");
    }
    tmp___4 = __builtin_expect((long )(! (! ((unsigned int )gs_watches != (unsigned int )((void *)0)))),
                               1L);
    if (tmp___4) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"gs_watches != NULL",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 550,
                          (Char const   *)"gdbserver_cleanup_in_child_after_fork",
                          "");
    }
    clear_gdbserved_addresses((Bool )0);
    vgPlain_HT_destruct(gs_addresses);
    gs_addresses = (VgHashTable )((void *)0);
    clear_watched_addresses();
    vgPlain_HT_destruct(gs_watches);
    gs_watches = (VgHashTable )((void *)0);
  } else {
    tmp___5 = __builtin_expect((long )(! (! ((unsigned int )gs_addresses == (unsigned int )((void *)0)))),
                               1L);
    if (tmp___5) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"gs_addresses == NULL",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 558,
                          (Char const   *)"gdbserver_cleanup_in_child_after_fork",
                          "");
    }
    tmp___6 = __builtin_expect((long )(! (! ((unsigned int )gs_watches == (unsigned int )((void *)0)))),
                               1L);
    if (tmp___6) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"gs_watches == NULL",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 559,
                          (Char const   *)"gdbserver_cleanup_in_child_after_fork",
                          "");
    }
  }
  if (vgPlain_clo_trace_children) {
    vgPlain_gdbserver_prerun_action(me);
  } else {

  }
  return;
}
}
static void call_gdbserver(ThreadId tid , CallReason reason ) 
{ 
  ThreadState *tst ;
  ThreadState *tmp ;
  int stepping ;
  Addr saved_pc ;
  HChar const   *tmp___0 ;
  Int tmp___1 ;
  char *tmp___2 ;
  Int tmp___3 ;
  int tmp___4 ;
  long tmp___5 ;
  Bool tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  Int tmp___9 ;
  int tmp___10 ;
  long tmp___11 ;
  long tmp___12 ;
  long tmp___13 ;
  long tmp___14 ;
  long tmp___15 ;
  Bool tmp___16 ;
  char *tmp___17 ;
  Int tmp___18 ;
  int tmp___19 ;
  long tmp___20 ;
  Bool tmp___21 ;
  Addr tmp___22 ;
  char *tmp___23 ;
  char *tmp___24 ;
  HChar const   *tmp___25 ;
  Int tmp___26 ;
  int tmp___27 ;
  long tmp___28 ;
  SysRes sres ;
  Addr tmp___29 ;

  {
  tmp = vgPlain_get_ThreadState(tid);
  tst = tmp;
  while (1) {
    tmp___3 = vgPlain_debugLog_getLevel();
    if (tmp___3 >= 1) {
      tmp___4 = 1;
    } else {
      tmp___4 = 0;
    }
    tmp___5 = __builtin_expect((long )tmp___4, 0L);
    if (tmp___5) {
      tmp___0 = vgPlain_name_of_ThreadStatus(tst->status);
      tmp___1 = vgPlain_getpid();
      tmp___2 = ppCallReason(reason);
      vgPlain_debugLog(1, "gdbsrv",
                       "entering call_gdbserver %s ... pid %d tid %d status %s sched_jmpbuf_valid %d\n",
                       tmp___2, tmp___1, tid, tmp___0,
                       (int )tst->sched_jmpbuf_valid);
    } else {

    }
    break;
  }
  tmp___6 = vgPlain_is_valid_tid(tid);
  if (tmp___6) {
    tmp___7 = 1;
  } else {
    tmp___7 = 0;
  }
  tmp___8 = __builtin_expect((long )tmp___7, 1L);
  if (tmp___8) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"VG_(is_valid_tid)(tid)",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 588,
                        (Char const   *)"call_gdbserver", "");
  }
  saved_pc = vgPlain_get_IP(tid);
  if (gdbserver_exited) {
    while (1) {
      tmp___9 = vgPlain_debugLog_getLevel();
      if (tmp___9 >= 0) {
        tmp___10 = 1;
      } else {
        tmp___10 = 0;
      }
      tmp___11 = __builtin_expect((long )tmp___10, 0L);
      if (tmp___11) {
        vgPlain_debugLog(0, "gdbsrv",
                         "call_gdbserver called when gdbserver_exited %d\n",
                         gdbserver_exited);
      } else {

      }
      break;
    }
    return;
  } else {

  }
  if (gdbserver_called == 0) {
    tmp___12 = __builtin_expect((long )(! (! ((unsigned int )gs_addresses == (unsigned int )((void *)0)))),
                                1L);
    if (tmp___12) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"gs_addresses == NULL",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 598,
                          (Char const   *)"call_gdbserver", "");
    }
    tmp___13 = __builtin_expect((long )(! (! ((unsigned int )gs_watches == (unsigned int )((void *)0)))),
                                1L);
    if (tmp___13) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"gs_watches == NULL",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 599,
                          (Char const   *)"call_gdbserver", "");
    }
    gs_addresses = vgPlain_HT_construct((HChar *)"gdbserved_addresses");
    gs_watches = vgPlain_HT_construct((HChar *)"gdbserved_watches");
    vgPlain_atfork((void (*)(ThreadId  ))((void *)0),
                   (void (*)(ThreadId  ))((void *)0),
                   & gdbserver_cleanup_in_child_after_fork);
  } else {

  }
  tmp___14 = __builtin_expect((long )(! (! ((unsigned int )gs_addresses != (unsigned int )((void *)0)))),
                              1L);
  if (tmp___14) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"gs_addresses != NULL",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 604,
                        (Char const   *)"call_gdbserver", "");
  }
  tmp___15 = __builtin_expect((long )(! (! ((unsigned int )gs_watches != (unsigned int )((void *)0)))),
                              1L);
  if (tmp___15) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"gs_watches != NULL",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 605,
                        (Char const   *)"call_gdbserver", "");
  }
  gdbserver_called ++;
  if (gdbserver_called == 1) {
    gdbserver_init();
  } else {

  }
  if ((unsigned int )reason == 0U) {
    remote_open((char *)vgPlain_clo_vgdb_prefix);
  } else
  if (gdbserver_called == 1) {
    remote_open((char *)vgPlain_clo_vgdb_prefix);
  } else {

  }
  if ((unsigned int )reason == 0U) {
    return;
  } else {

  }
  tmp___16 = valgrind_single_stepping();
  stepping = (int )tmp___16;
  server_main();
  ignore_this_break_once = valgrind_get_ignore_break_once();
  if (ignore_this_break_once) {
    while (1) {
      tmp___18 = vgPlain_debugLog_getLevel();
      if (tmp___18 >= 1) {
        tmp___19 = 1;
      } else {
        tmp___19 = 0;
      }
      tmp___20 = __builtin_expect((long )tmp___19, 0L);
      if (tmp___20) {
        tmp___17 = sym(ignore_this_break_once, (Bool )1);
        vgPlain_debugLog(1, "gdbsrv", "!!! will ignore_this_break_once %s\n",
                         tmp___17);
      } else {

      }
      break;
    }
  } else {

  }
  tmp___21 = valgrind_single_stepping();
  if (tmp___21) {
    if (! stepping) {
      if (tid != 0U) {
        invalidate_current_ip(tid, (char *)"m_gdbserver single step");
      } else {

      }
    } else {

    }
  } else
  if (stepping) {
    clear_gdbserved_addresses((Bool )1);
  } else {

  }
  if (gdbserver_called > 1) {
    vgPlain_sanity_check_general((Bool )0);
  } else {

  }
  tmp___29 = vgPlain_get_IP(tid);
  if (tmp___29 != saved_pc) {
    while (1) {
      tmp___26 = vgPlain_debugLog_getLevel();
      if (tmp___26 >= 1) {
        tmp___27 = 1;
      } else {
        tmp___27 = 0;
      }
      tmp___28 = __builtin_expect((long )tmp___27, 0L);
      if (tmp___28) {
        tmp___22 = vgPlain_get_IP(tid);
        tmp___23 = sym(tmp___22, (Bool )1);
        tmp___24 = sym(saved_pc, (Bool )1);
        tmp___25 = vgPlain_name_of_ThreadStatus(tst->status);
        vgPlain_debugLog(1, "gdbsrv", "tid %d %s PC changed from %s to %s\n",
                         tid, tmp___25, tmp___24, tmp___23);
      } else {

      }
      break;
    }
    if ((unsigned int )tst->status == 4U) {
      vgPlain_memset((void *)(& sres), 0, (SizeT )sizeof(SysRes ));
      vgPlain_acquire_BigLock(tid, (HChar *)"gdbsrv VG_MINIMAL_LONGJMP");
    } else {

    }
    if (tst->sched_jmpbuf_valid) {
      __builtin_longjmp(tst->sched_jmpbuf, 1);
    } else {

    }
  } else {

  }
  return;
}
}
static int volatile   busy  =    (int volatile   )0;
void vgPlain_gdbserver(ThreadId tid ) 
{ 
  Int tmp ;
  int tmp___0 ;
  long tmp___1 ;
  Int tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  busy += (int volatile   )1;
  if (tid != 0U) {
    call_gdbserver(tid, (CallReason )2);
  } else
  if (gdbserver_called == 0) {
    while (1) {
      tmp = vgPlain_debugLog_getLevel();
      if (tmp >= 1) {
        tmp___0 = 1;
      } else {
        tmp___0 = 0;
      }
      tmp___1 = __builtin_expect((long )tmp___0, 0L);
      if (tmp___1) {
        vgPlain_debugLog(1, "gdbsrv",
                         "VG_(gdbserver) called to terminate, nothing to terminate\n");
      } else {

      }
      break;
    }
  } else
  if (gdbserver_exited) {
    while (1) {
      tmp___2 = vgPlain_debugLog_getLevel();
      if (tmp___2 >= 0) {
        tmp___3 = 1;
      } else {
        tmp___3 = 0;
      }
      tmp___4 = __builtin_expect((long )tmp___3, 0L);
      if (tmp___4) {
        vgPlain_debugLog(0, "gdbsrv",
                         "VG_(gdbserver) called to terminate again %d\n",
                         gdbserver_exited);
      } else {

      }
      break;
    }
  } else {
    gdbserver_terminate();
    gdbserver_exited ++;
  }
  busy -= (int volatile   )1;
  return;
}
}
static int interrupts_while_busy  =    0;
static int interrupts_non_busy  =    0;
static int interrupts_non_interruptible  =    0;
static void give_control_back_to_vgdb(void) 
{ 
  long tmp ;
  Int tmp___0 ;
  Int tmp___1 ;
  long tmp___2 ;

  {
  tmp___0 = vgPlain_getpid();
  tmp___1 = vgPlain_kill(tmp___0, 5);
  if (tmp___1 != 0) {
    tmp = __builtin_expect(0L, 1L);
    if (tmp) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 739,
                          (Char const   *)"give_control_back_to_vgdb",
                          "SIGTRAP for vgdb could not be generated\n");
    }
  } else {

  }
  tmp___2 = __builtin_expect(0L, 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 748,
                        (Char const   *)"give_control_back_to_vgdb",
                        "vgdb did not took control. Did you kill vgdb ?\nbusy %d vgdb_interrupted_tid %d\n",
                        busy, vgdb_interrupted_tid);
  }
  return;
}
}
void vgPlain_invoke_gdbserver(int check ) 
{ 
  int n_tid ;
  long tmp ;
  long tmp___0 ;
  Int tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  Int tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;
  long tmp___7 ;

  {
  tmp = __builtin_expect((long )(! (! ((unsigned int )check == 2343432205U))),
                         1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"check == 0x8BADF00D",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 771,
                        (Char const   *)"vgPlain_invoke_gdbserver", "");
  }
  if (busy) {
    interrupts_while_busy ++;
    give_control_back_to_vgdb();
  } else {

  }
  interrupts_non_busy ++;
  n_tid = 1;
  while (n_tid < 500) {
    switch ((unsigned int )vgPlain_threads[n_tid].status) {
    case 4U: 
    case 3U: 
    if (vgdb_interrupted_tid == 0U) {
      vgdb_interrupted_tid = (ThreadId )n_tid;
    } else {

    }
    break;
    case 5U: 
    case 0U: 
    break;
    case 2U: 
    case 1U: 
    interrupts_non_interruptible ++;
    vgPlain_force_vgdb_poll();
    give_control_back_to_vgdb();
    default: 
    tmp___0 = __builtin_expect(0L, 1L);
    if (tmp___0) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 801,
                          (Char const   *)"vgPlain_invoke_gdbserver", "");
    }
    }
    n_tid ++;
  }
  while (1) {
    tmp___1 = vgPlain_debugLog_getLevel();
    if (tmp___1 >= 1) {
      tmp___2 = 1;
    } else {
      tmp___2 = 0;
    }
    tmp___3 = __builtin_expect((long )tmp___2, 0L);
    if (tmp___3) {
      vgPlain_debugLog(1, "gdbsrv",
                       "invoke_gdbserver running_tid %d vgdb_interrupted_tid %d\n",
                       vgPlain_running_tid, vgdb_interrupted_tid);
    } else {

    }
    break;
  }
  call_gdbserver(vgdb_interrupted_tid, (CallReason )1);
  vgdb_interrupted_tid = (ThreadId )0;
  while (1) {
    tmp___4 = vgPlain_debugLog_getLevel();
    if (tmp___4 >= 1) {
      tmp___5 = 1;
    } else {
      tmp___5 = 0;
    }
    tmp___6 = __builtin_expect((long )tmp___5, 0L);
    if (tmp___6) {
      vgPlain_debugLog(1, "gdbsrv", "exit invoke_gdbserver running_tid %d\n",
                       vgPlain_running_tid);
    } else {

    }
    break;
  }
  give_control_back_to_vgdb();
  tmp___7 = __builtin_expect(0L, 1L);
  if (tmp___7) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 817,
                        (Char const   *)"vgPlain_invoke_gdbserver",
                        "end of invoke_gdbserver reached");
  }
  return;
}
}
Bool vgPlain_gdbserver_activity(ThreadId tid ) 
{ 
  Bool ret ;
  int tmp ;
  long tmp___0 ;

  {
  busy += (int volatile   )1;
  if (! gdbserver_called) {
    call_gdbserver(tid, (CallReason )0);
  } else {

  }
  tmp = remote_desc_activity((char *)"VG_(gdbserver_activity)");
  switch (tmp) {
  case 0: 
  ret = (Bool )0;
  break;
  case 1: 
  ret = (Bool )1;
  break;
  case 2: 
  call_gdbserver(tid, (CallReason )0);
  ret = (Bool )0;
  break;
  default: 
  tmp___0 = __builtin_expect(0L, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 831,
                        (Char const   *)"vgPlain_gdbserver_activity", "");
  }
  }
  busy -= (int volatile   )1;
  return (ret);
}
}
Bool vgPlain_gdbserver_report_signal(Int sigNo , ThreadId tid ) 
{ 
  Int tmp ;
  int tmp___0 ;
  long tmp___1 ;
  Int tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  Bool tmp___5 ;
  Int tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  Int tmp___9 ;
  int tmp___10 ;
  long tmp___11 ;
  Int tmp___12 ;
  int tmp___13 ;
  long tmp___14 ;
  Bool tmp___15 ;

  {
  while (1) {
    tmp = vgPlain_debugLog_getLevel();
    if (tmp >= 1) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
    tmp___1 = __builtin_expect((long )tmp___0, 0L);
    if (tmp___1) {
      vgPlain_debugLog(1, "gdbsrv", "signal %d tid %d\n", sigNo, tid);
    } else {

    }
    break;
  }
  tmp___5 = remote_connected();
  if (tmp___5) {

  } else {
    while (1) {
      tmp___2 = vgPlain_debugLog_getLevel();
      if (tmp___2 >= 1) {
        tmp___3 = 1;
      } else {
        tmp___3 = 0;
      }
      tmp___4 = __builtin_expect((long )tmp___3, 0L);
      if (tmp___4) {
        vgPlain_debugLog(1, "gdbsrv", "not connected => pass\n");
      } else {

      }
      break;
    }
    return ((Bool )1);
  }
  if (pass_signals[sigNo]) {
    while (1) {
      tmp___6 = vgPlain_debugLog_getLevel();
      if (tmp___6 >= 1) {
        tmp___7 = 1;
      } else {
        tmp___7 = 0;
      }
      tmp___8 = __builtin_expect((long )tmp___7, 0L);
      if (tmp___8) {
        vgPlain_debugLog(1, "gdbsrv", "pass_signals => pass\n");
      } else {

      }
      break;
    }
    return ((Bool )0);
  } else {

  }
  gdbserver_signal_encountered(sigNo);
  call_gdbserver(tid, (CallReason )5);
  tmp___15 = gdbserver_deliver_signal(sigNo);
  if (tmp___15) {
    while (1) {
      tmp___9 = vgPlain_debugLog_getLevel();
      if (tmp___9 >= 1) {
        tmp___10 = 1;
      } else {
        tmp___10 = 0;
      }
      tmp___11 = __builtin_expect((long )tmp___10, 0L);
      if (tmp___11) {
        vgPlain_debugLog(1, "gdbsrv", "gdbserver deliver signal\n");
      } else {

      }
      break;
    }
    return ((Bool )1);
  } else {
    while (1) {
      tmp___12 = vgPlain_debugLog_getLevel();
      if (tmp___12 >= 1) {
        tmp___13 = 1;
      } else {
        tmp___13 = 0;
      }
      tmp___14 = __builtin_expect((long )tmp___13, 0L);
      if (tmp___14) {
        vgPlain_debugLog(1, "gdbsrv", "gdbserver ignore signal\n");
      } else {

      }
      break;
    }
    return ((Bool )0);
  }
}
}
void ( __attribute__((__regparm__(1))) vgPlain_helperc_CallDebugger)(HWord iaddr ) 
{ 
  GS_Address *g ;
  char *tmp ;
  Int tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  ThreadId tmp___3 ;
  Addr tmp___4 ;
  Bool tmp___5 ;
  Addr tmp___6 ;
  void *tmp___7 ;

  {
  if (! gdbserver_called) {
    return;
  } else {

  }
  tmp___5 = valgrind_single_stepping();
  if (tmp___5) {
    goto _L;
  } else {
    tmp___6 = HT_addr(iaddr);
    tmp___7 = vgPlain_HT_lookup(gs_addresses, tmp___6);
    g = (GS_Address *)tmp___7;
    if (g) {
      if ((unsigned int )g->kind == 0U) {
        _L: /* CIL Label */ 
        tmp___4 = HT_addr(ignore_this_break_once);
        if (iaddr == tmp___4) {
          while (1) {
            tmp___0 = vgPlain_debugLog_getLevel();
            if (tmp___0 >= 1) {
              tmp___1 = 1;
            } else {
              tmp___1 = 0;
            }
            tmp___2 = __builtin_expect((long )tmp___1, 0L);
            if (tmp___2) {
              tmp = sym(ignore_this_break_once, (Bool )1);
              vgPlain_debugLog(1, "gdbsrv",
                               "ignoring ignore_this_break_once %s\n", tmp);
            } else {

            }
            break;
          }
          ignore_this_break_once = (Addr )0;
        } else {
          tmp___3 = vgPlain_get_running_tid();
          call_gdbserver(tmp___3, (CallReason )3);
        }
      } else {

      }
    } else {

    }
  }
  return;
}
}
static void vgPlain_invalidate_if_not_gdbserved(Addr addr ) 
{ 
  Bool tmp ;

  {
  tmp = valgrind_single_stepping();
  if (tmp) {
    invalidate_if_jump_not_yet_gdbserved(addr,
                                         (char *)"gdbserver target jump (instrument)");
  } else {

  }
  return;
}
}
void ( __attribute__((__regparm__(1))) vgPlain_helperc_invalidate_if_not_gdbserved)(Addr addr ) 
{ 
  Bool tmp ;

  {
  tmp = valgrind_single_stepping();
  if (tmp) {
    invalidate_if_jump_not_yet_gdbserved(addr,
                                         (char *)"gdbserver target jump (runtime)");
  } else {

  }
  return;
}
}
static void vgPlain_add_stmt_call_invalidate_if_not_gdbserved(IRSB *sb_in ,
                                                              VexGuestLayout *layout ,
                                                              VexGuestExtents *vge ,
                                                              IRTemp jmp ,
                                                              IRSB *irsb ) 
{ 
  void *fn ;
  HChar *nm ;
  IRExpr **args ;
  Int nargs ;
  IRDirty *di ;
  IRExpr *tmp ;
  void *tmp___0 ;
  IRStmt *tmp___1 ;

  {
  fn = (void *)(& vgPlain_helperc_invalidate_if_not_gdbserved);
  nm = (HChar *)"VG_(helperc_invalidate_if_not_gdbserved)";
  tmp = IRExpr_RdTmp(jmp);
  args = mkIRExprVec_1(tmp);
  nargs = 1;
  tmp___0 = vgPlain_fnptr_to_fnentry(fn);
  di = unsafeIRDirty_0_N(nargs, nm, tmp___0, args);
  di->nFxState = 0;
  tmp___1 = IRStmt_Dirty(di);
  addStmtToIRSB(irsb, tmp___1);
  return;
}
}
static void vgPlain_add_stmt_call_gdbserver(IRSB *sb_in ,
                                            VexGuestLayout *layout ,
                                            VexGuestExtents *vge ,
                                            IRType gWordTy , IRType hWordTy ,
                                            Addr iaddr , UChar delta ,
                                            IRSB *irsb ) 
{ 
  void *fn ;
  HChar *nm ;
  IRExpr **args ;
  Int nargs ;
  IRDirty *di ;
  long tmp ;
  IRExpr *tmp___0 ;
  IRStmt *tmp___1 ;
  IRExpr *tmp___2 ;
  void *tmp___3 ;
  IRStmt *tmp___4 ;

  {
  tmp = __builtin_expect((long )(! (! ((int )delta <= 1))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"delta <= 1",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 1000,
                        (Char const   *)"vgPlain_add_stmt_call_gdbserver", "");
  }
  tmp___0 = mkIRExpr_HWord(iaddr + (Addr )delta);
  tmp___1 = IRStmt_Put(layout->offset_IP, tmp___0);
  addStmtToIRSB(irsb, tmp___1);
  fn = (void *)(& vgPlain_helperc_CallDebugger);
  nm = (HChar *)"VG_(helperc_CallDebugger)";
  tmp___2 = mkIRExpr_HWord(iaddr);
  args = mkIRExprVec_1(tmp___2);
  nargs = 1;
  tmp___3 = vgPlain_fnptr_to_fnentry(fn);
  di = unsafeIRDirty_0_N(nargs, nm, tmp___3, args);
  di->nFxState = 2;
  di->fxState[0].fx = (IREffect )94209;
  di->fxState[0].offset = layout->offset_SP;
  di->fxState[0].size = layout->sizeof_SP;
  di->fxState[1].fx = (IREffect )94211;
  di->fxState[1].offset = layout->offset_IP;
  di->fxState[1].size = layout->sizeof_IP;
  tmp___4 = IRStmt_Dirty(di);
  addStmtToIRSB(irsb, tmp___4);
  return;
}
}
static void vgPlain_add_stmt_call_invalidate_exit_target_if_not_gdbserved(IRSB *sb_in ,
                                                                          VexGuestLayout *layout ,
                                                                          VexGuestExtents *vge ,
                                                                          IRType gWordTy ,
                                                                          IRSB *irsb ) 
{ 
  ULong tmp ;
  long tmp___0 ;

  {
  if ((unsigned int )(sb_in->next)->tag == 86025U) {
    if ((unsigned int )gWordTy == 69637U) {
      tmp = ((sb_in->next)->Iex.Const.con)->Ico.U64;
    } else {
      tmp = (ULong )((sb_in->next)->Iex.Const.con)->Ico.U32;
    }
    vgPlain_invalidate_if_not_gdbserved((Addr )tmp);
  } else
  if ((unsigned int )(sb_in->next)->tag == 86019U) {
    vgPlain_add_stmt_call_invalidate_if_not_gdbserved(sb_in, layout, vge,
                                                      (sb_in->next)->Iex.RdTmp.tmp,
                                                      irsb);
  } else {
    tmp___0 = __builtin_expect(0L, 1L);
    if (tmp___0) {

    } else {
      vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                          (Char const   *)"m_gdbserver/m_gdbserver.c", 1055,
                          (Char const   *)"vgPlain_add_stmt_call_invalidate_exit_target_if_not_gdbserved",
                          "");
    }
  }
  return;
}
}
IRSB *vgPlain_instrument_for_gdbserver_if_needed(IRSB *sb_in ,
                                                 VexGuestLayout *layout ,
                                                 VexGuestExtents *vge ,
                                                 IRType gWordTy ,
                                                 IRType hWordTy ) 
{ 
  IRSB *sb_out ;
  Int i ;
  VgVgdb instr_needed ;
  VgVgdb tmp ;
  IRStmt *st ;
  ULong tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  tmp = vgPlain_gdbserver_instrumentation_needed(vge);
  instr_needed = tmp;
  if ((unsigned int )instr_needed == 0U) {
    return (sb_in);
  } else {

  }
  sb_out = deepCopyIRSBExceptStmts(sb_in);
  i = 0;
  while (i < sb_in->stmts_used) {
    st = *(sb_in->stmts + i);
    if (! st) {
      goto __Cont;
    } else
    if ((unsigned int )st->tag == 102400U) {
      goto __Cont;
    } else {

    }
    if ((unsigned int )st->tag == 102411U) {
      if ((unsigned int )instr_needed == 1U) {
        if ((unsigned int )hWordTy == 69637U) {
          tmp___0 = (st->Ist.Exit.dst)->Ico.U64;
        } else {
          tmp___0 = (ULong )(st->Ist.Exit.dst)->Ico.U32;
        }
        vgPlain_invalidate_if_not_gdbserved((Addr )tmp___0);
      } else {

      }
    } else {

    }
    addStmtToIRSB(sb_out, st);
    if ((unsigned int )st->tag == 102401U) {
      switch ((unsigned int )instr_needed) {
      case 0U: 
      tmp___1 = __builtin_expect(0L, 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                            (Char const   *)"m_gdbserver/m_gdbserver.c", 1091,
                            (Char const   *)"vgPlain_instrument_for_gdbserver_if_needed",
                            "");
      }
      case 2U: 
      case 1U: 
      vgPlain_add_stmt_call_gdbserver(sb_in, layout, vge, gWordTy, hWordTy,
                                      (Addr )st->Ist.IMark.addr,
                                      st->Ist.IMark.delta, sb_out);
      break;
      default: 
      tmp___2 = __builtin_expect(0L, 1L);
      if (tmp___2) {

      } else {
        vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                            (Char const   *)"m_gdbserver/m_gdbserver.c", 1108,
                            (Char const   *)"vgPlain_instrument_for_gdbserver_if_needed",
                            "");
      }
      }
    } else {

    }
    __Cont: /* CIL Label */ 
    i ++;
  }
  if ((unsigned int )instr_needed == 1U) {
    vgPlain_add_stmt_call_invalidate_exit_target_if_not_gdbserved(sb_in, layout,
                                                                  vge, gWordTy,
                                                                  sb_out);
  } else {

  }
  return (sb_out);
}
}
static void mon_out(HChar c , void *opaque ) 
{ 
  struct mon_out_buf *b ;

  {
  b = (struct mon_out_buf *)opaque;
  (b->ret) ++;
  b->buf[b->next] = c;
  (b->next) ++;
  if (b->next == 8189) {
    b->buf[b->next] = (char )'\000';
    monitor_output(b->buf);
    b->next = 0;
  } else {

  }
  return;
}
}
UInt ( /* format attribute */  vgPlain_gdb_printf)(HChar const   *format  , ...) 
{ 
  struct mon_out_buf b ;
  va_list vargs ;

  {
  b.next = 0;
  b.ret = (UInt )0;
  __builtin_va_start(vargs, format);
  vgPlain_vcbprintf(& mon_out, (void *)(& b), format, vargs);
  __builtin_va_end(vargs);
  if (b.next > 0) {
    b.buf[b.next] = (char )'\000';
    monitor_output(b.buf);
  } else {

  }
  return (b.ret);
}
}
Int vgPlain_keyword_id(Char *keywords , Char *input_word ,
                       kwd_report_error report ) 
{ 
  Int il ;
  SizeT tmp ;
  SizeT tmp___0 ;
  Char *iw ;
  unsigned int __lengthofiw ;
  void *tmp___1 ;
  SizeT tmp___2 ;
  Char *kwds ;
  unsigned int __lengthofkwds ;
  void *tmp___3 ;
  Char *kwdssaveptr ;
  Char *kw ;
  Int kwl ;
  Int kpos ;
  Int pass ;
  Int pass1needed ;
  Int partial_match ;
  Int full_match ;
  char const   *tmp___4 ;
  SizeT tmp___5 ;
  Int tmp___6 ;
  Int tmp___7 ;
  long tmp___8 ;

  {
  if ((unsigned int )input_word == (unsigned int )((void *)0)) {
    tmp___0 = (SizeT )0;
  } else {
    tmp = vgPlain_strlen((Char const   *)input_word);
    tmp___0 = tmp;
  }
  il = (Int )tmp___0;
  __lengthofiw = (unsigned int )(il + 1);
  tmp___1 = __builtin_alloca(sizeof(*iw) * __lengthofiw);
  iw = (Char *)tmp___1;
  tmp___2 = vgPlain_strlen((Char const   *)keywords);
  __lengthofkwds = (unsigned int )(tmp___2 + 1UL);
  tmp___3 = __builtin_alloca(sizeof(*kwds) * __lengthofkwds);
  kwds = (Char *)tmp___3;
  kpos = -1;
  pass1needed = 0;
  partial_match = -1;
  full_match = -1;
  if ((unsigned int )input_word == (unsigned int )((void *)0)) {
    *(iw + 0) = (Char )0;
    partial_match = 0;
  } else {
    vgPlain_strcpy(iw, (Char const   *)input_word);
  }
  pass = 0;
  while (pass < 2) {
    vgPlain_strcpy(kwds, (Char const   *)keywords);
    if (pass == 1) {
      if (il == 0) {
        tmp___4 = "<empty string>";
      } else {
        tmp___4 = (char const   *)((char *)iw);
      }
      vgPlain_gdb_printf("%s can match", tmp___4);
    } else {

    }
    kw = vgPlain_strtok_r(kwds, (Char const   *)" ", & kwdssaveptr);
    while ((unsigned int )kw != (unsigned int )((void *)0)) {
      tmp___5 = vgPlain_strlen((Char const   *)kw);
      kwl = (Int )tmp___5;
      kpos ++;
      if (il > kwl) {

      } else
      if (il == kwl) {
        tmp___6 = vgPlain_strcmp((Char const   *)kw, (Char const   *)iw);
        if (tmp___6 == 0) {
          if (pass == 1) {
            vgPlain_gdb_printf(" %s", kw);
          } else {

          }
          if (full_match != -1) {
            pass1needed ++;
          } else {

          }
          full_match = kpos;
        } else {

        }
      } else {
        tmp___7 = vgPlain_strncmp((Char const   *)iw, (Char const   *)kw,
                                  (SizeT )il);
        if (tmp___7 == 0) {
          if (pass == 1) {
            vgPlain_gdb_printf(" %s", kw);
          } else {

          }
          if (partial_match != -1) {
            pass1needed ++;
          } else {

          }
          partial_match = kpos;
        } else {

        }
      }
      kw = vgPlain_strtok_r((Char *)((void *)0), (Char const   *)" ",
                            & kwdssaveptr);
    }
    if (pass1needed == 0) {
      if (full_match != -1) {
        return (full_match);
      } else {
        if ((unsigned int )report == 1U) {
          if (partial_match == -1) {
            vgPlain_gdb_printf("%s does not match any of \'%s\'\n", iw, keywords);
          } else {

          }
        } else {

        }
        return (partial_match);
      }
    } else {

    }
    if (pass == 1) {
      goto _L;
    } else
    if ((unsigned int )report == 0U) {
      _L: /* CIL Label */ 
      if ((unsigned int )report != 0U) {
        vgPlain_gdb_printf("\n");
      } else {

      }
      if (partial_match != -1) {
        return (-2);
      } else
      if (full_match != -1) {
        return (-2);
      } else {
        return (-1);
      }
    } else {

    }
    pass ++;
  }
  tmp___8 = __builtin_expect(0L, 1L);
  if (tmp___8) {

  } else {
    vgPlain_assert_fail((Bool )1, (Char const   *)"0",
                        (Char const   *)"m_gdbserver/m_gdbserver.c", 1245,
                        (Char const   *)"vgPlain_keyword_id", "");
  }
  return (0);
}
}
static Bool is_zero_x(Char *s ) 
{ 
  SizeT tmp ;

  {
  tmp = vgPlain_strlen((Char const   *)s);
  if (tmp >= 3UL) {
    if ((int )*(s + 0) == 48) {
      if ((int )*(s + 1) == 120) {
        return ((Bool )1);
      } else {
        return ((Bool )0);
      }
    } else {
      return ((Bool )0);
    }
  } else {
    return ((Bool )0);
  }
}
}
static Bool is_zero_b(Char *s ) 
{ 
  SizeT tmp ;

  {
  tmp = vgPlain_strlen((Char const   *)s);
  if (tmp >= 3UL) {
    if ((int )*(s + 0) == 48) {
      if ((int )*(s + 1) == 98) {
        return ((Bool )1);
      } else {
        return ((Bool )0);
      }
    } else {
      return ((Bool )0);
    }
  } else {
    return ((Bool )0);
  }
}
}
void vgPlain_strtok_get_address_and_size(Addr *address , SizeT *szB ,
                                         Char **ssaveptr ) 
{ 
  Char *wa ;
  Char *ws ;
  Char *endptr ;
  UChar *ppc ;
  Bool tmp ;
  ULong tmp___0 ;
  Int j ;
  Char *parsews ;
  Int n_bits ;
  SizeT tmp___1 ;
  ULong tmp___2 ;
  Bool tmp___3 ;
  Bool tmp___4 ;

  {
  wa = vgPlain_strtok_r((Char *)((void *)0), (Char const   *)" ", ssaveptr);
  ppc = (UChar *)wa;
  if ((unsigned int )ppc == (unsigned int )((void *)0)) {
    vgPlain_gdb_printf("missing or malformed address\n");
    *address = (Addr )0;
    *szB = (SizeT )0;
    return;
  } else {
    tmp = vgPlain_parse_Addr(& ppc, address);
    if (tmp) {

    } else {
      vgPlain_gdb_printf("missing or malformed address\n");
      *address = (Addr )0;
      *szB = (SizeT )0;
      return;
    }
  }
  ws = vgPlain_strtok_r((Char *)((void *)0), (Char const   *)" ", ssaveptr);
  if ((unsigned int )ws == (unsigned int )((void *)0)) {

  } else {
    tmp___4 = is_zero_x(ws);
    if (tmp___4) {
      tmp___0 = vgPlain_strtoull16(ws, & endptr);
      *szB = (SizeT )tmp___0;
    } else {
      tmp___3 = is_zero_b(ws);
      if (tmp___3) {
        parsews = ws;
        tmp___1 = vgPlain_strlen((Char const   *)ws);
        n_bits = (Int )(tmp___1 - 2UL);
        *szB = (SizeT )0;
        ws = (Char *)((void *)0);
        j = 0;
        while (j < n_bits) {
          if (48 == (int )*(parsews + (j + 2))) {

          } else
          if (49 == (int )*(parsews + (j + 2))) {
            *szB |= (unsigned long )(1 << ((n_bits - j) - 1));
          } else {
            ws = parsews;
            endptr = (ws + j) + 2;
            break;
          }
          j ++;
        }
      } else {
        tmp___2 = vgPlain_strtoull10(ws, & endptr);
        *szB = (SizeT )tmp___2;
      }
    }
  }
  if ((unsigned int )ws != (unsigned int )((void *)0)) {
    if ((int )*endptr != 0) {
      vgPlain_gdb_printf("malformed integer, expecting hex 0x..... or dec ...... or binary .....b\n");
      *address = (Addr )0;
      *szB = (SizeT )0;
      return;
    } else {

    }
  } else {

  }
  return;
}
}
void vgPlain_gdbserver_status_output(void) 
{ 
  int nr_gdbserved_addresses ;
  Int tmp ;
  int tmp___0 ;
  int nr_watchpoints ;
  Int tmp___1 ;
  int tmp___2 ;
  Bool tmp___3 ;

  {
  if ((unsigned int )gs_addresses == (unsigned int )((void *)0)) {
    tmp___0 = -1;
  } else {
    tmp = vgPlain_HT_count_nodes(gs_addresses);
    tmp___0 = tmp;
  }
  nr_gdbserved_addresses = tmp___0;
  if ((unsigned int )gs_watches == (unsigned int )((void *)0)) {
    tmp___2 = -1;
  } else {
    tmp___1 = vgPlain_HT_count_nodes(gs_watches);
    tmp___2 = tmp___1;
  }
  nr_watchpoints = tmp___2;
  remote_utils_output_status();
  tmp___3 = valgrind_single_stepping();
  vgPlain_umsg("nr of calls to gdbserver: %d\nsingle stepping %d\ninterrupts intr_tid %d gs_non_busy %d gs_busy %d tid_non_intr %d\ngdbserved addresses %d (-1 = not initialized)\nwatchpoints %d (-1 = not initialized)\nvgdb-error %d\n",
               gdbserver_called, (int )tmp___3, vgdb_interrupted_tid,
               interrupts_non_busy, interrupts_while_busy,
               interrupts_non_interruptible, nr_gdbserved_addresses,
               nr_watchpoints, vgPlain_dyn_vgdb_error);
  return;
}
}