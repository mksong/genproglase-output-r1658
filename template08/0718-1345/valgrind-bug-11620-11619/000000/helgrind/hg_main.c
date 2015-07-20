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
enum __anonenum_VgMsgKind_4 {
    Vg_FailMsg = 0,
    Vg_UserMsg = 1,
    Vg_DebugMsg = 2,
    Vg_ClientMsg = 3
} ;
typedef enum __anonenum_VgMsgKind_4 VgMsgKind;
struct _ExeContext;
typedef struct _ExeContext ExeContext;
enum __anonenum_VgRes_5 {
    Vg_LowRes = 0,
    Vg_MedRes = 1,
    Vg_HighRes = 2
} ;
typedef enum __anonenum_VgRes_5 VgRes;
typedef Int ErrorKind;
struct _Error;
typedef struct _Error Error;
typedef Int SuppKind;
struct _Supp;
typedef struct _Supp Supp;
enum __anonenum_IRType_6 {
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
typedef enum __anonenum_IRType_6 IRType;
enum __anonenum_IREndness_7 {
    Iend_LE = 73728,
    Iend_BE = 73729
} ;
typedef enum __anonenum_IREndness_7 IREndness;
enum __anonenum_IRConstTag_8 {
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
typedef enum __anonenum_IRConstTag_8 IRConstTag;
union __anonunion_Ico_9 {
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
   union __anonunion_Ico_9 Ico ;
};
typedef struct _IRConst IRConst;
struct __anonstruct_IRCallee_10 {
   Int regparms ;
   HChar *name ;
   void *addr ;
   UInt mcx_mask ;
};
typedef struct __anonstruct_IRCallee_10 IRCallee;
struct __anonstruct_IRRegArray_11 {
   Int base ;
   IRType elemTy ;
   Int nElems ;
};
typedef struct __anonstruct_IRRegArray_11 IRRegArray;
typedef UInt IRTemp;
enum __anonenum_IROp_12 {
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
    Iop_I32UtoF64 = 82087,
    Iop_F32toI16S = 82088,
    Iop_F32toI32S = 82089,
    Iop_F32toI64S = 82090,
    Iop_I16StoF32 = 82091,
    Iop_I32StoF32 = 82092,
    Iop_I64StoF32 = 82093,
    Iop_F32toF64 = 82094,
    Iop_F64toF32 = 82095,
    Iop_ReinterpF64asI64 = 82096,
    Iop_ReinterpI64asF64 = 82097,
    Iop_ReinterpF32asI32 = 82098,
    Iop_ReinterpI32asF32 = 82099,
    Iop_F64HLtoF128 = 82100,
    Iop_F128HItoF64 = 82101,
    Iop_F128LOtoF64 = 82102,
    Iop_AddF128 = 82103,
    Iop_SubF128 = 82104,
    Iop_MulF128 = 82105,
    Iop_DivF128 = 82106,
    Iop_NegF128 = 82107,
    Iop_AbsF128 = 82108,
    Iop_SqrtF128 = 82109,
    Iop_I32StoF128 = 82110,
    Iop_I64StoF128 = 82111,
    Iop_F32toF128 = 82112,
    Iop_F64toF128 = 82113,
    Iop_F128toI32S = 82114,
    Iop_F128toI64S = 82115,
    Iop_F128toF64 = 82116,
    Iop_F128toF32 = 82117,
    Iop_AtanF64 = 82118,
    Iop_Yl2xF64 = 82119,
    Iop_Yl2xp1F64 = 82120,
    Iop_PRemF64 = 82121,
    Iop_PRemC3210F64 = 82122,
    Iop_PRem1F64 = 82123,
    Iop_PRem1C3210F64 = 82124,
    Iop_ScaleF64 = 82125,
    Iop_SinF64 = 82126,
    Iop_CosF64 = 82127,
    Iop_TanF64 = 82128,
    Iop_2xm1F64 = 82129,
    Iop_RoundF64toInt = 82130,
    Iop_RoundF32toInt = 82131,
    Iop_MAddF32 = 82132,
    Iop_MSubF32 = 82133,
    Iop_MAddF64 = 82134,
    Iop_MSubF64 = 82135,
    Iop_MAddF64r32 = 82136,
    Iop_MSubF64r32 = 82137,
    Iop_Est5FRSqrt = 82138,
    Iop_RoundF64toF64_NEAREST = 82139,
    Iop_RoundF64toF64_NegINF = 82140,
    Iop_RoundF64toF64_PosINF = 82141,
    Iop_RoundF64toF64_ZERO = 82142,
    Iop_TruncF64asF32 = 82143,
    Iop_RoundF64toF32 = 82144,
    Iop_CalcFPRF = 82145,
    Iop_Add16x2 = 82146,
    Iop_Sub16x2 = 82147,
    Iop_QAdd16Sx2 = 82148,
    Iop_QAdd16Ux2 = 82149,
    Iop_QSub16Sx2 = 82150,
    Iop_QSub16Ux2 = 82151,
    Iop_HAdd16Ux2 = 82152,
    Iop_HAdd16Sx2 = 82153,
    Iop_HSub16Ux2 = 82154,
    Iop_HSub16Sx2 = 82155,
    Iop_Add8x4 = 82156,
    Iop_Sub8x4 = 82157,
    Iop_QAdd8Sx4 = 82158,
    Iop_QAdd8Ux4 = 82159,
    Iop_QSub8Sx4 = 82160,
    Iop_QSub8Ux4 = 82161,
    Iop_HAdd8Ux4 = 82162,
    Iop_HAdd8Sx4 = 82163,
    Iop_HSub8Ux4 = 82164,
    Iop_HSub8Sx4 = 82165,
    Iop_Sad8Ux4 = 82166,
    Iop_CmpNEZ16x2 = 82167,
    Iop_CmpNEZ8x4 = 82168,
    Iop_I32UtoFx2 = 82169,
    Iop_I32StoFx2 = 82170,
    Iop_FtoI32Ux2_RZ = 82171,
    Iop_FtoI32Sx2_RZ = 82172,
    Iop_F32ToFixed32Ux2_RZ = 82173,
    Iop_F32ToFixed32Sx2_RZ = 82174,
    Iop_Fixed32UToF32x2_RN = 82175,
    Iop_Fixed32SToF32x2_RN = 82176,
    Iop_Max32Fx2 = 82177,
    Iop_Min32Fx2 = 82178,
    Iop_PwMax32Fx2 = 82179,
    Iop_PwMin32Fx2 = 82180,
    Iop_CmpEQ32Fx2 = 82181,
    Iop_CmpGT32Fx2 = 82182,
    Iop_CmpGE32Fx2 = 82183,
    Iop_Recip32Fx2 = 82184,
    Iop_Recps32Fx2 = 82185,
    Iop_Rsqrte32Fx2 = 82186,
    Iop_Rsqrts32Fx2 = 82187,
    Iop_Neg32Fx2 = 82188,
    Iop_Abs32Fx2 = 82189,
    Iop_CmpNEZ8x8 = 82190,
    Iop_CmpNEZ16x4 = 82191,
    Iop_CmpNEZ32x2 = 82192,
    Iop_Add8x8 = 82193,
    Iop_Add16x4 = 82194,
    Iop_Add32x2 = 82195,
    Iop_QAdd8Ux8 = 82196,
    Iop_QAdd16Ux4 = 82197,
    Iop_QAdd32Ux2 = 82198,
    Iop_QAdd64Ux1 = 82199,
    Iop_QAdd8Sx8 = 82200,
    Iop_QAdd16Sx4 = 82201,
    Iop_QAdd32Sx2 = 82202,
    Iop_QAdd64Sx1 = 82203,
    Iop_PwAdd8x8 = 82204,
    Iop_PwAdd16x4 = 82205,
    Iop_PwAdd32x2 = 82206,
    Iop_PwMax8Sx8 = 82207,
    Iop_PwMax16Sx4 = 82208,
    Iop_PwMax32Sx2 = 82209,
    Iop_PwMax8Ux8 = 82210,
    Iop_PwMax16Ux4 = 82211,
    Iop_PwMax32Ux2 = 82212,
    Iop_PwMin8Sx8 = 82213,
    Iop_PwMin16Sx4 = 82214,
    Iop_PwMin32Sx2 = 82215,
    Iop_PwMin8Ux8 = 82216,
    Iop_PwMin16Ux4 = 82217,
    Iop_PwMin32Ux2 = 82218,
    Iop_PwAddL8Ux8 = 82219,
    Iop_PwAddL16Ux4 = 82220,
    Iop_PwAddL32Ux2 = 82221,
    Iop_PwAddL8Sx8 = 82222,
    Iop_PwAddL16Sx4 = 82223,
    Iop_PwAddL32Sx2 = 82224,
    Iop_Sub8x8 = 82225,
    Iop_Sub16x4 = 82226,
    Iop_Sub32x2 = 82227,
    Iop_QSub8Ux8 = 82228,
    Iop_QSub16Ux4 = 82229,
    Iop_QSub32Ux2 = 82230,
    Iop_QSub64Ux1 = 82231,
    Iop_QSub8Sx8 = 82232,
    Iop_QSub16Sx4 = 82233,
    Iop_QSub32Sx2 = 82234,
    Iop_QSub64Sx1 = 82235,
    Iop_Abs8x8 = 82236,
    Iop_Abs16x4 = 82237,
    Iop_Abs32x2 = 82238,
    Iop_Mul8x8 = 82239,
    Iop_Mul16x4 = 82240,
    Iop_Mul32x2 = 82241,
    Iop_Mul32Fx2 = 82242,
    Iop_MulHi16Ux4 = 82243,
    Iop_MulHi16Sx4 = 82244,
    Iop_PolynomialMul8x8 = 82245,
    Iop_QDMulHi16Sx4 = 82246,
    Iop_QDMulHi32Sx2 = 82247,
    Iop_QRDMulHi16Sx4 = 82248,
    Iop_QRDMulHi32Sx2 = 82249,
    Iop_Avg8Ux8 = 82250,
    Iop_Avg16Ux4 = 82251,
    Iop_Max8Sx8 = 82252,
    Iop_Max16Sx4 = 82253,
    Iop_Max32Sx2 = 82254,
    Iop_Max8Ux8 = 82255,
    Iop_Max16Ux4 = 82256,
    Iop_Max32Ux2 = 82257,
    Iop_Min8Sx8 = 82258,
    Iop_Min16Sx4 = 82259,
    Iop_Min32Sx2 = 82260,
    Iop_Min8Ux8 = 82261,
    Iop_Min16Ux4 = 82262,
    Iop_Min32Ux2 = 82263,
    Iop_CmpEQ8x8 = 82264,
    Iop_CmpEQ16x4 = 82265,
    Iop_CmpEQ32x2 = 82266,
    Iop_CmpGT8Ux8 = 82267,
    Iop_CmpGT16Ux4 = 82268,
    Iop_CmpGT32Ux2 = 82269,
    Iop_CmpGT8Sx8 = 82270,
    Iop_CmpGT16Sx4 = 82271,
    Iop_CmpGT32Sx2 = 82272,
    Iop_Cnt8x8 = 82273,
    Iop_Clz8Sx8 = 82274,
    Iop_Clz16Sx4 = 82275,
    Iop_Clz32Sx2 = 82276,
    Iop_Cls8Sx8 = 82277,
    Iop_Cls16Sx4 = 82278,
    Iop_Cls32Sx2 = 82279,
    Iop_Shl8x8 = 82280,
    Iop_Shl16x4 = 82281,
    Iop_Shl32x2 = 82282,
    Iop_Shr8x8 = 82283,
    Iop_Shr16x4 = 82284,
    Iop_Shr32x2 = 82285,
    Iop_Sar8x8 = 82286,
    Iop_Sar16x4 = 82287,
    Iop_Sar32x2 = 82288,
    Iop_Sal8x8 = 82289,
    Iop_Sal16x4 = 82290,
    Iop_Sal32x2 = 82291,
    Iop_Sal64x1 = 82292,
    Iop_ShlN8x8 = 82293,
    Iop_ShlN16x4 = 82294,
    Iop_ShlN32x2 = 82295,
    Iop_ShrN8x8 = 82296,
    Iop_ShrN16x4 = 82297,
    Iop_ShrN32x2 = 82298,
    Iop_SarN8x8 = 82299,
    Iop_SarN16x4 = 82300,
    Iop_SarN32x2 = 82301,
    Iop_QShl8x8 = 82302,
    Iop_QShl16x4 = 82303,
    Iop_QShl32x2 = 82304,
    Iop_QShl64x1 = 82305,
    Iop_QSal8x8 = 82306,
    Iop_QSal16x4 = 82307,
    Iop_QSal32x2 = 82308,
    Iop_QSal64x1 = 82309,
    Iop_QShlN8Sx8 = 82310,
    Iop_QShlN16Sx4 = 82311,
    Iop_QShlN32Sx2 = 82312,
    Iop_QShlN64Sx1 = 82313,
    Iop_QShlN8x8 = 82314,
    Iop_QShlN16x4 = 82315,
    Iop_QShlN32x2 = 82316,
    Iop_QShlN64x1 = 82317,
    Iop_QSalN8x8 = 82318,
    Iop_QSalN16x4 = 82319,
    Iop_QSalN32x2 = 82320,
    Iop_QSalN64x1 = 82321,
    Iop_QNarrow16Ux4 = 82322,
    Iop_QNarrow16Sx4 = 82323,
    Iop_QNarrow32Sx2 = 82324,
    Iop_InterleaveHI8x8 = 82325,
    Iop_InterleaveHI16x4 = 82326,
    Iop_InterleaveHI32x2 = 82327,
    Iop_InterleaveLO8x8 = 82328,
    Iop_InterleaveLO16x4 = 82329,
    Iop_InterleaveLO32x2 = 82330,
    Iop_InterleaveOddLanes8x8 = 82331,
    Iop_InterleaveEvenLanes8x8 = 82332,
    Iop_InterleaveOddLanes16x4 = 82333,
    Iop_InterleaveEvenLanes16x4 = 82334,
    Iop_CatOddLanes8x8 = 82335,
    Iop_CatOddLanes16x4 = 82336,
    Iop_CatEvenLanes8x8 = 82337,
    Iop_CatEvenLanes16x4 = 82338,
    Iop_GetElem8x8 = 82339,
    Iop_GetElem16x4 = 82340,
    Iop_GetElem32x2 = 82341,
    Iop_SetElem8x8 = 82342,
    Iop_SetElem16x4 = 82343,
    Iop_SetElem32x2 = 82344,
    Iop_Dup8x8 = 82345,
    Iop_Dup16x4 = 82346,
    Iop_Dup32x2 = 82347,
    Iop_Extract64 = 82348,
    Iop_Reverse16_8x8 = 82349,
    Iop_Reverse32_8x8 = 82350,
    Iop_Reverse32_16x4 = 82351,
    Iop_Reverse64_8x8 = 82352,
    Iop_Reverse64_16x4 = 82353,
    Iop_Reverse64_32x2 = 82354,
    Iop_Perm8x8 = 82355,
    Iop_Recip32x2 = 82356,
    Iop_Rsqrte32x2 = 82357,
    Iop_Add32Fx4 = 82358,
    Iop_Sub32Fx4 = 82359,
    Iop_Mul32Fx4 = 82360,
    Iop_Div32Fx4 = 82361,
    Iop_Max32Fx4 = 82362,
    Iop_Min32Fx4 = 82363,
    Iop_Add32Fx2 = 82364,
    Iop_Sub32Fx2 = 82365,
    Iop_CmpEQ32Fx4 = 82366,
    Iop_CmpLT32Fx4 = 82367,
    Iop_CmpLE32Fx4 = 82368,
    Iop_CmpUN32Fx4 = 82369,
    Iop_CmpGT32Fx4 = 82370,
    Iop_CmpGE32Fx4 = 82371,
    Iop_Abs32Fx4 = 82372,
    Iop_PwMax32Fx4 = 82373,
    Iop_PwMin32Fx4 = 82374,
    Iop_Sqrt32Fx4 = 82375,
    Iop_RSqrt32Fx4 = 82376,
    Iop_Neg32Fx4 = 82377,
    Iop_Recip32Fx4 = 82378,
    Iop_Recps32Fx4 = 82379,
    Iop_Rsqrte32Fx4 = 82380,
    Iop_Rsqrts32Fx4 = 82381,
    Iop_I32UtoFx4 = 82382,
    Iop_I32StoFx4 = 82383,
    Iop_FtoI32Ux4_RZ = 82384,
    Iop_FtoI32Sx4_RZ = 82385,
    Iop_QFtoI32Ux4_RZ = 82386,
    Iop_QFtoI32Sx4_RZ = 82387,
    Iop_RoundF32x4_RM = 82388,
    Iop_RoundF32x4_RP = 82389,
    Iop_RoundF32x4_RN = 82390,
    Iop_RoundF32x4_RZ = 82391,
    Iop_F32ToFixed32Ux4_RZ = 82392,
    Iop_F32ToFixed32Sx4_RZ = 82393,
    Iop_Fixed32UToF32x4_RN = 82394,
    Iop_Fixed32SToF32x4_RN = 82395,
    Iop_F32toF16x4 = 82396,
    Iop_F16toF32x4 = 82397,
    Iop_Add32F0x4 = 82398,
    Iop_Sub32F0x4 = 82399,
    Iop_Mul32F0x4 = 82400,
    Iop_Div32F0x4 = 82401,
    Iop_Max32F0x4 = 82402,
    Iop_Min32F0x4 = 82403,
    Iop_CmpEQ32F0x4 = 82404,
    Iop_CmpLT32F0x4 = 82405,
    Iop_CmpLE32F0x4 = 82406,
    Iop_CmpUN32F0x4 = 82407,
    Iop_Recip32F0x4 = 82408,
    Iop_Sqrt32F0x4 = 82409,
    Iop_RSqrt32F0x4 = 82410,
    Iop_Add64Fx2 = 82411,
    Iop_Sub64Fx2 = 82412,
    Iop_Mul64Fx2 = 82413,
    Iop_Div64Fx2 = 82414,
    Iop_Max64Fx2 = 82415,
    Iop_Min64Fx2 = 82416,
    Iop_CmpEQ64Fx2 = 82417,
    Iop_CmpLT64Fx2 = 82418,
    Iop_CmpLE64Fx2 = 82419,
    Iop_CmpUN64Fx2 = 82420,
    Iop_Recip64Fx2 = 82421,
    Iop_Sqrt64Fx2 = 82422,
    Iop_RSqrt64Fx2 = 82423,
    Iop_Add64F0x2 = 82424,
    Iop_Sub64F0x2 = 82425,
    Iop_Mul64F0x2 = 82426,
    Iop_Div64F0x2 = 82427,
    Iop_Max64F0x2 = 82428,
    Iop_Min64F0x2 = 82429,
    Iop_CmpEQ64F0x2 = 82430,
    Iop_CmpLT64F0x2 = 82431,
    Iop_CmpLE64F0x2 = 82432,
    Iop_CmpUN64F0x2 = 82433,
    Iop_Recip64F0x2 = 82434,
    Iop_Sqrt64F0x2 = 82435,
    Iop_RSqrt64F0x2 = 82436,
    Iop_V128to64 = 82437,
    Iop_V128HIto64 = 82438,
    Iop_64HLtoV128 = 82439,
    Iop_64UtoV128 = 82440,
    Iop_SetV128lo64 = 82441,
    Iop_32UtoV128 = 82442,
    Iop_V128to32 = 82443,
    Iop_SetV128lo32 = 82444,
    Iop_NotV128 = 82445,
    Iop_AndV128 = 82446,
    Iop_OrV128 = 82447,
    Iop_XorV128 = 82448,
    Iop_ShlV128 = 82449,
    Iop_ShrV128 = 82450,
    Iop_CmpNEZ8x16 = 82451,
    Iop_CmpNEZ16x8 = 82452,
    Iop_CmpNEZ32x4 = 82453,
    Iop_CmpNEZ64x2 = 82454,
    Iop_Add8x16 = 82455,
    Iop_Add16x8 = 82456,
    Iop_Add32x4 = 82457,
    Iop_Add64x2 = 82458,
    Iop_QAdd8Ux16 = 82459,
    Iop_QAdd16Ux8 = 82460,
    Iop_QAdd32Ux4 = 82461,
    Iop_QAdd64Ux2 = 82462,
    Iop_QAdd8Sx16 = 82463,
    Iop_QAdd16Sx8 = 82464,
    Iop_QAdd32Sx4 = 82465,
    Iop_QAdd64Sx2 = 82466,
    Iop_Sub8x16 = 82467,
    Iop_Sub16x8 = 82468,
    Iop_Sub32x4 = 82469,
    Iop_Sub64x2 = 82470,
    Iop_QSub8Ux16 = 82471,
    Iop_QSub16Ux8 = 82472,
    Iop_QSub32Ux4 = 82473,
    Iop_QSub64Ux2 = 82474,
    Iop_QSub8Sx16 = 82475,
    Iop_QSub16Sx8 = 82476,
    Iop_QSub32Sx4 = 82477,
    Iop_QSub64Sx2 = 82478,
    Iop_Mul8x16 = 82479,
    Iop_Mul16x8 = 82480,
    Iop_Mul32x4 = 82481,
    Iop_MulHi16Ux8 = 82482,
    Iop_MulHi32Ux4 = 82483,
    Iop_MulHi16Sx8 = 82484,
    Iop_MulHi32Sx4 = 82485,
    Iop_MullEven8Ux16 = 82486,
    Iop_MullEven16Ux8 = 82487,
    Iop_MullEven8Sx16 = 82488,
    Iop_MullEven16Sx8 = 82489,
    Iop_Mull8Ux8 = 82490,
    Iop_Mull8Sx8 = 82491,
    Iop_Mull16Ux4 = 82492,
    Iop_Mull16Sx4 = 82493,
    Iop_Mull32Ux2 = 82494,
    Iop_Mull32Sx2 = 82495,
    Iop_QDMulHi16Sx8 = 82496,
    Iop_QDMulHi32Sx4 = 82497,
    Iop_QRDMulHi16Sx8 = 82498,
    Iop_QRDMulHi32Sx4 = 82499,
    Iop_QDMulLong16Sx4 = 82500,
    Iop_QDMulLong32Sx2 = 82501,
    Iop_PolynomialMul8x16 = 82502,
    Iop_PolynomialMull8x8 = 82503,
    Iop_PwAdd8x16 = 82504,
    Iop_PwAdd16x8 = 82505,
    Iop_PwAdd32x4 = 82506,
    Iop_PwAdd32Fx2 = 82507,
    Iop_PwAddL8Ux16 = 82508,
    Iop_PwAddL16Ux8 = 82509,
    Iop_PwAddL32Ux4 = 82510,
    Iop_PwAddL8Sx16 = 82511,
    Iop_PwAddL16Sx8 = 82512,
    Iop_PwAddL32Sx4 = 82513,
    Iop_Abs8x16 = 82514,
    Iop_Abs16x8 = 82515,
    Iop_Abs32x4 = 82516,
    Iop_Avg8Ux16 = 82517,
    Iop_Avg16Ux8 = 82518,
    Iop_Avg32Ux4 = 82519,
    Iop_Avg8Sx16 = 82520,
    Iop_Avg16Sx8 = 82521,
    Iop_Avg32Sx4 = 82522,
    Iop_Max8Sx16 = 82523,
    Iop_Max16Sx8 = 82524,
    Iop_Max32Sx4 = 82525,
    Iop_Max8Ux16 = 82526,
    Iop_Max16Ux8 = 82527,
    Iop_Max32Ux4 = 82528,
    Iop_Min8Sx16 = 82529,
    Iop_Min16Sx8 = 82530,
    Iop_Min32Sx4 = 82531,
    Iop_Min8Ux16 = 82532,
    Iop_Min16Ux8 = 82533,
    Iop_Min32Ux4 = 82534,
    Iop_CmpEQ8x16 = 82535,
    Iop_CmpEQ16x8 = 82536,
    Iop_CmpEQ32x4 = 82537,
    Iop_CmpGT8Sx16 = 82538,
    Iop_CmpGT16Sx8 = 82539,
    Iop_CmpGT32Sx4 = 82540,
    Iop_CmpGT64Sx2 = 82541,
    Iop_CmpGT8Ux16 = 82542,
    Iop_CmpGT16Ux8 = 82543,
    Iop_CmpGT32Ux4 = 82544,
    Iop_Cnt8x16 = 82545,
    Iop_Clz8Sx16 = 82546,
    Iop_Clz16Sx8 = 82547,
    Iop_Clz32Sx4 = 82548,
    Iop_Cls8Sx16 = 82549,
    Iop_Cls16Sx8 = 82550,
    Iop_Cls32Sx4 = 82551,
    Iop_ShlN8x16 = 82552,
    Iop_ShlN16x8 = 82553,
    Iop_ShlN32x4 = 82554,
    Iop_ShlN64x2 = 82555,
    Iop_ShrN8x16 = 82556,
    Iop_ShrN16x8 = 82557,
    Iop_ShrN32x4 = 82558,
    Iop_ShrN64x2 = 82559,
    Iop_SarN8x16 = 82560,
    Iop_SarN16x8 = 82561,
    Iop_SarN32x4 = 82562,
    Iop_SarN64x2 = 82563,
    Iop_Shl8x16 = 82564,
    Iop_Shl16x8 = 82565,
    Iop_Shl32x4 = 82566,
    Iop_Shl64x2 = 82567,
    Iop_Shr8x16 = 82568,
    Iop_Shr16x8 = 82569,
    Iop_Shr32x4 = 82570,
    Iop_Shr64x2 = 82571,
    Iop_Sar8x16 = 82572,
    Iop_Sar16x8 = 82573,
    Iop_Sar32x4 = 82574,
    Iop_Sar64x2 = 82575,
    Iop_Sal8x16 = 82576,
    Iop_Sal16x8 = 82577,
    Iop_Sal32x4 = 82578,
    Iop_Sal64x2 = 82579,
    Iop_Rol8x16 = 82580,
    Iop_Rol16x8 = 82581,
    Iop_Rol32x4 = 82582,
    Iop_QShl8x16 = 82583,
    Iop_QShl16x8 = 82584,
    Iop_QShl32x4 = 82585,
    Iop_QShl64x2 = 82586,
    Iop_QSal8x16 = 82587,
    Iop_QSal16x8 = 82588,
    Iop_QSal32x4 = 82589,
    Iop_QSal64x2 = 82590,
    Iop_QShlN8Sx16 = 82591,
    Iop_QShlN16Sx8 = 82592,
    Iop_QShlN32Sx4 = 82593,
    Iop_QShlN64Sx2 = 82594,
    Iop_QShlN8x16 = 82595,
    Iop_QShlN16x8 = 82596,
    Iop_QShlN32x4 = 82597,
    Iop_QShlN64x2 = 82598,
    Iop_QSalN8x16 = 82599,
    Iop_QSalN16x8 = 82600,
    Iop_QSalN32x4 = 82601,
    Iop_QSalN64x2 = 82602,
    Iop_QNarrow16Ux8 = 82603,
    Iop_QNarrow32Ux4 = 82604,
    Iop_QNarrow16Sx8 = 82605,
    Iop_QNarrow32Sx4 = 82606,
    Iop_Narrow16x8 = 82607,
    Iop_Narrow32x4 = 82608,
    Iop_Shorten16x8 = 82609,
    Iop_Shorten32x4 = 82610,
    Iop_Shorten64x2 = 82611,
    Iop_QShortenS16Sx8 = 82612,
    Iop_QShortenS32Sx4 = 82613,
    Iop_QShortenS64Sx2 = 82614,
    Iop_QShortenU16Sx8 = 82615,
    Iop_QShortenU32Sx4 = 82616,
    Iop_QShortenU64Sx2 = 82617,
    Iop_QShortenU16Ux8 = 82618,
    Iop_QShortenU32Ux4 = 82619,
    Iop_QShortenU64Ux2 = 82620,
    Iop_Longen8Ux8 = 82621,
    Iop_Longen16Ux4 = 82622,
    Iop_Longen32Ux2 = 82623,
    Iop_Longen8Sx8 = 82624,
    Iop_Longen16Sx4 = 82625,
    Iop_Longen32Sx2 = 82626,
    Iop_InterleaveHI8x16 = 82627,
    Iop_InterleaveHI16x8 = 82628,
    Iop_InterleaveHI32x4 = 82629,
    Iop_InterleaveHI64x2 = 82630,
    Iop_InterleaveLO8x16 = 82631,
    Iop_InterleaveLO16x8 = 82632,
    Iop_InterleaveLO32x4 = 82633,
    Iop_InterleaveLO64x2 = 82634,
    Iop_InterleaveOddLanes8x16 = 82635,
    Iop_InterleaveEvenLanes8x16 = 82636,
    Iop_InterleaveOddLanes16x8 = 82637,
    Iop_InterleaveEvenLanes16x8 = 82638,
    Iop_InterleaveOddLanes32x4 = 82639,
    Iop_InterleaveEvenLanes32x4 = 82640,
    Iop_CatOddLanes8x16 = 82641,
    Iop_CatOddLanes16x8 = 82642,
    Iop_CatOddLanes32x4 = 82643,
    Iop_CatEvenLanes8x16 = 82644,
    Iop_CatEvenLanes16x8 = 82645,
    Iop_CatEvenLanes32x4 = 82646,
    Iop_GetElem8x16 = 82647,
    Iop_GetElem16x8 = 82648,
    Iop_GetElem32x4 = 82649,
    Iop_GetElem64x2 = 82650,
    Iop_Dup8x16 = 82651,
    Iop_Dup16x8 = 82652,
    Iop_Dup32x4 = 82653,
    Iop_ExtractV128 = 82654,
    Iop_Reverse16_8x16 = 82655,
    Iop_Reverse32_8x16 = 82656,
    Iop_Reverse32_16x8 = 82657,
    Iop_Reverse64_8x16 = 82658,
    Iop_Reverse64_16x8 = 82659,
    Iop_Reverse64_32x4 = 82660,
    Iop_Perm8x16 = 82661,
    Iop_Recip32x4 = 82662,
    Iop_Rsqrte32x4 = 82663
} ;
typedef enum __anonenum_IROp_12 IROp;
enum __anonenum_IRRoundingMode_13 {
    Irrm_NEAREST = 0,
    Irrm_NegINF = 1,
    Irrm_PosINF = 2,
    Irrm_ZERO = 3
} ;
typedef enum __anonenum_IRRoundingMode_13 IRRoundingMode;
enum __anonenum_IRCmpF64Result_14 {
    Ircr_UN = 69,
    Ircr_LT = 1,
    Ircr_GT = 0,
    Ircr_EQ = 64
} ;
typedef enum __anonenum_IRCmpF64Result_14 IRCmpF64Result;
typedef IRCmpF64Result IRCmpF32Result;
typedef IRCmpF64Result IRCmpF128Result;
enum __anonenum_IRExprTag_15 {
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
typedef enum __anonenum_IRExprTag_15 IRExprTag;
struct _IRExpr;
typedef struct _IRExpr IRExpr;
struct __anonstruct_Binder_17 {
   Int binder ;
};
struct __anonstruct_Get_18 {
   Int offset ;
   IRType ty ;
};
struct __anonstruct_GetI_19 {
   IRRegArray *descr ;
   IRExpr *ix ;
   Int bias ;
};
struct __anonstruct_RdTmp_20 {
   IRTemp tmp ;
};
struct __anonstruct_Qop_21 {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
   IRExpr *arg3 ;
   IRExpr *arg4 ;
};
struct __anonstruct_Triop_22 {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
   IRExpr *arg3 ;
};
struct __anonstruct_Binop_23 {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
};
struct __anonstruct_Unop_24 {
   IROp op ;
   IRExpr *arg ;
};
struct __anonstruct_Load_25 {
   IREndness end ;
   IRType ty ;
   IRExpr *addr ;
};
struct __anonstruct_Const_26 {
   IRConst *con ;
};
struct __anonstruct_CCall_27 {
   IRCallee *cee ;
   IRType retty ;
   IRExpr **args ;
};
struct __anonstruct_Mux0X_28 {
   IRExpr *cond ;
   IRExpr *expr0 ;
   IRExpr *exprX ;
};
union __anonunion_Iex_16 {
   struct __anonstruct_Binder_17 Binder ;
   struct __anonstruct_Get_18 Get ;
   struct __anonstruct_GetI_19 GetI ;
   struct __anonstruct_RdTmp_20 RdTmp ;
   struct __anonstruct_Qop_21 Qop ;
   struct __anonstruct_Triop_22 Triop ;
   struct __anonstruct_Binop_23 Binop ;
   struct __anonstruct_Unop_24 Unop ;
   struct __anonstruct_Load_25 Load ;
   struct __anonstruct_Const_26 Const ;
   struct __anonstruct_CCall_27 CCall ;
   struct __anonstruct_Mux0X_28 Mux0X ;
};
struct _IRExpr {
   IRExprTag tag ;
   union __anonunion_Iex_16 Iex ;
};
enum __anonenum_IRJumpKind_29 {
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
typedef enum __anonenum_IRJumpKind_29 IRJumpKind;
enum __anonenum_IREffect_30 {
    Ifx_None = 94208,
    Ifx_Read = 94209,
    Ifx_Write = 94210,
    Ifx_Modify = 94211
} ;
typedef enum __anonenum_IREffect_30 IREffect;
struct __anonstruct_fxState_32 {
   IREffect fx ;
   Int offset ;
   Int size ;
};
struct __anonstruct_IRDirty_31 {
   IRCallee *cee ;
   IRExpr *guard ;
   IRExpr **args ;
   IRTemp tmp ;
   IREffect mFx ;
   IRExpr *mAddr ;
   Int mSize ;
   Bool needsBBP ;
   Int nFxState ;
   struct __anonstruct_fxState_32 fxState[7] ;
};
typedef struct __anonstruct_IRDirty_31 IRDirty;
enum __anonenum_IRMBusEvent_33 {
    Imbe_Fence = 98304
} ;
typedef enum __anonenum_IRMBusEvent_33 IRMBusEvent;
struct __anonstruct_IRCAS_34 {
   IRTemp oldHi ;
   IRTemp oldLo ;
   IREndness end ;
   IRExpr *addr ;
   IRExpr *expdHi ;
   IRExpr *expdLo ;
   IRExpr *dataHi ;
   IRExpr *dataLo ;
};
typedef struct __anonstruct_IRCAS_34 IRCAS;
enum __anonenum_IRStmtTag_35 {
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
typedef enum __anonenum_IRStmtTag_35 IRStmtTag;
struct __anonstruct_NoOp_37 {

};
struct __anonstruct_IMark_38 {
   Addr64 addr ;
   Int len ;
};
struct __anonstruct_AbiHint_39 {
   IRExpr *base ;
   Int len ;
   IRExpr *nia ;
};
struct __anonstruct_Put_40 {
   Int offset ;
   IRExpr *data ;
};
struct __anonstruct_PutI_41 {
   IRRegArray *descr ;
   IRExpr *ix ;
   Int bias ;
   IRExpr *data ;
};
struct __anonstruct_WrTmp_42 {
   IRTemp tmp ;
   IRExpr *data ;
};
struct __anonstruct_Store_43 {
   IREndness end ;
   IRExpr *addr ;
   IRExpr *data ;
};
struct __anonstruct_CAS_44 {
   IRCAS *details ;
};
struct __anonstruct_LLSC_45 {
   IREndness end ;
   IRTemp result ;
   IRExpr *addr ;
   IRExpr *storedata ;
};
struct __anonstruct_Dirty_46 {
   IRDirty *details ;
};
struct __anonstruct_MBE_47 {
   IRMBusEvent event ;
};
struct __anonstruct_Exit_48 {
   IRExpr *guard ;
   IRJumpKind jk ;
   IRConst *dst ;
};
union __anonunion_Ist_36 {
   struct __anonstruct_NoOp_37 NoOp ;
   struct __anonstruct_IMark_38 IMark ;
   struct __anonstruct_AbiHint_39 AbiHint ;
   struct __anonstruct_Put_40 Put ;
   struct __anonstruct_PutI_41 PutI ;
   struct __anonstruct_WrTmp_42 WrTmp ;
   struct __anonstruct_Store_43 Store ;
   struct __anonstruct_CAS_44 CAS ;
   struct __anonstruct_LLSC_45 LLSC ;
   struct __anonstruct_Dirty_46 Dirty ;
   struct __anonstruct_MBE_47 MBE ;
   struct __anonstruct_Exit_48 Exit ;
};
struct _IRStmt {
   IRStmtTag tag ;
   union __anonunion_Ist_36 Ist ;
};
typedef struct _IRStmt IRStmt;
struct __anonstruct_IRTypeEnv_49 {
   IRType *types ;
   Int types_size ;
   Int types_used ;
};
typedef struct __anonstruct_IRTypeEnv_49 IRTypeEnv;
struct __anonstruct_IRSB_50 {
   IRTypeEnv *tyenv ;
   IRStmt **stmts ;
   Int stmts_size ;
   Int stmts_used ;
   IRExpr *next ;
   IRJumpKind jumpkind ;
};
typedef struct __anonstruct_IRSB_50 IRSB;
enum __anonenum_VexArch_51 {
    VexArch_INVALID = 0,
    VexArchX86 = 1,
    VexArchAMD64 = 2,
    VexArchARM = 3,
    VexArchPPC32 = 4,
    VexArchPPC64 = 5,
    VexArchS390X = 6
} ;
typedef enum __anonenum_VexArch_51 VexArch;
struct __anonstruct_VexArchInfo_52 {
   UInt hwcaps ;
   Int ppc_cache_line_szB ;
   UInt ppc_dcbz_szB ;
   UInt ppc_dcbzl_szB ;
};
typedef struct __anonstruct_VexArchInfo_52 VexArchInfo;
struct __anonstruct_VexAbiInfo_53 {
   Int guest_stack_redzone_size ;
   Bool guest_amd64_assume_fs_is_zero ;
   Bool guest_amd64_assume_gs_is_0x60 ;
   Bool guest_ppc_zap_RZ_at_blr ;
   Bool (*guest_ppc_zap_RZ_at_bl)(Addr64  ) ;
   Bool guest_ppc_sc_continues_at_LR ;
   Bool host_ppc_calls_use_fndescrs ;
   Bool host_ppc32_regalign_int64_args ;
};
typedef struct __anonstruct_VexAbiInfo_53 VexAbiInfo;
struct __anonstruct_VexControl_54 {
   Int iropt_verbosity ;
   Int iropt_level ;
   Bool iropt_precise_memory_exns ;
   Int iropt_unroll_thresh ;
   Int guest_max_insns ;
   Int guest_chase_thresh ;
   Bool guest_chase_cond ;
};
typedef struct __anonstruct_VexControl_54 VexControl;
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
enum __anonenum_VexTranslateResult_57 {
    VexTransOK = 0,
    VexTransAccessFail = 1,
    VexTransOutputFull = 2
} ;
typedef enum __anonenum_VexTranslateResult_57 VexTranslateResult;
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
   Bool do_self_check ;
   Bool (*preamble_function)(void * , IRSB * ) ;
   Int traceflags ;
   void *dispatch ;
};
typedef struct __anonstruct_VexTranslateArgs_59 VexTranslateArgs;
struct __anonstruct_VgCallbackClosure_60 {
   Addr64 nraddr ;
   Addr64 readdr ;
   ThreadId tid ;
};
typedef struct __anonstruct_VgCallbackClosure_60 VgCallbackClosure;
enum __anonenum_CorePart_61 {
    Vg_CoreStartup = 1,
    Vg_CoreSignal = 2,
    Vg_CoreSysCall = 3,
    Vg_CoreSysCallArgInMem = 4,
    Vg_CoreTranslate = 5,
    Vg_CoreClientReq = 6
} ;
typedef enum __anonenum_CorePart_61 CorePart;
struct _VgHashNode {
   struct _VgHashNode *next ;
   UWord key ;
};
typedef struct _VgHashNode VgHashNode;
struct _VgHashTable;
typedef struct _VgHashTable *VgHashTable;
struct _XArray;
typedef struct _XArray XArray;
typedef Addr *StackTrace;
struct _WordFM;
typedef struct _WordFM WordFM;
struct _WordBag;
typedef struct _WordBag WordBag;
enum __anonenum_Vg_FnNameKind_62 {
    Vg_FnNameNormal = 0,
    Vg_FnNameMain = 1,
    Vg_FnNameBelowMain = 2
} ;
typedef enum __anonenum_Vg_FnNameKind_62 Vg_FnNameKind;
struct __anonstruct_StackBlock_63 {
   PtrdiffT base ;
   SizeT szB ;
   Bool spRel ;
   Bool isVec ;
   HChar name[16] ;
};
typedef struct __anonstruct_StackBlock_63 StackBlock;
struct __anonstruct_GlobalBlock_64 {
   Addr addr ;
   SizeT szB ;
   Bool isVec ;
   HChar name[16] ;
   HChar soname[16] ;
};
typedef struct __anonstruct_GlobalBlock_64 GlobalBlock;
struct _DebugInfo;
typedef struct _DebugInfo DebugInfo;
enum __anonenum_VgSectKind_65 {
    Vg_SectUnknown = 0,
    Vg_SectText = 1,
    Vg_SectData = 2,
    Vg_SectBSS = 3,
    Vg_SectGOT = 4,
    Vg_SectPLT = 5,
    Vg_SectGOTPLT = 6,
    Vg_SectOPD = 7
} ;
typedef enum __anonenum_VgSectKind_65 VgSectKind;
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
struct __anonstruct___vki_kernel_fsid_t_66 {
   int val[2] ;
};
typedef struct __anonstruct___vki_kernel_fsid_t_66 __vki_kernel_fsid_t;
struct __anonstruct___vki_kernel_fd_set_67 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___vki_kernel_fd_set_67 __vki_kernel_fd_set;
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
struct __anonstruct_vki_sigset_t_68 {
   unsigned long sig[2] ;
};
typedef struct __anonstruct_vki_sigset_t_68 vki_sigset_t;
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
struct __anonstruct__kill_70 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
};
struct __anonstruct__timer_71 {
   vki_timer_t _tid ;
   int _overrun ;
   char _pad[sizeof(vki_uid_t ) - sizeof(int )] ;
   vki_sigval_t _sigval ;
   int _sys_private ;
};
struct __anonstruct__rt_72 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
   vki_sigval_t _sigval ;
};
struct __anonstruct__sigchld_73 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
   int _status ;
   vki_clock_t _utime ;
   vki_clock_t _stime ;
};
struct __anonstruct__sigfault_74 {
   void *_addr ;
};
struct __anonstruct__sigpoll_75 {
   long _band ;
   int _fd ;
};
union __anonunion__sifields_69 {
   int _pad[(128U - 3U * sizeof(int )) / sizeof(int )] ;
   struct __anonstruct__kill_70 _kill ;
   struct __anonstruct__timer_71 _timer ;
   struct __anonstruct__rt_72 _rt ;
   struct __anonstruct__sigchld_73 _sigchld ;
   struct __anonstruct__sigfault_74 _sigfault ;
   struct __anonstruct__sigpoll_75 _sigpoll ;
};
struct vki_siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_69 _sifields ;
};
typedef struct vki_siginfo vki_siginfo_t;
struct __anonstruct__sigev_thread_77 {
   void (*_function)(vki_sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_76 {
   int _pad[(64U - (sizeof(int ) * 2U + sizeof(vki_sigval_t ))) / sizeof(int )] ;
   int _tid ;
   struct __anonstruct__sigev_thread_77 _sigev_thread ;
};
struct vki_sigevent {
   vki_sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_76 _sigev_un ;
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
union __anonunion_vki_in6_u_78 {
   __vki_u8 u6_addr8[16] ;
   __vki_u16 u6_addr16[8] ;
   __vki_u32 u6_addr32[4] ;
};
struct vki_in6_addr {
   union __anonunion_vki_in6_u_78 vki_in6_u ;
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
union __anonunion_ifs_ifsu_79 {
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
   union __anonunion_ifs_ifsu_79 ifs_ifsu ;
};
union __anonunion_ifr_ifrn_80 {
   char ifrn_name[16] ;
};
union __anonunion_ifr_ifru_81 {
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
   union __anonunion_ifr_ifrn_80 ifr_ifrn ;
   union __anonunion_ifr_ifru_81 ifr_ifru ;
};
union __anonunion_ifc_ifcu_82 {
   char *ifcu_buf ;
   struct vki_ifreq *ifcu_req ;
};
struct vki_ifconf {
   int ifc_len ;
   union __anonunion_ifc_ifcu_82 ifc_ifcu ;
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
enum __anonenum_83 {
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
struct __anonstruct_vki_isdn_net_ioctl_phone_84 {
   char name[10] ;
   char phone[32] ;
   int outgoing ;
};
typedef struct __anonstruct_vki_isdn_net_ioctl_phone_84 vki_isdn_net_ioctl_phone;
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
struct __anonstruct_86 {
   int  : 0 ;
};
struct __anonstruct_87 {
   int  : 0 ;
};
enum __anonenum_85 {
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
enum __anonenum_88 {
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
union __anonunion_ifr_ifrn_89 {
   char ifrn_name[16] ;
};
struct vki_iwreq {
   union __anonunion_ifr_ifrn_89 ifr_ifrn ;
   union vki_iwreq_data u ;
};
union __anonunion____missing_field_name_90 {
   __vki_u64 sample_period ;
   __vki_u64 sample_freq ;
};
struct vki_perf_counter_attr {
   __vki_u32 type ;
   __vki_u32 size ;
   __vki_u64 config ;
   union __anonunion____missing_field_name_90 __annonCompField1 ;
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
   __vki_u64 __reserved_1 : 50 ;
   __vki_u32 wakeup_events ;
   __vki_u32 __reserved_2 ;
   __vki_u64 __reserved_3 ;
};
struct vki_getcpu_cache {
   unsigned long blob[128U / sizeof(long )] ;
};
typedef void (*vg_atfork_t)(ThreadId  );
enum __anonenum_SegKind_91 {
    SkFree = 0,
    SkAnonC = 1,
    SkAnonV = 2,
    SkFileC = 3,
    SkFileV = 4,
    SkShmC = 5,
    SkResvn = 6
} ;
typedef enum __anonenum_SegKind_91 SegKind;
enum __anonenum_ShrinkMode_92 {
    SmLower = 0,
    SmFixed = 1,
    SmUpper = 2
} ;
typedef enum __anonenum_ShrinkMode_92 ShrinkMode;
struct __anonstruct_NSegment_93 {
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
typedef struct __anonstruct_NSegment_93 NSegment;
struct _WordSetU;
typedef struct _WordSetU WordSetU;
typedef UInt WordSet;
typedef WordSet WordSetID;
struct _SO;
typedef struct _SO SO;
struct _Thr;
typedef struct _Thr Thr;
typedef UInt ThrID;
struct _Thread {
   struct _Thread *admin ;
   UInt magic ;
   Thr *hbthr ;
   ThreadId coretid ;
   WordSetID locksetA ;
   WordSetID locksetW ;
   ExeContext *created_at ;
   Bool announced ;
   Int errmsg_index ;
};
typedef struct _Thread Thread;
enum __anonenum_LockKind_94 {
    LK_mbRec = 1001,
    LK_nonRec = 1002,
    LK_rdwr = 1003
} ;
typedef enum __anonenum_LockKind_94 LockKind;
struct _Lock {
   struct _Lock *admin_next ;
   struct _Lock *admin_prev ;
   ULong unique ;
   UInt magic ;
   ExeContext *appeared_at ;
   ExeContext *acquired_at ;
   SO *hbso ;
   Addr guestaddr ;
   LockKind kind ;
   Bool heldW ;
   WordBag *heldBy ;
};
typedef struct _Lock Lock;
struct __anonstruct_OrigFn_95 {
   unsigned int nraddr ;
};
typedef struct __anonstruct_OrigFn_95 OrigFn;
enum __anonenum_Vg_ClientRequest_96 {
    VG_USERREQ__RUNNING_ON_VALGRIND = 4097,
    VG_USERREQ__DISCARD_TRANSLATIONS = 4098,
    VG_USERREQ__CLIENT_CALL0 = 4353,
    VG_USERREQ__CLIENT_CALL1 = 4354,
    VG_USERREQ__CLIENT_CALL2 = 4355,
    VG_USERREQ__CLIENT_CALL3 = 4356,
    VG_USERREQ__COUNT_ERRORS = 4609,
    VG_USERREQ__MALLOCLIKE_BLOCK = 4865,
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
typedef enum __anonenum_Vg_ClientRequest_96 Vg_ClientRequest;
enum __anonenum_Vg_TCheckClientRequest_97 {
    VG_USERREQ__HG_CLEAN_MEMORY = 1212612608,
    _VG_USERREQ__HG_SET_MY_PTHREAD_T = 1212612864,
    _VG_USERREQ__HG_PTH_API_ERROR = 1212612865,
    _VG_USERREQ__HG_PTHREAD_JOIN_POST = 1212612866,
    _VG_USERREQ__HG_PTHREAD_MUTEX_INIT_POST = 1212612867,
    _VG_USERREQ__HG_PTHREAD_MUTEX_DESTROY_PRE = 1212612868,
    _VG_USERREQ__HG_PTHREAD_MUTEX_UNLOCK_PRE = 1212612869,
    _VG_USERREQ__HG_PTHREAD_MUTEX_UNLOCK_POST = 1212612870,
    _VG_USERREQ__HG_PTHREAD_MUTEX_LOCK_PRE = 1212612871,
    _VG_USERREQ__HG_PTHREAD_MUTEX_LOCK_POST = 1212612872,
    _VG_USERREQ__HG_PTHREAD_COND_SIGNAL_PRE = 1212612873,
    _VG_USERREQ__HG_PTHREAD_COND_BROADCAST_PRE = 1212612874,
    _VG_USERREQ__HG_PTHREAD_COND_WAIT_PRE = 1212612875,
    _VG_USERREQ__HG_PTHREAD_COND_WAIT_POST = 1212612876,
    _VG_USERREQ__HG_PTHREAD_COND_DESTROY_PRE = 1212612877,
    _VG_USERREQ__HG_PTHREAD_RWLOCK_INIT_POST = 1212612878,
    _VG_USERREQ__HG_PTHREAD_RWLOCK_DESTROY_PRE = 1212612879,
    _VG_USERREQ__HG_PTHREAD_RWLOCK_LOCK_PRE = 1212612880,
    _VG_USERREQ__HG_PTHREAD_RWLOCK_LOCK_POST = 1212612881,
    _VG_USERREQ__HG_PTHREAD_RWLOCK_UNLOCK_PRE = 1212612882,
    _VG_USERREQ__HG_PTHREAD_RWLOCK_UNLOCK_POST = 1212612883,
    _VG_USERREQ__HG_POSIX_SEM_INIT_POST = 1212612884,
    _VG_USERREQ__HG_POSIX_SEM_DESTROY_PRE = 1212612885,
    _VG_USERREQ__HG_POSIX_SEM_POST_PRE = 1212612886,
    _VG_USERREQ__HG_POSIX_SEM_WAIT_POST = 1212612887,
    _VG_USERREQ__HG_PTHREAD_BARRIER_INIT_PRE = 1212612888,
    _VG_USERREQ__HG_PTHREAD_BARRIER_WAIT_PRE = 1212612889,
    _VG_USERREQ__HG_PTHREAD_BARRIER_DESTROY_PRE = 1212612890,
    _VG_USERREQ__HG_PTHREAD_SPIN_INIT_OR_UNLOCK_PRE = 1212612891,
    _VG_USERREQ__HG_PTHREAD_SPIN_INIT_OR_UNLOCK_POST = 1212612892,
    _VG_USERREQ__HG_PTHREAD_SPIN_LOCK_PRE = 1212612893,
    _VG_USERREQ__HG_PTHREAD_SPIN_LOCK_POST = 1212612894,
    _VG_USERREQ__HG_PTHREAD_SPIN_DESTROY_PRE = 1212612895,
    _VG_USERREQ__HG_CLIENTREQ_UNIMP = 1212612896,
    _VG_USERREQ__HG_USERSO_SEND_PRE = 1212612897,
    _VG_USERREQ__HG_USERSO_RECV_POST = 1212612898,
    _VG_USERREQ__HG_RESERVED1 = 1212612899,
    _VG_USERREQ__HG_RESERVED2 = 1212612900,
    _VG_USERREQ__HG_RESERVED3 = 1212612901,
    _VG_USERREQ__HG_RESERVED4 = 1212612902,
    _VG_USERREQ__HG_ARANGE_MAKE_UNTRACKED = 1212612903,
    _VG_USERREQ__HG_ARANGE_MAKE_TRACKED = 1212612904,
    _VG_USERREQ__HG_PTHREAD_BARRIER_RESIZE_PRE = 1212612905,
    _VG_USERREQ__HG_CLEAN_MEMORY_HEAPBLOCK = 1212612906
} ;
typedef enum __anonenum_Vg_TCheckClientRequest_97 Vg_TCheckClientRequest;
struct __anonstruct_CVInfo_98 {
   SO *so ;
   void *mx_ga ;
   UWord nWaiters ;
};
typedef struct __anonstruct_CVInfo_98 CVInfo;
struct __anonstruct_Bar_99 {
   Bool initted ;
   Bool resizable ;
   UWord size ;
   XArray *waiting ;
};
typedef struct __anonstruct_Bar_99 Bar;
struct __anonstruct_LAOGLinks_100 {
   WordSetID inns ;
   WordSetID outs ;
};
typedef struct __anonstruct_LAOGLinks_100 LAOGLinks;
struct __anonstruct_LAOGLinkExposition_101 {
   Addr src_ga ;
   Addr dst_ga ;
   ExeContext *src_ec ;
   ExeContext *dst_ec ;
};
typedef struct __anonstruct_LAOGLinkExposition_101 LAOGLinkExposition;
struct __anonstruct_MallocMeta_102 {
   void *next ;
   Addr payload ;
   SizeT szB ;
   ExeContext *where ;
   Thread *thr ;
};
typedef struct __anonstruct_MallocMeta_102 MallocMeta;
struct _MallocMeta;
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
extern  __attribute__((__noreturn__)) void vgPlain_exit(Int status ) ;
extern  __attribute__((__noreturn__)) void vgPlain_tool_panic(Char *str ) ;
extern  __attribute__((__noreturn__)) void vgPlain_assert_fail(Bool isCore ,
                                                               Char const   *expr ,
                                                               Char const   *file ,
                                                               Int line ,
                                                               Char const   *fn ,
                                                               HChar const   *format 
                                                               , ...) ;
extern Bool vgPlain_isspace(Char c ) ;
extern Bool vgPlain_isdigit(Char c ) ;
extern Char vgPlain_tolower(Char c ) ;
extern Long vgPlain_strtoll10(Char *str , Char **endptr ) ;
extern Long vgPlain_strtoll16(Char *str , Char **endptr ) ;
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
extern UInt vgPlain_random(UInt *pSeed ) ;
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
extern ThreadId vgPlain_get_running_tid(void) ;
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
extern IRStmt *IRStmt_IMark(Addr64 addr , Int len ) ;
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
void (*vgPlain_tl_pre_clo_init)(void) ;
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
extern VgHashTable vgPlain_HT_construct(HChar *name ) ;
extern Int vgPlain_HT_count_nodes(VgHashTable table ) ;
extern void vgPlain_HT_add_node(VgHashTable t , void *node ) ;
extern void *vgPlain_HT_lookup(VgHashTable table , UWord key ) ;
extern void *vgPlain_HT_remove(VgHashTable table , UWord key ) ;
extern VgHashNode **vgPlain_HT_to_array(VgHashTable t , UInt *n_elems ) ;
extern void vgPlain_HT_ResetIter(VgHashTable table ) ;
extern void *vgPlain_HT_Next(VgHashTable table ) ;
extern void vgPlain_HT_destruct(VgHashTable t ) ;
extern void *vgPlain_cli_malloc(SizeT align , SizeT nbytes ) ;
extern void vgPlain_cli_free(void *p ) ;
extern Long vgPlain_free_queue_volume ;
extern Long vgPlain_free_queue_length ;
extern Bool vgPlain_addr_is_in_block(Addr a , Addr start , SizeT size ,
                                     SizeT rz_szB ) ;
extern Bool vgPlain_clo_trace_malloc ;
extern UInt vgPlain_clo_alignment ;
extern Bool vgPlain_replacement_malloc_process_cmd_line_option(Char *arg ) ;
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
extern Int vgPlain_clo_verbosity ;
extern Bool vgPlain_clo_stats ;
extern Bool vgPlain_clo_xml ;
extern HChar *vgPlain_clo_xml_user_comment ;
extern VexControl vgPlain_clo_vex_control ;
extern Int vgPlain_clo_backtrace_size ;
extern Bool vgPlain_clo_show_below_main ;
extern Char *vgPlain_expand_file_name(Char *option_name , Char *format ) ;
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
extern UInt vgPlain_get_StackTrace(ThreadId tid , StackTrace ips , UInt n_ips ,
                                   StackTrace sps , StackTrace fps ,
                                   Word first_ip_delta ) ;
extern void vgPlain_apply_StackTrace(void (*action)(UInt n , Addr ip ,
                                                    void *opaque ) ,
                                     void *opaque , StackTrace ips , UInt n_ips ) ;
extern void vgPlain_pp_StackTrace(StackTrace ips , UInt n_ips ) ;
extern void vgPlain_get_and_pp_StackTrace(ThreadId tid , UInt n_ips ) ;
extern WordFM *vgPlain_newFM(void *(*alloc_nofail)(HChar *cc , SizeT  ) ,
                             HChar *cc , void (*dealloc)(void * ) ,
                             Word (*kCmp)(UWord  , UWord  ) ) ;
extern void vgPlain_deleteFM(WordFM * , void (*kFin)(UWord  ) ,
                             void (*vFin)(UWord  ) ) ;
extern Bool vgPlain_addToFM(WordFM *fm , UWord k , UWord v ) ;
extern Bool vgPlain_delFromFM(WordFM *fm , UWord *oldK , UWord *oldV ,
                              UWord key ) ;
extern Bool vgPlain_lookupFM(WordFM *fm , UWord *keyP , UWord *valP , UWord key ) ;
extern Bool vgPlain_findBoundsFM(WordFM *fm , UWord *kMinP , UWord *vMinP ,
                                 UWord *kMaxP , UWord *vMaxP , UWord minKey ,
                                 UWord minVal , UWord maxKey , UWord maxVal ,
                                 UWord key ) ;
extern UWord vgPlain_sizeFM(WordFM *fm ) ;
extern void vgPlain_initIterFM(WordFM *fm ) ;
extern void vgPlain_initIterAtFM(WordFM *fm , UWord start_at ) ;
extern Bool vgPlain_nextIterFM(WordFM *fm , UWord *pKey , UWord *pVal ) ;
extern void vgPlain_doneIterFM(WordFM *fm ) ;
extern WordFM *vgPlain_dopyFM(WordFM *fm , UWord (*dopyK)(UWord  ) ,
                              UWord (*dopyV)(UWord  ) ) ;
extern SizeT vgPlain_getNodeSizeFM(void) ;
extern WordBag *vgPlain_newBag(void *(*alloc_nofail)(HChar *cc , SizeT  ) ,
                               HChar *cc , void (*dealloc)(void * ) ) ;
extern void vgPlain_deleteBag(WordBag * ) ;
extern void vgPlain_addToBag(WordBag * , UWord  ) ;
extern UWord vgPlain_elemBag(WordBag * , UWord  ) ;
extern Bool vgPlain_delFromBag(WordBag * , UWord  ) ;
extern Bool vgPlain_isEmptyBag(WordBag * ) ;
extern Bool vgPlain_isSingletonTotalBag(WordBag * ) ;
extern UWord vgPlain_anyElementOfBag(WordBag * ) ;
extern UWord vgPlain_sizeUniqueBag(WordBag * ) ;
extern UWord vgPlain_sizeTotalBag(WordBag * ) ;
extern void vgPlain_initIterBag(WordBag * ) ;
extern Bool vgPlain_nextIterBag(WordBag * , UWord *pVal , UWord *pCount ) ;
extern void vgPlain_doneIterBag(WordBag * ) ;
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
extern Int vgPlain_am_get_segment_starts(Addr *starts , Int nStarts ) ;
extern NSegment const   *vgPlain_am_find_nsegment(Addr a ) ;
extern HChar *vgPlain_am_get_filename(NSegment const   * ) ;
extern Bool vgPlain_am_is_valid_for_client(Addr start , SizeT len , UInt prot ) ;
extern void *vgPlain_am_shadow_alloc(SizeT size ) ;
extern SysRes vgPlain_am_munmap_valgrind(Addr start , SizeT length ) ;
extern void *vgHelgrind_zalloc(HChar *cc , SizeT n ) ;
extern void vgHelgrind_free(void *p ) ;
extern Char *vgHelgrind_strdup(HChar *cc , Char const   *s ) ;
__inline static Bool vgHelgrind_is_sane_ThreadId(ThreadId coretid ) 
{ 
  int tmp ;

  {
  if (coretid >= 0U) {
    if (coretid < 500U) {
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
extern Bool vgHelgrind_clo_track_lockorders ;
extern Bool vgHelgrind_clo_cmp_race_err_addrs ;
extern UWord vgHelgrind_clo_history_level ;
extern UWord vgHelgrind_clo_conflict_cache_size ;
extern Word vgHelgrind_clo_sanity_flags ;
extern WordSetU *vgHelgrind_newWordSetU(void *(*alloc_nofail)(HChar * , SizeT  ) ,
                                        HChar *cc , void (*dealloc)(void * ) ,
                                        Word cacheSize ) ;
extern void vgHelgrind_deleteWordSetU(WordSetU * ) ;
extern UWord vgHelgrind_cardinalityWSU(WordSetU * ) ;
extern void vgHelgrind_ppWSUstats(WordSetU *wsu , HChar *name ) ;
extern WordSet vgHelgrind_emptyWS(WordSetU * ) ;
extern WordSet vgHelgrind_addToWS(WordSetU * , WordSet  , UWord  ) ;
extern WordSet vgHelgrind_delFromWS(WordSetU * , WordSet  , UWord  ) ;
extern WordSet vgHelgrind_unionWS(WordSetU * , WordSet  , WordSet  ) ;
extern WordSet vgHelgrind_intersectWS(WordSetU * , WordSet  , WordSet  ) ;
extern WordSet vgHelgrind_minusWS(WordSetU * , WordSet  , WordSet  ) ;
extern Bool vgHelgrind_isEmptyWS(WordSetU * , WordSet  ) ;
extern Bool vgHelgrind_isSingletonWS(WordSetU * , WordSet  , UWord  ) ;
extern UWord vgHelgrind_anyElementOfWS(WordSetU * , WordSet  ) ;
extern UWord vgHelgrind_cardinalityWS(WordSetU * , WordSet  ) ;
extern Bool vgHelgrind_elemWS(WordSetU * , WordSet  , UWord  ) ;
extern WordSet vgHelgrind_doubletonWS(WordSetU * , UWord  , UWord  ) ;
extern WordSet vgHelgrind_singletonWS(WordSetU * , UWord  ) ;
extern WordSet vgHelgrind_isSubsetOf(WordSetU * , WordSet  , WordSet  ) ;
extern Bool vgHelgrind_plausibleWS(WordSetU * , WordSet  ) ;
extern Bool vgHelgrind_saneWS_SLOW(WordSetU * , WordSet  ) ;
extern void vgHelgrind_ppWS(WordSetU * , WordSet  ) ;
extern void vgHelgrind_getPayloadWS(UWord **words , UWord *nWords , WordSetU * ,
                                    WordSet  ) ;
extern Bool vgHelgrind_is_sane_Thread(Thread *thr ) ;
extern Bool vgHelgrind_is_sane_LockP(Lock *lock ) ;
extern Bool vgHelgrind_is_sane_LockN(Lock *lock ) ;
extern Bool vgHelgrind_is_sane_LockNorP(Lock *lock ) ;
extern Bool vgHelgrind_eq_Error(VgRes not_used , Error *e1 , Error *e2 ) ;
extern void vgHelgrind_before_pp_Error(Error *err ) ;
extern void vgHelgrind_pp_Error(Error *err ) ;
extern UInt vgHelgrind_update_extra(Error *err ) ;
extern Bool vgHelgrind_recognised_suppression(Char *name , Supp *su ) ;
extern Bool vgHelgrind_read_extra_suppression_info(Int fd , Char **bufpp ,
                                                   SizeT *nBufp , Supp *su ) ;
extern Bool vgHelgrind_error_matches_suppression(Error *err , Supp *su ) ;
extern Char *vgHelgrind_get_error_name(Error *err ) ;
extern Bool vgHelgrind_get_extra_suppression_info(Error *err , Char *buf ,
                                                  Int nBuf ) ;
extern void vgHelgrind_record_error_Race(Thread *thr , Addr data_addr ,
                                         Int szB , Bool isWrite ,
                                         Thread *h1_confthr ,
                                         ExeContext *h1_ct_segstart ,
                                         ExeContext *h1_ct_mbsegend ) ;
extern void vgHelgrind_record_error_UnlockUnlocked(Thread * , Lock * ) ;
extern void vgHelgrind_record_error_UnlockForeign(Thread * , Thread * , Lock * ) ;
extern void vgHelgrind_record_error_UnlockBogus(Thread * , Addr  ) ;
extern void vgHelgrind_record_error_PthAPIerror(Thread * , HChar * , Word  ,
                                                HChar * ) ;
extern void vgHelgrind_record_error_LockOrder(Thread * , Addr  , Addr  ,
                                              ExeContext * , ExeContext * ) ;
extern void vgHelgrind_record_error_Misc_w_aux(Thread * , HChar *errstr ,
                                               HChar *auxstr ,
                                               ExeContext *auxctx ) ;
extern void vgHelgrind_record_error_Misc(Thread *thr , HChar *errstr ) ;
extern ULong vgHelgrind_stats__LockN_to_P_queries ;
extern ULong vgHelgrind_stats__LockN_to_P_get_map_size(void) ;
extern ULong vgHelgrind_stats__string_table_queries ;
extern ULong vgHelgrind_stats__string_table_get_map_size(void) ;
Bool vgHelgrind_mm_find_containing_block(ExeContext **where , Addr *payload ,
                                         SizeT *szB , Addr data_addr ) ;
extern Thr *libhb_init(void (*get_stacktrace)(Thr * , Addr * , UWord  ) ,
                       ExeContext *(*get_EC)(Thr * ) ) ;
extern void libhb_shutdown(Bool show_stats ) ;
extern Thr *libhb_create(Thr *parent ) ;
extern void libhb_async_exit(Thr *exitter ) ;
extern SO *libhb_so_alloc(void) ;
extern void libhb_so_dealloc(SO *so ) ;
extern void libhb_so_send(Thr *thr , SO *so , Bool strong_send ) ;
extern void libhb_so_recv(Thr *thr , SO *so , Bool strong_recv ) ;
extern Bool libhb_so_everSent(SO *so ) ;
extern void zsm_sapply08_f__msmcwrite(Thr *thr , Addr a ) ;
extern void zsm_sapply16_f__msmcwrite(Thr *thr , Addr a ) ;
extern void zsm_sapply32_f__msmcwrite(Thr *thr , Addr a ) ;
extern void zsm_sapply64_f__msmcwrite(Thr *thr , Addr a ) ;
extern void zsm_sapplyNN_f__msmcwrite(Thr *thr , Addr a , SizeT len ) ;
extern void zsm_sapply08_f__msmcread(Thr *thr , Addr a ) ;
extern void zsm_sapply16_f__msmcread(Thr *thr , Addr a ) ;
extern void zsm_sapply32_f__msmcread(Thr *thr , Addr a ) ;
extern void zsm_sapply64_f__msmcread(Thr *thr , Addr a ) ;
extern void zsm_sapplyNN_f__msmcread(Thr *thr , Addr a , SizeT len ) ;
extern void libhb_Thr_resumes(Thr *thr ) ;
extern void libhb_srange_new(Thr * , Addr  , SizeT  ) ;
extern void libhb_srange_noaccess(Thr * , Addr  , SizeT  ) ;
extern void libhb_srange_untrack(Thr * , Addr  , SizeT  ) ;
extern void *libhb_get_Thr_hgthread(Thr * ) ;
extern void libhb_set_Thr_hgthread(Thr * , void * ) ;
extern void libhb_copy_shadow_state(Thr *thr , Addr src , Addr dst , SizeT len ) ;
extern void libhb_maybe_GC(void) ;
extern Bool libhb_event_map_lookup(ExeContext **resEC , Thr **resThr ,
                                   SizeT *resSzB , Bool *resIsW , Thr *thr ,
                                   Addr a , SizeT szB , Bool isW ) ;
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
static void all__sanity_check(Char *who ) ;
static Thread *admin_threads  =    (Thread *)((void *)0);
static Lock *admin_locks  =    (Lock *)((void *)0);
static Thread **map_threads  =    (Thread **)((void *)0);
static WordFM *map_locks  =    (WordFM *)((void *)0);
static WordSetU *univ_tsets  =    (WordSetU *)((void *)0);
static WordSetU *univ_lsets  =    (WordSetU *)((void *)0);
static WordSetU *univ_laog  =    (WordSetU *)((void *)0);
static UWord stats__lockN_acquires  =    (UWord )0;
static UWord stats__lockN_releases  =    (UWord )0;
static ThreadId map_threads_maybe_reverse_lookup_SLOW(Thread *thr ) ;
static Thread *mk_Thread(Thr *hbthr ) ;
static Int indx  =    1;
static Thread *mk_Thread(Thr *hbthr ) 
{ 
  Thread *thread ;
  void *tmp ;
  Int tmp___0 ;

  {
  tmp = vgHelgrind_zalloc((HChar *)"hg.mk_Thread.1", (SizeT )sizeof(Thread ));
  thread = (Thread *)tmp;
  thread->locksetA = vgHelgrind_emptyWS(univ_lsets);
  thread->locksetW = vgHelgrind_emptyWS(univ_lsets);
  thread->magic = (UInt )1347405285;
  thread->hbthr = hbthr;
  thread->coretid = (ThreadId )0;
  thread->created_at = (ExeContext *)((void *)0);
  thread->announced = (Bool )0;
  tmp___0 = indx;
  indx ++;
  thread->errmsg_index = tmp___0;
  thread->admin = admin_threads;
  admin_threads = thread;
  return (thread);
}
}
static Lock *mk_LockN(LockKind kind , Addr guestaddr ) ;
static ULong unique  =    (ULong )0;
static Lock *mk_LockN(LockKind kind , Addr guestaddr ) 
{ 
  Lock *lock ;
  void *tmp ;
  ULong tmp___0 ;
  Bool tmp___1 ;

  {
  tmp = vgHelgrind_zalloc((HChar *)"hg.mk_Lock.1", (SizeT )sizeof(Lock ));
  lock = (Lock *)tmp;
  lock->admin_next = admin_locks;
  lock->admin_prev = (struct _Lock *)((void *)0);
  if (admin_locks) {
    admin_locks->admin_prev = lock;
  } else {

  }
  admin_locks = lock;
  tmp___0 = unique;
  unique ++;
  lock->unique = tmp___0;
  lock->magic = (UInt )1699067223;
  lock->appeared_at = (ExeContext *)((void *)0);
  lock->acquired_at = (ExeContext *)((void *)0);
  lock->hbso = libhb_so_alloc();
  lock->guestaddr = guestaddr;
  lock->kind = kind;
  lock->heldW = (Bool )0;
  lock->heldBy = (WordBag *)((void *)0);
  tmp___1 = vgHelgrind_is_sane_LockN(lock);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lock)",
                        (Char const   *)"hg_main.c", 193,
                        (Char const   *)"mk_LockN", "");
  }
  return (lock);
}
}
static void del_LockN(Lock *lk ) 
{ 
  Bool tmp ;

  {
  tmp = vgHelgrind_is_sane_LockN(lk);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 201,
                        (Char const   *)"del_LockN", "");
  }
  if (lk->hbso) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->hbso",
                        (Char const   *)"hg_main.c", 202,
                        (Char const   *)"del_LockN", "");
  }
  libhb_so_dealloc(lk->hbso);
  if (lk->heldBy) {
    vgPlain_deleteBag(lk->heldBy);
  } else {

  }
  if ((unsigned int )admin_locks == (unsigned int )lk) {
    admin_locks = lk->admin_next;
    if (admin_locks) {
      admin_locks->admin_prev = (struct _Lock *)((void *)0);
    } else {

    }
  } else {
    (lk->admin_prev)->admin_next = lk->admin_next;
    (lk->admin_next)->admin_prev = lk->admin_prev;
  }
  vgPlain_memset((void *)lk, 170, (SizeT )sizeof(*lk));
  vgHelgrind_free((void *)lk);
  return;
}
}
static void lockN_acquire_writer(Lock *lk , Thread *thr ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  ThreadId tid ;
  UWord tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;
  Bool tmp___4 ;

  {
  tmp = vgHelgrind_is_sane_LockN(lk);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 225,
                        (Char const   *)"lockN_acquire_writer", "");
  }
  tmp___0 = vgHelgrind_is_sane_Thread(thr);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                        (Char const   *)"hg_main.c", 226,
                        (Char const   *)"lockN_acquire_writer", "");
  }
  stats__lockN_acquires ++;
  if ((unsigned int )lk->acquired_at == (unsigned int )((void *)0)) {
    if ((unsigned int )lk->heldBy == (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"lk->heldBy == NULL",
                          (Char const   *)"hg_main.c", 235,
                          (Char const   *)"lockN_acquire_writer", "");
    }
    tid = map_threads_maybe_reverse_lookup_SLOW(thr);
    lk->acquired_at = vgPlain_record_ExeContext(tid, (Word )0);
  } else
  if ((unsigned int )lk->heldBy != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->heldBy != NULL",
                        (Char const   *)"hg_main.c", 240,
                        (Char const   *)"lockN_acquire_writer", "");
  }
  switch ((unsigned int )lk->kind) {
  case_LK_nonRec: 
  case 1002U: 
  if ((unsigned int )lk->heldBy == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->heldBy == NULL",
                        (Char const   *)"hg_main.c", 247,
                        (Char const   *)"lockN_acquire_writer", "");
  }
  if (! lk->heldW) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"!lk->heldW",
                        (Char const   *)"hg_main.c", 248,
                        (Char const   *)"lockN_acquire_writer", "");
  }
  lk->heldW = (Bool )1;
  lk->heldBy = vgPlain_newBag(& vgHelgrind_zalloc, (HChar *)"hg.lNaw.1",
                              & vgHelgrind_free);
  vgPlain_addToBag(lk->heldBy, (UWord )((Word )thr));
  break;
  case 1001U: 
  if ((unsigned int )lk->heldBy == (unsigned int )((void *)0)) {
    goto case_LK_nonRec;
  } else {

  }
  if (lk->heldW) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->heldW",
                        (Char const   *)"hg_main.c", 257,
                        (Char const   *)"lockN_acquire_writer", "");
  }
  tmp___1 = vgPlain_sizeUniqueBag(lk->heldBy);
  if (tmp___1 == 1UL) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"VG_(sizeUniqueBag(lk->heldBy)) == 1",
                        (Char const   *)"hg_main.c", 259,
                        (Char const   *)"lockN_acquire_writer", "");
  }
  tmp___2 = vgPlain_elemBag(lk->heldBy, (UWord )((Word )thr));
  tmp___3 = vgPlain_sizeTotalBag(lk->heldBy);
  if (tmp___2 == tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"VG_(elemBag)(lk->heldBy, (Word)thr) == VG_(sizeTotalBag)(lk->heldBy)",
                        (Char const   *)"hg_main.c", 262,
                        (Char const   *)"lockN_acquire_writer", "");
  }
  vgPlain_addToBag(lk->heldBy, (UWord )((Word )thr));
  break;
  case 1003U: 
  if ((unsigned int )lk->heldBy == (unsigned int )((void *)0)) {
    if (! lk->heldW) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"lk->heldBy == NULL && !lk->heldW",
                          (Char const   *)"hg_main.c", 266,
                          (Char const   *)"lockN_acquire_writer", "");
    }
  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"lk->heldBy == NULL && !lk->heldW",
                        (Char const   *)"hg_main.c", 266,
                        (Char const   *)"lockN_acquire_writer", "");
  }
  goto case_LK_nonRec;
  default: 
  vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                      (Char const   *)"hg_main.c", 269,
                      (Char const   *)"lockN_acquire_writer", "");
  }
  tmp___4 = vgHelgrind_is_sane_LockN(lk);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 271,
                        (Char const   *)"lockN_acquire_writer", "");
  }
  return;
}
}
static void lockN_acquire_reader(Lock *lk , Thread *thr ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  ThreadId tid ;
  Bool tmp___1 ;

  {
  tmp = vgHelgrind_is_sane_LockN(lk);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 276,
                        (Char const   *)"lockN_acquire_reader", "");
  }
  tmp___0 = vgHelgrind_is_sane_Thread(thr);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                        (Char const   *)"hg_main.c", 277,
                        (Char const   *)"lockN_acquire_reader", "");
  }
  if ((unsigned int )lk->kind == 1003U) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->kind == LK_rdwr",
                        (Char const   *)"hg_main.c", 279,
                        (Char const   *)"lockN_acquire_reader", "");
  }
  if ((unsigned int )lk->heldBy == (unsigned int )((void *)0)) {

  } else
  if ((unsigned int )lk->heldBy != (unsigned int )((void *)0)) {
    if (! lk->heldW) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"lk->heldBy == NULL || (lk->heldBy != NULL && !lk->heldW)",
                          (Char const   *)"hg_main.c", 282,
                          (Char const   *)"lockN_acquire_reader", "");
    }
  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"lk->heldBy == NULL || (lk->heldBy != NULL && !lk->heldW)",
                        (Char const   *)"hg_main.c", 282,
                        (Char const   *)"lockN_acquire_reader", "");
  }
  stats__lockN_acquires ++;
  if ((unsigned int )lk->acquired_at == (unsigned int )((void *)0)) {
    if ((unsigned int )lk->heldBy == (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"lk->heldBy == NULL",
                          (Char const   *)"hg_main.c", 291,
                          (Char const   *)"lockN_acquire_reader", "");
    }
    tid = map_threads_maybe_reverse_lookup_SLOW(thr);
    lk->acquired_at = vgPlain_record_ExeContext(tid, (Word )0);
  } else
  if ((unsigned int )lk->heldBy != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->heldBy != NULL",
                        (Char const   *)"hg_main.c", 296,
                        (Char const   *)"lockN_acquire_reader", "");
  }
  if (lk->heldBy) {
    vgPlain_addToBag(lk->heldBy, (UWord )((Word )thr));
  } else {
    lk->heldW = (Bool )0;
    lk->heldBy = vgPlain_newBag(& vgHelgrind_zalloc, (HChar *)"hg.lNar.1",
                                & vgHelgrind_free);
    vgPlain_addToBag(lk->heldBy, (UWord )((Word )thr));
  }
  if (! lk->heldW) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"!lk->heldW",
                        (Char const   *)"hg_main.c", 307,
                        (Char const   *)"lockN_acquire_reader", "");
  }
  tmp___1 = vgHelgrind_is_sane_LockN(lk);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 308,
                        (Char const   *)"lockN_acquire_reader", "");
  }
  return;
}
}
static void lockN_release(Lock *lk , Thread *thr ) 
{ 
  Bool b ;
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgHelgrind_is_sane_LockN(lk);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 318,
                        (Char const   *)"lockN_release", "");
  }
  tmp___0 = vgHelgrind_is_sane_Thread(thr);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                        (Char const   *)"hg_main.c", 319,
                        (Char const   *)"lockN_release", "");
  }
  if (lk->heldBy) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->heldBy",
                        (Char const   *)"hg_main.c", 321,
                        (Char const   *)"lockN_release", "");
  }
  stats__lockN_releases ++;
  b = vgPlain_delFromBag(lk->heldBy, (UWord )((Word )thr));
  if (b) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"b",
                        (Char const   *)"hg_main.c", 326,
                        (Char const   *)"lockN_release", "");
  }
  if (lk->acquired_at) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->acquired_at",
                        (Char const   *)"hg_main.c", 328,
                        (Char const   *)"lockN_release", "");
  }
  tmp___1 = vgPlain_isEmptyBag(lk->heldBy);
  if (tmp___1) {
    vgPlain_deleteBag(lk->heldBy);
    lk->heldBy = (WordBag *)((void *)0);
    lk->heldW = (Bool )0;
    lk->acquired_at = (ExeContext *)((void *)0);
  } else {

  }
  tmp___2 = vgHelgrind_is_sane_LockN(lk);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 335,
                        (Char const   *)"lockN_release", "");
  }
  return;
}
}
static void remove_Lock_from_locksets_of_all_owning_Threads(Lock *lk ) 
{ 
  Thread *thr ;
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  if (! lk->heldBy) {
    if (! lk->heldW) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"!lk->heldW",
                          (Char const   *)"hg_main.c", 342,
                          (Char const   *)"remove_Lock_from_locksets_of_all_owning_Threads",
                          "");
    }
    return;
  } else {

  }
  vgPlain_initIterBag(lk->heldBy);
  while (1) {
    tmp___2 = vgPlain_nextIterBag(lk->heldBy, (UWord *)((Word *)(& thr)),
                                  (UWord *)((void *)0));
    if (tmp___2) {

    } else {
      break;
    }
    tmp = vgHelgrind_is_sane_Thread(thr);
    if (tmp) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                          (Char const   *)"hg_main.c", 348,
                          (Char const   *)"remove_Lock_from_locksets_of_all_owning_Threads",
                          "");
    }
    tmp___0 = vgHelgrind_elemWS(univ_lsets, thr->locksetA, (UWord )((Word )lk));
    if (tmp___0) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"HG_(elemWS)( univ_lsets, thr->locksetA, (Word)lk )",
                          (Char const   *)"hg_main.c", 350,
                          (Char const   *)"remove_Lock_from_locksets_of_all_owning_Threads",
                          "");
    }
    thr->locksetA = vgHelgrind_delFromWS(univ_lsets, thr->locksetA,
                                         (UWord )((Word )lk));
    if (lk->heldW) {
      tmp___1 = vgHelgrind_elemWS(univ_lsets, thr->locksetW, (UWord )((Word )lk));
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"HG_(elemWS)( univ_lsets, thr->locksetW, (Word)lk )",
                            (Char const   *)"hg_main.c", 356,
                            (Char const   *)"remove_Lock_from_locksets_of_all_owning_Threads",
                            "");
      }
      thr->locksetW = vgHelgrind_delFromWS(univ_lsets, thr->locksetW,
                                           (UWord )((Word )lk));
    } else {

    }
  }
  vgPlain_doneIterBag(lk->heldBy);
  return;
}
}
static int const   sHOW_ADMIN  =    (Int const   )0;
static void space(Int n ) 
{ 
  Int i ;
  Char spaces[129] ;

  {
  if (n >= 0) {
    if (n < 128) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"n >= 0 && n < 128",
                          (Char const   *)"hg_main.c", 382,
                          (Char const   *)"space", "");
    }
  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"n >= 0 && n < 128",
                        (Char const   *)"hg_main.c", 382,
                        (Char const   *)"space", "");
  }
  if (n == 0) {
    return;
  } else {

  }
  i = 0;
  while (i < n) {
    spaces[i] = (Char )' ';
    i ++;
  }
  spaces[i] = (Char )0;
  if (i < 129) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"i < 128+1",
                        (Char const   *)"hg_main.c", 388,
                        (Char const   *)"space", "");
  }
  vgPlain_printf("%s", spaces);
  return;
}
}
static void pp_Thread(Int d , Thread *t ) 
{ 


  {
  space(d);
  vgPlain_printf("Thread %p {\n", t);
  if (sHOW_ADMIN) {
    space(d + 3);
    vgPlain_printf("admin    %p\n", t->admin);
    space(d + 3);
    vgPlain_printf("magic    0x%x\n", t->magic);
  } else {

  }
  space(d + 3);
  vgPlain_printf("locksetA %d\n", (Int )t->locksetA);
  space(d + 3);
  vgPlain_printf("locksetW %d\n", (Int )t->locksetW);
  space(d);
  vgPlain_printf("}\n");
  return;
}
}
static void pp_admin_threads(Int d ) 
{ 
  Int i ;
  Int n ;
  Thread *t ;

  {
  n = 0;
  t = admin_threads;
  while (t) {
    n ++;
    t = t->admin;
  }
  space(d);
  vgPlain_printf("admin_threads (%d records) {\n", n);
  i = 0;
  t = admin_threads;
  while (t) {
    pp_Thread(d + 3, t);
    i ++;
    t = t->admin;
  }
  space(d);
  vgPlain_printf("}\n");
  return;
}
}
static void pp_map_threads(Int d ) 
{ 
  Int i ;
  Int n ;

  {
  n = 0;
  space(d);
  vgPlain_printf("map_threads ");
  i = 0;
  while (i < 500) {
    if ((unsigned int )*(map_threads + i) != (unsigned int )((void *)0)) {
      n ++;
    } else {

    }
    i ++;
  }
  vgPlain_printf("(%d entries) {\n", n);
  i = 0;
  while (i < 500) {
    if ((unsigned int )*(map_threads + i) == (unsigned int )((void *)0)) {
      goto __Cont;
    } else {

    }
    space(d + 3);
    vgPlain_printf("coretid %d -> Thread %p\n", i, *(map_threads + i));
    __Cont: /* CIL Label */ 
    i ++;
  }
  space(d);
  vgPlain_printf("}\n");
  return;
}
}
static HChar const   *show_LockKind(LockKind lkk ) 
{ 


  {
  switch ((unsigned int )lkk) {
  case 1001U: 
  return ("mbRec");
  case 1002U: 
  return ("nonRec");
  case 1003U: 
  return ("rdwr");
  default: 
  vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                      (Char const   *)"hg_main.c", 445,
                      (Char const   *)"show_LockKind", "");
  }
}
}
static void pp_Lock(Int d , Lock *lk ) 
{ 
  HChar const   *tmp ;
  char const   *tmp___0 ;
  Thread *thr ;
  Word count ;
  Bool tmp___1 ;

  {
  space(d);
  vgPlain_printf("Lock %p (ga %#lx) {\n", lk, lk->guestaddr);
  if (sHOW_ADMIN) {
    space(d + 3);
    vgPlain_printf("admin_n  %p\n", lk->admin_next);
    space(d + 3);
    vgPlain_printf("admin_p  %p\n", lk->admin_prev);
    space(d + 3);
    vgPlain_printf("magic    0x%x\n", lk->magic);
  } else {

  }
  space(d + 3);
  vgPlain_printf("unique %llu\n", lk->unique);
  space(d + 3);
  tmp = show_LockKind(lk->kind);
  vgPlain_printf("kind   %s\n", tmp);
  space(d + 3);
  if (lk->heldW) {
    tmp___0 = "yes";
  } else {
    tmp___0 = "no";
  }
  vgPlain_printf("heldW  %s\n", tmp___0);
  space(d + 3);
  vgPlain_printf("heldBy %p", lk->heldBy);
  if (lk->heldBy) {
    vgPlain_printf(" { ");
    vgPlain_initIterBag(lk->heldBy);
    while (1) {
      tmp___1 = vgPlain_nextIterBag(lk->heldBy, (UWord *)((Word *)(& thr)),
                                    (UWord *)(& count));
      if (tmp___1) {

      } else {
        break;
      }
      vgPlain_printf("%lu:%p ", count, thr);
    }
    vgPlain_doneIterBag(lk->heldBy);
    vgPlain_printf("}");
  } else {

  }
  vgPlain_printf("\n");
  space(d);
  vgPlain_printf("}\n");
  return;
}
}
static void pp_admin_locks(Int d ) 
{ 
  Int i ;
  Int n ;
  Lock *lk ;

  {
  n = 0;
  lk = admin_locks;
  while (lk) {
    n ++;
    lk = lk->admin_next;
  }
  space(d);
  vgPlain_printf("admin_locks (%d records) {\n", n);
  i = 0;
  lk = admin_locks;
  while (lk) {
    pp_Lock(d + 3, lk);
    i ++;
    lk = lk->admin_next;
  }
  space(d);
  vgPlain_printf("}\n");
  return;
}
}
static void pp_map_locks(Int d ) 
{ 
  void *gla ;
  Lock *lk ;
  UWord tmp ;
  Bool tmp___0 ;

  {
  space(d);
  tmp = vgPlain_sizeFM(map_locks);
  vgPlain_printf("map_locks (%d entries) {\n", (Int )tmp);
  vgPlain_initIterFM(map_locks);
  while (1) {
    tmp___0 = vgPlain_nextIterFM(map_locks, (UWord *)((Word *)(& gla)),
                                 (UWord *)((Word *)(& lk)));
    if (tmp___0) {

    } else {
      break;
    }
    space(d + 3);
    vgPlain_printf("guest %p -> Lock %p\n", gla, lk);
  }
  vgPlain_doneIterFM(map_locks);
  space(d);
  vgPlain_printf("}\n");
  return;
}
}
static void pp_everything(Int flags , Char *caller ) 
{ 
  Int d ;

  {
  d = 0;
  vgPlain_printf("\n");
  vgPlain_printf("All_Data_Structures (caller = \"%s\") {\n", caller);
  if (flags & (1 << 1)) {
    vgPlain_printf("\n");
    pp_admin_threads(d + 3);
    vgPlain_printf("\n");
    pp_map_threads(d + 3);
  } else {

  }
  if (flags & (1 << 2)) {
    vgPlain_printf("\n");
    pp_admin_locks(d + 3);
    vgPlain_printf("\n");
    pp_map_locks(d + 3);
  } else {

  }
  vgPlain_printf("\n");
  vgPlain_printf("}\n");
  vgPlain_printf("\n");
  return;
}
}
static void initialise_data_structures(Thr *hbthr_root ) 
{ 
  Thread *thr ;
  void *tmp ;
  void *tmp___0 ;
  Bool tmp___1 ;

  {
  if ((unsigned int )admin_threads == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"admin_threads == NULL",
                        (Char const   *)"hg_main.c", 544,
                        (Char const   *)"initialise_data_structures", "");
  }
  if ((unsigned int )admin_locks == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"admin_locks == NULL",
                        (Char const   *)"hg_main.c", 545,
                        (Char const   *)"initialise_data_structures", "");
  }
  if (sizeof(Addr ) == sizeof(Word )) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"sizeof(Addr) == sizeof(Word)",
                        (Char const   *)"hg_main.c", 547,
                        (Char const   *)"initialise_data_structures", "");
  }
  if ((unsigned int )map_threads == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"map_threads == NULL",
                        (Char const   *)"hg_main.c", 549,
                        (Char const   *)"initialise_data_structures", "");
  }
  tmp = vgHelgrind_zalloc((HChar *)"hg.ids.1", (SizeT )(500U * sizeof(Thread *)));
  map_threads = (Thread **)tmp;
  if ((unsigned int )map_threads != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"map_threads != NULL",
                        (Char const   *)"hg_main.c", 551,
                        (Char const   *)"initialise_data_structures", "");
  }
  if (sizeof(Addr ) == sizeof(Word )) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"sizeof(Addr) == sizeof(Word)",
                        (Char const   *)"hg_main.c", 553,
                        (Char const   *)"initialise_data_structures", "");
  }
  if ((unsigned int )map_locks == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"map_locks == NULL",
                        (Char const   *)"hg_main.c", 554,
                        (Char const   *)"initialise_data_structures", "");
  }
  map_locks = vgPlain_newFM(& vgHelgrind_zalloc, (HChar *)"hg.ids.2",
                            & vgHelgrind_free,
                            (Word (*)(UWord  , UWord  ))((void *)0));
  if ((unsigned int )map_locks != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"map_locks != NULL",
                        (Char const   *)"hg_main.c", 557,
                        (Char const   *)"initialise_data_structures", "");
  }
  if ((unsigned int )univ_tsets == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"univ_tsets == NULL",
                        (Char const   *)"hg_main.c", 559,
                        (Char const   *)"initialise_data_structures", "");
  }
  univ_tsets = vgHelgrind_newWordSetU(& vgHelgrind_zalloc, (HChar *)"hg.ids.3",
                                      & vgHelgrind_free, (Word )8);
  if ((unsigned int )univ_tsets != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"univ_tsets != NULL",
                        (Char const   *)"hg_main.c", 562,
                        (Char const   *)"initialise_data_structures", "");
  }
  if ((unsigned int )univ_lsets == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"univ_lsets == NULL",
                        (Char const   *)"hg_main.c", 564,
                        (Char const   *)"initialise_data_structures", "");
  }
  univ_lsets = vgHelgrind_newWordSetU(& vgHelgrind_zalloc, (HChar *)"hg.ids.4",
                                      & vgHelgrind_free, (Word )8);
  if ((unsigned int )univ_lsets != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"univ_lsets != NULL",
                        (Char const   *)"hg_main.c", 567,
                        (Char const   *)"initialise_data_structures", "");
  }
  if ((unsigned int )univ_laog == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"univ_laog == NULL",
                        (Char const   *)"hg_main.c", 569,
                        (Char const   *)"initialise_data_structures", "");
  }
  if (vgHelgrind_clo_track_lockorders) {
    univ_laog = vgHelgrind_newWordSetU(& vgHelgrind_zalloc,
                                       (HChar *)"hg.ids.5 (univ_laog)",
                                       & vgHelgrind_free, (Word )24);
    if ((unsigned int )univ_laog != (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"univ_laog != NULL",
                          (Char const   *)"hg_main.c", 573,
                          (Char const   *)"initialise_data_structures", "");
    }
  } else {

  }
  thr = mk_Thread(hbthr_root);
  thr->coretid = (ThreadId )1;
  tmp___0 = libhb_get_Thr_hgthread(hbthr_root);
  if ((unsigned int )tmp___0 == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"libhb_get_Thr_hgthread(hbthr_root) == NULL",
                        (Char const   *)"hg_main.c", 583,
                        (Char const   *)"initialise_data_structures", "");
  }
  libhb_set_Thr_hgthread(hbthr_root, (void *)thr);
  tmp___1 = vgHelgrind_is_sane_ThreadId(thr->coretid);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"HG_(is_sane_ThreadId)(thr->coretid)",
                        (Char const   *)"hg_main.c", 587,
                        (Char const   *)"initialise_data_structures", "");
  }
  if (thr->coretid != 0U) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"thr->coretid != VG_INVALID_THREADID",
                        (Char const   *)"hg_main.c", 588,
                        (Char const   *)"initialise_data_structures", "");
  }
  *(map_threads + thr->coretid) = thr;
  all__sanity_check((Char *)"initialise_data_structures");
  return;
}
}
static Thread *map_threads_maybe_lookup(ThreadId coretid ) 
{ 
  Thread *thr ;
  Bool tmp ;

  {
  tmp = vgHelgrind_is_sane_ThreadId(coretid);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"HG_(is_sane_ThreadId)(coretid)",
                        (Char const   *)"hg_main.c", 606,
                        (Char const   *)"map_threads_maybe_lookup", "");
  }
  thr = *(map_threads + coretid);
  return (thr);
}
}
__inline static Thread *map_threads_lookup(ThreadId coretid ) 
{ 
  Thread *thr ;
  Bool tmp ;

  {
  tmp = vgHelgrind_is_sane_ThreadId(coretid);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"HG_(is_sane_ThreadId)(coretid)",
                        (Char const   *)"hg_main.c", 615,
                        (Char const   *)"map_threads_lookup", "");
  }
  thr = *(map_threads + coretid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 617,
                        (Char const   *)"map_threads_lookup", "");
  }
  return (thr);
}
}
static ThreadId map_threads_maybe_reverse_lookup_SLOW(Thread *thr ) 
{ 
  ThreadId tid ;
  Bool tmp ;
  Bool tmp___0 ;

  {
  tmp = vgHelgrind_is_sane_Thread(thr);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                        (Char const   *)"hg_main.c", 626,
                        (Char const   *)"map_threads_maybe_reverse_lookup_SLOW",
                        "");
  }
  if ((unsigned int )*(map_threads + 0U) == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"map_threads[VG_INVALID_THREADID] == NULL",
                        (Char const   *)"hg_main.c", 629,
                        (Char const   *)"map_threads_maybe_reverse_lookup_SLOW",
                        "");
  }
  tid = thr->coretid;
  tmp___0 = vgHelgrind_is_sane_ThreadId(tid);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_ThreadId)(tid)",
                        (Char const   *)"hg_main.c", 631,
                        (Char const   *)"map_threads_maybe_reverse_lookup_SLOW",
                        "");
  }
  return (tid);
}
}
static ThreadId map_threads_reverse_lookup_SLOW(Thread *thr ) 
{ 
  ThreadId tid ;
  ThreadId tmp ;

  {
  tmp = map_threads_maybe_reverse_lookup_SLOW(thr);
  tid = tmp;
  if (tid != 0U) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"tid != VG_INVALID_THREADID",
                        (Char const   *)"hg_main.c", 640,
                        (Char const   *)"map_threads_reverse_lookup_SLOW", "");
  }
  if (*(map_threads + tid)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"map_threads[tid]",
                        (Char const   *)"hg_main.c", 641,
                        (Char const   *)"map_threads_reverse_lookup_SLOW", "");
  }
  if ((*(map_threads + tid))->coretid == tid) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"map_threads[tid]->coretid == tid",
                        (Char const   *)"hg_main.c", 642,
                        (Char const   *)"map_threads_reverse_lookup_SLOW", "");
  }
  return (tid);
}
}
static void map_threads_delete(ThreadId coretid ) 
{ 
  Thread *thr ;
  Bool tmp ;

  {
  if (coretid != 0U) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"coretid != 0",
                        (Char const   *)"hg_main.c", 649,
                        (Char const   *)"map_threads_delete", "");
  }
  tmp = vgHelgrind_is_sane_ThreadId(coretid);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"HG_(is_sane_ThreadId)(coretid)",
                        (Char const   *)"hg_main.c", 650,
                        (Char const   *)"map_threads_delete", "");
  }
  thr = *(map_threads + coretid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 652,
                        (Char const   *)"map_threads_delete", "");
  }
  *(map_threads + coretid) = (Thread *)((void *)0);
  return;
}
}
static Lock *map_locks_lookup_or_create(LockKind lkk , Addr ga , ThreadId tid ) 
{ 
  Bool found ;
  Lock *oldlock ;
  Bool tmp ;
  Lock *lock ;
  Lock *tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  oldlock = (Lock *)((void *)0);
  tmp = vgHelgrind_is_sane_ThreadId(tid);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_ThreadId)(tid)",
                        (Char const   *)"hg_main.c", 669,
                        (Char const   *)"map_locks_lookup_or_create", "");
  }
  found = vgPlain_lookupFM(map_locks, (UWord *)((void *)0),
                           (UWord *)((Word *)(& oldlock)), (UWord )((Word )ga));
  if (! found) {
    tmp___0 = mk_LockN(lkk, ga);
    lock = tmp___0;
    lock->appeared_at = vgPlain_record_ExeContext(tid, (Word )0);
    tmp___1 = vgHelgrind_is_sane_LockN(lock);
    if (tmp___1) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lock)",
                          (Char const   *)"hg_main.c", 675,
                          (Char const   *)"map_locks_lookup_or_create", "");
    }
    vgPlain_addToFM(map_locks, (UWord )((Word )ga), (UWord )((Word )lock));
    if ((unsigned int )oldlock == (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"oldlock == NULL",
                          (Char const   *)"hg_main.c", 677,
                          (Char const   *)"map_locks_lookup_or_create", "");
    }
    return (lock);
  } else {
    if ((unsigned int )oldlock != (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"oldlock != NULL",
                          (Char const   *)"hg_main.c", 680,
                          (Char const   *)"map_locks_lookup_or_create", "");
    }
    tmp___2 = vgHelgrind_is_sane_LockN(oldlock);
    if (tmp___2) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"HG_(is_sane_LockN)(oldlock)",
                          (Char const   *)"hg_main.c", 681,
                          (Char const   *)"map_locks_lookup_or_create", "");
    }
    if (oldlock->guestaddr == ga) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"oldlock->guestaddr == ga",
                          (Char const   *)"hg_main.c", 682,
                          (Char const   *)"map_locks_lookup_or_create", "");
    }
    return (oldlock);
  }
}
}
static Lock *map_locks_maybe_lookup(Addr ga ) 
{ 
  Bool found ;
  Lock *lk ;
  int tmp ;

  {
  lk = (Lock *)((void *)0);
  found = vgPlain_lookupFM(map_locks, (UWord *)((void *)0),
                           (UWord *)((Word *)(& lk)), (UWord )((Word )ga));
  if (found) {
    tmp = (unsigned int )lk != (unsigned int )((void *)0);
  } else {
    tmp = (unsigned int )lk == (unsigned int )((void *)0);
  }
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"found ? lk != NULL : lk == NULL",
                        (Char const   *)"hg_main.c", 692,
                        (Char const   *)"map_locks_maybe_lookup", "");
  }
  return (lk);
}
}
static void map_locks_delete(Addr ga ) 
{ 
  Addr ga2 ;
  Lock *lk ;

  {
  ga2 = (Addr )0;
  lk = (Lock *)((void *)0);
  vgPlain_delFromFM(map_locks, (UWord *)((Word *)(& ga2)),
                    (UWord *)((Word *)(& lk)), (UWord )((Word )ga));
  if ((unsigned int )lk != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk != NULL",
                        (Char const   *)"hg_main.c", 705,
                        (Char const   *)"map_locks_delete", "");
  }
  if (ga2 == ga) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"ga2 == ga",
                        (Char const   *)"hg_main.c", 706,
                        (Char const   *)"map_locks_delete", "");
  }
  return;
}
}
static UWord stats__sanity_checks  =    (UWord )0;
static void ( __attribute__((__noinline__)) laog__sanity_check)(Char *who ) ;
static Bool thread_is_a_holder_of_Lock(Thread *thr , Lock *lk ) 
{ 
  UWord tmp ;

  {
  if (lk->heldBy) {
    tmp = vgPlain_elemBag(lk->heldBy, (UWord )((Word )thr));
    return ((Bool )(tmp > 0UL));
  } else {
    return ((Bool )0);
  }
}
}
static void ( __attribute__((__noinline__)) threads__sanity_check)(Char *who ) 
{ 
  Char *how ;
  Thread *thr ;
  WordSetID wsA ;
  WordSetID wsW ;
  UWord *ls_words ;
  Word ls_size ;
  Word i ;
  Lock *lk ;
  Bool tmp ;
  WordSet tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  how = (Char *)"no error";
  thr = admin_threads;
  while (thr) {
    tmp = vgHelgrind_is_sane_Thread(thr);
    if (tmp) {

    } else {
      while (1) {
        how = (Char *)"1";
        goto bad;
        break;
      }
    }
    wsA = thr->locksetA;
    wsW = thr->locksetW;
    tmp___0 = vgHelgrind_isSubsetOf(univ_lsets, wsW, wsA);
    if (tmp___0) {

    } else {
      while (1) {
        how = (Char *)"7";
        goto bad;
        break;
      }
    }
    vgHelgrind_getPayloadWS(& ls_words, (UWord *)(& ls_size), univ_lsets, wsA);
    i = (Word )0;
    while (i < ls_size) {
      lk = (Lock *)*(ls_words + i);
      tmp___1 = vgHelgrind_is_sane_LockN(lk);
      if (tmp___1) {

      } else {
        while (1) {
          how = (Char *)"2";
          goto bad;
          break;
        }
      }
      tmp___2 = thread_is_a_holder_of_Lock(thr, lk);
      if (tmp___2) {

      } else {
        while (1) {
          how = (Char *)"3";
          goto bad;
          break;
        }
      }
      i ++;
    }
    thr = thr->admin;
  }
  return;
  bad: 
  vgPlain_printf("threads__sanity_check: who=\"%s\", bad=\"%s\"\n", who, how);
  vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                      (Char const   *)"hg_main.c", 828,
                      (Char const   *)"threads__sanity_check", "");
}
}
static void ( __attribute__((__noinline__)) locks__sanity_check)(Char *who ) 
{ 
  Char *how ;
  Addr gla ;
  Lock *lk ;
  Int i ;
  UWord tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Lock *tmp___2 ;
  Thread *thr ;
  Word count ;
  Bool tmp___3 ;
  Bool tmp___4 ;
  Bool tmp___5 ;
  Bool tmp___6 ;
  Bool tmp___7 ;

  {
  how = (Char *)"no error";
  i = 0;
  lk = admin_locks;
  while (lk) {
    i ++;
    lk = lk->admin_next;
  }
  tmp = vgPlain_sizeFM(map_locks);
  if ((UWord )i != tmp) {
    while (1) {
      how = (Char *)"1";
      goto bad;
      break;
    }
  } else {

  }
  vgPlain_initIterFM(map_locks);
  while (1) {
    tmp___0 = vgPlain_nextIterFM(map_locks, (UWord *)((Word *)(& gla)),
                                 (UWord *)((Word *)(& lk)));
    if (tmp___0) {

    } else {
      break;
    }
    if (lk->guestaddr != gla) {
      while (1) {
        how = (Char *)"2";
        goto bad;
        break;
      }
    } else {

    }
  }
  vgPlain_doneIterFM(map_locks);
  lk = admin_locks;
  while (lk) {
    tmp___1 = vgHelgrind_is_sane_LockN(lk);
    if (tmp___1) {

    } else {
      while (1) {
        how = (Char *)"3";
        goto bad;
        break;
      }
    }
    tmp___2 = map_locks_maybe_lookup(lk->guestaddr);
    if ((unsigned int )lk != (unsigned int )tmp___2) {
      while (1) {
        how = (Char *)"4";
        goto bad;
        break;
      }
    } else {

    }
    if (lk->heldBy) {
      vgPlain_initIterBag(lk->heldBy);
      while (1) {
        tmp___7 = vgPlain_nextIterBag(lk->heldBy, (UWord *)((Word *)(& thr)),
                                      (UWord *)(& count));
        if (tmp___7) {

        } else {
          break;
        }
        if (count >= 1L) {

        } else {
          vgPlain_assert_fail((Bool )0, (Char const   *)"count >= 1",
                              (Char const   *)"hg_main.c", 870,
                              (Char const   *)"locks__sanity_check", "");
        }
        tmp___3 = vgHelgrind_is_sane_Thread(thr);
        if (tmp___3) {

        } else {
          vgPlain_assert_fail((Bool )0,
                              (Char const   *)"HG_(is_sane_Thread)(thr)",
                              (Char const   *)"hg_main.c", 871,
                              (Char const   *)"locks__sanity_check", "");
        }
        tmp___4 = vgHelgrind_elemWS(univ_lsets, thr->locksetA,
                                    (UWord )((Word )lk));
        if (tmp___4) {

        } else {
          while (1) {
            how = (Char *)"6";
            goto bad;
            break;
          }
        }
        if (lk->heldW) {
          tmp___5 = vgHelgrind_elemWS(univ_lsets, thr->locksetW,
                                      (UWord )((Word )lk));
          if (tmp___5) {

          } else {
            while (1) {
              how = (Char *)"7";
              goto bad;
              break;
            }
          }
        } else {

        }
        if (! lk->heldW) {
          tmp___6 = vgHelgrind_elemWS(univ_lsets, thr->locksetW,
                                      (UWord )((Word )lk));
          if (tmp___6) {
            while (1) {
              how = (Char *)"8";
              goto bad;
              break;
            }
          } else {

          }
        } else {

        }
      }
      vgPlain_doneIterBag(lk->heldBy);
    } else
    if (lk->heldW) {
      while (1) {
        how = (Char *)"9";
        goto bad;
        break;
      }
    } else {

    }
    lk = lk->admin_next;
  }
  return;
  bad: 
  vgPlain_printf("locks__sanity_check: who=\"%s\", bad=\"%s\"\n", who, how);
  vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                      (Char const   *)"hg_main.c", 894,
                      (Char const   *)"locks__sanity_check", "");
}
}
static void all_except_Locks__sanity_check(Char *who ) 
{ 


  {
  stats__sanity_checks ++;
  threads__sanity_check(who);
  if (vgHelgrind_clo_track_lockorders) {
    laog__sanity_check(who);
  } else {

  }
  return;
}
}
static void all__sanity_check(Char *who ) 
{ 


  {
  all_except_Locks__sanity_check(who);
  locks__sanity_check(who);
  return;
}
}
static void ( __attribute__((__noinline__)) laog__pre_thread_acquires_lock)(Thread *thr ,
                                                                            Lock *lk ) ;
