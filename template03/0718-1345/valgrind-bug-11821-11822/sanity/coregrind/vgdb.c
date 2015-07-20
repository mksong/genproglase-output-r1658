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
enum __anonenum_PointKind_106 {
    software_breakpoint = 0,
    hardware_breakpoint = 1,
    write_watchpoint = 2,
    read_watchpoint = 3,
    access_watchpoint = 4
} ;
typedef enum __anonenum_PointKind_106 PointKind;
enum __anonenum_kwd_report_error_107 {
    kwd_report_none = 0,
    kwd_report_all = 1,
    kwd_report_duplicated_matches = 2
} ;
typedef enum __anonenum_kwd_report_error_107 kwd_report_error;
enum __anonenum_FinishReason_108 {
    orderly_finish = 0,
    reset_after_error = 1,
    reset_after_fork = 2
} ;
typedef enum __anonenum_FinishReason_108 FinishReason;
struct __anonstruct_VgdbShared32_109 {
   int vgdb_pid ;
   int volatile   written_by_vgdb ;
   int volatile   seen_by_valgrind ;
   Addr32 invoke_gdbserver ;
   Addr32 threads ;
   int sizeof_ThreadState ;
   int offset_status ;
   int offset_lwpid ;
};
typedef struct __anonstruct_VgdbShared32_109 VgdbShared32;
struct __anonstruct_VgdbShared64_110 {
   int vgdb_pid ;
   int volatile   written_by_vgdb ;
   int volatile   seen_by_valgrind ;
   Addr64 invoke_gdbserver ;
   Addr64 threads ;
   int sizeof_ThreadState ;
   int offset_status ;
   int offset_lwpid ;
};
typedef struct __anonstruct_VgdbShared64_110 VgdbShared64;
typedef VgdbShared32 VgdbShared;
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef long long __quad_t;
typedef unsigned long long __u_quad_t;
typedef __u_quad_t __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef __u_quad_t __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long __off_t;
typedef __quad_t __off64_t;
typedef int __pid_t;
struct __anonstruct___fsid_t_111 {
   int __val[2] ;
};
typedef struct __anonstruct___fsid_t_111 __fsid_t;
typedef long __clock_t;
typedef unsigned long __rlim_t;
typedef __u_quad_t __rlim64_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
typedef int __daddr_t;
typedef long __swblk_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void *__timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef __quad_t __blkcnt64_t;
typedef unsigned long __fsblkcnt_t;
typedef __u_quad_t __fsblkcnt64_t;
typedef unsigned long __fsfilcnt_t;
typedef __u_quad_t __fsfilcnt64_t;
typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef int __intptr_t;
typedef unsigned int __socklen_t;
typedef __ssize_t ssize_t;
typedef unsigned int size_t;
typedef __gid_t gid_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __useconds_t useconds_t;
typedef __pid_t pid_t;
typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
enum __anonenum_112 {
    _PC_LINK_MAX = 0,
    _PC_MAX_CANON = 1,
    _PC_MAX_INPUT = 2,
    _PC_NAME_MAX = 3,
    _PC_PATH_MAX = 4,
    _PC_PIPE_BUF = 5,
    _PC_CHOWN_RESTRICTED = 6,
    _PC_NO_TRUNC = 7,
    _PC_VDISABLE = 8,
    _PC_SYNC_IO = 9,
    _PC_ASYNC_IO = 10,
    _PC_PRIO_IO = 11,
    _PC_SOCK_MAXBUF = 12,
    _PC_FILESIZEBITS = 13,
    _PC_REC_INCR_XFER_SIZE = 14,
    _PC_REC_MAX_XFER_SIZE = 15,
    _PC_REC_MIN_XFER_SIZE = 16,
    _PC_REC_XFER_ALIGN = 17,
    _PC_ALLOC_SIZE_MIN = 18,
    _PC_SYMLINK_MAX = 19,
    _PC_2_SYMLINKS = 20
} ;
enum __anonenum_113 {
    _SC_ARG_MAX = 0,
    _SC_CHILD_MAX = 1,
    _SC_CLK_TCK = 2,
    _SC_NGROUPS_MAX = 3,
    _SC_OPEN_MAX = 4,
    _SC_STREAM_MAX = 5,
    _SC_TZNAME_MAX = 6,
    _SC_JOB_CONTROL = 7,
    _SC_SAVED_IDS = 8,
    _SC_REALTIME_SIGNALS = 9,
    _SC_PRIORITY_SCHEDULING = 10,
    _SC_TIMERS = 11,
    _SC_ASYNCHRONOUS_IO = 12,
    _SC_PRIORITIZED_IO = 13,
    _SC_SYNCHRONIZED_IO = 14,
    _SC_FSYNC = 15,
    _SC_MAPPED_FILES = 16,
    _SC_MEMLOCK = 17,
    _SC_MEMLOCK_RANGE = 18,
    _SC_MEMORY_PROTECTION = 19,
    _SC_MESSAGE_PASSING = 20,
    _SC_SEMAPHORES = 21,
    _SC_SHARED_MEMORY_OBJECTS = 22,
    _SC_AIO_LISTIO_MAX = 23,
    _SC_AIO_MAX = 24,
    _SC_AIO_PRIO_DELTA_MAX = 25,
    _SC_DELAYTIMER_MAX = 26,
    _SC_MQ_OPEN_MAX = 27,
    _SC_MQ_PRIO_MAX = 28,
    _SC_VERSION = 29,
    _SC_PAGESIZE = 30,
    _SC_RTSIG_MAX = 31,
    _SC_SEM_NSEMS_MAX = 32,
    _SC_SEM_VALUE_MAX = 33,
    _SC_SIGQUEUE_MAX = 34,
    _SC_TIMER_MAX = 35,
    _SC_BC_BASE_MAX = 36,
    _SC_BC_DIM_MAX = 37,
    _SC_BC_SCALE_MAX = 38,
    _SC_BC_STRING_MAX = 39,
    _SC_COLL_WEIGHTS_MAX = 40,
    _SC_EQUIV_CLASS_MAX = 41,
    _SC_EXPR_NEST_MAX = 42,
    _SC_LINE_MAX = 43,
    _SC_RE_DUP_MAX = 44,
    _SC_CHARCLASS_NAME_MAX = 45,
    _SC_2_VERSION = 46,
    _SC_2_C_BIND = 47,
    _SC_2_C_DEV = 48,
    _SC_2_FORT_DEV = 49,
    _SC_2_FORT_RUN = 50,
    _SC_2_SW_DEV = 51,
    _SC_2_LOCALEDEF = 52,
    _SC_PII = 53,
    _SC_PII_XTI = 54,
    _SC_PII_SOCKET = 55,
    _SC_PII_INTERNET = 56,
    _SC_PII_OSI = 57,
    _SC_POLL = 58,
    _SC_SELECT = 59,
    _SC_UIO_MAXIOV = 60,
    _SC_IOV_MAX = 60,
    _SC_PII_INTERNET_STREAM = 61,
    _SC_PII_INTERNET_DGRAM = 62,
    _SC_PII_OSI_COTS = 63,
    _SC_PII_OSI_CLTS = 64,
    _SC_PII_OSI_M = 65,
    _SC_T_IOV_MAX = 66,
    _SC_THREADS = 67,
    _SC_THREAD_SAFE_FUNCTIONS = 68,
    _SC_GETGR_R_SIZE_MAX = 69,
    _SC_GETPW_R_SIZE_MAX = 70,
    _SC_LOGIN_NAME_MAX = 71,
    _SC_TTY_NAME_MAX = 72,
    _SC_THREAD_DESTRUCTOR_ITERATIONS = 73,
    _SC_THREAD_KEYS_MAX = 74,
    _SC_THREAD_STACK_MIN = 75,
    _SC_THREAD_THREADS_MAX = 76,
    _SC_THREAD_ATTR_STACKADDR = 77,
    _SC_THREAD_ATTR_STACKSIZE = 78,
    _SC_THREAD_PRIORITY_SCHEDULING = 79,
    _SC_THREAD_PRIO_INHERIT = 80,
    _SC_THREAD_PRIO_PROTECT = 81,
    _SC_THREAD_PROCESS_SHARED = 82,
    _SC_NPROCESSORS_CONF = 83,
    _SC_NPROCESSORS_ONLN = 84,
    _SC_PHYS_PAGES = 85,
    _SC_AVPHYS_PAGES = 86,
    _SC_ATEXIT_MAX = 87,
    _SC_PASS_MAX = 88,
    _SC_XOPEN_VERSION = 89,
    _SC_XOPEN_XCU_VERSION = 90,
    _SC_XOPEN_UNIX = 91,
    _SC_XOPEN_CRYPT = 92,
    _SC_XOPEN_ENH_I18N = 93,
    _SC_XOPEN_SHM = 94,
    _SC_2_CHAR_TERM = 95,
    _SC_2_C_VERSION = 96,
    _SC_2_UPE = 97,
    _SC_XOPEN_XPG2 = 98,
    _SC_XOPEN_XPG3 = 99,
    _SC_XOPEN_XPG4 = 100,
    _SC_CHAR_BIT = 101,
    _SC_CHAR_MAX = 102,
    _SC_CHAR_MIN = 103,
    _SC_INT_MAX = 104,
    _SC_INT_MIN = 105,
    _SC_LONG_BIT = 106,
    _SC_WORD_BIT = 107,
    _SC_MB_LEN_MAX = 108,
    _SC_NZERO = 109,
    _SC_SSIZE_MAX = 110,
    _SC_SCHAR_MAX = 111,
    _SC_SCHAR_MIN = 112,
    _SC_SHRT_MAX = 113,
    _SC_SHRT_MIN = 114,
    _SC_UCHAR_MAX = 115,
    _SC_UINT_MAX = 116,
    _SC_ULONG_MAX = 117,
    _SC_USHRT_MAX = 118,
    _SC_NL_ARGMAX = 119,
    _SC_NL_LANGMAX = 120,
    _SC_NL_MSGMAX = 121,
    _SC_NL_NMAX = 122,
    _SC_NL_SETMAX = 123,
    _SC_NL_TEXTMAX = 124,
    _SC_XBS5_ILP32_OFF32 = 125,
    _SC_XBS5_ILP32_OFFBIG = 126,
    _SC_XBS5_LP64_OFF64 = 127,
    _SC_XBS5_LPBIG_OFFBIG = 128,
    _SC_XOPEN_LEGACY = 129,
    _SC_XOPEN_REALTIME = 130,
    _SC_XOPEN_REALTIME_THREADS = 131,
    _SC_ADVISORY_INFO = 132,
    _SC_BARRIERS = 133,
    _SC_BASE = 134,
    _SC_C_LANG_SUPPORT = 135,
    _SC_C_LANG_SUPPORT_R = 136,
    _SC_CLOCK_SELECTION = 137,
    _SC_CPUTIME = 138,
    _SC_THREAD_CPUTIME = 139,
    _SC_DEVICE_IO = 140,
    _SC_DEVICE_SPECIFIC = 141,
    _SC_DEVICE_SPECIFIC_R = 142,
    _SC_FD_MGMT = 143,
    _SC_FIFO = 144,
    _SC_PIPE = 145,
    _SC_FILE_ATTRIBUTES = 146,
    _SC_FILE_LOCKING = 147,
    _SC_FILE_SYSTEM = 148,
    _SC_MONOTONIC_CLOCK = 149,
    _SC_MULTI_PROCESS = 150,
    _SC_SINGLE_PROCESS = 151,
    _SC_NETWORKING = 152,
    _SC_READER_WRITER_LOCKS = 153,
    _SC_SPIN_LOCKS = 154,
    _SC_REGEXP = 155,
    _SC_REGEX_VERSION = 156,
    _SC_SHELL = 157,
    _SC_SIGNALS = 158,
    _SC_SPAWN = 159,
    _SC_SPORADIC_SERVER = 160,
    _SC_THREAD_SPORADIC_SERVER = 161,
    _SC_SYSTEM_DATABASE = 162,
    _SC_SYSTEM_DATABASE_R = 163,
    _SC_TIMEOUTS = 164,
    _SC_TYPED_MEMORY_OBJECTS = 165,
    _SC_USER_GROUPS = 166,
    _SC_USER_GROUPS_R = 167,
    _SC_2_PBS = 168,
    _SC_2_PBS_ACCOUNTING = 169,
    _SC_2_PBS_LOCATE = 170,
    _SC_2_PBS_MESSAGE = 171,
    _SC_2_PBS_TRACK = 172,
    _SC_SYMLOOP_MAX = 173,
    _SC_STREAMS = 174,
    _SC_2_PBS_CHECKPOINT = 175,
    _SC_V6_ILP32_OFF32 = 176,
    _SC_V6_ILP32_OFFBIG = 177,
    _SC_V6_LP64_OFF64 = 178,
    _SC_V6_LPBIG_OFFBIG = 179,
    _SC_HOST_NAME_MAX = 180,
    _SC_TRACE = 181,
    _SC_TRACE_EVENT_FILTER = 182,
    _SC_TRACE_INHERIT = 183,
    _SC_TRACE_LOG = 184,
    _SC_LEVEL1_ICACHE_SIZE = 185,
    _SC_LEVEL1_ICACHE_ASSOC = 186,
    _SC_LEVEL1_ICACHE_LINESIZE = 187,
    _SC_LEVEL1_DCACHE_SIZE = 188,
    _SC_LEVEL1_DCACHE_ASSOC = 189,
    _SC_LEVEL1_DCACHE_LINESIZE = 190,
    _SC_LEVEL2_CACHE_SIZE = 191,
    _SC_LEVEL2_CACHE_ASSOC = 192,
    _SC_LEVEL2_CACHE_LINESIZE = 193,
    _SC_LEVEL3_CACHE_SIZE = 194,
    _SC_LEVEL3_CACHE_ASSOC = 195,
    _SC_LEVEL3_CACHE_LINESIZE = 196,
    _SC_LEVEL4_CACHE_SIZE = 197,
    _SC_LEVEL4_CACHE_ASSOC = 198,
    _SC_LEVEL4_CACHE_LINESIZE = 199,
    _SC_IPV6 = 235,
    _SC_RAW_SOCKETS = 236,
    _SC_V7_ILP32_OFF32 = 237,
    _SC_V7_ILP32_OFFBIG = 238,
    _SC_V7_LP64_OFF64 = 239,
    _SC_V7_LPBIG_OFFBIG = 240,
    _SC_SS_REPL_MAX = 241,
    _SC_TRACE_EVENT_NAME_MAX = 242,
    _SC_TRACE_NAME_MAX = 243,
    _SC_TRACE_SYS_MAX = 244,
    _SC_TRACE_USER_EVENT_MAX = 245,
    _SC_XOPEN_STREAMS = 246,
    _SC_THREAD_ROBUST_PRIO_INHERIT = 247,
    _SC_THREAD_ROBUST_PRIO_PROTECT = 248
} ;
enum __anonenum_114 {
    _CS_PATH = 0,
    _CS_V6_WIDTH_RESTRICTED_ENVS = 1,
    _CS_GNU_LIBC_VERSION = 2,
    _CS_GNU_LIBPTHREAD_VERSION = 3,
    _CS_V5_WIDTH_RESTRICTED_ENVS = 4,
    _CS_V7_WIDTH_RESTRICTED_ENVS = 5,
    _CS_LFS_CFLAGS = 1000,
    _CS_LFS_LDFLAGS = 1001,
    _CS_LFS_LIBS = 1002,
    _CS_LFS_LINTFLAGS = 1003,
    _CS_LFS64_CFLAGS = 1004,
    _CS_LFS64_LDFLAGS = 1005,
    _CS_LFS64_LIBS = 1006,
    _CS_LFS64_LINTFLAGS = 1007,
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS = 1101,
    _CS_XBS5_ILP32_OFF32_LIBS = 1102,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS = 1103,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS = 1104,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS = 1105,
    _CS_XBS5_ILP32_OFFBIG_LIBS = 1106,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS = 1107,
    _CS_XBS5_LP64_OFF64_CFLAGS = 1108,
    _CS_XBS5_LP64_OFF64_LDFLAGS = 1109,
    _CS_XBS5_LP64_OFF64_LIBS = 1110,
    _CS_XBS5_LP64_OFF64_LINTFLAGS = 1111,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS = 1112,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS = 1113,
    _CS_XBS5_LPBIG_OFFBIG_LIBS = 1114,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS = 1115,
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS = 1116,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS = 1117,
    _CS_POSIX_V6_ILP32_OFF32_LIBS = 1118,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS = 1119,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS = 1120,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS = 1121,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS = 1122,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS = 1123,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS = 1124,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS = 1125,
    _CS_POSIX_V6_LP64_OFF64_LIBS = 1126,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS = 1127,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS = 1128,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS = 1129,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS = 1130,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS = 1131,
    _CS_POSIX_V7_ILP32_OFF32_CFLAGS = 1132,
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS = 1133,
    _CS_POSIX_V7_ILP32_OFF32_LIBS = 1134,
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS = 1135,
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS = 1136,
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS = 1137,
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS = 1138,
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS = 1139,
    _CS_POSIX_V7_LP64_OFF64_CFLAGS = 1140,
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS = 1141,
    _CS_POSIX_V7_LP64_OFF64_LIBS = 1142,
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS = 1143,
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS = 1144,
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS = 1145,
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS = 1146,
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS = 1147,
    _CS_V6_ENV = 1148,
    _CS_V7_ENV = 1149
} ;
struct __locale_data;
struct __locale_struct {
   struct __locale_data *__locales[13] ;
   unsigned short const   *__ctype_b ;
   int const   *__ctype_tolower ;
   int const   *__ctype_toupper ;
   char const   *__names[13] ;
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
typedef unsigned long nfds_t;
struct pollfd {
   int fd ;
   short events ;
   short revents ;
};
typedef __time_t time_t;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
struct sched_param {
   int __sched_priority ;
};
struct __sched_param {
   int __sched_priority ;
};
typedef unsigned long __cpu_mask;
struct __anonstruct_cpu_set_t_115 {
   __cpu_mask __bits[1024U / (8U * sizeof(__cpu_mask ))] ;
};
typedef struct __anonstruct_cpu_set_t_115 cpu_set_t;
typedef __clock_t clock_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char const   *tm_zone ;
};
struct itimerspec {
   struct timespec it_interval ;
   struct timespec it_value ;
};
struct sigevent;
struct sigevent;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_116 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_116 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_118 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_118 __annonCompField5 ;
};
union __anonunion_pthread_mutex_t_117 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_117 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_119 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_119 pthread_mutexattr_t;
struct __anonstruct___data_121 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_120 {
   struct __anonstruct___data_121 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_120 pthread_cond_t;
union __anonunion_pthread_condattr_t_122 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_122 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_124 {
   int __lock ;
   unsigned int __nr_readers ;
   unsigned int __readers_wakeup ;
   unsigned int __writer_wakeup ;
   unsigned int __nr_readers_queued ;
   unsigned int __nr_writers_queued ;
   unsigned char __flags ;
   unsigned char __shared ;
   unsigned char __pad1 ;
   unsigned char __pad2 ;
   int __writer ;
};
union __anonunion_pthread_rwlock_t_123 {
   struct __anonstruct___data_124 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_123 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_125 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_125 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_126 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_126 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_127 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_127 pthread_barrierattr_t;
enum __anonenum_128 {
    PTHREAD_CREATE_JOINABLE = 0,
    PTHREAD_CREATE_DETACHED = 1
} ;
enum __anonenum_129 {
    PTHREAD_MUTEX_TIMED_NP = 0,
    PTHREAD_MUTEX_RECURSIVE_NP = 1,
    PTHREAD_MUTEX_ERRORCHECK_NP = 2,
    PTHREAD_MUTEX_ADAPTIVE_NP = 3,
    PTHREAD_MUTEX_NORMAL = 0,
    PTHREAD_MUTEX_RECURSIVE = 1,
    PTHREAD_MUTEX_ERRORCHECK = 2,
    PTHREAD_MUTEX_DEFAULT = 0
} ;
enum __anonenum_130 {
    PTHREAD_MUTEX_STALLED = 0,
    PTHREAD_MUTEX_STALLED_NP = 0,
    PTHREAD_MUTEX_ROBUST = 1,
    PTHREAD_MUTEX_ROBUST_NP = 1
} ;
enum __anonenum_131 {
    PTHREAD_RWLOCK_PREFER_READER_NP = 0,
    PTHREAD_RWLOCK_PREFER_WRITER_NP = 1,
    PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP = 2,
    PTHREAD_RWLOCK_DEFAULT_NP = 0
} ;
enum __anonenum_132 {
    PTHREAD_INHERIT_SCHED = 0,
    PTHREAD_EXPLICIT_SCHED = 1
} ;
enum __anonenum_133 {
    PTHREAD_SCOPE_SYSTEM = 0,
    PTHREAD_SCOPE_PROCESS = 1
} ;
enum __anonenum_134 {
    PTHREAD_PROCESS_PRIVATE = 0,
    PTHREAD_PROCESS_SHARED = 1
} ;
struct _pthread_cleanup_buffer {
   void (*__routine)(void * ) ;
   void *__arg ;
   int __canceltype ;
   struct _pthread_cleanup_buffer *__prev ;
};
enum __anonenum_135 {
    PTHREAD_CANCEL_ENABLE = 0,
    PTHREAD_CANCEL_DISABLE = 1
} ;
enum __anonenum_136 {
    PTHREAD_CANCEL_DEFERRED = 0,
    PTHREAD_CANCEL_ASYNCHRONOUS = 1
} ;
struct __anonstruct___cancel_jmp_buf_138 {
   __jmp_buf __cancel_jmp_buf ;
   int __mask_was_saved ;
};
struct __anonstruct___pthread_unwind_buf_t_137 {
   struct __anonstruct___cancel_jmp_buf_138 __cancel_jmp_buf[1] ;
   void *__pad[4] ;
};
typedef struct __anonstruct___pthread_unwind_buf_t_137  __attribute__((__aligned__)) __pthread_unwind_buf_t;
struct __pthread_cleanup_frame {
   void (*__cancel_routine)(void * ) ;
   void *__cancel_arg ;
   int __do_it ;
   int __cancel_type ;
};
struct __jmp_buf_tag;
typedef long wchar_t;
struct __anonstruct___wait_terminated_139 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_140 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_139 __wait_terminated ;
   struct __anonstruct___wait_stopped_140 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_141 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_141  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_142 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_142 div_t;
struct __anonstruct_ldiv_t_143 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_143 ldiv_t;
struct __anonstruct_lldiv_t_144 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_144 lldiv_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;
typedef int register_t;
typedef __sigset_t sigset_t;
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef __suseconds_t suseconds_t;
typedef long __fd_mask;
struct __anonstruct_fd_set_145 {
   __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_145 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
struct random_data {
   int32_t *fptr ;
   int32_t *rptr ;
   int32_t *state ;
   int rand_type ;
   int rand_deg ;
   int rand_sep ;
   int32_t *end_ptr ;
};
struct drand48_data {
   unsigned short __x[3] ;
   unsigned short __old_x[3] ;
   unsigned short __c ;
   unsigned short __init ;
   unsigned long long __a ;
};
typedef int (*__compar_fn_t)(void const   * , void const   * );
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_147 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_146 {
   int __count ;
   union __anonunion___value_147 __value ;
};
typedef struct __anonstruct___mbstate_t_146 __mbstate_t;
struct __anonstruct__G_fpos_t_148 {
   __off_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos_t_148 _G_fpos_t;
struct __anonstruct__G_fpos64_t_149 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos64_t_149 _G_fpos64_t;
typedef short _G_int16_t;
typedef int _G_int32_t;
typedef unsigned short _G_uint16_t;
typedef unsigned int _G_uint32_t;
struct _IO_jump_t;
struct _IO_jump_t;
struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
enum __codecvt_result {
    __codecvt_ok = 0,
    __codecvt_partial = 1,
    __codecvt_error = 2,
    __codecvt_noconv = 3
} ;
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15U * sizeof(int ) - 4U * sizeof(void *)) - sizeof(size_t )] ;
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );
typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );
typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );
typedef int __io_close_fn(void *__cookie );
typedef _G_fpos_t fpos_t;
struct flock {
   short l_type ;
   short l_whence ;
   __off_t l_start ;
   __off_t l_len ;
   __pid_t l_pid ;
};
struct stat {
   __dev_t st_dev ;
   unsigned short __pad1 ;
   __ino_t st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   unsigned long __unused4 ;
   unsigned long __unused5 ;
};
struct dirent {
   __ino_t d_ino ;
   __off_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
enum __anonenum_150 {
    DT_UNKNOWN = 0,
    DT_FIFO = 1,
    DT_CHR = 2,
    DT_DIR = 4,
    DT_BLK = 6,
    DT_REG = 8,
    DT_LNK = 10,
    DT_SOCK = 12,
    DT_WHT = 14
} ;
struct __dirstream;
typedef struct __dirstream DIR;
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
typedef struct timezone * __restrict  __timezone_ptr_t;
enum __itimer_which {
    ITIMER_REAL = 0,
    ITIMER_VIRTUAL = 1,
    ITIMER_PROF = 2
} ;
struct itimerval {
   struct timeval it_interval ;
   struct timeval it_value ;
};
typedef int __itimer_which_t;
typedef __sig_atomic_t sig_atomic_t;
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
typedef union sigval sigval_t;
struct __anonstruct__kill_152 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
struct __anonstruct__timer_153 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
struct __anonstruct__rt_154 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
struct __anonstruct__sigchld_155 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
struct __anonstruct__sigfault_156 {
   void *si_addr ;
};
struct __anonstruct__sigpoll_157 {
   long si_band ;
   int si_fd ;
};
union __anonunion__sifields_151 {
   int _pad[128U / sizeof(int ) - 3U] ;
   struct __anonstruct__kill_152 _kill ;
   struct __anonstruct__timer_153 _timer ;
   struct __anonstruct__rt_154 _rt ;
   struct __anonstruct__sigchld_155 _sigchld ;
   struct __anonstruct__sigfault_156 _sigfault ;
   struct __anonstruct__sigpoll_157 _sigpoll ;
};
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_151 _sifields ;
};
typedef struct siginfo siginfo_t;
enum __anonenum_158 {
    SI_ASYNCNL = -60,
    SI_TKILL = -6,
    SI_SIGIO = -5,
    SI_ASYNCIO = -4,
    SI_MESGQ = -3,
    SI_TIMER = -2,
    SI_QUEUE = -1,
    SI_USER = 0,
    SI_KERNEL = 128
} ;
enum __anonenum_159 {
    ILL_ILLOPC = 1,
    ILL_ILLOPN = 2,
    ILL_ILLADR = 3,
    ILL_ILLTRP = 4,
    ILL_PRVOPC = 5,
    ILL_PRVREG = 6,
    ILL_COPROC = 7,
    ILL_BADSTK = 8
} ;
enum __anonenum_160 {
    FPE_INTDIV = 1,
    FPE_INTOVF = 2,
    FPE_FLTDIV = 3,
    FPE_FLTOVF = 4,
    FPE_FLTUND = 5,
    FPE_FLTRES = 6,
    FPE_FLTINV = 7,
    FPE_FLTSUB = 8
} ;
enum __anonenum_161 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
enum __anonenum_162 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
enum __anonenum_163 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
enum __anonenum_164 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
enum __anonenum_165 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
struct __anonstruct__sigev_thread_167 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_166 {
   int _pad[64U / sizeof(int ) - 3U] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_167 _sigev_thread ;
};
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_166 _sigev_un ;
};
typedef struct sigevent sigevent_t;
enum __anonenum_168 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
typedef void (*__sighandler_t)(int  );
typedef void (*sig_t)(int  );
union __anonunion___sigaction_handler_169 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
struct sigaction {
   union __anonunion___sigaction_handler_169 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
struct sigvec {
   void (*sv_handler)(int  ) ;
   int sv_mask ;
   int sv_flags ;
};
typedef signed char __s8;
typedef unsigned char __u8;
typedef short __s16;
typedef unsigned short __u16;
typedef int __s32;
typedef unsigned int __u32;
typedef long long __s64;
typedef unsigned long long __u64;
typedef unsigned short umode_t;
struct __anonstruct___kernel_fd_set_170 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___kernel_fd_set_170 __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int  );
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char *__kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;
typedef long long __kernel_loff_t;
struct __anonstruct___kernel_fsid_t_171 {
   int val[2] ;
};
typedef struct __anonstruct___kernel_fsid_t_171 __kernel_fsid_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;
struct _fpx_sw_bytes {
   __u32 magic1 ;
   __u32 extended_size ;
   __u64 xstate_bv ;
   __u32 xstate_size ;
   __u32 padding[7] ;
};
struct _fpreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
};
struct _fpxreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
   unsigned short padding[3] ;
};
struct _xmmreg {
   unsigned long element[4] ;
};
union __anonunion____missing_field_name_172 {
   unsigned long padding2[12] ;
   struct _fpx_sw_bytes sw_reserved ;
};
struct _fpstate {
   unsigned long cw ;
   unsigned long sw ;
   unsigned long tag ;
   unsigned long ipoff ;
   unsigned long cssel ;
   unsigned long dataoff ;
   unsigned long datasel ;
   struct _fpreg _st[8] ;
   unsigned short status ;
   unsigned short magic ;
   unsigned long _fxsr_env[6] ;
   unsigned long mxcsr ;
   unsigned long reserved ;
   struct _fpxreg _fxsr_st[8] ;
   struct _xmmreg _xmm[8] ;
   unsigned long padding1[44] ;
   union __anonunion____missing_field_name_172 __annonCompField6 ;
};
struct sigcontext {
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
   struct _fpstate *fpstate ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
struct _xsave_hdr {
   __u64 xstate_bv ;
   __u64 reserved1[2] ;
   __u64 reserved2[5] ;
};
struct _ymmh_state {
   __u32 ymmh_space[64] ;
};
struct _xstate {
   struct _fpstate fpstate ;
   struct _xsave_hdr xstate_hdr ;
   struct _ymmh_state ymmh ;
};
struct sigstack {
   void *ss_sp ;
   int ss_onstack ;
};
enum __anonenum_173 {
    SS_ONSTACK = 1,
    SS_DISABLE = 2
} ;
struct sigaltstack {
   void *ss_sp ;
   int ss_flags ;
   size_t ss_size ;
};
typedef struct sigaltstack stack_t;
typedef int greg_t;
typedef greg_t gregset_t[19];
struct _libc_fpreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
};
struct _libc_fpstate {
   unsigned long cw ;
   unsigned long sw ;
   unsigned long tag ;
   unsigned long ipoff ;
   unsigned long cssel ;
   unsigned long dataoff ;
   unsigned long datasel ;
   struct _libc_fpreg _st[8] ;
   unsigned long status ;
};
typedef struct _libc_fpstate *fpregset_t;
struct __anonstruct_mcontext_t_174 {
   gregset_t gregs ;
   fpregset_t fpregs ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
typedef struct __anonstruct_mcontext_t_174 mcontext_t;
struct ucontext {
   unsigned long uc_flags ;
   struct ucontext *uc_link ;
   stack_t uc_stack ;
   mcontext_t uc_mcontext ;
   __sigset_t uc_sigmask ;
   struct _libc_fpstate __fpregs_mem ;
};
typedef struct ucontext ucontext_t;
enum __ptrace_request {
    PTRACE_TRACEME = 0,
    PTRACE_PEEKTEXT = 1,
    PTRACE_PEEKDATA = 2,
    PTRACE_PEEKUSER = 3,
    PTRACE_POKETEXT = 4,
    PTRACE_POKEDATA = 5,
    PTRACE_POKEUSER = 6,
    PTRACE_CONT = 7,
    PTRACE_KILL = 8,
    PTRACE_SINGLESTEP = 9,
    PTRACE_GETREGS = 12,
    PTRACE_SETREGS = 13,
    PTRACE_GETFPREGS = 14,
    PTRACE_SETFPREGS = 15,
    PTRACE_ATTACH = 16,
    PTRACE_DETACH = 17,
    PTRACE_GETFPXREGS = 18,
    PTRACE_SETFPXREGS = 19,
    PTRACE_SYSCALL = 24,
    PTRACE_SETOPTIONS = 16896,
    PTRACE_GETEVENTMSG = 16897,
    PTRACE_GETSIGINFO = 16898,
    PTRACE_SETSIGINFO = 16899
} ;
enum __ptrace_setoptions {
    PTRACE_O_TRACESYSGOOD = 1,
    PTRACE_O_TRACEFORK = 2,
    PTRACE_O_TRACEVFORK = 4,
    PTRACE_O_TRACECLONE = 8,
    PTRACE_O_TRACEEXEC = 16,
    PTRACE_O_TRACEVFORKDONE = 32,
    PTRACE_O_TRACEEXIT = 64,
    PTRACE_O_MASK = 127
} ;
enum __ptrace_eventcodes {
    PTRACE_EVENT_FORK = 1,
    PTRACE_EVENT_VFORK = 2,
    PTRACE_EVENT_CLONE = 3,
    PTRACE_EVENT_EXEC = 4,
    PTRACE_EVENT_VFORK_DONE = 5,
    PTRACE_EVENT_EXIT = 6
} ;
enum __rlimit_resource {
    RLIMIT_CPU = 0,
    RLIMIT_FSIZE = 1,
    RLIMIT_DATA = 2,
    RLIMIT_STACK = 3,
    RLIMIT_CORE = 4,
    __RLIMIT_RSS = 5,
    RLIMIT_NOFILE = 7,
    __RLIMIT_OFILE = 7,
    RLIMIT_AS = 9,
    __RLIMIT_NPROC = 6,
    __RLIMIT_MEMLOCK = 8,
    __RLIMIT_LOCKS = 10,
    __RLIMIT_SIGPENDING = 11,
    __RLIMIT_MSGQUEUE = 12,
    __RLIMIT_NICE = 13,
    __RLIMIT_RTPRIO = 14,
    __RLIMIT_NLIMITS = 15,
    __RLIM_NLIMITS = 15
} ;
typedef __rlim_t rlim_t;
struct rlimit {
   rlim_t rlim_cur ;
   rlim_t rlim_max ;
};
enum __rusage_who {
    RUSAGE_SELF = 0,
    RUSAGE_CHILDREN = -1
} ;
struct rusage {
   struct timeval ru_utime ;
   struct timeval ru_stime ;
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
enum __priority_which {
    PRIO_PROCESS = 0,
    PRIO_PGRP = 1,
    PRIO_USER = 2
} ;
typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;
enum __anonenum_idtype_t_175 {
    P_ALL = 0,
    P_PID = 1,
    P_PGID = 2
} ;
typedef enum __anonenum_idtype_t_175 idtype_t;
struct rusage;
struct user_fpregs_struct {
   long cwd ;
   long swd ;
   long twd ;
   long fip ;
   long fcs ;
   long foo ;
   long fos ;
   long st_space[20] ;
};
struct user_fpxregs_struct {
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
struct user_regs_struct {
   long ebx ;
   long ecx ;
   long edx ;
   long esi ;
   long edi ;
   long ebp ;
   long eax ;
   long xds ;
   long xes ;
   long xfs ;
   long xgs ;
   long orig_eax ;
   long eip ;
   long xcs ;
   long eflags ;
   long esp ;
   long xss ;
};
struct user {
   struct user_regs_struct regs ;
   int u_fpvalid ;
   struct user_fpregs_struct i387 ;
   unsigned long u_tsize ;
   unsigned long u_dsize ;
   unsigned long u_ssize ;
   unsigned long start_code ;
   unsigned long start_stack ;
   long signal ;
   int reserved ;
   struct user_regs_struct *u_ar0 ;
   struct user_fpregs_struct *u_fpstate ;
   unsigned long magic ;
   char u_comm[32] ;
   int u_debugreg[8] ;
};
struct ptrace_bts_config {
   __u32 size ;
   __u32 flags ;
   __u32 signal ;
   __u32 bts_size ;
};
struct pt_regs {
   long ebx ;
   long ecx ;
   long edx ;
   long esi ;
   long edi ;
   long ebp ;
   long eax ;
   int xds ;
   int xes ;
   int xfs ;
   int xgs ;
   long orig_eax ;
   long eip ;
   int xcs ;
   long eflags ;
   long esp ;
   int xss ;
};
typedef Addr32 CORE_ADDR;
typedef Addr32 PTRACE_XFER_TYPE;
typedef void *PTRACE_ARG3_TYPE;
struct __anonstruct_VgdbThreadState_176 {
   ThreadStatus status ;
   Int lwpid ;
};
typedef struct __anonstruct_VgdbThreadState_176 VgdbThreadState;
union __anonunion_177 {
   int __in ;
   int __i ;
};
union __anonunion_178 {
   int __in ;
   int __i ;
};
union __anonunion_179 {
   int __in ;
   int __i ;
};
union __anonunion_180 {
   int __in ;
   int __i ;
};
union __anonunion_181 {
   int __in ;
   int __i ;
};
union __anonunion_182 {
   int __in ;
   int __i ;
};
union __anonunion_183 {
   int __in ;
   int __i ;
};
union __anonunion_184 {
   int __in ;
   int __i ;
};
union __anonunion_185 {
   int __in ;
   int __i ;
};
union __anonunion_186 {
   int __in ;
   int __i ;
};
union __anonunion_187 {
   int __in ;
   int __i ;
};
enum __anonenum_ConnectionKind_188 {
    FROM_GDB = 0,
    TO_GDB = 1,
    FROM_PID = 2,
    TO_PID = 3
} ;
typedef enum __anonenum_ConnectionKind_188 ConnectionKind;
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
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) access)(char const   *__name ,
                                                                                   int __type ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) faccessat)(int __fd ,
                                                                                      char const   *__file ,
                                                                                      int __type ,
                                                                                      int __flag ) ;
extern  __attribute__((__nothrow__)) __off_t lseek(int __fd , __off_t __offset ,
                                                   int __whence ) ;
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern ssize_t pread(int __fd , void *__buf , size_t __nbytes ,
                     __off_t __offset ) ;
extern ssize_t pwrite(int __fd , void const   *__buf , size_t __n ,
                      __off_t __offset ) ;
extern  __attribute__((__nothrow__)) int pipe(int *__pipedes ) ;
extern  __attribute__((__nothrow__)) unsigned int alarm(unsigned int __seconds ) ;
extern unsigned int sleep(unsigned int __seconds ) ;
extern  __attribute__((__nothrow__)) __useconds_t ualarm(__useconds_t __value ,
                                                         __useconds_t __interval ) ;
extern int usleep(__useconds_t __useconds ) ;
extern int pause(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chown)(char const   *__file ,
                                                                                  __uid_t __owner ,
                                                                                  __gid_t __group ) ;
extern  __attribute__((__nothrow__)) int fchown(int __fd , __uid_t __owner ,
                                                __gid_t __group ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) lchown)(char const   *__file ,
                                                                                   __uid_t __owner ,
                                                                                   __gid_t __group ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fchownat)(int __fd ,
                                                                                     char const   *__file ,
                                                                                     __uid_t __owner ,
                                                                                     __gid_t __group ,
                                                                                     int __flag ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chdir)(char const   *__path ) ;
extern  __attribute__((__nothrow__)) int fchdir(int __fd ) ;
extern  __attribute__((__nothrow__)) char *getcwd(char *__buf , size_t __size ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) getwd)(char *__buf )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int dup(int __fd ) ;
extern  __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;
extern char **__environ ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execve)(char const   *__path ,
                                                                                     char * const  *__argv ,
                                                                                     char * const  *__envp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fexecve)(int __fd ,
                                                                                    char * const  *__argv ,
                                                                                    char * const  *__envp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execv)(char const   *__path ,
                                                                                    char * const  *__argv ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execle)(char const   *__path ,
                                                                                     char const   *__arg 
                                                                                     , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execl)(char const   *__path ,
                                                                                    char const   *__arg 
                                                                                    , ...) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execvp)(char const   *__file ,
                                                                                     char * const  *__argv ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) execlp)(char const   *__file ,
                                                                                     char const   *__arg 
                                                                                     , ...) ;
extern  __attribute__((__nothrow__)) int nice(int __inc ) ;
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) pathconf)(char const   *__path ,
                                                                                      int __name ) ;
extern  __attribute__((__nothrow__)) long fpathconf(int __fd , int __name ) ;
extern  __attribute__((__nothrow__)) long sysconf(int __name ) ;
extern  __attribute__((__nothrow__)) size_t confstr(int __name , char *__buf ,
                                                    size_t __len ) ;
extern  __attribute__((__nothrow__)) __pid_t getpid(void) ;
extern  __attribute__((__nothrow__)) __pid_t getppid(void) ;
extern  __attribute__((__nothrow__)) __pid_t getpgrp(void) ;
extern  __attribute__((__nothrow__)) __pid_t __getpgid(__pid_t __pid ) ;
extern  __attribute__((__nothrow__)) __pid_t getpgid(__pid_t __pid ) ;
extern  __attribute__((__nothrow__)) int setpgid(__pid_t __pid , __pid_t __pgid ) ;
extern  __attribute__((__nothrow__)) int setpgrp(void) ;
extern  __attribute__((__nothrow__)) __pid_t setsid(void) ;
extern  __attribute__((__nothrow__)) __pid_t getsid(__pid_t __pid ) ;
extern  __attribute__((__nothrow__)) __uid_t getuid(void) ;
extern  __attribute__((__nothrow__)) __uid_t geteuid(void) ;
extern  __attribute__((__nothrow__)) __gid_t getgid(void) ;
extern  __attribute__((__nothrow__)) __gid_t getegid(void) ;
extern  __attribute__((__nothrow__)) int getgroups(int __size , __gid_t *__list ) ;
extern  __attribute__((__nothrow__)) int setuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setreuid(__uid_t __ruid ,
                                                  __uid_t __euid ) ;
extern  __attribute__((__nothrow__)) int seteuid(__uid_t __uid ) ;
extern  __attribute__((__nothrow__)) int setgid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) int setregid(__gid_t __rgid ,
                                                  __gid_t __egid ) ;
extern  __attribute__((__nothrow__)) int setegid(__gid_t __gid ) ;
extern  __attribute__((__nothrow__)) __pid_t fork(void) ;
extern  __attribute__((__nothrow__)) __pid_t vfork(void) ;
extern  __attribute__((__nothrow__)) char *ttyname(int __fd ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) ttyname_r)(int __fd ,
                                                                                      char *__buf ,
                                                                                      size_t __buflen ) ;
extern  __attribute__((__nothrow__)) int isatty(int __fd ) ;
extern  __attribute__((__nothrow__)) int ttyslot(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) link)(char const   *__from ,
                                                                                   char const   *__to ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,4))) linkat)(int __fromfd ,
                                                                                     char const   *__from ,
                                                                                     int __tofd ,
                                                                                     char const   *__to ,
                                                                                     int __flags ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) symlink)(char const   *__from ,
                                                                                      char const   *__to ) ;
extern  __attribute__((__nothrow__)) ssize_t ( __attribute__((__nonnull__(1,2))) readlink)(char const   * __restrict  __path ,
                                                                                           char * __restrict  __buf ,
                                                                                           size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,3))) symlinkat)(char const   *__from ,
                                                                                        int __tofd ,
                                                                                        char const   *__to ) ;
extern  __attribute__((__nothrow__)) ssize_t ( __attribute__((__nonnull__(2,3))) readlinkat)(int __fd ,
                                                                                             char const   * __restrict  __path ,
                                                                                             char * __restrict  __buf ,
                                                                                             size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) unlink)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) unlinkat)(int __fd ,
                                                                                     char const   *__name ,
                                                                                     int __flag ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) rmdir)(char const   *__path ) ;
extern  __attribute__((__nothrow__)) __pid_t tcgetpgrp(int __fd ) ;
extern  __attribute__((__nothrow__)) int tcsetpgrp(int __fd , __pid_t __pgrp_id ) ;
extern char *getlogin(void) ;
extern int ( __attribute__((__nonnull__(1))) getlogin_r)(char *__name ,
                                                         size_t __name_len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) setlogin)(char const   *__name ) ;
extern char *optarg ;
extern int optind ;
extern int opterr ;
extern int optopt ;
extern  __attribute__((__nothrow__)) int getopt(int ___argc ,
                                                char * const  *___argv ,
                                                char const   *__shortopts ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) gethostname)(char *__name ,
                                                                                        size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sethostname)(char const   *__name ,
                                                                                        size_t __len ) ;
extern  __attribute__((__nothrow__)) int sethostid(long __id ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) getdomainname)(char *__name ,
                                                                                          size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) setdomainname)(char const   *__name ,
                                                                                          size_t __len ) ;
extern  __attribute__((__nothrow__)) int vhangup(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) revoke)(char const   *__file ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) profil)(unsigned short *__sample_buffer ,
                                                                                   size_t __size ,
                                                                                   size_t __offset ,
                                                                                   unsigned int __scale ) ;
extern  __attribute__((__nothrow__)) int acct(char const   *__name ) ;
extern  __attribute__((__nothrow__)) char *getusershell(void) ;
extern  __attribute__((__nothrow__)) void endusershell(void) ;
extern  __attribute__((__nothrow__)) void setusershell(void) ;
extern  __attribute__((__nothrow__)) int daemon(int __nochdir , int __noclose ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chroot)(char const   *__path ) ;
extern char *( __attribute__((__nonnull__(1))) getpass)(char const   *__prompt ) ;
extern int fsync(int __fd ) ;
extern long gethostid(void) ;
extern  __attribute__((__nothrow__)) void sync(void) ;
extern  __attribute__((__nothrow__)) int getpagesize(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int getdtablesize(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) truncate)(char const   *__file ,
                                                                                     __off_t __length ) ;
extern  __attribute__((__nothrow__)) int ftruncate(int __fd , __off_t __length ) ;
extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;
extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;
extern int lockf(int __fd , int __cmd , __off_t __len ) ;
extern int fdatasync(int __fildes ) ;
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memcpy)(void * __restrict  __dest ,
                                                                                       void const   * __restrict  __src ,
                                                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memmove)(void *__dest ,
                                                                                        void const   *__src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memccpy)(void * __restrict  __dest ,
                                                                                        void const   * __restrict  __src ,
                                                                                        int __c ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memset)(void *__s ,
                                                                                     int __c ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) memcmp)(void const   *__s1 ,
                                                                                     void const   *__s2 ,
                                                                                     size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memchr)(void const   *__s ,
                                                                                     int __c ,
                                                                                     size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcpy)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strncpy)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcat)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strncat)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcmp)(char const   *__s1 ,
                                                                                     char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncmp)(char const   *__s1 ,
                                                                                      char const   *__s2 ,
                                                                                      size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcoll)(char const   *__s1 ,
                                                                                      char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(2))) strxfrm)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ,
                                                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) strcoll_l)(char const   *__s1 ,
                                                                                          char const   *__s2 ,
                                                                                          __locale_t __l )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(2,4))) strxfrm_l)(char *__dest ,
                                                                                           char const   *__src ,
                                                                                           size_t __n ,
                                                                                           __locale_t __l ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strndup)(char const   *__string ,
                                                                                      size_t __n )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strchr)(char const   *__s ,
                                                                                     int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strrchr)(char const   *__s ,
                                                                                      int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2))) strcspn)(char const   *__s ,
                                                                                         char const   *__reject )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2))) strspn)(char const   *__s ,
                                                                                        char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strpbrk)(char const   *__s ,
                                                                                        char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strstr)(char const   *__haystack ,
                                                                                       char const   *__needle )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2))) strtok)(char * __restrict  __s ,
                                                                                     char const   * __restrict  __delim ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2,3))) __strtok_r)(char * __restrict  __s ,
                                                                                           char const   * __restrict  __delim ,
                                                                                           char ** __restrict  __save_ptr ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2,3))) strtok_r)(char * __restrict  __s ,
                                                                                         char const   * __restrict  __delim ,
                                                                                         char ** __restrict  __save_ptr ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strnlen)(char const   *__string ,
                                                                                       size_t __maxlen )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) strerror_r)(int __errnum ,
                                                                                       char *__buf ,
                                                                                       size_t __buflen )  __asm__("__xpg_strerror_r")  ;