__inline static Thread *get_current_Thread(void) ;
static void ( __attribute__((__noinline__)) laog__handle_one_lock_deletion)(Lock *lk ) ;
static void shadow_mem_scopy_range(Thread *thr , Addr src , Addr dst ,
                                   SizeT len ) 
{ 
  Thr *hbthr ;

  {
  hbthr = thr->hbthr;
  if (hbthr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"hbthr",
                        (Char const   *)"hg_main.c", 1052,
                        (Char const   *)"shadow_mem_scopy_range", "");
  }
  libhb_copy_shadow_state(hbthr, src, dst, len);
  return;
}
}
static void shadow_mem_cread_range(Thread *thr , Addr a , SizeT len ) 
{ 
  Thr *hbthr ;

  {
  hbthr = thr->hbthr;
  if (hbthr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"hbthr",
                        (Char const   *)"hg_main.c", 1059,
                        (Char const   *)"shadow_mem_cread_range", "");
  }
  zsm_sapplyNN_f__msmcread(hbthr, a, len);
  return;
}
}
static void shadow_mem_cwrite_range(Thread *thr , Addr a , SizeT len ) 
{ 
  Thr *hbthr ;

  {
  hbthr = thr->hbthr;
  if (hbthr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"hbthr",
                        (Char const   *)"hg_main.c", 1065,
                        (Char const   *)"shadow_mem_cwrite_range", "");
  }
  zsm_sapplyNN_f__msmcwrite(hbthr, a, len);
  return;
}
}
static void shadow_mem_make_New(Thread *thr , Addr a , SizeT len ) 
{ 


  {
  libhb_srange_new(thr->hbthr, a, len);
  return;
}
}
static void shadow_mem_make_NoAccess(Thread *thr , Addr aIN , SizeT len ) 
{ 


  {
  libhb_srange_noaccess(thr->hbthr, aIN, len);
  return;
}
}
static void shadow_mem_make_Untracked(Thread *thr , Addr aIN , SizeT len ) 
{ 


  {
  libhb_srange_untrack(thr->hbthr, aIN, len);
  return;
}
}
static void evhH__post_thread_w_acquires_lock(Thread *thr , LockKind lkk ,
                                              Addr lock_ga ) 
{ 
  Lock *lk ;
  Bool tmp ;
  ThreadId tmp___0 ;
  Bool tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;
  Bool tmp___4 ;

  {
  tmp = vgHelgrind_is_sane_Thread(thr);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                        (Char const   *)"hg_main.c", 1139,
                        (Char const   *)"evhH__post_thread_w_acquires_lock", "");
  }
  tmp___0 = map_threads_reverse_lookup_SLOW(thr);
  lk = map_locks_lookup_or_create(lkk, lock_ga, tmp___0);
  tmp___1 = vgHelgrind_is_sane_LockN(lk);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 1144,
                        (Char const   *)"evhH__post_thread_w_acquires_lock", "");
  }
  if (thr->hbthr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr->hbthr",
                        (Char const   *)"hg_main.c", 1147,
                        (Char const   *)"evhH__post_thread_w_acquires_lock", "");
  }
  if (lk->hbso) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->hbso",
                        (Char const   *)"hg_main.c", 1148,
                        (Char const   *)"evhH__post_thread_w_acquires_lock", "");
  }
  if ((unsigned int )lk->heldBy == (unsigned int )((void *)0)) {
    if (! lk->heldW) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"!lk->heldW",
                          (Char const   *)"hg_main.c", 1152,
                          (Char const   *)"evhH__post_thread_w_acquires_lock",
                          "");
    }
    lockN_acquire_writer(lk, thr);
    libhb_so_recv(thr->hbthr, lk->hbso, (Bool )1);
    goto noerror;
  } else {

  }
  if (lk->heldBy) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->heldBy",
                        (Char const   *)"hg_main.c", 1161,
                        (Char const   *)"evhH__post_thread_w_acquires_lock", "");
  }
  if (! lk->heldW) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"Bug in libpthread: write lock granted on rwlock which is currently rd-held");
    goto error;
  } else {

  }
  tmp___2 = vgPlain_sizeUniqueBag(lk->heldBy);
  if (tmp___2 == 1UL) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"VG_(sizeUniqueBag)(lk->heldBy) == 1",
                        (Char const   *)"hg_main.c", 1171,
                        (Char const   *)"evhH__post_thread_w_acquires_lock", "");
  }
  tmp___3 = vgPlain_anyElementOfBag(lk->heldBy);
  if ((unsigned int )thr != (unsigned int )((Thread *)tmp___3)) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"Bug in libpthread: write lock granted on mutex/rwlock which is currently wr-held by a different thread");
    goto error;
  } else {

  }
  if ((unsigned int )lk->kind != 1001U) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"Bug in libpthread: recursive write lock granted on mutex/wrlock which does not support recursion");
    goto error;
  } else {

  }
  lockN_acquire_writer(lk, thr);
  libhb_so_recv(thr->hbthr, lk->hbso, (Bool )1);
  goto noerror;
  noerror: 
  if (vgHelgrind_clo_track_lockorders) {
    laog__pre_thread_acquires_lock(thr, lk);
  } else {

  }
  thr->locksetA = vgHelgrind_addToWS(univ_lsets, thr->locksetA,
                                     (UWord )((Word )lk));
  thr->locksetW = vgHelgrind_addToWS(univ_lsets, thr->locksetW,
                                     (UWord )((Word )lk));
  error: 
  tmp___4 = vgHelgrind_is_sane_LockN(lk);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 1213,
                        (Char const   *)"evhH__post_thread_w_acquires_lock", "");
  }
  return;
}
}
static void evhH__post_thread_r_acquires_lock(Thread *thr , LockKind lkk ,
                                              Addr lock_ga ) 
{ 
  Lock *lk ;
  Bool tmp ;
  ThreadId tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgHelgrind_is_sane_Thread(thr);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                        (Char const   *)"hg_main.c", 1236,
                        (Char const   *)"evhH__post_thread_r_acquires_lock", "");
  }
  if ((unsigned int )lkk == 1003U) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lkk == LK_rdwr",
                        (Char const   *)"hg_main.c", 1240,
                        (Char const   *)"evhH__post_thread_r_acquires_lock", "");
  }
  tmp___0 = map_threads_reverse_lookup_SLOW(thr);
  lk = map_locks_lookup_or_create(lkk, lock_ga, tmp___0);
  tmp___1 = vgHelgrind_is_sane_LockN(lk);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 1243,
                        (Char const   *)"evhH__post_thread_r_acquires_lock", "");
  }
  if (thr->hbthr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr->hbthr",
                        (Char const   *)"hg_main.c", 1246,
                        (Char const   *)"evhH__post_thread_r_acquires_lock", "");
  }
  if (lk->hbso) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->hbso",
                        (Char const   *)"hg_main.c", 1247,
                        (Char const   *)"evhH__post_thread_r_acquires_lock", "");
  }
  if ((unsigned int )lk->heldBy == (unsigned int )((void *)0)) {
    if (! lk->heldW) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"!lk->heldW",
                          (Char const   *)"hg_main.c", 1251,
                          (Char const   *)"evhH__post_thread_r_acquires_lock",
                          "");
    }
    lockN_acquire_reader(lk, thr);
    libhb_so_recv(thr->hbthr, lk->hbso, (Bool )0);
    goto noerror;
  } else {

  }
  if (lk->heldBy) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->heldBy",
                        (Char const   *)"hg_main.c", 1260,
                        (Char const   *)"evhH__post_thread_r_acquires_lock", "");
  }
  if (lk->heldW) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"Bug in libpthread: read lock granted on rwlock which is currently wr-held");
    goto error;
  } else {

  }
  lockN_acquire_reader(lk, thr);
  libhb_so_recv(thr->hbthr, lk->hbso, (Bool )0);
  goto noerror;
  noerror: 
  if (vgHelgrind_clo_track_lockorders) {
    laog__pre_thread_acquires_lock(thr, lk);
  } else {

  }
  thr->locksetA = vgHelgrind_addToWS(univ_lsets, thr->locksetA,
                                     (UWord )((Word )lk));
  error: 
  tmp___2 = vgHelgrind_is_sane_LockN(lk);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                        (Char const   *)"hg_main.c", 1288,
                        (Char const   *)"evhH__post_thread_r_acquires_lock", "");
  }
  return;
}
}
static void evhH__pre_thread_releases_lock(Thread *thr , Addr lock_ga ,
                                           Bool isRDWR ) 
{ 
  Lock *lock ;
  Word n ;
  Bool was_heldW ;
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;
  UWord tmp___3 ;
  Thread *realOwner ;
  UWord tmp___4 ;
  Bool tmp___5 ;
  Bool tmp___6 ;
  Bool tmp___7 ;
  UWord tmp___8 ;
  Bool tmp___9 ;
  Bool tmp___10 ;
  Bool tmp___11 ;
  Bool tmp___12 ;

  {
  tmp = vgHelgrind_is_sane_Thread(thr);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                        (Char const   *)"hg_main.c", 1311,
                        (Char const   *)"evhH__pre_thread_releases_lock", "");
  }
  lock = map_locks_maybe_lookup(lock_ga);
  if (! lock) {
    vgHelgrind_record_error_UnlockBogus(thr, lock_ga);
    return;
  } else {

  }
  if (lock->guestaddr == lock_ga) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lock->guestaddr == lock_ga",
                        (Char const   *)"hg_main.c", 1322,
                        (Char const   *)"evhH__pre_thread_releases_lock", "");
  }
  tmp___0 = vgHelgrind_is_sane_LockN(lock);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lock)",
                        (Char const   *)"hg_main.c", 1323,
                        (Char const   *)"evhH__pre_thread_releases_lock", "");
  }
  if (isRDWR) {
    if ((unsigned int )lock->kind != 1003U) {
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_rwlock_unlock with a pthread_mutex_t* argument ");
    } else {

    }
  } else {

  }
  if (! isRDWR) {
    if ((unsigned int )lock->kind == 1003U) {
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_mutex_unlock with a pthread_rwlock_t* argument ");
    } else {

    }
  } else {

  }
  if (! lock->heldBy) {
    if (! lock->heldW) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"!lock->heldW",
                          (Char const   *)"hg_main.c", 1337,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    }
    vgHelgrind_record_error_UnlockUnlocked(thr, lock);
    tmp___1 = vgHelgrind_elemWS(univ_lsets, thr->locksetA, (UWord )((Word )lock));
    if (tmp___1) {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"!HG_(elemWS)( univ_lsets, thr->locksetA, (Word)lock )",
                          (Char const   *)"hg_main.c", 1339,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    } else {

    }
    tmp___2 = vgHelgrind_elemWS(univ_lsets, thr->locksetW, (UWord )((Word )lock));
    if (tmp___2) {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"!HG_(elemWS)( univ_lsets, thr->locksetW, (Word)lock )",
                          (Char const   *)"hg_main.c", 1340,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    } else {

    }
    goto error;
  } else {

  }
  if (lock->heldBy) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lock->heldBy",
                        (Char const   *)"hg_main.c", 1345,
                        (Char const   *)"evhH__pre_thread_releases_lock", "");
  }
  was_heldW = lock->heldW;
  tmp___3 = vgPlain_elemBag(lock->heldBy, (UWord )((Word )thr));
  n = (Word )tmp___3;
  if (n >= 0L) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"n >= 0",
                        (Char const   *)"hg_main.c", 1351,
                        (Char const   *)"evhH__pre_thread_releases_lock", "");
  }
  if (n == 0L) {
    tmp___4 = vgPlain_anyElementOfBag(lock->heldBy);
    realOwner = (Thread *)tmp___4;
    tmp___5 = vgHelgrind_is_sane_Thread(realOwner);
    if (tmp___5) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"HG_(is_sane_Thread)(realOwner)",
                          (Char const   *)"hg_main.c", 1358,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    }
    if ((unsigned int )realOwner != (unsigned int )thr) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"realOwner != thr",
                          (Char const   *)"hg_main.c", 1359,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    }
    tmp___6 = vgHelgrind_elemWS(univ_lsets, thr->locksetA, (UWord )((Word )lock));
    if (tmp___6) {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"!HG_(elemWS)( univ_lsets, thr->locksetA, (Word)lock )",
                          (Char const   *)"hg_main.c", 1360,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    } else {

    }
    tmp___7 = vgHelgrind_elemWS(univ_lsets, thr->locksetW, (UWord )((Word )lock));
    if (tmp___7) {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"!HG_(elemWS)( univ_lsets, thr->locksetW, (Word)lock )",
                          (Char const   *)"hg_main.c", 1361,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    } else {

    }
    vgHelgrind_record_error_UnlockForeign(thr, realOwner, lock);
    goto error;
  } else {

  }
  if (n >= 1L) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"n >= 1",
                        (Char const   *)"hg_main.c", 1367,
                        (Char const   *)"evhH__pre_thread_releases_lock", "");
  }
  lockN_release(lock, thr);
  n --;
  if (n >= 0L) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"n >= 0",
                        (Char const   *)"hg_main.c", 1372,
                        (Char const   *)"evhH__pre_thread_releases_lock", "");
  }
  if (n > 0L) {
    if (lock->heldBy) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"lock->heldBy",
                          (Char const   *)"hg_main.c", 1375,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    }
    tmp___8 = vgPlain_elemBag(lock->heldBy, (UWord )((Word )thr));
    if ((UWord )n == tmp___8) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"n == VG_(elemBag)( lock->heldBy, (Word)thr )",
                          (Char const   *)"hg_main.c", 1376,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    }
    if ((unsigned int )lock->kind == 1001U) {

    } else
    if ((unsigned int )lock->kind == 1003U) {
      if (! lock->heldW) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"lock->kind == LK_mbRec || (lock->kind == LK_rdwr && !lock->heldW)",
                            (Char const   *)"hg_main.c", 1380,
                            (Char const   *)"evhH__pre_thread_releases_lock", "");
      }
    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"lock->kind == LK_mbRec || (lock->kind == LK_rdwr && !lock->heldW)",
                          (Char const   *)"hg_main.c", 1380,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    }
    tmp___9 = vgHelgrind_elemWS(univ_lsets, thr->locksetA, (UWord )((Word )lock));
    if (tmp___9) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"HG_(elemWS)( univ_lsets, thr->locksetA, (Word)lock )",
                          (Char const   *)"hg_main.c", 1381,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    }
    if (lock->heldW) {
      tmp___10 = vgHelgrind_elemWS(univ_lsets, thr->locksetW,
                                   (UWord )((Word )lock));
      if (tmp___10) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"HG_(elemWS)( univ_lsets, thr->locksetW, (Word)lock )",
                            (Char const   *)"hg_main.c", 1383,
                            (Char const   *)"evhH__pre_thread_releases_lock", "");
      }
    } else {
      tmp___11 = vgHelgrind_elemWS(univ_lsets, thr->locksetW,
                                   (UWord )((Word )lock));
      if (tmp___11) {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"!HG_(elemWS)( univ_lsets, thr->locksetW, (Word)lock )",
                            (Char const   *)"hg_main.c", 1385,
                            (Char const   *)"evhH__pre_thread_releases_lock", "");
      } else {

      }
    }
  } else {
    if ((unsigned int )lock->kind == 1003U) {
      if (lock->heldBy) {
        if ((int )lock->heldW == 0) {

        } else {
          vgPlain_assert_fail((Bool )0, (Char const   *)"lock->heldW == False",
                              (Char const   *)"hg_main.c", 1398,
                              (Char const   *)"evhH__pre_thread_releases_lock",
                              "");
        }
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      if (! lock->heldBy) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"!lock->heldBy",
                            (Char const   *)"hg_main.c", 1407,
                            (Char const   *)"evhH__pre_thread_releases_lock", "");
      }
      if ((int )lock->heldW == 0) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"lock->heldW == False",
                            (Char const   *)"hg_main.c", 1408,
                            (Char const   *)"evhH__pre_thread_releases_lock", "");
      }
    }
    thr->locksetA = vgHelgrind_delFromWS(univ_lsets, thr->locksetA,
                                         (UWord )((Word )lock));
    thr->locksetW = vgHelgrind_delFromWS(univ_lsets, thr->locksetW,
                                         (UWord )((Word )lock));
    if (thr->hbthr) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"thr->hbthr",
                          (Char const   *)"hg_main.c", 1419,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    }
    if (lock->hbso) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"lock->hbso",
                          (Char const   *)"hg_main.c", 1420,
                          (Char const   *)"evhH__pre_thread_releases_lock", "");
    }
    libhb_so_send(thr->hbthr, lock->hbso, was_heldW);
  }
  error: 
  tmp___12 = vgHelgrind_is_sane_LockN(lock);
  if (tmp___12) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lock)",
                        (Char const   *)"hg_main.c", 1428,
                        (Char const   *)"evhH__pre_thread_releases_lock", "");
  }
  return;
}
}
static Thread *current_Thread  =    (Thread *)((void *)0);
static Thread *current_Thread_prev  =    (Thread *)((void *)0);
static void evh__start_client_code(ThreadId tid , ULong nDisp ) 
{ 


  {
  if ((unsigned int )current_Thread == (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"current_Thread == NULL",
                        (Char const   *)"hg_main.c", 1457,
                        (Char const   *)"evh__start_client_code", "");
  }
  current_Thread = map_threads_lookup(tid);
  if ((unsigned int )current_Thread != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"current_Thread != NULL",
                        (Char const   *)"hg_main.c", 1459,
                        (Char const   *)"evh__start_client_code", "");
  }
  if ((unsigned int )current_Thread != (unsigned int )current_Thread_prev) {
    libhb_Thr_resumes(current_Thread->hbthr);
    current_Thread_prev = current_Thread;
  } else {

  }
  return;
}
}
static void evh__stop_client_code(ThreadId tid , ULong nDisp ) 
{ 


  {
  if ((unsigned int )current_Thread != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"current_Thread != NULL",
                        (Char const   *)"hg_main.c", 1467,
                        (Char const   *)"evh__stop_client_code", "");
  }
  current_Thread = (Thread *)((void *)0);
  libhb_maybe_GC();
  return;
}
}
__inline static Thread *get_current_Thread_in_C_C(void) 
{ 


  {
  return (current_Thread);
}
}
__inline static Thread *get_current_Thread(void) 
{ 
  ThreadId coretid ;
  Thread *thr ;
  long tmp ;

  {
  thr = get_current_Thread_in_C_C();
  tmp = __builtin_expect((long )(! (! thr)), 1L);
  if (tmp) {
    return (thr);
  } else {

  }
  coretid = vgPlain_get_running_tid();
  if (coretid == 0U) {
    coretid = (ThreadId )1;
  } else {

  }
  thr = map_threads_lookup(coretid);
  return (thr);
}
}
static void evh__new_mem(Addr a , SizeT len ) 
{ 
  Thread *tmp ;

  {
  tmp = get_current_Thread();
  shadow_mem_make_New(tmp, a, len);
  if (len >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__new_mem-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__new_mem_stack(Addr a , SizeT len ) 
{ 
  Thread *tmp ;

  {
  tmp = get_current_Thread();
  shadow_mem_make_New(tmp, a, len);
  if (len >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__new_mem_stack-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__new_mem_w_tid(Addr a , SizeT len , ThreadId tid ) 
{ 
  Thread *tmp ;

  {
  tmp = get_current_Thread();
  shadow_mem_make_New(tmp, a, len);
  if (len >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__new_mem_w_tid-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__new_mem_w_perms(Addr a , SizeT len , Bool rr , Bool ww ,
                                 Bool xx , ULong di_handle ) 
{ 
  Thread *tmp ;

  {
  if (rr) {
    tmp = get_current_Thread();
    shadow_mem_make_New(tmp, a, len);
  } else
  if (ww) {
    tmp = get_current_Thread();
    shadow_mem_make_New(tmp, a, len);
  } else
  if (xx) {
    tmp = get_current_Thread();
    shadow_mem_make_New(tmp, a, len);
  } else {

  }
  if (len >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__new_mem_w_perms-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__set_perms(Addr a , SizeT len , Bool rr , Bool ww , Bool xx ) 
{ 
  Thread *tmp ;

  {
  if (rr) {

  } else
  if (ww) {

  } else {
    tmp = get_current_Thread();
    shadow_mem_make_NoAccess(tmp, a, len);
  }
  if (len >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__set_perms-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__die_mem(Addr a , SizeT len ) 
{ 
  Thread *tmp ;

  {
  tmp = get_current_Thread();
  shadow_mem_make_NoAccess(tmp, a, len);
  if (len >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__die_mem-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__untrack_mem(Addr a , SizeT len ) 
{ 
  Thread *tmp ;

  {
  tmp = get_current_Thread();
  shadow_mem_make_Untracked(tmp, a, len);
  if (len >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__untrack_mem-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__copy_mem(Addr src , Addr dst , SizeT len ) 
{ 
  Thread *tmp ;

  {
  tmp = get_current_Thread();
  shadow_mem_scopy_range(tmp, src, dst, len);
  if (len >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__copy_mem-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__pre_thread_ll_create(ThreadId parent , ThreadId child ) 
{ 
  Thread *thr_p ;
  Thread *thr_c ;
  Thr *hbthr_p ;
  Thr *hbthr_c ;
  Bool tmp ;
  Bool tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  Word first_ip_delta ;

  {
  if (parent != 0U) {
    tmp = vgHelgrind_is_sane_ThreadId(parent);
    if (tmp) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"HG_(is_sane_ThreadId)(parent)",
                          (Char const   *)"hg_main.c", 1589,
                          (Char const   *)"evh__pre_thread_ll_create", "");
    }
    tmp___0 = vgHelgrind_is_sane_ThreadId(child);
    if (tmp___0) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"HG_(is_sane_ThreadId)(child)",
                          (Char const   *)"hg_main.c", 1590,
                          (Char const   *)"evh__pre_thread_ll_create", "");
    }
    if (parent != child) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"parent != child",
                          (Char const   *)"hg_main.c", 1591,
                          (Char const   *)"evh__pre_thread_ll_create", "");
    }
    thr_p = map_threads_maybe_lookup(parent);
    thr_c = map_threads_maybe_lookup(child);
    if ((unsigned int )thr_p != (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"thr_p != NULL",
                          (Char const   *)"hg_main.c", 1596,
                          (Char const   *)"evh__pre_thread_ll_create", "");
    }
    if ((unsigned int )thr_c == (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"thr_c == NULL",
                          (Char const   *)"hg_main.c", 1597,
                          (Char const   *)"evh__pre_thread_ll_create", "");
    }
    hbthr_p = thr_p->hbthr;
    if ((unsigned int )hbthr_p != (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"hbthr_p != NULL",
                          (Char const   *)"hg_main.c", 1600,
                          (Char const   *)"evh__pre_thread_ll_create", "");
    }
    tmp___1 = libhb_get_Thr_hgthread(hbthr_p);
    if ((unsigned int )tmp___1 == (unsigned int )thr_p) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"libhb_get_Thr_hgthread(hbthr_p) == thr_p",
                          (Char const   *)"hg_main.c", 1601,
                          (Char const   *)"evh__pre_thread_ll_create", "");
    }
    hbthr_c = libhb_create(hbthr_p);
    thr_c = mk_Thread(hbthr_c);
    tmp___2 = libhb_get_Thr_hgthread(hbthr_c);
    if ((unsigned int )tmp___2 == (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"libhb_get_Thr_hgthread(hbthr_c) == NULL",
                          (Char const   *)"hg_main.c", 1608,
                          (Char const   *)"evh__pre_thread_ll_create", "");
    }
    libhb_set_Thr_hgthread(hbthr_c, (void *)thr_c);
    *(map_threads + child) = thr_c;
    if (thr_c->coretid == 0U) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"thr_c->coretid == VG_INVALID_THREADID",
                          (Char const   *)"hg_main.c", 1613,
                          (Char const   *)"evh__pre_thread_ll_create", "");
    }
    thr_c->coretid = child;
    first_ip_delta = (Word )0;
    thr_c->created_at = vgPlain_record_ExeContext(parent, first_ip_delta);
  } else {

  }
  if (vgHelgrind_clo_sanity_flags & 1L) {
    all__sanity_check((Char *)"evh__pre_thread_create-post");
  } else {

  }
  return;
}
}
static void evh__pre_thread_ll_exit(ThreadId quit_tid ) 
{ 
  Int nHeld ;
  Thread *thr_q ;
  Bool tmp ;
  UWord tmp___0 ;
  HChar buf[80] ;
  char const   *tmp___1 ;

  {
  tmp = vgHelgrind_is_sane_ThreadId(quit_tid);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"HG_(is_sane_ThreadId)(quit_tid)",
                        (Char const   *)"hg_main.c", 1662,
                        (Char const   *)"evh__pre_thread_ll_exit", "");
  }
  thr_q = map_threads_maybe_lookup(quit_tid);
  if ((unsigned int )thr_q != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr_q != NULL",
                        (Char const   *)"hg_main.c", 1664,
                        (Char const   *)"evh__pre_thread_ll_exit", "");
  }
  tmp___0 = vgHelgrind_cardinalityWS(univ_lsets, thr_q->locksetA);
  nHeld = (Int )tmp___0;
  if (nHeld >= 0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"nHeld >= 0",
                        (Char const   *)"hg_main.c", 1668,
                        (Char const   *)"evh__pre_thread_ll_exit", "");
  }
  if (nHeld > 0) {
    if (nHeld > 1) {
      tmp___1 = "s";
    } else {
      tmp___1 = "";
    }
    vgPlain_sprintf((Char *)(buf), "Exiting thread still holds %d lock%s",
                    nHeld, tmp___1);
    vgHelgrind_record_error_Misc(thr_q, buf);
  } else {

  }
  if (thr_q->hbthr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr_q->hbthr",
                        (Char const   *)"hg_main.c", 1682,
                        (Char const   *)"evh__pre_thread_ll_exit", "");
  }
  libhb_async_exit(thr_q->hbthr);
  if (thr_q->coretid == quit_tid) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr_q->coretid == quit_tid",
                        (Char const   *)"hg_main.c", 1684,
                        (Char const   *)"evh__pre_thread_ll_exit", "");
  }
  thr_q->coretid = (ThreadId )0;
  map_threads_delete(quit_tid);
  if (vgHelgrind_clo_sanity_flags & 1L) {
    all__sanity_check((Char *)"evh__pre_thread_ll_exit-post");
  } else {

  }
  return;
}
}
static void evh__atfork_child(ThreadId tid ) 
{ 
  UInt i ;
  Thread *thr ;

  {
  thr = map_threads_maybe_lookup((ThreadId )0);
  if (! thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"!thr",
                        (Char const   *)"hg_main.c", 1703,
                        (Char const   *)"evh__atfork_child", "");
  }
  i = (UInt )1;
  while (i < 500U) {
    if (i == tid) {
      goto __Cont;
    } else {

    }
    thr = map_threads_maybe_lookup(i);
    if (! thr) {
      goto __Cont;
    } else {

    }
    if (thr->hbthr) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"thr->hbthr",
                          (Char const   *)"hg_main.c", 1713,
                          (Char const   *)"evh__atfork_child", "");
    }
    libhb_async_exit(thr->hbthr);
    if (thr->coretid == i) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"thr->coretid == i",
                          (Char const   *)"hg_main.c", 1715,
                          (Char const   *)"evh__atfork_child", "");
    }
    thr->coretid = (ThreadId )0;
    map_threads_delete(i);
    __Cont: /* CIL Label */ 
    i ++;
  }
  return;
}
}
static void evh__HG_PTHREAD_JOIN_POST(ThreadId stay_tid , Thread *quit_thr ) 
{ 
  Thread *thr_s ;
  Thread *thr_q ;
  Thr *hbthr_s ;
  Thr *hbthr_q ;
  SO *so ;
  Bool tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  ThreadId tmp___2 ;

  {
  tmp = vgHelgrind_is_sane_ThreadId(stay_tid);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"HG_(is_sane_ThreadId)(stay_tid)",
                        (Char const   *)"hg_main.c", 1735,
                        (Char const   *)"evh__HG_PTHREAD_JOIN_POST", "");
  }
  thr_s = map_threads_maybe_lookup(stay_tid);
  thr_q = quit_thr;
  if ((unsigned int )thr_s != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr_s != NULL",
                        (Char const   *)"hg_main.c", 1739,
                        (Char const   *)"evh__HG_PTHREAD_JOIN_POST", "");
  }
  if ((unsigned int )thr_q != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr_q != NULL",
                        (Char const   *)"hg_main.c", 1740,
                        (Char const   *)"evh__HG_PTHREAD_JOIN_POST", "");
  }
  if ((unsigned int )thr_s != (unsigned int )thr_q) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr_s != thr_q",
                        (Char const   *)"hg_main.c", 1741,
                        (Char const   *)"evh__HG_PTHREAD_JOIN_POST", "");
  }
  hbthr_s = thr_s->hbthr;
  hbthr_q = thr_q->hbthr;
  if ((unsigned int )hbthr_s != (unsigned int )hbthr_q) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"hbthr_s != hbthr_q",
                        (Char const   *)"hg_main.c", 1745,
                        (Char const   *)"evh__HG_PTHREAD_JOIN_POST", "");
  }
  tmp___0 = libhb_get_Thr_hgthread(hbthr_s);
  if ((unsigned int )tmp___0 == (unsigned int )thr_s) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"libhb_get_Thr_hgthread(hbthr_s) == thr_s",
                        (Char const   *)"hg_main.c", 1746,
                        (Char const   *)"evh__HG_PTHREAD_JOIN_POST", "");
  }
  tmp___1 = libhb_get_Thr_hgthread(hbthr_q);
  if ((unsigned int )tmp___1 == (unsigned int )thr_q) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"libhb_get_Thr_hgthread(hbthr_q) == thr_q",
                        (Char const   *)"hg_main.c", 1747,
                        (Char const   *)"evh__HG_PTHREAD_JOIN_POST", "");
  }
  so = libhb_so_alloc();
  if (so) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"so",
                        (Char const   *)"hg_main.c", 1754,
                        (Char const   *)"evh__HG_PTHREAD_JOIN_POST", "");
  }
  libhb_so_send(hbthr_q, so, (Bool )1);
  libhb_so_recv(hbthr_s, so, (Bool )1);
  libhb_so_dealloc(so);
  tmp___2 = map_threads_maybe_reverse_lookup_SLOW(thr_q);
  if (tmp___2 == 0U) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"map_threads_maybe_reverse_lookup_SLOW(thr_q) == VG_INVALID_THREADID",
                        (Char const   *)"hg_main.c", 1772,
                        (Char const   *)"evh__HG_PTHREAD_JOIN_POST", "");
  }
  if (vgHelgrind_clo_sanity_flags & 1L) {
    all__sanity_check((Char *)"evh__post_thread_join-post");
  } else {

  }
  return;
}
}
static void evh__pre_mem_read(CorePart part , ThreadId tid , Char *s , Addr a ,
                              SizeT size ) 
{ 
  Thread *tmp ;

  {
  tmp = map_threads_lookup(tid);
  shadow_mem_cread_range(tmp, a, size);
  if (size >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__pre_mem_read-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__pre_mem_read_asciiz(CorePart part , ThreadId tid , Char *s ,
                                     Addr a ) 
{ 
  Int len ;
  Bool tmp ;
  SizeT tmp___0 ;
  Thread *tmp___1 ;

  {
  tmp = vgPlain_am_is_valid_for_client(a, (SizeT )1, (UInt )1);
  if (tmp) {

  } else {
    return;
  }
  tmp___0 = vgPlain_strlen((Char const   *)((Char *)a));
  len = (Int )tmp___0;
  tmp___1 = map_threads_lookup(tid);
  shadow_mem_cread_range(tmp___1, a, (SizeT )(len + 1));
  if (len >= 256) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__pre_mem_read_asciiz-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__pre_mem_write(CorePart part , ThreadId tid , Char *s , Addr a ,
                               SizeT size ) 
{ 
  Thread *tmp ;

  {
  tmp = map_threads_lookup(tid);
  shadow_mem_cwrite_range(tmp, a, size);
  if (size >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__pre_mem_write-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__new_mem_heap(Addr a , SizeT len , Bool is_inited ) 
{ 
  Thread *tmp ;
  Thread *tmp___0 ;

  {
  if (is_inited) {
    tmp = get_current_Thread();
    shadow_mem_make_New(tmp, a, len);
  } else {
    tmp___0 = get_current_Thread();
    shadow_mem_make_New(tmp___0, a, len);
  }
  if (len >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__pre_mem_read-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__die_mem_heap(Addr a , SizeT len ) 
{ 
  Thread *tmp ;

  {
  tmp = get_current_Thread();
  shadow_mem_make_NoAccess(tmp, a, len);
  if (len >= 256UL) {
    if (vgHelgrind_clo_sanity_flags & (long )(1 << 2)) {
      all__sanity_check((Char *)"evh__pre_mem_read-post");
    } else {

    }
  } else {

  }
  return;
}
}
static void ( __attribute__((__regparm__(1))) evh__mem_help_cread_1)(Addr a ) 
{ 
  Thread *thr ;
  Thread *tmp ;
  Thr *hbthr ;

  {
  tmp = get_current_Thread_in_C_C();
  thr = tmp;
  hbthr = thr->hbthr;
  zsm_sapply08_f__msmcread(hbthr, a);
  return;
}
}
static void ( __attribute__((__regparm__(1))) evh__mem_help_cread_2)(Addr a ) 
{ 
  Thread *thr ;
  Thread *tmp ;
  Thr *hbthr ;

  {
  tmp = get_current_Thread_in_C_C();
  thr = tmp;
  hbthr = thr->hbthr;
  zsm_sapply16_f__msmcread(hbthr, a);
  return;
}
}
static void ( __attribute__((__regparm__(1))) evh__mem_help_cread_4)(Addr a ) 
{ 
  Thread *thr ;
  Thread *tmp ;
  Thr *hbthr ;

  {
  tmp = get_current_Thread_in_C_C();
  thr = tmp;
  hbthr = thr->hbthr;
  zsm_sapply32_f__msmcread(hbthr, a);
  return;
}
}
static void ( __attribute__((__regparm__(1))) evh__mem_help_cread_8)(Addr a ) 
{ 
  Thread *thr ;
  Thread *tmp ;
  Thr *hbthr ;

  {
  tmp = get_current_Thread_in_C_C();
  thr = tmp;
  hbthr = thr->hbthr;
  zsm_sapply64_f__msmcread(hbthr, a);
  return;
}
}
static void ( __attribute__((__regparm__(2))) evh__mem_help_cread_N)(Addr a ,
                                                                     SizeT size ) 
{ 
  Thread *thr ;
  Thread *tmp ;
  Thr *hbthr ;

  {
  tmp = get_current_Thread_in_C_C();
  thr = tmp;
  hbthr = thr->hbthr;
  zsm_sapplyNN_f__msmcread(hbthr, a, size);
  return;
}
}
static void ( __attribute__((__regparm__(1))) evh__mem_help_cwrite_1)(Addr a ) 
{ 
  Thread *thr ;
  Thread *tmp ;
  Thr *hbthr ;

  {
  tmp = get_current_Thread_in_C_C();
  thr = tmp;
  hbthr = thr->hbthr;
  zsm_sapply08_f__msmcwrite(hbthr, a);
  return;
}
}
static void ( __attribute__((__regparm__(1))) evh__mem_help_cwrite_2)(Addr a ) 
{ 
  Thread *thr ;
  Thread *tmp ;
  Thr *hbthr ;

  {
  tmp = get_current_Thread_in_C_C();
  thr = tmp;
  hbthr = thr->hbthr;
  zsm_sapply16_f__msmcwrite(hbthr, a);
  return;
}
}
static void ( __attribute__((__regparm__(1))) evh__mem_help_cwrite_4)(Addr a ) 
{ 
  Thread *thr ;
  Thread *tmp ;
  Thr *hbthr ;

  {
  tmp = get_current_Thread_in_C_C();
  thr = tmp;
  hbthr = thr->hbthr;
  zsm_sapply32_f__msmcwrite(hbthr, a);
  return;
}
}
static void ( __attribute__((__regparm__(1))) evh__mem_help_cwrite_8)(Addr a ) 
{ 
  Thread *thr ;
  Thread *tmp ;
  Thr *hbthr ;

  {
  tmp = get_current_Thread_in_C_C();
  thr = tmp;
  hbthr = thr->hbthr;
  zsm_sapply64_f__msmcwrite(hbthr, a);
  return;
}
}
static void ( __attribute__((__regparm__(2))) evh__mem_help_cwrite_N)(Addr a ,
                                                                      SizeT size ) 
{ 
  Thread *thr ;
  Thread *tmp ;
  Thr *hbthr ;

  {
  tmp = get_current_Thread_in_C_C();
  thr = tmp;
  hbthr = thr->hbthr;
  zsm_sapplyNN_f__msmcwrite(hbthr, a, size);
  return;
}
}
static void evh__HG_PTHREAD_MUTEX_INIT_POST(ThreadId tid , void *mutex ,
                                            Word mbRec ) 
{ 
  int tmp ;

  {
  if (mbRec == 0L) {

  } else
  if (mbRec == 1L) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"mbRec == 0 || mbRec == 1",
                        (Char const   *)"hg_main.c", 1932,
                        (Char const   *)"evh__HG_PTHREAD_MUTEX_INIT_POST", "");
  }
  if (mbRec) {
    tmp = 1001;
  } else {
    tmp = 1002;
  }
  map_locks_lookup_or_create((LockKind )tmp, (Addr )mutex, tid);
  if (vgHelgrind_clo_sanity_flags & (long )(1 << 1)) {
    all__sanity_check((Char *)"evh__hg_PTHREAD_MUTEX_INIT_POST");
  } else {

  }
  return;
}
}
static void evh__HG_PTHREAD_MUTEX_DESTROY_PRE(ThreadId tid , void *mutex ) 
{ 
  Thread *thr ;
  Lock *lk ;
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;

  {
  thr = map_threads_maybe_lookup(tid);
  tmp = vgHelgrind_is_sane_Thread(thr);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                        (Char const   *)"hg_main.c", 1950,
                        (Char const   *)"evh__HG_PTHREAD_MUTEX_DESTROY_PRE", "");
  }
  lk = map_locks_maybe_lookup((Addr )mutex);
  if ((unsigned int )lk == (unsigned int )((void *)0)) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_mutex_destroy with invalid argument");
  } else
  if ((unsigned int )lk->kind != 1002U) {
    if ((unsigned int )lk->kind != 1001U) {
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_mutex_destroy with invalid argument");
    } else {

    }
  } else {

  }
  if (lk) {
    tmp___0 = vgHelgrind_is_sane_LockN(lk);
    if (tmp___0) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                          (Char const   *)"hg_main.c", 1960,
                          (Char const   *)"evh__HG_PTHREAD_MUTEX_DESTROY_PRE",
                          "");
    }
    if (lk->guestaddr == (Addr )mutex) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"lk->guestaddr == (Addr)mutex",
                          (Char const   *)"hg_main.c", 1961,
                          (Char const   *)"evh__HG_PTHREAD_MUTEX_DESTROY_PRE",
                          "");
    }
    if (lk->heldBy) {
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_mutex_destroy of a locked mutex");
      remove_Lock_from_locksets_of_all_owning_Threads(lk);
      vgPlain_deleteBag(lk->heldBy);
      lk->heldBy = (WordBag *)((void *)0);
      lk->heldW = (Bool )0;
      lk->acquired_at = (ExeContext *)((void *)0);
    } else {

    }
    if (! lk->heldBy) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"!lk->heldBy",
                          (Char const   *)"hg_main.c", 1973,
                          (Char const   *)"evh__HG_PTHREAD_MUTEX_DESTROY_PRE",
                          "");
    }
    tmp___1 = vgHelgrind_is_sane_LockN(lk);
    if (tmp___1) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                          (Char const   *)"hg_main.c", 1974,
                          (Char const   *)"evh__HG_PTHREAD_MUTEX_DESTROY_PRE",
                          "");
    }
    if (vgHelgrind_clo_track_lockorders) {
      laog__handle_one_lock_deletion(lk);
    } else {

    }
    map_locks_delete(lk->guestaddr);
    del_LockN(lk);
  } else {

  }
  if (vgHelgrind_clo_sanity_flags & (long )(1 << 1)) {
    all__sanity_check((Char *)"evh__hg_PTHREAD_MUTEX_DESTROY_PRE");
  } else {

  }
  return;
}
}
static void evh__HG_PTHREAD_MUTEX_LOCK_PRE(ThreadId tid , void *mutex ,
                                           Word isTryLock ) 
{ 
  Thread *thr ;
  Lock *lk ;
  HChar *errstr ;
  HChar *auxstr ;
  UWord tmp ;

  {
  if (isTryLock == 0L) {

  } else
  if (isTryLock == 1L) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"isTryLock == 0 || isTryLock == 1",
                        (Char const   *)"hg_main.c", 1997,
                        (Char const   *)"evh__HG_PTHREAD_MUTEX_LOCK_PRE", "");
  }
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 1999,
                        (Char const   *)"evh__HG_PTHREAD_MUTEX_LOCK_PRE", "");
  }
  lk = map_locks_maybe_lookup((Addr )mutex);
  if (lk) {
    if ((unsigned int )lk->kind == 1003U) {
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_mutex_lock with a pthread_rwlock_t* argument ");
    } else {

    }
  } else {

  }
  if (lk) {
    if (isTryLock == 0L) {
      if ((unsigned int )lk->kind == 1002U) {
        goto _L;
      } else
      if ((unsigned int )lk->kind == 1003U) {
        _L: /* CIL Label */ 
        if (lk->heldBy) {
          if (lk->heldW) {
            tmp = vgPlain_elemBag(lk->heldBy, (UWord )((Word )thr));
            if (tmp > 0UL) {
              errstr = (HChar *)"Attempt to re-lock a non-recursive lock I already hold";
              auxstr = (HChar *)"Lock was previously acquired";
              if (lk->acquired_at) {
                vgHelgrind_record_error_Misc_w_aux(thr, errstr, auxstr,
                                                   lk->acquired_at);
              } else {
                vgHelgrind_record_error_Misc(thr, errstr);
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
  } else {

  }
  return;
}
}
static void evh__HG_PTHREAD_MUTEX_LOCK_POST(ThreadId tid , void *mutex ) 
{ 
  Thread *thr ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2038,
                        (Char const   *)"evh__HG_PTHREAD_MUTEX_LOCK_POST", "");
  }
  evhH__post_thread_w_acquires_lock(thr, (LockKind )1001, (Addr )mutex);
  return;
}
}
static void evh__HG_PTHREAD_MUTEX_UNLOCK_PRE(ThreadId tid , void *mutex ) 
{ 
  Thread *thr ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2056,
                        (Char const   *)"evh__HG_PTHREAD_MUTEX_UNLOCK_PRE", "");
  }
  evhH__pre_thread_releases_lock(thr, (Addr )mutex, (Bool )0);
  return;
}
}
static void evh__HG_PTHREAD_MUTEX_UNLOCK_POST(ThreadId tid , void *mutex ) 
{ 
  Thread *thr ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2069,
                        (Char const   *)"evh__HG_PTHREAD_MUTEX_UNLOCK_POST", "");
  }
  return;
}
}
static void evh__HG_PTHREAD_SPIN_INIT_OR_UNLOCK_PRE(ThreadId tid , void *slock ) 
{ 
  Thread *thr ;
  Lock *lk ;
  Bool tmp ;

  {
  thr = map_threads_maybe_lookup(tid);
  tmp = vgHelgrind_is_sane_Thread(thr);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                        (Char const   *)"hg_main.c", 2098,
                        (Char const   *)"evh__HG_PTHREAD_SPIN_INIT_OR_UNLOCK_PRE",
                        "");
  }
  lk = map_locks_maybe_lookup((Addr )slock);
  if (lk) {
    if (lk->heldBy) {
      evhH__pre_thread_releases_lock(thr, (Addr )slock, (Bool )0);
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__HG_PTHREAD_SPIN_INIT_OR_UNLOCK_POST(ThreadId tid , void *slock ) 
{ 
  Lock *lk ;

  {
  lk = map_locks_maybe_lookup((Addr )slock);
  if (! lk) {
    map_locks_lookup_or_create((LockKind )1002, (Addr )slock, tid);
  } else {

  }
  return;
}
}
static void evh__HG_PTHREAD_SPIN_LOCK_PRE(ThreadId tid , void *slock ,
                                          Word isTryLock ) 
{ 


  {
  evh__HG_PTHREAD_MUTEX_LOCK_PRE(tid, slock, isTryLock);
  return;
}
}
static void evh__HG_PTHREAD_SPIN_LOCK_POST(ThreadId tid , void *slock ) 
{ 


  {
  evh__HG_PTHREAD_MUTEX_LOCK_POST(tid, slock);
  return;
}
}
static void evh__HG_PTHREAD_SPIN_DESTROY_PRE(ThreadId tid , void *slock ) 
{ 


  {
  evh__HG_PTHREAD_MUTEX_DESTROY_PRE(tid, slock);
  return;
}
}
static WordFM *map_cond_to_CVInfo  =    (WordFM *)((void *)0);
static void map_cond_to_CVInfo_INIT(void) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )((unsigned int )map_cond_to_CVInfo == (unsigned int )((void *)0)),
                         0L);
  if (tmp) {
    map_cond_to_CVInfo = vgPlain_newFM(& vgHelgrind_zalloc,
                                       (HChar *)"hg.mctCI.1", & vgHelgrind_free,
                                       (Word (*)(UWord  , UWord  ))((void *)0));
    if ((unsigned int )map_cond_to_CVInfo != (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"map_cond_to_CVInfo != NULL",
                          (Char const   *)"hg_main.c", 2184,
                          (Char const   *)"map_cond_to_CVInfo_INIT", "");
    }
  } else {

  }
  return;
}
}
static CVInfo *map_cond_to_CVInfo_lookup_or_alloc(void *cond ) 
{ 
  UWord key ;
  UWord val ;
  SO *so ;
  SO *tmp ;
  CVInfo *cvi ;
  void *tmp___0 ;
  Bool tmp___1 ;

  {
  map_cond_to_CVInfo_INIT();
  tmp___1 = vgPlain_lookupFM(map_cond_to_CVInfo, & key, & val, (UWord )cond);
  if (tmp___1) {
    if (key == (UWord )cond) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"key == (UWord)cond",
                          (Char const   *)"hg_main.c", 2192,
                          (Char const   *)"map_cond_to_CVInfo_lookup_or_alloc",
                          "");
    }
    return ((CVInfo *)val);
  } else {
    tmp = libhb_so_alloc();
    so = tmp;
    tmp___0 = vgHelgrind_zalloc((HChar *)"hg.mctCloa.1", (SizeT )sizeof(CVInfo ));
    cvi = (CVInfo *)tmp___0;
    cvi->so = so;
    cvi->mx_ga = (void *)0;
    vgPlain_addToFM(map_cond_to_CVInfo, (UWord )cond, (UWord )cvi);
    return (cvi);
  }
}
}
static void map_cond_to_CVInfo_delete(void *cond ) 
{ 
  UWord keyW ;
  UWord valW ;
  CVInfo *cvi ;
  Bool tmp ;

  {
  map_cond_to_CVInfo_INIT();
  tmp = vgPlain_delFromFM(map_cond_to_CVInfo, & keyW, & valW, (UWord )cond);
  if (tmp) {
    cvi = (CVInfo *)valW;
    if (keyW == (UWord )cond) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (UWord)cond",
                          (Char const   *)"hg_main.c", 2209,
                          (Char const   *)"map_cond_to_CVInfo_delete", "");
    }
    if (cvi) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"cvi",
                          (Char const   *)"hg_main.c", 2210,
                          (Char const   *)"map_cond_to_CVInfo_delete", "");
    }
    if (cvi->so) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"cvi->so",
                          (Char const   *)"hg_main.c", 2211,
                          (Char const   *)"map_cond_to_CVInfo_delete", "");
    }
    libhb_so_dealloc(cvi->so);
    cvi->mx_ga = (void *)0;
    vgHelgrind_free((void *)cvi);
  } else {

  }
  return;
}
}
static void evh__HG_PTHREAD_COND_SIGNAL_PRE(ThreadId tid , void *cond ) 
{ 
  Thread *thr ;
  CVInfo *cvi ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2235,
                        (Char const   *)"evh__HG_PTHREAD_COND_SIGNAL_PRE", "");
  }
  cvi = map_cond_to_CVInfo_lookup_or_alloc(cond);
  if (cvi) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"cvi",
                        (Char const   *)"hg_main.c", 2238,
                        (Char const   *)"evh__HG_PTHREAD_COND_SIGNAL_PRE", "");
  }
  if (cvi->so) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"cvi->so",
                        (Char const   *)"hg_main.c", 2239,
                        (Char const   *)"evh__HG_PTHREAD_COND_SIGNAL_PRE", "");
  }
  libhb_so_send(thr->hbthr, cvi->so, (Bool )1);
  return;
}
}
static Bool evh__HG_PTHREAD_COND_WAIT_PRE(ThreadId tid , void *cond ,
                                          void *mutex ) 
{ 
  Thread *thr ;
  Lock *lk ;
  Bool lk_valid ;
  CVInfo *cvi ;
  Bool tmp ;
  UWord tmp___0 ;

  {
  lk_valid = (Bool )1;
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2292,
                        (Char const   *)"evh__HG_PTHREAD_COND_WAIT_PRE", "");
  }
  lk = map_locks_maybe_lookup((Addr )mutex);
  if ((unsigned int )lk == (unsigned int )((void *)0)) {
    lk_valid = (Bool )0;
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_cond_{timed}wait called with invalid mutex");
  } else {
    tmp = vgHelgrind_is_sane_LockN(lk);
    if (tmp) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                          (Char const   *)"hg_main.c", 2305,
                          (Char const   *)"evh__HG_PTHREAD_COND_WAIT_PRE", "");
    }
    if ((unsigned int )lk->kind == 1003U) {
      lk_valid = (Bool )0;
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_cond_{timed}wait called with mutex of type pthread_rwlock_t*");
    } else
    if ((unsigned int )lk->heldBy == (unsigned int )((void *)0)) {
      lk_valid = (Bool )0;
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_cond_{timed}wait called with un-held mutex");
    } else
    if ((unsigned int )lk->heldBy != (unsigned int )((void *)0)) {
      tmp___0 = vgPlain_elemBag(lk->heldBy, (UWord )((Word )thr));
      if (tmp___0 == 0UL) {
        lk_valid = (Bool )0;
        vgHelgrind_record_error_Misc(thr,
                                     (HChar *)"pthread_cond_{timed}wait called with mutex held by a different thread");
      } else {

      }
    } else {

    }
  }
  cvi = map_cond_to_CVInfo_lookup_or_alloc(cond);
  if (cvi) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"cvi",
                        (Char const   *)"hg_main.c", 2328,
                        (Char const   *)"evh__HG_PTHREAD_COND_WAIT_PRE", "");
  }
  if (cvi->so) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"cvi->so",
                        (Char const   *)"hg_main.c", 2329,
                        (Char const   *)"evh__HG_PTHREAD_COND_WAIT_PRE", "");
  }
  if (cvi->nWaiters == 0UL) {
    cvi->mx_ga = mutex;
  } else
  if ((unsigned int )cvi->mx_ga != (unsigned int )mutex) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_cond_{timed}wait: cond is associated with a different mutex");
  } else {

  }
  (cvi->nWaiters) ++;
  return (lk_valid);
}
}
static void evh__HG_PTHREAD_COND_WAIT_POST(ThreadId tid , void *cond ,
                                           void *mutex ) 
{ 
  Thread *thr ;
  CVInfo *cvi ;
  Bool tmp ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2360,
                        (Char const   *)"evh__HG_PTHREAD_COND_WAIT_POST", "");
  }
  cvi = map_cond_to_CVInfo_lookup_or_alloc(cond);
  if (cvi) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"cvi",
                        (Char const   *)"hg_main.c", 2365,
                        (Char const   *)"evh__HG_PTHREAD_COND_WAIT_POST", "");
  }
  if (cvi->so) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"cvi->so",
                        (Char const   *)"hg_main.c", 2366,
                        (Char const   *)"evh__HG_PTHREAD_COND_WAIT_POST", "");
  }
  if (cvi->nWaiters > 0UL) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"cvi->nWaiters > 0",
                        (Char const   *)"hg_main.c", 2367,
                        (Char const   *)"evh__HG_PTHREAD_COND_WAIT_POST", "");
  }
  tmp = libhb_so_everSent(cvi->so);
  if (tmp) {

  } else {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"Bug in libpthread: pthread_cond_wait succeeded on without prior pthread_cond_post");
  }
  libhb_so_recv(thr->hbthr, cvi->so, (Bool )1);
  (cvi->nWaiters) --;
  return;
}
}
static void evh__HG_PTHREAD_COND_DESTROY_PRE(ThreadId tid , void *cond ) 
{ 


  {
  map_cond_to_CVInfo_delete(cond);
  return;
}
}
static void evh__HG_PTHREAD_RWLOCK_INIT_POST(ThreadId tid , void *rwl ) 
{ 


  {
  map_locks_lookup_or_create((LockKind )1003, (Addr )rwl, tid);
  if (vgHelgrind_clo_sanity_flags & (long )(1 << 1)) {
    all__sanity_check((Char *)"evh__hg_PTHREAD_RWLOCK_INIT_POST");
  } else {

  }
  return;
}
}
static void evh__HG_PTHREAD_RWLOCK_DESTROY_PRE(ThreadId tid , void *rwl ) 
{ 
  Thread *thr ;
  Lock *lk ;
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;

  {
  thr = map_threads_maybe_lookup(tid);
  tmp = vgHelgrind_is_sane_Thread(thr);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_Thread)(thr)",
                        (Char const   *)"hg_main.c", 2426,
                        (Char const   *)"evh__HG_PTHREAD_RWLOCK_DESTROY_PRE", "");
  }
  lk = map_locks_maybe_lookup((Addr )rwl);
  if ((unsigned int )lk == (unsigned int )((void *)0)) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_rwlock_destroy with invalid argument");
  } else
  if ((unsigned int )lk->kind != 1003U) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_rwlock_destroy with invalid argument");
  } else {

  }
  if (lk) {
    tmp___0 = vgHelgrind_is_sane_LockN(lk);
    if (tmp___0) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                          (Char const   *)"hg_main.c", 2436,
                          (Char const   *)"evh__HG_PTHREAD_RWLOCK_DESTROY_PRE",
                          "");
    }
    if (lk->guestaddr == (Addr )rwl) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"lk->guestaddr == (Addr)rwl",
                          (Char const   *)"hg_main.c", 2437,
                          (Char const   *)"evh__HG_PTHREAD_RWLOCK_DESTROY_PRE",
                          "");
    }
    if (lk->heldBy) {
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_rwlock_destroy of a locked mutex");
      remove_Lock_from_locksets_of_all_owning_Threads(lk);
      vgPlain_deleteBag(lk->heldBy);
      lk->heldBy = (WordBag *)((void *)0);
      lk->heldW = (Bool )0;
      lk->acquired_at = (ExeContext *)((void *)0);
    } else {

    }
    if (! lk->heldBy) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"!lk->heldBy",
                          (Char const   *)"hg_main.c", 2449,
                          (Char const   *)"evh__HG_PTHREAD_RWLOCK_DESTROY_PRE",
                          "");
    }
    tmp___1 = vgHelgrind_is_sane_LockN(lk);
    if (tmp___1) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(is_sane_LockN)(lk)",
                          (Char const   *)"hg_main.c", 2450,
                          (Char const   *)"evh__HG_PTHREAD_RWLOCK_DESTROY_PRE",
                          "");
    }
    if (vgHelgrind_clo_track_lockorders) {
      laog__handle_one_lock_deletion(lk);
    } else {

    }
    map_locks_delete(lk->guestaddr);
    del_LockN(lk);
  } else {

  }
  if (vgHelgrind_clo_sanity_flags & (long )(1 << 1)) {
    all__sanity_check((Char *)"evh__hg_PTHREAD_RWLOCK_DESTROY_PRE");
  } else {

  }
  return;
}
}
static void evh__HG_PTHREAD_RWLOCK_LOCK_PRE(ThreadId tid , void *rwl ,
                                            Word isW , Word isTryLock ) 
{ 
  Thread *thr ;
  Lock *lk ;

  {
  if (isW == 0L) {

  } else
  if (isW == 1L) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"isW == 0 || isW == 1",
                        (Char const   *)"hg_main.c", 2475,
                        (Char const   *)"evh__HG_PTHREAD_RWLOCK_LOCK_PRE", "");
  }
  if (isTryLock == 0L) {

  } else
  if (isTryLock == 1L) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"isTryLock == 0 || isTryLock == 1",
                        (Char const   *)"hg_main.c", 2476,
                        (Char const   *)"evh__HG_PTHREAD_RWLOCK_LOCK_PRE", "");
  }
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2478,
                        (Char const   *)"evh__HG_PTHREAD_RWLOCK_LOCK_PRE", "");
  }
  lk = map_locks_maybe_lookup((Addr )rwl);
  if (lk) {
    if ((unsigned int )lk->kind == 1002U) {
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_rwlock_{rd,rw}lock with a pthread_mutex_t* argument ");
    } else
    if ((unsigned int )lk->kind == 1001U) {
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_rwlock_{rd,rw}lock with a pthread_mutex_t* argument ");
    } else {

    }
  } else {

  }
  return;
}
}
static void evh__HG_PTHREAD_RWLOCK_LOCK_POST(ThreadId tid , void *rwl ,
                                             Word isW ) 
{ 
  Thread *thr ;
  void (*tmp)(Thread *thr , LockKind lkk , Addr lock_ga ) ;

  {
  if (isW == 0L) {

  } else
  if (isW == 1L) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"isW == 0 || isW == 1",
                        (Char const   *)"hg_main.c", 2499,
                        (Char const   *)"evh__HG_PTHREAD_RWLOCK_LOCK_POST", "");
  }
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2501,
                        (Char const   *)"evh__HG_PTHREAD_RWLOCK_LOCK_POST", "");
  }
  if (isW) {
    tmp = & evhH__post_thread_w_acquires_lock;
  } else {
    tmp = & evhH__post_thread_r_acquires_lock;
  }
  (*tmp)(thr, (LockKind )1003, (Addr )rwl);
  return;
}
}
static void evh__HG_PTHREAD_RWLOCK_UNLOCK_PRE(ThreadId tid , void *rwl ) 
{ 
  Thread *thr ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2520,
                        (Char const   *)"evh__HG_PTHREAD_RWLOCK_UNLOCK_PRE", "");
  }
  evhH__pre_thread_releases_lock(thr, (Addr )rwl, (Bool )1);
  return;
}
}
static void evh__HG_PTHREAD_RWLOCK_UNLOCK_POST(ThreadId tid , void *rwl ) 
{ 
  Thread *thr ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2533,
                        (Char const   *)"evh__HG_PTHREAD_RWLOCK_UNLOCK_POST", "");
  }
  return;
}
}
static WordFM *map_sem_to_SO_stack  =    (WordFM *)((void *)0);
static void map_sem_to_SO_stack_INIT(void) 
{ 


  {
  if ((unsigned int )map_sem_to_SO_stack == (unsigned int )((void *)0)) {
    map_sem_to_SO_stack = vgPlain_newFM(& vgHelgrind_zalloc,
                                        (HChar *)"hg.mstSs.1",
                                        & vgHelgrind_free,
                                        (Word (*)(UWord  , UWord  ))((void *)0));
    if ((unsigned int )map_sem_to_SO_stack != (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"map_sem_to_SO_stack != NULL",
                          (Char const   *)"hg_main.c", 2583,
                          (Char const   *)"map_sem_to_SO_stack_INIT", "");
    }
  } else {

  }
  return;
}
}
static void push_SO_for_sem(void *sem , SO *so ) 
{ 
  UWord keyW ;
  XArray *xa ;
  Bool tmp ;

  {
  if (so) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"so",
                        (Char const   *)"hg_main.c", 2590,
                        (Char const   *)"push_SO_for_sem", "");
  }
  map_sem_to_SO_stack_INIT();
  tmp = vgPlain_lookupFM(map_sem_to_SO_stack, & keyW, (UWord *)(& xa),
                         (UWord )sem);
  if (tmp) {
    if (keyW == (UWord )sem) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (UWord)sem",
                          (Char const   *)"hg_main.c", 2594,
                          (Char const   *)"push_SO_for_sem", "");
    }
    if (xa) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"xa",
                          (Char const   *)"hg_main.c", 2595,
                          (Char const   *)"push_SO_for_sem", "");
    }
    vgPlain_addToXA(xa, (void *)(& so));
  } else {
    xa = vgPlain_newXA(& vgHelgrind_zalloc, (HChar *)"hg.pSfs.1",
                       & vgHelgrind_free, (Word )sizeof(SO *));
    vgPlain_addToXA(xa, (void *)(& so));
    vgPlain_addToFM(map_sem_to_SO_stack, (UWord )((Word )sem),
                    (UWord )((Word )xa));
  }
  return;
}
}
static SO *mb_pop_SO_for_sem(void *sem ) 
{ 
  UWord keyW ;
  XArray *xa ;
  SO *so ;
  Word sz ;
  void *tmp ;
  Bool tmp___0 ;

  {
  map_sem_to_SO_stack_INIT();
  tmp___0 = vgPlain_lookupFM(map_sem_to_SO_stack, & keyW, (UWord *)(& xa),
                             (UWord )sem);
  if (tmp___0) {
    if (keyW == (UWord )sem) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (UWord)sem",
                          (Char const   *)"hg_main.c", 2613,
                          (Char const   *)"mb_pop_SO_for_sem", "");
    }
    sz = vgPlain_sizeXA(xa);
    if (sz >= 0L) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"sz >= 0",
                          (Char const   *)"hg_main.c", 2615,
                          (Char const   *)"mb_pop_SO_for_sem", "");
    }
    if (sz == 0L) {
      return ((SO *)((void *)0));
    } else {

    }
    tmp = vgPlain_indexXA(xa, sz - 1L);
    so = *((SO **)tmp);
    if (so) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"so",
                          (Char const   *)"hg_main.c", 2619,
                          (Char const   *)"mb_pop_SO_for_sem", "");
    }
    vgPlain_dropTailXA(xa, (Word )1);
    return (so);
  } else {
    return ((SO *)((void *)0));
  }
}
}
static void evh__HG_POSIX_SEM_DESTROY_PRE(ThreadId tid , void *sem ) 
{ 
  UWord keyW ;
  UWord valW ;
  SO *so ;
  XArray *xa ;
  Word tmp ;
  Bool tmp___0 ;

  {
  map_sem_to_SO_stack_INIT();
  while (1) {
    so = mb_pop_SO_for_sem(sem);
    if (! so) {
      break;
    } else {

    }
    libhb_so_dealloc(so);
  }
  tmp___0 = vgPlain_delFromFM(map_sem_to_SO_stack, & keyW, & valW, (UWord )sem);
  if (tmp___0) {
    xa = (XArray *)valW;
    if (keyW == (UWord )sem) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (UWord)sem",
                          (Char const   *)"hg_main.c", 2649,
                          (Char const   *)"evh__HG_POSIX_SEM_DESTROY_PRE", "");
    }
    if (xa) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"xa",
                          (Char const   *)"hg_main.c", 2650,
                          (Char const   *)"evh__HG_POSIX_SEM_DESTROY_PRE", "");
    }
    tmp = vgPlain_sizeXA(xa);
    if (tmp == 0L) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"VG_(sizeXA)(xa) == 0",
                          (Char const   *)"hg_main.c", 2651,
                          (Char const   *)"evh__HG_POSIX_SEM_DESTROY_PRE", "");
    }
    vgPlain_deleteXA(xa);
  } else {

  }
  return;
}
}
static void evh__HG_POSIX_SEM_INIT_POST(ThreadId tid , void *sem , UWord value ) 
{ 
  SO *so ;
  Thread *thr ;
  Thr *hbthr ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2667,
                        (Char const   *)"evh__HG_POSIX_SEM_INIT_POST", "");
  }
  while (1) {
    so = mb_pop_SO_for_sem(sem);
    if (! so) {
      break;
    } else {

    }
    libhb_so_dealloc(so);
  }
  if (value > 10000UL) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"sem_init: initial value exceeds 10000; using 10000");
    value = (UWord )10000;
  } else {

  }
  while (value > 0UL) {
    hbthr = thr->hbthr;
    if (hbthr) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"hbthr",
                          (Char const   *)"hg_main.c", 2689,
                          (Char const   *)"evh__HG_POSIX_SEM_INIT_POST", "");
    }
    so = libhb_so_alloc();
    libhb_so_send(hbthr, so, (Bool )1);
    push_SO_for_sem(sem, so);
    value --;
  }
  return;
}
}
static void evh__HG_POSIX_SEM_POST_PRE(ThreadId tid , void *sem ) 
{ 
  Thread *thr ;
  SO *so ;
  Thr *hbthr ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2716,
                        (Char const   *)"evh__HG_POSIX_SEM_POST_PRE", "");
  }
  hbthr = thr->hbthr;
  if (hbthr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"hbthr",
                        (Char const   *)"hg_main.c", 2721,
                        (Char const   *)"evh__HG_POSIX_SEM_POST_PRE", "");
  }
  so = libhb_so_alloc();
  libhb_so_send(hbthr, so, (Bool )1);
  push_SO_for_sem(sem, so);
  return;
}
}
static void evh__HG_POSIX_SEM_WAIT_POST(ThreadId tid , void *sem ) 
{ 
  Thread *thr ;
  SO *so ;
  Thr *hbthr ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2744,
                        (Char const   *)"evh__HG_POSIX_SEM_WAIT_POST", "");
  }
  so = mb_pop_SO_for_sem(sem);
  if (so) {
    hbthr = thr->hbthr;
    if (hbthr) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"hbthr",
                          (Char const   *)"hg_main.c", 2752,
                          (Char const   *)"evh__HG_POSIX_SEM_WAIT_POST", "");
    }
    libhb_so_recv(hbthr, so, (Bool )1);
    libhb_so_dealloc(so);
  } else {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"Bug in libpthread: sem_wait succeeded on semaphore without prior sem_post");
  }
  return;
}
}
static Bar *new_Bar(void) 
{ 
  Bar *bar ;
  void *tmp ;

  {
  tmp = vgHelgrind_zalloc((HChar *)"hg.nB.1 (new_Bar)", (SizeT )sizeof(Bar ));
  bar = (Bar *)tmp;
  if (bar) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar",
                        (Char const   *)"hg_main.c", 2782,
                        (Char const   *)"new_Bar", "");
  }
  if ((int )bar->initted == 0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar->initted == False",
                        (Char const   *)"hg_main.c", 2784,
                        (Char const   *)"new_Bar", "");
  }
  return (bar);
}
}
static void delete_Bar(Bar *bar ) 
{ 


  {
  if (bar) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar",
                        (Char const   *)"hg_main.c", 2789,
                        (Char const   *)"delete_Bar", "");
  }
  if (bar->waiting) {
    vgPlain_deleteXA(bar->waiting);
  } else {

  }
  vgHelgrind_free((void *)bar);
  return;
}
}
static WordFM *map_barrier_to_Bar  =    (WordFM *)((void *)0);
static void map_barrier_to_Bar_INIT(void) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )((unsigned int )map_barrier_to_Bar == (unsigned int )((void *)0)),
                         0L);
  if (tmp) {
    map_barrier_to_Bar = vgPlain_newFM(& vgHelgrind_zalloc,
                                       (HChar *)"hg.mbtBI.1", & vgHelgrind_free,
                                       (Word (*)(UWord  , UWord  ))((void *)0));
    if ((unsigned int )map_barrier_to_Bar != (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"map_barrier_to_Bar != NULL",
                          (Char const   *)"hg_main.c", 2804,
                          (Char const   *)"map_barrier_to_Bar_INIT", "");
    }
  } else {

  }
  return;
}
}
static Bar *map_barrier_to_Bar_lookup_or_alloc(void *barrier ) 
{ 
  UWord key ;
  UWord val ;
  Bar *bar ;
  Bar *tmp ;
  Bool tmp___0 ;

  {
  map_barrier_to_Bar_INIT();
  tmp___0 = vgPlain_lookupFM(map_barrier_to_Bar, & key, & val, (UWord )barrier);
  if (tmp___0) {
    if (key == (UWord )barrier) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"key == (UWord)barrier",
                          (Char const   *)"hg_main.c", 2812,
                          (Char const   *)"map_barrier_to_Bar_lookup_or_alloc",
                          "");
    }
    return ((Bar *)val);
  } else {
    tmp = new_Bar();
    bar = tmp;
    vgPlain_addToFM(map_barrier_to_Bar, (UWord )barrier, (UWord )bar);
    return (bar);
  }
}
}
static void map_barrier_to_Bar_delete(void *barrier ) 
{ 
  UWord keyW ;
  UWord valW ;
  Bar *bar ;
  Bool tmp ;

  {
  map_barrier_to_Bar_INIT();
  tmp = vgPlain_delFromFM(map_barrier_to_Bar, & keyW, & valW, (UWord )barrier);
  if (tmp) {
    bar = (Bar *)valW;
    if (keyW == (UWord )barrier) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (UWord)barrier",
                          (Char const   *)"hg_main.c", 2826,
                          (Char const   *)"map_barrier_to_Bar_delete", "");
    }
    delete_Bar(bar);
  } else {

  }
  return;
}
}
static void evh__HG_PTHREAD_BARRIER_INIT_PRE(ThreadId tid , void *barrier ,
                                             UWord count , UWord resizable ) 
{ 
  Thread *thr ;
  Bar *bar ;
  Word tmp ;
  Word tmp___0 ;
  Word tmp___1 ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2846,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_INIT_PRE", "");
  }
  if (count == 0UL) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_barrier_init: \'count\' argument is zero");
  } else {

  }
  if (resizable != 0UL) {
    if (resizable != 1UL) {
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_barrier_init: invalid \'resizable\' argument");
    } else {

    }
  } else {

  }
  bar = map_barrier_to_Bar_lookup_or_alloc(barrier);
  if (bar) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar",
                        (Char const   *)"hg_main.c", 2861,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_INIT_PRE", "");
  }
  if (bar->initted) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_barrier_init: barrier is already initialised");
  } else {

  }
  if (bar->waiting) {
    tmp___0 = vgPlain_sizeXA(bar->waiting);
    if (tmp___0 > 0L) {
      if (bar->initted) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"bar->initted",
                            (Char const   *)"hg_main.c", 2870,
                            (Char const   *)"evh__HG_PTHREAD_BARRIER_INIT_PRE",
                            "");
      }
      vgHelgrind_record_error_Misc(thr,
                                   (HChar *)"pthread_barrier_init: threads are waiting at barrier");
      tmp = vgPlain_sizeXA(bar->waiting);
      vgPlain_dropTailXA(bar->waiting, tmp);
    } else {

    }
  } else {

  }
  if (! bar->waiting) {
    bar->waiting = vgPlain_newXA(& vgHelgrind_zalloc, (HChar *)"hg.eHPBIP.1",
                                 & vgHelgrind_free, (Word )sizeof(Thread *));
  } else {

  }
  if (bar->waiting) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar->waiting",
                        (Char const   *)"hg_main.c", 2881,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_INIT_PRE", "");
  }
  tmp___1 = vgPlain_sizeXA(bar->waiting);
  if (tmp___1 == 0L) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"VG_(sizeXA)(bar->waiting) == 0",
                        (Char const   *)"hg_main.c", 2882,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_INIT_PRE", "");
  }
  bar->initted = (Bool )1;
  if (resizable == 1UL) {
    bar->resizable = (Bool )1;
  } else {
    bar->resizable = (Bool )0;
  }
  bar->size = count;
  return;
}
}
static void evh__HG_PTHREAD_BARRIER_DESTROY_PRE(ThreadId tid , void *barrier ) 
{ 
  Thread *thr ;
  Bar *bar ;
  Word tmp ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 2904,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_DESTROY_PRE",
                        "");
  }
  bar = map_barrier_to_Bar_lookup_or_alloc(barrier);
  if (bar) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar",
                        (Char const   *)"hg_main.c", 2907,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_DESTROY_PRE",
                        "");
  }
  if (! bar->initted) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_barrier_destroy: barrier was never initialised");
  } else {

  }
  if (bar->initted) {
    if (bar->waiting) {
      tmp = vgPlain_sizeXA(bar->waiting);
      if (tmp > 0L) {
        vgHelgrind_record_error_Misc(thr,
                                     (HChar *)"pthread_barrier_destroy: threads are waiting at barrier");
      } else {

      }
    } else {

    }
  } else {

  }
  map_barrier_to_Bar_delete(barrier);
  return;
}
}
static void do_barrier_cross_sync_and_empty(Bar *bar ) 
{ 
  UWord i ;
  SO *so ;
  SO *tmp ;
  Word tmp___0 ;
  Thread *t ;
  void *tmp___1 ;
  Thr *hbthr ;
  Thread *t___0 ;
  void *tmp___2 ;
  Thr *hbthr___0 ;
  Word tmp___3 ;

  {
  tmp = libhb_so_alloc();
  so = tmp;
  if (bar->waiting) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar->waiting",
                        (Char const   *)"hg_main.c", 2945,
                        (Char const   *)"do_barrier_cross_sync_and_empty", "");
  }
  tmp___0 = vgPlain_sizeXA(bar->waiting);
  if ((UWord )tmp___0 == bar->size) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"VG_(sizeXA)(bar->waiting) == bar->size",
                        (Char const   *)"hg_main.c", 2946,
                        (Char const   *)"do_barrier_cross_sync_and_empty", "");
  }
  i = (UWord )0;
  while (i < bar->size) {
    tmp___1 = vgPlain_indexXA(bar->waiting, (Word )i);
    t = *((Thread **)tmp___1);
    hbthr = t->hbthr;
    libhb_so_send(hbthr, so, (Bool )0);
    i ++;
  }
  i = (UWord )0;
  while (i < bar->size) {
    tmp___2 = vgPlain_indexXA(bar->waiting, (Word )i);
    t___0 = *((Thread **)tmp___2);
    hbthr___0 = t___0->hbthr;
    libhb_so_recv(hbthr___0, so, (Bool )1);
    i ++;
  }
  tmp___3 = vgPlain_sizeXA(bar->waiting);
  vgPlain_dropTailXA(bar->waiting, tmp___3);
  libhb_so_dealloc(so);
  return;
}
}
static void evh__HG_PTHREAD_BARRIER_WAIT_PRE(ThreadId tid , void *barrier ) 
{ 
  Thread *thr ;
  Bar *bar ;
  UWord present ;
  Word tmp ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 3023,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_WAIT_PRE", "");
  }
  bar = map_barrier_to_Bar_lookup_or_alloc(barrier);
  if (bar) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar",
                        (Char const   *)"hg_main.c", 3026,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_WAIT_PRE", "");
  }
  if (! bar->initted) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_barrier_wait: barrier is uninitialised");
    return;
  } else {

  }
  if (bar->size > 0UL) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar->size > 0",
                        (Char const   *)"hg_main.c", 3036,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_WAIT_PRE", "");
  }
  if (bar->waiting) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar->waiting",
                        (Char const   *)"hg_main.c", 3037,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_WAIT_PRE", "");
  }
  vgPlain_addToXA(bar->waiting, (void *)(& thr));
  tmp = vgPlain_sizeXA(bar->waiting);
  present = (UWord )tmp;
  if (present > 0UL) {
    if (present <= bar->size) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"present > 0 && present <= bar->size",
                          (Char const   *)"hg_main.c", 3043,
                          (Char const   *)"evh__HG_PTHREAD_BARRIER_WAIT_PRE", "");
    }
  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"present > 0 && present <= bar->size",
                        (Char const   *)"hg_main.c", 3043,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_WAIT_PRE", "");
  }
  if (present < bar->size) {
    return;
  } else {

  }
  do_barrier_cross_sync_and_empty(bar);
  return;
}
}
static void evh__HG_PTHREAD_BARRIER_RESIZE_PRE(ThreadId tid , void *barrier ,
                                               UWord newcount ) 
{ 
  Thread *thr ;
  Bar *bar ;
  UWord present ;
  Word tmp ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 3066,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_RESIZE_PRE", "");
  }
  bar = map_barrier_to_Bar_lookup_or_alloc(barrier);
  if (bar) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar",
                        (Char const   *)"hg_main.c", 3069,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_RESIZE_PRE", "");
  }
  if (! bar->initted) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_barrier_resize: barrier is uninitialised");
    return;
  } else {

  }
  if (! bar->resizable) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_barrier_resize: barrier is may not be resized");
    return;
  } else {

  }
  if (newcount == 0UL) {
    vgHelgrind_record_error_Misc(thr,
                                 (HChar *)"pthread_barrier_resize: \'newcount\' argument is zero");
    return;
  } else {

  }
  if (bar->size > 0UL) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar->size > 0",
                        (Char const   *)"hg_main.c", 3093,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_RESIZE_PRE", "");
  }
  if (bar->waiting) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bar->waiting",
                        (Char const   *)"hg_main.c", 3094,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_RESIZE_PRE", "");
  }
  if (newcount > 0UL) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"newcount > 0",
                        (Char const   *)"hg_main.c", 3096,
                        (Char const   *)"evh__HG_PTHREAD_BARRIER_RESIZE_PRE", "");
  }
  if (newcount >= bar->size) {
    bar->size = newcount;
  } else {
    tmp = vgPlain_sizeXA(bar->waiting);
    present = (UWord )tmp;
    if (present >= 0UL) {
      if (present <= bar->size) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"present >= 0 && present <= bar->size",
                            (Char const   *)"hg_main.c", 3109,
                            (Char const   *)"evh__HG_PTHREAD_BARRIER_RESIZE_PRE",
                            "");
      }
    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"present >= 0 && present <= bar->size",
                          (Char const   *)"hg_main.c", 3109,
                          (Char const   *)"evh__HG_PTHREAD_BARRIER_RESIZE_PRE",
                          "");
    }
    if (newcount <= present) {
      bar->size = present;
      do_barrier_cross_sync_and_empty(bar);
    } else {

    }
    bar->size = newcount;
  }
  return;
}
}
static WordFM *map_usertag_to_SO  =    (WordFM *)((void *)0);
static void map_usertag_to_SO_INIT(void) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )((unsigned int )map_usertag_to_SO == (unsigned int )((void *)0)),
                         0L);
  if (tmp) {
    map_usertag_to_SO = vgPlain_newFM(& vgHelgrind_zalloc, (HChar *)"hg.mutS.1",
                                      & vgHelgrind_free,
                                      (Word (*)(UWord  , UWord  ))((void *)0));
    if ((unsigned int )map_usertag_to_SO != (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"map_usertag_to_SO != NULL",
                          (Char const   *)"hg_main.c", 3136,
                          (Char const   *)"map_usertag_to_SO_INIT", "");
    }
  } else {

  }
  return;
}
}
static SO *map_usertag_to_SO_lookup_or_alloc(UWord usertag ) 
{ 
  UWord key ;
  UWord val ;
  SO *so ;
  SO *tmp ;
  Bool tmp___0 ;

  {
  map_usertag_to_SO_INIT();
  tmp___0 = vgPlain_lookupFM(map_usertag_to_SO, & key, & val, usertag);
  if (tmp___0) {
    if (key == usertag) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"key == (UWord)usertag",
                          (Char const   *)"hg_main.c", 3144,
                          (Char const   *)"map_usertag_to_SO_lookup_or_alloc",
                          "");
    }
    return ((SO *)val);
  } else {
    tmp = libhb_so_alloc();
    so = tmp;
    vgPlain_addToFM(map_usertag_to_SO, usertag, (UWord )so);
    return (so);
  }
}
}
static void evh__HG_USERSO_SEND_PRE(ThreadId tid , UWord usertag ) 
{ 
  Thread *thr ;
  SO *so ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 3183,
                        (Char const   *)"evh__HG_USERSO_SEND_PRE", "");
  }
  so = map_usertag_to_SO_lookup_or_alloc(usertag);
  if (so) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"so",
                        (Char const   *)"hg_main.c", 3186,
                        (Char const   *)"evh__HG_USERSO_SEND_PRE", "");
  }
  libhb_so_send(thr->hbthr, so, (Bool )1);
  return;
}
}
static void evh__HG_USERSO_RECV_POST(ThreadId tid , UWord usertag ) 
{ 
  Thread *thr ;
  SO *so ;

  {
  thr = map_threads_maybe_lookup(tid);
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 3208,
                        (Char const   *)"evh__HG_USERSO_RECV_POST", "");
  }
  so = map_usertag_to_SO_lookup_or_alloc(usertag);
  if (so) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"so",
                        (Char const   *)"hg_main.c", 3211,
                        (Char const   *)"evh__HG_USERSO_RECV_POST", "");
  }
  libhb_so_recv(thr->hbthr, so, (Bool )1);
  return;
}
}
static WordFM *laog  =    (WordFM *)((void *)0);
static Word cmp_LAOGLinkExposition(UWord llx1W , UWord llx2W ) 
{ 
  LAOGLinkExposition *llx1 ;
  LAOGLinkExposition *llx2 ;

  {
  llx1 = (LAOGLinkExposition *)llx1W;
  llx2 = (LAOGLinkExposition *)llx2W;
  if (llx1->src_ga < llx2->src_ga) {
    return ((Word )-1);
  } else {

  }
  if (llx1->src_ga > llx2->src_ga) {
    return ((Word )1);
  } else {

  }
  if (llx1->dst_ga < llx2->dst_ga) {
    return ((Word )-1);
  } else {

  }
  if (llx1->dst_ga > llx2->dst_ga) {
    return ((Word )1);
  } else {

  }
  return ((Word )0);
}
}
static WordFM *laog_exposition  =    (WordFM *)((void *)0);
static void ( __attribute__((__noinline__)) laog__init)(void) 
{ 


  {
  if (! laog) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"!laog",
                        (Char const   *)"hg_main.c", 3290,
                        (Char const   *)"laog__init", "");
  }
  if (! laog_exposition) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"!laog_exposition",
                        (Char const   *)"hg_main.c", 3291,
                        (Char const   *)"laog__init", "");
  }
  if (vgHelgrind_clo_track_lockorders) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"HG_(clo_track_lockorders)",
                        (Char const   *)"hg_main.c", 3292,
                        (Char const   *)"laog__init", "");
  }
  laog = vgPlain_newFM(& vgHelgrind_zalloc, (HChar *)"hg.laog__init.1",
                       & vgHelgrind_free,
                       (Word (*)(UWord  , UWord  ))((void *)0));
  laog_exposition = vgPlain_newFM(& vgHelgrind_zalloc,
                                  (HChar *)"hg.laog__init.2", & vgHelgrind_free,
                                  & cmp_LAOGLinkExposition);
  if (laog) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"laog",
                        (Char const   *)"hg_main.c", 3299,
                        (Char const   *)"laog__init", "");
  }
  if (laog_exposition) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"laog_exposition",
                        (Char const   *)"hg_main.c", 3300,
                        (Char const   *)"laog__init", "");
  }
  return;
}
}
static void laog__show(Char *who ) 
{ 
  Word i ;
  Word ws_size ;
  UWord *ws_words ;
  Lock *me ;
  LAOGLinks *links ;
  Bool tmp ;

  {
  vgPlain_printf("laog (requested by %s) {\n", who);
  vgPlain_initIterFM(laog);
  me = (Lock *)((void *)0);
  links = (LAOGLinks *)((void *)0);
  while (1) {
    tmp = vgPlain_nextIterFM(laog, (UWord *)((Word *)(& me)),
                             (UWord *)((Word *)(& links)));
    if (tmp) {

    } else {
      break;
    }
    if (me) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"me",
                          (Char const   *)"hg_main.c", 3314,
                          (Char const   *)"laog__show", "");
    }
    if (links) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"links",
                          (Char const   *)"hg_main.c", 3315,
                          (Char const   *)"laog__show", "");
    }
    vgPlain_printf("   node %p:\n", me);
    vgHelgrind_getPayloadWS(& ws_words, (UWord *)(& ws_size), univ_laog,
                            links->inns);
    i = (Word )0;
    while (i < ws_size) {
      vgPlain_printf("      inn %#lx\n", *(ws_words + i));
      i ++;
    }
    vgHelgrind_getPayloadWS(& ws_words, (UWord *)(& ws_size), univ_laog,
                            links->outs);
    i = (Word )0;
    while (i < ws_size) {
      vgPlain_printf("      out %#lx\n", *(ws_words + i));
      i ++;
    }
    me = (Lock *)((void *)0);
    links = (LAOGLinks *)((void *)0);
  }
  vgPlain_doneIterFM(laog);
  vgPlain_printf("}\n");
  return;
}
}
static void ( __attribute__((__noinline__)) laog__add_edge)(Lock *src ,
                                                            Lock *dst ) 
{ 
  Word keyW ;
  LAOGLinks *links ;
  Bool presentF ;
  Bool presentR ;
  WordSetID outs_new ;
  void *tmp ;
  Bool tmp___0 ;
  WordSetID inns_new ;
  void *tmp___1 ;
  Bool tmp___2 ;
  LAOGLinkExposition expo ;
  LAOGLinkExposition *expo2 ;
  void *tmp___3 ;
  Bool tmp___4 ;

  {
  presentR = (Bool )0;
  presentF = presentR;
  keyW = (Word )0;
  links = (LAOGLinks *)((void *)0);
  tmp___0 = vgPlain_lookupFM(laog, (UWord *)(& keyW),
                             (UWord *)((Word *)(& links)), (UWord )((Word )src));
  if (tmp___0) {
    if (links) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"links",
                          (Char const   *)"hg_main.c", 3352,
                          (Char const   *)"laog__add_edge", "");
    }
    if (keyW == (Word )src) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (Word)src",
                          (Char const   *)"hg_main.c", 3353,
                          (Char const   *)"laog__add_edge", "");
    }
    outs_new = vgHelgrind_addToWS(univ_laog, links->outs, (UWord )((Word )dst));
    presentF = (Bool )(outs_new == links->outs);
    links->outs = outs_new;
  } else {
    tmp = vgHelgrind_zalloc((HChar *)"hg.lae.1", (SizeT )sizeof(LAOGLinks ));
    links = (LAOGLinks *)tmp;
    links->inns = vgHelgrind_emptyWS(univ_laog);
    links->outs = vgHelgrind_singletonWS(univ_laog, (UWord )((Word )dst));
    vgPlain_addToFM(laog, (UWord )((Word )src), (UWord )((Word )links));
  }
  keyW = (Word )0;
  links = (LAOGLinks *)((void *)0);
  tmp___2 = vgPlain_lookupFM(laog, (UWord *)(& keyW),
                             (UWord *)((Word *)(& links)), (UWord )((Word )dst));
  if (tmp___2) {
    if (links) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"links",
                          (Char const   *)"hg_main.c", 3368,
                          (Char const   *)"laog__add_edge", "");
    }
    if (keyW == (Word )dst) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (Word)dst",
                          (Char const   *)"hg_main.c", 3369,
                          (Char const   *)"laog__add_edge", "");
    }
    inns_new = vgHelgrind_addToWS(univ_laog, links->inns, (UWord )((Word )src));
    presentR = (Bool )(inns_new == links->inns);
    links->inns = inns_new;
  } else {
    tmp___1 = vgHelgrind_zalloc((HChar *)"hg.lae.2", (SizeT )sizeof(LAOGLinks ));
    links = (LAOGLinks *)tmp___1;
    links->inns = vgHelgrind_singletonWS(univ_laog, (UWord )((Word )src));
    links->outs = vgHelgrind_emptyWS(univ_laog);
    vgPlain_addToFM(laog, (UWord )((Word )dst), (UWord )((Word )links));
  }
  if (presentF) {
    if (presentR) {

    } else {
      goto _L;
    }
  } else
  _L: /* CIL Label */ 
  if (! presentF) {
    if (! presentR) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"(presentF && presentR) || (!presentF && !presentR)",
                          (Char const   *)"hg_main.c", 3380,
                          (Char const   *)"laog__add_edge", "");
    }
  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"(presentF && presentR) || (!presentF && !presentR)",
                        (Char const   *)"hg_main.c", 3380,
                        (Char const   *)"laog__add_edge", "");
  }
  if (! presentF) {
    if (src->acquired_at) {
      if (dst->acquired_at) {
        expo.src_ga = src->guestaddr;
        expo.dst_ga = dst->guestaddr;
        expo.src_ec = (ExeContext *)((void *)0);
        expo.dst_ec = (ExeContext *)((void *)0);
        if (laog_exposition) {

        } else {
          vgPlain_assert_fail((Bool )0, (Char const   *)"laog_exposition",
                              (Char const   *)"hg_main.c", 3395,
                              (Char const   *)"laog__add_edge", "");
        }
        tmp___4 = vgPlain_lookupFM(laog_exposition, (UWord *)((void *)0),
                                   (UWord *)((void *)0),
                                   (UWord )((Word )(& expo)));
        if (tmp___4) {

        } else {
          tmp___3 = vgHelgrind_zalloc((HChar *)"hg.lae.3",
                                      (SizeT )sizeof(LAOGLinkExposition ));
          expo2 = (LAOGLinkExposition *)tmp___3;
          {
          memset(expo2, 0, sizeof(LAOGLinkExposition ));
          expo2->src_ga = src->guestaddr;
          }
          expo2->dst_ga = dst->guestaddr;
          expo2->src_ec = src->acquired_at;
          expo2->dst_ec = dst->acquired_at;
          vgPlain_addToFM(laog_exposition, (UWord )((Word )expo2),
                          (UWord )((Word )((void *)0)));
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
static void ( __attribute__((__noinline__)) laog__del_edge)(Lock *src ,
                                                            Lock *dst ) 
{ 
  Word keyW ;
  LAOGLinks *links ;
  Bool tmp ;
  Bool tmp___0 ;

  {
  keyW = (Word )0;
  links = (LAOGLinks *)((void *)0);
  tmp = vgPlain_lookupFM(laog, (UWord *)(& keyW), (UWord *)((Word *)(& links)),
                         (UWord )((Word )src));
  if (tmp) {
    if (links) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"links",
                          (Char const   *)"hg_main.c", 3419,
                          (Char const   *)"laog__del_edge", "");
    }
    if (keyW == (Word )src) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (Word)src",
                          (Char const   *)"hg_main.c", 3420,
                          (Char const   *)"laog__del_edge", "");
    }
    links->outs = vgHelgrind_delFromWS(univ_laog, links->outs,
                                       (UWord )((Word )dst));
  } else {

  }
  keyW = (Word )0;
  links = (LAOGLinks *)((void *)0);
  tmp___0 = vgPlain_lookupFM(laog, (UWord *)(& keyW),
                             (UWord *)((Word *)(& links)), (UWord )((Word )dst));
  if (tmp___0) {
    if (links) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"links",
                          (Char const   *)"hg_main.c", 3427,
                          (Char const   *)"laog__del_edge", "");
    }
    if (keyW == (Word )dst) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (Word)dst",
                          (Char const   *)"hg_main.c", 3428,
                          (Char const   *)"laog__del_edge", "");
    }
    links->inns = vgHelgrind_delFromWS(univ_laog, links->inns,
                                       (UWord )((Word )src));
  } else {

  }
  return;
}
}
static WordSetID ( __attribute__((__noinline__)) laog__succs)(Lock *lk ) 
{ 
  Word keyW ;
  LAOGLinks *links ;
  WordSet tmp ;
  Bool tmp___0 ;

  {
  keyW = (Word )0;
  links = (LAOGLinks *)((void *)0);
  tmp___0 = vgPlain_lookupFM(laog, (UWord *)(& keyW),
                             (UWord *)((Word *)(& links)), (UWord )((Word )lk));
  if (tmp___0) {
    if (links) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"links",
                          (Char const   *)"hg_main.c", 3440,
                          (Char const   *)"laog__succs", "");
    }
    if (keyW == (Word )lk) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (Word)lk",
                          (Char const   *)"hg_main.c", 3441,
                          (Char const   *)"laog__succs", "");
    }
    return (links->outs);
  } else {
    tmp = vgHelgrind_emptyWS(univ_laog);
    return (tmp);
  }
}
}
static WordSetID ( __attribute__((__noinline__)) laog__preds)(Lock *lk ) 
{ 
  Word keyW ;
  LAOGLinks *links ;
  WordSet tmp ;
  Bool tmp___0 ;

  {
  keyW = (Word )0;
  links = (LAOGLinks *)((void *)0);
  tmp___0 = vgPlain_lookupFM(laog, (UWord *)(& keyW),
                             (UWord *)((Word *)(& links)), (UWord )((Word )lk));
  if (tmp___0) {
    if (links) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"links",
                          (Char const   *)"hg_main.c", 3455,
                          (Char const   *)"laog__preds", "");
    }
    if (keyW == (Word )lk) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"keyW == (Word)lk",
                          (Char const   *)"hg_main.c", 3456,
                          (Char const   *)"laog__preds", "");
    }
    return (links->inns);
  } else {
    tmp = vgHelgrind_emptyWS(univ_laog);
    return (tmp);
  }
}
}
static void ( __attribute__((__noinline__)) laog__sanity_check)(Char *who ) 
{ 
  Word i ;
  Word ws_size ;
  UWord *ws_words ;
  Lock *me ;
  LAOGLinks *links ;
  WordSetID tmp ;
  Bool tmp___0 ;
  WordSetID tmp___1 ;
  Bool tmp___2 ;
  Bool tmp___3 ;

  {
  vgPlain_initIterFM(laog);
  me = (Lock *)((void *)0);
  links = (LAOGLinks *)((void *)0);
  while (1) {
    tmp___3 = vgPlain_nextIterFM(laog, (UWord *)((Word *)(& me)),
                                 (UWord *)((Word *)(& links)));
    if (tmp___3) {

    } else {
      break;
    }
    if (me) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"me",
                          (Char const   *)"hg_main.c", 3475,
                          (Char const   *)"laog__sanity_check", "");
    }
    if (links) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"links",
                          (Char const   *)"hg_main.c", 3476,
                          (Char const   *)"laog__sanity_check", "");
    }
    vgHelgrind_getPayloadWS(& ws_words, (UWord *)(& ws_size), univ_laog,
                            links->inns);
    i = (Word )0;
    while (i < ws_size) {
      tmp = laog__succs((Lock *)*(ws_words + i));
      tmp___0 = vgHelgrind_elemWS(univ_laog, tmp, (UWord )((Word )me));
      if (tmp___0) {

      } else {
        goto bad;
      }
      i ++;
    }
    vgHelgrind_getPayloadWS(& ws_words, (UWord *)(& ws_size), univ_laog,
                            links->outs);
    i = (Word )0;
    while (i < ws_size) {
      tmp___1 = laog__preds((Lock *)*(ws_words + i));
      tmp___2 = vgHelgrind_elemWS(univ_laog, tmp___1, (UWord )((Word )me));
      if (tmp___2) {

      } else {
        goto bad;
      }
      i ++;
    }
    me = (Lock *)((void *)0);
    links = (LAOGLinks *)((void *)0);
  }
  vgPlain_doneIterFM(laog);
  return;
  bad: 
  vgPlain_printf("laog__sanity_check(%s) FAILED\n", who);
  laog__show(who);
  vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                      (Char const   *)"hg_main.c", 3500,
                      (Char const   *)"laog__sanity_check", "");
}
}
static Lock *( __attribute__((__noinline__)) laog__do_dfs_from_to)(Lock *src ,
                                                                   WordSetID dsts ) 
{ 
  Lock *ret ;
  Word i ;
  Word ssz ;
  XArray *stack ;
  WordFM *visited ;
  Lock *here ;
  WordSetID succs ;
  Word succs_size ;
  UWord *succs_words ;
  Bool tmp ;
  void *tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgHelgrind_isEmptyWS(univ_lsets, dsts);
  if (tmp) {
    return ((Lock *)((void *)0));
  } else {

  }
  ret = (Lock *)((void *)0);
  stack = vgPlain_newXA(& vgHelgrind_zalloc, (HChar *)"hg.lddft.1",
                        & vgHelgrind_free, (Word )sizeof(Lock *));
  visited = vgPlain_newFM(& vgHelgrind_zalloc, (HChar *)"hg.lddft.2",
                          & vgHelgrind_free,
                          (Word (*)(UWord  , UWord  ))((void *)0));
  vgPlain_addToXA(stack, (void *)(& src));
  while (1) {
    ssz = vgPlain_sizeXA(stack);
    if (ssz == 0L) {
      ret = (Lock *)((void *)0);
      break;
    } else {

    }
    tmp___0 = vgPlain_indexXA(stack, ssz - 1L);
    here = *((Lock **)tmp___0);
    vgPlain_dropTailXA(stack, (Word )1);
    tmp___1 = vgHelgrind_elemWS(univ_lsets, dsts, (UWord )((Word )here));
    if (tmp___1) {
      ret = here;
      break;
    } else {

    }
    tmp___2 = vgPlain_lookupFM(visited, (UWord *)((void *)0),
                               (UWord *)((void *)0), (UWord )((Word )here));
    if (tmp___2) {
      continue;
    } else {

    }
    vgPlain_addToFM(visited, (UWord )((Word )here), (UWord )0);
    succs = laog__succs(here);
    vgHelgrind_getPayloadWS(& succs_words, (UWord *)(& succs_size), univ_laog,
                            succs);
    i = (Word )0;
    while (i < succs_size) {
      vgPlain_addToXA(stack, (void *)(succs_words + i));
      i ++;
    }
  }
  vgPlain_deleteFM(visited, (void (*)(UWord  ))((void *)0),
                   (void (*)(UWord  ))((void *)0));
  vgPlain_deleteXA(stack);
  return (ret);
}
}
static void ( __attribute__((__noinline__)) laog__pre_thread_acquires_lock)(Thread *thr ,
                                                                            Lock *lk ) 
{ 
  UWord *ls_words ;
  Word ls_size ;
  Word i ;
  Lock *other ;
  Bool tmp ;
  LAOGLinkExposition key ;
  LAOGLinkExposition *found ;
  Bool tmp___0 ;
  Lock *old ;

  {
  tmp = vgHelgrind_elemWS(univ_lsets, thr->locksetA, (UWord )((Word )lk));
  if (tmp) {
    return;
  } else {

  }
  other = laog__do_dfs_from_to(lk, thr->locksetA);
  if (other) {
    key.src_ga = lk->guestaddr;
    key.dst_ga = other->guestaddr;
    key.src_ec = (ExeContext *)((void *)0);
    key.dst_ec = (ExeContext *)((void *)0);
    found = (LAOGLinkExposition *)((void *)0);
    tmp___0 = vgPlain_lookupFM(laog_exposition, (UWord *)((Word *)(& found)),
                               (UWord *)((void *)0), (UWord )((Word )(& key)));
    if (tmp___0) {
      if ((unsigned int )found != (unsigned int )(& key)) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"found != &key",
                            (Char const   *)"hg_main.c", 3603,
                            (Char const   *)"laog__pre_thread_acquires_lock", "");
      }
      if (found->src_ga == key.src_ga) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"found->src_ga == key.src_ga",
                            (Char const   *)"hg_main.c", 3604,
                            (Char const   *)"laog__pre_thread_acquires_lock", "");
      }
      if (found->dst_ga == key.dst_ga) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"found->dst_ga == key.dst_ga",
                            (Char const   *)"hg_main.c", 3605,
                            (Char const   *)"laog__pre_thread_acquires_lock", "");
      }
      if (found->src_ec) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"found->src_ec",
                            (Char const   *)"hg_main.c", 3606,
                            (Char const   *)"laog__pre_thread_acquires_lock", "");
      }
      if (found->dst_ec) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"found->dst_ec",
                            (Char const   *)"hg_main.c", 3607,
                            (Char const   *)"laog__pre_thread_acquires_lock", "");
      }
      vgHelgrind_record_error_LockOrder(thr, lk->guestaddr, other->guestaddr,
                                        found->src_ec, found->dst_ec);
    } else {
      vgHelgrind_record_error_LockOrder(thr, lk->guestaddr, other->guestaddr,
                                        (ExeContext *)((void *)0),
                                        (ExeContext *)((void *)0));
    }
  } else {

  }
  if (lk->acquired_at) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lk->acquired_at",
                        (Char const   *)"hg_main.c", 3624,
                        (Char const   *)"laog__pre_thread_acquires_lock", "");
  }
  vgHelgrind_getPayloadWS(& ls_words, (UWord *)(& ls_size), univ_lsets,
                          thr->locksetA);
  i = (Word )0;
  while (i < ls_size) {
    old = (Lock *)*(ls_words + i);
    if (old->acquired_at) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"old->acquired_at",
                          (Char const   *)"hg_main.c", 3628,
                          (Char const   *)"laog__pre_thread_acquires_lock", "");
    }
    laog__add_edge(old, lk);
    i ++;
  }
  if (vgHelgrind_clo_sanity_flags & (long )(1 << 4)) {
    all_except_Locks__sanity_check((Char *)"laog__pre_thread_acquires_lock-post");
  } else {

  }
  return;
}
}
static void ( __attribute__((__noinline__)) laog__handle_one_lock_deletion)(Lock *lk ) 
{ 
  WordSetID preds ;
  WordSetID succs ;
  Word preds_size ;
  Word succs_size ;
  Word i ;
  Word j ;
  UWord *preds_words ;
  UWord *succs_words ;

  {
  preds = laog__preds(lk);
  succs = laog__succs(lk);
  vgHelgrind_getPayloadWS(& preds_words, (UWord *)(& preds_size), univ_laog,
                          preds);
  i = (Word )0;
  while (i < preds_size) {
    laog__del_edge((Lock *)*(preds_words + i), lk);
    i ++;
  }
  vgHelgrind_getPayloadWS(& succs_words, (UWord *)(& succs_size), univ_laog,
                          succs);
  j = (Word )0;
  while (j < succs_size) {
    laog__del_edge(lk, (Lock *)*(succs_words + j));
    j ++;
  }
  i = (Word )0;
  while (i < preds_size) {
    j = (Word )0;
    while (j < succs_size) {
      if (*(preds_words + i) != *(succs_words + j)) {
        laog__add_edge((Lock *)*(preds_words + i), (Lock *)*(succs_words + j));
      } else {

      }
      j ++;
    }
    i ++;
  }
  return;
}
}
static VgHashTable hg_mallocmeta_table  =    (VgHashTable )((void *)0);
static MallocMeta *new_MallocMeta(void) 
{ 
  MallocMeta *md ;
  void *tmp ;

  {
  tmp = vgHelgrind_zalloc((HChar *)"hg.new_MallocMeta.1",
                          (SizeT )sizeof(MallocMeta ));
  md = (MallocMeta *)tmp;
  if (md) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"md",
                        (Char const   *)"hg_main.c", 3713,
                        (Char const   *)"new_MallocMeta", "");
  }
  return (md);
}
}
static void delete_MallocMeta(MallocMeta *md ) 
{ 


  {
  vgHelgrind_free((void *)md);
  return;
}
}
static void *handle_alloc(ThreadId tid , SizeT szB , SizeT alignB ,
                          Bool is_zeroed ) 
{ 
  Addr p ;
  MallocMeta *md ;
  void *tmp ;

  {
  if ((SSizeT )szB >= 0L) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"((SSizeT)szB) >= 0",
                        (Char const   *)"hg_main.c", 3730,
                        (Char const   *)"handle_alloc", "");
  }
  tmp = vgPlain_cli_malloc(alignB, szB);
  p = (Addr )tmp;
  if (! p) {
    return ((void *)0);
  } else {

  }
  if (is_zeroed) {
    vgPlain_memset((void *)p, 0, szB);
  } else {

  }
  md = new_MallocMeta();
  md->payload = p;
  md->szB = szB;
  md->where = vgPlain_record_ExeContext(tid, (Word )0);
  md->thr = map_threads_lookup(tid);
  vgPlain_HT_add_node(hg_mallocmeta_table, (void *)((VgHashNode *)md));
  evh__new_mem_heap(p, szB, is_zeroed);
  return ((void *)p);
}
}
static void *hg_cli__malloc(ThreadId tid , SizeT n ) 
{ 
  void *tmp ;

  {
  if ((SSizeT )n < 0L) {
    return ((void *)0);
  } else {

  }
  tmp = handle_alloc(tid, n, (SizeT )vgPlain_clo_alignment, (Bool )0);
  return (tmp);
}
}
static void *hg_cli____builtin_new(ThreadId tid , SizeT n ) 
{ 
  void *tmp ;

  {
  if ((SSizeT )n < 0L) {
    return ((void *)0);
  } else {

  }
  tmp = handle_alloc(tid, n, (SizeT )vgPlain_clo_alignment, (Bool )0);
  return (tmp);
}
}
static void *hg_cli____builtin_vec_new(ThreadId tid , SizeT n ) 
{ 
  void *tmp ;

  {
  if ((SSizeT )n < 0L) {
    return ((void *)0);
  } else {

  }
  tmp = handle_alloc(tid, n, (SizeT )vgPlain_clo_alignment, (Bool )0);
  return (tmp);
}
}
static void *hg_cli__memalign(ThreadId tid , SizeT align , SizeT n ) 
{ 
  void *tmp ;

  {
  if ((SSizeT )n < 0L) {
    return ((void *)0);
  } else {

  }
  tmp = handle_alloc(tid, n, align, (Bool )0);
  return (tmp);
}
}
static void *hg_cli__calloc(ThreadId tid , SizeT nmemb , SizeT size1 ) 
{ 
  void *tmp ;

  {
  if ((SSizeT )nmemb < 0L) {
    return ((void *)0);
  } else
  if ((SSizeT )size1 < 0L) {
    return ((void *)0);
  } else {

  }
  tmp = handle_alloc(tid, nmemb * size1, (SizeT )vgPlain_clo_alignment, (Bool )1);
  return (tmp);
}
}
static void handle_free(ThreadId tid , void *p ) 
{ 
  MallocMeta *md ;
  MallocMeta *old_md ;
  SizeT szB ;
  void *tmp ;
  void *tmp___0 ;

  {
  tmp = vgPlain_HT_lookup(hg_mallocmeta_table, (UWord )p);
  md = (MallocMeta *)tmp;
  if (! md) {
    return;
  } else {

  }
  if (md->payload == (Addr )p) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"md->payload == (Addr)p",
                        (Char const   *)"hg_main.c", 3800,
                        (Char const   *)"handle_free", "");
  }
  szB = md->szB;
  tmp___0 = vgPlain_HT_remove(hg_mallocmeta_table, (UWord )p);
  old_md = (MallocMeta *)tmp___0;
  if (old_md) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"old_md",
                        (Char const   *)"hg_main.c", 3806,
                        (Char const   *)"handle_free", "");
  }
  if ((unsigned int )old_md == (unsigned int )md) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"old_md == md",
                        (Char const   *)"hg_main.c", 3807,
                        (Char const   *)"handle_free", "");
  }
  if (old_md->payload == (Addr )p) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"old_md->payload == (Addr)p",
                        (Char const   *)"hg_main.c", 3808,
                        (Char const   *)"handle_free", "");
  }
  vgPlain_cli_free((void *)old_md->payload);
  delete_MallocMeta(old_md);
  evh__die_mem_heap((Addr )p, szB);
  return;
}
}
static void hg_cli__free(ThreadId tid , void *p ) 
{ 


  {
  handle_free(tid, p);
  return;
}
}
static void hg_cli____builtin_delete(ThreadId tid , void *p ) 
{ 


  {
  handle_free(tid, p);
  return;
}
}
static void hg_cli____builtin_vec_delete(ThreadId tid , void *p ) 
{ 


  {
  handle_free(tid, p);
  return;
}
}
static void *hg_cli__realloc(ThreadId tid , void *payloadV , SizeT new_size ) 
{ 
  MallocMeta *md ;
  MallocMeta *md_new ;
  MallocMeta *md_tmp ;
  SizeT i ;
  Addr payload ;
  void *tmp ;
  Addr p_new ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  payload = (Addr )payloadV;
  if ((SSizeT )new_size < 0L) {
    return ((void *)0);
  } else {

  }
  tmp = vgPlain_HT_lookup(hg_mallocmeta_table, payload);
  md = (MallocMeta *)tmp;
  if (! md) {
    return ((void *)0);
  } else {

  }
  if (md->payload == payload) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"md->payload == payload",
                        (Char const   *)"hg_main.c", 3841,
                        (Char const   *)"hg_cli__realloc", "");
  }
  if (md->szB == new_size) {
    md->where = vgPlain_record_ExeContext(tid, (Word )0);
    return (payloadV);
  } else {

  }
  if (md->szB > new_size) {
    md->szB = new_size;
    md->where = vgPlain_record_ExeContext(tid, (Word )0);
    evh__die_mem_heap(md->payload + new_size, md->szB - new_size);
    return (payloadV);
  } else {

  }
  tmp___0 = vgPlain_cli_malloc((SizeT )vgPlain_clo_alignment, new_size);
  p_new = (Addr )tmp___0;
  evh__copy_mem(payload, p_new, md->szB);
  evh__new_mem_heap(p_new + md->szB, new_size - md->szB, (Bool )0);
  evh__die_mem_heap(payload, md->szB);
  i = (SizeT )0;
  while (i < md->szB) {
    *((UChar *)p_new + i) = *((UChar *)payload + i);
    i ++;
  }
  md_new = new_MallocMeta();
  *md_new = *md;
  tmp___1 = vgPlain_HT_remove(hg_mallocmeta_table, payload);
  md_tmp = (MallocMeta *)tmp___1;
  if (md_tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"md_tmp",
                        (Char const   *)"hg_main.c", 3885,
                        (Char const   *)"hg_cli__realloc", "");
  }
  if ((unsigned int )md_tmp == (unsigned int )md) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"md_tmp == md",
                        (Char const   *)"hg_main.c", 3886,
                        (Char const   *)"hg_cli__realloc", "");
  }
  vgPlain_cli_free((void *)md->payload);
  delete_MallocMeta(md);
  md_new->where = vgPlain_record_ExeContext(tid, (Word )0);
  md_new->szB = new_size;
  md_new->payload = p_new;
  md_new->thr = map_threads_lookup(tid);
  vgPlain_HT_add_node(hg_mallocmeta_table, (void *)((VgHashNode *)md_new));
  return ((void *)p_new);
}
}
static SizeT hg_cli_malloc_usable_size(ThreadId tid , void *p ) 
{ 
  MallocMeta *md ;
  void *tmp ;
  SizeT tmp___0 ;

  {
  tmp = vgPlain_HT_lookup(hg_mallocmeta_table, (UWord )p);
  md = (MallocMeta *)tmp;
  if (md) {
    tmp___0 = md->szB;
  } else {
    tmp___0 = (SizeT )0;
  }
  return (tmp___0);
}
}
__inline static Bool addr_is_in_MM_Chunk(MallocMeta *mm , Addr a ) 
{ 
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (mm->szB == 0UL) {
    if (a == mm->payload) {
      tmp = 1;
    } else {
      tmp = 0;
    }
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 0L);
  if (tmp___0) {
    return ((Bool )1);
  } else {

  }
  tmp___1 = __builtin_expect((long )(! (! (a < mm->payload))), 1L);
  if (tmp___1) {
    return ((Bool )0);
  } else {

  }
  tmp___2 = __builtin_expect((long )(! (! (a >= mm->payload + mm->szB))), 1L);
  if (tmp___2) {
    return ((Bool )0);
  } else {

  }
  return ((Bool )1);
}
}
Bool vgHelgrind_mm_find_containing_block(ExeContext **where , Addr *payload ,
                                         SizeT *szB , Addr data_addr ) 
{ 
  MallocMeta *mm ;
  Int i ;
  Int n_fast_check_words ;
  void *tmp ;
  Bool tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  Bool tmp___3 ;
  long tmp___4 ;
  void *tmp___5 ;
  Bool tmp___6 ;

  {
  n_fast_check_words = 16;
  i = 0;
  while (i < n_fast_check_words) {
    tmp = vgPlain_HT_lookup(hg_mallocmeta_table,
                            data_addr - (UWord )((UInt )i) * (UWord )sizeof(UWord ));
    mm = (MallocMeta *)tmp;
    if (mm) {
      tmp___0 = addr_is_in_MM_Chunk(mm, data_addr);
      if (tmp___0) {
        tmp___1 = 1;
      } else {
        tmp___1 = 0;
      }
    } else {
      tmp___1 = 0;
    }
    tmp___2 = __builtin_expect((long )tmp___1, 0L);
    if (tmp___2) {
      goto found;
    } else {

    }
    i ++;
  }
  vgPlain_HT_ResetIter(hg_mallocmeta_table);
  while (1) {
    tmp___5 = vgPlain_HT_Next(hg_mallocmeta_table);
    mm = (MallocMeta *)tmp___5;
    if (mm) {

    } else {
      break;
    }
    tmp___3 = addr_is_in_MM_Chunk(mm, data_addr);
    tmp___4 = __builtin_expect((long )tmp___3, 0L);
    if (tmp___4) {
      goto found;
    } else {

    }
  }
  return ((Bool )0);
  found: 
  if (mm) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"mm",
                        (Char const   *)"hg_main.c", 3965,
                        (Char const   *)"vgHelgrind_mm_find_containing_block",
                        "");
  }
  tmp___6 = addr_is_in_MM_Chunk(mm, data_addr);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"addr_is_in_MM_Chunk(mm, data_addr)",
                        (Char const   *)"hg_main.c", 3966,
                        (Char const   *)"vgHelgrind_mm_find_containing_block",
                        "");
  }
  if (where) {
    *where = mm->where;
  } else {

  }
  if (payload) {
    *payload = mm->payload;
  } else {

  }
  if (szB) {
    *szB = mm->szB;
  } else {

  }
  return ((Bool )1);
}
}
static void instrument_mem_access(IRSB *bbOut , IRExpr *addr , Int szB ,
                                  Bool isStore , Int hWordTy_szB ) 
{ 
  IRType tyAddr ;
  HChar *hName ;
  void *hAddr ;
  Int regparms ;
  IRExpr **argv ;
  IRDirty *di ;
  Bool tmp ;
  IRExpr *tmp___0 ;
  IRExpr *tmp___1 ;
  void *tmp___2 ;
  IRStmt *tmp___3 ;

  {
  tyAddr = (IRType )69632;
  hName = (HChar *)((void *)0);
  hAddr = (void *)0;
  regparms = 0;
  argv = (IRExpr **)((void *)0);
  di = (IRDirty *)((void *)0);
  tmp = isIRAtom(addr);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"isIRAtom(addr)",
                        (Char const   *)"hg_main.c", 3991,
                        (Char const   *)"instrument_mem_access", "");
  }
  if (hWordTy_szB == 4) {

  } else
  if (hWordTy_szB == 8) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"hWordTy_szB == 4 || hWordTy_szB == 8",
                        (Char const   *)"hg_main.c", 3992,
                        (Char const   *)"instrument_mem_access", "");
  }
  tyAddr = typeOfIRExpr(bbOut->tyenv, addr);
  if ((unsigned int )tyAddr == 69636U) {

  } else
  if ((unsigned int )tyAddr == 69637U) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"tyAddr == Ity_I32 || tyAddr == Ity_I64",
                        (Char const   *)"hg_main.c", 3995,
                        (Char const   *)"instrument_mem_access", "");
  }
  regparms = 1;
  if (isStore) {
    switch (szB) {
    case 1: 
    hName = (HChar *)"evh__mem_help_cwrite_1";
    hAddr = (void *)(& evh__mem_help_cwrite_1);
    argv = mkIRExprVec_1(addr);
    break;
    case 2: 
    hName = (HChar *)"evh__mem_help_cwrite_2";
    hAddr = (void *)(& evh__mem_help_cwrite_2);
    argv = mkIRExprVec_1(addr);
    break;
    case 4: 
    hName = (HChar *)"evh__mem_help_cwrite_4";
    hAddr = (void *)(& evh__mem_help_cwrite_4);
    argv = mkIRExprVec_1(addr);
    break;
    case 8: 
    hName = (HChar *)"evh__mem_help_cwrite_8";
    hAddr = (void *)(& evh__mem_help_cwrite_8);
    argv = mkIRExprVec_1(addr);
    break;
    default: 
    if (szB > 8) {
      if (szB <= 512) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"szB > 8 && szB <= 512",
                            (Char const   *)"hg_main.c", 4022,
                            (Char const   *)"instrument_mem_access", "");
      }
    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"szB > 8 && szB <= 512",
                          (Char const   *)"hg_main.c", 4022,
                          (Char const   *)"instrument_mem_access", "");
    }
    regparms = 2;
    hName = (HChar *)"evh__mem_help_cwrite_N";
    hAddr = (void *)(& evh__mem_help_cwrite_N);
    tmp___0 = mkIRExpr_HWord((HWord )szB);
    argv = mkIRExprVec_2(addr, tmp___0);
    break;
    }
  } else {
    switch (szB) {
    case 1: 
    hName = (HChar *)"evh__mem_help_cread_1";
    hAddr = (void *)(& evh__mem_help_cread_1);
    argv = mkIRExprVec_1(addr);
    break;
    case 2: 
    hName = (HChar *)"evh__mem_help_cread_2";
    hAddr = (void *)(& evh__mem_help_cread_2);
    argv = mkIRExprVec_1(addr);
    break;
    case 4: 
    hName = (HChar *)"evh__mem_help_cread_4";
    hAddr = (void *)(& evh__mem_help_cread_4);
    argv = mkIRExprVec_1(addr);
    break;
    case 8: 
    hName = (HChar *)"evh__mem_help_cread_8";
    hAddr = (void *)(& evh__mem_help_cread_8);
    argv = mkIRExprVec_1(addr);
    break;
    default: 
    if (szB > 8) {
      if (szB <= 512) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"szB > 8 && szB <= 512",
                            (Char const   *)"hg_main.c", 4052,
                            (Char const   *)"instrument_mem_access", "");
      }
    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"szB > 8 && szB <= 512",
                          (Char const   *)"hg_main.c", 4052,
                          (Char const   *)"instrument_mem_access", "");
    }
    regparms = 2;
    hName = (HChar *)"evh__mem_help_cread_N";
    hAddr = (void *)(& evh__mem_help_cread_N);
    tmp___1 = mkIRExpr_HWord((HWord )szB);
    argv = mkIRExprVec_2(addr, tmp___1);
    break;
    }
  }
  if (hName) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"hName",
                        (Char const   *)"hg_main.c", 4062,
                        (Char const   *)"instrument_mem_access", "");
  }
  if (hAddr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"hAddr",
                        (Char const   *)"hg_main.c", 4063,
                        (Char const   *)"instrument_mem_access", "");
  }
  if (argv) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"argv",
                        (Char const   *)"hg_main.c", 4064,
                        (Char const   *)"instrument_mem_access", "");
  }
  tmp___2 = vgPlain_fnptr_to_fnentry(hAddr);
  di = unsafeIRDirty_0_N(regparms, hName, tmp___2, argv);
  tmp___3 = IRStmt_Dirty(di);
  addStmtToIRSB(bbOut, tmp___3);
  return;
}
}
static Bool is_in_dynamic_linker_shared_object(Addr64 ga ) 
{ 
  DebugInfo *dinfo ;
  UChar const   *soname ;
  Int tmp ;
  int tmp___0 ;
  Int tmp___1 ;
  Int tmp___2 ;
  int tmp___3 ;
  Int tmp___4 ;
  Int tmp___5 ;
  int tmp___6 ;
  Int tmp___7 ;
  Int tmp___8 ;
  int tmp___9 ;
  Int tmp___10 ;
  Int tmp___11 ;
  int tmp___12 ;
  Int tmp___13 ;

  {
  dinfo = vgPlain_find_DebugInfo((Addr )ga);
  if (! dinfo) {
    return ((Bool )0);
  } else {

  }
  soname = vgPlain_DebugInfo_get_soname((DebugInfo const   *)dinfo);
  if (soname) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"soname",
                        (Char const   *)"hg_main.c", 4085,
                        (Char const   *)"is_in_dynamic_linker_shared_object", "");
  }
  if ((unsigned int )soname != (unsigned int )((void *)0)) {
    if ((unsigned int )"ld-linux.so.3" != (unsigned int )((void *)0)) {
      tmp___1 = vgPlain_strcmp((Char const   *)soname,
                               (Char const   *)"ld-linux.so.3");
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
    return ((Bool )1);
  } else {

  }
  if ((unsigned int )soname != (unsigned int )((void *)0)) {
    if ((unsigned int )"ld-linux.so.2" != (unsigned int )((void *)0)) {
      tmp___4 = vgPlain_strcmp((Char const   *)soname,
                               (Char const   *)"ld-linux.so.2");
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
    return ((Bool )1);
  } else {

  }
  if ((unsigned int )soname != (unsigned int )((void *)0)) {
    if ((unsigned int )"ld-linux-x86-64.so.2" != (unsigned int )((void *)0)) {
      tmp___7 = vgPlain_strcmp((Char const   *)soname,
                               (Char const   *)"ld-linux-x86-64.so.2");
      if (tmp___7 == 0) {
        tmp___6 = (int )((Bool )1);
      } else {
        tmp___6 = (int )((Bool )0);
      }
    } else {
      tmp___6 = (int )((Bool )0);
    }
  } else {
    tmp___6 = (int )((Bool )0);
  }
  if (tmp___6) {
    return ((Bool )1);
  } else {

  }
  if ((unsigned int )soname != (unsigned int )((void *)0)) {
    if ((unsigned int )"ld64.so.1" != (unsigned int )((void *)0)) {
      tmp___10 = vgPlain_strcmp((Char const   *)soname,
                                (Char const   *)"ld64.so.1");
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
    return ((Bool )1);
  } else {

  }
  if ((unsigned int )soname != (unsigned int )((void *)0)) {
    if ((unsigned int )"ld.so.1" != (unsigned int )((void *)0)) {
      tmp___13 = vgPlain_strcmp((Char const   *)soname,
                                (Char const   *)"ld.so.1");
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
    return ((Bool )1);
  } else {

  }
  return ((Bool )0);
}
}
static IRSB *hg_instrument(VgCallbackClosure *closure , IRSB *bbIn ,
                           VexGuestLayout *layout , VexGuestExtents *vge ,
                           IRType gWordTy , IRType hWordTy ) 
{ 
  Int i ;
  IRSB *bbOut ;
  Addr64 cia ;
  IRStmt *st ;
  Bool inLDSO ;
  Addr64 inLDSOmask4K ;
  Int tmp ;
  Bool tmp___0 ;
  IRCAS *cas ;
  Bool isDCAS ;
  Int tmp___1 ;
  int tmp___2 ;
  IRType tmp___3 ;
  Int tmp___4 ;
  IRType dataTy ;
  Int tmp___5 ;
  Int tmp___6 ;
  Int tmp___7 ;
  IRType tmp___8 ;
  Int tmp___9 ;
  IRExpr *data ;
  Int tmp___10 ;
  Int tmp___11 ;
  Int dataSize ;
  IRDirty *d ;
  Int tmp___12 ;
  Int tmp___13 ;

  {
  inLDSO = (Bool )0;
  inLDSOmask4K = (Addr64 )1;
  if ((unsigned int )gWordTy != (unsigned int )hWordTy) {
    vgPlain_tool_panic((Char *)"host/guest word size mismatch");
  } else {

  }
  if (1UL << 12 < 4096UL) {
    vgPlain_tool_panic((Char *)"implausible or too-small VKI_PAGE_SIZE");
  } else {
    tmp = vgPlain_log2((UInt )(1UL << 12));
    if (tmp == -1) {
      vgPlain_tool_panic((Char *)"implausible or too-small VKI_PAGE_SIZE");
    } else {

    }
  }
  bbOut = emptyIRSB();
  bbOut->tyenv = deepCopyIRTypeEnv(bbIn->tyenv);
  bbOut->next = deepCopyIRExpr(bbIn->next);
  bbOut->jumpkind = bbIn->jumpkind;
  i = 0;
  while (1) {
    if (i < bbIn->stmts_used) {
      if ((unsigned int )(*(bbIn->stmts + i))->tag != 102401U) {

      } else {
        break;
      }
    } else {
      break;
    }
    addStmtToIRSB(bbOut, *(bbIn->stmts + i));
    i ++;
  }
  if (bbIn->stmts_used > 0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bbIn->stmts_used > 0",
                        (Char const   *)"hg_main.c", 4139,
                        (Char const   *)"hg_instrument", "");
  }
  if (i < bbIn->stmts_used) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"i < bbIn->stmts_used",
                        (Char const   *)"hg_main.c", 4140,
                        (Char const   *)"hg_instrument", "");
  }
  st = *(bbIn->stmts + i);
  if (102401U == (unsigned int )st->tag) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"Ist_IMark == st->tag",
                        (Char const   *)"hg_main.c", 4142,
                        (Char const   *)"hg_instrument", "");
  }
  cia = st->Ist.IMark.addr;
  st = (IRStmt *)((void *)0);
  while (i < bbIn->stmts_used) {
    st = *(bbIn->stmts + i);
    if (st) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"st",
                          (Char const   *)"hg_main.c", 4148,
                          (Char const   *)"hg_instrument", "");
    }
    tmp___0 = isFlatIRStmt(st);
    if (tmp___0) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"isFlatIRStmt(st)",
                          (Char const   *)"hg_main.c", 4149,
                          (Char const   *)"hg_instrument", "");
    }
    switch ((unsigned int )st->tag) {
    case 102411U: 
    case 102404U: 
    case 102403U: 
    case 102402U: 
    case 102400U: 
    break;
    case 102401U: 
    cia = st->Ist.IMark.addr;
    if ((cia & 0xfffffffffffff000ULL) != inLDSOmask4K) {
      inLDSOmask4K = cia & 0xfffffffffffff000ULL;
      inLDSO = is_in_dynamic_linker_shared_object(cia);
    } else {

    }
    break;
    case 102410U: 
    switch ((unsigned int )st->Ist.MBE.event) {
    case 98304U: 
    break;
    default: 
    goto unhandled;
    }
    break;
    case 102407U: 
    cas = st->Ist.CAS.details;
    isDCAS = (Bool )(cas->oldHi != 4294967295U);
    if (isDCAS) {
      if (cas->expdHi) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"cas->expdHi",
                            (Char const   *)"hg_main.c", 4193,
                            (Char const   *)"hg_instrument", "");
      }
      if (cas->dataHi) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"cas->dataHi",
                            (Char const   *)"hg_main.c", 4194,
                            (Char const   *)"hg_instrument", "");
      }
    } else {
      if (! cas->expdHi) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"!cas->expdHi",
                            (Char const   *)"hg_main.c", 4196,
                            (Char const   *)"hg_instrument", "");
      }
      if (! cas->dataHi) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"!cas->dataHi",
                            (Char const   *)"hg_main.c", 4197,
                            (Char const   *)"hg_instrument", "");
      }
    }
    if (! inLDSO) {
      tmp___1 = sizeofIRType(hWordTy);
      if (isDCAS) {
        tmp___2 = 2;
      } else {
        tmp___2 = 1;
      }
      tmp___3 = typeOfIRExpr(bbIn->tyenv, cas->dataLo);
      tmp___4 = sizeofIRType(tmp___3);
      instrument_mem_access(bbOut, cas->addr, tmp___2 * tmp___4, (Bool )0,
                            tmp___1);
    } else {

    }
    break;
    case 102408U: 
    if ((unsigned int )st->Ist.LLSC.storedata == (unsigned int )((void *)0)) {
      dataTy = typeOfIRTemp(bbIn->tyenv, st->Ist.LLSC.result);
      if (! inLDSO) {
        tmp___5 = sizeofIRType(hWordTy);
        tmp___6 = sizeofIRType(dataTy);
        instrument_mem_access(bbOut, st->Ist.LLSC.addr, tmp___6, (Bool )0,
                              tmp___5);
      } else {

      }
    } else {

    }
    break;
    case 102406U: 
    if (! inLDSO) {
      tmp___7 = sizeofIRType(hWordTy);
      tmp___8 = typeOfIRExpr(bbIn->tyenv, st->Ist.Store.data);
      tmp___9 = sizeofIRType(tmp___8);
      instrument_mem_access(bbOut, st->Ist.Store.addr, tmp___9, (Bool )1,
                            tmp___7);
    } else {

    }
    break;
    case 102405U: 
    data = st->Ist.WrTmp.data;
    if ((unsigned int )data->tag == 86024U) {
      if (! inLDSO) {
        tmp___10 = sizeofIRType(hWordTy);
        tmp___11 = sizeofIRType(data->Iex.Load.ty);
        instrument_mem_access(bbOut, data->Iex.Load.addr, tmp___11, (Bool )0,
                              tmp___10);
      } else {

      }
    } else {

    }
    break;
    case 102409U: 
    d = st->Ist.Dirty.details;
    if ((unsigned int )d->mFx != 94208U) {
      if ((unsigned int )d->mAddr != (unsigned int )((void *)0)) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"d->mAddr != NULL",
                            (Char const   *)"hg_main.c", 4275,
                            (Char const   *)"hg_instrument", "");
      }
      if (d->mSize != 0) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"d->mSize != 0",
                            (Char const   *)"hg_main.c", 4276,
                            (Char const   *)"hg_instrument", "");
      }
      dataSize = d->mSize;
      if ((unsigned int )d->mFx == 94209U) {
        goto _L;
      } else
      if ((unsigned int )d->mFx == 94211U) {
        _L: /* CIL Label */ 
        if (! inLDSO) {
          tmp___12 = sizeofIRType(hWordTy);
          instrument_mem_access(bbOut, d->mAddr, dataSize, (Bool )0, tmp___12);
        } else {

        }
      } else {

      }
      if ((unsigned int )d->mFx == 94210U) {
        goto _L___0;
      } else
      if ((unsigned int )d->mFx == 94211U) {
        _L___0: /* CIL Label */ 
        if (! inLDSO) {
          tmp___13 = sizeofIRType(hWordTy);
          instrument_mem_access(bbOut, d->mAddr, dataSize, (Bool )1, tmp___13);
        } else {

        }
      } else {

      }
    } else {
      if ((unsigned int )d->mAddr == (unsigned int )((void *)0)) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"d->mAddr == NULL",
                            (Char const   *)"hg_main.c", 4295,
                            (Char const   *)"hg_instrument", "");
      }
      if (d->mSize == 0) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"d->mSize == 0",
                            (Char const   *)"hg_main.c", 4296,
                            (Char const   *)"hg_instrument", "");
      }
    }
    break;
    unhandled: 
    default: 
    ppIRStmt(st);
    vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                        (Char const   *)"hg_main.c", 4304,
                        (Char const   *)"hg_instrument", "");
    }
    addStmtToIRSB(bbOut, st);
    i ++;
  }
  return (bbOut);
}
}
static WordFM *map_pthread_t_to_Thread  =    (WordFM *)((void *)0);
static void map_pthread_t_to_Thread_INIT(void) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )((unsigned int )map_pthread_t_to_Thread == (unsigned int )((void *)0)),
                         0L);
  if (tmp) {
    map_pthread_t_to_Thread = vgPlain_newFM(& vgHelgrind_zalloc,
                                            (HChar *)"hg.mpttT.1",
                                            & vgHelgrind_free,
                                            (Word (*)(UWord  , UWord  ))((void *)0));
    if ((unsigned int )map_pthread_t_to_Thread != (unsigned int )((void *)0)) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"map_pthread_t_to_Thread != NULL",
                          (Char const   *)"hg_main.c", 4326,
                          (Char const   *)"map_pthread_t_to_Thread_INIT", "");
    }
  } else {

  }
  return;
}
}
static Bool hg_handle_client_request(ThreadId tid , UWord *args , UWord *ret ) 
{ 
  Addr payload ;
  SizeT pszB ;
  Bool tmp ;
  Thread *my_thr ;
  Thread *my_thr___0 ;
  Thread *thr_q ;
  Bool found ;
  Bool mutex_is_valid ;
  Bool tmp___0 ;
  HChar *who ;
  HChar buf[100] ;
  Thread *thr ;
  Thread *tmp___1 ;
  SizeT tmp___2 ;

  {
  if (! ((unsigned long )((unsigned int )((72 << 24) | (71 << 16))) == (*(args + 0) & 4294901760UL))) {
    return ((Bool )0);
  } else {

  }
  *ret = (UWord )0;
  switch (*(args + 0)) {
  case 1212612608UL: ;
  if (*(args + 2) > 0UL) {
    evh__die_mem(*(args + 1), *(args + 2));
    evh__new_mem(*(args + 1), *(args + 2));
  } else {

  }
  break;
  case 1212612906UL: 
  payload = (Addr )0;
  pszB = (SizeT )0;
  tmp = vgHelgrind_mm_find_containing_block((ExeContext **)((void *)0),
                                            & payload, & pszB, *(args + 1));
  if (tmp) {
    if (pszB > 0UL) {
      evh__die_mem(payload, pszB);
      evh__new_mem(payload, pszB);
    } else {

    }
    *ret = pszB;
  } else {
    *ret = (UWord )-1;
  }
  break;
  case 1212612903UL: ;
  if (*(args + 2) > 0UL) {
    evh__untrack_mem(*(args + 1), *(args + 2));
  } else {

  }
  break;
  case 1212612904UL: ;
  if (*(args + 2) > 0UL) {
    evh__new_mem(*(args + 1), *(args + 2));
  } else {

  }
  break;
  case 1212612864UL: 
  my_thr = (Thread *)((void *)0);
  map_pthread_t_to_Thread_INIT();
  my_thr = map_threads_maybe_lookup(tid);
  if ((unsigned int )my_thr != (unsigned int )((void *)0)) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"my_thr != NULL",
                        (Char const   *)"hg_main.c", 4414,
                        (Char const   *)"hg_handle_client_request", "");
  }
  vgPlain_addToFM(map_pthread_t_to_Thread, (UWord )((Word )*(args + 1)),
                  (UWord )((Word )my_thr));
  break;
  case 1212612865UL: 
  my_thr___0 = (Thread *)((void *)0);
  map_pthread_t_to_Thread_INIT();
  my_thr___0 = map_threads_maybe_lookup(tid);
  if (my_thr___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"my_thr",
                        (Char const   *)"hg_main.c", 4428,
                        (Char const   *)"hg_handle_client_request", "");
  }
  vgHelgrind_record_error_PthAPIerror(my_thr___0, (HChar *)*(args + 1),
                                      (Word )*(args + 2), (HChar *)*(args + 3));
  break;
  case 1212612866UL: 
  thr_q = (Thread *)((void *)0);
  found = (Bool )0;
  map_pthread_t_to_Thread_INIT();
  found = vgPlain_lookupFM(map_pthread_t_to_Thread, (UWord *)((void *)0),
                           (UWord *)((Word *)(& thr_q)),
                           (UWord )((Word )*(args + 1)));
  if (found) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"found",
                        (Char const   *)"hg_main.c", 4451,
                        (Char const   *)"hg_handle_client_request", "");
  }
  if (found) {
    evh__HG_PTHREAD_JOIN_POST(tid, thr_q);
  } else {

  }
  break;
  case 1212612867UL: 
  evh__HG_PTHREAD_MUTEX_INIT_POST(tid, (void *)*(args + 1), (Word )*(args + 2));
  break;
  case 1212612868UL: 
  evh__HG_PTHREAD_MUTEX_DESTROY_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612869UL: 
  evh__HG_PTHREAD_MUTEX_UNLOCK_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612870UL: 
  evh__HG_PTHREAD_MUTEX_UNLOCK_POST(tid, (void *)*(args + 1));
  break;
  case 1212612871UL: 
  evh__HG_PTHREAD_MUTEX_LOCK_PRE(tid, (void *)*(args + 1), (Word )*(args + 2));
  break;
  case 1212612872UL: 
  evh__HG_PTHREAD_MUTEX_LOCK_POST(tid, (void *)*(args + 1));
  break;
  case 1212612874UL: 
  case 1212612873UL: 
  evh__HG_PTHREAD_COND_SIGNAL_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612875UL: 
  tmp___0 = evh__HG_PTHREAD_COND_WAIT_PRE(tid, (void *)*(args + 1),
                                          (void *)*(args + 2));
  mutex_is_valid = tmp___0;
  if (mutex_is_valid) {
    *ret = (UWord )1;
  } else {
    *ret = (UWord )0;
  }
  break;
  case 1212612877UL: 
  evh__HG_PTHREAD_COND_DESTROY_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612876UL: 
  evh__HG_PTHREAD_COND_WAIT_POST(tid, (void *)*(args + 1), (void *)*(args + 2));
  break;
  case 1212612878UL: 
  evh__HG_PTHREAD_RWLOCK_INIT_POST(tid, (void *)*(args + 1));
  break;
  case 1212612879UL: 
  evh__HG_PTHREAD_RWLOCK_DESTROY_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612880UL: 
  evh__HG_PTHREAD_RWLOCK_LOCK_PRE(tid, (void *)*(args + 1), (Word )*(args + 2),
                                  (Word )*(args + 3));
  break;
  case 1212612881UL: 
  evh__HG_PTHREAD_RWLOCK_LOCK_POST(tid, (void *)*(args + 1), (Word )*(args + 2));
  break;
  case 1212612882UL: 
  evh__HG_PTHREAD_RWLOCK_UNLOCK_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612883UL: 
  evh__HG_PTHREAD_RWLOCK_UNLOCK_POST(tid, (void *)*(args + 1));
  break;
  case 1212612884UL: 
  evh__HG_POSIX_SEM_INIT_POST(tid, (void *)*(args + 1), *(args + 2));
  break;
  case 1212612885UL: 
  evh__HG_POSIX_SEM_DESTROY_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612886UL: 
  evh__HG_POSIX_SEM_POST_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612887UL: 
  evh__HG_POSIX_SEM_WAIT_POST(tid, (void *)*(args + 1));
  break;
  case 1212612888UL: 
  evh__HG_PTHREAD_BARRIER_INIT_PRE(tid, (void *)*(args + 1), *(args + 2),
                                   *(args + 3));
  break;
  case 1212612905UL: 
  evh__HG_PTHREAD_BARRIER_RESIZE_PRE(tid, (void *)*(args + 1), *(args + 2));
  break;
  case 1212612889UL: 
  evh__HG_PTHREAD_BARRIER_WAIT_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612890UL: 
  evh__HG_PTHREAD_BARRIER_DESTROY_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612891UL: 
  evh__HG_PTHREAD_SPIN_INIT_OR_UNLOCK_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612892UL: 
  evh__HG_PTHREAD_SPIN_INIT_OR_UNLOCK_POST(tid, (void *)*(args + 1));
  break;
  case 1212612893UL: 
  evh__HG_PTHREAD_SPIN_LOCK_PRE(tid, (void *)*(args + 1), (Word )*(args + 2));
  break;
  case 1212612894UL: 
  evh__HG_PTHREAD_SPIN_LOCK_POST(tid, (void *)*(args + 1));
  break;
  case 1212612895UL: 
  evh__HG_PTHREAD_SPIN_DESTROY_PRE(tid, (void *)*(args + 1));
  break;
  case 1212612896UL: 
  who = (HChar *)*(args + 1);
  tmp___1 = map_threads_maybe_lookup(tid);
  thr = tmp___1;
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 4615,
                        (Char const   *)"hg_handle_client_request", "");
  }
  if (who) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"who",
                        (Char const   *)"hg_main.c", 4616,
                        (Char const   *)"hg_handle_client_request", "");
  }
  tmp___2 = vgPlain_strlen((Char const   *)who);
  if (tmp___2 <= 50UL) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"VG_(strlen)(who) <= 50",
                        (Char const   *)"hg_main.c", 4617,
                        (Char const   *)"hg_handle_client_request", "");
  }
  vgPlain_sprintf((Char *)(buf), "Unimplemented client request macro \"%s\"",
                  who);
  vgHelgrind_record_error_Misc(thr, buf);
  break;
  case 1212612897UL: 
  evh__HG_USERSO_SEND_PRE(tid, *(args + 1));
  break;
  case 1212612898UL: 
  evh__HG_USERSO_RECV_POST(tid, *(args + 1));
  break;
  default: 
  vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                      (Char const   *)"hg_main.c", 4637,
                      (Char const   *)"hg_handle_client_request",
                      "unhandled Helgrind client request 0x%lx", *(args + 0));
  }
  return ((Bool )1);
}
}
static Bool hg_process_cmd_line_option(Char *arg ) 
{ 
  Char *tmp_str ;
  Int j ;
  SizeT tmp ;
  Bool tmp___0 ;
  SizeT tmp___1 ;
  Int tmp___2 ;
  int tmp___3 ;
  SizeT tmp___4 ;
  Int tmp___5 ;
  Char *val ;
  SizeT tmp___6 ;
  SizeT tmp___7 ;
  Int tmp___8 ;
  int tmp___9 ;
  SizeT tmp___10 ;
  Int tmp___11 ;
  Char *val___0 ;
  SizeT tmp___12 ;
  Char *s ;
  Long n ;
  Long tmp___13 ;
  Int tmp___14 ;
  int tmp___15 ;
  Int tmp___16 ;
  Int tmp___17 ;
  int tmp___18 ;
  Int tmp___19 ;
  Int tmp___20 ;
  int tmp___21 ;
  Int tmp___22 ;
  SizeT tmp___23 ;
  Int tmp___24 ;
  int tmp___25 ;
  SizeT tmp___26 ;
  Int tmp___27 ;
  Char *val___1 ;
  SizeT tmp___28 ;
  Int tmp___29 ;
  int tmp___30 ;
  Int tmp___31 ;
  Int tmp___32 ;
  int tmp___33 ;
  Int tmp___34 ;
  SizeT tmp___35 ;
  Int tmp___36 ;
  int tmp___37 ;
  SizeT tmp___38 ;
  Int tmp___39 ;
  Char *val___2 ;
  SizeT tmp___40 ;
  Int tmp___41 ;
  int tmp___42 ;
  Int tmp___43 ;
  Int tmp___44 ;
  int tmp___45 ;
  Int tmp___46 ;

  {
  if ((unsigned int )arg != (unsigned int )((void *)0)) {
    if ((unsigned int )"--track-lockorders=" != (unsigned int )((void *)0)) {
      tmp___38 = vgPlain_strlen((Char const   *)"--track-lockorders");
      tmp___39 = vgPlain_strncmp((Char const   *)arg,
                                 (Char const   *)"--track-lockorders=",
                                 tmp___38 + 1UL);
      if (tmp___39 == 0) {
        tmp___37 = (int )((Bool )1);
      } else {
        tmp___37 = (int )((Bool )0);
      }
    } else {
      tmp___37 = (int )((Bool )0);
    }
  } else {
    tmp___37 = (int )((Bool )0);
  }
  if (tmp___37) {
    tmp___40 = vgPlain_strlen((Char const   *)"--track-lockorders");
    val___2 = arg + (tmp___40 + 1UL);
    if ((unsigned int )val___2 != (unsigned int )((void *)0)) {
      if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
        tmp___46 = vgPlain_strcmp((Char const   *)val___2, (Char const   *)"yes");
        if (tmp___46 == 0) {
          tmp___45 = (int )((Bool )1);
        } else {
          tmp___45 = (int )((Bool )0);
        }
      } else {
        tmp___45 = (int )((Bool )0);
      }
    } else {
      tmp___45 = (int )((Bool )0);
    }
    if (tmp___45) {
      vgHelgrind_clo_track_lockorders = (Bool )1;
    } else {
      if ((unsigned int )val___2 != (unsigned int )((void *)0)) {
        if ((unsigned int )"no" != (unsigned int )((void *)0)) {
          tmp___43 = vgPlain_strcmp((Char const   *)val___2,
                                    (Char const   *)"no");
          if (tmp___43 == 0) {
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
        vgHelgrind_clo_track_lockorders = (Bool )0;
      } else {

      }
    }
  } else {
    _L___4: /* CIL Label */ 
    if ((unsigned int )arg != (unsigned int )((void *)0)) {
      if ((unsigned int )"--cmp-race-err-addrs=" != (unsigned int )((void *)0)) {
        tmp___26 = vgPlain_strlen((Char const   *)"--cmp-race-err-addrs");
        tmp___27 = vgPlain_strncmp((Char const   *)arg,
                                   (Char const   *)"--cmp-race-err-addrs=",
                                   tmp___26 + 1UL);
        if (tmp___27 == 0) {
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
      tmp___28 = vgPlain_strlen((Char const   *)"--cmp-race-err-addrs");
      val___1 = arg + (tmp___28 + 1UL);
      if ((unsigned int )val___1 != (unsigned int )((void *)0)) {
        if ((unsigned int )"yes" != (unsigned int )((void *)0)) {
          tmp___34 = vgPlain_strcmp((Char const   *)val___1,
                                    (Char const   *)"yes");
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
        vgHelgrind_clo_cmp_race_err_addrs = (Bool )1;
      } else {
        if ((unsigned int )val___1 != (unsigned int )((void *)0)) {
          if ((unsigned int )"no" != (unsigned int )((void *)0)) {
            tmp___31 = vgPlain_strcmp((Char const   *)val___1,
                                      (Char const   *)"no");
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
          vgHelgrind_clo_cmp_race_err_addrs = (Bool )0;
        } else {

        }
      }
    } else {
      _L___3: /* CIL Label */ 
      if ((unsigned int )arg != (unsigned int )((void *)0)) {
        if ((unsigned int )"--history-level=none" != (unsigned int )((void *)0)) {
          tmp___22 = vgPlain_strcmp((Char const   *)arg,
                                    (Char const   *)"--history-level=none");
          if (tmp___22 == 0) {
            tmp___21 = (int )((Bool )1);
          } else {
            tmp___21 = (int )((Bool )0);
          }
        } else {
          tmp___21 = (int )((Bool )0);
        }
      } else {
        tmp___21 = (int )((Bool )0);
      }
      if (tmp___21) {
        vgHelgrind_clo_history_level = (UWord )0;
      } else {
        _L___2: /* CIL Label */ 
        if ((unsigned int )arg != (unsigned int )((void *)0)) {
          if ((unsigned int )"--history-level=approx" != (unsigned int )((void *)0)) {
            tmp___19 = vgPlain_strcmp((Char const   *)arg,
                                      (Char const   *)"--history-level=approx");
            if (tmp___19 == 0) {
              tmp___18 = (int )((Bool )1);
            } else {
              tmp___18 = (int )((Bool )0);
            }
          } else {
            tmp___18 = (int )((Bool )0);
          }
        } else {
          tmp___18 = (int )((Bool )0);
        }
        if (tmp___18) {
          vgHelgrind_clo_history_level = (UWord )1;
        } else {
          _L___1: /* CIL Label */ 
          if ((unsigned int )arg != (unsigned int )((void *)0)) {
            if ((unsigned int )"--history-level=full" != (unsigned int )((void *)0)) {
              tmp___16 = vgPlain_strcmp((Char const   *)arg,
                                        (Char const   *)"--history-level=full");
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
            vgHelgrind_clo_history_level = (UWord )2;
          } else {
            _L___0: /* CIL Label */ 
            if ((unsigned int )arg != (unsigned int )((void *)0)) {
              if ((unsigned int )"--conflict-cache-size=" != (unsigned int )((void *)0)) {
                tmp___10 = vgPlain_strlen((Char const   *)"--conflict-cache-size");
                tmp___11 = vgPlain_strncmp((Char const   *)arg,
                                           (Char const   *)"--conflict-cache-size=",
                                           tmp___10 + 1UL);
                if (tmp___11 == 0) {
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
              tmp___12 = vgPlain_strlen((Char const   *)"--conflict-cache-size");
              val___0 = arg + (tmp___12 + 1UL);
              tmp___13 = vgPlain_strtoll10(val___0, & s);
              n = tmp___13;
              vgHelgrind_clo_conflict_cache_size = (UWord )n;
              if (0 != (int )*(s + 0)) {
                vgPlain_fmsg_bad_option((HChar *)arg, "");
              } else
              if ((Long )vgHelgrind_clo_conflict_cache_size != n) {
                vgPlain_fmsg_bad_option((HChar *)arg, "");
              } else {

              }
              if (vgHelgrind_clo_conflict_cache_size < 10000UL) {
                vgPlain_fmsg_bad_option((HChar *)arg,
                                        "\'%s\' argument must be between %lld and %lld\n",
                                        "--conflict-cache-size", (Long )10000,
                                        (Long )30000000);
              } else
              if (vgHelgrind_clo_conflict_cache_size > 30000000UL) {
                vgPlain_fmsg_bad_option((HChar *)arg,
                                        "\'%s\' argument must be between %lld and %lld\n",
                                        "--conflict-cache-size", (Long )10000,
                                        (Long )30000000);
              } else {

              }
            } else {
              _L: /* CIL Label */ 
              if ((unsigned int )arg != (unsigned int )((void *)0)) {
                if ((unsigned int )"--hg-sanity-flags=" != (unsigned int )((void *)0)) {
                  tmp___4 = vgPlain_strlen((Char const   *)"--hg-sanity-flags");
                  tmp___5 = vgPlain_strncmp((Char const   *)arg,
                                            (Char const   *)"--hg-sanity-flags=",
                                            tmp___4 + 1UL);
                  if (tmp___5 == 0) {
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
                tmp___6 = vgPlain_strlen((Char const   *)"--hg-sanity-flags");
                val = arg + (tmp___6 + 1UL);
                tmp_str = val;
                tmp = vgPlain_strlen((Char const   *)tmp_str);
                if (6UL != tmp) {
                  vgPlain_message((VgMsgKind )1,
                                  "--hg-sanity-flags argument must have 6 digits\n");
                  return ((Bool )0);
                } else {

                }
                j = 0;
                while (j < 6) {
                  if (48 == (int )*(tmp_str + j)) {

                  } else
                  if (49 == (int )*(tmp_str + j)) {
                    vgHelgrind_clo_sanity_flags |= (long )(1 << (5 - j));
                  } else {
                    vgPlain_message((VgMsgKind )1,
                                    "--hg-sanity-flags argument can only contain 0s and 1s\n");
                    return ((Bool )0);
                  }
                  j ++;
                }
              } else {
                tmp___0 = vgPlain_replacement_malloc_process_cmd_line_option(arg);
                return (tmp___0);
              }
            }
          }
        }
      }
    }
  }
  return ((Bool )1);
}
}
static void hg_print_usage(void) 
{ 


  {
  vgPlain_printf("    --track-lockorders=no|yes show lock ordering errors? [yes]\n    --history-level=none|approx|full [full]\n       full:   show both stack traces for a data race (can be very slow)\n       approx: full trace for one thread, approx for the other (faster)\n       none:   only show trace for one thread in a race (fastest)\n    --conflict-cache-size=N   size of \'full\' history cache [1000000]\n");
  return;
}
}
static void hg_print_debug_usage(void) 
{ 


  {
  vgPlain_printf("    --cmp-race-err-addrs=no|yes  are data addresses in race errors significant? [no]\n");
  vgPlain_printf("    --hg-sanity-flags=<XXXXXX>   sanity check   at events (X = 0|1) [000000]\n");
  vgPlain_printf("    --hg-sanity-flags values:\n");
  vgPlain_printf("       010000   after changes to lock-order-acquisition-graph\n");
  vgPlain_printf("       001000   at memory accesses (NB: not currently used)\n");
  vgPlain_printf("       000100   at mem permission setting for ranges >= %d bytes\n",
                 256);
  vgPlain_printf("       000010   at lock/unlock events\n");
  vgPlain_printf("       000001   at thread create/join events\n");
  return;
}
}
static void hg_fini(Int exitcode ) 
{ 
  UWord tmp ;
  UWord tmp___0 ;
  UWord tmp___1 ;
  ULong tmp___2 ;
  ULong tmp___3 ;
  UWord tmp___4 ;
  UWord tmp___5 ;
  UWord tmp___6 ;
  UWord tmp___7 ;

  {
  if (vgPlain_clo_verbosity == 1) {
    if (! vgPlain_clo_xml) {
      vgPlain_message((VgMsgKind )1,
                      "For counts of detected and suppressed errors, rerun with: -v\n");
    } else {

    }
  } else {

  }
  if (vgPlain_clo_verbosity == 1) {
    if (! vgPlain_clo_xml) {
      if (vgHelgrind_clo_history_level >= 2UL) {
        vgPlain_umsg("Use --history-level=approx or =none to gain increased speed, at\n");
        vgPlain_umsg("the cost of reduced accuracy of conflicting-access information\n");
      } else {

      }
    } else {

    }
  } else {

  }
  if (vgHelgrind_clo_sanity_flags) {
    all__sanity_check((Char *)"SK_(fini)");
  } else {

  }
  if (vgPlain_clo_stats) {
    vgPlain_printf("\n");
    vgHelgrind_ppWSUstats(univ_tsets, (HChar *)"univ_tsets");
    vgPlain_printf("\n");
    vgHelgrind_ppWSUstats(univ_lsets, (HChar *)"univ_lsets");
    if (vgHelgrind_clo_track_lockorders) {
      vgPlain_printf("\n");
      vgHelgrind_ppWSUstats(univ_laog, (HChar *)"univ_laog");
    } else {

    }
    vgPlain_printf("\n");
    tmp = vgHelgrind_cardinalityWSU(univ_lsets);
    vgPlain_printf("        locksets: %\'8d unique lock sets\n", (Int )tmp);
    tmp___0 = vgHelgrind_cardinalityWSU(univ_tsets);
    vgPlain_printf("      threadsets: %\'8d unique thread sets\n", (Int )tmp___0);
    if (vgHelgrind_clo_track_lockorders) {
      tmp___1 = vgHelgrind_cardinalityWSU(univ_laog);
      vgPlain_printf("       univ_laog: %\'8d unique lock sets\n", (Int )tmp___1);
    } else {

    }
    tmp___2 = vgHelgrind_stats__LockN_to_P_get_map_size();
    vgPlain_printf("  LockN-to-P map: %\'8llu queries (%llu map size)\n",
                   vgHelgrind_stats__LockN_to_P_queries, tmp___2);
    tmp___3 = vgHelgrind_stats__string_table_get_map_size();
    vgPlain_printf("string table map: %\'8llu queries (%llu map size)\n",
                   vgHelgrind_stats__string_table_queries, tmp___3);
    if (vgHelgrind_clo_track_lockorders) {
      if (laog) {
        tmp___4 = vgPlain_sizeFM(laog);
        tmp___5 = tmp___4;
      } else {
        tmp___5 = (UWord )0;
      }
      vgPlain_printf("            LAOG: %\'8d map size\n", (Int )tmp___5);
      if (laog_exposition) {
        tmp___6 = vgPlain_sizeFM(laog_exposition);
        tmp___7 = tmp___6;
      } else {
        tmp___7 = (UWord )0;
      }
      vgPlain_printf(" LAOG exposition: %\'8d map size\n", (Int )tmp___7);
    } else {

    }
    vgPlain_printf("           locks: %\'8lu acquires, %\'lu releases\n",
                   stats__lockN_acquires, stats__lockN_releases);
    vgPlain_printf("   sanity checks: %\'8lu\n", stats__sanity_checks);
    vgPlain_printf("\n");
    libhb_shutdown((Bool )1);
  } else {

  }
  return;
}
}
static void for_libhb__get_stacktrace(Thr *hbt , Addr *frames , UWord nRequest ) 
{ 
  Thread *thr ;
  ThreadId tid ;
  UWord nActual ;
  void *tmp ;
  UInt tmp___0 ;

  {
  if (hbt) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"hbt",
                        (Char const   *)"hg_main.c", 4818,
                        (Char const   *)"for_libhb__get_stacktrace", "");
  }
  tmp = libhb_get_Thr_hgthread(hbt);
  thr = (Thread *)tmp;
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 4820,
                        (Char const   *)"for_libhb__get_stacktrace", "");
  }
  tid = map_threads_maybe_reverse_lookup_SLOW(thr);
  tmp___0 = vgPlain_get_StackTrace(tid, frames, (UInt )nRequest,
                                   (StackTrace )((void *)0),
                                   (StackTrace )((void *)0), (Word )0);
  nActual = (UWord )tmp___0;
  if (nActual <= nRequest) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"nActual <= nRequest",
                        (Char const   *)"hg_main.c", 4824,
                        (Char const   *)"for_libhb__get_stacktrace", "");
  }
  while (nActual < nRequest) {
    *(frames + nActual) = (Addr )0;
    nActual ++;
  }
  return;
}
}
static ExeContext *for_libhb__get_EC(Thr *hbt ) 
{ 
  Thread *thr ;
  ThreadId tid ;
  ExeContext *ec ;
  void *tmp ;

  {
  if (hbt) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"hbt",
                        (Char const   *)"hg_main.c", 4835,
                        (Char const   *)"for_libhb__get_EC", "");
  }
  tmp = libhb_get_Thr_hgthread(hbt);
  thr = (Thread *)tmp;
  if (thr) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"thr",
                        (Char const   *)"hg_main.c", 4837,
                        (Char const   *)"for_libhb__get_EC", "");
  }
  tid = map_threads_maybe_reverse_lookup_SLOW(thr);
  ec = vgPlain_record_ExeContext(tid, (Word )0);
  return (ec);
}
}
static void hg_post_clo_init(void) 
{ 
  Thr *hbthr_root ;

  {
  hbthr_root = libhb_init(& for_libhb__get_stacktrace, & for_libhb__get_EC);
  if (vgHelgrind_clo_track_lockorders) {
    laog__init();
  } else {

  }
  initialise_data_structures(hbthr_root);
  return;
}
}
static void hg_pre_clo_init(void) 
{ 


  {
  vgPlain_details_name((Char *)"Helgrind");
  vgPlain_details_version((Char *)((void *)0));
  vgPlain_details_description((Char *)"a thread error detector");
  vgPlain_details_copyright_author((Char *)"Copyright (C) 2007-2010, and GNU GPL\'d, by OpenWorks LLP et al.");
  vgPlain_details_bug_reports_to((Char *)"www.valgrind.org");
  vgPlain_details_avg_translation_sizeB((UInt )320);
  vgPlain_basic_tool_funcs(& hg_post_clo_init, & hg_instrument, & hg_fini);
  vgPlain_needs_core_errors();
  vgPlain_needs_tool_errors(& vgHelgrind_eq_Error, & vgHelgrind_before_pp_Error,
                            & vgHelgrind_pp_Error, (Bool )0,
                            & vgHelgrind_update_extra,
                            & vgHelgrind_recognised_suppression,
                            & vgHelgrind_read_extra_suppression_info,
                            & vgHelgrind_error_matches_suppression,
                            & vgHelgrind_get_error_name,
                            & vgHelgrind_get_extra_suppression_info);
  vgPlain_needs_xml_output();
  vgPlain_needs_command_line_options(& hg_process_cmd_line_option,
                                     & hg_print_usage, & hg_print_debug_usage);
  vgPlain_needs_client_requests(& hg_handle_client_request);
  vgPlain_needs_malloc_replacement(& hg_cli__malloc, & hg_cli____builtin_new,
                                   & hg_cli____builtin_vec_new,
                                   & hg_cli__memalign, & hg_cli__calloc,
                                   & hg_cli__free, & hg_cli____builtin_delete,
                                   & hg_cli____builtin_vec_delete,
                                   & hg_cli__realloc,
                                   & hg_cli_malloc_usable_size, (SizeT )16);
  vgPlain_track_new_mem_startup(& evh__new_mem_w_perms);
  vgPlain_track_new_mem_stack_signal(& evh__new_mem_w_tid);
  vgPlain_track_new_mem_brk(& evh__new_mem_w_tid);
  vgPlain_track_new_mem_mmap(& evh__new_mem_w_perms);
  vgPlain_track_new_mem_stack(& evh__new_mem_stack);
  vgPlain_track_copy_mem_remap(& evh__copy_mem);
  vgPlain_track_change_mem_mprotect(& evh__set_perms);
  vgPlain_track_die_mem_stack_signal(& evh__die_mem);
  vgPlain_track_die_mem_brk(& evh__die_mem);
  vgPlain_track_die_mem_munmap(& evh__die_mem);
  vgPlain_track_die_mem_stack(& evh__die_mem);
  vgPlain_track_ban_mem_stack((void (*)(Addr a , SizeT len ))((void *)0));
  vgPlain_track_pre_mem_read(& evh__pre_mem_read);
  vgPlain_track_pre_mem_read_asciiz(& evh__pre_mem_read_asciiz);
  vgPlain_track_pre_mem_write(& evh__pre_mem_write);
  vgPlain_track_post_mem_write((void (*)(CorePart part , ThreadId tid , Addr a ,
                                         SizeT size ))((void *)0));
  vgPlain_track_pre_thread_ll_create(& evh__pre_thread_ll_create);
  vgPlain_track_pre_thread_ll_exit(& evh__pre_thread_ll_exit);
  vgPlain_track_start_client_code(& evh__start_client_code);
  vgPlain_track_stop_client_code(& evh__stop_client_code);
  if (sizeof(void *) == sizeof(struct _MallocMeta *)) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"sizeof(void*) == sizeof(struct _MallocMeta*)",
                        (Char const   *)"hg_main.c", 4951,
                        (Char const   *)"hg_pre_clo_init", "");
  }
  if (sizeof(UWord ) == sizeof(Addr )) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"sizeof(UWord) == sizeof(Addr)",
                        (Char const   *)"hg_main.c", 4952,
                        (Char const   *)"hg_pre_clo_init", "");
  }
  hg_mallocmeta_table = vgPlain_HT_construct((HChar *)"hg_malloc_metadata_table");
  vgPlain_atfork((void (*)(ThreadId  ))((void *)0),
                 (void (*)(ThreadId  ))((void *)0), & evh__atfork_child);
  return;
}
}
void (*vgPlain_tl_pre_clo_init)(void)  =    & hg_pre_clo_init;