extern  __attribute__((__nothrow__)) char *strerror_l(int __errnum ,
                                                      __locale_t __l ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) __bzero)(void *__s ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1,2))) bcopy)(void const   *__src ,
                                                                                     void *__dest ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) bzero)(void *__s ,
                                                                                   size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) bcmp)(void const   *__s1 ,
                                                                                   void const   *__s2 ,
                                                                                   size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) index)(char const   *__s ,
                                                                                    int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) rindex)(char const   *__s ,
                                                                                     int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcasecmp)(char const   *__s1 ,
                                                                                         char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncasecmp)(char const   *__s1 ,
                                                                                          char const   *__s2 ,
                                                                                          size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strsep)(char ** __restrict  __stringp ,
                                                                                       char const   * __restrict  __delim ) ;
extern  __attribute__((__nothrow__)) char *strsignal(int __sig ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) __stpcpy)(char * __restrict  __dest ,
                                                                                         char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) stpcpy)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) __stpncpy)(char * __restrict  __dest ,
                                                                                          char const   * __restrict  __src ,
                                                                                          size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) stpncpy)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern void *__rawmemchr(void const   *__s , int __c ) ;
__inline extern size_t __strcspn_c1(char const   *__s , int __reject ) ;
__inline extern size_t __strcspn_c1(char const   *__s , int __reject ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if ((int const   )*(__s + __result) != (int const   )__reject) {

      } else {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) ;
__inline extern size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        if ((int const   )*(__s + __result) != (int const   )__reject2) {

        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) ;
__inline extern size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          if ((int const   )*(__s + __result) != (int const   )__reject3) {

          } else {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strspn_c1(char const   *__s , int __accept ) ;
__inline extern size_t __strspn_c1(char const   *__s , int __accept ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while ((int const   )*(__s + __result) == (int const   )__accept) {
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
__inline extern size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) == (int const   )__accept1) {

    } else
    if ((int const   )*(__s + __result) == (int const   )__accept2) {

    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
__inline extern size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ 
  register size_t __result ;

  {
  __result = (size_t )0;
  while (1) {
    if ((int const   )*(__s + __result) == (int const   )__accept1) {

    } else
    if ((int const   )*(__s + __result) == (int const   )__accept2) {

    } else
    if ((int const   )*(__s + __result) == (int const   )__accept3) {

    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}
__inline extern char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
__inline extern char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ 
  char *tmp ;

  {
  while (1) {
    if ((int const   )*__s != 0) {
      if ((int const   )*__s != (int const   )__accept1) {
        if ((int const   )*__s != (int const   )__accept2) {

        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __s ++;
  }
  if ((int const   )*__s == 0) {
    tmp = (char *)((void *)0);
  } else {
    tmp = (char *)((size_t )__s);
  }
  return (tmp);
}
}
__inline extern char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
__inline extern char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ 
  char *tmp ;

  {
  while (1) {
    if ((int const   )*__s != 0) {
      if ((int const   )*__s != (int const   )__accept1) {
        if ((int const   )*__s != (int const   )__accept2) {
          if ((int const   )*__s != (int const   )__accept3) {

          } else {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __s ++;
  }
  if ((int const   )*__s == 0) {
    tmp = (char *)((void *)0);
  } else {
    tmp = (char *)((size_t )__s);
  }
  return (tmp);
}
}
__inline extern char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;
__inline extern char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) 
{ 
  char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
  if ((unsigned int )__s == (unsigned int )((void *)0)) {
    __s = *__nextp;
  } else {

  }
  while ((int )*__s == (int )__sep) {
    __s ++;
  }
  __result = (char *)((void *)0);
  if ((int )*__s != 0) {
    tmp = __s;
    __s ++;
    __result = tmp;
    while ((int )*__s != 0) {
      tmp___0 = __s;
      __s ++;
      if ((int )*tmp___0 == (int )__sep) {
        *(__s + -1) = (char )'\000';
        break;
      } else {

      }
    }
  } else {

  }
  *__nextp = __s;
  return (__result);
}
}
extern char *__strsep_g(char **__stringp , char const   *__delim ) ;
__inline extern char *__strsep_1c(char **__s , char __reject ) ;
__inline extern char *__strsep_1c(char **__s , char __reject ) 
{ 
  register char *__retval ;
  char *tmp ;
  char *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;

  {
  __retval = *__s;
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    tmp___2 = __builtin_strchr(__retval, (int )__reject);
    tmp___0 = tmp___2;
    *__s = tmp___0;
    if ((unsigned int )tmp___0 != (unsigned int )((void *)0)) {
      tmp = *__s;
      (*__s) ++;
      *tmp = (char )'\000';
    } else {

    }
  } else {

  }
  return (__retval);
}
}
__inline extern char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) ;
__inline extern char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) 
{ 
  register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  __retval = *__s;
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    __cp = __retval;
    while (1) {
      if ((int )*__cp == 0) {
        __cp = (char *)((void *)0);
        break;
      } else {

      }
      if ((int )*__cp == (int )__reject1) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else
      if ((int )*__cp == (int )__reject2) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else {

      }
      __cp ++;
    }
    *__s = __cp;
  } else {

  }
  return (__retval);
}
}
__inline extern char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) ;
__inline extern char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) 
{ 
  register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  __retval = *__s;
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    __cp = __retval;
    while (1) {
      if ((int )*__cp == 0) {
        __cp = (char *)((void *)0);
        break;
      } else {

      }
      if ((int )*__cp == (int )__reject1) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else
      if ((int )*__cp == (int )__reject2) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else
      if ((int )*__cp == (int )__reject3) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else {

      }
      __cp ++;
    }
    *__s = __cp;
  } else {

  }
  return (__retval);
}
}
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string ,
                                                     size_t __n )  __attribute__((__malloc__)) ;
extern int poll(struct pollfd *__fds , nfds_t __nfds , int __timeout ) ;
extern  __attribute__((__nothrow__)) int clone(int (*__fn)(void *__arg ) ,
                                               void *__child_stack ,
                                               int __flags , void *__arg  , ...) ;
extern  __attribute__((__nothrow__)) int unshare(int __flags ) ;
extern  __attribute__((__nothrow__)) int sched_getcpu(void) ;
extern  __attribute__((__nothrow__)) int __sched_cpucount(size_t __setsize ,
                                                          cpu_set_t const   *__setp ) ;
extern  __attribute__((__nothrow__)) cpu_set_t *__sched_cpualloc(size_t __count ) ;
extern  __attribute__((__nothrow__)) void __sched_cpufree(cpu_set_t *__set ) ;
extern  __attribute__((__nothrow__)) int sched_setparam(__pid_t __pid ,
                                                        struct sched_param  const  *__param ) ;
extern  __attribute__((__nothrow__)) int sched_getparam(__pid_t __pid ,
                                                        struct sched_param *__param ) ;
extern  __attribute__((__nothrow__)) int sched_setscheduler(__pid_t __pid ,
                                                            int __policy ,
                                                            struct sched_param  const  *__param ) ;
extern  __attribute__((__nothrow__)) int sched_getscheduler(__pid_t __pid ) ;
extern  __attribute__((__nothrow__)) int sched_yield(void) ;
extern  __attribute__((__nothrow__)) int sched_get_priority_max(int __algorithm ) ;
extern  __attribute__((__nothrow__)) int sched_get_priority_min(int __algorithm ) ;
extern  __attribute__((__nothrow__)) int sched_rr_get_interval(__pid_t __pid ,
                                                               struct timespec *__t ) ;
extern  __attribute__((__nothrow__)) clock_t clock(void) ;
extern  __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;
extern  __attribute__((__nothrow__)) double difftime(time_t __time1 ,
                                                     time_t __time0 )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) time_t mktime(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) size_t strftime(char * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     char const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) size_t strftime_l(char * __restrict  __s ,
                                                       size_t __maxsize ,
                                                       char const   * __restrict  __format ,
                                                       struct tm  const  * __restrict  __tp ,
                                                       __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) struct tm *gmtime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) struct tm *gmtime_r(time_t const   * __restrict  __timer ,
                                                         struct tm * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) struct tm *localtime_r(time_t const   * __restrict  __timer ,
                                                            struct tm * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) char *asctime(struct tm  const  *__tp ) ;
extern  __attribute__((__nothrow__)) char *ctime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) char *asctime_r(struct tm  const  * __restrict  __tp ,
                                                     char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) char *ctime_r(time_t const   * __restrict  __timer ,
                                                   char * __restrict  __buf ) ;
extern char *__tzname[2] ;
extern int __daylight ;
extern long __timezone ;
extern char *tzname[2] ;
extern  __attribute__((__nothrow__)) void tzset(void) ;
extern int daylight ;
extern long timezone ;
extern  __attribute__((__nothrow__)) int stime(time_t const   *__when ) ;
extern  __attribute__((__nothrow__)) time_t timegm(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) time_t timelocal(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) int dysize(int __year )  __attribute__((__const__)) ;
extern int nanosleep(struct timespec  const  *__requested_time ,
                     struct timespec *__remaining ) ;
extern  __attribute__((__nothrow__)) int clock_getres(clockid_t __clock_id ,
                                                      struct timespec *__res ) ;
extern  __attribute__((__nothrow__)) int clock_gettime(clockid_t __clock_id ,
                                                       struct timespec *__tp ) ;
extern  __attribute__((__nothrow__)) int clock_settime(clockid_t __clock_id ,
                                                       struct timespec  const  *__tp ) ;
extern int clock_nanosleep(clockid_t __clock_id , int __flags ,
                           struct timespec  const  *__req ,
                           struct timespec *__rem ) ;
extern  __attribute__((__nothrow__)) int clock_getcpuclockid(pid_t __pid ,
                                                             clockid_t *__clock_id ) ;
extern  __attribute__((__nothrow__)) int timer_create(clockid_t __clock_id ,
                                                      struct sigevent * __restrict  __evp ,
                                                      timer_t * __restrict  __timerid ) ;
extern  __attribute__((__nothrow__)) int timer_delete(timer_t __timerid ) ;
extern  __attribute__((__nothrow__)) int timer_settime(timer_t __timerid ,
                                                       int __flags ,
                                                       struct itimerspec  const  * __restrict  __value ,
                                                       struct itimerspec * __restrict  __ovalue ) ;
extern  __attribute__((__nothrow__)) int timer_gettime(timer_t __timerid ,
                                                       struct itimerspec *__value ) ;
extern  __attribute__((__nothrow__)) int timer_getoverrun(timer_t __timerid ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,3))) pthread_create)(pthread_t * __restrict  __newthread ,
                                                                                             pthread_attr_t const   * __restrict  __attr ,
                                                                                             void *(*__start_routine)(void * ) ,
                                                                                             void * __restrict  __arg ) ;
extern  __attribute__((__noreturn__)) void pthread_exit(void *__retval ) ;
extern int pthread_join(pthread_t __th , void **__thread_return ) ;
extern  __attribute__((__nothrow__)) int pthread_detach(pthread_t __th ) ;
extern  __attribute__((__nothrow__)) pthread_t pthread_self(void)  __attribute__((__const__)) ;
__inline extern  __attribute__((__nothrow__)) int pthread_equal(pthread_t __thread1 ,
                                                                pthread_t __thread2 ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_attr_init)(pthread_attr_t *__attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_attr_destroy)(pthread_attr_t *__attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_attr_getdetachstate)(pthread_attr_t const   *__attr ,
                                                                                                          int *__detachstate ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_attr_setdetachstate)(pthread_attr_t *__attr ,
                                                                                                        int __detachstate ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_attr_getguardsize)(pthread_attr_t const   *__attr ,
                                                                                                        size_t *__guardsize ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_attr_setguardsize)(pthread_attr_t *__attr ,
                                                                                                      size_t __guardsize ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_attr_getschedparam)(pthread_attr_t const   * __restrict  __attr ,
                                                                                                         struct sched_param * __restrict  __param ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_attr_setschedparam)(pthread_attr_t * __restrict  __attr ,
                                                                                                         struct sched_param  const  * __restrict  __param ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_attr_getschedpolicy)(pthread_attr_t const   * __restrict  __attr ,
                                                                                                          int * __restrict  __policy ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_attr_setschedpolicy)(pthread_attr_t *__attr ,
                                                                                                        int __policy ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_attr_getinheritsched)(pthread_attr_t const   * __restrict  __attr ,
                                                                                                           int * __restrict  __inherit ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_attr_setinheritsched)(pthread_attr_t *__attr ,
                                                                                                         int __inherit ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_attr_getscope)(pthread_attr_t const   * __restrict  __attr ,
                                                                                                    int * __restrict  __scope ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_attr_setscope)(pthread_attr_t *__attr ,
                                                                                                  int __scope ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_attr_getstackaddr)(pthread_attr_t const   * __restrict  __attr ,
                                                                                                        void ** __restrict  __stackaddr )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_attr_setstackaddr)(pthread_attr_t *__attr ,
                                                                                                      void *__stackaddr )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_attr_getstacksize)(pthread_attr_t const   * __restrict  __attr ,
                                                                                                        size_t * __restrict  __stacksize ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_attr_setstacksize)(pthread_attr_t *__attr ,
                                                                                                      size_t __stacksize ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) pthread_attr_getstack)(pthread_attr_t const   * __restrict  __attr ,
                                                                                                      void ** __restrict  __stackaddr ,
                                                                                                      size_t * __restrict  __stacksize ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_attr_setstack)(pthread_attr_t *__attr ,
                                                                                                  void *__stackaddr ,
                                                                                                  size_t __stacksize ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3))) pthread_setschedparam)(pthread_t __target_thread ,
                                                                                                  int __policy ,
                                                                                                  struct sched_param  const  *__param ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) pthread_getschedparam)(pthread_t __target_thread ,
                                                                                                    int * __restrict  __policy ,
                                                                                                    struct sched_param * __restrict  __param ) ;
extern  __attribute__((__nothrow__)) int pthread_setschedprio(pthread_t __target_thread ,
                                                              int __prio ) ;
extern int ( __attribute__((__nonnull__(1,2))) pthread_once)(pthread_once_t *__once_control ,
                                                             void (*__init_routine)(void) ) ;
extern int pthread_setcancelstate(int __state , int *__oldstate ) ;
extern int pthread_setcanceltype(int __type , int *__oldtype ) ;
extern int pthread_cancel(pthread_t __th ) ;
extern void pthread_testcancel(void) ;
extern void ( __attribute__((__regparm__(1))) __pthread_register_cancel)(__pthread_unwind_buf_t *__buf ) ;
extern void ( __attribute__((__regparm__(1))) __pthread_unregister_cancel)(__pthread_unwind_buf_t *__buf ) ;
extern  __attribute__((__noreturn__)) void ( __attribute__((__regparm__(1))) __pthread_unwind_next)(__pthread_unwind_buf_t *__buf )  __attribute__((__weak__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutex_init)(pthread_mutex_t *__mutex ,
                                                                                               pthread_mutexattr_t const   *__mutexattr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutex_destroy)(pthread_mutex_t *__mutex ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutex_trylock)(pthread_mutex_t *__mutex ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutex_lock)(pthread_mutex_t *__mutex ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_mutex_timedlock)(pthread_mutex_t * __restrict  __mutex ,
                                                                                                      struct timespec  const  * __restrict  __abstime ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutex_unlock)(pthread_mutex_t *__mutex ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_mutex_getprioceiling)(pthread_mutex_t const   * __restrict  __mutex ,
                                                                                                           int * __restrict  __prioceiling ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,3))) pthread_mutex_setprioceiling)(pthread_mutex_t * __restrict  __mutex ,
                                                                                                           int __prioceiling ,
                                                                                                           int * __restrict  __old_ceiling ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutex_consistent)(pthread_mutex_t *__mutex ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutexattr_init)(pthread_mutexattr_t *__attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutexattr_destroy)(pthread_mutexattr_t *__attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_mutexattr_getpshared)(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                                                           int * __restrict  __pshared ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutexattr_setpshared)(pthread_mutexattr_t *__attr ,
                                                                                                         int __pshared ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_mutexattr_gettype)(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                                                        int * __restrict  __kind ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutexattr_settype)(pthread_mutexattr_t *__attr ,
                                                                                                      int __kind ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_mutexattr_getprotocol)(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                                                            int * __restrict  __protocol ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutexattr_setprotocol)(pthread_mutexattr_t *__attr ,
                                                                                                          int __protocol ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_mutexattr_getprioceiling)(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                                                               int * __restrict  __prioceiling ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutexattr_setprioceiling)(pthread_mutexattr_t *__attr ,
                                                                                                             int __prioceiling ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_mutexattr_getrobust)(pthread_mutexattr_t const   *__attr ,
                                                                                                          int *__robustness ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_mutexattr_setrobust)(pthread_mutexattr_t *__attr ,
                                                                                                        int __robustness ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlock_init)(pthread_rwlock_t * __restrict  __rwlock ,
                                                                                                pthread_rwlockattr_t const   * __restrict  __attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlock_destroy)(pthread_rwlock_t *__rwlock ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlock_rdlock)(pthread_rwlock_t *__rwlock ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlock_tryrdlock)(pthread_rwlock_t *__rwlock ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_rwlock_timedrdlock)(pthread_rwlock_t * __restrict  __rwlock ,
                                                                                                         struct timespec  const  * __restrict  __abstime ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlock_wrlock)(pthread_rwlock_t *__rwlock ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlock_trywrlock)(pthread_rwlock_t *__rwlock ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_rwlock_timedwrlock)(pthread_rwlock_t * __restrict  __rwlock ,
                                                                                                         struct timespec  const  * __restrict  __abstime ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlock_unlock)(pthread_rwlock_t *__rwlock ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlockattr_init)(pthread_rwlockattr_t *__attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlockattr_destroy)(pthread_rwlockattr_t *__attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_rwlockattr_getpshared)(pthread_rwlockattr_t const   * __restrict  __attr ,
                                                                                                            int * __restrict  __pshared ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlockattr_setpshared)(pthread_rwlockattr_t *__attr ,
                                                                                                          int __pshared ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_rwlockattr_getkind_np)(pthread_rwlockattr_t const   * __restrict  __attr ,
                                                                                                            int * __restrict  __pref ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_rwlockattr_setkind_np)(pthread_rwlockattr_t *__attr ,
                                                                                                          int __pref ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_cond_init)(pthread_cond_t * __restrict  __cond ,
                                                                                              pthread_condattr_t const   * __restrict  __cond_attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_cond_destroy)(pthread_cond_t *__cond ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_cond_signal)(pthread_cond_t *__cond ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_cond_broadcast)(pthread_cond_t *__cond ) ;
extern int ( __attribute__((__nonnull__(1,2))) pthread_cond_wait)(pthread_cond_t * __restrict  __cond ,
                                                                  pthread_mutex_t * __restrict  __mutex ) ;
extern int ( __attribute__((__nonnull__(1,2,3))) pthread_cond_timedwait)(pthread_cond_t * __restrict  __cond ,
                                                                         pthread_mutex_t * __restrict  __mutex ,
                                                                         struct timespec  const  * __restrict  __abstime ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_condattr_init)(pthread_condattr_t *__attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_condattr_destroy)(pthread_condattr_t *__attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_condattr_getpshared)(pthread_condattr_t const   * __restrict  __attr ,
                                                                                                          int * __restrict  __pshared ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_condattr_setpshared)(pthread_condattr_t *__attr ,
                                                                                                        int __pshared ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_condattr_getclock)(pthread_condattr_t const   * __restrict  __attr ,
                                                                                                        __clockid_t * __restrict  __clock_id ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_condattr_setclock)(pthread_condattr_t *__attr ,
                                                                                                      __clockid_t __clock_id ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_spin_init)(pthread_spinlock_t *__lock ,
                                                                                              int __pshared ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_spin_destroy)(pthread_spinlock_t *__lock ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_spin_lock)(pthread_spinlock_t *__lock ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_spin_trylock)(pthread_spinlock_t *__lock ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_spin_unlock)(pthread_spinlock_t *__lock ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_barrier_init)(pthread_barrier_t * __restrict  __barrier ,
                                                                                                 pthread_barrierattr_t const   * __restrict  __attr ,
                                                                                                 unsigned int __count ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_barrier_destroy)(pthread_barrier_t *__barrier ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_barrier_wait)(pthread_barrier_t *__barrier ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_barrierattr_init)(pthread_barrierattr_t *__attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_barrierattr_destroy)(pthread_barrierattr_t *__attr ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) pthread_barrierattr_getpshared)(pthread_barrierattr_t const   * __restrict  __attr ,
                                                                                                             int * __restrict  __pshared ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_barrierattr_setpshared)(pthread_barrierattr_t *__attr ,
                                                                                                           int __pshared ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) pthread_key_create)(pthread_key_t *__key ,
                                                                                               void (*__destr_function)(void * ) ) ;
extern  __attribute__((__nothrow__)) int pthread_key_delete(pthread_key_t __key ) ;
extern  __attribute__((__nothrow__)) void *pthread_getspecific(pthread_key_t __key ) ;
extern  __attribute__((__nothrow__)) int pthread_setspecific(pthread_key_t __key ,
                                                             void const   *__pointer ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) pthread_getcpuclockid)(pthread_t __thread_id ,
                                                                                                  __clockid_t *__clock_id ) ;
extern  __attribute__((__nothrow__)) int pthread_atfork(void (*__prepare)(void) ,
                                                        void (*__parent)(void) ,
                                                        void (*__child)(void) ) ;
__inline extern  __attribute__((__nothrow__)) int pthread_equal(pthread_t __thread1 ,
                                                                pthread_t __thread2 ) ;
__inline extern int pthread_equal(pthread_t __thread1 , pthread_t __thread2 ) 
{ 


  {
  return (__thread1 == __thread2);
}
}
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;
__inline extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) strtod)(char const   * __restrict  __nptr ,
                                                                                      char ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) float ( __attribute__((__nonnull__(1))) strtof)(char const   * __restrict  __nptr ,
                                                                                     char ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) long double ( __attribute__((__nonnull__(1))) strtold)(char const   * __restrict  __nptr ,
                                                                                            char ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) strtol)(char const   * __restrict  __nptr ,
                                                                                    char ** __restrict  __endptr ,
                                                                                    int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1))) strtoul)(char const   * __restrict  __nptr ,
                                                                                              char ** __restrict  __endptr ,
                                                                                              int __base ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) strtoq)(char const   * __restrict  __nptr ,
                                                                                         char ** __restrict  __endptr ,
                                                                                         int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) strtouq)(char const   * __restrict  __nptr ,
                                                                                                   char ** __restrict  __endptr ,
                                                                                                   int __base ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) strtoll)(char const   * __restrict  __nptr ,
                                                                                          char ** __restrict  __endptr ,
                                                                                          int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) strtoull)(char const   * __restrict  __nptr ,
                                                                                                    char ** __restrict  __endptr ,
                                                                                                    int __base ) ;
__inline extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern double ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr ) 
{ 
  double tmp ;

  {
  tmp = strtod((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)));
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern int ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr ) 
{ 
  long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  return ((int )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern long ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr ) 
{ 
  long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern long long ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr ) 
{ 
  long long tmp ;

  {
  tmp = strtoll((char const   */* __restrict  */)__nptr,
                (char **/* __restrict  */)((char **)((void *)0)), 10);
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) char *l64a(long __n ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) a64l)(char const   *__s )  __attribute__((__pure__)) ;
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline extern unsigned int gnu_dev_major(unsigned long long __dev ) 
{ 


  {
  return ((unsigned int )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline extern unsigned int gnu_dev_minor(unsigned long long __dev ) 
{ 


  {
  return ((unsigned int )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
__inline extern unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                   unsigned int __minor ) 
{ 


  {
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}
extern  __attribute__((__nothrow__)) long random(void) ;
extern  __attribute__((__nothrow__)) void srandom(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2))) initstate)(unsigned int __seed ,
                                                                                        char *__statebuf ,
                                                                                        size_t __statelen ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) setstate)(char *__statebuf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) random_r)(struct random_data * __restrict  __buf ,
                                                                                       int32_t * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) srandom_r)(unsigned int __seed ,
                                                                                      struct random_data *__buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,4))) initstate_r)(unsigned int __seed ,
                                                                                          char * __restrict  __statebuf ,
                                                                                          size_t __statelen ,
                                                                                          struct random_data * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) setstate_r)(char * __restrict  __statebuf ,
                                                                                         struct random_data * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int rand(void) ;
extern  __attribute__((__nothrow__)) void srand(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) int rand_r(unsigned int *__seed ) ;
extern  __attribute__((__nothrow__)) double drand48(void) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) erand48)(unsigned short *__xsubi ) ;
extern  __attribute__((__nothrow__)) long lrand48(void) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) nrand48)(unsigned short *__xsubi ) ;
extern  __attribute__((__nothrow__)) long mrand48(void) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) jrand48)(unsigned short *__xsubi ) ;
extern  __attribute__((__nothrow__)) void srand48(long __seedval ) ;
extern  __attribute__((__nothrow__)) unsigned short *( __attribute__((__nonnull__(1))) seed48)(unsigned short *__seed16v ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) lcong48)(unsigned short *__param ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) drand48_r)(struct drand48_data * __restrict  __buffer ,
                                                                                        double * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) erand48_r)(unsigned short *__xsubi ,
                                                                                        struct drand48_data * __restrict  __buffer ,
                                                                                        double * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lrand48_r)(struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) nrand48_r)(unsigned short *__xsubi ,
                                                                                        struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) mrand48_r)(struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) jrand48_r)(unsigned short *__xsubi ,
                                                                                        struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) srand48_r)(long __seedval ,
                                                                                      struct drand48_data *__buffer ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) seed48_r)(unsigned short *__seed16v ,
                                                                                       struct drand48_data *__buffer ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lcong48_r)(unsigned short *__param ,
                                                                                        struct drand48_data *__buffer ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__)) realloc)(void *__ptr ,
                                                                                              size_t __size ) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
extern  __attribute__((__nothrow__)) void cfree(void *__ptr ) ;
extern  __attribute__((__nothrow__)) void *alloca(size_t __size ) ;
extern  __attribute__((__nothrow__)) void *valloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) posix_memalign)(void **__memptr ,
                                                                                           size_t __alignment ,
                                                                                           size_t __size ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) on_exit)(void (*__func)(int __status ,
                                                                                                   void *__arg ) ,
                                                                                    void *__arg ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void _Exit(int __status ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) getenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) __secure_getenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) putenv)(char *__string ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) setenv)(char const   *__name ,
                                                                                   char const   *__value ,
                                                                                   int __replace ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) unsetenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int clearenv(void) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) mktemp)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkstemp)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkstemps)(char *__template ,
                                                       int __suffixlen ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) mkdtemp)(char *__template ) ;
extern int system(char const   *__command ) ;
extern  __attribute__((__nothrow__)) char *realpath(char const   * __restrict  __name ,
                                                    char * __restrict  __resolved ) ;
extern void *( __attribute__((__nonnull__(1,2,5))) bsearch)(void const   *__key ,
                                                            void const   *__base ,
                                                            size_t __nmemb ,
                                                            size_t __size ,
                                                            int (*__compar)(void const   * ,
                                                                            void const   * ) ) ;
extern void ( __attribute__((__nonnull__(1,4))) qsort)(void *__base ,
                                                       size_t __nmemb ,
                                                       size_t __size ,
                                                       int (*__compar)(void const   * ,
                                                                       void const   * ) ) ;
extern  __attribute__((__nothrow__)) int abs(int __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long labs(long __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long long llabs(long long __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) div_t div(int __numer , int __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) ldiv_t ldiv(long __numer , long __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) lldiv_t lldiv(long long __numer ,
                                                   long long __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) ecvt)(double __value ,
                                                                                     int __ndigit ,
                                                                                     int * __restrict  __decpt ,
                                                                                     int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) fcvt)(double __value ,
                                                                                     int __ndigit ,
                                                                                     int * __restrict  __decpt ,
                                                                                     int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3))) gcvt)(double __value ,
                                                                                   int __ndigit ,
                                                                                   char *__buf ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) qecvt)(long double __value ,
                                                                                      int __ndigit ,
                                                                                      int * __restrict  __decpt ,
                                                                                      int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) qfcvt)(long double __value ,
                                                                                      int __ndigit ,
                                                                                      int * __restrict  __decpt ,
                                                                                      int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3))) qgcvt)(long double __value ,
                                                                                    int __ndigit ,
                                                                                    char *__buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) ecvt_r)(double __value ,
                                                                                       int __ndigit ,
                                                                                       int * __restrict  __decpt ,
                                                                                       int * __restrict  __sign ,
                                                                                       char * __restrict  __buf ,
                                                                                       size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) fcvt_r)(double __value ,
                                                                                       int __ndigit ,
                                                                                       int * __restrict  __decpt ,
                                                                                       int * __restrict  __sign ,
                                                                                       char * __restrict  __buf ,
                                                                                       size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) qecvt_r)(long double __value ,
                                                                                        int __ndigit ,
                                                                                        int * __restrict  __decpt ,
                                                                                        int * __restrict  __sign ,
                                                                                        char * __restrict  __buf ,
                                                                                        size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) qfcvt_r)(long double __value ,
                                                                                        int __ndigit ,
                                                                                        int * __restrict  __decpt ,
                                                                                        int * __restrict  __sign ,
                                                                                        char * __restrict  __buf ,
                                                                                        size_t __len ) ;
extern  __attribute__((__nothrow__)) int mblen(char const   *__s , size_t __n ) ;
extern  __attribute__((__nothrow__)) int mbtowc(wchar_t * __restrict  __pwc ,
                                                char const   * __restrict  __s ,
                                                size_t __n ) ;
extern  __attribute__((__nothrow__)) int wctomb(char *__s , wchar_t __wchar ) ;
extern  __attribute__((__nothrow__)) size_t mbstowcs(wchar_t * __restrict  __pwcs ,
                                                     char const   * __restrict  __s ,
                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) size_t wcstombs(char * __restrict  __s ,
                                                     wchar_t const   * __restrict  __pwcs ,
                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) rpmatch)(char const   *__response ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) getsubopt)(char ** __restrict  __optionp ,
                                                                                          char * const  * __restrict  __tokens ,
                                                                                          char ** __restrict  __valuep ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) getloadavg)(double *__loadavg ,
                                                                                       int __nelem ) ;
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
extern int __underflow(_IO_FILE * ) ;
extern int __uflow(_IO_FILE * ) ;
extern int __overflow(_IO_FILE * , int  ) ;
extern int _IO_getc(_IO_FILE *__fp ) ;
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) int _IO_feof(_IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) int _IO_ferror(_IO_FILE *__fp ) ;
extern int _IO_peekc_locked(_IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) void _IO_flockfile(_IO_FILE * ) ;
extern  __attribute__((__nothrow__)) void _IO_funlockfile(_IO_FILE * ) ;
extern  __attribute__((__nothrow__)) int _IO_ftrylockfile(_IO_FILE * ) ;
extern int _IO_vfscanf(_IO_FILE * __restrict   , char const   * __restrict   ,
                       __gnuc_va_list  , int * __restrict   ) ;
extern int _IO_vfprintf(_IO_FILE * __restrict   , char const   * __restrict   ,
                        __gnuc_va_list  ) ;
extern __ssize_t _IO_padn(_IO_FILE * , int  , __ssize_t  ) ;
extern size_t _IO_sgetn(_IO_FILE * , void * , size_t  ) ;
extern __off64_t _IO_seekoff(_IO_FILE * , __off64_t  , int  , int  ) ;
extern __off64_t _IO_seekpos(_IO_FILE * , __off64_t  , int  ) ;
extern  __attribute__((__nothrow__)) void _IO_free_backup_area(_IO_FILE * ) ;
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern  __attribute__((__nothrow__)) int remove(char const   *__filename ) ;
extern  __attribute__((__nothrow__)) int rename(char const   *__old ,
                                                char const   *__new ) ;
extern  __attribute__((__nothrow__)) int renameat(int __oldfd ,
                                                  char const   *__old ,
                                                  int __newfd ,
                                                  char const   *__new ) ;
extern FILE *tmpfile(void) ;
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
extern int fclose(FILE *__stream ) ;
extern int fflush(FILE *__stream ) ;
extern int fflush_unlocked(FILE *__stream ) ;
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *fmemopen(void *__s , size_t __len ,
                                                    char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *open_memstream(char **__bufloc ,
                                                          size_t *__sizeloc ) ;
extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;
extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream ,
                                                    char * __restrict  __buf ,
                                                    size_t __size ) ;
extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
__inline extern int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsnprintf)(char * __restrict  __s ,
                                                                              size_t __maxlen ,
                                                                              char const   * __restrict  __format ,
                                                                              __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  vdprintf)(int __fd ,
                                               char const   * __restrict  __fmt ,
                                               __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  dprintf)(int __fd ,
                                              char const   * __restrict  __fmt 
                                              , ...) ;
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...)  __asm__("__isoc99_fscanf")  ;
extern int scanf(char const   * __restrict  __format  , ...)  __asm__("__isoc99_scanf")  ;
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...)  __asm__("__isoc99_sscanf")  ;
extern int ( /* format attribute */  vfscanf)(FILE * __restrict  __s ,
                                              char const   * __restrict  __format ,
                                              __gnuc_va_list __arg )  __asm__("__isoc99_vfscanf")  ;
extern int ( /* format attribute */  vscanf)(char const   * __restrict  __format ,
                                             __gnuc_va_list __arg )  __asm__("__isoc99_vscanf")  ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsscanf)(char const   * __restrict  __s ,
                                                                            char const   * __restrict  __format ,
                                                                            __gnuc_va_list __arg )  __asm__("__isoc99_vsscanf")  ;
extern int fgetc(FILE *__stream ) ;
extern int getc(FILE *__stream ) ;
__inline extern int getchar(void) ;
__inline extern int getc_unlocked(FILE *__fp ) ;
__inline extern int getchar_unlocked(void) ;
__inline extern int fgetc_unlocked(FILE *__fp ) ;
extern int fputc(int __c , FILE *__stream ) ;
extern int putc(int __c , FILE *__stream ) ;
__inline extern int putchar(int __c ) ;
__inline extern int fputc_unlocked(int __c , FILE *__stream ) ;
__inline extern int putc_unlocked(int __c , FILE *__stream ) ;
__inline extern int putchar_unlocked(int __c ) ;
extern int getw(FILE *__stream ) ;
extern int putw(int __w , FILE *__stream ) ;
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
extern char *gets(char *__s ) ;
extern __ssize_t __getdelim(char ** __restrict  __lineptr ,
                            size_t * __restrict  __n , int __delimiter ,
                            FILE * __restrict  __stream ) ;
extern __ssize_t getdelim(char ** __restrict  __lineptr ,
                          size_t * __restrict  __n , int __delimiter ,
                          FILE * __restrict  __stream ) ;
extern __ssize_t getline(char ** __restrict  __lineptr ,
                         size_t * __restrict  __n , FILE * __restrict  __stream ) ;
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern int puts(char const   *__s ) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size ,
                             size_t __n , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size ,
                              size_t __n , FILE * __restrict  __stream ) ;
extern int fseek(FILE *__stream , long __off , int __whence ) ;
extern long ftell(FILE *__stream ) ;
extern void rewind(FILE *__stream ) ;
extern int fseeko(FILE *__stream , __off_t __off , int __whence ) ;
extern __off_t ftello(FILE *__stream ) ;
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos ) ;
extern int fsetpos(FILE *__stream , fpos_t const   *__pos ) ;
extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
extern void perror(char const   *__s ) ;
extern int sys_nerr ;
extern char const   * const  sys_errlist[] ;
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
extern FILE *popen(char const   *__command , char const   *__modes ) ;
extern int pclose(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;
__inline extern int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) 
{ 
  int tmp ;

  {
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  return (tmp);
}
}
__inline extern int getchar(void) 
{ 
  int tmp ;

  {
  tmp = _IO_getc(stdin);
  return (tmp);
}
}
__inline extern int fgetc_unlocked(FILE *__fp ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  if (tmp___3) {
    tmp___0 = __uflow(__fp);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = __fp->_IO_read_ptr;
    (__fp->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  return (tmp___2);
}
}
__inline extern int getc_unlocked(FILE *__fp ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  if (tmp___3) {
    tmp___0 = __uflow(__fp);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = __fp->_IO_read_ptr;
    (__fp->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  return (tmp___2);
}
}
__inline extern int getchar_unlocked(void) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  tmp___3 = __builtin_expect((long )((unsigned int )stdin->_IO_read_ptr >= (unsigned int )stdin->_IO_read_end),
                             0L);
  if (tmp___3) {
    tmp___0 = __uflow(stdin);
    tmp___2 = tmp___0;
  } else {
    tmp___1 = stdin->_IO_read_ptr;
    (stdin->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  return (tmp___2);
}
}
__inline extern int putchar(int __c ) 
{ 
  int tmp ;

  {
  tmp = _IO_putc(__c, stdout);
  return (tmp);
}
}
__inline extern int fputc_unlocked(int __c , FILE *__stream ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  if (tmp___4) {
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    tmp___3 = tmp___0;
  } else {
    tmp___1 = __stream->_IO_write_ptr;
    (__stream->_IO_write_ptr) ++;
    tmp___2 = (char )__c;
    *tmp___1 = tmp___2;
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  return (tmp___3);
}
}
__inline extern int putc_unlocked(int __c , FILE *__stream ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  if (tmp___4) {
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    tmp___3 = tmp___0;
  } else {
    tmp___1 = __stream->_IO_write_ptr;
    (__stream->_IO_write_ptr) ++;
    tmp___2 = (char )__c;
    *tmp___1 = tmp___2;
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  return (tmp___3);
}
}
__inline extern int putchar_unlocked(int __c ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )stdout->_IO_write_ptr >= (unsigned int )stdout->_IO_write_end),
                             0L);
  if (tmp___4) {
    tmp___0 = __overflow(stdout, (int )((unsigned char )__c));
    tmp___3 = tmp___0;
  } else {
    tmp___1 = stdout->_IO_write_ptr;
    (stdout->_IO_write_ptr) ++;
    tmp___2 = (char )__c;
    *tmp___1 = tmp___2;
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  return (tmp___3);
}
}
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline extern int feof_unlocked(FILE *__stream ) 
{ 


  {
  return ((__stream->_flags & 16) != 0);
}
}
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
__inline extern int ferror_unlocked(FILE *__stream ) 
{ 


  {
  return ((__stream->_flags & 32) != 0);
}
}
extern int fcntl(int __fd , int __cmd  , ...) ;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file ,
                                                   int __oflag  , ...) ;
extern int ( __attribute__((__nonnull__(2))) openat)(int __fd ,
                                                     char const   *__file ,
                                                     int __oflag  , ...) ;
extern int ( __attribute__((__nonnull__(1))) creat)(char const   *__file ,
                                                    __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off_t __offset ,
                                                       __off_t __len ,
                                                       int __advise ) ;
extern int posix_fallocate(int __fd , __off_t __offset , __off_t __len ) ;
extern DIR *( __attribute__((__nonnull__(1))) opendir)(char const   *__name ) ;
extern DIR *fdopendir(int __fd ) ;
extern int ( __attribute__((__nonnull__(1))) closedir)(DIR *__dirp ) ;
extern struct dirent *( __attribute__((__nonnull__(1))) readdir)(DIR *__dirp ) ;
extern int ( __attribute__((__nonnull__(1,2,3))) readdir_r)(DIR * __restrict  __dirp ,
                                                            struct dirent * __restrict  __entry ,
                                                            struct dirent ** __restrict  __result ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) rewinddir)(DIR *__dirp ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) seekdir)(DIR *__dirp ,
                                                                                     long __pos ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) telldir)(DIR *__dirp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) dirfd)(DIR *__dirp ) ;
extern int ( __attribute__((__nonnull__(1,2))) scandir)(char const   * __restrict  __dir ,
                                                        struct dirent *** __restrict  __namelist ,
                                                        int (*__selector)(struct dirent  const  * ) ,
                                                        int (*__cmp)(struct dirent  const  ** ,
                                                                     struct dirent  const  ** ) ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) alphasort)(struct dirent  const  **__e1 ,
                                                                                        struct dirent  const  **__e2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) __ssize_t ( __attribute__((__nonnull__(2,4))) getdirentries)(int __fd ,
                                                                                                  char * __restrict  __buf ,
                                                                                                  size_t __nbytes ,
                                                                                                  __off_t * __restrict  __basep ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                            struct stat * __restrict  __statbuf ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                           struct stat *__statbuf ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) fstatat)(int __fd ,
                                                                                               char const   * __restrict  __filename ,
                                                                                               struct stat * __restrict  __statbuf ,
                                                                                               int __flag ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                             struct stat * __restrict  __statbuf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) chmod)(char const   *__file ,
                                                                                  __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) lchmod)(char const   *__file ,
                                                                                   __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int fchmod(int __fd , __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fchmodat)(int __fd ,
                                                                                     char const   *__file ,
                                                                                     __mode_t __mode ,
                                                                                     int __flag ) ;
extern  __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) mkdir)(char const   *__path ,
                                                                                  __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) mkdirat)(int __fd ,
                                                                                    char const   *__path ,
                                                                                    __mode_t __mode ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) mknod)(char const   *__path ,
                                                                                           __mode_t __mode ,
                                                                                           __dev_t __dev ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) mknodat)(int __fd ,
                                                                                             char const   *__path ,
                                                                                             __mode_t __mode ,
                                                                                             __dev_t __dev ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) mkfifo)(char const   *__path ,
                                                                                   __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) mkfifoat)(int __fd ,
                                                                                     char const   *__path ,
                                                                                     __mode_t __mode ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) utimensat)(int __fd ,
                                                                                      char const   *__path ,
                                                                                      struct timespec  const  *__times ,
                                                                                      int __flags ) ;
extern  __attribute__((__nothrow__)) int futimens(int __fd ,
                                                  struct timespec  const  *__times ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3))) __fxstat)(int __ver ,
                                                                                     int __fildes ,
                                                                                     struct stat *__stat_buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __xstat)(int __ver ,
                                                                                      char const   *__filename ,
                                                                                      struct stat *__stat_buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) __lxstat)(int __ver ,
                                                                                       char const   *__filename ,
                                                                                       struct stat *__stat_buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4))) __fxstatat)(int __ver ,
                                                                                         int __fildes ,
                                                                                         char const   *__filename ,
                                                                                         struct stat *__stat_buf ,
                                                                                         int __flag ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,4))) __xmknod)(int __ver ,
                                                                                       char const   *__path ,
                                                                                       __mode_t __mode ,
                                                                                       __dev_t *__dev ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,5))) __xmknodat)(int __ver ,
                                                                                         int __fd ,
                                                                                         char const   *__path ,
                                                                                         __mode_t __mode ,
                                                                                         __dev_t *__dev ) ;
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                                                            struct stat * __restrict  __statbuf ) ;
__inline extern int ( __attribute__((__nonnull__(1,2))) stat)(char const   * __restrict  __path ,
                                                              struct stat * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  tmp = __xstat(3, (char const   *)__path, (struct stat *)__statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                                                             struct stat * __restrict  __statbuf ) ;
__inline extern int ( __attribute__((__nonnull__(1,2))) lstat)(char const   * __restrict  __path ,
                                                               struct stat * __restrict  __statbuf ) 
{ 
  int tmp ;

  {
  tmp = __lxstat(3, (char const   *)__path, (struct stat *)__statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                                                           struct stat *__statbuf ) ;
__inline extern int ( __attribute__((__nonnull__(2))) fstat)(int __fd ,
                                                             struct stat *__statbuf ) 
{ 
  int tmp ;

  {
  tmp = __fxstat(3, __fd, __statbuf);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,3))) fstatat)(int __fd ,
                                                                                               char const   * __restrict  __filename ,
                                                                                               struct stat * __restrict  __statbuf ,
                                                                                               int __flag ) ;
__inline extern int ( __attribute__((__nonnull__(2,3))) fstatat)(int __fd ,
                                                                 char const   * __restrict  __filename ,
                                                                 struct stat * __restrict  __statbuf ,
                                                                 int __flag ) 
{ 
  int tmp ;

  {
  tmp = __fxstatat(3, __fd, (char const   *)__filename,
                   (struct stat *)__statbuf, __flag);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) mknod)(char const   *__path ,
                                                                                           __mode_t __mode ,
                                                                                           __dev_t __dev ) ;
__inline extern int ( __attribute__((__nonnull__(1))) mknod)(char const   *__path ,
                                                             __mode_t __mode ,
                                                             __dev_t __dev ) 
{ 
  int tmp ;

  {
  tmp = __xmknod(1, __path, __mode, & __dev);
  return (tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) mknodat)(int __fd ,
                                                                                             char const   *__path ,
                                                                                             __mode_t __mode ,
                                                                                             __dev_t __dev ) ;
__inline extern int ( __attribute__((__nonnull__(2))) mknodat)(int __fd ,
                                                               char const   *__path ,
                                                               __mode_t __mode ,
                                                               __dev_t __dev ) 
{ 
  int tmp ;

  {
  tmp = __xmknodat(1, __fd, __path, __mode, & __dev);
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) gettimeofday)(struct timeval * __restrict  __tv ,
                                                                                         __timezone_ptr_t __tz ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) settimeofday)(struct timeval  const  *__tv ,
                                                                                         struct timezone  const  *__tz ) ;
extern  __attribute__((__nothrow__)) int adjtime(struct timeval  const  *__delta ,
                                                 struct timeval *__olddelta ) ;
extern  __attribute__((__nothrow__)) int getitimer(__itimer_which_t __which ,
                                                   struct itimerval *__value ) ;
extern  __attribute__((__nothrow__)) int setitimer(__itimer_which_t __which ,
                                                   struct itimerval  const  * __restrict  __new ,
                                                   struct itimerval * __restrict  __old ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) utimes)(char const   *__file ,
                                                                                   struct timeval  const  *__tvp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) lutimes)(char const   *__file ,
                                                                                    struct timeval  const  *__tvp ) ;
extern  __attribute__((__nothrow__)) int futimes(int __fd ,
                                                 struct timeval  const  *__tvp ) ;
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
__inline extern int __sigismember(__sigset_t const   *__set , int __sig ) ;
__inline extern int __sigaddset(__sigset_t *__set , int __sig ) ;
__inline extern int __sigdelset(__sigset_t *__set , int __sig ) ;
__inline extern int __sigismember(__sigset_t const   *__set , int __sig ) 
{ 
  unsigned long __mask ;
  unsigned long __word ;
  int tmp ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  if (__set->__val[__word] & __mask) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  return (tmp);
}
}
__inline extern int __sigaddset(__sigset_t *__set , int __sig ) 
{ 
  unsigned long __mask ;
  unsigned long __word ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  __set->__val[__word] |= __mask;
  return (0);
}
}
__inline extern int __sigdelset(__sigset_t *__set , int __sig ) 
{ 
  unsigned long __mask ;
  unsigned long __word ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  __set->__val[__word] &= ~ __mask;
  return (0);
}
}
extern  __attribute__((__nothrow__)) __sighandler_t __sysv_signal(int __sig ,
                                                                  void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig ,
                                                           void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) int kill(__pid_t __pid , int __sig ) ;
extern  __attribute__((__nothrow__)) int killpg(__pid_t __pgrp , int __sig ) ;
extern  __attribute__((__nothrow__)) int raise(int __sig ) ;
extern  __attribute__((__nothrow__)) __sighandler_t ssignal(int __sig ,
                                                            void (*__handler)(int  ) ) ;
extern  __attribute__((__nothrow__)) int gsignal(int __sig ) ;
extern void psignal(int __sig , char const   *__s ) ;
extern void psiginfo(siginfo_t const   *__pinfo , char const   *__s ) ;
extern int __sigpause(int __sig_or_mask , int __is_sig ) ;
extern  __attribute__((__nothrow__)) int sigblock(int __mask )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int sigsetmask(int __mask )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int siggetmask(void)  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigemptyset)(sigset_t *__set ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigfillset)(sigset_t *__set ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigaddset)(sigset_t *__set ,
                                                                                      int __signo ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigdelset)(sigset_t *__set ,
                                                                                      int __signo ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigismember)(sigset_t const   *__set ,
                                                                                        int __signo ) ;
extern  __attribute__((__nothrow__)) int sigprocmask(int __how ,
                                                     sigset_t const   * __restrict  __set ,
                                                     sigset_t * __restrict  __oset ) ;
extern int ( __attribute__((__nonnull__(1))) sigsuspend)(sigset_t const   *__set ) ;
extern  __attribute__((__nothrow__)) int sigaction(int __sig ,
                                                   struct sigaction  const  * __restrict  __act ,
                                                   struct sigaction * __restrict  __oact ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) sigpending)(sigset_t *__set ) ;
extern int ( __attribute__((__nonnull__(1,2))) sigwait)(sigset_t const   * __restrict  __set ,
                                                        int * __restrict  __sig ) ;
extern int ( __attribute__((__nonnull__(1))) sigwaitinfo)(sigset_t const   * __restrict  __set ,
                                                          siginfo_t * __restrict  __info ) ;
extern int ( __attribute__((__nonnull__(1))) sigtimedwait)(sigset_t const   * __restrict  __set ,
                                                           siginfo_t * __restrict  __info ,
                                                           struct timespec  const  * __restrict  __timeout ) ;
extern  __attribute__((__nothrow__)) int sigqueue(__pid_t __pid , int __sig ,
                                                  union sigval  const  __val ) ;
extern char const   * const  _sys_siglist[65] ;
extern char const   * const  sys_siglist[65] ;
extern  __attribute__((__nothrow__)) int sigvec(int __sig ,
                                                struct sigvec  const  *__vec ,
                                                struct sigvec *__ovec ) ;
extern  __attribute__((__nothrow__)) int sigreturn(struct sigcontext *__scp ) ;
extern  __attribute__((__nothrow__)) int siginterrupt(int __sig ,
                                                      int __interrupt ) ;
extern  __attribute__((__nothrow__)) int sigstack(struct sigstack *__ss ,
                                                  struct sigstack *__oss )  __attribute__((__deprecated__)) ;
extern  __attribute__((__nothrow__)) int sigaltstack(struct sigaltstack  const  * __restrict  __ss ,
                                                     struct sigaltstack * __restrict  __oss ) ;
extern  __attribute__((__nothrow__)) int pthread_sigmask(int __how ,
                                                         __sigset_t const   * __restrict  __newmask ,
                                                         __sigset_t * __restrict  __oldmask ) ;
extern  __attribute__((__nothrow__)) int pthread_kill(pthread_t __threadid ,
                                                      int __signo ) ;
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmin(void) ;
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmax(void) ;
extern  __attribute__((__nothrow__)) void *mmap(void *__addr , size_t __len ,
                                                int __prot , int __flags ,
                                                int __fd , __off_t __offset ) ;
extern  __attribute__((__nothrow__)) int munmap(void *__addr , size_t __len ) ;
extern  __attribute__((__nothrow__)) int mprotect(void *__addr , size_t __len ,
                                                  int __prot ) ;
extern int msync(void *__addr , size_t __len , int __flags ) ;
extern  __attribute__((__nothrow__)) int madvise(void *__addr , size_t __len ,
                                                 int __advice ) ;
extern  __attribute__((__nothrow__)) int posix_madvise(void *__addr ,
                                                       size_t __len ,
                                                       int __advice ) ;
extern  __attribute__((__nothrow__)) int mlock(void const   *__addr ,
                                               size_t __len ) ;
extern  __attribute__((__nothrow__)) int munlock(void const   *__addr ,
                                                 size_t __len ) ;
extern  __attribute__((__nothrow__)) int mlockall(int __flags ) ;
extern  __attribute__((__nothrow__)) int munlockall(void) ;
extern  __attribute__((__nothrow__)) int mincore(void *__start , size_t __len ,
                                                 unsigned char *__vec ) ;
extern int shm_open(char const   *__name , int __oflag , mode_t __mode ) ;
extern int shm_unlink(char const   *__name ) ;
extern  __attribute__((__nothrow__)) long ptrace(enum __ptrace_request __request 
                                                 , ...) ;
extern  __attribute__((__nothrow__)) int getrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit *__rlimits ) ;
extern  __attribute__((__nothrow__)) int setrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit  const  *__rlimits ) ;
extern  __attribute__((__nothrow__)) int getrusage(__rusage_who_t __who ,
                                                   struct rusage *__usage ) ;
extern  __attribute__((__nothrow__)) int getpriority(__priority_which_t __which ,
                                                     id_t __who ) ;
extern  __attribute__((__nothrow__)) int setpriority(__priority_which_t __which ,
                                                     id_t __who , int __prio ) ;
extern __pid_t wait(union wait *__stat_loc ) ;
extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;
extern int waitid(idtype_t __idtype , __id_t __id , siginfo_t *__infop ,
                  int __options ) ;
extern  __attribute__((__nothrow__)) __pid_t wait3(union wait *__stat_loc ,
                                                   int __options ,
                                                   struct rusage *__usage ) ;
extern  __attribute__((__nothrow__)) __pid_t wait4(__pid_t __pid ,
                                                   union wait *__stat_loc ,
                                                   int __options ,
                                                   struct rusage *__usage ) ;
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_fail(char const   *__assertion ,
                                  char const   *__file , unsigned int __line ,
                                  char const   *__function ) ;
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_perror_fail(int __errnum , char const   *__file ,
                                         unsigned int __line ,
                                         char const   *__function ) ;
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert(char const   *__assertion , char const   *__file ,
                             int __line ) ;
extern  __attribute__((__nothrow__)) int prctl(int __option  , ...) ;
static int debuglevel  ;
static struct timeval dbgtv  ;
static char *vgdb_prefix  =    (char *)"/tmp/vgdb-pipe";
static Bool shutting_down  =    (Bool )0;
static VgdbShared32 *shared32  ;
static VgdbShared64 *shared64  ;
static void *vmalloc(size_t size ) 
{ 
  void *mem ;
  void *tmp ;
  int *tmp___0 ;

  {
  tmp = malloc(size);
  mem = tmp;
  if ((unsigned int )mem == (unsigned int )((void *)0)) {
    tmp___0 = __errno_location();
    if (*tmp___0 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"can\'t allocate memory\n");
    fflush(stderr);
    exit(1);
  } else {

  }
  return (mem);
}
}
static void *vrealloc(void *ptr , size_t size ) 
{ 
  void *mem ;
  void *tmp ;
  int *tmp___0 ;

  {
  tmp = realloc(ptr, size);
  mem = tmp;
  if ((unsigned int )mem == (unsigned int )((void *)0)) {
    tmp___0 = __errno_location();
    if (*tmp___0 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"can\'t reallocate memory\n");
    fflush(stderr);
    exit(1);
  } else {

  }
  return (mem);
}
}
static void add_written(int nrw ) 
{ 


  {
  if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
    shared32->written_by_vgdb += (int volatile   )nrw;
  } else
  if ((unsigned int )shared64 != (unsigned int )((void *)0)) {
    shared64->written_by_vgdb += (int volatile   )nrw;
  } else {
    __assert_fail("0", "vgdb.c", 169U, "add_written");
  }
  return;
}
}
static int shared_mem_fd  =    -1;
static void map_vgdbshared(char *shared_mem ) 
{ 
  struct stat fdstat ;
  void **s ;
  int *tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  void *tmp___2 ;
  int *tmp___3 ;

  {
  shared_mem_fd = open((char const   *)shared_mem, 2);
  if (shared_mem_fd == -1) {
    tmp = __errno_location();
    if (*tmp == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"error opening %s shared memory file\n",
            shared_mem);
    fflush(stderr);
    exit(1);
  } else {

  }
  tmp___1 = fstat(shared_mem_fd, & fdstat);
  if (tmp___1 != 0) {
    tmp___0 = __errno_location();
    if (*tmp___0 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"fstat");
    fflush(stderr);
    exit(1);
  } else {

  }
  if ((unsigned long )fdstat.st_size == (unsigned long )sizeof(VgdbShared64 )) {
    s = (void **)((void *)(& shared64));
  } else
  if ((unsigned long )fdstat.st_size == (unsigned long )sizeof(VgdbShared32 )) {
    s = (void **)((void *)(& shared32));
  } else {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"error size shared memory file %s.\nexpecting size %d (32bits) got %ld.\n",
            shared_mem, (int )sizeof(VgdbShared32 ), fdstat.st_size);
    fflush(stderr);
    exit(1);
  }
  if ((unsigned int )shared64 != (unsigned int )((void *)0)) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"cannot use 32 bits vgdb with a 64bits valgrind process\n");
    fflush(stderr);
    exit(1);
  } else {

  }
  tmp___2 = mmap((void *)0, (size_t )fdstat.st_size, 3, 1, shared_mem_fd,
                 (__off_t )0);
  *s = tmp___2;
  if ((unsigned int )*s == (unsigned int )((void *)-1)) {
    tmp___3 = __errno_location();
    if (*tmp___3 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"error mmap shared memory file %s\n",
            shared_mem);
    fflush(stderr);
    exit(1);
  } else {

  }
  return;
}
}
static Bool pid_of_save_regs_continued  =    (Bool )0;
static Bool dying  =    (Bool )0;
static void valgrind_dying(void) 
{ 


  {
  pid_of_save_regs_continued = (Bool )0;
  dying = (Bool )1;
  return;
}
}
static int ptrace_read_memory(pid_t inferior_pid , CORE_ADDR memaddr ,
                              unsigned char *myaddr , int len ) 
{ 
  register int i ;
  register CORE_ADDR addr ;
  register int count ;
  register PTRACE_XFER_TYPE *buffer ;
  void *tmp ;
  int *tmp___0 ;
  long tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;

  {
  addr = memaddr & - sizeof(PTRACE_XFER_TYPE );
  count = (int )(((((memaddr + (CORE_ADDR )len) - addr) + sizeof(PTRACE_XFER_TYPE )) - 1U) / sizeof(PTRACE_XFER_TYPE ));
  tmp = __builtin_alloca((unsigned int )count * sizeof(PTRACE_XFER_TYPE ));
  buffer = (PTRACE_XFER_TYPE *)tmp;
  i = 0;
  while (i < count) {
    tmp___0 = __errno_location();
    *tmp___0 = 0;
    tmp___1 = ptrace((enum __ptrace_request )1, inferior_pid,
                     (PTRACE_ARG3_TYPE )addr, 0);
    *(buffer + i) = (PTRACE_XFER_TYPE )tmp___1;
    tmp___3 = __errno_location();
    if (*tmp___3) {
      tmp___2 = __errno_location();
      return (*tmp___2);
    } else {

    }
    i ++;
    addr += sizeof(PTRACE_XFER_TYPE );
  }
  memcpy((void */* __restrict  */)myaddr,
         (void const   */* __restrict  */)((char *)buffer + (memaddr & (sizeof(PTRACE_XFER_TYPE ) - 1U))),
         (size_t )len);
  return (0);
}
}
static int ptrace_write_memory(pid_t inferior_pid , CORE_ADDR memaddr ,
                               unsigned char const   *myaddr , int len ) 
{ 
  register int i ;
  register CORE_ADDR addr ;
  register int count ;
  register PTRACE_XFER_TYPE *buffer ;
  void *tmp ;
  long tmp___0 ;
  long tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;

  {
  addr = memaddr & - sizeof(PTRACE_XFER_TYPE );
  count = (int )(((((memaddr + (CORE_ADDR )len) - addr) + sizeof(PTRACE_XFER_TYPE )) - 1U) / sizeof(PTRACE_XFER_TYPE ));
  tmp = __builtin_alloca((unsigned int )count * sizeof(PTRACE_XFER_TYPE ));
  buffer = (PTRACE_XFER_TYPE *)tmp;
  if (debuglevel >= 1) {
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Writing ");
      fflush(stderr);
    } else {

    }
    i = 0;
    while (i < len) {
      if (1 <= debuglevel) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%02x",
                (unsigned int )*(myaddr + i));
        fflush(stderr);
      } else {

      }
      i ++;
    }
    if (1 <= debuglevel) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)" to %p\n", (void *)memaddr);
      fflush(stderr);
    } else {

    }
  } else {

  }
  tmp___0 = ptrace((enum __ptrace_request )1, inferior_pid,
                   (PTRACE_ARG3_TYPE )addr, 0);
  *(buffer + 0) = (PTRACE_XFER_TYPE )tmp___0;
  if (count > 1) {
    tmp___1 = ptrace((enum __ptrace_request )1, inferior_pid,
                     (PTRACE_ARG3_TYPE )(addr + (unsigned int )(count - 1) * sizeof(PTRACE_XFER_TYPE )),
                     0);
    *(buffer + (count - 1)) = (PTRACE_XFER_TYPE )tmp___1;
  } else {

  }
  memcpy((void */* __restrict  */)((char *)buffer + (memaddr & (sizeof(PTRACE_XFER_TYPE ) - 1U))),
         (void const   */* __restrict  */)myaddr, (size_t )len);
  i = 0;
  while (i < count) {
    tmp___2 = __errno_location();
    *tmp___2 = 0;
    ptrace((enum __ptrace_request )4, inferior_pid, (PTRACE_ARG3_TYPE )addr,
           *(buffer + i));
    tmp___4 = __errno_location();
    if (*tmp___4) {
      tmp___3 = __errno_location();
      return (*tmp___3);
    } else {

    }
    i ++;
    addr += sizeof(PTRACE_XFER_TYPE );
  }
  return (0);
}
}
static VgdbThreadState vgdb_threads[500]  ;
static HChar const   *name_of_ThreadStatus(ThreadStatus status ) 
{ 


  {
  switch ((unsigned int )status) {
  case 0U: 
  return ("VgTs_Empty");
  case 1U: 
  return ("VgTs_Init");
  case 2U: 
  return ("VgTs_Runnable");
  case 3U: 
  return ("VgTs_WaitSys");
  case 4U: 
  return ("VgTs_Yielding");
  case 5U: 
  return ("VgTs_Zombie");
  default: 
  return ("VgTs_???");
  }
}
}
static char result[256]  ;
static char *status_image(int status ) 
{ 
  int sz ;
  union __anonunion_177 __constr_expr_0 ;
  int tmp ;
  union __anonunion_178 __constr_expr_1 ;
  union __anonunion_179 __constr_expr_2 ;
  int tmp___0 ;
  int tmp___1 ;
  union __anonunion_180 __constr_expr_3 ;
  union __anonunion_181 __constr_expr_4 ;
  union __anonunion_182 __constr_expr_5 ;
  int tmp___2 ;
  union __anonunion_183 __constr_expr_6 ;
  int tmp___3 ;
  union __anonunion_184 __constr_expr_7 ;

  {
  sz = 0;
  result[0] = (char)0;
  __constr_expr_1.__in = status;
  if ((__constr_expr_1.__i & 127) == 0) {
    __constr_expr_0.__in = status;
    tmp = snprintf((char */* __restrict  */)(result + sz),
                   (size_t )((256 - sz) - 1),
                   (char const   */* __restrict  */)"WIFEXITED %d ",
                   (__constr_expr_0.__i & 65280) >> 8);
    sz += tmp;
  } else {

  }
  __constr_expr_4.__in = status;
  if ((int )((signed char )((__constr_expr_4.__i & 127) + 1)) >> 1 > 0) {
    __constr_expr_2.__in = status;
    tmp___0 = snprintf((char */* __restrict  */)(result + sz),
                       (size_t )((256 - sz) - 1),
                       (char const   */* __restrict  */)"WIFSIGNALED %d ",
                       __constr_expr_2.__i & 127);
    sz += tmp___0;
    __constr_expr_3.__in = status;
    if (__constr_expr_3.__i & 128) {
      tmp___1 = snprintf((char */* __restrict  */)(result + sz),
                         (size_t )((256 - sz) - 1),
                         (char const   */* __restrict  */)"WCOREDUMP ");
      sz += tmp___1;
    } else {

    }
  } else {

  }
  __constr_expr_6.__in = status;
  if ((__constr_expr_6.__i & 255) == 127) {
    __constr_expr_5.__in = status;
    tmp___2 = snprintf((char */* __restrict  */)(result + sz),
                       (size_t )((256 - sz) - 1),
                       (char const   */* __restrict  */)"WIFSTOPPED %d ",
                       (__constr_expr_5.__i & 65280) >> 8);
    sz += tmp___2;
  } else {

  }
  __constr_expr_7.__in = status;
  if (__constr_expr_7.__i == 65535) {
    tmp___3 = snprintf((char */* __restrict  */)(result + sz),
                       (size_t )((256 - sz) - 1),
                       (char const   */* __restrict  */)"WIFCONTINUED ");
    sz += tmp___3;
  } else {

  }
  return (result);
}
}
static Bool waitstopped(int pid , int signal_expected , char *msg ) 
{ 
  pid_t p ;
  int status ;
  int signal_received ;
  int res ;
  char *tmp ;
  int *tmp___0 ;
  char *tmp___1 ;
  union __anonunion_185 __constr_expr_0 ;
  union __anonunion_186 __constr_expr_1 ;
  union __anonunion_187 __constr_expr_2 ;
  long tmp___2 ;
  int *tmp___3 ;

  {
  status = 0;
  while (1) {
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"waitstopped %s before waitpid signal_expected %d\n",
              msg, signal_expected);
      fflush(stderr);
    } else {

    }
    p = waitpid(pid, & status, 1073741824);
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      tmp = status_image(status);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"after waitpid pid %d p %d status 0x%x %s\n",
              pid, p, status, tmp);
      fflush(stderr);
    } else {

    }
    if (p != pid) {
      tmp___0 = __errno_location();
      if (*tmp___0 == 0) {

      } else {
        perror("syscall failed");
      }
      tmp___1 = status_image(status);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%s waitpid pid %d in waitstopped %d status 0x%x %s\n",
              msg, pid, p, status, tmp___1);
      fflush(stderr);
      return ((Bool )0);
    } else {

    }
    __constr_expr_0.__in = status;
    if ((__constr_expr_0.__i & 127) == 0) {
      shutting_down = (Bool )1;
      return ((Bool )0);
    } else {

    }
    __constr_expr_1.__in = status;
    if ((__constr_expr_1.__i & 255) == 127) {

    } else {
      __assert_fail("((((__extension__ (((union { __typeof(status) __in; int __i; }) { .__in = (status) }).__i))) & 0xff) == 0x7f)",
                    "vgdb.c", 435U, "waitstopped");
    }
    __constr_expr_2.__in = status;
    signal_received = (__constr_expr_2.__i & 65280) >> 8;
    if (signal_received == signal_expected) {
      break;
    } else {

    }
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"waitstopped PTRACE_CONT with signal %d\n",
              signal_received);
      fflush(stderr);
    } else {

    }
    tmp___2 = ptrace((enum __ptrace_request )7, pid, (void *)0, signal_received);
    res = (int )tmp___2;
    if (res != 0) {
      tmp___3 = __errno_location();
      if (*tmp___3 == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"waitstopped PTRACE_CONT\n");
      fflush(stderr);
      return ((Bool )0);
    } else {

    }
  }
  return ((Bool )1);
}
}
static Bool stop(int pid , char *msg ) 
{ 
  long res ;
  int tmp ;
  int *tmp___0 ;
  Bool tmp___1 ;

  {
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s SIGSTOP pid %d\n", msg, pid);
    fflush(stderr);
  } else {

  }
  tmp = kill(pid, 19);
  res = (long )tmp;
  if (res != 0L) {
    tmp___0 = __errno_location();
    if (*tmp___0 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s SIGSTOP pid %d %ld\n", msg,
            pid, res);
    fflush(stderr);
    return ((Bool )0);
  } else {

  }
  tmp___1 = waitstopped(pid, 19, msg);
  return (tmp___1);
}
}
static Bool attach(int pid , char *msg ) 
{ 
  long res ;
  int *tmp ;
  Bool tmp___0 ;

  {
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s PTRACE_ATTACH pid %d\n", msg,
            pid);
    fflush(stderr);
  } else {

  }
  res = ptrace((enum __ptrace_request )16, pid, (void *)0, (void *)0);
  if (res != 0L) {
    tmp = __errno_location();
    if (*tmp == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%s PTRACE_ATTACH pid %d %ld\n",
            msg, pid, res);
    fflush(stderr);
    return ((Bool )0);
  } else {

  }
  tmp___0 = waitstopped(pid, 19, msg);
  return (tmp___0);
}
}
static Bool acquire_and_suspend_threads(int pid ) 
{ 
  int i ;
  int rw ;
  Bool pid_found ;
  Addr vgt ;
  int sz_tst ;
  int off_status ;
  int off_lwpid ;
  int nr_live_threads ;
  HChar const   *tmp ;
  HChar const   *tmp___0 ;
  HChar const   *tmp___1 ;
  Bool tmp___2 ;

  {
  pid_found = (Bool )0;
  nr_live_threads = 0;
  if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
    vgt = (Addr )shared32->threads;
    sz_tst = shared32->sizeof_ThreadState;
    off_status = shared32->offset_status;
    off_lwpid = shared32->offset_lwpid;
  } else
  if ((unsigned int )shared64 != (unsigned int )((void *)0)) {
    vgt = (Addr )shared64->threads;
    sz_tst = shared64->sizeof_ThreadState;
    off_status = shared64->offset_status;
    off_lwpid = shared64->offset_lwpid;
  } else {
    __assert_fail("0", "vgdb.c", 517U, "acquire_and_suspend_threads");
  }
  i = 1;
  while (i < 500) {
    vgt += (Addr )sz_tst;
    rw = ptrace_read_memory(pid, (CORE_ADDR )(vgt + (Addr )off_status),
                            (unsigned char *)(& vgdb_threads[i].status),
                            (int )sizeof(ThreadStatus ));
    if (rw != 0) {
      if (rw == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"status ptrace_read_memory\n");
      fflush(stderr);
      return ((Bool )0);
    } else {

    }
    rw = ptrace_read_memory(pid, (CORE_ADDR )(vgt + (Addr )off_lwpid),
                            (unsigned char *)(& vgdb_threads[i].lwpid),
                            (int )sizeof(Int ));
    if (rw != 0) {
      if (rw == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"lwpid ptrace_read_memory\n");
      fflush(stderr);
      return ((Bool )0);
    } else {

    }
    if ((unsigned int )vgdb_threads[i].status != 0U) {
      if (1 <= debuglevel) {
        gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                     (__timezone_ptr_t )((void *)0));
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                dbgtv.tv_usec);
        tmp = name_of_ThreadStatus(vgdb_threads[i].status);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"found tid %d status %s lwpid %d\n",
                i, tmp, vgdb_threads[i].lwpid);
        fflush(stderr);
      } else {

      }
      nr_live_threads ++;
      if (vgdb_threads[i].lwpid <= 1) {
        if (vgdb_threads[i].lwpid == 0) {
          if ((unsigned int )vgdb_threads[i].status == 1U) {
            if (1 <= debuglevel) {
              gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                           (__timezone_ptr_t )((void *)0));
              fprintf((FILE */* __restrict  */)stderr,
                      (char const   */* __restrict  */)"%ld.%6.6ld ",
                      dbgtv.tv_sec, dbgtv.tv_usec);
              tmp___0 = name_of_ThreadStatus(vgdb_threads[i].status);
              fprintf((FILE */* __restrict  */)stderr,
                      (char const   */* __restrict  */)"not set lwpid tid %d status %s lwpid %d\n",
                      i, tmp___0, vgdb_threads[i].lwpid);
              fflush(stderr);
            } else {

            }
          } else {
            perror("syscall failed");
            tmp___1 = name_of_ThreadStatus(vgdb_threads[i].status);
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"unexpected lwpid tid %d status %s lwpid %d\n",
                    i, tmp___1, vgdb_threads[i].lwpid);
            fflush(stderr);
          }
        } else {
          perror("syscall failed");
          tmp___1 = name_of_ThreadStatus(vgdb_threads[i].status);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"unexpected lwpid tid %d status %s lwpid %d\n",
                  i, tmp___1, vgdb_threads[i].lwpid);
          fflush(stderr);
        }
        return ((Bool )0);
      } else {

      }
      if (vgdb_threads[i].lwpid == pid) {
        if (! pid_found) {

        } else {
          __assert_fail("!pid_found", "vgdb.c", 560U,
                        "acquire_and_suspend_threads");
        }
        if (i == 1) {

        } else {
          __assert_fail("i == 1", "vgdb.c", 561U, "acquire_and_suspend_threads");
        }
        pid_found = (Bool )1;
      } else {
        tmp___2 = attach(vgdb_threads[i].lwpid, (char *)"attach_thread");
        if (tmp___2) {

        } else {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"ERROR attach pid %d tid %d\n",
                  vgdb_threads[i].lwpid, i);
          fflush(stderr);
          return ((Bool )0);
        }
      }
    } else {

    }
    i ++;
  }
  if (nr_live_threads > 0) {
    return ((Bool )1);
  } else {
    return ((Bool )0);
  }
}
}
static void detach_from_all_threads(int pid ) 
{ 
  int i ;
  long res ;
  Bool pid_found ;
  HChar const   *tmp ;
  HChar const   *tmp___0 ;
  int *tmp___1 ;
  HChar const   *tmp___2 ;
  int *tmp___3 ;

  {
  pid_found = (Bool )0;
  i = 1;
  while (i < 500) {
    if ((unsigned int )vgdb_threads[i].status != 0U) {
      if ((unsigned int )vgdb_threads[i].status == 1U) {
        if (vgdb_threads[i].lwpid == 0) {
          if (1 <= debuglevel) {
            gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                         (__timezone_ptr_t )((void *)0));
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"%ld.%6.6ld ",
                    dbgtv.tv_sec, dbgtv.tv_usec);
            tmp = name_of_ThreadStatus(vgdb_threads[i].status);
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"skipping PTRACE_DETACH pid %d tid %d status %s\n",
                    vgdb_threads[i].lwpid, i, tmp);
            fflush(stderr);
          } else {

          }
        } else {
          goto _L;
        }
      } else {
        _L: /* CIL Label */ 
        if (vgdb_threads[i].lwpid == pid) {
          if (! pid_found) {

          } else {
            __assert_fail("!pid_found", "vgdb.c", 597U,
                          "detach_from_all_threads");
          }
          pid_found = (Bool )1;
        } else {

        }
        if (1 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          tmp___0 = name_of_ThreadStatus(vgdb_threads[i].status);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"PTRACE_DETACH pid %d tid %d status %s\n",
                  vgdb_threads[i].lwpid, i, tmp___0);
          fflush(stderr);
        } else {

        }
        res = ptrace((enum __ptrace_request )17, vgdb_threads[i].lwpid,
                     (void *)0, (void *)0);
        if (res != 0L) {
          tmp___1 = __errno_location();
          if (*tmp___1 == 0) {

          } else {
            perror("syscall failed");
          }
          tmp___2 = name_of_ThreadStatus(vgdb_threads[i].status);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"PTRACE_DETACH pid %d tid %d status %s res %ld\n",
                  vgdb_threads[i].lwpid, i, tmp___2, res);
          fflush(stderr);
        } else {

        }
      }
    } else {

    }
    i ++;
  }
  if (! pid_found) {
    if (pid) {
      if (1 <= debuglevel) {
        gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                     (__timezone_ptr_t )((void *)0));
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                dbgtv.tv_usec);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"no thread live => PTRACE_DETACH pid %d\n",
                pid);
        fflush(stderr);
      } else {

      }
      res = ptrace((enum __ptrace_request )17, pid, (void *)0, (void *)0);
      if (res != 0L) {
        tmp___3 = __errno_location();
        if (*tmp___3 == 0) {

        } else {
          perror("syscall failed");
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"PTRACE_DETACH pid %d res %ld\n",
                pid, res);
        fflush(stderr);
      } else {

      }
    } else {

    }
  } else {

  }
  return;
}
}
static int pid_of_save_regs  =    0;
static struct user user_save  ;
static int has_working_ptrace_getregs  =    -1;
static Bool getregs(int pid , void *regs , long regs_bsz ) 
{ 
  long res ;
  int *tmp ;
  int *tmp___0 ;
  int *tmp___1 ;
  long peek_bsz ;
  char *pregs ;
  long offset ;
  int *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;

  {
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"getregs regs_bsz %ld\n", regs_bsz);
    fflush(stderr);
  } else {

  }
  if (has_working_ptrace_getregs) {
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"getregs PTRACE_GETREGS\n");
      fflush(stderr);
    } else {

    }
    res = ptrace((enum __ptrace_request )12, pid, (void *)0, regs);
    if (res == 0L) {
      if (has_working_ptrace_getregs == -1) {
        has_working_ptrace_getregs = 1;
        if (1 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"detected a working PTRACE_GETREGS\n");
          fflush(stderr);
        } else {

        }
      } else {

      }
      if (has_working_ptrace_getregs == 1) {

      } else {
        __assert_fail("has_working_ptrace_getregs == 1", "vgdb.c", 659U,
                      "getregs");
      }
      return ((Bool )1);
    } else
    if (has_working_ptrace_getregs == 1) {
      tmp = __errno_location();
      if (*tmp == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"PTRACE_GETREGS %ld\n", res);
      fflush(stderr);
      return ((Bool )0);
    } else {
      if (has_working_ptrace_getregs == -1) {

      } else {
        __assert_fail("has_working_ptrace_getregs == -1", "vgdb.c", 669U,
                      "getregs");
      }
      tmp___1 = __errno_location();
      if (*tmp___1 == 5) {
        if (1 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"detected a broken PTRACE_GETREGS with EIO\n");
          fflush(stderr);
        } else {

        }
        has_working_ptrace_getregs = 0;
      } else {
        tmp___0 = __errno_location();
        if (*tmp___0 == 0) {

        } else {
          perror("syscall failed");
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"broken PTRACE_GETREGS unexpected errno %ld\n",
                res);
        fflush(stderr);
        return ((Bool )0);
      }
    }
  } else {

  }
  peek_bsz = regs_bsz - 1L;
  pregs = (char *)regs;
  tmp___2 = __errno_location();
  *tmp___2 = 0;
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"getregs PTRACE_PEEKUSER(s) peek_bsz %ld\n",
            peek_bsz);
    fflush(stderr);
  } else {

  }
  offset = 0L;
  while (offset < peek_bsz) {
    *((long *)(pregs + offset)) = ptrace((enum __ptrace_request )3, pid, offset,
                                         (void *)0);
    tmp___4 = __errno_location();
    if (*tmp___4 != 0) {
      tmp___3 = __errno_location();
      if (*tmp___3 == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"PTRACE_PEEKUSER offset %ld\n",
              offset);
      fflush(stderr);
      return ((Bool )0);
    } else {

    }
    offset = (long )((unsigned long )offset + (unsigned long )sizeof(long ));
  }
  return ((Bool )1);
  __assert_fail("0", "vgdb.c", 706U, "getregs");
}
}
static Bool setregs(int pid , void *regs , long regs_bsz ) 
{ 
  long res ;
  int *tmp ;
  char *pregs ;
  long offset ;
  long res___0 ;
  long peek_bsz ;
  int *tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;

  {
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"setregs regs_bsz %ld\n", regs_bsz);
    fflush(stderr);
  } else {

  }
  if (has_working_ptrace_getregs) {
    if (has_working_ptrace_getregs == 1) {

    } else {
      __assert_fail("has_working_ptrace_getregs == 1", "vgdb.c", 723U, "setregs");
    }
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"setregs PTRACE_SETREGS\n");
      fflush(stderr);
    } else {

    }
    res = ptrace((enum __ptrace_request )13, pid, (void *)0, regs);
    if (res != 0L) {
      tmp = __errno_location();
      if (*tmp == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"PTRACE_SETREGS %ld\n", res);
      fflush(stderr);
      return ((Bool )0);
    } else {

    }
    return ((Bool )1);
  } else {

  }
  pregs = (char *)regs;
  peek_bsz = regs_bsz - 1L;
  tmp___0 = __errno_location();
  *tmp___0 = 0;
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"setregs PTRACE_POKEUSER(s) %ld\n",
            peek_bsz);
    fflush(stderr);
  } else {

  }
  offset = 0L;
  while (offset < peek_bsz) {
    res___0 = ptrace((enum __ptrace_request )6, pid, offset,
                     *((long *)(pregs + offset)));
    tmp___2 = __errno_location();
    if (*tmp___2 != 0) {
      tmp___1 = __errno_location();
      if (*tmp___1 == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"PTRACE_POKEUSER offset %ld res %ld\n",
              offset, res___0);
      fflush(stderr);
      return ((Bool )0);
    } else {

    }
    offset = (long )((unsigned long )offset + (unsigned long )sizeof(long ));
  }
  return ((Bool )1);
  __assert_fail("0", "vgdb.c", 758U, "setregs");
}
}
static void restore_and_detach(int pid ) 
{ 
  Bool tmp ;
  int *tmp___0 ;
  Bool tmp___1 ;

  {
  if (pid_of_save_regs) {
    if (pid_of_save_regs_continued) {
      pid_of_save_regs_continued = (Bool )0;
      tmp = stop(pid_of_save_regs, (char *)"sigstop before reset regs");
      if (tmp) {

      } else
      if (0 <= debuglevel) {
        gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                     (__timezone_ptr_t )((void *)0));
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                dbgtv.tv_usec);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"Could not sigstop before reset");
        fflush(stderr);
      } else {

      }
    } else {

    }
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"setregs restore registers pid %d\n",
              pid_of_save_regs);
      fflush(stderr);
    } else {

    }
    tmp___1 = setregs(pid_of_save_regs, (void *)(& user_save.regs),
                      (long )sizeof(user_save.regs));
    if (tmp___1) {

    } else {
      tmp___0 = __errno_location();
      if (*tmp___0 == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"setregs restore registers pid %d after cont\n",
              pid_of_save_regs);
      fflush(stderr);
    }
    pid_of_save_regs = 0;
  } else
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"PTRACE_SETREGS restore registers: no pid\n");
    fflush(stderr);
  } else {

  }
  detach_from_all_threads(pid);
  return;
}
}
static Bool invoke_gdbserver(int pid ) 
{ 
  long res ;
  Bool stopped ;
  struct user user_mod ;
  Addr sp ;
  int check ;
  Addr bad_return ;
  Bool tmp ;
  int *tmp___0 ;
  int tmp___1 ;
  Bool tmp___2 ;
  Bool tmp___3 ;
  int regsize ;
  int rw ;
  Bool tmp___4 ;
  int *tmp___5 ;

  {
  check = -1951535091;
  bad_return = (Addr )0;
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"attach to \'main\' pid %d\n", pid);
    fflush(stderr);
  } else {

  }
  tmp = attach(pid, (char *)"attach main pid");
  if (tmp) {

  } else {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"error attach main pid %d\n", pid);
    fflush(stderr);
    return ((Bool )0);
  }
  tmp___2 = acquire_and_suspend_threads(pid);
  if (tmp___2) {

  } else {
    detach_from_all_threads(pid);
    tmp___1 = kill(pid, 0);
    if (tmp___1 != 0) {
      tmp___0 = __errno_location();
      if (*tmp___0 == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"invoke_gdbserver: check for pid %d existence failed\n",
              pid);
      fflush(stderr);
      exit(1);
    } else {

    }
    return ((Bool )0);
  }
  tmp___3 = getregs(pid, (void *)(& user_mod.regs), (long )sizeof(user_mod.regs));
  if (tmp___3) {

  } else {
    detach_from_all_threads(pid);
    return ((Bool )0);
  }
  user_save = user_mod;
  sp = (Addr )user_mod.regs.esp;
  if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
    regsize = 4;
    sp -= (Addr )regsize;
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"push check arg ptrace_write_memory\n");
      fflush(stderr);
    } else {

    }
    if ((unsigned int )regsize == sizeof(check)) {

    } else {
      __assert_fail("regsize == sizeof(check)", "vgdb.c", 874U,
                    "invoke_gdbserver");
    }
    rw = ptrace_write_memory(pid, (CORE_ADDR )sp,
                             (unsigned char const   *)((unsigned char *)(& check)),
                             regsize);
    if (rw != 0) {
      if (rw == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"push check arg ptrace_write_memory");
      fflush(stderr);
      detach_from_all_threads(pid);
      return ((Bool )0);
    } else {

    }
    sp -= (Addr )regsize;
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"push bad_return return address ptrace_write_memory\n");
      fflush(stderr);
    } else {

    }
    rw = ptrace_write_memory(pid, (CORE_ADDR )sp,
                             (unsigned char const   *)((unsigned char *)(& bad_return)),
                             regsize);
    if (rw != 0) {
      if (rw == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"push bad_return return address ptrace_write_memory");
      fflush(stderr);
      detach_from_all_threads(pid);
      return ((Bool )0);
    } else {

    }
    user_mod.regs.ebp = (long )sp;
    user_mod.regs.esp = (long )sp;
    user_mod.regs.eip = (long )shared32->invoke_gdbserver;
    user_mod.regs.orig_eax = -1L;
  } else
  if ((unsigned int )shared64 != (unsigned int )((void *)0)) {
    __assert_fail("0", "vgdb.c", 938U, "invoke_gdbserver");
  } else {
    __assert_fail("0", "vgdb.c", 1015U, "invoke_gdbserver");
  }
  tmp___4 = setregs(pid, (void *)(& user_mod.regs), (long )sizeof(user_mod.regs));
  if (tmp___4) {

  } else {
    detach_from_all_threads(pid);
    return ((Bool )0);
  }
  pid_of_save_regs = pid;
  pid_of_save_regs_continued = (Bool )0;
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"PTRACE_CONT to invoke\n");
    fflush(stderr);
  } else {

  }
  res = ptrace((enum __ptrace_request )7, pid, (void *)0, (void *)0);
  if (res != 0L) {
    tmp___5 = __errno_location();
    if (*tmp___5 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"PTRACE_CONT\n");
    fflush(stderr);
    restore_and_detach(pid);
    return ((Bool )0);
  } else {

  }
  pid_of_save_regs_continued = (Bool )1;
  stopped = waitstopped(pid, 5,
                        (char *)"waitpid status after PTRACE_CONT to invoke");
  if (stopped) {
    pid_of_save_regs_continued = (Bool )0;
    restore_and_detach(pid);
    return ((Bool )1);
  } else {
    shutting_down = (Bool )1;
    return ((Bool )0);
  }
}
}
static void cleanup_restore_and_detach(void *v_pid ) 
{ 


  {
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"cleanup_restore_and_detach dying: %d\n",
            (int )dying);
    fflush(stderr);
  } else {

  }
  if (! dying) {
    restore_and_detach(*((int *)v_pid));
  } else {

  }
  return;
}
}
static int max_invoke_ms  =    100;
static void *invoke_gdbserver_in_valgrind(void *v_pid ) 
{ 
  int pid ;
  int written_by_vgdb_before_sleep ;
  int seen_by_valgrind_before_sleep ;
  int invoked_written ;
  __pthread_unwind_buf_t __cancel_buf ;
  void (*__cancel_routine)(void * ) ;
  void *__cancel_arg ;
  int not_first_call ;
  int tmp ;
  long tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  int tmp___3 ;
  int volatile   tmp___4 ;
  int volatile   tmp___5 ;
  int *tmp___6 ;
  int tmp___7 ;
  Bool tmp___8 ;
  int volatile   tmp___9 ;
  int volatile   tmp___10 ;
  int volatile   tmp___11 ;
  int volatile   tmp___12 ;

  {
  pid = *((int *)v_pid);
  invoked_written = -1;
  while (1) {
    __cancel_routine = & cleanup_restore_and_detach;
    __cancel_arg = v_pid;
    tmp = __sigsetjmp((struct __jmp_buf_tag *)((struct __jmp_buf_tag *)((void *)(__cancel_buf.__cancel_jmp_buf))),
                      0);
    not_first_call = tmp;
    tmp___0 = __builtin_expect((long )not_first_call, 0L);
    if (tmp___0) {
      (*__cancel_routine)(__cancel_arg);
      __pthread_unwind_next(& __cancel_buf);
    } else {

    }
    __pthread_register_cancel(& __cancel_buf);
    while (1) {
      while (! shutting_down) {
        if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
          written_by_vgdb_before_sleep = (int )shared32->written_by_vgdb;
        } else {
          written_by_vgdb_before_sleep = (int )shared64->written_by_vgdb;
        }
        if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
          seen_by_valgrind_before_sleep = (int )shared32->seen_by_valgrind;
        } else {
          seen_by_valgrind_before_sleep = (int )shared64->seen_by_valgrind;
        }
        if (3 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"written_by_vgdb_before_sleep %d seen_by_valgrind_before_sleep %d\n",
                  written_by_vgdb_before_sleep, seen_by_valgrind_before_sleep);
          fflush(stderr);
        } else {

        }
        tmp___3 = usleep((__useconds_t )(1000 * max_invoke_ms));
        if (tmp___3 != 0) {
          tmp___1 = __errno_location();
          if (*tmp___1 == 4) {
            continue;
          } else {

          }
          tmp___2 = __errno_location();
          if (*tmp___2 == 0) {

          } else {
            perror("syscall failed");
          }
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"error usleep\n");
          fflush(stderr);
          exit(1);
        } else {

        }
        if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
          tmp___9 = shared32->written_by_vgdb;
        } else {
          tmp___9 = shared64->written_by_vgdb;
        }
        if (written_by_vgdb_before_sleep == (int )tmp___9) {
          if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
            tmp___10 = shared32->seen_by_valgrind;
          } else {
            tmp___10 = shared64->seen_by_valgrind;
          }
          if (seen_by_valgrind_before_sleep == (int )tmp___10) {
            if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
              tmp___11 = shared32->written_by_vgdb;
            } else {
              tmp___11 = shared64->written_by_vgdb;
            }
            if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
              tmp___12 = shared32->seen_by_valgrind;
            } else {
              tmp___12 = shared64->seen_by_valgrind;
            }
            if (tmp___11 > tmp___12) {
              if (2 <= debuglevel) {
                gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                             (__timezone_ptr_t )((void *)0));
                fprintf((FILE */* __restrict  */)stderr,
                        (char const   */* __restrict  */)"%ld.%6.6ld ",
                        dbgtv.tv_sec, dbgtv.tv_usec);
                if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
                  tmp___4 = shared32->seen_by_valgrind;
                } else {
                  tmp___4 = shared64->seen_by_valgrind;
                }
                if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
                  tmp___5 = shared32->written_by_vgdb;
                } else {
                  tmp___5 = shared64->written_by_vgdb;
                }
                fprintf((FILE */* __restrict  */)stderr,
                        (char const   */* __restrict  */)"after sleep written_by_vgdb %d seen_by_valgrind %d invoked_written %d\n",
                        tmp___5, tmp___4, invoked_written);
                fflush(stderr);
              } else {

              }
              tmp___7 = kill(pid, 0);
              if (tmp___7 != 0) {
                tmp___6 = __errno_location();
                if (*tmp___6 == 0) {

                } else {
                  perror("syscall failed");
                }
                fprintf((FILE */* __restrict  */)stderr,
                        (char const   */* __restrict  */)"invoke_gdbserver_in_valgrind: check for pid %d existence failed\n",
                        pid);
                fflush(stderr);
                exit(1);
              } else {

              }
              if (invoked_written != written_by_vgdb_before_sleep) {
                tmp___8 = invoke_gdbserver(pid);
                if (tmp___8) {
                  invoked_written = written_by_vgdb_before_sleep;
                } else {

                }
              } else {

              }
            } else {

            }
          } else {

          }
        } else {

        }
      }
      while (1) {
        break;
      }
      break;
    }
    __pthread_unregister_cancel(& __cancel_buf);
    break;
  }
  return ((void *)0);
}
}
static int open_fifo(char *name , int flags , char *desc ) 
{ 
  int fd ;
  int *tmp ;

  {
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"opening %s %s\n", name, desc);
    fflush(stderr);
  } else {

  }
  fd = open((char const   *)name, flags);
  if (fd == -1) {
    tmp = __errno_location();
    if (*tmp == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"error opening %s %s\n", name, desc);
    fflush(stderr);
    exit(1);
  } else {

  }
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"opened %s %s fd %d\n", name, desc,
            fd);
    fflush(stderr);
  } else {

  }
  return (fd);
}
}
static void acquire_lock(int fd , int valgrind_pid ) 
{ 
  int *tmp ;
  int tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;

  {
  tmp___4 = lockf(fd, 2, (__off_t )1);
  if (tmp___4 < 0) {
    tmp___2 = __errno_location();
    if (*tmp___2 == 11) {
      goto _L;
    } else {
      tmp___3 = __errno_location();
      if (*tmp___3 == 13) {
        _L: /* CIL Label */ 
        tmp = __errno_location();
        if (*tmp == 0) {

        } else {
          perror("syscall failed");
        }
        if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
          tmp___0 = shared32->vgdb_pid;
        } else {
          tmp___0 = shared64->vgdb_pid;
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"Cannot acquire lock.\nProbably vgdb pid %d already speaks with Valgrind pid %d\n",
                tmp___0, valgrind_pid);
        fflush(stderr);
        exit(1);
      } else {
        tmp___1 = __errno_location();
        if (*tmp___1 == 0) {

        } else {
          perror("syscall failed");
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"cannot acquire lock.\n");
        fflush(stderr);
        exit(1);
      }
    }
  } else {

  }
  if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
    shared32->vgdb_pid = getpid();
  } else
  if ((unsigned int )shared64 != (unsigned int )((void *)0)) {
    shared64->vgdb_pid = getpid();
  } else {
    __assert_fail("0", "vgdb.c", 1177U, "acquire_lock");
  }
  return;
}
}
static int read_buf(int fd , char *buf , char *desc ) 
{ 
  int nrread ;
  int *tmp ;

  {
  if (2 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"reading %s\n", desc);
    fflush(stderr);
  } else {

  }
  nrread = read(fd, (void *)buf, (size_t )16384);
  if (nrread == -1) {
    tmp = __errno_location();
    if (*tmp == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"error reading %s\n", desc);
    fflush(stderr);
    return (-1);
  } else {

  }
  *(buf + nrread) = (char )'\000';
  if (2 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"read %s %s\n", desc, buf);
    fflush(stderr);
  } else {

  }
  return (nrread);
}
}
static Bool write_buf(int fd , char *buf , int size , char *desc , Bool notify ) 
{ 
  int nrwritten ;
  int nrw ;
  int *tmp ;

  {
  if (2 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"writing %s len %d %s notify: %d\n",
            desc, size, buf, (int )notify);
    fflush(stderr);
  } else {

  }
  nrwritten = 0;
  while (nrwritten < size) {
    nrw = write(fd, (void const   *)(buf + nrwritten),
                (size_t )(size - nrwritten));
    if (nrw == -1) {
      tmp = __errno_location();
      if (*tmp == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"error write %s\n", desc);
      fflush(stderr);
      return ((Bool )0);
    } else {

    }
    nrwritten += nrw;
    if (notify) {
      add_written(nrw);
    } else {

    }
  }
  return ((Bool )1);
}
}
static int const   NumConnectionKind  =    (int const   )4;
static char *ppConnectionKind(ConnectionKind con ) 
{ 


  {
  switch ((unsigned int )con) {
  case 0U: 
  return ((char *)"FROM_GDB");
  case 1U: 
  return ((char *)"TO_GDB");
  case 2U: 
  return ((char *)"FROM_PID");
  case 3U: 
  return ((char *)"TO_PID");
  default: 
  return ((char *)"invalid connection kind");
  }
}
}
static char *shared_mem  ;
static int const   from_gdb  =    (int const   )0;
static char *from_gdb_to_pid  ;
static Bool read_from_gdb_write_to_pid(int to_pid ) 
{ 
  char buf[16384] ;
  int nrread ;
  Bool tmp ;

  {
  nrread = read_buf((int )from_gdb, buf, (char *)"from gdb on stdin");
  if (nrread <= 0) {
    if (nrread == 0) {
      if (1 <= debuglevel) {
        gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                     (__timezone_ptr_t )((void *)0));
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                dbgtv.tv_usec);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"read 0 bytes from gdb => assume exit\n");
        fflush(stderr);
      } else {

      }
    } else
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"error reading bytes from gdb\n");
      fflush(stderr);
    } else {

    }
    close((int )from_gdb);
    shutting_down = (Bool )1;
    return ((Bool )0);
  } else {

  }
  tmp = write_buf(to_pid, buf, nrread, (char *)"to_pid", (Bool )1);
  return (tmp);
}
}
static int const   to_gdb  =    (int const   )1;
static char *to_gdb_from_pid  ;
static Bool read_from_pid_write_to_gdb(int from_pid ) 
{ 
  char buf[16384] ;
  int nrread ;
  Bool tmp ;

  {
  nrread = read_buf(from_pid, buf, (char *)"from pid");
  if (nrread <= 0) {
    if (nrread == 0) {
      if (1 <= debuglevel) {
        gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                     (__timezone_ptr_t )((void *)0));
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                dbgtv.tv_usec);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"read 0 bytes from pid => assume exit\n");
        fflush(stderr);
      } else {

      }
    } else
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"error reading bytes from pid\n");
      fflush(stderr);
    } else {

    }
    close(from_pid);
    shutting_down = (Bool )1;
    return ((Bool )0);
  } else {

  }
  tmp = write_buf((int )to_gdb, buf, nrread, (char *)"to_gdb", (Bool )0);
  return (tmp);
}
}
static void prepare_fifos_and_shared_mem(int pid ) 
{ 
  size_t tmp ;
  void *tmp___0 ;
  size_t tmp___1 ;
  void *tmp___2 ;
  size_t tmp___3 ;
  void *tmp___4 ;

  {
  tmp = strlen((char const   *)vgdb_prefix);
  tmp___0 = vmalloc(tmp + 30U);
  from_gdb_to_pid = (char *)tmp___0;
  tmp___1 = strlen((char const   *)vgdb_prefix);
  tmp___2 = vmalloc(tmp___1 + 30U);
  to_gdb_from_pid = (char *)tmp___2;
  tmp___3 = strlen((char const   *)vgdb_prefix);
  tmp___4 = vmalloc(tmp___3 + 30U);
  shared_mem = (char *)tmp___4;
  sprintf((char */* __restrict  */)from_gdb_to_pid,
          (char const   */* __restrict  */)"%s-from-vgdb-to-%d", vgdb_prefix,
          pid);
  sprintf((char */* __restrict  */)to_gdb_from_pid,
          (char const   */* __restrict  */)"%s-to-vgdb-from-%d", vgdb_prefix,
          pid);
  sprintf((char */* __restrict  */)shared_mem,
          (char const   */* __restrict  */)"%s-shared-mem-vgdb-%d", vgdb_prefix,
          pid);
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"vgdb: using %s %s %s\n",
            from_gdb_to_pid, to_gdb_from_pid, shared_mem);
    fflush(stderr);
  } else {

  }
  map_vgdbshared(shared_mem);
  return;
}
}
static int fromhex(int a ) 
{ 


  {
  if (a >= 48) {
    if (a <= 57) {
      return (a - 48);
    } else {
      goto _L;
    }
  } else
  _L: /* CIL Label */ 
  if (a >= 97) {
    if (a <= 102) {
      return ((a - 97) + 10);
    } else {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Reply contains invalid hex digit %c\n",
              a);
      fflush(stderr);
      exit(1);
    }
  } else {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Reply contains invalid hex digit %c\n",
            a);
    fflush(stderr);
    exit(1);
  }
  return (0);
}
}
static unsigned char buf[16384]  ;
static int readchar(int fd ) ;
static int bufcnt  =    0;
static unsigned char *bufp  ;
static int readchar(int fd ) 
{ 
  unsigned char *tmp ;
  int tmp___0 ;
  int *tmp___1 ;
  unsigned char *tmp___2 ;

  {
  tmp___0 = bufcnt;
  bufcnt --;
  if (tmp___0 > 0) {
    tmp = bufp;
    bufp ++;
    return ((int )*tmp);
  } else {

  }
  bufcnt = read(fd, (void *)(buf), sizeof(buf));
  if (bufcnt <= 0) {
    if (bufcnt == 0) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"readchar: Got EOF\n");
      return (-2);
    } else {
      tmp___1 = __errno_location();
      if (*tmp___1 == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"readchar\n");
      fflush(stderr);
      return (-1);
    }
  } else {

  }
  bufp = buf;
  bufcnt --;
  tmp___2 = bufp;
  bufp ++;
  return ((int )*tmp___2);
}
}
static int getpkt(char *buf___0 , int fromfd , int ackfd ) 
{ 
  char *bp ;
  unsigned char csum ;
  unsigned char c1 ;
  unsigned char c2 ;
  int c ;
  int repeat ;
  int r ;
  int prev ;
  char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  ssize_t tmp___5 ;
  ssize_t tmp___6 ;

  {
  while (1) {
    csum = (unsigned char)0;
    while (1) {
      c = readchar(fromfd);
      if (c == 36) {
        break;
      } else {

      }
      if (2 <= debuglevel) {
        gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                     (__timezone_ptr_t )((void *)0));
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                dbgtv.tv_usec);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"[getpkt: discarding char \'%c\']\n",
                c);
        fflush(stderr);
      } else {

      }
      if (c < 0) {
        return (c);
      } else {

      }
    }
    bp = buf___0;
    while (1) {
      c = readchar(fromfd);
      if (c < 0) {
        return (c);
      } else {

      }
      if (c == 35) {
        break;
      } else {

      }
      if (c == 42) {
        prev = (int )*(bp - 1);
        csum = (unsigned char )((int )csum + c);
        repeat = readchar(fromfd);
        csum = (unsigned char )((int )csum + repeat);
        r = 0;
        while (r < repeat - 29) {
          tmp = bp;
          bp ++;
          *tmp = (char )prev;
          r ++;
        }
      } else {
        tmp___0 = bp;
        bp ++;
        *tmp___0 = (char )c;
        csum = (unsigned char )((int )csum + c);
      }
    }
    *bp = (char)0;
    tmp___1 = readchar(fromfd);
    tmp___2 = fromhex(tmp___1);
    c1 = (unsigned char )tmp___2;
    tmp___3 = readchar(fromfd);
    tmp___4 = fromhex(tmp___3);
    c2 = (unsigned char )tmp___4;
    if ((int )csum == ((int )c1 << 4) + (int )c2) {
      break;
    } else {

    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Bad checksum, sentsum=0x%x, csum=0x%x, buf=%s\n",
            ((int )c1 << 4) + (int )c2, (int )csum, buf___0);
    tmp___5 = write(ackfd, (void const   *)"-", (size_t )1);
    if (tmp___5 != 1) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"error when writing - (nack)\n");
      fflush(stderr);
    } else {
      add_written(1);
    }
  }
  if (2 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"getpkt (\"%s\");  [sending ack] \n",
            buf___0);
    fflush(stderr);
  } else {

  }
  tmp___6 = write(ackfd, (void const   *)"+", (size_t )1);
  if (tmp___6 != 1) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"error when writing + (ack)\n");
    fflush(stderr);
  } else {
    add_written(1);
  }
  return (bp - buf___0);
}
}
static int sigint  =    0;
static int sigterm  =    0;
static int sigpipe  =    0;
static int sighup  =    0;
static int sigusr1  =    0;
static int sigalrm  =    0;
static int sigusr1_fd  =    -1;
static pthread_t invoke_gdbserver_in_valgrind_thread  ;
static void received_signal(int signum ) 
{ 
  char control_c ;

  {
  if (signum == 2) {
    sigint ++;
  } else
  if (signum == 10) {
    sigusr1 ++;
    if (sigusr1_fd >= 0) {
      control_c = (char )'\003';
      write_buf(sigusr1_fd, & control_c, 1, (char *)"write \\003 on SIGUSR1",
                (Bool )1);
    } else {

    }
  } else
  if (signum == 15) {
    shutting_down = (Bool )1;
    sigterm ++;
  } else
  if (signum == 1) {
    shutting_down = (Bool )1;
    sighup ++;
  } else
  if (signum == 13) {
    sigpipe ++;
  } else
  if (signum == 14) {
    sigalrm ++;
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"pthread_cancel invoke_gdbserver_in_valgrind_thread\n");
      fflush(stderr);
    } else {

    }
    pthread_cancel(invoke_gdbserver_in_valgrind_thread);
  } else {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"unexpected signal %d\n", signum);
    fflush(stderr);
  }
  return;
}
}
static void install_handlers(void) 
{ 
  struct sigaction action ;
  struct sigaction oldaction ;
  int *tmp ;
  int tmp___0 ;
  int *tmp___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;
  int *tmp___5 ;
  int tmp___6 ;
  int *tmp___7 ;
  int tmp___8 ;

  {
  action.__sigaction_handler.sa_handler = & received_signal;
  sigemptyset(& action.sa_mask);
  action.sa_flags = 0;
  tmp___0 = sigaction(2,
                      (struct sigaction  const  */* __restrict  */)(& action),
                      (struct sigaction */* __restrict  */)(& oldaction));
  if (tmp___0 != 0) {
    tmp = __errno_location();
    if (*tmp == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"vgdb error sigaction SIGINT\n");
    fflush(stderr);
    exit(1);
  } else {

  }
  tmp___2 = sigaction(10,
                      (struct sigaction  const  */* __restrict  */)(& action),
                      (struct sigaction */* __restrict  */)(& oldaction));
  if (tmp___2 != 0) {
    tmp___1 = __errno_location();
    if (*tmp___1 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"vgdb error sigaction SIGUSR1\n");
    fflush(stderr);
    exit(1);
  } else {

  }
  tmp___4 = sigaction(15,
                      (struct sigaction  const  */* __restrict  */)(& action),
                      (struct sigaction */* __restrict  */)(& oldaction));
  if (tmp___4 != 0) {
    tmp___3 = __errno_location();
    if (*tmp___3 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"vgdb error sigaction SIGTERM\n");
    fflush(stderr);
    exit(1);
  } else {

  }
  tmp___6 = sigaction(13,
                      (struct sigaction  const  */* __restrict  */)(& action),
                      (struct sigaction */* __restrict  */)(& oldaction));
  if (tmp___6 != 0) {
    tmp___5 = __errno_location();
    if (*tmp___5 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"vgdb error sigaction SIGPIPE\n");
    fflush(stderr);
    exit(1);
  } else {

  }
  tmp___8 = sigaction(14,
                      (struct sigaction  const  */* __restrict  */)(& action),
                      (struct sigaction */* __restrict  */)(& oldaction));
  if (tmp___8 != 0) {
    tmp___7 = __errno_location();
    if (*tmp___7 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"vgdb error sigaction SIGALRM\n");
    fflush(stderr);
    exit(1);
  } else {

  }
  return;
}
}
static void close_connection(int to_pid , int from_pid ) 
{ 
  int *tmp ;
  int tmp___0 ;
  int join ;
  int *tmp___1 ;
  int tmp___2 ;

  {
  if (1 <= debuglevel) {
    gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                 (__timezone_ptr_t )((void *)0));
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
            dbgtv.tv_usec);
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"nr received signals: sigint %d sigterm %d sighup %d sigpipe %d\n",
            sigint, sigterm, sighup, sigpipe);
    fflush(stderr);
  } else {

  }
  tmp___0 = close(to_pid);
  if (tmp___0 != 0) {
    tmp = __errno_location();
    if (*tmp == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"close to_pid\n");
    fflush(stderr);
  } else {

  }
  if (max_invoke_ms > 0) {
    alarm(3U);
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"joining with invoke_gdbserver_in_valgrind_thread\n");
      fflush(stderr);
    } else {

    }
    join = pthread_join(invoke_gdbserver_in_valgrind_thread,
                        (void **)((void *)0));
    if (join != 0) {
      if (join == 0) {

      } else {
        perror("syscall failed");
      }
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"vgdb error pthread_join invoke_gdbserver_in_valgrind_thread\n");
      fflush(stderr);
      exit(1);
    } else {

    }
  } else {

  }
  tmp___2 = close(from_pid);
  if (tmp___2 != 0) {
    tmp___1 = __errno_location();
    if (*tmp___1 == 0) {

    } else {
      perror("syscall failed");
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"close from_pid\n");
    fflush(stderr);
  } else {

  }
  return;
}
}
static void gdb_relay(int pid ) 
{ 
  int from_pid ;
  int to_pid ;
  int shutdown_loop ;
  ConnectionKind ck ;
  int ret ;
  struct pollfd *pollfds ;
  unsigned int __lengthofpollfds ;
  void *tmp ;
  int tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;
  Bool tmp___4 ;
  Bool tmp___5 ;
  char *tmp___6 ;
  char *tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;

  {
  from_pid = -1;
  to_pid = -1;
  shutdown_loop = 0;
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"relaying data between gdb and process %d\n",
          pid);
  fflush(stderr);
  if (max_invoke_ms > 0) {
    pthread_create((pthread_t */* __restrict  */)(& invoke_gdbserver_in_valgrind_thread),
                   (pthread_attr_t const   */* __restrict  */)((void *)0),
                   & invoke_gdbserver_in_valgrind,
                   (void */* __restrict  */)((void *)(& pid)));
  } else {

  }
  to_pid = open_fifo(from_gdb_to_pid, 1, (char *)"write to pid");
  acquire_lock(shared_mem_fd, pid);
  from_pid = open_fifo(to_gdb_from_pid, 2048, (char *)"read mode from pid");
  sigusr1_fd = to_pid;
  while (1) {
    __lengthofpollfds = (unsigned int )NumConnectionKind;
    tmp = __builtin_alloca(sizeof(*pollfds) * __lengthofpollfds);
    pollfds = (struct pollfd *)tmp;
    (pollfds + 0)->fd = (int )from_gdb;
    (pollfds + 0)->events = (short)1;
    (pollfds + 0)->revents = (short)0;
    (pollfds + 1)->fd = (int )to_gdb;
    (pollfds + 1)->events = (short)0;
    (pollfds + 1)->revents = (short)0;
    (pollfds + 2)->fd = from_pid;
    (pollfds + 2)->events = (short)1;
    (pollfds + 2)->revents = (short)0;
    (pollfds + 3)->fd = to_pid;
    (pollfds + 3)->events = (short)0;
    (pollfds + 3)->revents = (short)0;
    if (shutting_down) {
      tmp___0 = 1;
    } else {
      tmp___0 = -1;
    }
    ret = poll(pollfds, (nfds_t )NumConnectionKind, tmp___0);
    if (2 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      tmp___1 = __errno_location();
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"poll ret %d errno %d\n", ret,
              *tmp___1);
      fflush(stderr);
    } else {

    }
    if (ret <= 0) {
      tmp___3 = __errno_location();
      if (*tmp___3 != 4) {
        tmp___2 = __errno_location();
        if (*tmp___2 == 0) {

        } else {
          perror("syscall failed");
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"unexpected poll ret %d\n", ret);
        fflush(stderr);
        shutting_down = (Bool )1;
        break;
      } else {

      }
    } else {

    }
    ck = (ConnectionKind )0;
    while ((unsigned int )ck < (unsigned int )NumConnectionKind) {
      if ((int )(pollfds + ck)->revents & 1) {
        switch ((unsigned int )ck) {
        case 0U: 
        tmp___4 = read_from_gdb_write_to_pid(to_pid);
        if (tmp___4) {

        } else {
          shutting_down = (Bool )1;
        }
        break;
        case 2U: 
        tmp___5 = read_from_pid_write_to_gdb(from_pid);
        if (tmp___5) {

        } else {
          shutting_down = (Bool )1;
        }
        break;
        default: 
        tmp___6 = ppConnectionKind(ck);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"unexpected POLLIN on %s\n",
                tmp___6);
        fflush(stderr);
        exit(1);
        }
      } else {

      }
      ck = (ConnectionKind )((unsigned int )ck + 1U);
    }
    ck = (ConnectionKind )0;
    while ((unsigned int )ck < (unsigned int )NumConnectionKind) {
      if ((int )(pollfds + ck)->revents & 8) {
        if (1 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          tmp___7 = ppConnectionKind(ck);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"connection %s fd %d POLLERR error condition\n",
                  tmp___7, (pollfds + ck)->fd);
          fflush(stderr);
        } else {

        }
        valgrind_dying();
        shutting_down = (Bool )1;
      } else {

      }
      if ((int )(pollfds + ck)->revents & 16) {
        if (1 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          tmp___8 = ppConnectionKind(ck);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"connection %s fd %d POLLHUP error condition\n",
                  tmp___8, (pollfds + ck)->fd);
          fflush(stderr);
        } else {

        }
        valgrind_dying();
        shutting_down = (Bool )1;
      } else {

      }
      if ((int )(pollfds + ck)->revents & 32) {
        if (1 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          tmp___9 = ppConnectionKind(ck);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"connection %s fd %d POLLNVAL error condition\n",
                  tmp___9, (pollfds + ck)->fd);
          fflush(stderr);
        } else {

        }
        valgrind_dying();
        shutting_down = (Bool )1;
      } else {

      }
      ck = (ConnectionKind )((unsigned int )ck + 1U);
    }
    if (shutting_down) {
      shutdown_loop ++;
      if (shutdown_loop > 3) {
        break;
      } else {

      }
    } else {

    }
  }
  close_connection(to_pid, from_pid);
  return;
}
}
static int packet_len_for_command(char *cmd ) 
{ 
  size_t tmp ;

  {
  tmp = strlen((char const   *)cmd);
  return ((int )(((7U + 2U * tmp) + 3U) + 1U));
}
}
static void standalone_send_commands(int pid , int last_command ,
                                     char **commands ) 
{ 
  int from_pid ;
  int to_pid ;
  int i ;
  int hi ;
  unsigned char hex[3] ;
  unsigned char cksum ;
  unsigned char *hexcommand ;
  unsigned char buf___0[16384] ;
  int buflen ;
  int nc ;
  int tmp ;
  void *tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___8 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  char *buf_print ;
  unsigned int __lengthofbuf_print ;
  void *tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;

  {
  from_pid = -1;
  to_pid = -1;
  if (max_invoke_ms > 0) {
    pthread_create((pthread_t */* __restrict  */)(& invoke_gdbserver_in_valgrind_thread),
                   (pthread_attr_t const   */* __restrict  */)((void *)0),
                   & invoke_gdbserver_in_valgrind,
                   (void */* __restrict  */)((void *)(& pid)));
  } else {

  }
  to_pid = open_fifo(from_gdb_to_pid, 1, (char *)"write to pid");
  acquire_lock(shared_mem_fd, pid);
  buf___0[0] = (unsigned char )'\003';
  write_buf(to_pid, (char *)(buf___0), 1, (char *)"write \\003 to wake up",
            (Bool )1);
  from_pid = open_fifo(to_gdb_from_pid, 0, (char *)"read cmd result from pid");
  nc = 0;
  while (nc <= last_command) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"sending command %s to pid %d\n",
            *(commands + nc), pid);
    fflush(stderr);
    tmp = packet_len_for_command(*(commands + nc));
    tmp___0 = vmalloc((size_t )tmp);
    hexcommand = (unsigned char *)tmp___0;
    *(hexcommand + 0) = (unsigned char)0;
    strcat((char */* __restrict  */)hexcommand,
           (char const   */* __restrict  */)"$qRcmd,");
    i = 0;
    while (1) {
      tmp___1 = strlen((char const   *)*(commands + nc));
      if ((size_t )i < tmp___1) {

      } else {
        break;
      }
      sprintf((char */* __restrict  */)(hex),
              (char const   */* __restrict  */)"%02x",
              (int )*(*(commands + nc) + i));
      strcat((char */* __restrict  */)hexcommand,
             (char const   */* __restrict  */)(hex));
      i ++;
    }
    cksum = (unsigned char)0;
    hi = 1;
    while (1) {
      tmp___2 = strlen((char const   *)hexcommand);
      if ((size_t )hi < tmp___2) {

      } else {
        break;
      }
      cksum = (unsigned char )((int )cksum + (int )*(hexcommand + hi));
      hi ++;
    }
    strcat((char */* __restrict  */)hexcommand,
           (char const   */* __restrict  */)"#");
    sprintf((char */* __restrict  */)(hex),
            (char const   */* __restrict  */)"%02x", (int )cksum);
    strcat((char */* __restrict  */)hexcommand,
           (char const   */* __restrict  */)(hex));
    tmp___3 = strlen((char const   *)hexcommand);
    write_buf(to_pid, (char *)hexcommand, (int )tmp___3,
              (char *)"writing hex command to pid", (Bool )1);
    while (! shutting_down) {
      buflen = getpkt((char *)(buf___0), from_pid, to_pid);
      if (buflen < 0) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"error reading packet\n");
        fflush(stderr);
        if (buflen == -2) {
          valgrind_dying();
        } else {

        }
        break;
      } else {

      }
      tmp___4 = strlen((char const   *)(buf___0));
      if (tmp___4 == 0U) {
        if (0 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"empty packet rcvd (packet qRcmd not recognised?)\n");
          fflush(stderr);
        } else {

        }
        break;
      } else {

      }
      if (0) {
        __s1_len = strlen((char const   *)(buf___0));
        __s2_len = strlen("OK");
        if (! ((size_t )((void const   *)(buf___0 + 1)) - (size_t )((void const   *)(buf___0)) == 1U)) {
          goto _L___0;
        } else
        if (__s1_len >= 4U) {
          _L___0: /* CIL Label */ 
          if (! ((size_t )((void const   *)("OK" + 1)) - (size_t )((void const   *)"OK") == 1U)) {
            tmp___11 = 1;
          } else
          if (__s2_len >= 4U) {
            tmp___11 = 1;
          } else {
            tmp___11 = 0;
          }
        } else {
          tmp___11 = 0;
        }
        if (tmp___11) {
          tmp___6 = __builtin_strcmp((char const   *)(buf___0), "OK");
          tmp___10 = tmp___6;
        } else {
          tmp___9 = __builtin_strcmp((char const   *)(buf___0), "OK");
          tmp___10 = tmp___9;
        }
      } else {
        tmp___9 = __builtin_strcmp((char const   *)(buf___0), "OK");
        tmp___10 = tmp___9;
      }
      if (tmp___10 == 0) {
        if (1 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"OK packet rcvd\n");
          fflush(stderr);
        } else {

        }
        break;
      } else {

      }
      if ((int )buf___0[0] == 69) {
        if (0 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"E NN error packet rcvd: %s (unknown monitor command?)\n",
                  buf___0);
          fflush(stderr);
        } else {

        }
        break;
      } else {

      }
      if ((int )buf___0[0] == 87) {
        if (0 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"W stopped packet rcvd: %s\n",
                  buf___0);
          fflush(stderr);
        } else {

        }
        break;
      } else {

      }
      if ((int )buf___0[0] == 84) {
        if (1 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"T resume reply packet received: %s\n",
                  buf___0);
          fflush(stderr);
        } else {

        }
        continue;
      } else {

      }
      if ((int )buf___0[0] != 79) {
        if (0 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"expecting O packet, received: %s\n",
                  buf___0);
          fflush(stderr);
        } else {

        }
        continue;
      } else {

      }
      __lengthofbuf_print = (unsigned int )(buflen / 2 + 1);
      tmp___12 = __builtin_alloca(sizeof(*buf_print) * __lengthofbuf_print);
      buf_print = (char *)tmp___12;
      i = 1;
      while (i < buflen) {
        tmp___13 = fromhex((int )*(buf___0 + i));
        tmp___14 = fromhex((int )*((buf___0 + i) + 1));
        *(buf_print + i / 2) = (char )((tmp___13 << 4) + tmp___14);
        i += 2;
      }
      *(buf_print + buflen / 2) = (char)0;
      printf((char const   */* __restrict  */)"%s", buf_print);
      fflush(stdout);
    }
    free((void *)hexcommand);
    nc ++;
  }
  shutting_down = (Bool )1;
  close_connection(to_pid, from_pid);
  return;
}
}
static void report_pid(int pid ) 
{ 
  char cmdline_file[100] ;
  char cmdline[1000] ;
  int fd ;
  int i ;
  int sz ;
  int *tmp ;
  char *tmp___0 ;

  {
  sprintf((char */* __restrict  */)(cmdline_file),
          (char const   */* __restrict  */)"/proc/%d/cmdline", pid);
  fd = open((char const   *)(cmdline_file), 0);
  if (fd == -1) {
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      tmp = __errno_location();
      tmp___0 = strerror(*tmp);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"error opening cmdline file %s %s\n",
              cmdline_file, tmp___0);
      fflush(stderr);
    } else {

    }
    sprintf((char */* __restrict  */)(cmdline),
            (char const   */* __restrict  */)"(could not obtain process command line)");
  } else {
    sz = read(fd, (void *)(cmdline), (size_t )1000);
    i = 0;
    while (i < sz) {
      if ((int )cmdline[i] == 0) {
        cmdline[i] = (char )' ';
      } else {

      }
      i ++;
    }
    cmdline[sz] = (char)0;
    close(fd);
  }
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"use --pid=%d for %s\n", pid, cmdline);
  fflush(stderr);
  return;
}
}
static void ptrace_restrictions(void) 
{ 


  {
  return;
}
}
static void usage(void) 
{ 


  {
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"Usage: vgdb [OPTION]... [[-c] COMMAND]...\nvgdb (valgrind gdb) has two usages\n  1. standalone to send monitor commands to a Valgrind gdbserver.\n     The OPTION(s) must be followed by the command to send\n     To send more than one command, separate the commands with -c\n  2. relay application between gdb and a Valgrind gdbserver.\n     Only OPTION(s) can be given.\n\n OPTIONS are [--pid=<number>] [--vgdb-prefix=<prefix>]\n             [--max-invoke-ms=<number>] [--wait=<number>] [-d] [-D] [-l]\n  --pid arg must be given if multiple Valgrind gdbservers are found.\n  --vgdb-prefix arg must be given to both Valgrind and vgdb utility\n      if you want to change the default prefix for the FIFOs communication\n      between the Valgrind gdbserver and vgdb.\n  --wait arg tells vgdb to check during the specified number\n      of seconds if a Valgrind gdbserver can be found.\n  --max-invoke-ms gives the nr of milli-seconds after which vgdb will force\n      the invocation of the Valgrind gdbserver (if the Valgrind process\n           is blocked in a system call).\n  -d  arg tells to show debug info. Multiple -d args for more debug info\n  -D  arg tells to show shared mem status and then exit.\n  -l  arg tells to show the list of running Valgrind gdbserver and then exit.\n\n  -h --help shows this message\n  To get help from the Valgrind gdbserver, use vgdb help\n\n");
  ptrace_restrictions();
  return;
}
}
static int search_arg_pid(int arg_pid , int check_trials , Bool show_list ) 
{ 
  int i ;
  int pid ;
  DIR *vgdb_dir ;
  char *vgdb_dir_name ;
  size_t tmp ;
  void *tmp___0 ;
  struct dirent *f ;
  int is ;
  int nr_valid_pid ;
  char const   *suffix ;
  char *vgdb_format ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  void *tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  int *tmp___6 ;
  int *tmp___7 ;
  struct stat st ;
  size_t tmp___8 ;
  size_t tmp___9 ;
  char *pathname ;
  unsigned int __lengthofpathname ;
  void *tmp___10 ;
  char *wrongpid ;
  int newpid ;
  int *tmp___11 ;
  size_t tmp___12 ;
  long tmp___13 ;
  int tmp___14 ;
  size_t tmp___15 ;
  size_t tmp___16 ;
  size_t tmp___17 ;
  size_t tmp___18 ;
  size_t tmp___19 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___23 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  size_t tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  size_t tmp___30 ;
  size_t tmp___31 ;
  size_t tmp___32 ;
  size_t tmp___33 ;
  size_t tmp___34 ;
  int tmp___35 ;
  int *tmp___36 ;
  int *tmp___37 ;
  int *tmp___38 ;

  {
  pid = -1;
  if (arg_pid == 0) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"vgdb error: invalid pid %d given\n",
            arg_pid);
    exit(1);
  } else
  if (arg_pid < -1) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"vgdb error: invalid pid %d given\n",
            arg_pid);
    exit(1);
  } else {
    tmp = strlen((char const   *)vgdb_prefix);
    tmp___0 = vmalloc(tmp + 3U);
    vgdb_dir_name = (char *)tmp___0;
    nr_valid_pid = 0;
    suffix = "-from-vgdb-to-";
    tmp___1 = strlen((char const   *)vgdb_prefix);
    tmp___2 = strlen(suffix);
    tmp___3 = vmalloc((tmp___1 + tmp___2) + 1U);
    vgdb_format = (char *)tmp___3;
    strcpy((char */* __restrict  */)vgdb_format,
           (char const   */* __restrict  */)vgdb_prefix);
    strcat((char */* __restrict  */)vgdb_format,
           (char const   */* __restrict  */)suffix);
    strcpy((char */* __restrict  */)vgdb_dir_name,
           (char const   */* __restrict  */)vgdb_prefix);
    tmp___4 = strlen((char const   *)vgdb_prefix);
    is = (int )(tmp___4 - 1U);
    while (is >= 0) {
      if ((int )*(vgdb_dir_name + is) == 47) {
        *(vgdb_dir_name + (is + 1)) = (char )'\000';
        break;
      } else {

      }
      is --;
    }
    tmp___5 = strlen((char const   *)vgdb_dir_name);
    if (tmp___5 == 0U) {
      strcpy((char */* __restrict  */)vgdb_dir_name,
             (char const   */* __restrict  */)"./");
    } else {

    }
    if (1 <= debuglevel) {
      gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                   (__timezone_ptr_t )((void *)0));
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
              dbgtv.tv_usec);
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"searching pid in directory %s format %s\n",
              vgdb_dir_name, vgdb_format);
      fflush(stderr);
    } else {

    }
    i = 0;
    while (i < check_trials) {
      if (1 <= debuglevel) {
        gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                     (__timezone_ptr_t )((void *)0));
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                dbgtv.tv_usec);
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"check_trial %d \n", i);
        fflush(stderr);
      } else {

      }
      if (i > 0) {
        sleep(1U);
      } else {

      }
      vgdb_dir = opendir((char const   *)vgdb_dir_name);
      if ((unsigned int )vgdb_dir == (unsigned int )((void *)0)) {
        tmp___6 = __errno_location();
        if (*tmp___6 == 0) {

        } else {
          perror("syscall failed");
        }
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"vgdb error: opening directory %s searching vgdb fifo\n",
                vgdb_dir_name);
        fflush(stderr);
        exit(1);
      } else {

      }
      tmp___7 = __errno_location();
      *tmp___7 = 0;
      while (1) {
        f = readdir(vgdb_dir);
        if (f) {

        } else {
          break;
        }
        tmp___8 = strlen((char const   *)vgdb_dir_name);
        tmp___9 = strlen((char const   *)(f->d_name));
        __lengthofpathname = tmp___8 + tmp___9;
        tmp___10 = __builtin_alloca(sizeof(*pathname) * __lengthofpathname);
        pathname = (char *)tmp___10;
        strcpy((char */* __restrict  */)pathname,
               (char const   */* __restrict  */)vgdb_dir_name);
        strcat((char */* __restrict  */)pathname,
               (char const   */* __restrict  */)(f->d_name));
        if (3 <= debuglevel) {
          gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                       (__timezone_ptr_t )((void *)0));
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%ld.%6.6ld ", dbgtv.tv_sec,
                  dbgtv.tv_usec);
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"trying %s\n", pathname);
          fflush(stderr);
        } else {

        }
        tmp___35 = stat((char const   */* __restrict  */)pathname,
                        (struct stat */* __restrict  */)(& st));
        if (tmp___35 != 0) {
          if (debuglevel >= 3) {
            tmp___11 = __errno_location();
            if (*tmp___11 == 0) {

            } else {
              perror("syscall failed");
            }
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"vgdb error: stat %s searching vgdb fifo\n",
                    pathname);
            fflush(stderr);
          } else {

          }
        } else
        if ((st.st_mode & 61440U) == 4096U) {
          if (3 <= debuglevel) {
            gettimeofday((struct timeval */* __restrict  */)(& dbgtv),
                         (__timezone_ptr_t )((void *)0));
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"%ld.%6.6ld ",
                    dbgtv.tv_sec, dbgtv.tv_usec);
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"trying %s\n", pathname);
            fflush(stderr);
          } else {

          }
          if (0) {
            if (0) {
              __s1_len = strlen((char const   *)pathname);
              __s2_len = strlen((char const   *)vgdb_format);
              if (! ((size_t )((void const   *)(pathname + 1)) - (size_t )((void const   *)pathname) == 1U)) {
                goto _L___0;
              } else
              if (__s1_len >= 4U) {
                _L___0: /* CIL Label */ 
                if (! ((size_t )((void const   *)(vgdb_format + 1)) - (size_t )((void const   *)vgdb_format) == 1U)) {
                  tmp___26 = 1;
                } else
                if (__s2_len >= 4U) {
                  tmp___26 = 1;
                } else {
                  tmp___26 = 0;
                }
              } else {
                tmp___26 = 0;
              }
              if (tmp___26) {
                tmp___21 = __builtin_strcmp((char const   *)pathname,
                                            (char const   *)vgdb_format);
                tmp___25 = tmp___21;
              } else {
                tmp___24 = __builtin_strcmp((char const   *)pathname,
                                            (char const   *)vgdb_format);
                tmp___25 = tmp___24;
              }
            } else {
              tmp___24 = __builtin_strcmp((char const   *)pathname,
                                          (char const   *)vgdb_format);
              tmp___25 = tmp___24;
            }
            tmp___29 = tmp___25;
          } else {
            tmp___27 = strlen((char const   *)vgdb_format);
            tmp___28 = strncmp((char const   *)pathname,
                               (char const   *)vgdb_format, tmp___27);
            tmp___29 = tmp___28;
          }
          if (tmp___29 == 0) {
            tmp___12 = strlen((char const   *)vgdb_format);
            tmp___13 = strtol((char const   */* __restrict  */)(pathname + tmp___12),
                              (char **/* __restrict  */)(& wrongpid), 10);
            newpid = (int )tmp___13;
            if ((int )*wrongpid == 0) {
              if (newpid > 0) {
                tmp___14 = kill(newpid, 0);
                if (tmp___14 == 0) {
                  nr_valid_pid ++;
                  if (show_list) {
                    report_pid(newpid);
                    pid = newpid;
                  } else
                  if (arg_pid != -1) {
                    if (arg_pid == newpid) {
                      pid = newpid;
                    } else {

                    }
                  } else
                  if (nr_valid_pid > 1) {
                    if (nr_valid_pid == 2) {
                      fprintf((FILE */* __restrict  */)stderr,
                              (char const   */* __restrict  */)"no --pid= arg given and multiple valgrind pids found:\n");
                      report_pid(pid);
                    } else {

                    }
                    pid = -2;
                    report_pid(newpid);
                  } else {
                    pid = newpid;
                  }
                } else {

                }
              } else {

              }
            } else {

            }
          } else {

          }
        } else {

        }
        tmp___36 = __errno_location();
        *tmp___36 = 0;
      }
      if ((unsigned int )f == (unsigned int )((void *)0)) {
        tmp___38 = __errno_location();
        if (*tmp___38 != 0) {
          tmp___37 = __errno_location();
          if (*tmp___37 == 0) {

          } else {
            perror("syscall failed");
          }
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"vgdb error: reading directory %s for vgdb fifo\n",
                  vgdb_dir_name);
          fflush(stderr);
          exit(1);
        } else {

        }
      } else {

      }
      closedir(vgdb_dir);
      if (pid != -1) {
        break;
      } else {

      }
      i ++;
    }
    free((void *)vgdb_dir_name);
    free((void *)vgdb_format);
  }
  if (show_list) {
    exit(1);
  } else
  if (pid == -1) {
    if (arg_pid == -1) {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"vgdb error: no FIFO found and no pid given\n");
    } else {
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"vgdb error: no FIFO found matching pid %d\n",
              arg_pid);
    }
    exit(1);
  } else
  if (pid == -2) {
    exit(1);
  } else {
    return (pid);
  }
}
}
static Bool numeric_val(char *arg , int *value ) 
{ 
  char const   *eq_pos ;
  void *tmp ;
  char *tmp___0 ;
  char *wrong ;
  long tmp___1 ;

  {
  tmp___0 = __builtin_strchr(arg, '=');
  eq_pos = (char const   *)tmp___0;
  if ((unsigned int )eq_pos == (unsigned int )((void *)0)) {
    return ((Bool )0);
  } else {

  }
  tmp___1 = strtol((char const   */* __restrict  */)(eq_pos + 1),
                   (char **/* __restrict  */)(& wrong), 10);
  *value = (int )tmp___1;
  if (*wrong) {
    return ((Bool )0);
  } else {

  }
  return ((Bool )1);
}
}
static Bool is_opt(char *arg , char *option ) 
{ 
  int option_len ;
  size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___5 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  size_t tmp___11 ;
  size_t tmp___12 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___16 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;

  {
  tmp = strlen((char const   *)option);
  option_len = (int )tmp;
  if ((int )*(option + (option_len - 1)) == 61) {
    if (0) {
      if (0) {
        __s1_len = strlen((char const   *)option);
        __s2_len = strlen((char const   *)arg);
        if (! ((size_t )((void const   *)(option + 1)) - (size_t )((void const   *)option) == 1U)) {
          goto _L___0;
        } else
        if (__s1_len >= 4U) {
          _L___0: /* CIL Label */ 
          if (! ((size_t )((void const   *)(arg + 1)) - (size_t )((void const   *)arg) == 1U)) {
            tmp___8 = 1;
          } else
          if (__s2_len >= 4U) {
            tmp___8 = 1;
          } else {
            tmp___8 = 0;
          }
        } else {
          tmp___8 = 0;
        }
        if (tmp___8) {
          tmp___3 = __builtin_strcmp((char const   *)option, (char const   *)arg);
          tmp___7 = tmp___3;
        } else {
          tmp___6 = __builtin_strcmp((char const   *)option, (char const   *)arg);
          tmp___7 = tmp___6;
        }
      } else {
        tmp___6 = __builtin_strcmp((char const   *)option, (char const   *)arg);
        tmp___7 = tmp___6;
      }
      tmp___10 = tmp___7;
    } else {
      tmp___9 = strncmp((char const   *)option, (char const   *)arg,
                        (size_t )option_len);
      tmp___10 = tmp___9;
    }
    return ((Bool )(0 == tmp___10));
  } else {
    if (0) {
      __s1_len___0 = strlen((char const   *)option);
      __s2_len___0 = strlen((char const   *)arg);
      if (! ((size_t )((void const   *)(option + 1)) - (size_t )((void const   *)option) == 1U)) {
        goto _L___2;
      } else
      if (__s1_len___0 >= 4U) {
        _L___2: /* CIL Label */ 
        if (! ((size_t )((void const   *)(arg + 1)) - (size_t )((void const   *)arg) == 1U)) {
          tmp___19 = 1;
        } else
        if (__s2_len___0 >= 4U) {
          tmp___19 = 1;
        } else {
          tmp___19 = 0;
        }
      } else {
        tmp___19 = 0;
      }
      if (tmp___19) {
        tmp___14 = __builtin_strcmp((char const   *)option, (char const   *)arg);
        tmp___18 = tmp___14;
      } else {
        tmp___17 = __builtin_strcmp((char const   *)option, (char const   *)arg);
        tmp___18 = tmp___17;
      }
    } else {
      tmp___17 = __builtin_strcmp((char const   *)option, (char const   *)arg);
      tmp___18 = tmp___17;
    }
    return ((Bool )(0 == tmp___18));
  }
}
}
static void parse_options(int argc , char **argv , Bool *p_show_shared_mem ,
                          Bool *p_show_list , int *p_arg_pid ,
                          int *p_check_trials , int *p_last_command ,
                          char **commands ) 
{ 
  Bool show_shared_mem ;
  Bool show_list ;
  int arg_pid ;
  int check_trials ;
  int last_command ;
  int i ;
  int arg_errors ;
  int newpid ;
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  void *tmp___2 ;
  int len ;
  void *tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  void *tmp___6 ;
  int tmp___7 ;
  size_t tmp___8 ;
  size_t tmp___9 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___13 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  size_t tmp___19 ;
  size_t tmp___20 ;
  Bool tmp___21 ;
  Bool tmp___22 ;
  Bool tmp___23 ;
  Bool tmp___24 ;
  Bool tmp___25 ;
  Bool tmp___26 ;
  Bool tmp___27 ;
  Bool tmp___28 ;
  Bool tmp___29 ;
  Bool tmp___30 ;
  int tmp___31 ;

  {
  show_shared_mem = (Bool )0;
  show_list = (Bool )0;
  arg_pid = -1;
  check_trials = 1;
  last_command = -1;
  arg_errors = 0;
  i = 1;
  while (i < argc) {
    tmp___29 = is_opt(*(argv + i), (char *)"--help");
    if (tmp___29) {
      usage();
      exit(0);
    } else {
      tmp___30 = is_opt(*(argv + i), (char *)"-h");
      if (tmp___30) {
        usage();
        exit(0);
      } else {
        tmp___28 = is_opt(*(argv + i), (char *)"-d");
        if (tmp___28) {
          debuglevel ++;
        } else {
          tmp___27 = is_opt(*(argv + i), (char *)"-D");
          if (tmp___27) {
            show_shared_mem = (Bool )1;
          } else {
            tmp___26 = is_opt(*(argv + i), (char *)"-l");
            if (tmp___26) {
              show_list = (Bool )1;
            } else {
              tmp___25 = is_opt(*(argv + i), (char *)"--pid=");
              if (tmp___25) {
                tmp = numeric_val(*(argv + i), & newpid);
                if (tmp) {
                  if (arg_pid != -1) {
                    fprintf((FILE */* __restrict  */)stderr,
                            (char const   */* __restrict  */)"multiple pid arguments given\n");
                    arg_errors ++;
                  } else {
                    arg_pid = newpid;
                  }
                } else {
                  fprintf((FILE */* __restrict  */)stderr,
                          (char const   */* __restrict  */)"invalid pid argument %s\n",
                          *(argv + i));
                  arg_errors ++;
                }
              } else {
                tmp___24 = is_opt(*(argv + i), (char *)"--wait=");
                if (tmp___24) {
                  tmp___0 = numeric_val(*(argv + i), & check_trials);
                  if (tmp___0) {

                  } else {
                    fprintf((FILE */* __restrict  */)stderr,
                            (char const   */* __restrict  */)"invalid wait argument %s\n",
                            *(argv + i));
                    arg_errors ++;
                  }
                } else {
                  tmp___23 = is_opt(*(argv + i), (char *)"--max-invoke-ms=");
                  if (tmp___23) {
                    tmp___1 = numeric_val(*(argv + i), & max_invoke_ms);
                    if (tmp___1) {

                    } else {
                      fprintf((FILE */* __restrict  */)stderr,
                              (char const   */* __restrict  */)"invalid max-invoke-ms argument %s\n",
                              *(argv + i));
                      arg_errors ++;
                    }
                  } else {
                    tmp___22 = is_opt(*(argv + i), (char *)"--vgdb-prefix=");
                    if (tmp___22) {
                      vgdb_prefix = *(argv + i) + 14;
                    } else {
                      tmp___21 = is_opt(*(argv + i), (char *)"-c");
                      if (tmp___21) {
                        last_command ++;
                        tmp___2 = vmalloc((size_t )1);
                        *(commands + last_command) = (char *)tmp___2;
                        *(*(commands + last_command) + 0) = (char )'\000';
                      } else {
                        if (0) {
                          if (0) {
                            __s1_len = strlen((char const   *)*(argv + i));
                            __s2_len = strlen("-");
                            if (! ((size_t )((void const   *)(*(argv + i) + 1)) - (size_t )((void const   *)*(argv + i)) == 1U)) {
                              goto _L___0;
                            } else
                            if (__s1_len >= 4U) {
                              _L___0: /* CIL Label */ 
                              if (! ((size_t )((void const   *)("-" + 1)) - (size_t )((void const   *)"-") == 1U)) {
                                tmp___16 = 1;
                              } else
                              if (__s2_len >= 4U) {
                                tmp___16 = 1;
                              } else {
                                tmp___16 = 0;
                              }
                            } else {
                              tmp___16 = 0;
                            }
                            if (tmp___16) {
                              tmp___11 = __builtin_strcmp((char const   *)*(argv + i),
                                                          "-");
                              tmp___15 = tmp___11;
                            } else {
                              tmp___14 = __builtin_strcmp((char const   *)*(argv + i),
                                                          "-");
                              tmp___15 = tmp___14;
                            }
                          } else {
                            tmp___14 = __builtin_strcmp((char const   *)*(argv + i),
                                                        "-");
                            tmp___15 = tmp___14;
                          }
                          tmp___18 = tmp___15;
                        } else {
                          tmp___17 = strncmp((char const   *)*(argv + i), "-",
                                             (size_t )1);
                          tmp___18 = tmp___17;
                        }
                        if (0 == tmp___18) {
                          fprintf((FILE */* __restrict  */)stderr,
                                  (char const   */* __restrict  */)"unknown or invalid argument %s\n",
                                  *(argv + i));
                          arg_errors ++;
                        } else {
                          if (last_command == -1) {
                            last_command ++;
                            tmp___3 = vmalloc((size_t )1);
                            *(commands + last_command) = (char *)tmp___3;
                            *(*(commands + last_command) + 0) = (char )'\000';
                          } else {

                          }
                          tmp___4 = strlen((char const   *)*(commands + last_command));
                          len = (int )tmp___4;
                          tmp___5 = strlen((char const   *)*(argv + i));
                          tmp___6 = vrealloc((void *)*(commands + last_command),
                                             ((size_t )(len + 1) + tmp___5) + 1U);
                          *(commands + last_command) = (char *)tmp___6;
                          if (len > 0) {
                            strcat((char */* __restrict  */)*(commands + last_command),
                                   (char const   */* __restrict  */)" ");
                          } else {

                          }
                          strcat((char */* __restrict  */)*(commands + last_command),
                                 (char const   */* __restrict  */)*(argv + i));
                          tmp___7 = packet_len_for_command(*(commands + last_command));
                          if (tmp___7 > 16384) {
                            fprintf((FILE */* __restrict  */)stderr,
                                    (char const   */* __restrict  */)"command %s too long\n",
                                    *(commands + last_command));
                            arg_errors ++;
                          } else {

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
    i ++;
  }
  tmp___31 = isatty(0);
  if (tmp___31) {
    if (! show_shared_mem) {
      if (! show_list) {
        if (last_command == -1) {
          arg_errors ++;
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"Using vgdb standalone implies to give -D or -l or a COMMAND\n");
        } else {

        }
      } else {

      }
    } else {

    }
  } else {

  }
  if (show_shared_mem) {
    if (show_list) {
      arg_errors ++;
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Can\'t use both -D and -l options\n");
    } else {

    }
  } else {

  }
  if (show_list) {
    if (arg_pid != -1) {
      arg_errors ++;
      fprintf((FILE */* __restrict  */)stderr,
              (char const   */* __restrict  */)"Can\'t use both --pid and -l options\n");
    } else {

    }
  } else {

  }
  if (arg_errors > 0) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"args error. Try `vgdb --help` for more information\n");
    exit(1);
  } else {

  }
  *p_show_shared_mem = show_shared_mem;
  *p_show_list = show_list;
  *p_arg_pid = arg_pid;
  *p_check_trials = check_trials;
  *p_last_command = last_command;
  return;
}
}
int main(int argc , char **argv ) 
{ 
  int i ;
  int pid ;
  Bool show_shared_mem ;
  Bool show_list ;
  int arg_pid ;
  int check_trials ;
  int last_command ;
  char **commands ;
  unsigned int __lengthofcommands ;
  void *tmp ;
  int tmp___0 ;
  int volatile   tmp___1 ;
  int volatile   tmp___2 ;
  int tmp___3 ;

  {
  __lengthofcommands = (unsigned int )argc;
  tmp = __builtin_alloca(sizeof(*commands) * __lengthofcommands);
  commands = (char **)tmp;
  parse_options(argc, argv, & show_shared_mem, & show_list, & arg_pid,
                & check_trials, & last_command, commands);
  if (max_invoke_ms > 0) {
    install_handlers();
  } else
  if (last_command == -1) {
    install_handlers();
  } else {

  }
  pid = search_arg_pid(arg_pid, check_trials, show_list);
  prepare_fifos_and_shared_mem(pid);
  if (show_shared_mem) {
    if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
      tmp___0 = shared32->vgdb_pid;
    } else {
      tmp___0 = shared64->vgdb_pid;
    }
    if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
      tmp___1 = shared32->seen_by_valgrind;
    } else {
      tmp___1 = shared64->seen_by_valgrind;
    }
    if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
      tmp___2 = shared32->written_by_vgdb;
    } else {
      tmp___2 = shared64->written_by_vgdb;
    }
    if ((unsigned int )shared32 != (unsigned int )((void *)0)) {
      tmp___3 = shared32->vgdb_pid;
    } else {
      tmp___3 = shared64->vgdb_pid;
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"vgdb %d written_by_vgdb %d seen_by_valgrind %d\nvgdb pid %d\n",
            tmp___3, tmp___2, tmp___1, tmp___0);
    exit(0);
  } else {

  }
  if (last_command >= 0) {
    standalone_send_commands(pid, last_command, commands);
  } else {
    gdb_relay(pid);
  }
  free((void *)from_gdb_to_pid);
  free((void *)to_gdb_from_pid);
  free((void *)shared_mem);
  i = 0;
  while (i <= last_command) {
    free((void *)*(commands + i));
    i ++;
  }
  return (0);
}
}
