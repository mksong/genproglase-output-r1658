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
typedef UInt DrdThreadId;
struct _OSet;
typedef struct _OSet OSet;
typedef Word (*OSetCmp_t)(void const   *key , void const   *elem );
typedef void *(*OSetAlloc_t)(HChar *cc , SizeT szB );
typedef void (*OSetFree_t)(void *p );
struct bitmap;
struct bitmap;
enum __anonenum_BmAccessTypeT_4 {
    eLoad = 0,
    eStore = 1,
    eStart = 2,
    eEnd = 3
} ;
typedef enum __anonenum_BmAccessTypeT_4 BmAccessTypeT;
struct bitmap2;
struct bm_cache_elem {
   Addr a1 ;
   struct bitmap2 *bm2 ;
};
struct bitmap {
   struct bm_cache_elem cache[4] ;
   OSet *oset ;
};
struct bitmap1 {
   UWord bm0_r[1U << 7] ;
   UWord bm0_w[1U << 7] ;
};
struct bitmap2 {
   Addr addr ;
   Bool recalc ;
   struct bitmap1 bm1 ;
};
struct __anonstruct_VCElem_5 {
   DrdThreadId threadid ;
   UInt count ;
};
typedef struct __anonstruct_VCElem_5 VCElem;
struct __anonstruct_VectorClock_6 {
   unsigned int capacity ;
   unsigned int size ;
   VCElem *vc ;
   VCElem preallocated[8] ;
};
typedef struct __anonstruct_VectorClock_6 VectorClock;
struct _ExeContext;
typedef struct _ExeContext ExeContext;
enum __anonenum_VgRes_7 {
    Vg_LowRes = 0,
    Vg_MedRes = 1,
    Vg_HighRes = 2
} ;
typedef enum __anonenum_VgRes_7 VgRes;
typedef Addr *StackTrace;
struct segment {
   struct segment *g_next ;
   struct segment *g_prev ;
   struct segment *thr_next ;
   struct segment *thr_prev ;
   DrdThreadId tid ;
   int refcnt ;
   ExeContext *stacktrace ;
   VectorClock vc ;
   struct bitmap bm ;
};
typedef struct segment Segment;
typedef UWord PThreadId;
struct __anonstruct_ThreadInfo_8 {
   struct segment *sg_first ;
   struct segment *sg_last ;
   ThreadId vg_threadid ;
   PThreadId pt_threadid ;
   Addr stack_min_min ;
   Addr stack_min ;
   Addr stack_startup ;
   Addr stack_max ;
   SizeT stack_size ;
   char name[64] ;
   Bool on_alt_stack ;
   Bool valid ;
   Bool vg_thread_exists ;
   Bool posix_thread_exists ;
   Bool detached_posix_thread ;
   Bool is_recording_loads ;
   Bool is_recording_stores ;
   Int pthread_create_nesting_level ;
   Int synchr_nesting ;
   unsigned int deletion_seq ;
};
typedef struct __anonstruct_ThreadInfo_8 ThreadInfo;
enum __anonenum_Vg_FnNameKind_9 {
    Vg_FnNameNormal = 0,
    Vg_FnNameMain = 1,
    Vg_FnNameBelowMain = 2
} ;
typedef enum __anonenum_Vg_FnNameKind_9 Vg_FnNameKind;
struct __anonstruct_StackBlock_10 {
   PtrdiffT base ;
   SizeT szB ;
   Bool spRel ;
   Bool isVec ;
   HChar name[16] ;
};
typedef struct __anonstruct_StackBlock_10 StackBlock;
struct __anonstruct_GlobalBlock_11 {
   Addr addr ;
   SizeT szB ;
   Bool isVec ;
   HChar name[16] ;
   HChar soname[16] ;
};
typedef struct __anonstruct_GlobalBlock_11 GlobalBlock;
struct _DebugInfo;
typedef struct _DebugInfo DebugInfo;
enum __anonenum_VgSectKind_12 {
    Vg_SectUnknown = 0,
    Vg_SectText = 1,
    Vg_SectData = 2,
    Vg_SectBSS = 3,
    Vg_SectGOT = 4,
    Vg_SectPLT = 5,
    Vg_SectGOTPLT = 6,
    Vg_SectOPD = 7
} ;
typedef enum __anonenum_VgSectKind_12 VgSectKind;
typedef Int ErrorKind;
struct _Error;
typedef struct _Error Error;
typedef Int SuppKind;
struct _Supp;
typedef struct _Supp Supp;
enum __anonenum_DrdErrorKind_13 {
    DataRaceErr = 1,
    MutexErr = 2,
    CondErr = 3,
    CondDestrErr = 4,
    CondRaceErr = 5,
    CondWaitErr = 6,
    SemaphoreErr = 7,
    BarrierErr = 8,
    RwlockErr = 9,
    HoldtimeErr = 10,
    GenericErr = 11,
    InvalidThreadId = 12,
    UnimpHgClReq = 13,
    UnimpDrdClReq = 14
} ;
typedef enum __anonenum_DrdErrorKind_13 DrdErrorKind;
enum __anonenum_AddrKind_14 {
    eStack = 0,
    eUnknown = 1,
    eMallocd = 2,
    eSegment = 3
} ;
typedef enum __anonenum_AddrKind_14 AddrKind;
struct __anonstruct_AddrInfo_15 {
   AddrKind akind ;
   SizeT size ;
   PtrdiffT rwoffset ;
   ExeContext *lastchange ;
   DrdThreadId stack_tid ;
   DebugInfo *debuginfo ;
   Char name[256] ;
   Char descr[256] ;
};
typedef struct __anonstruct_AddrInfo_15 AddrInfo;
struct __anonstruct_DataRaceErrInfo_16 {
   DrdThreadId tid ;
   Addr addr ;
   SizeT size ;
   BmAccessTypeT access_type ;
};
typedef struct __anonstruct_DataRaceErrInfo_16 DataRaceErrInfo;
struct __anonstruct_MutexErrInfo_17 {
   DrdThreadId tid ;
   Addr mutex ;
   Int recursion_count ;
   DrdThreadId owner ;
};
typedef struct __anonstruct_MutexErrInfo_17 MutexErrInfo;
struct __anonstruct_CondErrInfo_18 {
   DrdThreadId tid ;
   Addr cond ;
};
typedef struct __anonstruct_CondErrInfo_18 CondErrInfo;
struct __anonstruct_CondDestrErrInfo_19 {
   DrdThreadId tid ;
   Addr cond ;
   Addr mutex ;
   DrdThreadId owner ;
};
typedef struct __anonstruct_CondDestrErrInfo_19 CondDestrErrInfo;
struct __anonstruct_CondRaceErrInfo_20 {
   DrdThreadId tid ;
   Addr cond ;
   Addr mutex ;
};
typedef struct __anonstruct_CondRaceErrInfo_20 CondRaceErrInfo;
struct __anonstruct_CondWaitErrInfo_21 {
   DrdThreadId tid ;
   Addr cond ;
   Addr mutex1 ;
   Addr mutex2 ;
};
typedef struct __anonstruct_CondWaitErrInfo_21 CondWaitErrInfo;
struct __anonstruct_SemaphoreErrInfo_22 {
   DrdThreadId tid ;
   Addr semaphore ;
};
typedef struct __anonstruct_SemaphoreErrInfo_22 SemaphoreErrInfo;
struct __anonstruct_BarrierErrInfo_23 {
   DrdThreadId tid ;
   Addr barrier ;
   DrdThreadId other_tid ;
   ExeContext *other_context ;
};
typedef struct __anonstruct_BarrierErrInfo_23 BarrierErrInfo;
struct __anonstruct_RwlockErrInfo_24 {
   DrdThreadId tid ;
   Addr rwlock ;
};
typedef struct __anonstruct_RwlockErrInfo_24 RwlockErrInfo;
struct __anonstruct_HoldtimeErrInfo_25 {
   DrdThreadId tid ;
   Addr synchronization_object ;
   ExeContext *acquired_at ;
   UInt hold_time_ms ;
   UInt threshold_ms ;
};
typedef struct __anonstruct_HoldtimeErrInfo_25 HoldtimeErrInfo;
struct __anonstruct_GenericErrInfo_26 {
   DrdThreadId tid ;
   Addr addr ;
};
typedef struct __anonstruct_GenericErrInfo_26 GenericErrInfo;
struct __anonstruct_InvalidThreadIdInfo_27 {
   DrdThreadId tid ;
   ULong ptid ;
};
typedef struct __anonstruct_InvalidThreadIdInfo_27 InvalidThreadIdInfo;
struct __anonstruct_UnimpClReqInfo_28 {
   DrdThreadId tid ;
   Char *descr ;
};
typedef struct __anonstruct_UnimpClReqInfo_28 UnimpClReqInfo;
enum __anonenum_VgMsgKind_29 {
    Vg_FailMsg = 0,
    Vg_UserMsg = 1,
    Vg_DebugMsg = 2,
    Vg_ClientMsg = 3
} ;
typedef enum __anonenum_VgMsgKind_29 VgMsgKind;
enum __anonenum_IRType_30 {
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
typedef enum __anonenum_IRType_30 IRType;
enum __anonenum_IREndness_31 {
    Iend_LE = 73728,
    Iend_BE = 73729
} ;
typedef enum __anonenum_IREndness_31 IREndness;
enum __anonenum_IRConstTag_32 {
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
typedef enum __anonenum_IRConstTag_32 IRConstTag;
union __anonunion_Ico_33 {
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
   union __anonunion_Ico_33 Ico ;
};
typedef struct _IRConst IRConst;
struct __anonstruct_IRCallee_34 {
   Int regparms ;
   HChar *name ;
   void *addr ;
   UInt mcx_mask ;
};
typedef struct __anonstruct_IRCallee_34 IRCallee;
struct __anonstruct_IRRegArray_35 {
   Int base ;
   IRType elemTy ;
   Int nElems ;
};
typedef struct __anonstruct_IRRegArray_35 IRRegArray;
typedef UInt IRTemp;
enum __anonenum_IROp_36 {
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
typedef enum __anonenum_IROp_36 IROp;
enum __anonenum_IRRoundingMode_37 {
    Irrm_NEAREST = 0,
    Irrm_NegINF = 1,
    Irrm_PosINF = 2,
    Irrm_ZERO = 3
} ;
typedef enum __anonenum_IRRoundingMode_37 IRRoundingMode;
enum __anonenum_IRCmpF64Result_38 {
    Ircr_UN = 69,
    Ircr_LT = 1,
    Ircr_GT = 0,
    Ircr_EQ = 64
} ;
typedef enum __anonenum_IRCmpF64Result_38 IRCmpF64Result;
typedef IRCmpF64Result IRCmpF32Result;
typedef IRCmpF64Result IRCmpF128Result;
enum __anonenum_IRExprTag_39 {
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
typedef enum __anonenum_IRExprTag_39 IRExprTag;
struct _IRExpr;
typedef struct _IRExpr IRExpr;
struct __anonstruct_Binder_41 {
   Int binder ;
};
struct __anonstruct_Get_42 {
   Int offset ;
   IRType ty ;
};
struct __anonstruct_GetI_43 {
   IRRegArray *descr ;
   IRExpr *ix ;
   Int bias ;
};
struct __anonstruct_RdTmp_44 {
   IRTemp tmp ;
};
struct __anonstruct_Qop_45 {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
   IRExpr *arg3 ;
   IRExpr *arg4 ;
};
struct __anonstruct_Triop_46 {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
   IRExpr *arg3 ;
};
struct __anonstruct_Binop_47 {
   IROp op ;
   IRExpr *arg1 ;
   IRExpr *arg2 ;
};
struct __anonstruct_Unop_48 {
   IROp op ;
   IRExpr *arg ;
};
struct __anonstruct_Load_49 {
   IREndness end ;
   IRType ty ;
   IRExpr *addr ;
};
struct __anonstruct_Const_50 {
   IRConst *con ;
};
struct __anonstruct_CCall_51 {
   IRCallee *cee ;
   IRType retty ;
   IRExpr **args ;
};
struct __anonstruct_Mux0X_52 {
   IRExpr *cond ;
   IRExpr *expr0 ;
   IRExpr *exprX ;
};
union __anonunion_Iex_40 {
   struct __anonstruct_Binder_41 Binder ;
   struct __anonstruct_Get_42 Get ;
   struct __anonstruct_GetI_43 GetI ;
   struct __anonstruct_RdTmp_44 RdTmp ;
   struct __anonstruct_Qop_45 Qop ;
   struct __anonstruct_Triop_46 Triop ;
   struct __anonstruct_Binop_47 Binop ;
   struct __anonstruct_Unop_48 Unop ;
   struct __anonstruct_Load_49 Load ;
   struct __anonstruct_Const_50 Const ;
   struct __anonstruct_CCall_51 CCall ;
   struct __anonstruct_Mux0X_52 Mux0X ;
};
struct _IRExpr {
   IRExprTag tag ;
   union __anonunion_Iex_40 Iex ;
};
enum __anonenum_IRJumpKind_53 {
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
typedef enum __anonenum_IRJumpKind_53 IRJumpKind;
enum __anonenum_IREffect_54 {
    Ifx_None = 94208,
    Ifx_Read = 94209,
    Ifx_Write = 94210,
    Ifx_Modify = 94211
} ;
typedef enum __anonenum_IREffect_54 IREffect;
struct __anonstruct_fxState_56 {
   IREffect fx ;
   Int offset ;
   Int size ;
};
struct __anonstruct_IRDirty_55 {
   IRCallee *cee ;
   IRExpr *guard ;
   IRExpr **args ;
   IRTemp tmp ;
   IREffect mFx ;
   IRExpr *mAddr ;
   Int mSize ;
   Bool needsBBP ;
   Int nFxState ;
   struct __anonstruct_fxState_56 fxState[7] ;
};
typedef struct __anonstruct_IRDirty_55 IRDirty;
enum __anonenum_IRMBusEvent_57 {
    Imbe_Fence = 98304,
    Imbe_CancelReservation = 98305
} ;
typedef enum __anonenum_IRMBusEvent_57 IRMBusEvent;
struct __anonstruct_IRCAS_58 {
   IRTemp oldHi ;
   IRTemp oldLo ;
   IREndness end ;
   IRExpr *addr ;
   IRExpr *expdHi ;
   IRExpr *expdLo ;
   IRExpr *dataHi ;
   IRExpr *dataLo ;
};
typedef struct __anonstruct_IRCAS_58 IRCAS;
enum __anonenum_IRStmtTag_59 {
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
typedef enum __anonenum_IRStmtTag_59 IRStmtTag;
struct __anonstruct_NoOp_61 {

};
struct __anonstruct_IMark_62 {
   Addr64 addr ;
   Int len ;
   UChar delta ;
};
struct __anonstruct_AbiHint_63 {
   IRExpr *base ;
   Int len ;
   IRExpr *nia ;
};
struct __anonstruct_Put_64 {
   Int offset ;
   IRExpr *data ;
};
struct __anonstruct_PutI_65 {
   IRRegArray *descr ;
   IRExpr *ix ;
   Int bias ;
   IRExpr *data ;
};
struct __anonstruct_WrTmp_66 {
   IRTemp tmp ;
   IRExpr *data ;
};
struct __anonstruct_Store_67 {
   IREndness end ;
   IRExpr *addr ;
   IRExpr *data ;
};
struct __anonstruct_CAS_68 {
   IRCAS *details ;
};
struct __anonstruct_LLSC_69 {
   IREndness end ;
   IRTemp result ;
   IRExpr *addr ;
   IRExpr *storedata ;
};
struct __anonstruct_Dirty_70 {
   IRDirty *details ;
};
struct __anonstruct_MBE_71 {
   IRMBusEvent event ;
};
struct __anonstruct_Exit_72 {
   IRExpr *guard ;
   IRJumpKind jk ;
   IRConst *dst ;
};
union __anonunion_Ist_60 {
   struct __anonstruct_NoOp_61 NoOp ;
   struct __anonstruct_IMark_62 IMark ;
   struct __anonstruct_AbiHint_63 AbiHint ;
   struct __anonstruct_Put_64 Put ;
   struct __anonstruct_PutI_65 PutI ;
   struct __anonstruct_WrTmp_66 WrTmp ;
   struct __anonstruct_Store_67 Store ;
   struct __anonstruct_CAS_68 CAS ;
   struct __anonstruct_LLSC_69 LLSC ;
   struct __anonstruct_Dirty_70 Dirty ;
   struct __anonstruct_MBE_71 MBE ;
   struct __anonstruct_Exit_72 Exit ;
};
struct _IRStmt {
   IRStmtTag tag ;
   union __anonunion_Ist_60 Ist ;
};
typedef struct _IRStmt IRStmt;
struct __anonstruct_IRTypeEnv_73 {
   IRType *types ;
   Int types_size ;
   Int types_used ;
};
typedef struct __anonstruct_IRTypeEnv_73 IRTypeEnv;
struct __anonstruct_IRSB_74 {
   IRTypeEnv *tyenv ;
   IRStmt **stmts ;
   Int stmts_size ;
   Int stmts_used ;
   IRExpr *next ;
   IRJumpKind jumpkind ;
};
typedef struct __anonstruct_IRSB_74 IRSB;
enum __anonenum_VexArch_75 {
    VexArch_INVALID = 0,
    VexArchX86 = 1,
    VexArchAMD64 = 2,
    VexArchARM = 3,
    VexArchPPC32 = 4,
    VexArchPPC64 = 5,
    VexArchS390X = 6
} ;
typedef enum __anonenum_VexArch_75 VexArch;
struct __anonstruct_VexArchInfo_76 {
   UInt hwcaps ;
   Int ppc_cache_line_szB ;
   UInt ppc_dcbz_szB ;
   UInt ppc_dcbzl_szB ;
};
typedef struct __anonstruct_VexArchInfo_76 VexArchInfo;
struct __anonstruct_VexAbiInfo_77 {
   Int guest_stack_redzone_size ;
   Bool guest_amd64_assume_fs_is_zero ;
   Bool guest_amd64_assume_gs_is_0x60 ;
   Bool guest_ppc_zap_RZ_at_blr ;
   Bool (*guest_ppc_zap_RZ_at_bl)(Addr64  ) ;
   Bool guest_ppc_sc_continues_at_LR ;
   Bool host_ppc_calls_use_fndescrs ;
   Bool host_ppc32_regalign_int64_args ;
};
typedef struct __anonstruct_VexAbiInfo_77 VexAbiInfo;
struct __anonstruct_VexControl_78 {
   Int iropt_verbosity ;
   Int iropt_level ;
   Bool iropt_precise_memory_exns ;
   Int iropt_unroll_thresh ;
   Int guest_max_insns ;
   Int guest_chase_thresh ;
   Bool guest_chase_cond ;
};
typedef struct __anonstruct_VexControl_78 VexControl;
union __anonunion_x_79 {
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
   union __anonunion_x_79 x ;
};
struct __anonstruct_alwaysDefd_81 {
   Int offset ;
   Int size ;
};
struct __anonstruct_VexGuestLayout_80 {
   Int total_sizeB ;
   Int offset_SP ;
   Int sizeof_SP ;
   Int offset_FP ;
   Int sizeof_FP ;
   Int offset_IP ;
   Int sizeof_IP ;
   Int n_alwaysDefd ;
   struct __anonstruct_alwaysDefd_81 alwaysDefd[24] ;
};
typedef struct __anonstruct_VexGuestLayout_80 VexGuestLayout;
enum __anonenum_status_83 {
    VexTransOK = 0,
    VexTransAccessFail = 1,
    VexTransOutputFull = 2
} ;
struct __anonstruct_VexTranslateResult_82 {
   enum __anonenum_status_83 status ;
   UInt n_sc_extents ;
};
typedef struct __anonstruct_VexTranslateResult_82 VexTranslateResult;
struct __anonstruct_VexGuestExtents_84 {
   Addr64 base[3] ;
   UShort len[3] ;
   UShort n_used ;
};
typedef struct __anonstruct_VexGuestExtents_84 VexGuestExtents;
struct __anonstruct_VexTranslateArgs_85 {
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
typedef struct __anonstruct_VexTranslateArgs_85 VexTranslateArgs;
struct __anonstruct_VgCallbackClosure_86 {
   Addr64 nraddr ;
   Addr64 readdr ;
   ThreadId tid ;
};
typedef struct __anonstruct_VgCallbackClosure_86 VgCallbackClosure;
enum __anonenum_CorePart_87 {
    Vg_CoreStartup = 1,
    Vg_CoreSignal = 2,
    Vg_CoreSysCall = 3,
    Vg_CoreSysCallArgInMem = 4,
    Vg_CoreTranslate = 5,
    Vg_CoreClientReq = 6
} ;
typedef enum __anonenum_CorePart_87 CorePart;
struct __anonstruct_OrigFn_88 {
   unsigned int nraddr ;
};
typedef struct __anonstruct_OrigFn_88 OrigFn;
enum __anonenum_Vg_ClientRequest_89 {
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
    VG_USERREQ__MAP_IP_TO_SRCLOC = 5889,
    VG_USERREQ__CHANGE_ERR_DISABLEMENT = 6145
} ;
typedef enum __anonenum_Vg_ClientRequest_89 Vg_ClientRequest;
enum __anonenum_90 {
    VG_USERREQ__DRD_CLEAN_MEMORY = 1212612608,
    VG_USERREQ__DRD_GET_VALGRIND_THREAD_ID = 1146224640,
    VG_USERREQ__DRD_GET_DRD_THREAD_ID = 1146224641,
    VG_USERREQ__DRD_START_SUPPRESSION = 1146224642,
    VG_USERREQ__DRD_FINISH_SUPPRESSION = 1146224643,
    VG_USERREQ__DRD_START_TRACE_ADDR = 1146224644,
    VG_USERREQ__DRD_STOP_TRACE_ADDR = 1146224645,
    VG_USERREQ__DRD_RECORD_LOADS = 1146224646,
    VG_USERREQ__DRD_RECORD_STORES = 1146224647,
    VG_USERREQ__DRD_SET_THREAD_NAME = 1146224648,
    VG_USERREQ__DRD_ANNOTATION_UNIMP = 1146224649,
    VG_USERREQ__DRD_ANNOTATE_RWLOCK_CREATE = 1212612878,
    VG_USERREQ__DRD_ANNOTATE_RWLOCK_DESTROY = 1212612879,
    VG_USERREQ__DRD_ANNOTATE_RWLOCK_ACQUIRED = 1212612881,
    VG_USERREQ__DRD_ANNOTATE_RWLOCK_RELEASED = 1212612882,
    VG_USERREQ__HELGRIND_ANNOTATION_UNIMP = 1212612896,
    VG_USERREQ__DRD_ANNOTATE_HAPPENS_BEFORE = 1212612897,
    VG_USERREQ__DRD_ANNOTATE_HAPPENS_AFTER = 1212612898
} ;
enum __anonenum_91 {
    VG_USERREQ__SET_PTHREAD_COND_INITIALIZER = 1148321792,
    VG_USERREQ__DRD_START_NEW_SEGMENT = 1148321793,
    VG_USERREQ__SET_PTHREADID = 1148321794,
    VG_USERREQ__SET_JOINABLE = 1148321795,
    VG_USERREQ__ENTERING_PTHREAD_CREATE = 1148321796,
    VG_USERREQ__LEFT_PTHREAD_CREATE = 1148321797,
    VG_USERREQ__POST_THREAD_JOIN = 1148321798,
    VG_USERREQ__PRE_THREAD_CANCEL = 1148321799,
    VG_USERREQ__POST_THREAD_CANCEL = 1148321800,
    VG_USERREQ__PRE_MUTEX_INIT = 1148321801,
    VG_USERREQ__POST_MUTEX_INIT = 1148321802,
    VG_USERREQ__PRE_MUTEX_DESTROY = 1148321803,
    VG_USERREQ__POST_MUTEX_DESTROY = 1148321804,
    VG_USERREQ__PRE_MUTEX_LOCK = 1148321805,
    VG_USERREQ__POST_MUTEX_LOCK = 1148321806,
    VG_USERREQ__PRE_MUTEX_UNLOCK = 1148321807,
    VG_USERREQ__POST_MUTEX_UNLOCK = 1148321808,
    VG_USERREQ__PRE_SPIN_INIT_OR_UNLOCK = 1148321809,
    VG_USERREQ__POST_SPIN_INIT_OR_UNLOCK = 1148321810,
    VG_USERREQ__PRE_COND_INIT = 1148321811,
    VG_USERREQ__POST_COND_INIT = 1148321812,
    VG_USERREQ__PRE_COND_DESTROY = 1148321813,
    VG_USERREQ__POST_COND_DESTROY = 1148321814,
    VG_USERREQ__PRE_COND_WAIT = 1148321815,
    VG_USERREQ__POST_COND_WAIT = 1148321816,
    VG_USERREQ__PRE_COND_SIGNAL = 1148321817,
    VG_USERREQ__POST_COND_SIGNAL = 1148321818,
    VG_USERREQ__PRE_COND_BROADCAST = 1148321819,
    VG_USERREQ__POST_COND_BROADCAST = 1148321820,
    VG_USERREQ__PRE_SEM_INIT = 1148321821,
    VG_USERREQ__POST_SEM_INIT = 1148321822,
    VG_USERREQ__PRE_SEM_DESTROY = 1148321823,
    VG_USERREQ__POST_SEM_DESTROY = 1148321824,
    VG_USERREQ__PRE_SEM_OPEN = 1148321825,
    VG_USERREQ__POST_SEM_OPEN = 1148321826,
    VG_USERREQ__PRE_SEM_CLOSE = 1148321827,
    VG_USERREQ__POST_SEM_CLOSE = 1148321828,
    VG_USERREQ__PRE_SEM_WAIT = 1148321829,
    VG_USERREQ__POST_SEM_WAIT = 1148321830,
    VG_USERREQ__PRE_SEM_POST = 1148321831,
    VG_USERREQ__POST_SEM_POST = 1148321832,
    VG_USERREQ__PRE_BARRIER_INIT = 1148321833,
    VG_USERREQ__POST_BARRIER_INIT = 1148321834,
    VG_USERREQ__PRE_BARRIER_DESTROY = 1148321835,
    VG_USERREQ__POST_BARRIER_DESTROY = 1148321836,
    VG_USERREQ__PRE_BARRIER_WAIT = 1148321837,
    VG_USERREQ__POST_BARRIER_WAIT = 1148321838,
    VG_USERREQ__PRE_RWLOCK_INIT = 1148321839,
    VG_USERREQ__POST_RWLOCK_DESTROY = 1148321840,
    VG_USERREQ__PRE_RWLOCK_RDLOCK = 1148321841,
    VG_USERREQ__POST_RWLOCK_RDLOCK = 1148321842,
    VG_USERREQ__PRE_RWLOCK_WRLOCK = 1148321843,
    VG_USERREQ__POST_RWLOCK_WRLOCK = 1148321844,
    VG_USERREQ__PRE_RWLOCK_UNLOCK = 1148321845,
    VG_USERREQ__POST_RWLOCK_UNLOCK = 1148321846
} ;
enum __anonenum_MutexT_92 {
    mutex_type_unknown = -1,
    mutex_type_invalid_mutex = 0,
    mutex_type_recursive_mutex = 1,
    mutex_type_errorcheck_mutex = 2,
    mutex_type_default_mutex = 3,
    mutex_type_spinlock = 4
} ;
typedef enum __anonenum_MutexT_92 MutexT;
enum __anonenum_RwLockT_93 {
    pthread_rwlock = 1,
    user_rwlock = 2
} ;
typedef enum __anonenum_RwLockT_93 RwLockT;
enum __anonenum_BarrierT_94 {
    pthread_barrier = 1,
    gomp_barrier = 2
} ;
typedef enum __anonenum_BarrierT_94 BarrierT;
struct barrier_info;
struct barrier_info;
struct _XArray;
typedef struct _XArray XArray;
union drd_clientobj;
union drd_clientobj;
enum __anonenum_ObjType_95 {
    ClientMutex = 1,
    ClientCondvar = 2,
    ClientHbvar = 3,
    ClientSemaphore = 4,
    ClientBarrier = 5,
    ClientRwlock = 6
} ;
typedef enum __anonenum_ObjType_95 ObjType;
struct any {
   Addr a1 ;
   ObjType type ;
   void (*cleanup)(union drd_clientobj * ) ;
   void (*delete_thread)(union drd_clientobj * , DrdThreadId  ) ;
   ExeContext *first_observed_at ;
};
struct mutex_info {
   Addr a1 ;
   ObjType type ;
   void (*cleanup)(union drd_clientobj * ) ;
   void (*delete_thread)(union drd_clientobj * , DrdThreadId  ) ;
   ExeContext *first_observed_at ;
   MutexT mutex_type ;
   int recursion_count ;
   DrdThreadId owner ;
   struct segment *last_locked_segment ;
   ULong acquiry_time_ms ;
   ExeContext *acquired_at ;
};
struct cond_info {
   Addr a1 ;
   ObjType type ;
   void (*cleanup)(union drd_clientobj * ) ;
   void (*delete_thread)(union drd_clientobj * , DrdThreadId  ) ;
   ExeContext *first_observed_at ;
   int waiter_count ;
   Addr mutex ;
};
struct hb_info {
   Addr a1 ;
   ObjType type ;
   void (*cleanup)(union drd_clientobj * ) ;
   void (*delete_thread)(union drd_clientobj * , DrdThreadId  ) ;
   ExeContext *first_observed_at ;
   OSet *oset ;
};
struct semaphore_info {
   Addr a1 ;
   ObjType type ;
   void (*cleanup)(union drd_clientobj * ) ;
   void (*delete_thread)(union drd_clientobj * , DrdThreadId  ) ;
   ExeContext *first_observed_at ;
   UInt waits_to_skip ;
   UInt value ;
   UWord waiters ;
   DrdThreadId last_sem_post_tid ;
   XArray *last_sem_post_seg ;
};
struct barrier_info {
   Addr a1 ;
   ObjType type ;
   void (*cleanup)(union drd_clientobj * ) ;
   void (*delete_thread)(union drd_clientobj * , DrdThreadId  ) ;
   ExeContext *first_observed_at ;
   BarrierT barrier_type ;
   Word count ;
   Word pre_iteration ;
   Word post_iteration ;
   Word pre_waiters_left ;
   Word post_waiters_left ;
   OSet *oset[2] ;
};
struct rwlock_info {
   Addr a1 ;
   ObjType type ;
   void (*cleanup)(union drd_clientobj * ) ;
   void (*delete_thread)(union drd_clientobj * , DrdThreadId  ) ;
   ExeContext *first_observed_at ;
   RwLockT rwlock_type ;
   OSet *thread_info ;
   ULong acquiry_time_ms ;
   ExeContext *acquired_at ;
};
union drd_clientobj {
   struct any any ;
   struct mutex_info mutex ;
   struct cond_info cond ;
   struct hb_info hb ;
   struct semaphore_info semaphore ;
   struct barrier_info barrier ;
   struct rwlock_info rwlock ;
};
typedef union drd_clientobj DrdClientobj;
struct cond_info;
struct mutex_info;
struct semaphore_info;
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
struct __anonstruct___vki_kernel_fsid_t_96 {
   int val[2] ;
};
typedef struct __anonstruct___vki_kernel_fsid_t_96 __vki_kernel_fsid_t;
struct __anonstruct___vki_kernel_fd_set_97 {
   unsigned long fds_bits[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___vki_kernel_fd_set_97 __vki_kernel_fd_set;
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
struct __anonstruct_vki_sigset_t_98 {
   unsigned long sig[2] ;
};
typedef struct __anonstruct_vki_sigset_t_98 vki_sigset_t;
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
struct __anonstruct__kill_100 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
};
struct __anonstruct__timer_101 {
   vki_timer_t _tid ;
   int _overrun ;
   char _pad[sizeof(vki_uid_t ) - sizeof(int )] ;
   vki_sigval_t _sigval ;
   int _sys_private ;
};
struct __anonstruct__rt_102 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
   vki_sigval_t _sigval ;
};
struct __anonstruct__sigchld_103 {
   vki_pid_t _pid ;
   vki_uid_t _uid ;
   int _status ;
   vki_clock_t _utime ;
   vki_clock_t _stime ;
};
struct __anonstruct__sigfault_104 {
   void *_addr ;
};
struct __anonstruct__sigpoll_105 {
   long _band ;
   int _fd ;
};
union __anonunion__sifields_99 {
   int _pad[(128U - 3U * sizeof(int )) / sizeof(int )] ;
   struct __anonstruct__kill_100 _kill ;
   struct __anonstruct__timer_101 _timer ;
   struct __anonstruct__rt_102 _rt ;
   struct __anonstruct__sigchld_103 _sigchld ;
   struct __anonstruct__sigfault_104 _sigfault ;
   struct __anonstruct__sigpoll_105 _sigpoll ;
};
struct vki_siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_99 _sifields ;
};
typedef struct vki_siginfo vki_siginfo_t;
struct __anonstruct__sigev_thread_107 {
   void (*_function)(vki_sigval_t  ) ;
   void *_attribute ;
};
union __anonunion__sigev_un_106 {
   int _pad[(64U - (sizeof(int ) * 2U + sizeof(vki_sigval_t ))) / sizeof(int )] ;
   int _tid ;
   struct __anonstruct__sigev_thread_107 _sigev_thread ;
};
struct vki_sigevent {
   vki_sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_106 _sigev_un ;
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
union __anonunion_vki_in6_u_108 {
   __vki_u8 u6_addr8[16] ;
   __vki_u16 u6_addr16[8] ;
   __vki_u32 u6_addr32[4] ;
};
struct vki_in6_addr {
   union __anonunion_vki_in6_u_108 vki_in6_u ;
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
union __anonunion_ifs_ifsu_109 {
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
   union __anonunion_ifs_ifsu_109 ifs_ifsu ;
};
union __anonunion_ifr_ifrn_110 {
   char ifrn_name[16] ;
};
union __anonunion_ifr_ifru_111 {
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
   union __anonunion_ifr_ifrn_110 ifr_ifrn ;
   union __anonunion_ifr_ifru_111 ifr_ifru ;
};
union __anonunion_ifc_ifcu_112 {
   char *ifcu_buf ;
   struct vki_ifreq *ifcu_req ;
};
struct vki_ifconf {
   int ifc_len ;
   union __anonunion_ifc_ifcu_112 ifc_ifcu ;
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
enum __anonenum_113 {
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
struct __anonstruct_vki_isdn_net_ioctl_phone_114 {
   char name[10] ;
   char phone[32] ;
   int outgoing ;
};
typedef struct __anonstruct_vki_isdn_net_ioctl_phone_114 vki_isdn_net_ioctl_phone;
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
struct __anonstruct_116 {
   int  : 0 ;
};
struct __anonstruct_117 {
   int  : 0 ;
};
enum __anonenum_115 {
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
enum __anonenum_118 {
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
union __anonunion_ifr_ifrn_119 {
   char ifrn_name[16] ;
};
struct vki_iwreq {
   union __anonunion_ifr_ifrn_119 ifr_ifrn ;
   union vki_iwreq_data u ;
};
union __anonunion____missing_field_name_120 {
   __vki_u64 sample_period ;
   __vki_u64 sample_freq ;
};
union __anonunion____missing_field_name_121 {
   __vki_u32 wakeup_events ;
   __vki_u32 wakeup_watermark ;
};
union __anonunion____missing_field_name_122 {
   __vki_u64 bp_addr ;
   __vki_u64 config1 ;
};
union __anonunion____missing_field_name_123 {
   __vki_u64 bp_len ;
   __vki_u64 config2 ;
};
struct vki_perf_event_attr {
   __vki_u32 type ;
   __vki_u32 size ;
   __vki_u64 config ;
   union __anonunion____missing_field_name_120 __annonCompField1 ;
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
   union __anonunion____missing_field_name_121 __annonCompField2 ;
   __vki_u32 bp_type ;
   union __anonunion____missing_field_name_122 __annonCompField3 ;
   union __anonunion____missing_field_name_123 __annonCompField4 ;
};
struct vki_getcpu_cache {
   unsigned long blob[128U / sizeof(long )] ;
};
struct __anonstruct_vki_bdaddr_t_124 {
   __vki_u8 b[6] ;
} __attribute__((__packed__)) ;
typedef struct __anonstruct_vki_bdaddr_t_124 vki_bdaddr_t;
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
typedef void (*vg_atfork_t)(ThreadId  );
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
extern OSet *vgPlain_OSetWord_Create(void *(*alloc)(HChar *cc , SizeT szB ) ,
                                     HChar *cc , void (*_free)(void *p ) ) ;
extern void vgPlain_OSetWord_Destroy(OSet *os ) ;
extern Word vgPlain_OSetWord_Size(OSet *os ) ;
extern void vgPlain_OSetWord_Insert(OSet *os , UWord val ) ;
extern Bool vgPlain_OSetWord_Contains(OSet *os , UWord val ) ;
extern Bool vgPlain_OSetWord_Remove(OSet *os , UWord val ) ;
extern void vgPlain_OSetWord_ResetIter(OSet *os ) ;
extern Bool vgPlain_OSetWord_Next(OSet *os , UWord *val ) ;
extern OSet *vgPlain_OSetGen_Create(PtrdiffT keyOff ,
                                    Word (*cmp)(void const   *key ,
                                                void const   *elem ) ,
                                    void *(*alloc)(HChar *cc , SizeT szB ) ,
                                    HChar *cc , void (*_free)(void *p ) ) ;
extern OSet *vgPlain_OSetGen_Create_With_Pool(PtrdiffT keyOff ,
                                              Word (*cmp)(void const   *key ,
                                                          void const   *elem ) ,
                                              void *(*alloc)(HChar *cc ,
                                                             SizeT szB ) ,
                                              HChar *cc ,
                                              void (*_free)(void *p ) ,
                                              SizeT poolSize , SizeT maxEltSize ) ;
extern void vgPlain_OSetGen_Destroy(OSet *os ) ;
extern void *vgPlain_OSetGen_AllocNode(OSet *os , SizeT elemSize ) ;
extern void vgPlain_OSetGen_FreeNode(OSet *os , void *elem ) ;
extern OSet *vgPlain_OSetGen_EmptyClone(OSet *os ) ;
extern Word vgPlain_OSetGen_Size(OSet const   *os ) ;
extern void vgPlain_OSetGen_Insert(OSet *os , void *elem ) ;
extern Bool vgPlain_OSetGen_Contains(OSet const   *os , void const   *key ) ;
extern void *vgPlain_OSetGen_Lookup(OSet const   *os , void const   *key ) ;
extern void *vgPlain_OSetGen_LookupWithCmp(OSet *os , void const   *key ,
                                           Word (*cmp)(void const   *key ,
                                                       void const   *elem ) ) ;
extern void *vgPlain_OSetGen_Remove(OSet *os , void const   *key ) ;
extern void vgPlain_OSetGen_ResetIter(OSet *os ) ;
extern void vgPlain_OSetGen_ResetIterAt(OSet *os , void const   *key ) ;
extern void *vgPlain_OSetGen_Next(OSet *os ) ;
void vgDrd_bm_module_init(void) ;
void vgDrd_bm_module_cleanup(void) ;
struct bitmap *vgDrd_bm_new(void) ;
void vgDrd_bm_delete(struct bitmap * const  bm ) ;
void vgDrd_bm_init(struct bitmap * const  bm ) ;
void vgDrd_bm_cleanup(struct bitmap * const  bm ) ;
void vgDrd_bm_access_range(struct bitmap * const  bm , Addr const   a1 ,
                           Addr const   a2 , BmAccessTypeT const   access_type ) ;
void vgDrd_bm_access_range_load(struct bitmap * const  bm , Addr const   a1 ,
                                Addr const   a2 ) ;
void vgDrd_bm_access_load_1(struct bitmap * const  bm , Addr const   a1 ) ;
void vgDrd_bm_access_load_2(struct bitmap * const  bm , Addr const   a1 ) ;
void vgDrd_bm_access_load_4(struct bitmap * const  bm , Addr const   a1 ) ;
void vgDrd_bm_access_load_8(struct bitmap * const  bm , Addr const   a1 ) ;
void vgDrd_bm_access_range_store(struct bitmap * const  bm , Addr const   a1 ,
                                 Addr const   a2 ) ;
void vgDrd_bm_access_store_1(struct bitmap * const  bm , Addr const   a1 ) ;
void vgDrd_bm_access_store_2(struct bitmap * const  bm , Addr const   a1 ) ;
void vgDrd_bm_access_store_4(struct bitmap * const  bm , Addr const   a1 ) ;
void vgDrd_bm_access_store_8(struct bitmap * const  bm , Addr const   a1 ) ;
Bool vgDrd_bm_has(struct bitmap * const  bm , Addr const   a1 ,
                  Addr const   a2 , BmAccessTypeT const   access_type ) ;
Bool vgDrd_bm_has_any_load_g(struct bitmap * const  bm ) ;
Bool vgDrd_bm_has_any_load(struct bitmap * const  bm , Addr const   a1 ,
                           Addr const   a2 ) ;
Bool vgDrd_bm_has_any_store(struct bitmap * const  bm , Addr const   a1 ,
                            Addr const   a2 ) ;
Bool vgDrd_bm_has_any_access(struct bitmap * const  bm , Addr const   a1 ,
                             Addr const   a2 ) ;
Bool vgDrd_bm_has_1(struct bitmap * const  bm , Addr const   a ,
                    BmAccessTypeT const   access_type ) ;
void vgDrd_bm_clear(struct bitmap * const  bm , Addr const   a1 ,
                    Addr const   a2 ) ;
void vgDrd_bm_clear_load(struct bitmap * const  bm , Addr const   a1 ,
                         Addr const   a2 ) ;
void vgDrd_bm_clear_store(struct bitmap * const  bm , Addr const   a1 ,
                          Addr const   a2 ) ;
Bool vgDrd_bm_test_and_clear(struct bitmap * const  bm , Addr const   a1 ,
                             Addr const   a2 ) ;
Bool vgDrd_bm_has_conflict_with(struct bitmap * const  bm , Addr const   a1 ,
                                Addr const   a2 ,
                                BmAccessTypeT const   access_type ) ;
Bool vgDrd_bm_load_1_has_conflict_with(struct bitmap * const  bm ,
                                       Addr const   a1 ) ;
Bool vgDrd_bm_load_2_has_conflict_with(struct bitmap * const  bm ,
                                       Addr const   a1 ) ;
Bool vgDrd_bm_load_4_has_conflict_with(struct bitmap * const  bm ,
                                       Addr const   a1 ) ;
Bool vgDrd_bm_load_8_has_conflict_with(struct bitmap * const  bm ,
                                       Addr const   a1 ) ;
Bool vgDrd_bm_load_has_conflict_with(struct bitmap * const  bm ,
                                     Addr const   a1 , Addr const   a2 ) ;
Bool vgDrd_bm_store_1_has_conflict_with(struct bitmap * const  bm ,
                                        Addr const   a1 ) ;
Bool vgDrd_bm_store_2_has_conflict_with(struct bitmap * const  bm ,
                                        Addr const   a1 ) ;
Bool vgDrd_bm_store_4_has_conflict_with(struct bitmap * const  bm ,
                                        Addr const   a1 ) ;
Bool vgDrd_bm_store_8_has_conflict_with(struct bitmap * const  bm ,
                                        Addr const   a1 ) ;
Bool vgDrd_bm_store_has_conflict_with(struct bitmap * const  bm ,
                                      Addr const   a1 , Addr const   a2 ) ;
Bool vgDrd_bm_equal(struct bitmap * const  lhs , struct bitmap * const  rhs ) ;
void vgDrd_bm_swap(struct bitmap * const  bm1 , struct bitmap * const  bm2 ) ;
void vgDrd_bm_merge2(struct bitmap * const  lhs , struct bitmap * const  rhs ) ;
void vgDrd_bm_unmark(struct bitmap *bm ) ;
Bool vgDrd_bm_is_marked(struct bitmap *bm , Addr const   a ) ;
void vgDrd_bm_mark(struct bitmap *bml , struct bitmap *bmr ) ;
void vgDrd_bm_clear_marked(struct bitmap *bm ) ;
void vgDrd_bm_merge2_marked(struct bitmap * const  lhs ,
                            struct bitmap * const  rhs ) ;
void vgDrd_bm_remove_cleared_marked(struct bitmap *bm ) ;
int vgDrd_bm_has_races(struct bitmap * const  lhs , struct bitmap * const  rhs ) ;
extern void vgDrd_bm_report_races(ThreadId const   tid1 ,
                                  ThreadId const   tid2 ,
                                  struct bitmap * const  bm1 ,
                                  struct bitmap * const  bm2 ) ;
void vgDrd_bm_print(struct bitmap * const  bm ) ;
ULong vgDrd_bm_get_bitmap_creation_count(void) ;
ULong vgDrd_bm_get_bitmap2_creation_count(void) ;
ULong vgDrd_bm_get_bitmap2_merge_count(void) ;
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
__inline static UWord address_lsb(Addr const   a ) 
{ 


  {
  return ((UWord )(a & (unsigned long const   )((1UL << 12) - 1UL)));
}
}
__inline static Addr first_address_with_same_lsb(Addr const   a ) 
{ 


  {
  return ((Addr )a);
}
}
__inline static Addr first_address_with_higher_lsb(Addr const   a ) 
{ 


  {
  return ((Addr )(a + 1UL));
}
}
__inline static UWord address_msb(Addr const   a ) 
{ 


  {
  return ((UWord )(a >> 12));
}
}
__inline static Addr first_address_with_higher_msb(Addr const   a ) 
{ 


  {
  return ((Addr )((a | (unsigned long const   )((1UL << 12) - 1UL)) + 1UL));
}
}
__inline static Addr make_address(UWord const   a1 , UWord const   a0 ) 
{ 


  {
  return ((Addr )((a1 << 12) | a0));
}
}
__inline static UWord uword_msb(UWord const   a ) 
{ 


  {
  return ((UWord )(a >> 5));
}
}
__inline static UWord uword_lsb(UWord const   a ) 
{ 


  {
  return ((UWord )(a & (unsigned long const   )((1UL << 5) - 1UL)));
}
}
__inline static Addr first_address_with_same_uword_lsb(Addr const   a ) 
{ 


  {
  return ((Addr )(a & (unsigned long const   )(~ ((1UL << 5) - 1UL))));
}
}
__inline static Addr first_address_with_higher_uword_msb(Addr const   a ) 
{ 


  {
  return ((Addr )((a | (unsigned long const   )((1UL << 5) - 1UL)) + 1UL));
}
}
static ULong s_bitmap2_creation_count  ;
__inline static UWord bm0_mask(UWord const   a ) 
{ 
  UWord tmp ;

  {
  tmp = uword_lsb(a);
  return (1UL << tmp);
}
}
__inline static void bm0_set(UWord *bm0 , UWord const   a ) 
{ 
  UWord tmp ;
  UWord tmp___0 ;

  {
  tmp = uword_msb(a);
  tmp___0 = uword_lsb(a);
  *(bm0 + tmp) |= 1UL << tmp___0;
  return;
}
}
__inline static void bm0_set_range(UWord *bm0 , UWord const   a ,
                                   SizeT const   size ) 
{ 
  UWord tmp ;
  UWord tmp___0 ;

  {
  tmp = uword_msb(a);
  tmp___0 = uword_lsb(a);
  *(bm0 + tmp) |= ((1UL << size) - 1UL) << tmp___0;
  return;
}
}
__inline static void bm0_clear(UWord *bm0 , UWord const   a ) 
{ 
  UWord tmp ;
  UWord tmp___0 ;

  {
  tmp = uword_msb(a);
  tmp___0 = uword_lsb(a);
  *(bm0 + tmp) &= ~ (1UL << tmp___0);
  return;
}
}
__inline static void bm0_clear_range(UWord *bm0 , UWord const   a ,
                                     SizeT const   size ) 
{ 
  UWord tmp ;
  UWord tmp___0 ;

  {
  if (size > 0UL) {
    tmp = uword_msb(a);
    tmp___0 = uword_lsb(a);
    *(bm0 + tmp) &= ~ (((1UL << size) - 1UL) << tmp___0);
  } else {

  }
  return;
}
}
__inline static UWord bm0_is_set(UWord const   *bm0 , UWord const   a ) 
{ 
  UWord tmp ;
  UWord tmp___0 ;

  {
  tmp = uword_msb(a);
  tmp___0 = uword_lsb(a);
  return ((UWord )(*(bm0 + tmp) & (unsigned long const   )(1UL << tmp___0)));
}
}
__inline static UWord bm0_is_any_set(UWord const   *bm0 , Addr const   a ,
                                     SizeT const   size ) 
{ 
  UWord tmp ;
  UWord tmp___0 ;

  {
  tmp = uword_msb(a);
  tmp___0 = uword_lsb(a);
  return ((UWord )(*(bm0 + tmp) & (unsigned long const   )(((1UL << size) - 1UL) << tmp___0)));
}
}
__inline static void bm2_clear(struct bitmap2 * const  bm2 ) ;
__inline static struct bitmap2 *bm2_insert(struct bitmap * const  bm ,
                                           UWord const   a1 ) ;
__inline static void bm_cache_rotate(struct bm_cache_elem *cache ,
                                     int const   n ) 
{ 


  {
  return;
}
}
__inline static Bool bm_cache_lookup(struct bitmap * const  bm ,
                                     UWord const   a1 , struct bitmap2 **bm2 ) 
{ 


  {
  if (a1 == (UWord const   )bm->cache[0].a1) {
    *bm2 = bm->cache[0].bm2;
    return ((Bool )1);
  } else {

  }
  if (a1 == (UWord const   )bm->cache[1].a1) {
    *bm2 = bm->cache[1].bm2;
    return ((Bool )1);
  } else {

  }
  if (a1 == (UWord const   )bm->cache[2].a1) {
    *bm2 = bm->cache[2].bm2;
    bm_cache_rotate(bm->cache, (int const   )3);
    return ((Bool )1);
  } else {

  }
  if (a1 == (UWord const   )bm->cache[3].a1) {
    *bm2 = bm->cache[3].bm2;
    bm_cache_rotate(bm->cache, (int const   )4);
    return ((Bool )1);
  } else {

  }
  *bm2 = (struct bitmap2 *)0;
  return ((Bool )0);
}
}
__inline static void bm_update_cache(struct bitmap * const  bm ,
                                     UWord const   a1 ,
                                     struct bitmap2 * const  bm2 ) 
{ 


  {
  bm->cache[3] = bm->cache[2];
  bm->cache[2] = bm->cache[1];
  bm->cache[1] = bm->cache[0];
  bm->cache[0].a1 = (Addr )a1;
  bm->cache[0].bm2 = (struct bitmap2 *)bm2;
  return;
}
}
__inline static struct bitmap2  const  *bm2_lookup(struct bitmap * const  bm ,
                                                   UWord const   a1 ) 
{ 
  struct bitmap2 *bm2 ;
  void *tmp ;
  Bool tmp___0 ;

  {
  tmp___0 = bm_cache_lookup(bm, a1, & bm2);
  if (tmp___0) {

  } else {
    tmp = vgPlain_OSetGen_Lookup((OSet const   *)bm->oset,
                                 (void const   *)(& a1));
    bm2 = (struct bitmap2 *)tmp;
    bm_update_cache(bm, a1, (struct bitmap2 */* const  */)bm2);
  }
  return ((struct bitmap2  const  *)bm2);
}
}
__inline static struct bitmap2 *bm2_lookup_exclusive(struct bitmap * const  bm ,
                                                     UWord const   a1 ) 
{ 
  struct bitmap2 *bm2 ;
  void *tmp ;
  Bool tmp___0 ;

  {
  tmp___0 = bm_cache_lookup(bm, a1, & bm2);
  if (tmp___0) {

  } else {
    tmp = vgPlain_OSetGen_Lookup((OSet const   *)bm->oset,
                                 (void const   *)(& a1));
    bm2 = (struct bitmap2 *)tmp;
  }
  return (bm2);
}
}
__inline static void bm2_clear(struct bitmap2 * const  bm2 ) 
{ 


  {
  vgPlain_memset((void *)(& bm2->bm1), 0, (SizeT )sizeof(bm2->bm1));
  return;
}
}
__inline static struct bitmap2 *bm2_insert(struct bitmap * const  bm ,
                                           UWord const   a1 ) 
{ 
  struct bitmap2 *bm2 ;
  void *tmp ;

  {
  s_bitmap2_creation_count ++;
  tmp = vgPlain_OSetGen_AllocNode(bm->oset, (SizeT )sizeof(*bm2));
  bm2 = (struct bitmap2 *)tmp;
  bm2->addr = (Addr )a1;
  vgPlain_OSetGen_Insert(bm->oset, (void *)bm2);
  bm_update_cache(bm, a1, (struct bitmap2 */* const  */)bm2);
  return (bm2);
}
}
__inline static struct bitmap2 *bm2_insert_copy(struct bitmap * const  bm ,
                                                struct bitmap2 * const  bm2 ) 
{ 
  struct bitmap2 *bm2_copy ;

  {
  bm2_copy = bm2_insert(bm, (UWord const   )bm2->addr);
  vgPlain_memcpy((void *)(& bm2_copy->bm1), (void const   *)(& bm2->bm1),
                 (SizeT )sizeof(bm2->bm1));
  return (bm2_copy);
}
}
__inline static struct bitmap2 *bm2_lookup_or_insert(struct bitmap * const  bm ,
                                                     UWord const   a1 ) 
{ 
  struct bitmap2 *bm2 ;
  void *tmp ;
  Bool tmp___0 ;

  {
  tmp___0 = bm_cache_lookup(bm, a1, & bm2);
  if (tmp___0) {
    if ((unsigned int )bm2 == (unsigned int )((struct bitmap2 *)0)) {
      bm2 = bm2_insert(bm, a1);
      bm2_clear((struct bitmap2 */* const  */)bm2);
    } else {

    }
  } else {
    tmp = vgPlain_OSetGen_Lookup((OSet const   *)bm->oset,
                                 (void const   *)(& a1));
    bm2 = (struct bitmap2 *)tmp;
    if (! bm2) {
      bm2 = bm2_insert(bm, a1);
      bm2_clear((struct bitmap2 */* const  */)bm2);
    } else {

    }
    bm_update_cache(bm, a1, (struct bitmap2 */* const  */)bm2);
  }
  return (bm2);
}
}
__inline static struct bitmap2 *bm2_lookup_or_insert_exclusive(struct bitmap * const  bm ,
                                                               UWord const   a1 ) 
{ 
  struct bitmap2 *tmp ;

  {
  tmp = bm2_lookup_or_insert(bm, a1);
  return (tmp);
}
}
__inline static void bm2_remove(struct bitmap * const  bm , UWord const   a1 ) 
{ 
  struct bitmap2 *bm2 ;
  void *tmp ;

  {
  tmp = vgPlain_OSetGen_Remove(bm->oset, (void const   *)(& a1));
  bm2 = (struct bitmap2 *)tmp;
  vgPlain_OSetGen_FreeNode(bm->oset, (void *)bm2);
  bm_update_cache(bm, a1, (struct bitmap2 */* const  */)((void *)0));
  return;
}
}
__inline static void bm_access_aligned_load(struct bitmap * const  bm ,
                                            Addr const   a1 ,
                                            SizeT const   size ) 
{ 
  struct bitmap2 *bm2 ;
  UWord tmp ;

  {
  tmp = address_msb(a1);
  bm2 = bm2_lookup_or_insert_exclusive(bm, (UWord const   )tmp);
  {
  if (1UL << 12 < 2) {
    return;
  }
  if (size < 2) {
    return;
  }
  bm0_set_range(bm2->bm1.bm0_r,
                a1 & (unsigned long const   )((1UL << 12) - 1UL),
                (size - 1UL) + 1UL);
  }
  return;
}
}
__inline static void bm_access_aligned_store(struct bitmap * const  bm ,
                                             Addr const   a1 ,
                                             SizeT const   size ) 
{ 
  struct bitmap2 *bm2 ;
  UWord tmp ;

  {
  tmp = address_msb(a1);
  bm2 = bm2_lookup_or_insert_exclusive(bm, (UWord const   )tmp);
  {
  if (1UL << 12 < 2) {
    return;
  }
  if (size < 2) {
    return;
  }
  bm0_set_range(bm2->bm1.bm0_w,
                a1 & (unsigned long const   )((1UL << 12) - 1UL),
                (size - 1UL) + 1UL);
  }
  return;
}
}
__inline static Bool bm_aligned_load_has_conflict_with(struct bitmap * const  bm ,
                                                       Addr const   a ,
                                                       SizeT const   size ) 
{ 
  struct bitmap2  const  *bm2 ;
  UWord tmp ;
  UWord tmp___0 ;
  UWord tmp___1 ;
  int tmp___2 ;

  {
  tmp = address_msb(a);
  bm2 = bm2_lookup(bm, (UWord const   )tmp);
  if (bm2) {
    tmp___0 = address_lsb(a);
    tmp___1 = bm0_is_any_set((UWord const   *)(bm2->bm1.bm0_w),
                             (Addr const   )tmp___0, (size - 1UL) + 1UL);
    if (tmp___1) {
      tmp___2 = 1;
    } else {
      tmp___2 = 0;
    }
  } else {
    tmp___2 = 0;
  }
  return ((Bool )tmp___2);
}
}
__inline static Bool bm_aligned_store_has_conflict_with(struct bitmap * const  bm ,
                                                        Addr const   a ,
                                                        SizeT const   size ) 
{ 
  struct bitmap2  const  *bm2 ;
  UWord tmp ;
  UWord tmp___0 ;
  UWord tmp___1 ;
  UWord tmp___2 ;
  UWord tmp___3 ;

  {
  tmp = address_msb(a);
  bm2 = bm2_lookup(bm, (UWord const   )tmp);
  if (bm2) {
    tmp___0 = address_lsb(a);
    tmp___1 = bm0_is_any_set((UWord const   *)(bm2->bm1.bm0_r),
                             (Addr const   )tmp___0, (size - 1UL) + 1UL);
    tmp___2 = address_lsb(a);
    tmp___3 = bm0_is_any_set((UWord const   *)(bm2->bm1.bm0_w),
                             (Addr const   )tmp___2, (size - 1UL) + 1UL);
    if (tmp___1 | tmp___3) {
      return ((Bool )1);
    } else {

    }
  } else {

  }
  return ((Bool )0);
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
void vgDrd_vc_init(VectorClock * const  vc , VCElem const   * const  vcelem ,
                   unsigned int const   size ) ;
void vgDrd_vc_cleanup(VectorClock * const  vc ) ;
void vgDrd_vc_copy(VectorClock * const  new , VectorClock const   * const  rhs ) ;
void vgDrd_vc_assign(VectorClock * const  lhs ,
                     VectorClock const   * const  rhs ) ;
void vgDrd_vc_increment(VectorClock * const  vc , DrdThreadId const   tid ) ;
__inline static Bool vgDrd_vc_lte(VectorClock const   * const  vc1 ,
                                  VectorClock const   * const  vc2 ) ;
Bool vgDrd_vc_ordered(VectorClock const   * const  vc1 ,
                      VectorClock const   * const  vc2 ) ;
void vgDrd_vc_min(VectorClock * const  result ,
                  VectorClock const   * const  rhs ) ;
void vgDrd_vc_combine(VectorClock * const  result ,
                      VectorClock const   * const  rhs ) ;
void vgDrd_vc_print(VectorClock const   * const  vc ) ;
char *vgDrd_vc_aprint(VectorClock const   * const  vc ) ;
void vgDrd_vc_check(VectorClock const   * const  vc ) ;
extern void vgDrd_vc_test(void) ;
__inline static Bool vgDrd_vc_lte(VectorClock const   * const  vc1 ,
                                  VectorClock const   * const  vc2 ) 
{ 
  unsigned int i ;
  unsigned int j ;

  {
  j = 0U;
  i = 0U;
  while (i < (unsigned int )vc1->size) {
    while (1) {
      if (j < (unsigned int )vc2->size) {
        if ((vc2->vc + j)->threadid < (vc1->vc + i)->threadid) {

        } else {
          break;
        }
      } else {
        break;
      }
      j ++;
    }
    if (j >= (unsigned int )vc2->size) {
      return ((Bool )0);
    } else
    if ((vc2->vc + j)->threadid > (vc1->vc + i)->threadid) {
      return ((Bool )0);
    } else {

    }
    if ((vc1->vc + i)->count > (vc2->vc + j)->count) {
      return ((Bool )0);
    } else {

    }
    i ++;
  }
  return ((Bool )1);
}
}
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
extern UInt vgPlain_get_StackTrace(ThreadId tid , StackTrace ips , UInt n_ips ,
                                   StackTrace sps , StackTrace fps ,
                                   Word first_ip_delta ) ;
extern void vgPlain_apply_StackTrace(void (*action)(UInt n , Addr ip ,
                                                    void *opaque ) ,
                                     void *opaque , StackTrace ips , UInt n_ips ) ;
extern void vgPlain_pp_StackTrace(StackTrace ips , UInt n_ips ) ;
extern void vgPlain_get_and_pp_StackTrace(ThreadId tid , UInt n_ips ) ;
Segment *vgDrd_g_sg_list  ;
Segment *vgDrd_sg_new(DrdThreadId const   creator , DrdThreadId const   created ) ;
__inline static int vgDrd_sg_get_refcnt(Segment const   * const  sg ) ;
Segment *vgDrd_sg_get(Segment * const  sg ) ;
void vgDrd_sg_put(Segment * const  sg ) ;
__inline static struct bitmap *vgDrd_sg_bm(Segment * const  sg ) ;
void vgDrd_sg_merge(Segment * const  sg1 , Segment * const  sg2 ) ;
void vgDrd_sg_print(Segment * const  sg ) ;
Bool vgDrd_sg_get_trace(void) ;
void vgDrd_sg_set_trace(Bool const   trace_segment ) ;
ULong vgDrd_sg_get_segments_created_count(void) ;
ULong vgDrd_sg_get_segments_alive_count(void) ;
ULong vgDrd_sg_get_max_segments_alive_count(void) ;
ULong vgDrd_sg_get_segment_merge_count(void) ;
__inline static int vgDrd_sg_get_refcnt(Segment const   * const  sg ) 
{ 


  {
  return ((int )sg->refcnt);
}
}
__inline static struct bitmap *vgDrd_sg_bm(Segment * const  sg ) 
{ 


  {
  return (& sg->bm);
}
}
extern ThreadId vgPlain_get_running_tid(void) ;
DrdThreadId vgDrd_g_drd_running_tid ;
ThreadInfo vgDrd_g_threadinfo[500]  ;
struct bitmap *vgDrd_g_conflict_set  ;
void vgDrd_thread_trace_context_switches(Bool const   t ) ;
void vgDrd_thread_trace_conflict_set(Bool const   t ) ;
void vgDrd_thread_trace_conflict_set_bm(Bool const   t ) ;
Bool vgDrd_thread_get_trace_fork_join(void) ;
void vgDrd_thread_set_trace_fork_join(Bool const   t ) ;
void vgDrd_thread_set_segment_merging(Bool const   m ) ;
int vgDrd_thread_get_segment_merge_interval(void) ;
void vgDrd_thread_set_segment_merge_interval(int const   i ) ;
void vgDrd_thread_set_join_list_vol(int const   jlv ) ;
void vgDrd_thread_init(void) ;
DrdThreadId vgDrd_VgThreadIdToDrdThreadId(ThreadId const   tid ) ;
extern DrdThreadId vgDrd_NewVgThreadIdToDrdThreadId(ThreadId const   tid ) ;
DrdThreadId vgDrd_PtThreadIdToDrdThreadId(PThreadId const   tid ) ;
ThreadId vgDrd_DrdThreadIdToVgThreadId(DrdThreadId const   tid ) ;
DrdThreadId vgDrd_thread_pre_create(DrdThreadId const   creator ,
                                    ThreadId const   vg_created ) ;
DrdThreadId vgDrd_thread_post_create(ThreadId const   vg_created ) ;
void vgDrd_thread_post_join(DrdThreadId drd_joiner , DrdThreadId drd_joinee ) ;
void vgDrd_thread_delete(DrdThreadId const   tid , Bool const   detached ) ;
void vgDrd_thread_finished(DrdThreadId const   tid ) ;
void vgDrd_drd_thread_atfork_child(DrdThreadId const   tid ) ;
void vgDrd_thread_pre_cancel(DrdThreadId const   tid ) ;
void vgDrd_thread_set_stack_startup(DrdThreadId const   tid ,
                                    Addr const   stack_startup ) ;
Addr vgDrd_thread_get_stack_min(DrdThreadId const   tid ) ;
Addr vgDrd_thread_get_stack_min_min(DrdThreadId const   tid ) ;
Addr vgDrd_thread_get_stack_max(DrdThreadId const   tid ) ;
SizeT vgDrd_thread_get_stack_size(DrdThreadId const   tid ) ;
Bool vgDrd_thread_get_on_alt_stack(DrdThreadId const   tid ) ;
void vgDrd_thread_set_on_alt_stack(DrdThreadId const   tid ,
                                   Bool const   on_alt_stack ) ;
Int vgDrd_thread_get_threads_on_alt_stack(void) ;
void vgDrd_thread_set_pthreadid(DrdThreadId const   tid ,
                                PThreadId const   ptid ) ;
Bool vgDrd_thread_get_joinable(DrdThreadId const   tid ) ;
void vgDrd_thread_set_joinable(DrdThreadId const   tid , Bool const   joinable ) ;
void vgDrd_thread_entering_pthread_create(DrdThreadId const   tid ) ;
void vgDrd_thread_left_pthread_create(DrdThreadId const   tid ) ;
char const   *vgDrd_thread_get_name(DrdThreadId const   tid ) ;
void vgDrd_thread_set_name(DrdThreadId const   tid , char const   * const  name ) ;
void vgDrd_thread_set_vg_running_tid(ThreadId const   vg_tid ) ;
void vgDrd_thread_set_running_tid(ThreadId const   vg_tid ,
                                  DrdThreadId const   drd_tid ) ;
int vgDrd_thread_enter_synchr(DrdThreadId const   tid ) ;
int vgDrd_thread_leave_synchr(DrdThreadId const   tid ) ;
int vgDrd_thread_get_synchr_nesting_count(DrdThreadId const   tid ) ;
void vgDrd_thread_new_segment(DrdThreadId const   tid ) ;
VectorClock *vgDrd_thread_get_vc(DrdThreadId const   tid ) ;
void vgDrd_thread_get_latest_segment(Segment **sg , DrdThreadId const   tid ) ;
void vgDrd_thread_combine_vc_join(DrdThreadId const   joiner ,
                                  DrdThreadId const   joinee ) ;
void vgDrd_thread_new_segment_and_combine_vc(DrdThreadId tid ,
                                             Segment const   *sg ) ;
void vgDrd_thread_update_conflict_set(DrdThreadId const   tid ,
                                      VectorClock const   * const  old_vc ) ;
void vgDrd_thread_stop_using_mem(Addr const   a1 , Addr const   a2 ) ;
void vgDrd_thread_set_record_loads(DrdThreadId const   tid ,
                                   Bool const   enabled ) ;
void vgDrd_thread_set_record_stores(DrdThreadId const   tid ,
                                    Bool const   enabled ) ;
void vgDrd_thread_print_all(void) ;
extern void vgDrd_thread_report_races(DrdThreadId const   tid ) ;
extern void vgDrd_thread_report_races_segment(DrdThreadId const   tid ,
                                              Segment const   * const  p ) ;
extern void vgDrd_thread_report_all_races(void) ;
void vgDrd_thread_report_conflicting_segments(DrdThreadId const   tid ,
                                              Addr const   addr ,
                                              SizeT const   size ,
                                              BmAccessTypeT const   access_type ) ;
ULong vgDrd_thread_get_context_switch_count(void) ;
extern ULong vgDrd_thread_get_report_races_count(void) ;
ULong vgDrd_thread_get_discard_ordered_segments_count(void) ;
ULong vgDrd_thread_get_compute_conflict_set_count(void) ;
ULong vgDrd_thread_get_update_conflict_set_count(void) ;
ULong vgDrd_thread_get_update_conflict_set_new_sg_count(void) ;
ULong vgDrd_thread_get_update_conflict_set_sync_count(void) ;
ULong vgDrd_thread_get_update_conflict_set_join_count(void) ;
ULong vgDrd_thread_get_conflict_set_bitmap_creation_count(void) ;
ULong vgDrd_thread_get_conflict_set_bitmap2_creation_count(void) ;
__inline static Bool vgDrd_IsValidDrdThreadId(DrdThreadId const   tid ) 
{ 
  int tmp ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
        if (vgDrd_g_threadinfo[tid].valid) {
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
  } else {
    tmp = 0;
  }
  return ((Bool )tmp);
}
}
__inline static DrdThreadId vgDrd_thread_get_running_tid(void) 
{ 


  {
  return (vgDrd_g_drd_running_tid);
}
}
__inline static struct bitmap *vgDrd_thread_get_conflict_set(void) 
{ 


  {
  return (vgDrd_g_conflict_set);
}
}
__inline static Bool vgDrd_running_thread_inside_pthread_create(void) 
{ 


  {
  return ((Bool )(vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].pthread_create_nesting_level > 0));
}
}
__inline static Bool vgDrd_running_thread_is_recording_loads(void) 
{ 
  int tmp ;

  {
  if (vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].synchr_nesting == 0) {
    if (vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].is_recording_loads) {
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
__inline static Bool vgDrd_running_thread_is_recording_stores(void) 
{ 
  int tmp ;

  {
  if (vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].synchr_nesting == 0) {
    if (vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].is_recording_stores) {
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
__inline static void vgDrd_thread_set_stack_min(DrdThreadId const   tid ,
                                                Addr const   stack_min ) 
{ 
  long tmp ;

  {
  vgDrd_g_threadinfo[tid].stack_min = (Addr )stack_min;
  tmp = __builtin_expect((long )(! (! (stack_min < (Addr const   )vgDrd_g_threadinfo[tid].stack_min_min))),
                         0L);
  if (tmp) {
    vgDrd_g_threadinfo[tid].stack_min_min = (Addr )stack_min;
  } else {

  }
  return;
}
}
__inline static Bool vgDrd_thread_address_on_stack(Addr const   a ) 
{ 
  int tmp ;

  {
  if (vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].stack_min <= (Addr )a) {
    if (a < (Addr const   )vgDrd_g_threadinfo[vgDrd_g_drd_running_tid].stack_max) {
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
__inline static Bool vgDrd_thread_address_on_any_stack(Addr const   a ) 
{ 
  int i ;

  {
  i = 1;
  while (i < 500) {
    if (vgDrd_g_threadinfo[i].vg_thread_exists) {
      if (vgDrd_g_threadinfo[i].stack_min <= (Addr )a) {
        if (a < (Addr const   )vgDrd_g_threadinfo[i].stack_max) {
          return ((Bool )1);
        } else {

        }
      } else {

      }
    } else {

    }
    i ++;
  }
  return ((Bool )0);
}
}
__inline static Segment *vgDrd_thread_get_segment(DrdThreadId const   tid ) 
{ 


  {
  return (vgDrd_g_threadinfo[tid].sg_last);
}
}
__inline static Segment *vgDrd_running_thread_get_segment(void) 
{ 
  Segment *tmp ;

  {
  tmp = vgDrd_thread_get_segment((DrdThreadId const   )vgDrd_g_drd_running_tid);
  return (tmp);
}
}
__inline static Bool bm_access_load_1_triggers_conflict(Addr const   a1 ) 
{ 
  Segment *tmp ;
  struct bitmap *tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_get_segment();
  tmp___0 = vgDrd_sg_bm((Segment */* const  */)tmp);
  vgDrd_bm_access_load_1((struct bitmap */* const  */)tmp___0, a1);
  tmp___1 = vgDrd_thread_get_conflict_set();
  tmp___2 = vgDrd_bm_load_1_has_conflict_with((struct bitmap */* const  */)tmp___1,
                                              a1);
  return (tmp___2);
}
}
__inline static Bool bm_access_load_2_triggers_conflict(Addr const   a1 ) 
{ 
  Segment *tmp ;
  struct bitmap *tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;
  Segment *tmp___3 ;
  struct bitmap *tmp___4 ;
  struct bitmap *tmp___5 ;
  Bool tmp___6 ;

  {
  if ((a1 & 1UL) == 0UL) {
    tmp = vgDrd_running_thread_get_segment();
    tmp___0 = vgDrd_sg_bm((Segment */* const  */)tmp);
    bm_access_aligned_load((struct bitmap */* const  */)tmp___0, a1,
                           (SizeT const   )2);
    tmp___1 = vgDrd_thread_get_conflict_set();
    tmp___2 = bm_aligned_load_has_conflict_with((struct bitmap */* const  */)tmp___1,
                                                a1, (SizeT const   )2);
    return (tmp___2);
  } else {
    tmp___3 = vgDrd_running_thread_get_segment();
    tmp___4 = vgDrd_sg_bm((Segment */* const  */)tmp___3);
    vgDrd_bm_access_range((struct bitmap */* const  */)tmp___4, a1, a1 + 2UL,
                          (BmAccessTypeT const   )0);
    tmp___5 = vgDrd_thread_get_conflict_set();
    tmp___6 = vgDrd_bm_has_conflict_with((struct bitmap */* const  */)tmp___5,
                                         a1, a1 + 2UL, (BmAccessTypeT const   )0);
    return (tmp___6);
  }
}
}
__inline static Bool bm_access_load_4_triggers_conflict(Addr const   a1 ) 
{ 
  Segment *tmp ;
  struct bitmap *tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;
  Segment *tmp___3 ;
  struct bitmap *tmp___4 ;
  struct bitmap *tmp___5 ;
  Bool tmp___6 ;

  {
  if ((a1 & 3UL) == 0UL) {
    tmp = vgDrd_running_thread_get_segment();
    tmp___0 = vgDrd_sg_bm((Segment */* const  */)tmp);
    bm_access_aligned_load((struct bitmap */* const  */)tmp___0, a1,
                           (SizeT const   )4);
    tmp___1 = vgDrd_thread_get_conflict_set();
    tmp___2 = bm_aligned_load_has_conflict_with((struct bitmap */* const  */)tmp___1,
                                                a1, (SizeT const   )4);
    return (tmp___2);
  } else {
    tmp___3 = vgDrd_running_thread_get_segment();
    tmp___4 = vgDrd_sg_bm((Segment */* const  */)tmp___3);
    vgDrd_bm_access_range((struct bitmap */* const  */)tmp___4, a1, a1 + 4UL,
                          (BmAccessTypeT const   )0);
    tmp___5 = vgDrd_thread_get_conflict_set();
    tmp___6 = vgDrd_bm_has_conflict_with((struct bitmap */* const  */)tmp___5,
                                         a1, a1 + 4UL, (BmAccessTypeT const   )0);
    return (tmp___6);
  }
}
}
__inline static Bool bm_access_load_8_triggers_conflict(Addr const   a1 ) 
{ 
  Segment *tmp ;
  struct bitmap *tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;
  Segment *tmp___3 ;
  struct bitmap *tmp___4 ;
  Segment *tmp___5 ;
  struct bitmap *tmp___6 ;
  struct bitmap *tmp___7 ;
  Bool tmp___8 ;
  Segment *tmp___9 ;
  struct bitmap *tmp___10 ;
  struct bitmap *tmp___11 ;
  Bool tmp___12 ;

  {
  if ((a1 & 7UL) == 0UL) {
    tmp = vgDrd_running_thread_get_segment();
    tmp___0 = vgDrd_sg_bm((Segment */* const  */)tmp);
    bm_access_aligned_load((struct bitmap */* const  */)tmp___0, a1,
                           (SizeT const   )8);
    tmp___1 = vgDrd_thread_get_conflict_set();
    tmp___2 = bm_aligned_load_has_conflict_with((struct bitmap */* const  */)tmp___1,
                                                a1, (SizeT const   )8);
    return (tmp___2);
  } else
  if ((a1 & 3UL) == 0UL) {
    tmp___3 = vgDrd_running_thread_get_segment();
    tmp___4 = vgDrd_sg_bm((Segment */* const  */)tmp___3);
    bm_access_aligned_load((struct bitmap */* const  */)tmp___4, a1,
                           (SizeT const   )4);
    tmp___5 = vgDrd_running_thread_get_segment();
    tmp___6 = vgDrd_sg_bm((Segment */* const  */)tmp___5);
    bm_access_aligned_load((struct bitmap */* const  */)tmp___6, a1 + 4UL,
                           (SizeT const   )4);
    tmp___7 = vgDrd_thread_get_conflict_set();
    tmp___8 = vgDrd_bm_has_conflict_with((struct bitmap */* const  */)tmp___7,
                                         a1, a1 + 8UL, (BmAccessTypeT const   )0);
    return (tmp___8);
  } else {
    tmp___9 = vgDrd_running_thread_get_segment();
    tmp___10 = vgDrd_sg_bm((Segment */* const  */)tmp___9);
    vgDrd_bm_access_range((struct bitmap */* const  */)tmp___10, a1, a1 + 8UL,
                          (BmAccessTypeT const   )0);
    tmp___11 = vgDrd_thread_get_conflict_set();
    tmp___12 = vgDrd_bm_has_conflict_with((struct bitmap */* const  */)tmp___11,
                                          a1, a1 + 8UL,
                                          (BmAccessTypeT const   )0);
    return (tmp___12);
  }
}
}
__inline static Bool bm_access_load_triggers_conflict(Addr const   a1 ,
                                                      Addr const   a2 ) 
{ 
  Segment *tmp ;
  struct bitmap *tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_get_segment();
  tmp___0 = vgDrd_sg_bm((Segment */* const  */)tmp);
  vgDrd_bm_access_range_load((struct bitmap */* const  */)tmp___0, a1, a2);
  tmp___1 = vgDrd_thread_get_conflict_set();
  tmp___2 = vgDrd_bm_load_has_conflict_with((struct bitmap */* const  */)tmp___1,
                                            a1, a2);
  return (tmp___2);
}
}
__inline static Bool bm_access_store_1_triggers_conflict(Addr const   a1 ) 
{ 
  Segment *tmp ;
  struct bitmap *tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_get_segment();
  tmp___0 = vgDrd_sg_bm((Segment */* const  */)tmp);
  vgDrd_bm_access_store_1((struct bitmap */* const  */)tmp___0, a1);
  tmp___1 = vgDrd_thread_get_conflict_set();
  tmp___2 = vgDrd_bm_store_1_has_conflict_with((struct bitmap */* const  */)tmp___1,
                                               a1);
  return (tmp___2);
}
}
__inline static Bool bm_access_store_2_triggers_conflict(Addr const   a1 ) 
{ 
  Segment *tmp ;
  struct bitmap *tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;
  Segment *tmp___3 ;
  struct bitmap *tmp___4 ;
  struct bitmap *tmp___5 ;
  Bool tmp___6 ;

  {
  if ((a1 & 1UL) == 0UL) {
    tmp = vgDrd_running_thread_get_segment();
    tmp___0 = vgDrd_sg_bm((Segment */* const  */)tmp);
    bm_access_aligned_store((struct bitmap */* const  */)tmp___0, a1,
                            (SizeT const   )2);
    tmp___1 = vgDrd_thread_get_conflict_set();
    tmp___2 = bm_aligned_store_has_conflict_with((struct bitmap */* const  */)tmp___1,
                                                 a1, (SizeT const   )2);
    return (tmp___2);
  } else {
    tmp___3 = vgDrd_running_thread_get_segment();
    tmp___4 = vgDrd_sg_bm((Segment */* const  */)tmp___3);
    vgDrd_bm_access_range((struct bitmap */* const  */)tmp___4, a1, a1 + 2UL,
                          (BmAccessTypeT const   )1);
    tmp___5 = vgDrd_thread_get_conflict_set();
    tmp___6 = vgDrd_bm_has_conflict_with((struct bitmap */* const  */)tmp___5,
                                         a1, a1 + 2UL, (BmAccessTypeT const   )1);
    return (tmp___6);
  }
}
}
__inline static Bool bm_access_store_4_triggers_conflict(Addr const   a1 ) 
{ 
  Segment *tmp ;
  struct bitmap *tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;
  Segment *tmp___3 ;
  struct bitmap *tmp___4 ;
  struct bitmap *tmp___5 ;
  Bool tmp___6 ;

  {
  if ((a1 & 3UL) == 0UL) {
    tmp = vgDrd_running_thread_get_segment();
    tmp___0 = vgDrd_sg_bm((Segment */* const  */)tmp);
    bm_access_aligned_store((struct bitmap */* const  */)tmp___0, a1,
                            (SizeT const   )4);
    tmp___1 = vgDrd_thread_get_conflict_set();
    tmp___2 = bm_aligned_store_has_conflict_with((struct bitmap */* const  */)tmp___1,
                                                 a1, (SizeT const   )4);
    return (tmp___2);
  } else {
    tmp___3 = vgDrd_running_thread_get_segment();
    tmp___4 = vgDrd_sg_bm((Segment */* const  */)tmp___3);
    vgDrd_bm_access_range((struct bitmap */* const  */)tmp___4, a1, a1 + 4UL,
                          (BmAccessTypeT const   )1);
    tmp___5 = vgDrd_thread_get_conflict_set();
    tmp___6 = vgDrd_bm_has_conflict_with((struct bitmap */* const  */)tmp___5,
                                         a1, a1 + 4UL, (BmAccessTypeT const   )1);
    return (tmp___6);
  }
}
}
__inline static Bool bm_access_store_8_triggers_conflict(Addr const   a1 ) 
{ 
  Segment *tmp ;
  struct bitmap *tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;
  Segment *tmp___3 ;
  struct bitmap *tmp___4 ;
  Segment *tmp___5 ;
  struct bitmap *tmp___6 ;
  struct bitmap *tmp___7 ;
  Bool tmp___8 ;
  Segment *tmp___9 ;
  struct bitmap *tmp___10 ;
  struct bitmap *tmp___11 ;
  Bool tmp___12 ;

  {
  if ((a1 & 7UL) == 0UL) {
    tmp = vgDrd_running_thread_get_segment();
    tmp___0 = vgDrd_sg_bm((Segment */* const  */)tmp);
    bm_access_aligned_store((struct bitmap */* const  */)tmp___0, a1,
                            (SizeT const   )8);
    tmp___1 = vgDrd_thread_get_conflict_set();
    tmp___2 = bm_aligned_store_has_conflict_with((struct bitmap */* const  */)tmp___1,
                                                 a1, (SizeT const   )8);
    return (tmp___2);
  } else
  if ((a1 & 3UL) == 0UL) {
    tmp___3 = vgDrd_running_thread_get_segment();
    tmp___4 = vgDrd_sg_bm((Segment */* const  */)tmp___3);
    bm_access_aligned_store((struct bitmap */* const  */)tmp___4, a1,
                            (SizeT const   )4);
    tmp___5 = vgDrd_running_thread_get_segment();
    tmp___6 = vgDrd_sg_bm((Segment */* const  */)tmp___5);
    bm_access_aligned_store((struct bitmap */* const  */)tmp___6, a1 + 4UL,
                            (SizeT const   )4);
    tmp___7 = vgDrd_thread_get_conflict_set();
    tmp___8 = vgDrd_bm_has_conflict_with((struct bitmap */* const  */)tmp___7,
                                         a1, a1 + 8UL, (BmAccessTypeT const   )1);
    return (tmp___8);
  } else {
    tmp___9 = vgDrd_running_thread_get_segment();
    tmp___10 = vgDrd_sg_bm((Segment */* const  */)tmp___9);
    vgDrd_bm_access_range((struct bitmap */* const  */)tmp___10, a1, a1 + 8UL,
                          (BmAccessTypeT const   )1);
    tmp___11 = vgDrd_thread_get_conflict_set();
    tmp___12 = vgDrd_bm_has_conflict_with((struct bitmap */* const  */)tmp___11,
                                          a1, a1 + 8UL,
                                          (BmAccessTypeT const   )1);
    return (tmp___12);
  }
}
}
__inline static Bool bm_access_store_triggers_conflict(Addr const   a1 ,
                                                       Addr const   a2 ) 
{ 
  Segment *tmp ;
  struct bitmap *tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_get_segment();
  tmp___0 = vgDrd_sg_bm((Segment */* const  */)tmp);
  vgDrd_bm_access_range_store((struct bitmap */* const  */)tmp___0, a1, a2);
  tmp___1 = vgDrd_thread_get_conflict_set();
  tmp___2 = vgDrd_bm_store_has_conflict_with((struct bitmap */* const  */)tmp___1,
                                             a1, a2);
  return (tmp___2);
}
}
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
extern void vgDrd_set_show_conflicting_segments(Bool const   scs ) ;
extern void vgDrd_register_error_handlers(void) ;
extern void ( /* format attribute */  vgDrd_trace_msg)(char const   *format 
                                                       , ...) ;
extern void ( /* format attribute */  vgDrd_trace_msg_w_bt)(char const   *format 
                                                            , ...) ;
extern Bool vgDrd_g_any_address_traced ;
extern void vgDrd_suppression_set_trace(Bool const   trace_suppression ) ;
extern void vgDrd_suppression_init(void) ;
extern void vgDrd_start_suppression(Addr const   a1 , Addr const   a2 ,
                                    char const   * const  reason ) ;
extern void vgDrd_finish_suppression(Addr const   a1 , Addr const   a2 ) ;
extern Bool vgDrd_is_suppressed(Addr const   a1 , Addr const   a2 ) ;
extern Bool vgDrd_is_any_suppressed(Addr const   a1 , Addr const   a2 ) ;
extern void vgDrd_mark_hbvar(Addr const   a1 ) ;
extern Bool vgDrd_range_contains_suppression_or_hbvar(Addr const   a1 ,
                                                      Addr const   a2 ) ;
extern void vgDrd_start_tracing_address_range(Addr const   a1 ,
                                              Addr const   a2 ,
                                              Bool const   persistent ) ;
extern void vgDrd_stop_tracing_address_range(Addr const   a1 , Addr const   a2 ) ;
extern Bool vgDrd_is_any_traced(Addr const   a1 , Addr const   a2 ) ;
extern void vgDrd_suppression_stop_using_mem(Addr const   a1 , Addr const   a2 ) ;
__inline static Bool vgDrd_any_address_is_traced(void) 
{ 


  {
  return (vgDrd_g_any_address_traced);
}
}
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
extern void *vgPlain_malloc(HChar *cc , SizeT nbytes ) ;
extern void vgPlain_free(void *p ) ;
extern void *vgPlain_calloc(HChar *cc , SizeT n , SizeT bytes_per_elem ) ;
extern void *vgPlain_realloc(HChar *cc , void *p , SizeT size ) ;
extern Char *vgPlain_strdup(HChar *cc , Char const   *s ) ;
extern SizeT vgPlain_malloc_usable_size(void *p ) ;
extern  __attribute__((__noreturn__)) void vgPlain_out_of_memory_NORETURN(HChar *who ,
                                                                          SizeT szB ) ;
static void bm2_merge(struct bitmap2 * const  bm2l ,
                      struct bitmap2  const  * const  bm2r ) ;
static void bm2_print(struct bitmap2  const  * const  bm2 ) ;
static OSet *s_bm2_set_template  ;
static ULong s_bitmap_creation_count  ;
static ULong s_bitmap_merge_count  ;
static ULong s_bitmap2_merge_count  ;
void vgDrd_bm_module_init(void) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! (! s_bm2_set_template))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"!s_bm2_set_template",
                        (Char const   *)"drd_bitmap.c", 58,
                        (Char const   *)"vgDrd_bm_module_init", "");
  }
  s_bm2_set_template = vgPlain_OSetGen_Create_With_Pool((PtrdiffT )0,
                                                        (Word (*)(void const   *key ,
                                                                  void const   *elem ))0,
                                                        & vgPlain_malloc,
                                                        (HChar *)"drd.bitmap.bn.2",
                                                        & vgPlain_free,
                                                        (SizeT )512,
                                                        (SizeT )sizeof(struct bitmap2 ));
  return;
}
}
void vgDrd_bm_module_cleanup(void) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! s_bm2_set_template)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"s_bm2_set_template",
                        (Char const   *)"drd_bitmap.c", 66,
                        (Char const   *)"vgDrd_bm_module_cleanup", "");
  }
  vgPlain_OSetGen_Destroy(s_bm2_set_template);
  s_bm2_set_template = (OSet *)((void *)0);
  return;
}
}
struct bitmap *vgDrd_bm_new(void) 
{ 
  struct bitmap *bm ;
  long tmp ;
  void *tmp___0 ;

  {
  tmp = __builtin_expect((long )(! (! ((unsigned int )(1 << 5) == 8U * sizeof(UWord )))),
                         1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"(1 << BITS_PER_BITS_PER_UWORD) == BITS_PER_UWORD",
                        (Char const   *)"drd_bitmap.c", 77,
                        (Char const   *)"vgDrd_bm_new", "");
  }
  tmp___0 = vgPlain_malloc((HChar *)"drd.bitmap.bn.1", (SizeT )sizeof(*bm));
  bm = (struct bitmap *)tmp___0;
  vgDrd_bm_init((struct bitmap */* const  */)bm);
  return (bm);
}
}
void vgDrd_bm_delete(struct bitmap * const  bm ) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 87,
                        (Char const   *)"vgDrd_bm_delete", "");
  }
  vgDrd_bm_cleanup(bm);
  vgPlain_free((void *)bm);
  return;
}
}
void vgDrd_bm_init(struct bitmap * const  bm ) 
{ 
  unsigned int i ;
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 98,
                        (Char const   *)"vgDrd_bm_init", "");
  }
  i = 0U;
  while (i < 4U) {
    bm->cache[i].a1 = ~ ((UWord )1);
    bm->cache[i].bm2 = (struct bitmap2 *)0;
    i ++;
  }
  bm->oset = vgPlain_OSetGen_EmptyClone(s_bm2_set_template);
  s_bitmap_creation_count ++;
  return;
}
}
void vgDrd_bm_cleanup(struct bitmap * const  bm ) 
{ 


  {
  vgPlain_OSetGen_Destroy(bm->oset);
  return;
}
}
void vgDrd_bm_access_range(struct bitmap * const  bm , Addr const   a1 ,
                           Addr const   a2 , BmAccessTypeT const   access_type ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if ((unsigned int const   )access_type == 0U) {
    tmp = 1;
  } else
  if ((unsigned int const   )access_type == 1U) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"access_type == eLoad || access_type == eStore",
                        (Char const   *)"drd_bitmap.c", 133,
                        (Char const   *)"vgDrd_bm_access_range", "");
  }
  if ((unsigned int const   )access_type == 0U) {
    vgDrd_bm_access_range_load(bm, a1, a2);
    return;
  } else {
    vgDrd_bm_access_range_store(bm, a1, a2);
    return;
  }
}
}
void vgDrd_bm_access_range_load(struct bitmap * const  bm , Addr const   a1 ,
                                Addr const   a2 ) 
{ 
  Addr b ;
  Addr b_next ;
  long tmp ;
  long tmp___0 ;
  Addr tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  Addr tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;
  Addr tmp___7 ;
  int tmp___8 ;
  long tmp___9 ;
  Addr b_start ;
  Addr b_end ;
  struct bitmap2 *bm2 ;
  UWord b0 ;
  UWord tmp___10 ;
  long tmp___11 ;
  Addr tmp___12 ;
  Addr tmp___13 ;
  Addr tmp___14 ;
  int tmp___15 ;
  long tmp___16 ;
  UWord tmp___17 ;
  UWord tmp___18 ;
  int tmp___19 ;
  long tmp___20 ;
  UWord tmp___21 ;
  UWord tmp___22 ;
  int tmp___23 ;
  long tmp___24 ;
  unsigned int k ;
  UWord tmp___25 ;
  UWord tmp___26 ;
  UWord tmp___27 ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 145,
                        (Char const   *)"vgDrd_bm_access_range_load", "");
  }
  tmp___0 = __builtin_expect((long )(! (! (a1 <= a2))), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"a1 <= a2",
                        (Char const   *)"drd_bitmap.c", 146,
                        (Char const   *)"vgDrd_bm_access_range_load", "");
  }
  tmp___1 = first_address_with_higher_msb(a2);
  if (a2 < (Addr const   )tmp___1) {
    tmp___2 = 1;
  } else {
    tmp___2 = 0;
  }
  tmp___3 = __builtin_expect((long )tmp___2, 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a2 < first_address_with_higher_msb(a2)",
                        (Char const   *)"drd_bitmap.c", 147,
                        (Char const   *)"vgDrd_bm_access_range_load", "");
  }
  tmp___4 = first_address_with_same_lsb(a1);
  if (a1 == (Addr const   )tmp___4) {
    tmp___5 = 1;
  } else {
    tmp___5 = 0;
  }
  tmp___6 = __builtin_expect((long )tmp___5, 1L);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a1 == first_address_with_same_lsb(a1)",
                        (Char const   *)"drd_bitmap.c", 148,
                        (Char const   *)"vgDrd_bm_access_range_load", "");
  }
  tmp___7 = first_address_with_same_lsb(a2);
  if (a2 == (Addr const   )tmp___7) {
    tmp___8 = 1;
  } else {
    tmp___8 = 0;
  }
  tmp___9 = __builtin_expect((long )tmp___8, 1L);
  if (tmp___9) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a2 == first_address_with_same_lsb(a2)",
                        (Char const   *)"drd_bitmap.c", 149,
                        (Char const   *)"vgDrd_bm_access_range_load", "");
  }
  b = (Addr )a1;
  while (b < (Addr )a2) {
    b_next = first_address_with_higher_msb((Addr const   )b);
    if (b_next > (Addr )a2) {
      b_next = (Addr )a2;
    } else {

    }
    tmp___10 = address_msb((Addr const   )b);
    bm2 = bm2_lookup_or_insert_exclusive(bm, (UWord const   )tmp___10);
    tmp___11 = __builtin_expect((long )(! (! bm2)), 1L);
    if (tmp___11) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"bm2",
                          (Char const   *)"drd_bitmap.c", 165,
                          (Char const   *)"vgDrd_bm_access_range_load", "");
    }
    tmp___13 = make_address((UWord const   )bm2->addr, (UWord const   )0);
    if (tmp___13 < (Addr )a1) {
      b_start = (Addr )a1;
    } else {
      tmp___12 = make_address((UWord const   )bm2->addr, (UWord const   )0);
      if (tmp___12 < (Addr )a2) {
        b_start = make_address((UWord const   )bm2->addr, (UWord const   )0);
      } else {
        break;
      }
    }
    tmp___14 = make_address((UWord const   )(bm2->addr + 1UL), (UWord const   )0);
    if (tmp___14 < (Addr )a2) {
      b_end = make_address((UWord const   )(bm2->addr + 1UL), (UWord const   )0);
    } else {
      b_end = (Addr )a2;
    }
    if (a1 <= (Addr const   )b_start) {
      if (b_start < b_end) {
        if (b_end) {
          if (b_end <= (Addr )a2) {
            tmp___15 = 1;
          } else {
            tmp___15 = 0;
          }
        } else {
          tmp___15 = 0;
        }
      } else {
        tmp___15 = 0;
      }
    } else {
      tmp___15 = 0;
    }
    tmp___16 = __builtin_expect((long )tmp___15, 1L);
    if (tmp___16) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"a1 <= b_start && b_start < b_end && b_end && b_end <= a2",
                          (Char const   *)"drd_bitmap.c", 180,
                          (Char const   *)"vgDrd_bm_access_range_load", "");
    }
    tmp___17 = address_msb((Addr const   )b_start);
    tmp___18 = address_msb((Addr const   )(b_end - 1UL));
    if (tmp___17 == tmp___18) {
      tmp___19 = 1;
    } else {
      tmp___19 = 0;
    }
    tmp___20 = __builtin_expect((long )tmp___19, 1L);
    if (tmp___20) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"address_msb(b_start) == address_msb(b_end - 1)",
                          (Char const   *)"drd_bitmap.c", 181,
                          (Char const   *)"vgDrd_bm_access_range_load", "");
    }
    tmp___21 = address_lsb((Addr const   )b_start);
    tmp___22 = address_lsb((Addr const   )(b_end - 1UL));
    if (tmp___21 <= tmp___22) {
      tmp___23 = 1;
    } else {
      tmp___23 = 0;
    }
    tmp___24 = __builtin_expect((long )tmp___23, 1L);
    if (tmp___24) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"address_lsb(b_start) <= address_lsb(b_end - 1)",
                          (Char const   *)"drd_bitmap.c", 182,
                          (Char const   *)"vgDrd_bm_access_range_load", "");
    }
    tmp___26 = address_lsb((Addr const   )b_start);
    if (tmp___26 == 0UL) {
      tmp___27 = address_lsb((Addr const   )b_end);
      if (tmp___27 == 0UL) {
        k = 0U;
        while (k < 1U << 7) {
          bm2->bm1.bm0_r[k] = ~ ((UWord )0);
          k ++;
        }
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      b0 = address_lsb((Addr const   )b_start);
      while (1) {
        tmp___25 = address_lsb((Addr const   )(b_end - 1UL));
        if (b0 <= tmp___25) {

        } else {
          break;
        }
        bm0_set(bm2->bm1.bm0_r, (UWord const   )b0);
        b0 ++;
      }
    }
    b = b_next;
  }
  return;
}
}
void vgDrd_bm_access_load_1(struct bitmap * const  bm , Addr const   a1 ) 
{ 


  {
  bm_access_aligned_load(bm, a1, (SizeT const   )1);
  return;
}
}
void vgDrd_bm_access_load_2(struct bitmap * const  bm , Addr const   a1 ) 
{ 


  {
  if ((a1 & 1UL) == 0UL) {
    bm_access_aligned_load(bm, a1, (SizeT const   )2);
  } else {
    vgDrd_bm_access_range(bm, a1, a1 + 2UL, (BmAccessTypeT const   )0);
  }
  return;
}
}
void vgDrd_bm_access_load_4(struct bitmap * const  bm , Addr const   a1 ) 
{ 


  {
  if ((a1 & 3UL) == 0UL) {
    bm_access_aligned_load(bm, a1, (SizeT const   )4);
  } else {
    vgDrd_bm_access_range(bm, a1, a1 + 4UL, (BmAccessTypeT const   )0);
  }
  return;
}
}
void vgDrd_bm_access_load_8(struct bitmap * const  bm , Addr const   a1 ) 
{ 


  {
  if ((a1 & 7UL) == 0UL) {
    bm_access_aligned_load(bm, a1, (SizeT const   )8);
  } else
  if ((a1 & 3UL) == 0UL) {
    bm_access_aligned_load(bm, a1, (SizeT const   )4);
    bm_access_aligned_load(bm, a1 + 4UL, (SizeT const   )4);
  } else {
    vgDrd_bm_access_range(bm, a1, a1 + 8UL, (BmAccessTypeT const   )0);
  }
  return;
}
}
void vgDrd_bm_access_range_store(struct bitmap * const  bm , Addr const   a1 ,
                                 Addr const   a2 ) 
{ 
  Addr b ;
  Addr b_next ;
  long tmp ;
  long tmp___0 ;
  Addr tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  Addr tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;
  Addr tmp___7 ;
  int tmp___8 ;
  long tmp___9 ;
  Addr b_start ;
  Addr b_end ;
  struct bitmap2 *bm2 ;
  UWord b0 ;
  UWord tmp___10 ;
  long tmp___11 ;
  Addr tmp___12 ;
  Addr tmp___13 ;
  Addr tmp___14 ;
  int tmp___15 ;
  long tmp___16 ;
  UWord tmp___17 ;
  UWord tmp___18 ;
  int tmp___19 ;
  long tmp___20 ;
  UWord tmp___21 ;
  UWord tmp___22 ;
  int tmp___23 ;
  long tmp___24 ;
  unsigned int k ;
  UWord tmp___25 ;
  UWord tmp___26 ;
  UWord tmp___27 ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 242,
                        (Char const   *)"vgDrd_bm_access_range_store", "");
  }
  tmp___0 = __builtin_expect((long )(! (! (a1 <= a2))), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"a1 <= a2",
                        (Char const   *)"drd_bitmap.c", 243,
                        (Char const   *)"vgDrd_bm_access_range_store", "");
  }
  tmp___1 = first_address_with_higher_msb(a2);
  if (a2 < (Addr const   )tmp___1) {
    tmp___2 = 1;
  } else {
    tmp___2 = 0;
  }
  tmp___3 = __builtin_expect((long )tmp___2, 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a2 < first_address_with_higher_msb(a2)",
                        (Char const   *)"drd_bitmap.c", 244,
                        (Char const   *)"vgDrd_bm_access_range_store", "");
  }
  tmp___4 = first_address_with_same_lsb(a1);
  if (a1 == (Addr const   )tmp___4) {
    tmp___5 = 1;
  } else {
    tmp___5 = 0;
  }
  tmp___6 = __builtin_expect((long )tmp___5, 1L);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a1 == first_address_with_same_lsb(a1)",
                        (Char const   *)"drd_bitmap.c", 245,
                        (Char const   *)"vgDrd_bm_access_range_store", "");
  }
  tmp___7 = first_address_with_same_lsb(a2);
  if (a2 == (Addr const   )tmp___7) {
    tmp___8 = 1;
  } else {
    tmp___8 = 0;
  }
  tmp___9 = __builtin_expect((long )tmp___8, 1L);
  if (tmp___9) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a2 == first_address_with_same_lsb(a2)",
                        (Char const   *)"drd_bitmap.c", 246,
                        (Char const   *)"vgDrd_bm_access_range_store", "");
  }
  b = (Addr )a1;
  while (b < (Addr )a2) {
    b_next = first_address_with_higher_msb((Addr const   )b);
    if (b_next > (Addr )a2) {
      b_next = (Addr )a2;
    } else {

    }
    tmp___10 = address_msb((Addr const   )b);
    bm2 = bm2_lookup_or_insert_exclusive(bm, (UWord const   )tmp___10);
    tmp___11 = __builtin_expect((long )(! (! bm2)), 1L);
    if (tmp___11) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"bm2",
                          (Char const   *)"drd_bitmap.c", 262,
                          (Char const   *)"vgDrd_bm_access_range_store", "");
    }
    tmp___13 = make_address((UWord const   )bm2->addr, (UWord const   )0);
    if (tmp___13 < (Addr )a1) {
      b_start = (Addr )a1;
    } else {
      tmp___12 = make_address((UWord const   )bm2->addr, (UWord const   )0);
      if (tmp___12 < (Addr )a2) {
        b_start = make_address((UWord const   )bm2->addr, (UWord const   )0);
      } else {
        break;
      }
    }
    tmp___14 = make_address((UWord const   )(bm2->addr + 1UL), (UWord const   )0);
    if (tmp___14 < (Addr )a2) {
      b_end = make_address((UWord const   )(bm2->addr + 1UL), (UWord const   )0);
    } else {
      b_end = (Addr )a2;
    }
    if (a1 <= (Addr const   )b_start) {
      if (b_start < b_end) {
        if (b_end) {
          if (b_end <= (Addr )a2) {
            tmp___15 = 1;
          } else {
            tmp___15 = 0;
          }
        } else {
          tmp___15 = 0;
        }
      } else {
        tmp___15 = 0;
      }
    } else {
      tmp___15 = 0;
    }
    tmp___16 = __builtin_expect((long )tmp___15, 1L);
    if (tmp___16) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"a1 <= b_start && b_start < b_end && b_end && b_end <= a2",
                          (Char const   *)"drd_bitmap.c", 277,
                          (Char const   *)"vgDrd_bm_access_range_store", "");
    }
    tmp___17 = address_msb((Addr const   )b_start);
    tmp___18 = address_msb((Addr const   )(b_end - 1UL));
    if (tmp___17 == tmp___18) {
      tmp___19 = 1;
    } else {
      tmp___19 = 0;
    }
    tmp___20 = __builtin_expect((long )tmp___19, 1L);
    if (tmp___20) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"address_msb(b_start) == address_msb(b_end - 1)",
                          (Char const   *)"drd_bitmap.c", 278,
                          (Char const   *)"vgDrd_bm_access_range_store", "");
    }
    tmp___21 = address_lsb((Addr const   )b_start);
    tmp___22 = address_lsb((Addr const   )(b_end - 1UL));
    if (tmp___21 <= tmp___22) {
      tmp___23 = 1;
    } else {
      tmp___23 = 0;
    }
    tmp___24 = __builtin_expect((long )tmp___23, 1L);
    if (tmp___24) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"address_lsb(b_start) <= address_lsb(b_end - 1)",
                          (Char const   *)"drd_bitmap.c", 279,
                          (Char const   *)"vgDrd_bm_access_range_store", "");
    }
    tmp___26 = address_lsb((Addr const   )b_start);
    if (tmp___26 == 0UL) {
      tmp___27 = address_lsb((Addr const   )b_end);
      if (tmp___27 == 0UL) {
        k = 0U;
        while (k < 1U << 7) {
          bm2->bm1.bm0_w[k] = ~ ((UWord )0);
          k ++;
        }
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      b0 = address_lsb((Addr const   )b_start);
      while (1) {
        tmp___25 = address_lsb((Addr const   )(b_end - 1UL));
        if (b0 <= tmp___25) {

        } else {
          break;
        }
        bm0_set(bm2->bm1.bm0_w, (UWord const   )b0);
        b0 ++;
      }
    }
    b = b_next;
  }
  return;
}
}
void vgDrd_bm_access_store_1(struct bitmap * const  bm , Addr const   a1 ) 
{ 


  {
  bm_access_aligned_store(bm, a1, (SizeT const   )1);
  return;
}
}
void vgDrd_bm_access_store_2(struct bitmap * const  bm , Addr const   a1 ) 
{ 


  {
  if ((a1 & 1UL) == 0UL) {
    bm_access_aligned_store(bm, a1, (SizeT const   )2);
  } else {
    vgDrd_bm_access_range(bm, a1, a1 + 2UL, (BmAccessTypeT const   )1);
  }
  return;
}
}
void vgDrd_bm_access_store_4(struct bitmap * const  bm , Addr const   a1 ) 
{ 


  {
  if ((a1 & 3UL) == 0UL) {
    bm_access_aligned_store(bm, a1, (SizeT const   )4);
  } else {
    vgDrd_bm_access_range(bm, a1, a1 + 4UL, (BmAccessTypeT const   )1);
  }
  return;
}
}
void vgDrd_bm_access_store_8(struct bitmap * const  bm , Addr const   a1 ) 
{ 


  {
  if ((a1 & 7UL) == 0UL) {
    bm_access_aligned_store(bm, a1, (SizeT const   )8);
  } else
  if ((a1 & 3UL) == 0UL) {
    bm_access_aligned_store(bm, a1, (SizeT const   )4);
    bm_access_aligned_store(bm, a1 + 4UL, (SizeT const   )4);
  } else {
    vgDrd_bm_access_range(bm, a1, a1 + 8UL, (BmAccessTypeT const   )1);
  }
  return;
}
}
Bool vgDrd_bm_has(struct bitmap * const  bm , Addr const   a1 ,
                  Addr const   a2 , BmAccessTypeT const   access_type ) 
{ 
  int tmp ;
  long tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  if ((unsigned int const   )access_type == 0U) {
    tmp = 1;
  } else
  if ((unsigned int const   )access_type == 1U) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"access_type == eLoad || access_type == eStore",
                        (Char const   *)"drd_bitmap.c", 337,
                        (Char const   *)"vgDrd_bm_has", "");
  }
  if ((unsigned int const   )access_type == 0U) {
    tmp___1 = vgDrd_bm_has_any_load(bm, a1, a2);
    return (tmp___1);
  } else {
    tmp___2 = vgDrd_bm_has_any_store(bm, a1, a2);
    return (tmp___2);
  }
}
}
Bool vgDrd_bm_has_any_load_g(struct bitmap * const  bm ) 
{ 
  struct bitmap2 *bm2 ;
  long tmp ;
  Addr b_start ;
  Addr b_end ;
  UWord b0 ;
  struct bitmap1  const  *p1 ;
  UWord tmp___0 ;
  UWord tmp___1 ;
  void *tmp___2 ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 349,
                        (Char const   *)"vgDrd_bm_has_any_load_g", "");
  }
  vgPlain_OSetGen_ResetIter(bm->oset);
  while (1) {
    tmp___2 = vgPlain_OSetGen_Next(bm->oset);
    bm2 = (struct bitmap2 *)tmp___2;
    if ((unsigned int )bm2 != (unsigned int )((void *)0)) {

    } else {
      break;
    }
    p1 = (struct bitmap1  const  *)(& bm2->bm1);
    b_start = make_address((UWord const   )bm2->addr, (UWord const   )0);
    b_end = make_address((UWord const   )(bm2->addr + 1UL), (UWord const   )0);
    b0 = address_lsb((Addr const   )b_start);
    while (1) {
      tmp___1 = address_lsb((Addr const   )(b_end - 1UL));
      if (b0 <= tmp___1) {

      } else {
        break;
      }
      tmp___0 = bm0_is_set((UWord const   *)(p1->bm0_r), (UWord const   )b0);
      if (tmp___0) {
        return ((Bool )1);
      } else {

      }
      b0 ++;
    }
  }
  return ((Bool )0);
}
}
Bool vgDrd_bm_has_any_load(struct bitmap * const  bm , Addr const   a1 ,
                           Addr const   a2 ) 
{ 
  Addr b ;
  Addr b_next ;
  long tmp ;
  struct bitmap2  const  *bm2 ;
  UWord tmp___0 ;
  struct bitmap2  const  *tmp___1 ;
  Addr b_start ;
  Addr b_end ;
  UWord b0 ;
  struct bitmap1  const  *p1 ;
  Addr tmp___2 ;
  Addr tmp___3 ;
  int tmp___4 ;
  long tmp___5 ;
  Addr tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  UWord tmp___10 ;
  UWord tmp___11 ;
  int tmp___12 ;
  long tmp___13 ;
  UWord tmp___14 ;
  UWord tmp___15 ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 373,
                        (Char const   *)"vgDrd_bm_has_any_load", "");
  }
  b = (Addr )a1;
  while (b < (Addr )a2) {
    tmp___0 = address_msb((Addr const   )b);
    tmp___1 = bm2_lookup(bm, (UWord const   )tmp___0);
    bm2 = tmp___1;
    b_next = first_address_with_higher_msb((Addr const   )b);
    if (b_next > (Addr )a2) {
      b_next = (Addr )a2;
    } else {

    }
    if (bm2) {
      p1 = & bm2->bm1;
      tmp___3 = make_address(bm2->addr, (UWord const   )0);
      if (tmp___3 < (Addr )a1) {
        b_start = (Addr )a1;
      } else {
        tmp___2 = make_address(bm2->addr, (UWord const   )0);
        if (tmp___2 < (Addr )a2) {
          b_start = make_address(bm2->addr, (UWord const   )0);
        } else {
          break;
        }
      }
      if (a1 <= (Addr const   )b_start) {
        if (b_start <= (Addr )a2) {
          tmp___4 = 1;
        } else {
          tmp___4 = 0;
        }
      } else {
        tmp___4 = 0;
      }
      tmp___5 = __builtin_expect((long )tmp___4, 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"a1 <= b_start && b_start <= a2",
                            (Char const   *)"drd_bitmap.c", 399,
                            (Char const   *)"vgDrd_bm_has_any_load", "");
      }
      tmp___6 = make_address(bm2->addr + 1UL, (UWord const   )0);
      if (tmp___6 < (Addr )a2) {
        b_end = make_address(bm2->addr + 1UL, (UWord const   )0);
      } else {
        b_end = (Addr )a2;
      }
      if (a1 <= (Addr const   )b_end) {
        if (b_end <= (Addr )a2) {
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
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"a1 <= b_end && b_end <= a2",
                            (Char const   *)"drd_bitmap.c", 405,
                            (Char const   *)"vgDrd_bm_has_any_load", "");
      }
      tmp___9 = __builtin_expect((long )(! (! (b_start < b_end))), 1L);
      if (tmp___9) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"b_start < b_end",
                            (Char const   *)"drd_bitmap.c", 406,
                            (Char const   *)"vgDrd_bm_has_any_load", "");
      }
      tmp___10 = address_lsb((Addr const   )b_start);
      tmp___11 = address_lsb((Addr const   )(b_end - 1UL));
      if (tmp___10 <= tmp___11) {
        tmp___12 = 1;
      } else {
        tmp___12 = 0;
      }
      tmp___13 = __builtin_expect((long )tmp___12, 1L);
      if (tmp___13) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"address_lsb(b_start) <= address_lsb(b_end - 1)",
                            (Char const   *)"drd_bitmap.c", 407,
                            (Char const   *)"vgDrd_bm_has_any_load", "");
      }
      b0 = address_lsb((Addr const   )b_start);
      while (1) {
        tmp___15 = address_lsb((Addr const   )(b_end - 1UL));
        if (b0 <= tmp___15) {

        } else {
          break;
        }
        tmp___14 = bm0_is_set((UWord const   *)(p1->bm0_r), (UWord const   )b0);
        if (tmp___14) {
          return ((Bool )1);
        } else {

        }
        b0 ++;
      }
    } else {

    }
    b = b_next;
  }
  return ((Bool )0);
}
}
Bool vgDrd_bm_has_any_store(struct bitmap * const  bm , Addr const   a1 ,
                            Addr const   a2 ) 
{ 
  Addr b ;
  Addr b_next ;
  long tmp ;
  struct bitmap2  const  *bm2 ;
  UWord tmp___0 ;
  struct bitmap2  const  *tmp___1 ;
  Addr b_start ;
  Addr b_end ;
  UWord b0 ;
  struct bitmap1  const  *p1 ;
  Addr tmp___2 ;
  Addr tmp___3 ;
  int tmp___4 ;
  long tmp___5 ;
  Addr tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  UWord tmp___10 ;
  UWord tmp___11 ;
  int tmp___12 ;
  long tmp___13 ;
  UWord tmp___14 ;
  UWord tmp___15 ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 426,
                        (Char const   *)"vgDrd_bm_has_any_store", "");
  }
  b = (Addr )a1;
  while (b < (Addr )a2) {
    tmp___0 = address_msb((Addr const   )b);
    tmp___1 = bm2_lookup(bm, (UWord const   )tmp___0);
    bm2 = tmp___1;
    b_next = first_address_with_higher_msb((Addr const   )b);
    if (b_next > (Addr )a2) {
      b_next = (Addr )a2;
    } else {

    }
    if (bm2) {
      p1 = & bm2->bm1;
      tmp___3 = make_address(bm2->addr, (UWord const   )0);
      if (tmp___3 < (Addr )a1) {
        b_start = (Addr )a1;
      } else {
        tmp___2 = make_address(bm2->addr, (UWord const   )0);
        if (tmp___2 < (Addr )a2) {
          b_start = make_address(bm2->addr, (UWord const   )0);
        } else {
          break;
        }
      }
      if (a1 <= (Addr const   )b_start) {
        if (b_start <= (Addr )a2) {
          tmp___4 = 1;
        } else {
          tmp___4 = 0;
        }
      } else {
        tmp___4 = 0;
      }
      tmp___5 = __builtin_expect((long )tmp___4, 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"a1 <= b_start && b_start <= a2",
                            (Char const   *)"drd_bitmap.c", 452,
                            (Char const   *)"vgDrd_bm_has_any_store", "");
      }
      tmp___6 = make_address(bm2->addr + 1UL, (UWord const   )0);
      if (tmp___6 < (Addr )a2) {
        b_end = make_address(bm2->addr + 1UL, (UWord const   )0);
      } else {
        b_end = (Addr )a2;
      }
      if (a1 <= (Addr const   )b_end) {
        if (b_end <= (Addr )a2) {
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
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"a1 <= b_end && b_end <= a2",
                            (Char const   *)"drd_bitmap.c", 458,
                            (Char const   *)"vgDrd_bm_has_any_store", "");
      }
      tmp___9 = __builtin_expect((long )(! (! (b_start < b_end))), 1L);
      if (tmp___9) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"b_start < b_end",
                            (Char const   *)"drd_bitmap.c", 459,
                            (Char const   *)"vgDrd_bm_has_any_store", "");
      }
      tmp___10 = address_lsb((Addr const   )b_start);
      tmp___11 = address_lsb((Addr const   )(b_end - 1UL));
      if (tmp___10 <= tmp___11) {
        tmp___12 = 1;
      } else {
        tmp___12 = 0;
      }
      tmp___13 = __builtin_expect((long )tmp___12, 1L);
      if (tmp___13) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"address_lsb(b_start) <= address_lsb(b_end - 1)",
                            (Char const   *)"drd_bitmap.c", 460,
                            (Char const   *)"vgDrd_bm_has_any_store", "");
      }
      b0 = address_lsb((Addr const   )b_start);
      while (1) {
        tmp___15 = address_lsb((Addr const   )(b_end - 1UL));
        if (b0 <= tmp___15) {

        } else {
          break;
        }
        tmp___14 = bm0_is_set((UWord const   *)(p1->bm0_w), (UWord const   )b0);
        if (tmp___14) {
          return ((Bool )1);
        } else {

        }
        b0 ++;
      }
    } else {

    }
    b = b_next;
  }
  return ((Bool )0);
}
}
Bool vgDrd_bm_has_any_access(struct bitmap * const  bm , Addr const   a1 ,
                             Addr const   a2 ) 
{ 
  Addr b ;
  Addr b_next ;
  long tmp ;
  struct bitmap2  const  *bm2 ;
  UWord tmp___0 ;
  struct bitmap2  const  *tmp___1 ;
  Addr b_start ;
  Addr b_end ;
  UWord b0 ;
  struct bitmap1  const  *p1 ;
  Addr tmp___2 ;
  Addr tmp___3 ;
  int tmp___4 ;
  long tmp___5 ;
  Addr tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  UWord tmp___10 ;
  UWord tmp___11 ;
  int tmp___12 ;
  long tmp___13 ;
  UWord tmp___14 ;
  UWord tmp___15 ;
  UWord tmp___16 ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 481,
                        (Char const   *)"vgDrd_bm_has_any_access", "");
  }
  b = (Addr )a1;
  while (b < (Addr )a2) {
    tmp___0 = address_msb((Addr const   )b);
    tmp___1 = bm2_lookup(bm, (UWord const   )tmp___0);
    bm2 = tmp___1;
    b_next = first_address_with_higher_msb((Addr const   )b);
    if (b_next > (Addr )a2) {
      b_next = (Addr )a2;
    } else {

    }
    if (bm2) {
      p1 = & bm2->bm1;
      tmp___3 = make_address(bm2->addr, (UWord const   )0);
      if (tmp___3 < (Addr )a1) {
        b_start = (Addr )a1;
      } else {
        tmp___2 = make_address(bm2->addr, (UWord const   )0);
        if (tmp___2 < (Addr )a2) {
          b_start = make_address(bm2->addr, (UWord const   )0);
        } else {
          break;
        }
      }
      if (a1 <= (Addr const   )b_start) {
        if (b_start <= (Addr )a2) {
          tmp___4 = 1;
        } else {
          tmp___4 = 0;
        }
      } else {
        tmp___4 = 0;
      }
      tmp___5 = __builtin_expect((long )tmp___4, 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"a1 <= b_start && b_start <= a2",
                            (Char const   *)"drd_bitmap.c", 507,
                            (Char const   *)"vgDrd_bm_has_any_access", "");
      }
      tmp___6 = make_address(bm2->addr + 1UL, (UWord const   )0);
      if (tmp___6 < (Addr )a2) {
        b_end = make_address(bm2->addr + 1UL, (UWord const   )0);
      } else {
        b_end = (Addr )a2;
      }
      if (a1 <= (Addr const   )b_end) {
        if (b_end <= (Addr )a2) {
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
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"a1 <= b_end && b_end <= a2",
                            (Char const   *)"drd_bitmap.c", 513,
                            (Char const   *)"vgDrd_bm_has_any_access", "");
      }
      tmp___9 = __builtin_expect((long )(! (! (b_start < b_end))), 1L);
      if (tmp___9) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"b_start < b_end",
                            (Char const   *)"drd_bitmap.c", 514,
                            (Char const   *)"vgDrd_bm_has_any_access", "");
      }
      tmp___10 = address_lsb((Addr const   )b_start);
      tmp___11 = address_lsb((Addr const   )(b_end - 1UL));
      if (tmp___10 <= tmp___11) {
        tmp___12 = 1;
      } else {
        tmp___12 = 0;
      }
      tmp___13 = __builtin_expect((long )tmp___12, 1L);
      if (tmp___13) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"address_lsb(b_start) <= address_lsb(b_end - 1)",
                            (Char const   *)"drd_bitmap.c", 515,
                            (Char const   *)"vgDrd_bm_has_any_access", "");
      }
      b0 = address_lsb((Addr const   )b_start);
      while (1) {
        tmp___16 = address_lsb((Addr const   )(b_end - 1UL));
        if (b0 <= tmp___16) {

        } else {
          break;
        }
        tmp___14 = bm0_is_set((UWord const   *)(p1->bm0_r), (UWord const   )b0);
        tmp___15 = bm0_is_set((UWord const   *)(p1->bm0_w), (UWord const   )b0);
        if (tmp___14 | tmp___15) {
          return ((Bool )1);
        } else {

        }
        b0 ++;
      }
    } else {

    }
    b = b_next;
  }
  return ((Bool )0);
}
}
Bool vgDrd_bm_has_1(struct bitmap * const  bm , Addr const   a ,
                    BmAccessTypeT const   access_type ) 
{ 
  struct bitmap2  const  *p2 ;
  struct bitmap1  const  *p1 ;
  UWord const   *p0 ;
  UWord a0 ;
  UWord tmp ;
  long tmp___0 ;
  UWord tmp___1 ;
  UWord tmp___2 ;
  int tmp___3 ;
  UWord tmp___4 ;

  {
  tmp = address_lsb(a);
  a0 = tmp;
  tmp___0 = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 545,
                        (Char const   *)"vgDrd_bm_has_1", "");
  }
  tmp___1 = address_msb(a);
  p2 = bm2_lookup(bm, (UWord const   )tmp___1);
  if (p2) {
    p1 = & p2->bm1;
    if ((unsigned int const   )access_type == 0U) {
      p0 = (UWord const   *)(p1->bm0_r);
    } else {
      p0 = (UWord const   *)(p1->bm0_w);
    }
    tmp___4 = bm0_is_set(p0, (UWord const   )a0);
    if (tmp___4) {
      tmp___3 = (int )((Bool )1);
    } else {
      tmp___3 = (int )((Bool )0);
    }
    return ((Bool )tmp___3);
  } else {

  }
  return ((Bool )0);
}
}
void vgDrd_bm_clear(struct bitmap * const  bm , Addr const   a1 ,
                    Addr const   a2 ) 
{ 
  Addr b ;
  Addr b_next ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  Addr tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  Addr tmp___5 ;
  int tmp___6 ;
  long tmp___7 ;
  struct bitmap2 *p2 ;
  Addr c ;
  UWord tmp___8 ;
  Addr c_next ;
  Addr tmp___9 ;
  UWord tmp___10 ;
  UWord tmp___11 ;
  UWord tmp___12 ;
  UWord tmp___13 ;
  Addr c_next___0 ;
  Addr tmp___14 ;
  UWord idx ;
  UWord tmp___15 ;
  UWord tmp___16 ;
  UWord tmp___17 ;
  UWord tmp___18 ;
  UWord tmp___19 ;
  UWord tmp___20 ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 561,
                        (Char const   *)"vgDrd_bm_clear", "");
  }
  tmp___0 = __builtin_expect((long )(! (! a1)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"a1",
                        (Char const   *)"drd_bitmap.c", 562,
                        (Char const   *)"vgDrd_bm_clear", "");
  }
  tmp___1 = __builtin_expect((long )(! (! (a1 <= a2))), 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"a1 <= a2",
                        (Char const   *)"drd_bitmap.c", 563,
                        (Char const   *)"vgDrd_bm_clear", "");
  }
  tmp___2 = first_address_with_same_lsb(a1);
  if (a1 == (Addr const   )tmp___2) {
    tmp___3 = 1;
  } else {
    tmp___3 = 0;
  }
  tmp___4 = __builtin_expect((long )tmp___3, 1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a1 == first_address_with_same_lsb(a1)",
                        (Char const   *)"drd_bitmap.c", 564,
                        (Char const   *)"vgDrd_bm_clear", "");
  }
  tmp___5 = first_address_with_same_lsb(a2);
  if (a2 == (Addr const   )tmp___5) {
    tmp___6 = 1;
  } else {
    tmp___6 = 0;
  }
  tmp___7 = __builtin_expect((long )tmp___6, 1L);
  if (tmp___7) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a2 == first_address_with_same_lsb(a2)",
                        (Char const   *)"drd_bitmap.c", 565,
                        (Char const   *)"vgDrd_bm_clear", "");
  }
  b = (Addr )a1;
  while (b < (Addr )a2) {
    tmp___8 = address_msb((Addr const   )b);
    p2 = bm2_lookup_exclusive(bm, (UWord const   )tmp___8);
    b_next = first_address_with_higher_msb((Addr const   )b);
    if (b_next > (Addr )a2) {
      b_next = (Addr )a2;
    } else {

    }
    if ((unsigned int )p2 == (unsigned int )((struct bitmap2 *)0)) {
      goto __Cont;
    } else {

    }
    c = b;
    tmp___12 = address_lsb((Addr const   )c);
    tmp___13 = uword_lsb((UWord const   )tmp___12);
    if (tmp___13) {
      tmp___9 = first_address_with_higher_uword_msb((Addr const   )c);
      c_next = tmp___9;
      if (c_next > b_next) {
        c_next = b_next;
      } else {

      }
      tmp___10 = address_lsb((Addr const   )c);
      {
      if (c_next - c < 2) {
        return;
      }
      bm0_clear_range(p2->bm1.bm0_r, (UWord const   )tmp___10,
                      (SizeT const   )(((c_next - c) - 1UL) + 1UL));
      }
      tmp___11 = address_lsb((Addr const   )c);
      {
      if (c_next - c < 2) {
        return;
      }
      bm0_clear_range(p2->bm1.bm0_w, (UWord const   )tmp___11,
                      (SizeT const   )(((c_next - c) - 1UL) + 1UL));
      }
      c = c_next;
    } else {

    }
    tmp___17 = address_lsb((Addr const   )c);
    tmp___18 = uword_lsb((UWord const   )tmp___17);
    if (tmp___18 == 0UL) {
      tmp___14 = first_address_with_same_uword_lsb((Addr const   )b_next);
      c_next___0 = tmp___14;
      if (c_next___0 > c) {
        tmp___15 = address_lsb((Addr const   )c);
        tmp___16 = uword_msb((UWord const   )tmp___15);
        idx = tmp___16;
        {
        if ((c_next___0 - c) / 8UL < 2) {
          return;
        }
        vgPlain_memset((void *)(& p2->bm1.bm0_r[idx]), 0,
                       ((c_next___0 - c) / 8UL - 1UL) + 1UL);
        }
        {
        if ((c_next___0 - c) / 8UL < 2) {
          return;
        }
        vgPlain_memset((void *)(& p2->bm1.bm0_w[idx]), 0,
                       ((c_next___0 - c) / 8UL - 1UL) + 1UL);
        }
        c = c_next___0;
      } else {

      }
    } else {

    }
    tmp___19 = address_lsb((Addr const   )c);
    {
    if (b_next - c < 2) {
      return;
    }
    bm0_clear_range(p2->bm1.bm0_r, (UWord const   )tmp___19,
                    (SizeT const   )(((b_next - c) - 1UL) + 1UL));
    }
    tmp___20 = address_lsb((Addr const   )c);
    {
    if (b_next - c < 2) {
      return;
    }
    bm0_clear_range(p2->bm1.bm0_w, (UWord const   )tmp___20,
                    (SizeT const   )(((b_next - c) - 1UL) + 1UL));
    }
    __Cont: /* CIL Label */ 
    b = b_next;
  }
  return;
}
}
void vgDrd_bm_clear_load(struct bitmap * const  bm , Addr const   a1 ,
                         Addr const   a2 ) 
{ 
  Addr b ;
  Addr b_next ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  Addr tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  Addr tmp___5 ;
  int tmp___6 ;
  long tmp___7 ;
  struct bitmap2 *p2 ;
  Addr c ;
  UWord tmp___8 ;
  Addr c_next ;
  Addr tmp___9 ;
  UWord tmp___10 ;
  UWord tmp___11 ;
  UWord tmp___12 ;
  Addr c_next___0 ;
  Addr tmp___13 ;
  UWord idx ;
  UWord tmp___14 ;
  UWord tmp___15 ;
  UWord tmp___16 ;
  UWord tmp___17 ;
  UWord tmp___18 ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 638,
                        (Char const   *)"vgDrd_bm_clear_load", "");
  }
  tmp___0 = __builtin_expect((long )(! (! a1)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"a1",
                        (Char const   *)"drd_bitmap.c", 639,
                        (Char const   *)"vgDrd_bm_clear_load", "");
  }
  tmp___1 = __builtin_expect((long )(! (! (a1 <= a2))), 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"a1 <= a2",
                        (Char const   *)"drd_bitmap.c", 640,
                        (Char const   *)"vgDrd_bm_clear_load", "");
  }
  tmp___2 = first_address_with_same_lsb(a1);
  if (a1 == (Addr const   )tmp___2) {
    tmp___3 = 1;
  } else {
    tmp___3 = 0;
  }
  tmp___4 = __builtin_expect((long )tmp___3, 1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a1 == first_address_with_same_lsb(a1)",
                        (Char const   *)"drd_bitmap.c", 641,
                        (Char const   *)"vgDrd_bm_clear_load", "");
  }
  tmp___5 = first_address_with_same_lsb(a2);
  if (a2 == (Addr const   )tmp___5) {
    tmp___6 = 1;
  } else {
    tmp___6 = 0;
  }
  tmp___7 = __builtin_expect((long )tmp___6, 1L);
  if (tmp___7) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a2 == first_address_with_same_lsb(a2)",
                        (Char const   *)"drd_bitmap.c", 642,
                        (Char const   *)"vgDrd_bm_clear_load", "");
  }
  b = (Addr )a1;
  while (b < (Addr )a2) {
    tmp___8 = address_msb((Addr const   )b);
    p2 = bm2_lookup_exclusive(bm, (UWord const   )tmp___8);
    b_next = first_address_with_higher_msb((Addr const   )b);
    if (b_next > (Addr )a2) {
      b_next = (Addr )a2;
    } else {

    }
    if ((unsigned int )p2 == (unsigned int )((struct bitmap2 *)0)) {
      goto __Cont;
    } else {

    }
    c = b;
    tmp___11 = address_lsb((Addr const   )c);
    tmp___12 = uword_lsb((UWord const   )tmp___11);
    if (tmp___12) {
      tmp___9 = first_address_with_higher_uword_msb((Addr const   )c);
      c_next = tmp___9;
      if (c_next > b_next) {
        c_next = b_next;
      } else {

      }
      tmp___10 = address_lsb((Addr const   )c);
      {
      if (c_next - c < 2) {
        return;
      }
      bm0_clear_range(p2->bm1.bm0_r, (UWord const   )tmp___10,
                      (SizeT const   )(((c_next - c) - 1UL) + 1UL));
      }
      c = c_next;
    } else {

    }
    tmp___16 = address_lsb((Addr const   )c);
    tmp___17 = uword_lsb((UWord const   )tmp___16);
    if (tmp___17 == 0UL) {
      tmp___13 = first_address_with_same_uword_lsb((Addr const   )b_next);
      c_next___0 = tmp___13;
      if (c_next___0 > c) {
        tmp___14 = address_lsb((Addr const   )c);
        tmp___15 = uword_msb((UWord const   )tmp___14);
        idx = tmp___15;
        {
        if ((c_next___0 - c) / 8UL < 2) {
          return;
        }
        vgPlain_memset((void *)(& p2->bm1.bm0_r[idx]), 0,
                       ((c_next___0 - c) / 8UL - 1UL) + 1UL);
        }
        c = c_next___0;
      } else {

      }
    } else {

    }
    tmp___18 = address_lsb((Addr const   )c);
    {
    if (b_next - c < 2) {
      return;
    }
    bm0_clear_range(p2->bm1.bm0_r, (UWord const   )tmp___18,
                    (SizeT const   )(((b_next - c) - 1UL) + 1UL));
    }
    __Cont: /* CIL Label */ 
    b = b_next;
  }
  return;
}
}
void vgDrd_bm_clear_store(struct bitmap * const  bm , Addr const   a1 ,
                          Addr const   a2 ) 
{ 
  Addr b ;
  Addr b_next ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  Addr tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  Addr tmp___5 ;
  int tmp___6 ;
  long tmp___7 ;
  struct bitmap2 *p2 ;
  Addr c ;
  UWord tmp___8 ;
  Addr c_next ;
  Addr tmp___9 ;
  UWord tmp___10 ;
  UWord tmp___11 ;
  UWord tmp___12 ;
  Addr c_next___0 ;
  Addr tmp___13 ;
  UWord idx ;
  UWord tmp___14 ;
  UWord tmp___15 ;
  UWord tmp___16 ;
  UWord tmp___17 ;
  UWord tmp___18 ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 720,
                        (Char const   *)"vgDrd_bm_clear_store", "");
  }
  tmp___0 = __builtin_expect((long )(! (! a1)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"a1",
                        (Char const   *)"drd_bitmap.c", 721,
                        (Char const   *)"vgDrd_bm_clear_store", "");
  }
  tmp___1 = __builtin_expect((long )(! (! (a1 <= a2))), 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"a1 <= a2",
                        (Char const   *)"drd_bitmap.c", 722,
                        (Char const   *)"vgDrd_bm_clear_store", "");
  }
  tmp___2 = first_address_with_same_lsb(a1);
  if (a1 == (Addr const   )tmp___2) {
    tmp___3 = 1;
  } else {
    tmp___3 = 0;
  }
  tmp___4 = __builtin_expect((long )tmp___3, 1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a1 == first_address_with_same_lsb(a1)",
                        (Char const   *)"drd_bitmap.c", 723,
                        (Char const   *)"vgDrd_bm_clear_store", "");
  }
  tmp___5 = first_address_with_same_lsb(a2);
  if (a2 == (Addr const   )tmp___5) {
    tmp___6 = 1;
  } else {
    tmp___6 = 0;
  }
  tmp___7 = __builtin_expect((long )tmp___6, 1L);
  if (tmp___7) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"a2 == first_address_with_same_lsb(a2)",
                        (Char const   *)"drd_bitmap.c", 724,
                        (Char const   *)"vgDrd_bm_clear_store", "");
  }
  b = (Addr )a1;
  while (b < (Addr )a2) {
    tmp___8 = address_msb((Addr const   )b);
    p2 = bm2_lookup_exclusive(bm, (UWord const   )tmp___8);
    b_next = first_address_with_higher_msb((Addr const   )b);
    if (b_next > (Addr )a2) {
      b_next = (Addr )a2;
    } else {

    }
    if ((unsigned int )p2 == (unsigned int )((struct bitmap2 *)0)) {
      goto __Cont;
    } else {

    }
    c = b;
    tmp___11 = address_lsb((Addr const   )c);
    tmp___12 = uword_lsb((UWord const   )tmp___11);
    if (tmp___12) {
      tmp___9 = first_address_with_higher_uword_msb((Addr const   )c);
      c_next = tmp___9;
      if (c_next > b_next) {
        c_next = b_next;
      } else {

      }
      tmp___10 = address_lsb((Addr const   )c);
      {
      if (c_next - c < 2) {
        return;
      }
      bm0_clear_range(p2->bm1.bm0_w, (UWord const   )tmp___10,
                      (SizeT const   )(((c_next - c) - 1UL) + 1UL));
      }
      c = c_next;
    } else {

    }
    tmp___16 = address_lsb((Addr const   )c);
    tmp___17 = uword_lsb((UWord const   )tmp___16);
    if (tmp___17 == 0UL) {
      tmp___13 = first_address_with_same_uword_lsb((Addr const   )b_next);
      c_next___0 = tmp___13;
      if (c_next___0 > c) {
        tmp___14 = address_lsb((Addr const   )c);
        tmp___15 = uword_msb((UWord const   )tmp___14);
        idx = tmp___15;
        {
        if ((c_next___0 - c) / 8UL < 2) {
          return;
        }
        vgPlain_memset((void *)(& p2->bm1.bm0_w[idx]), 0,
                       ((c_next___0 - c) / 8UL - 1UL) + 1UL);
        }
        c = c_next___0;
      } else {

      }
    } else {

    }
    tmp___18 = address_lsb((Addr const   )c);
    {
    if (b_next - c < 2) {
      return;
    }
    bm0_clear_range(p2->bm1.bm0_w, (UWord const   )tmp___18,
                    (SizeT const   )(((b_next - c) - 1UL) + 1UL));
    }
    __Cont: /* CIL Label */ 
    b = b_next;
  }
  return;
}
}
Bool vgDrd_bm_test_and_clear(struct bitmap * const  bm , Addr const   a1 ,
                             Addr const   a2 ) 
{ 
  Bool result ;
  Bool tmp ;

  {
  tmp = vgDrd_bm_has_any_access(bm, a1, a2);
  result = (Bool )((int )tmp != 0);
  vgDrd_bm_clear(bm, a1, a2);
  return (result);
}
}
Bool vgDrd_bm_has_conflict_with(struct bitmap * const  bm , Addr const   a1 ,
                                Addr const   a2 ,
                                BmAccessTypeT const   access_type ) 
{ 
  Addr b ;
  Addr b_next ;
  long tmp ;
  struct bitmap2  const  *bm2 ;
  UWord tmp___0 ;
  struct bitmap2  const  *tmp___1 ;
  Addr b_start ;
  Addr b_end ;
  UWord b0 ;
  struct bitmap1  const  *p1 ;
  Addr tmp___2 ;
  Addr tmp___3 ;
  int tmp___4 ;
  long tmp___5 ;
  Addr tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  long tmp___9 ;
  UWord tmp___10 ;
  UWord tmp___11 ;
  int tmp___12 ;
  long tmp___13 ;
  UWord tmp___14 ;
  long tmp___15 ;
  UWord tmp___16 ;
  UWord tmp___17 ;
  UWord tmp___18 ;

  {
  tmp = __builtin_expect((long )(! (! bm)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm",
                        (Char const   *)"drd_bitmap.c", 814,
                        (Char const   *)"vgDrd_bm_has_conflict_with", "");
  }
  b = (Addr )a1;
  while (b < (Addr )a2) {
    tmp___0 = address_msb((Addr const   )b);
    tmp___1 = bm2_lookup(bm, (UWord const   )tmp___0);
    bm2 = tmp___1;
    b_next = first_address_with_higher_msb((Addr const   )b);
    if (b_next > (Addr )a2) {
      b_next = (Addr )a2;
    } else {

    }
    if (bm2) {
      p1 = & bm2->bm1;
      tmp___3 = make_address(bm2->addr, (UWord const   )0);
      if (tmp___3 < (Addr )a1) {
        b_start = (Addr )a1;
      } else {
        tmp___2 = make_address(bm2->addr, (UWord const   )0);
        if (tmp___2 < (Addr )a2) {
          b_start = make_address(bm2->addr, (UWord const   )0);
        } else {
          break;
        }
      }
      if (a1 <= (Addr const   )b_start) {
        if (b_start <= (Addr )a2) {
          tmp___4 = 1;
        } else {
          tmp___4 = 0;
        }
      } else {
        tmp___4 = 0;
      }
      tmp___5 = __builtin_expect((long )tmp___4, 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"a1 <= b_start && b_start <= a2",
                            (Char const   *)"drd_bitmap.c", 840,
                            (Char const   *)"vgDrd_bm_has_conflict_with", "");
      }
      tmp___6 = make_address(bm2->addr + 1UL, (UWord const   )0);
      if (tmp___6 < (Addr )a2) {
        b_end = make_address(bm2->addr + 1UL, (UWord const   )0);
      } else {
        b_end = (Addr )a2;
      }
      if (a1 <= (Addr const   )b_end) {
        if (b_end <= (Addr )a2) {
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
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"a1 <= b_end && b_end <= a2",
                            (Char const   *)"drd_bitmap.c", 846,
                            (Char const   *)"vgDrd_bm_has_conflict_with", "");
      }
      tmp___9 = __builtin_expect((long )(! (! (b_start < b_end))), 1L);
      if (tmp___9) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"b_start < b_end",
                            (Char const   *)"drd_bitmap.c", 847,
                            (Char const   *)"vgDrd_bm_has_conflict_with", "");
      }
      tmp___10 = address_lsb((Addr const   )b_start);
      tmp___11 = address_lsb((Addr const   )(b_end - 1UL));
      if (tmp___10 <= tmp___11) {
        tmp___12 = 1;
      } else {
        tmp___12 = 0;
      }
      tmp___13 = __builtin_expect((long )tmp___12, 1L);
      if (tmp___13) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"address_lsb(b_start) <= address_lsb(b_end - 1)",
                            (Char const   *)"drd_bitmap.c", 848,
                            (Char const   *)"vgDrd_bm_has_conflict_with", "");
      }
      b0 = address_lsb((Addr const   )b_start);
      while (1) {
        tmp___18 = address_lsb((Addr const   )(b_end - 1UL));
        if (b0 <= tmp___18) {

        } else {
          break;
        }
        if ((unsigned int const   )access_type == 0U) {
          tmp___14 = bm0_is_set((UWord const   *)(p1->bm0_w), (UWord const   )b0);
          if (tmp___14) {
            return ((Bool )1);
          } else {

          }
        } else {
          tmp___15 = __builtin_expect((long )(! (! ((unsigned int const   )access_type == 1U))),
                                      1L);
          if (tmp___15) {

          } else {
            vgPlain_assert_fail((Bool )0,
                                (Char const   *)"access_type == eStore",
                                (Char const   *)"drd_bitmap.c", 861,
                                (Char const   *)"vgDrd_bm_has_conflict_with", "");
          }
          tmp___16 = bm0_is_set((UWord const   *)(p1->bm0_r), (UWord const   )b0);
          tmp___17 = bm0_is_set((UWord const   *)(p1->bm0_w), (UWord const   )b0);
          if (tmp___16 | tmp___17) {
            return ((Bool )1);
          } else {

          }
        }
        b0 ++;
      }
    } else {

    }
    b = b_next;
  }
  return ((Bool )0);
}
}
Bool vgDrd_bm_load_has_conflict_with(struct bitmap * const  bm ,
                                     Addr const   a1 , Addr const   a2 ) 
{ 
  Bool tmp ;

  {
  tmp = vgDrd_bm_has_conflict_with(bm, a1, a2, (BmAccessTypeT const   )0);
  return (tmp);
}
}
Bool vgDrd_bm_load_1_has_conflict_with(struct bitmap * const  bm ,
                                       Addr const   a1 ) 
{ 
  Bool tmp ;

  {
  tmp = bm_aligned_load_has_conflict_with(bm, a1, (SizeT const   )1);
  return (tmp);
}
}
Bool vgDrd_bm_load_2_has_conflict_with(struct bitmap * const  bm ,
                                       Addr const   a1 ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;

  {
  if ((a1 & 1UL) == 0UL) {
    tmp = bm_aligned_load_has_conflict_with(bm, a1, (SizeT const   )2);
    return (tmp);
  } else {
    tmp___0 = vgDrd_bm_has_conflict_with(bm, a1, a1 + 2UL,
                                         (BmAccessTypeT const   )0);
    return (tmp___0);
  }
}
}
Bool vgDrd_bm_load_4_has_conflict_with(struct bitmap * const  bm ,
                                       Addr const   a1 ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;

  {
  if ((a1 & 3UL) == 0UL) {
    tmp = bm_aligned_load_has_conflict_with(bm, a1, (SizeT const   )4);
    return (tmp);
  } else {
    tmp___0 = vgDrd_bm_has_conflict_with(bm, a1, a1 + 4UL,
                                         (BmAccessTypeT const   )0);
    return (tmp___0);
  }
}
}
Bool vgDrd_bm_load_8_has_conflict_with(struct bitmap * const  bm ,
                                       Addr const   a1 ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;

  {
  if ((a1 & 7UL) == 0UL) {
    tmp = bm_aligned_load_has_conflict_with(bm, a1, (SizeT const   )8);
    return (tmp);
  } else {
    tmp___0 = vgDrd_bm_has_conflict_with(bm, a1, a1 + 8UL,
                                         (BmAccessTypeT const   )0);
    return (tmp___0);
  }
}
}
Bool vgDrd_bm_store_1_has_conflict_with(struct bitmap * const  bm ,
                                        Addr const   a1 ) 
{ 
  Bool tmp ;

  {
  tmp = bm_aligned_store_has_conflict_with(bm, a1, (SizeT const   )1);
  return (tmp);
}
}
Bool vgDrd_bm_store_2_has_conflict_with(struct bitmap * const  bm ,
                                        Addr const   a1 ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;

  {
  if ((a1 & 1UL) == 0UL) {
    tmp = bm_aligned_store_has_conflict_with(bm, a1, (SizeT const   )2);
    return (tmp);
  } else {
    tmp___0 = vgDrd_bm_has_conflict_with(bm, a1, a1 + 2UL,
                                         (BmAccessTypeT const   )1);
    return (tmp___0);
  }
}
}
Bool vgDrd_bm_store_4_has_conflict_with(struct bitmap * const  bm ,
                                        Addr const   a1 ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;

  {
  if ((a1 & 3UL) == 0UL) {
    tmp = bm_aligned_store_has_conflict_with(bm, a1, (SizeT const   )4);
    return (tmp);
  } else {
    tmp___0 = vgDrd_bm_has_conflict_with(bm, a1, a1 + 4UL,
                                         (BmAccessTypeT const   )1);
    return (tmp___0);
  }
}
}
Bool vgDrd_bm_store_8_has_conflict_with(struct bitmap * const  bm ,
                                        Addr const   a1 ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;

  {
  if ((a1 & 7UL) == 0UL) {
    tmp = bm_aligned_store_has_conflict_with(bm, a1, (SizeT const   )8);
    return (tmp);
  } else {
    tmp___0 = vgDrd_bm_has_conflict_with(bm, a1, a1 + 8UL,
                                         (BmAccessTypeT const   )1);
    return (tmp___0);
  }
}
}
Bool vgDrd_bm_store_has_conflict_with(struct bitmap * const  bm ,
                                      Addr const   a1 , Addr const   a2 ) 
{ 
  Bool tmp ;

  {
  tmp = vgDrd_bm_has_conflict_with(bm, a1, a2, (BmAccessTypeT const   )1);
  return (tmp);
}
}
Bool vgDrd_bm_equal(struct bitmap * const  lhs , struct bitmap * const  rhs ) 
{ 
  struct bitmap2 *bm2l ;
  struct bitmap2 *bm2r ;
  long tmp ;
  void *tmp___0 ;
  Addr tmp___1 ;
  Addr tmp___2 ;
  Bool tmp___3 ;
  long tmp___4 ;
  void *tmp___5 ;
  Addr tmp___6 ;
  Addr tmp___7 ;
  Bool tmp___8 ;
  long tmp___9 ;
  Addr tmp___10 ;
  Addr tmp___11 ;
  Bool tmp___12 ;
  int tmp___13 ;
  long tmp___14 ;
  Int tmp___15 ;
  void *tmp___16 ;
  void *tmp___17 ;
  Addr tmp___18 ;
  Addr tmp___19 ;
  Bool tmp___20 ;
  Addr tmp___21 ;
  Addr tmp___22 ;
  Bool tmp___23 ;
  int tmp___24 ;
  long tmp___25 ;

  {
  tmp = __builtin_expect((long )(! (! ((unsigned int )lhs != (unsigned int )rhs))),
                         1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lhs != rhs",
                        (Char const   *)"drd_bitmap.c", 955,
                        (Char const   *)"vgDrd_bm_equal", "");
  }
  vgPlain_OSetGen_ResetIter(lhs->oset);
  vgPlain_OSetGen_ResetIter(rhs->oset);
  while (1) {
    tmp___16 = vgPlain_OSetGen_Next(lhs->oset);
    bm2l = (struct bitmap2 *)tmp___16;
    if ((unsigned int )bm2l != (unsigned int )((struct bitmap2 *)0)) {

    } else {
      break;
    }
    while (1) {
      if (bm2l) {
        tmp___1 = make_address((UWord const   )(bm2l->addr + 1UL),
                               (UWord const   )0);
        tmp___2 = make_address((UWord const   )bm2l->addr, (UWord const   )0);
        tmp___3 = vgDrd_bm_has_any_access(lhs, (Addr const   )tmp___2,
                                          (Addr const   )tmp___1);
        if (tmp___3) {
          break;
        } else {

        }
      } else {
        break;
      }
      tmp___0 = vgPlain_OSetGen_Next(lhs->oset);
      bm2l = (struct bitmap2 *)tmp___0;
    }
    if ((unsigned int )bm2l == (unsigned int )((struct bitmap2 *)0)) {
      break;
    } else {

    }
    tmp___4 = __builtin_expect((long )(! (! bm2l)), 1L);
    if (tmp___4) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"bm2l",
                          (Char const   *)"drd_bitmap.c", 971,
                          (Char const   *)"vgDrd_bm_equal", "");
    }
    while (1) {
      tmp___5 = vgPlain_OSetGen_Next(rhs->oset);
      bm2r = (struct bitmap2 *)tmp___5;
      if ((unsigned int )bm2r == (unsigned int )((struct bitmap2 *)0)) {
        return ((Bool )0);
      } else {

      }
      tmp___6 = make_address((UWord const   )(bm2r->addr + 1UL),
                             (UWord const   )0);
      tmp___7 = make_address((UWord const   )bm2r->addr, (UWord const   )0);
      tmp___8 = vgDrd_bm_has_any_access(rhs, (Addr const   )tmp___7,
                                        (Addr const   )tmp___6);
      if (tmp___8) {
        break;
      } else {

      }
    }
    tmp___9 = __builtin_expect((long )(! (! bm2r)), 1L);
    if (tmp___9) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"bm2r",
                          (Char const   *)"drd_bitmap.c", 983,
                          (Char const   *)"vgDrd_bm_equal", "");
    }
    tmp___10 = make_address((UWord const   )(bm2r->addr + 1UL),
                            (UWord const   )0);
    tmp___11 = make_address((UWord const   )bm2r->addr, (UWord const   )0);
    tmp___12 = vgDrd_bm_has_any_access(rhs, (Addr const   )tmp___11,
                                       (Addr const   )tmp___10);
    if (tmp___12) {
      tmp___13 = 1;
    } else {
      tmp___13 = 0;
    }
    tmp___14 = __builtin_expect((long )tmp___13, 1L);
    if (tmp___14) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"DRD_(bm_has_any_access)(rhs, make_address(bm2r->addr, 0), make_address(bm2r->addr + 1, 0))",
                          (Char const   *)"drd_bitmap.c", 986,
                          (Char const   *)"vgDrd_bm_equal", "");
    }
    if ((unsigned int )bm2l != (unsigned int )bm2r) {
      if (bm2l->addr != bm2r->addr) {
        return ((Bool )0);
      } else {
        tmp___15 = vgPlain_memcmp((void const   *)(& bm2l->bm1),
                                  (void const   *)(& bm2r->bm1),
                                  (SizeT )sizeof(bm2l->bm1));
        if (tmp___15 != 0) {
          return ((Bool )0);
        } else {

        }
      }
    } else {

    }
  }
  while (1) {
    tmp___17 = vgPlain_OSetGen_Next(rhs->oset);
    bm2r = (struct bitmap2 *)tmp___17;
    if (bm2r) {
      tmp___18 = make_address((UWord const   )(bm2r->addr + 1UL),
                              (UWord const   )0);
      tmp___19 = make_address((UWord const   )bm2r->addr, (UWord const   )0);
      tmp___20 = vgDrd_bm_has_any_access(rhs, (Addr const   )tmp___19,
                                         (Addr const   )tmp___18);
      if (tmp___20) {
        break;
      } else {

      }
    } else {
      break;
    }
  }
  if (bm2r) {
    tmp___21 = make_address((UWord const   )(bm2r->addr + 1UL),
                            (UWord const   )0);
    tmp___22 = make_address((UWord const   )bm2r->addr, (UWord const   )0);
    tmp___23 = vgDrd_bm_has_any_access(rhs, (Addr const   )tmp___22,
                                       (Addr const   )tmp___21);
    if (tmp___23) {
      tmp___24 = 1;
    } else {
      tmp___24 = 0;
    }
    tmp___25 = __builtin_expect((long )tmp___24, 1L);
    if (tmp___25) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"DRD_(bm_has_any_access)(rhs, make_address(bm2r->addr, 0), make_address(bm2r->addr + 1, 0))",
                          (Char const   *)"drd_bitmap.c", 1006,
                          (Char const   *)"vgDrd_bm_equal", "");
    }
    return ((Bool )0);
  } else {

  }
  return ((Bool )1);
}
}
void vgDrd_bm_swap(struct bitmap * const  bm1 , struct bitmap * const  bm2 ) 
{ 
  OSet *tmp ;

  {
  tmp = bm1->oset;
  bm1->oset = bm2->oset;
  bm2->oset = tmp;
  return;
}
}
void vgDrd_bm_merge2(struct bitmap * const  lhs , struct bitmap * const  rhs ) 
{ 
  struct bitmap2 *bm2l ;
  struct bitmap2 *bm2r ;
  long tmp ;
  void *tmp___0 ;
  long tmp___1 ;
  void *tmp___2 ;

  {
  tmp = __builtin_expect((long )(! (! ((unsigned int )lhs != (unsigned int )rhs))),
                         1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lhs != rhs",
                        (Char const   *)"drd_bitmap.c", 1029,
                        (Char const   *)"vgDrd_bm_merge2", "");
  }
  s_bitmap_merge_count ++;
  vgPlain_OSetGen_ResetIter(rhs->oset);
  while (1) {
    tmp___2 = vgPlain_OSetGen_Next(rhs->oset);
    bm2r = (struct bitmap2 *)tmp___2;
    if ((unsigned int )bm2r != (unsigned int )((struct bitmap2 *)0)) {

    } else {
      break;
    }
    tmp___0 = vgPlain_OSetGen_Lookup((OSet const   *)lhs->oset,
                                     (void const   *)(& bm2r->addr));
    bm2l = (struct bitmap2 *)tmp___0;
    if (bm2l) {
      tmp___1 = __builtin_expect((long )(! (! ((unsigned int )bm2l != (unsigned int )bm2r))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"bm2l != bm2r",
                            (Char const   *)"drd_bitmap.c", 1040,
                            (Char const   *)"vgDrd_bm_merge2", "");
      }
      bm2_merge((struct bitmap2 */* const  */)bm2l,
                (struct bitmap2  const  */* const  */)bm2r);
    } else {
      bm2_insert_copy(lhs, (struct bitmap2 */* const  */)bm2r);
    }
  }
  return;
}
}
void vgDrd_bm_unmark(struct bitmap *bm ) 
{ 
  struct bitmap2 *bm2 ;
  void *tmp ;

  {
  vgPlain_OSetGen_ResetIter(bm->oset);
  while (1) {
    tmp = vgPlain_OSetGen_Next(bm->oset);
    bm2 = (struct bitmap2 *)tmp;
    if ((unsigned int )bm2 != (unsigned int )((struct bitmap2 *)0)) {

    } else {
      break;
    }
    bm2->recalc = (Bool )0;
  }
  return;
}
}
Bool vgDrd_bm_is_marked(struct bitmap *bm , Addr const   a ) 
{ 
  struct bitmap2  const  *bm2 ;
  int tmp ;

  {
  bm2 = bm2_lookup((struct bitmap */* const  */)bm, a);
  if (bm2) {
    if (bm2->recalc) {
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
void vgDrd_bm_mark(struct bitmap *bml , struct bitmap *bmr ) 
{ 
  struct bitmap2 *bm2l ;
  struct bitmap2 *bm2r ;
  void *tmp ;

  {
  vgPlain_OSetGen_ResetIter(bmr->oset);
  while (1) {
    tmp = vgPlain_OSetGen_Next(bmr->oset);
    bm2r = (struct bitmap2 *)tmp;
    if ((unsigned int )bm2r != (unsigned int )((struct bitmap2 *)0)) {

    } else {
      break;
    }
    bm2l = bm2_lookup_or_insert((struct bitmap */* const  */)bml,
                                (UWord const   )bm2r->addr);
    bm2l->recalc = (Bool )1;
  }
  return;
}
}
void vgDrd_bm_clear_marked(struct bitmap *bm ) 
{ 
  struct bitmap2 *bm2 ;
  void *tmp ;

  {
  vgPlain_OSetGen_ResetIter(bm->oset);
  while (1) {
    tmp = vgPlain_OSetGen_Next(bm->oset);
    bm2 = (struct bitmap2 *)tmp;
    if ((unsigned int )bm2 != (unsigned int )((struct bitmap2 *)0)) {

    } else {
      break;
    }
    if (bm2->recalc) {
      bm2_clear((struct bitmap2 */* const  */)bm2);
    } else {

    }
  }
  return;
}
}
void vgDrd_bm_merge2_marked(struct bitmap * const  lhs ,
                            struct bitmap * const  rhs ) 
{ 
  struct bitmap2 *bm2l ;
  struct bitmap2 *bm2r ;
  long tmp ;
  void *tmp___0 ;
  long tmp___1 ;
  void *tmp___2 ;

  {
  tmp = __builtin_expect((long )(! (! ((unsigned int )lhs != (unsigned int )rhs))),
                         1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"lhs != rhs",
                        (Char const   *)"drd_bitmap.c", 1120,
                        (Char const   *)"vgDrd_bm_merge2_marked", "");
  }
  s_bitmap_merge_count ++;
  vgPlain_OSetGen_ResetIter(rhs->oset);
  while (1) {
    tmp___2 = vgPlain_OSetGen_Next(rhs->oset);
    bm2r = (struct bitmap2 *)tmp___2;
    if ((unsigned int )bm2r != (unsigned int )((struct bitmap2 *)0)) {

    } else {
      break;
    }
    tmp___0 = vgPlain_OSetGen_Lookup((OSet const   *)lhs->oset,
                                     (void const   *)(& bm2r->addr));
    bm2l = (struct bitmap2 *)tmp___0;
    if (bm2l) {
      if (bm2l->recalc) {
        tmp___1 = __builtin_expect((long )(! (! ((unsigned int )bm2l != (unsigned int )bm2r))),
                                   1L);
        if (tmp___1) {

        } else {
          vgPlain_assert_fail((Bool )0, (Char const   *)"bm2l != bm2r",
                              (Char const   *)"drd_bitmap.c", 1131,
                              (Char const   *)"vgDrd_bm_merge2_marked", "");
        }
        bm2_merge((struct bitmap2 */* const  */)bm2l,
                  (struct bitmap2  const  */* const  */)bm2r);
      } else {

      }
    } else {

    }
  }
  return;
}
}
void vgDrd_bm_remove_cleared_marked(struct bitmap *bm ) 
{ 
  struct bitmap2 *bm2 ;
  UWord a1 ;
  Addr tmp ;
  Addr tmp___0 ;
  Bool tmp___1 ;
  void *tmp___2 ;

  {
  vgPlain_OSetGen_ResetIter(bm->oset);
  while (1) {
    tmp___2 = vgPlain_OSetGen_Next(bm->oset);
    bm2 = (struct bitmap2 *)tmp___2;
    if ((unsigned int )bm2 != (unsigned int )((struct bitmap2 *)0)) {

    } else {
      break;
    }
    a1 = bm2->addr;
    if (bm2->recalc) {
      tmp = make_address((UWord const   )(a1 + 1UL), (UWord const   )0);
      tmp___0 = make_address((UWord const   )a1, (UWord const   )0);
      tmp___1 = vgDrd_bm_has_any_access((struct bitmap */* const  */)bm,
                                        (Addr const   )tmp___0,
                                        (Addr const   )tmp);
      if (tmp___1) {

      } else {
        bm2_remove((struct bitmap */* const  */)bm, (UWord const   )a1);
        vgPlain_OSetGen_ResetIterAt(bm->oset, (void const   *)(& a1));
      }
    } else {

    }
  }
  return;
}
}
int vgDrd_bm_has_races(struct bitmap * const  lhs , struct bitmap * const  rhs ) 
{ 
  struct bitmap2  const  *bm2l ;
  struct bitmap2  const  *bm2r ;
  struct bitmap1  const  *bm1l ;
  struct bitmap1  const  *bm1r ;
  unsigned int k ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  unsigned int b ;
  UWord access_mask ;
  UWord tmp___3 ;
  int tmp___4 ;
  UWord tmp___5 ;
  UWord tmp___6 ;
  int tmp___7 ;
  UWord tmp___8 ;
  UWord tmp___9 ;
  int tmp___10 ;
  UWord tmp___11 ;
  UWord tmp___12 ;
  int tmp___13 ;
  UWord tmp___14 ;
  Addr a ;
  Addr tmp___15 ;
  Bool tmp___16 ;

  {
  vgPlain_OSetGen_ResetIter(lhs->oset);
  vgPlain_OSetGen_ResetIter(rhs->oset);
  while (1) {
    tmp = vgPlain_OSetGen_Next(lhs->oset);
    bm2l = (struct bitmap2  const  *)tmp;
    tmp___0 = vgPlain_OSetGen_Next(rhs->oset);
    bm2r = (struct bitmap2  const  *)tmp___0;
    while (1) {
      if (bm2l) {
        if (bm2r) {
          if (bm2l->addr != bm2r->addr) {

          } else {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
      if (bm2l->addr < bm2r->addr) {
        tmp___1 = vgPlain_OSetGen_Next(lhs->oset);
        bm2l = (struct bitmap2  const  *)tmp___1;
      } else {
        tmp___2 = vgPlain_OSetGen_Next(rhs->oset);
        bm2r = (struct bitmap2  const  *)tmp___2;
      }
    }
    if ((unsigned int )bm2l == (unsigned int )((struct bitmap2  const  *)0)) {
      break;
    } else
    if ((unsigned int )bm2r == (unsigned int )((struct bitmap2  const  *)0)) {
      break;
    } else {

    }
    bm1l = & bm2l->bm1;
    bm1r = & bm2r->bm1;
    k = 0U;
    while (k < 1U << 7) {
      b = 0U;
      while (b < 8U * sizeof(UWord )) {
        tmp___5 = bm0_mask((UWord const   )b);
        if (bm1l->bm0_r[k] & tmp___5) {
          tmp___4 = 1;
        } else {
          tmp___4 = 0;
        }
        tmp___8 = bm0_mask((UWord const   )b);
        if (bm1l->bm0_w[k] & tmp___8) {
          tmp___7 = 1 << 1;
        } else {
          tmp___7 = 0;
        }
        tmp___11 = bm0_mask((UWord const   )b);
        if (bm1r->bm0_r[k] & tmp___11) {
          tmp___10 = 1 << 2;
        } else {
          tmp___10 = 0;
        }
        tmp___14 = bm0_mask((UWord const   )b);
        if (bm1r->bm0_w[k] & tmp___14) {
          tmp___13 = 1 << 3;
        } else {
          tmp___13 = 0;
        }
        access_mask = (UWord )(((tmp___4 | tmp___7) | tmp___10) | tmp___13);
        tmp___15 = make_address(bm2l->addr,
                                (UWord const   )(k * (8U * sizeof(UWord )) | b));
        a = tmp___15;
        if (access_mask & (unsigned long )(1 << 3)) {
          if (access_mask & (unsigned long )(1 | (1 << 1))) {
            goto _L;
          } else {
            goto _L___0;
          }
        } else
        _L___0: /* CIL Label */ 
        if (access_mask & (unsigned long )(1 << 1)) {
          if (access_mask & (unsigned long )((1 << 2) | (1 << 3))) {
            _L: /* CIL Label */ 
            tmp___16 = vgDrd_is_suppressed((Addr const   )a,
                                           (Addr const   )(a + 1UL));
            if (tmp___16) {

            } else {
              return (1);
            }
          } else {

          }
        } else {

        }
        b ++;
      }
      k ++;
    }
  }
  return (0);
}
}
void vgDrd_bm_print(struct bitmap * const  bm ) 
{ 
  struct bitmap2 *bm2 ;
  void *tmp ;

  {
  vgPlain_OSetGen_ResetIter(bm->oset);
  while (1) {
    tmp = vgPlain_OSetGen_Next(bm->oset);
    bm2 = (struct bitmap2 *)tmp;
    if ((unsigned int )bm2 != (unsigned int )((struct bitmap2 *)0)) {

    } else {
      break;
    }
    bm2_print((struct bitmap2  const  */* const  */)bm2);
  }
  return;
}
}
static void bm2_print(struct bitmap2  const  * const  bm2 ) 
{ 
  struct bitmap1  const  *bm1 ;
  Addr a ;
  long tmp ;
  Bool r ;
  UWord tmp___0 ;
  UWord tmp___1 ;
  Bool w ;
  UWord tmp___2 ;
  UWord tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  Addr tmp___6 ;

  {
  tmp = __builtin_expect((long )(! (! bm2)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm2",
                        (Char const   *)"drd_bitmap.c", 1228,
                        (Char const   *)"bm2_print", "");
  }
  bm1 = & bm2->bm1;
  a = make_address(bm2->addr, (UWord const   )0);
  while (1) {
    tmp___6 = make_address(bm2->addr + 1UL, (UWord const   )0);
    if (a <= tmp___6 - 1UL) {

    } else {
      break;
    }
    tmp___0 = address_lsb((Addr const   )a);
    tmp___1 = bm0_is_set((UWord const   *)(bm1->bm0_r), (UWord const   )tmp___0);
    r = (Bool )(tmp___1 != 0UL);
    tmp___2 = address_lsb((Addr const   )a);
    tmp___3 = bm0_is_set((UWord const   *)(bm1->bm0_w), (UWord const   )tmp___2);
    w = (Bool )(tmp___3 != 0UL);
    if (r) {
      goto _L;
    } else
    if (w) {
      _L: /* CIL Label */ 
      if (r) {
        tmp___4 = 'R';
      } else {
        tmp___4 = ' ';
      }
      if (w) {
        tmp___5 = 'W';
      } else {
        tmp___5 = ' ';
      }
      vgPlain_printf("0x%08lx %c %c\n", a, tmp___5, tmp___4);
    } else {

    }
    a ++;
  }
  return;
}
}
ULong vgDrd_bm_get_bitmap_creation_count(void) 
{ 


  {
  return (s_bitmap_creation_count);
}
}
ULong vgDrd_bm_get_bitmap2_creation_count(void) 
{ 


  {
  return (s_bitmap2_creation_count);
}
}
ULong vgDrd_bm_get_bitmap2_merge_count(void) 
{ 


  {
  return (s_bitmap2_merge_count);
}
}
static void bm2_merge(struct bitmap2 * const  bm2l ,
                      struct bitmap2  const  * const  bm2r ) 
{ 
  unsigned int k ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;

  {
  tmp = __builtin_expect((long )(! (! bm2l)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm2l",
                        (Char const   *)"drd_bitmap.c", 1268,
                        (Char const   *)"bm2_merge", "");
  }
  tmp___0 = __builtin_expect((long )(! (! bm2r)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm2r",
                        (Char const   *)"drd_bitmap.c", 1269,
                        (Char const   *)"bm2_merge", "");
  }
  tmp___1 = __builtin_expect((long )(! (! (bm2l->addr == (Addr )bm2r->addr))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"bm2l->addr == bm2r->addr",
                        (Char const   *)"drd_bitmap.c", 1270,
                        (Char const   *)"bm2_merge", "");
  }
  s_bitmap2_merge_count ++;
  k = 0U;
  while (k < 1U << 7) {
    bm2l->bm1.bm0_r[k] |= bm2r->bm1.bm0_r[k];
    k ++;
  }
  k = 0U;
  while (k < 1U << 7) {
    bm2l->bm1.bm0_w[k] |= bm2r->bm1.bm0_w[k];
    k ++;
  }
  return;
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
Bool vgDrd_get_check_stack_accesses(void) ;
void vgDrd_set_check_stack_accesses(Bool const   c ) ;
Bool vgDrd_get_first_race_only(void) ;
void vgDrd_set_first_race_only(Bool const   fro ) ;
IRSB *vgDrd_instrument(VgCallbackClosure * const  closure ,
                       IRSB * const  bb_in , VexGuestLayout * const  layout ,
                       VexGuestExtents * const  vge , IRType const   gWordTy ,
                       IRType const   hWordTy ) ;
void vgDrd_trace_mem_access(Addr const   addr , SizeT const   size ,
                            BmAccessTypeT const   access_type ,
                            HWord const   stored_value_hi ,
                            HWord const   stored_value_lo ) ;
void ( __attribute__((__regparm__(2))) vgDrd_trace_load)(Addr addr , SizeT size ) ;
void ( __attribute__((__regparm__(2))) vgDrd_trace_store)(Addr addr ,
                                                          SizeT size ) ;
extern void vgDrd_clean_memory(Addr const   a1 , SizeT const   len ) ;
static ULong s_segment_merge_count  ;
static ULong s_segments_created_count  ;
static ULong s_segments_alive_count  ;
static ULong s_max_segments_alive_count  ;
static Bool s_trace_segment  ;
static void sg_init(Segment * const  sg , DrdThreadId const   creator ,
                    DrdThreadId const   created ) 
{ 
  Segment *creator_sg ;
  ThreadId vg_created ;
  ThreadId tmp ;
  long tmp___0 ;
  Bool tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  Segment *tmp___4 ;
  Addr tmp___5 ;
  char *vc ;

  {
  tmp = vgDrd_DrdThreadIdToVgThreadId(created);
  vg_created = tmp;
  tmp___0 = __builtin_expect((long )(! (! sg)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg",
                        (Char const   *)"drd_segment.c", 69,
                        (Char const   *)"sg_init", "");
  }
  if (creator == 0U) {
    tmp___2 = 1;
  } else {
    tmp___1 = vgDrd_IsValidDrdThreadId(creator);
    if (tmp___1) {
      tmp___2 = 1;
    } else {
      tmp___2 = 0;
    }
  }
  tmp___3 = __builtin_expect((long )tmp___2, 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"creator == DRD_INVALID_THREADID || DRD_(IsValidDrdThreadId)(creator)",
                        (Char const   *)"drd_segment.c", 71,
                        (Char const   *)"sg_init", "");
  }
  if (creator != 0U) {
    tmp___4 = vgDrd_thread_get_segment(creator);
    creator_sg = tmp___4;
  } else {
    creator_sg = (Segment *)0;
  }
  sg->g_next = (struct segment *)((void *)0);
  sg->g_prev = (struct segment *)((void *)0);
  sg->thr_next = (struct segment *)((void *)0);
  sg->thr_prev = (struct segment *)((void *)0);
  sg->tid = (DrdThreadId )created;
  sg->refcnt = 1;
  if (vg_created != 0U) {
    tmp___5 = vgPlain_get_SP(vg_created);
    if (tmp___5 != 0UL) {
      sg->stacktrace = vgPlain_record_ExeContext(vg_created, (Word )0);
    } else {
      sg->stacktrace = (ExeContext *)0;
    }
  } else {
    sg->stacktrace = (ExeContext *)0;
  }
  if (creator_sg) {
    vgDrd_vc_copy((VectorClock */* const  */)(& sg->vc),
                  (VectorClock const   */* const  */)(& creator_sg->vc));
  } else {
    vgDrd_vc_init((VectorClock */* const  */)(& sg->vc),
                  (VCElem const   */* const  */)0, (unsigned int const   )0);
  }
  vgDrd_vc_increment((VectorClock */* const  */)(& sg->vc), created);
  vgDrd_bm_init((struct bitmap */* const  */)(& sg->bm));
  if (s_trace_segment) {
    vc = vgDrd_vc_aprint((VectorClock const   */* const  */)(& sg->vc));
    vgPlain_message((VgMsgKind )2, "New segment for thread %d with vc %s\n",
                    created, vc);
    vgPlain_free((void *)vc);
  } else {

  }
  return;
}
}
static void vgDrd_sg_cleanup(Segment * const  sg ) 
{ 
  long tmp ;
  long tmp___0 ;

  {
  tmp = __builtin_expect((long )(! (! sg)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg",
                        (Char const   *)"drd_segment.c", 109,
                        (Char const   *)"vgDrd_sg_cleanup", "");
  }
  tmp___0 = __builtin_expect((long )(! (! (sg->refcnt == 0))), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg->refcnt == 0",
                        (Char const   *)"drd_segment.c", 110,
                        (Char const   *)"vgDrd_sg_cleanup", "");
  }
  vgDrd_vc_cleanup((VectorClock */* const  */)(& sg->vc));
  vgDrd_bm_cleanup((struct bitmap */* const  */)(& sg->bm));
  return;
}
}
Segment *vgDrd_sg_new(DrdThreadId const   creator , DrdThreadId const   created ) 
{ 
  Segment *sg ;
  void *tmp ;
  long tmp___0 ;

  {
  s_segments_created_count ++;
  s_segments_alive_count ++;
  if (s_max_segments_alive_count < s_segments_alive_count) {
    s_max_segments_alive_count = s_segments_alive_count;
  } else {

  }
  tmp = vgPlain_malloc((HChar *)"drd.segment.sn.1", (SizeT )sizeof(*sg));
  sg = (Segment *)tmp;
  tmp___0 = __builtin_expect((long )(! (! sg)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg",
                        (Char const   *)"drd_segment.c", 127,
                        (Char const   *)"vgDrd_sg_new", "");
  }
  sg_init((Segment */* const  */)sg, creator, created);
  if (vgDrd_g_sg_list) {
    vgDrd_g_sg_list->g_prev = sg;
    sg->g_next = vgDrd_g_sg_list;
  } else {

  }
  vgDrd_g_sg_list = sg;
  return (sg);
}
}
static void vgDrd_sg_delete(Segment * const  sg ) 
{ 
  char *vc ;
  Bool tmp ;
  long tmp___0 ;

  {
  tmp = vgDrd_sg_get_trace();
  if (tmp) {
    vc = vgDrd_vc_aprint((VectorClock const   */* const  */)(& sg->vc));
    vgPlain_message((VgMsgKind )2,
                    "Discarding the segment with vector clock %s\n", vc);
    vgPlain_free((void *)vc);
  } else {

  }
  s_segments_alive_count --;
  tmp___0 = __builtin_expect((long )(! (! sg)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg",
                        (Char const   *)"drd_segment.c", 151,
                        (Char const   *)"vgDrd_sg_delete", "");
  }
  if (sg->g_next) {
    (sg->g_next)->g_prev = sg->g_prev;
  } else {

  }
  if (sg->g_prev) {
    (sg->g_prev)->g_next = sg->g_next;
  } else {
    vgDrd_g_sg_list = sg->g_next;
  }
  vgDrd_sg_cleanup(sg);
  vgPlain_free((void *)sg);
  return;
}
}
Segment *vgDrd_sg_get(Segment * const  sg ) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! sg)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg",
                        (Char const   *)"drd_segment.c", 165,
                        (Char const   *)"vgDrd_sg_get", "");
  }
  (sg->refcnt) ++;
  return ((Segment *)sg);
}
}
void vgDrd_sg_put(Segment * const  sg ) 
{ 
  char *vc ;
  long tmp ;

  {
  if ((unsigned int )sg == (unsigned int )((Segment */* const  */)0)) {
    return;
  } else {

  }
  if (s_trace_segment) {
    vc = vgDrd_vc_aprint((VectorClock const   */* const  */)(& sg->vc));
    {
    if (sg->refcnt < 2) {
      return;
    }
    vgPlain_message((VgMsgKind )2,
                    "Decrementing segment reference count %d -> %d with vc %s\n",
                    sg->refcnt, sg->refcnt - 1, vc);
    }
    vgPlain_free((void *)vc);
  } else {

  }
  tmp = __builtin_expect((long )(! (! (sg->refcnt >= 1))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg->refcnt >= 1",
                        (Char const   *)"drd_segment.c", 191,
                        (Char const   *)"vgDrd_sg_put", "");
  }
  (sg->refcnt) --;
  if (sg->refcnt == 0) {
    vgDrd_sg_delete(sg);
  } else {

  }
  return;
}
}
void vgDrd_sg_merge(Segment * const  sg1 , Segment * const  sg2 ) 
{ 
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  char *vc1 ;
  char *vc2 ;

  {
  tmp = __builtin_expect((long )(! (! sg1)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg1",
                        (Char const   *)"drd_segment.c", 202,
                        (Char const   *)"vgDrd_sg_merge", "");
  }
  tmp___0 = __builtin_expect((long )(! (! (sg1->refcnt == 1))), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg1->refcnt == 1",
                        (Char const   *)"drd_segment.c", 203,
                        (Char const   *)"vgDrd_sg_merge", "");
  }
  tmp___1 = __builtin_expect((long )(! (! sg2)), 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg2",
                        (Char const   *)"drd_segment.c", 204,
                        (Char const   *)"vgDrd_sg_merge", "");
  }
  tmp___2 = __builtin_expect((long )(! (! (sg2->refcnt == 1))), 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg2->refcnt == 1",
                        (Char const   *)"drd_segment.c", 205,
                        (Char const   *)"vgDrd_sg_merge", "");
  }
  if (s_trace_segment) {
    vc1 = vgDrd_vc_aprint((VectorClock const   */* const  */)(& sg1->vc));
    vc2 = vgDrd_vc_aprint((VectorClock const   */* const  */)(& sg2->vc));
    vgPlain_message((VgMsgKind )2,
                    "Merging segments with vector clocks %s and %s\n", vc1, vc2);
    vgPlain_free((void *)vc1);
    vgPlain_free((void *)vc2);
  } else {

  }
  s_segment_merge_count ++;
  vgDrd_bm_merge2((struct bitmap */* const  */)(& sg1->bm),
                  (struct bitmap */* const  */)(& sg2->bm));
  return;
}
}
void vgDrd_sg_print(Segment * const  sg ) 
{ 
  long tmp ;

  {
  tmp = __builtin_expect((long )(! (! sg)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg",
                        (Char const   *)"drd_segment.c", 231,
                        (Char const   *)"vgDrd_sg_print", "");
  }
  vgPlain_printf("vc: ");
  vgDrd_vc_print((VectorClock const   */* const  */)(& sg->vc));
  vgPlain_printf("\n");
  vgDrd_bm_print((struct bitmap */* const  */)(& sg->bm));
  return;
}
}
Bool vgDrd_sg_get_trace(void) 
{ 


  {
  return (s_trace_segment);
}
}
void vgDrd_sg_set_trace(Bool const   trace_segment ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if ((int const   )trace_segment == 0) {
    tmp = 1;
  } else
  if ((int const   )trace_segment == 1) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"trace_segment == False || trace_segment == True",
                        (Char const   *)"drd_segment.c", 247,
                        (Char const   *)"vgDrd_sg_set_trace", "");
  }
  s_trace_segment = (Bool )trace_segment;
  return;
}
}
ULong vgDrd_sg_get_segments_created_count(void) 
{ 


  {
  return (s_segments_created_count);
}
}
ULong vgDrd_sg_get_segments_alive_count(void) 
{ 


  {
  return (s_segments_alive_count);
}
}
ULong vgDrd_sg_get_max_segments_alive_count(void) 
{ 


  {
  return (s_max_segments_alive_count);
}
}
ULong vgDrd_sg_get_segment_merge_count(void) 
{ 


  {
  return (s_segment_merge_count);
}
}
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
extern Bool vgDrd_g_free_is_write ;
extern void vgDrd_clientreq_init(void) ;
extern void vgDrd_barrier_set_trace(Bool const   trace_barrier ) ;
extern void vgDrd_barrier_init(Addr const   barrier ,
                               BarrierT const   barrier_type ,
                               Word const   count ,
                               Bool const   reinitialization ) ;
extern void vgDrd_barrier_destroy(Addr const   barrier ,
                                  BarrierT const   barrier_type ) ;
extern void vgDrd_barrier_pre_wait(DrdThreadId const   tid ,
                                   Addr const   barrier ,
                                   BarrierT const   barrier_type ) ;
extern void vgDrd_barrier_post_wait(DrdThreadId const   tid ,
                                    Addr const   barrier ,
                                    BarrierT const   barrier_type ,
                                    Bool const   waited ,
                                    Bool const   serializing ) ;
extern void vgDrd_barrier_stop_using_mem(Addr const   a1 , Addr const   a2 ) ;
extern ULong vgDrd_get_barrier_segment_creation_count(void) ;
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
extern void vgDrd_clientobj_set_trace(Bool const   trace ) ;
extern void vgDrd_clientobj_init(void) ;
extern void vgDrd_clientobj_cleanup(void) ;
extern DrdClientobj *vgDrd_clientobj_get_any(Addr const   addr ) ;
extern DrdClientobj *vgDrd_clientobj_get(Addr const   addr , ObjType const   t ) ;
extern Bool vgDrd_clientobj_present(Addr const   a1 , Addr const   a2 ) ;
extern DrdClientobj *vgDrd_clientobj_add(Addr const   a1 , ObjType const   t ) ;
extern Bool vgDrd_clientobj_remove(Addr const   addr , ObjType const   t ) ;
extern void vgDrd_clientobj_stop_using_mem(Addr const   a1 , Addr const   a2 ) ;
extern void vgDrd_clientobj_delete_thread(DrdThreadId const   tid ) ;
extern char const   *vgDrd_clientobj_type_name(ObjType const   t ) ;
extern Addr vgDrd_pthread_cond_initializer ;
extern int vgDrd_pthread_cond_initializer_size ;
extern void vgDrd_cond_set_report_signal_unlocked(Bool const   r ) ;
extern void vgDrd_cond_set_trace(Bool const   trace_cond ) ;
extern struct cond_info *vgDrd_cond_get(Addr const   cond ) ;
extern void vgDrd_cond_pre_init(Addr const   cond ) ;
extern void vgDrd_cond_post_destroy(Addr const   cond ) ;
extern void vgDrd_cond_pre_wait(Addr const   cond , Addr const   mutex ) ;
extern void vgDrd_cond_post_wait(Addr const   cond ) ;
extern void vgDrd_cond_pre_signal(Addr const   cond ) ;
extern void vgDrd_cond_pre_broadcast(Addr const   cond ) ;
extern void vgDrd_mutex_set_trace(Bool const   trace_mutex ) ;
extern void vgDrd_mutex_set_lock_threshold(UInt const   lock_threshold_ms ) ;
extern struct mutex_info *vgDrd_mutex_init(Addr const   mutex ,
                                           MutexT const   mutex_type ) ;
extern void vgDrd_mutex_post_destroy(Addr const   mutex ) ;
extern void vgDrd_not_a_mutex(Addr const   mutex ) ;
extern struct mutex_info *vgDrd_mutex_get(Addr const   mutex ) ;
extern void vgDrd_mutex_pre_lock(Addr const   mutex ,
                                 MutexT const   mutex_type ,
                                 Bool const   trylock ) ;
extern void vgDrd_mutex_post_lock(Addr const   mutex , Bool const   took_lock ,
                                  Bool const   post_cond_wait ) ;
extern void vgDrd_mutex_unlock(Addr const   mutex , MutexT const   mutex_type ) ;
extern void vgDrd_spinlock_init_or_unlock(Addr const   spinlock ) ;
extern char const   *vgDrd_mutex_get_typename(struct mutex_info * const  p ) ;
extern char const   *vgDrd_mutex_type_name(MutexT const   mt ) ;
extern Bool vgDrd_mutex_is_locked_by(Addr const   mutex ,
                                     DrdThreadId const   tid ) ;
extern int vgDrd_mutex_get_recursion_count(Addr const   mutex ) ;
extern ULong vgDrd_get_mutex_lock_count(void) ;
extern ULong vgDrd_get_mutex_segment_creation_count(void) ;
extern void vgDrd_semaphore_set_trace(Bool const   trace_semaphore ) ;
extern struct semaphore_info *vgDrd_semaphore_init(Addr const   semaphore ,
                                                   Word const   pshared ,
                                                   UInt const   value ) ;
extern void vgDrd_semaphore_destroy(Addr const   semaphore ) ;
extern struct semaphore_info *vgDrd_semaphore_open(Addr const   semaphore ,
                                                   Char const   *name ,
                                                   Word const   oflag ,
                                                   Word const   mode ,
                                                   UInt const   value ) ;
extern void vgDrd_semaphore_close(Addr const   semaphore ) ;
extern void vgDrd_semaphore_pre_wait(Addr const   semaphore ) ;
extern void vgDrd_semaphore_post_wait(DrdThreadId const   tid ,
                                      Addr const   semaphore ,
                                      Bool const   waited ) ;
extern void vgDrd_semaphore_pre_post(DrdThreadId const   tid ,
                                     Addr const   semaphore ) ;
extern void vgDrd_semaphore_post_post(DrdThreadId const   tid ,
                                      Addr const   semaphore ,
                                      Bool const   waited ) ;
extern ULong vgDrd_get_semaphore_segment_creation_count(void) ;
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
extern Int vgPlain_clo_verbosity ;
extern Bool vgPlain_clo_stats ;
extern Int vgPlain_clo_vgdb_error ;
extern Bool vgPlain_clo_xml ;
extern HChar *vgPlain_clo_xml_user_comment ;
extern VexControl vgPlain_clo_vex_control ;
extern Int vgPlain_clo_backtrace_size ;
extern Bool vgPlain_clo_show_below_main ;
extern Char *vgPlain_expand_file_name(Char *option_name , Char *format ) ;
static void thread_append_segment(DrdThreadId const   tid , Segment * const  sg ) ;
static void thread_discard_segment(DrdThreadId const   tid ,
                                   Segment * const  sg ) ;
static void thread_compute_conflict_set(struct bitmap **conflict_set ,
                                        DrdThreadId const   tid ) ;
static Bool thread_conflict_set_up_to_date(DrdThreadId const   tid ) ;
static ULong s_context_switch_count  ;
static ULong s_discard_ordered_segments_count  ;
static ULong s_compute_conflict_set_count  ;
static ULong s_update_conflict_set_count  ;
static ULong s_update_conflict_set_new_sg_count  ;
static ULong s_update_conflict_set_sync_count  ;
static ULong s_update_conflict_set_join_count  ;
static ULong s_conflict_set_bitmap_creation_count  ;
static ULong s_conflict_set_bitmap2_creation_count  ;
static ThreadId s_vg_running_tid  =    (ThreadId )0;
DrdThreadId vgDrd_g_drd_running_tid  =    (DrdThreadId )0;
static Bool s_trace_context_switches  =    (Bool )0;
static Bool s_trace_conflict_set  =    (Bool )0;
static Bool s_trace_conflict_set_bm  =    (Bool )0;
static Bool s_trace_fork_join  =    (Bool )0;
static Bool s_segment_merging  =    (Bool )1;
static Bool s_new_segments_since_last_merge  ;
static int s_segment_merge_interval  =    10;
static unsigned int s_join_list_vol  =    10U;
static unsigned int s_deletion_head  ;
static unsigned int s_deletion_tail  ;
void vgDrd_thread_trace_context_switches(Bool const   t ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if ((int const   )t == 0) {
    tmp = 1;
  } else
  if ((int const   )t == 1) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"t == False || t == True",
                        (Char const   *)"drd_thread.c", 88,
                        (Char const   *)"vgDrd_thread_trace_context_switches",
                        "");
  }
  s_trace_context_switches = (Bool )t;
  return;
}
}
void vgDrd_thread_trace_conflict_set(Bool const   t ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if ((int const   )t == 0) {
    tmp = 1;
  } else
  if ((int const   )t == 1) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"t == False || t == True",
                        (Char const   *)"drd_thread.c", 95,
                        (Char const   *)"vgDrd_thread_trace_conflict_set", "");
  }
  s_trace_conflict_set = (Bool )t;
  return;
}
}
void vgDrd_thread_trace_conflict_set_bm(Bool const   t ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if ((int const   )t == 0) {
    tmp = 1;
  } else
  if ((int const   )t == 1) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"t == False || t == True",
                        (Char const   *)"drd_thread.c", 102,
                        (Char const   *)"vgDrd_thread_trace_conflict_set_bm", "");
  }
  s_trace_conflict_set_bm = (Bool )t;
  return;
}
}
Bool vgDrd_thread_get_trace_fork_join(void) 
{ 


  {
  return (s_trace_fork_join);
}
}
void vgDrd_thread_set_trace_fork_join(Bool const   t ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if ((int const   )t == 0) {
    tmp = 1;
  } else
  if ((int const   )t == 1) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"t == False || t == True",
                        (Char const   *)"drd_thread.c", 115,
                        (Char const   *)"vgDrd_thread_set_trace_fork_join", "");
  }
  s_trace_fork_join = (Bool )t;
  return;
}
}
void vgDrd_thread_set_segment_merging(Bool const   m ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if ((int const   )m == 0) {
    tmp = 1;
  } else
  if ((int const   )m == 1) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"m == False || m == True",
                        (Char const   *)"drd_thread.c", 122,
                        (Char const   *)"vgDrd_thread_set_segment_merging", "");
  }
  s_segment_merging = (Bool )m;
  return;
}
}
int vgDrd_thread_get_segment_merge_interval(void) 
{ 


  {
  return (s_segment_merge_interval);
}
}
void vgDrd_thread_set_segment_merge_interval(int const   i ) 
{ 


  {
  s_segment_merge_interval = (int )i;
  return;
}
}
void vgDrd_thread_set_join_list_vol(int const   jlv ) 
{ 


  {
  s_join_list_vol = (unsigned int )jlv;
  return;
}
}
void vgDrd_thread_init(void) 
{ 


  {
  return;
}
}
DrdThreadId vgDrd_VgThreadIdToDrdThreadId(ThreadId const   tid ) 
{ 
  int i ;

  {
  if (tid == 0U) {
    return ((DrdThreadId )0);
  } else {

  }
  i = 1;
  while (i < 500) {
    if ((int )vgDrd_g_threadinfo[i].vg_thread_exists == 1) {
      if (vgDrd_g_threadinfo[i].vg_threadid == (ThreadId )tid) {
        return ((DrdThreadId )i);
      } else {

      }
    } else {

    }
    i ++;
  }
  return ((DrdThreadId )0);
}
}
static DrdThreadId vgDrd_VgThreadIdToNewDrdThreadId(ThreadId const   tid ) 
{ 
  int i ;
  DrdThreadId tmp ;
  int tmp___0 ;
  long tmp___1 ;
  Bool tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  Bool tmp___7 ;
  int tmp___8 ;
  long tmp___9 ;
  long tmp___10 ;

  {
  tmp = vgDrd_VgThreadIdToDrdThreadId(tid);
  if (tmp == 0U) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(VgThreadIdToDrdThreadId)(tid) == DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 177,
                        (Char const   *)"vgDrd_VgThreadIdToNewDrdThreadId", "");
  }
  i = 1;
  while (i < 500) {
    if (! vgDrd_g_threadinfo[i].valid) {
      tmp___2 = vgDrd_IsValidDrdThreadId((DrdThreadId const   )i);
      if (tmp___2) {
        tmp___3 = 0;
      } else {
        tmp___3 = 1;
      }
      tmp___4 = __builtin_expect((long )tmp___3, 1L);
      if (tmp___4) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"! DRD_(IsValidDrdThreadId)(i)",
                            (Char const   *)"drd_thread.c", 183,
                            (Char const   *)"vgDrd_VgThreadIdToNewDrdThreadId",
                            "");
      }
      vgDrd_g_threadinfo[i].valid = (Bool )1;
      vgDrd_g_threadinfo[i].vg_thread_exists = (Bool )1;
      vgDrd_g_threadinfo[i].vg_threadid = (ThreadId )tid;
      vgDrd_g_threadinfo[i].pt_threadid = (PThreadId )0;
      vgDrd_g_threadinfo[i].stack_min = (Addr )0;
      vgDrd_g_threadinfo[i].stack_min_min = (Addr )0;
      vgDrd_g_threadinfo[i].stack_startup = (Addr )0;
      vgDrd_g_threadinfo[i].stack_max = (Addr )0;
      vgDrd_thread_set_name((DrdThreadId const   )i,
                            (char const   */* const  */)"");
      vgDrd_g_threadinfo[i].on_alt_stack = (Bool )0;
      vgDrd_g_threadinfo[i].is_recording_loads = (Bool )1;
      vgDrd_g_threadinfo[i].is_recording_stores = (Bool )1;
      vgDrd_g_threadinfo[i].pthread_create_nesting_level = 0;
      vgDrd_g_threadinfo[i].synchr_nesting = 0;
      vgDrd_g_threadinfo[i].deletion_seq = s_deletion_tail - 1U;
      tmp___5 = __builtin_expect((long )(! (! ((unsigned int )vgDrd_g_threadinfo[i].sg_first == (unsigned int )((void *)0)))),
                                 1L);
      if (tmp___5) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"DRD_(g_threadinfo)[i].sg_first == NULL",
                            (Char const   *)"drd_thread.c", 200,
                            (Char const   *)"vgDrd_VgThreadIdToNewDrdThreadId",
                            "");
      }
      tmp___6 = __builtin_expect((long )(! (! ((unsigned int )vgDrd_g_threadinfo[i].sg_last == (unsigned int )((void *)0)))),
                                 1L);
      if (tmp___6) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"DRD_(g_threadinfo)[i].sg_last == NULL",
                            (Char const   *)"drd_thread.c", 201,
                            (Char const   *)"vgDrd_VgThreadIdToNewDrdThreadId",
                            "");
      }
      tmp___7 = vgDrd_IsValidDrdThreadId((DrdThreadId const   )i);
      if (tmp___7) {
        tmp___8 = 1;
      } else {
        tmp___8 = 0;
      }
      tmp___9 = __builtin_expect((long )tmp___8, 1L);
      if (tmp___9) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"DRD_(IsValidDrdThreadId)(i)",
                            (Char const   *)"drd_thread.c", 203,
                            (Char const   *)"vgDrd_VgThreadIdToNewDrdThreadId",
                            "");
      }
      return ((DrdThreadId )i);
    } else {

    }
    i ++;
  }
  vgPlain_printf("\nSorry, but the maximum number of threads supported by DRD has been exceeded.Aborting.\n");
  tmp___10 = __builtin_expect(0L, 1L);
  if (tmp___10) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"False",
                        (Char const   *)"drd_thread.c", 213,
                        (Char const   *)"vgDrd_VgThreadIdToNewDrdThreadId", "");
  }
  return ((DrdThreadId )0);
}
}
DrdThreadId vgDrd_PtThreadIdToDrdThreadId(PThreadId const   tid ) 
{ 
  int i ;

  {
  if (tid != 0UL) {
    i = 1;
    while (i < 500) {
      if (vgDrd_g_threadinfo[i].posix_thread_exists) {
        if (vgDrd_g_threadinfo[i].pt_threadid == (PThreadId )tid) {
          return ((DrdThreadId )i);
        } else {

        }
      } else {

      }
      i ++;
    }
  } else {

  }
  return ((DrdThreadId )0);
}
}
ThreadId vgDrd_DrdThreadIdToVgThreadId(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;
  ThreadId tmp___1 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 241,
                        (Char const   *)"vgDrd_DrdThreadIdToVgThreadId", "");
  }
  if (vgDrd_g_threadinfo[tid].vg_thread_exists) {
    tmp___1 = vgDrd_g_threadinfo[tid].vg_threadid;
  } else {
    tmp___1 = (ThreadId )0;
  }
  return (tmp___1);
}
}
DrdThreadId vgDrd_thread_pre_create(DrdThreadId const   creator ,
                                    ThreadId const   vg_created ) 
{ 
  DrdThreadId created ;
  DrdThreadId tmp ;
  int tmp___0 ;
  long tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  Segment *tmp___6 ;

  {
  tmp = vgDrd_VgThreadIdToDrdThreadId(vg_created);
  if (tmp == 0U) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(VgThreadIdToDrdThreadId)(vg_created) == DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 292,
                        (Char const   *)"vgDrd_thread_pre_create", "");
  }
  created = vgDrd_VgThreadIdToNewDrdThreadId(vg_created);
  if (0 <= (int )created) {
    if (created < 500U) {
      if (created != 0U) {
        tmp___2 = 1;
      } else {
        tmp___2 = 0;
      }
    } else {
      tmp___2 = 0;
    }
  } else {
    tmp___2 = 0;
  }
  tmp___3 = __builtin_expect((long )tmp___2, 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)created && created < DRD_N_THREADS && created != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 295,
                        (Char const   *)"vgDrd_thread_pre_create", "");
  }
  tmp___4 = __builtin_expect((long )(! (! ((unsigned int )vgDrd_g_threadinfo[created].sg_first == (unsigned int )((void *)0)))),
                             1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[created].sg_first == NULL",
                        (Char const   *)"drd_thread.c", 297,
                        (Char const   *)"vgDrd_thread_pre_create", "");
  }
  tmp___5 = __builtin_expect((long )(! (! ((unsigned int )vgDrd_g_threadinfo[created].sg_last == (unsigned int )((void *)0)))),
                             1L);
  if (tmp___5) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[created].sg_last == NULL",
                        (Char const   *)"drd_thread.c", 298,
                        (Char const   *)"vgDrd_thread_pre_create", "");
  }
  tmp___6 = vgDrd_sg_new(creator, (DrdThreadId const   )created);
  thread_append_segment((DrdThreadId const   )created,
                        (Segment */* const  */)tmp___6);
  return (created);
}
}
DrdThreadId vgDrd_thread_post_create(ThreadId const   vg_created ) 
{ 
  DrdThreadId created ;
  DrdThreadId tmp ;
  int tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  tmp = vgDrd_VgThreadIdToDrdThreadId(vg_created);
  created = tmp;
  if (0 <= (int )created) {
    if (created < 500U) {
      if (created != 0U) {
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
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)created && created < DRD_N_THREADS && created != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 320,
                        (Char const   *)"vgDrd_thread_post_create", "");
  }
  vgDrd_g_threadinfo[created].stack_max = vgPlain_thread_get_stack_max((ThreadId )vg_created);
  vgDrd_g_threadinfo[created].stack_startup = vgDrd_g_threadinfo[created].stack_max;
  vgDrd_g_threadinfo[created].stack_min = vgDrd_g_threadinfo[created].stack_max;
  vgDrd_g_threadinfo[created].stack_min_min = vgDrd_g_threadinfo[created].stack_max;
  vgDrd_g_threadinfo[created].stack_size = vgPlain_thread_get_stack_size((ThreadId )vg_created);
  tmp___2 = __builtin_expect((long )(! (! (vgDrd_g_threadinfo[created].stack_max != 0UL))),
                             1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[created].stack_max != 0",
                        (Char const   *)"drd_thread.c", 332,
                        (Char const   *)"vgDrd_thread_post_create", "");
  }
  return (created);
}
}
static void vgDrd_thread_delayed_delete(DrdThreadId const   tid ) 
{ 
  int j ;
  unsigned int tmp ;
  Bool tmp___0 ;

  {
  vgDrd_g_threadinfo[tid].vg_thread_exists = (Bool )0;
  vgDrd_g_threadinfo[tid].posix_thread_exists = (Bool )0;
  tmp = s_deletion_head;
  s_deletion_head ++;
  vgDrd_g_threadinfo[tid].deletion_seq = tmp;
  if (s_deletion_head - s_deletion_tail >= s_join_list_vol) {
    j = 0;
    while (j < 500) {
      tmp___0 = vgDrd_IsValidDrdThreadId((DrdThreadId const   )j);
      if (tmp___0) {
        if (vgDrd_g_threadinfo[j].deletion_seq == s_deletion_tail) {
          s_deletion_tail ++;
          vgDrd_thread_delete((DrdThreadId const   )j, (Bool )0);
          break;
        } else {

        }
      } else {

      }
      j ++;
    }
  } else {

  }
  return;
}
}
void vgDrd_thread_post_join(DrdThreadId drd_joiner , DrdThreadId drd_joinee ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  Bool tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  ThreadId joiner ;
  ThreadId tmp___5 ;
  unsigned int msg_size ;
  char *msg ;
  void *tmp___6 ;
  long tmp___7 ;
  char *vc ;
  VectorClock *tmp___8 ;
  SizeT tmp___9 ;
  SizeT tmp___10 ;
  Addr tmp___11 ;
  Addr tmp___12 ;
  SizeT tmp___13 ;
  Bool tmp___14 ;

  {
  tmp = vgDrd_IsValidDrdThreadId((DrdThreadId const   )drd_joiner);
  if (tmp) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(IsValidDrdThreadId)(drd_joiner)",
                        (Char const   *)"drd_thread.c", 369,
                        (Char const   *)"vgDrd_thread_post_join", "");
  }
  tmp___2 = vgDrd_IsValidDrdThreadId((DrdThreadId const   )drd_joinee);
  if (tmp___2) {
    tmp___3 = 1;
  } else {
    tmp___3 = 0;
  }
  tmp___4 = __builtin_expect((long )tmp___3, 1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(IsValidDrdThreadId)(drd_joinee)",
                        (Char const   *)"drd_thread.c", 370,
                        (Char const   *)"vgDrd_thread_post_join", "");
  }
  vgDrd_thread_new_segment((DrdThreadId const   )drd_joiner);
  vgDrd_thread_combine_vc_join((DrdThreadId const   )drd_joiner,
                               (DrdThreadId const   )drd_joinee);
  vgDrd_thread_new_segment((DrdThreadId const   )drd_joinee);
  if (s_trace_fork_join) {
    tmp___5 = vgDrd_DrdThreadIdToVgThreadId((DrdThreadId const   )drd_joiner);
    joiner = tmp___5;
    msg_size = 256U;
    tmp___6 = vgPlain_malloc((HChar *)"drd.main.dptj.1", (SizeT )msg_size);
    msg = (char *)tmp___6;
    tmp___7 = __builtin_expect((long )(! (! msg)), 1L);
    if (tmp___7) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"msg",
                          (Char const   *)"drd_thread.c", 383,
                          (Char const   *)"vgDrd_thread_post_join", "");
    }
    vgPlain_snprintf((Char *)msg, (Int )msg_size,
                     "drd_post_thread_join joiner = %d, joinee = %d",
                     drd_joiner, drd_joinee);
    if (joiner) {
      tmp___8 = vgDrd_thread_get_vc((DrdThreadId const   )drd_joiner);
      vc = vgDrd_vc_aprint((VectorClock const   */* const  */)tmp___8);
      tmp___9 = vgPlain_strlen((Char const   *)msg);
      tmp___10 = vgPlain_strlen((Char const   *)msg);
      vgPlain_snprintf((Char *)(msg + tmp___10),
                       (Int )((SizeT )msg_size - tmp___9), ", new vc: %s", vc);
      vgPlain_free((void *)vc);
    } else {

    }
    vgDrd_trace_msg("%pS", msg);
    vgPlain_free((void *)msg);
  } else {

  }
  tmp___14 = vgDrd_get_check_stack_accesses();
  if (tmp___14) {

  } else {
    tmp___11 = vgDrd_thread_get_stack_max((DrdThreadId const   )drd_joinee);
    tmp___12 = vgDrd_thread_get_stack_max((DrdThreadId const   )drd_joinee);
    tmp___13 = vgDrd_thread_get_stack_size((DrdThreadId const   )drd_joinee);
    vgDrd_finish_suppression((Addr const   )(tmp___12 - tmp___13),
                             (Addr const   )tmp___11);
  }
  vgDrd_clientobj_delete_thread((DrdThreadId const   )drd_joinee);
  vgDrd_thread_delayed_delete((DrdThreadId const   )drd_joinee);
  return;
}
}
void vgDrd_thread_set_stack_startup(DrdThreadId const   tid ,
                                    Addr const   stack_startup ) 
{ 
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 420,
                        (Char const   *)"vgDrd_thread_set_stack_startup", "");
  }
  tmp___1 = __builtin_expect((long )(! (! (vgDrd_g_threadinfo[tid].stack_min <= (Addr )stack_startup))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].stack_min <= stack_startup",
                        (Char const   *)"drd_thread.c", 421,
                        (Char const   *)"vgDrd_thread_set_stack_startup", "");
  }
  tmp___2 = __builtin_expect((long )(! (! (stack_startup <= (Addr const   )vgDrd_g_threadinfo[tid].stack_max))),
                             1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"stack_startup <= DRD_(g_threadinfo)[tid].stack_max",
                        (Char const   *)"drd_thread.c", 422,
                        (Char const   *)"vgDrd_thread_set_stack_startup", "");
  }
  vgDrd_g_threadinfo[tid].stack_startup = (Addr )stack_startup;
  return;
}
}
Addr vgDrd_thread_get_stack_min(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 430,
                        (Char const   *)"vgDrd_thread_get_stack_min", "");
  }
  return (vgDrd_g_threadinfo[tid].stack_min);
}
}
Addr vgDrd_thread_get_stack_min_min(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 441,
                        (Char const   *)"vgDrd_thread_get_stack_min_min", "");
  }
  return (vgDrd_g_threadinfo[tid].stack_min_min);
}
}
Addr vgDrd_thread_get_stack_max(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 449,
                        (Char const   *)"vgDrd_thread_get_stack_max", "");
  }
  return (vgDrd_g_threadinfo[tid].stack_max);
}
}
SizeT vgDrd_thread_get_stack_size(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 457,
                        (Char const   *)"vgDrd_thread_get_stack_size", "");
  }
  return (vgDrd_g_threadinfo[tid].stack_size);
}
}
Bool vgDrd_thread_get_on_alt_stack(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 464,
                        (Char const   *)"vgDrd_thread_get_on_alt_stack", "");
  }
  return (vgDrd_g_threadinfo[tid].on_alt_stack);
}
}
void vgDrd_thread_set_on_alt_stack(DrdThreadId const   tid ,
                                   Bool const   on_alt_stack ) 
{ 
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 472,
                        (Char const   *)"vgDrd_thread_set_on_alt_stack", "");
  }
  tmp___1 = __builtin_expect((long )(! (! ((int const   )on_alt_stack == (int const   )(! (! on_alt_stack))))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"on_alt_stack == !!on_alt_stack",
                        (Char const   *)"drd_thread.c", 473,
                        (Char const   *)"vgDrd_thread_set_on_alt_stack", "");
  }
  vgDrd_g_threadinfo[tid].on_alt_stack = (Bool )on_alt_stack;
  return;
}
}
Int vgDrd_thread_get_threads_on_alt_stack(void) 
{ 
  int i ;
  int n ;

  {
  n = 0;
  i = 1;
  while (i < 500) {
    n += (int )vgDrd_g_threadinfo[i].on_alt_stack;
    i ++;
  }
  return (n);
}
}
void vgDrd_thread_delete(DrdThreadId const   tid , Bool const   detached ) 
{ 
  Segment *sg ;
  Segment *sg_prev ;
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  Bool tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;

  {
  tmp = vgDrd_IsValidDrdThreadId(tid);
  if (tmp) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(IsValidDrdThreadId)(tid)",
                        (Char const   *)"drd_thread.c", 494,
                        (Char const   *)"vgDrd_thread_delete", "");
  }
  tmp___2 = __builtin_expect((long )(! (! (vgDrd_g_threadinfo[tid].synchr_nesting >= 0))),
                             1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].synchr_nesting >= 0",
                        (Char const   *)"drd_thread.c", 496,
                        (Char const   *)"vgDrd_thread_delete", "");
  }
  sg = vgDrd_g_threadinfo[tid].sg_last;
  while (sg) {
    sg_prev = sg->thr_prev;
    sg->thr_next = (struct segment *)((void *)0);
    sg->thr_prev = (struct segment *)((void *)0);
    vgDrd_sg_put((Segment */* const  */)sg);
    sg = sg_prev;
  }
  vgDrd_g_threadinfo[tid].valid = (Bool )0;
  vgDrd_g_threadinfo[tid].vg_thread_exists = (Bool )0;
  vgDrd_g_threadinfo[tid].posix_thread_exists = (Bool )0;
  if (detached) {
    vgDrd_g_threadinfo[tid].detached_posix_thread = (Bool )0;
  } else {
    tmp___3 = __builtin_expect((long )(! (! (! vgDrd_g_threadinfo[tid].detached_posix_thread))),
                               1L);
    if (tmp___3) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"!DRD_(g_threadinfo)[tid].detached_posix_thread",
                          (Char const   *)"drd_thread.c", 509,
                          (Char const   *)"vgDrd_thread_delete", "");
    }
  }
  vgDrd_g_threadinfo[tid].sg_first = (struct segment *)((void *)0);
  vgDrd_g_threadinfo[tid].sg_last = (struct segment *)((void *)0);
  tmp___4 = vgDrd_IsValidDrdThreadId(tid);
  if (tmp___4) {
    tmp___5 = 0;
  } else {
    tmp___5 = 1;
  }
  tmp___6 = __builtin_expect((long )tmp___5, 1L);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"!DRD_(IsValidDrdThreadId)(tid)",
                        (Char const   *)"drd_thread.c", 513,
                        (Char const   *)"vgDrd_thread_delete", "");
  }
  return;
}
}
void vgDrd_thread_finished(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 524,
                        (Char const   *)"vgDrd_thread_finished", "");
  }
  vgDrd_g_threadinfo[tid].vg_thread_exists = (Bool )0;
  if (vgDrd_g_threadinfo[tid].detached_posix_thread) {
    vgDrd_g_threadinfo[tid].stack_min = vgDrd_g_threadinfo[tid].stack_max;
    vgDrd_g_threadinfo[tid].posix_thread_exists = (Bool )0;
  } else {

  }
  return;
}
}
void vgDrd_drd_thread_atfork_child(DrdThreadId const   tid ) 
{ 
  unsigned int i ;
  Bool tmp ;
  Bool tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;

  {
  i = 1U;
  while (i < 500U) {
    if (i == (unsigned int )tid) {
      goto __Cont;
    } else {

    }
    tmp = vgDrd_IsValidDrdThreadId((DrdThreadId const   )i);
    if (tmp) {
      vgDrd_thread_delete((DrdThreadId const   )i, (Bool const   )((Bool )1));
    } else {

    }
    tmp___0 = vgDrd_IsValidDrdThreadId((DrdThreadId const   )i);
    if (tmp___0) {
      tmp___1 = 0;
    } else {
      tmp___1 = 1;
    }
    tmp___2 = __builtin_expect((long )tmp___1, 1L);
    if (tmp___2) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"!DRD_(IsValidDrdThreadId(i))",
                          (Char const   *)"drd_thread.c", 557,
                          (Char const   *)"vgDrd_drd_thread_atfork_child", "");
    }
    __Cont: /* CIL Label */ 
    i ++;
  }
  return;
}
}
void vgDrd_thread_pre_cancel(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  Bool tmp___2 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 565,
                        (Char const   *)"vgDrd_thread_pre_cancel", "");
  }
  tmp___1 = __builtin_expect((long )(! (! (vgDrd_g_threadinfo[tid].pt_threadid != 0UL))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].pt_threadid != INVALID_POSIX_THREADID",
                        (Char const   *)"drd_thread.c", 566,
                        (Char const   *)"vgDrd_thread_pre_cancel", "");
  }
  tmp___2 = vgDrd_thread_get_trace_fork_join();
  if (tmp___2) {
    vgDrd_trace_msg("[%d] drd_thread_pre_cancel %d", vgDrd_g_drd_running_tid,
                    tid);
  } else {

  }
  return;
}
}
void vgDrd_thread_set_pthreadid(DrdThreadId const   tid ,
                                PThreadId const   ptid ) 
{ 
  int tmp ;
  long tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 583,
                        (Char const   *)"vgDrd_thread_set_pthreadid", "");
  }
  if (vgDrd_g_threadinfo[tid].pt_threadid == 0UL) {
    tmp___1 = 1;
  } else
  if (vgDrd_g_threadinfo[tid].pt_threadid == (PThreadId )ptid) {
    tmp___1 = 1;
  } else {
    tmp___1 = 0;
  }
  tmp___2 = __builtin_expect((long )tmp___1, 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].pt_threadid == INVALID_POSIX_THREADID || DRD_(g_threadinfo)[tid].pt_threadid == ptid",
                        (Char const   *)"drd_thread.c", 585,
                        (Char const   *)"vgDrd_thread_set_pthreadid", "");
  }
  tmp___3 = __builtin_expect((long )(! (! (ptid != 0UL))), 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"ptid != INVALID_POSIX_THREADID",
                        (Char const   *)"drd_thread.c", 586,
                        (Char const   *)"vgDrd_thread_set_pthreadid", "");
  }
  vgDrd_g_threadinfo[tid].posix_thread_exists = (Bool )1;
  vgDrd_g_threadinfo[tid].pt_threadid = (PThreadId )ptid;
  return;
}
}
Bool vgDrd_thread_get_joinable(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 595,
                        (Char const   *)"vgDrd_thread_get_joinable", "");
  }
  return ((Bool )(! vgDrd_g_threadinfo[tid].detached_posix_thread));
}
}
void vgDrd_thread_set_joinable(DrdThreadId const   tid , Bool const   joinable ) 
{ 
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 603,
                        (Char const   *)"vgDrd_thread_set_joinable", "");
  }
  tmp___1 = __builtin_expect((long )(! (! (! (! joinable) == (int )joinable))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"!! joinable == joinable",
                        (Char const   *)"drd_thread.c", 604,
                        (Char const   *)"vgDrd_thread_set_joinable", "");
  }
  tmp___2 = __builtin_expect((long )(! (! (vgDrd_g_threadinfo[tid].pt_threadid != 0UL))),
                             1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].pt_threadid != INVALID_POSIX_THREADID",
                        (Char const   *)"drd_thread.c", 605,
                        (Char const   *)"vgDrd_thread_set_joinable", "");
  }
  vgDrd_g_threadinfo[tid].detached_posix_thread = (Bool )(! joinable);
  return;
}
}
void vgDrd_thread_entering_pthread_create(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 614,
                        (Char const   *)"vgDrd_thread_entering_pthread_create",
                        "");
  }
  tmp___1 = __builtin_expect((long )(! (! (vgDrd_g_threadinfo[tid].pt_threadid != 0UL))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].pt_threadid != INVALID_POSIX_THREADID",
                        (Char const   *)"drd_thread.c", 615,
                        (Char const   *)"vgDrd_thread_entering_pthread_create",
                        "");
  }
  tmp___2 = __builtin_expect((long )(! (! (vgDrd_g_threadinfo[tid].pthread_create_nesting_level >= 0))),
                             1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].pthread_create_nesting_level >= 0",
                        (Char const   *)"drd_thread.c", 616,
                        (Char const   *)"vgDrd_thread_entering_pthread_create",
                        "");
  }
  (vgDrd_g_threadinfo[tid].pthread_create_nesting_level) ++;
  return;
}
}
void vgDrd_thread_left_pthread_create(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 625,
                        (Char const   *)"vgDrd_thread_left_pthread_create", "");
  }
  tmp___1 = __builtin_expect((long )(! (! (vgDrd_g_threadinfo[tid].pt_threadid != 0UL))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].pt_threadid != INVALID_POSIX_THREADID",
                        (Char const   *)"drd_thread.c", 626,
                        (Char const   *)"vgDrd_thread_left_pthread_create", "");
  }
  tmp___2 = __builtin_expect((long )(! (! (vgDrd_g_threadinfo[tid].pthread_create_nesting_level > 0))),
                             1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].pthread_create_nesting_level > 0",
                        (Char const   *)"drd_thread.c", 627,
                        (Char const   *)"vgDrd_thread_left_pthread_create", "");
  }
  (vgDrd_g_threadinfo[tid].pthread_create_nesting_level) --;
  return;
}
}
char const   *vgDrd_thread_get_name(DrdThreadId const   tid ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 636,
                        (Char const   *)"vgDrd_thread_get_name", "");
  }
  return ((char const   *)(vgDrd_g_threadinfo[tid].name));
}
}
void vgDrd_thread_set_name(DrdThreadId const   tid , char const   * const  name ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 645,
                        (Char const   *)"vgDrd_thread_set_name", "");
  }
  if ((unsigned int )name == (unsigned int )((void *)0)) {
    vgPlain_snprintf((Char *)(vgDrd_g_threadinfo[tid].name),
                     (Int )sizeof(vgDrd_g_threadinfo[tid].name), "Thread %d",
                     tid);
  } else
  if ((int const   )*(name + 0) == 0) {
    vgPlain_snprintf((Char *)(vgDrd_g_threadinfo[tid].name),
                     (Int )sizeof(vgDrd_g_threadinfo[tid].name), "Thread %d",
                     tid);
  } else {
    vgPlain_snprintf((Char *)(vgDrd_g_threadinfo[tid].name),
                     (Int )sizeof(vgDrd_g_threadinfo[tid].name),
                     "Thread %d (%s)", tid, name);
  }
  vgDrd_g_threadinfo[tid].name[sizeof(vgDrd_g_threadinfo[tid].name) - 1U] = (char)0;
  return;
}
}
void vgDrd_thread_set_vg_running_tid(ThreadId const   vg_tid ) 
{ 
  long tmp ;
  DrdThreadId tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  tmp = __builtin_expect((long )(! (! (vg_tid != 0U))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"vg_tid != VG_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 666,
                        (Char const   *)"vgDrd_thread_set_vg_running_tid", "");
  }
  if (vg_tid != (ThreadId const   )s_vg_running_tid) {
    tmp___0 = vgDrd_VgThreadIdToDrdThreadId(vg_tid);
    vgDrd_thread_set_running_tid(vg_tid, (DrdThreadId const   )tmp___0);
  } else {

  }
  tmp___1 = __builtin_expect((long )(! (! (s_vg_running_tid != 0U))), 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"s_vg_running_tid != VG_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 674,
                        (Char const   *)"vgDrd_thread_set_vg_running_tid", "");
  }
  tmp___2 = __builtin_expect((long )(! (! (vgDrd_g_drd_running_tid != 0U))), 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_drd_running_tid) != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 675,
                        (Char const   *)"vgDrd_thread_set_vg_running_tid", "");
  }
  return;
}
}
void vgDrd_thread_set_running_tid(ThreadId const   vg_tid ,
                                  DrdThreadId const   drd_tid ) 
{ 
  long tmp ;
  long tmp___0 ;
  ULong tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;

  {
  tmp = __builtin_expect((long )(! (! (vg_tid != 0U))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"vg_tid != VG_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 685,
                        (Char const   *)"vgDrd_thread_set_running_tid", "");
  }
  tmp___0 = __builtin_expect((long )(! (! (drd_tid != 0U))), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"drd_tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 686,
                        (Char const   *)"vgDrd_thread_set_running_tid", "");
  }
  if (vg_tid != (ThreadId const   )s_vg_running_tid) {
    if (s_trace_context_switches) {
      if (vgDrd_g_drd_running_tid != 0U) {
        tmp___1 = vgDrd_sg_get_segments_alive_count();
        vgPlain_message((VgMsgKind )2,
                        "Context switch from thread %d to thread %d; segments: %llu\n",
                        vgDrd_g_drd_running_tid, drd_tid, tmp___1);
      } else {

      }
    } else {

    }
    s_vg_running_tid = (ThreadId )vg_tid;
    vgDrd_g_drd_running_tid = (DrdThreadId )drd_tid;
    thread_compute_conflict_set(& vgDrd_g_conflict_set, drd_tid);
    s_context_switch_count ++;
  } else {

  }
  tmp___2 = __builtin_expect((long )(! (! (s_vg_running_tid != 0U))), 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"s_vg_running_tid != VG_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 705,
                        (Char const   *)"vgDrd_thread_set_running_tid", "");
  }
  tmp___3 = __builtin_expect((long )(! (! (vgDrd_g_drd_running_tid != 0U))), 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_drd_running_tid) != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 706,
                        (Char const   *)"vgDrd_thread_set_running_tid", "");
  }
  return;
}
}
int vgDrd_thread_enter_synchr(DrdThreadId const   tid ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  Int tmp___2 ;

  {
  tmp = vgDrd_IsValidDrdThreadId(tid);
  if (tmp) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(IsValidDrdThreadId)(tid)",
                        (Char const   *)"drd_thread.c", 715,
                        (Char const   *)"vgDrd_thread_enter_synchr", "");
  }
  tmp___2 = vgDrd_g_threadinfo[tid].synchr_nesting;
  (vgDrd_g_threadinfo[tid].synchr_nesting) ++;
  return (tmp___2);
}
}
int vgDrd_thread_leave_synchr(DrdThreadId const   tid ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  tmp = vgDrd_IsValidDrdThreadId(tid);
  if (tmp) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(IsValidDrdThreadId)(tid)",
                        (Char const   *)"drd_thread.c", 725,
                        (Char const   *)"vgDrd_thread_leave_synchr", "");
  }
  tmp___2 = __builtin_expect((long )(! (! (vgDrd_g_threadinfo[tid].synchr_nesting >= 1))),
                             1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].synchr_nesting >= 1",
                        (Char const   *)"drd_thread.c", 726,
                        (Char const   *)"vgDrd_thread_leave_synchr", "");
  }
  (vgDrd_g_threadinfo[tid].synchr_nesting) --;
  return (vgDrd_g_threadinfo[tid].synchr_nesting);
}
}
int vgDrd_thread_get_synchr_nesting_count(DrdThreadId const   tid ) 
{ 
  Bool tmp ;
  int tmp___0 ;
  long tmp___1 ;

  {
  tmp = vgDrd_IsValidDrdThreadId(tid);
  if (tmp) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(IsValidDrdThreadId)(tid)",
                        (Char const   *)"drd_thread.c", 733,
                        (Char const   *)"vgDrd_thread_get_synchr_nesting_count",
                        "");
  }
  return (vgDrd_g_threadinfo[tid].synchr_nesting);
}
}
static void thread_append_segment(DrdThreadId const   tid , Segment * const  sg ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 742,
                        (Char const   *)"thread_append_segment", "");
  }
  sg->thr_prev = vgDrd_g_threadinfo[tid].sg_last;
  sg->thr_next = (struct segment *)((void *)0);
  if (vgDrd_g_threadinfo[tid].sg_last) {
    (vgDrd_g_threadinfo[tid].sg_last)->thr_next = (struct segment *)sg;
  } else {

  }
  vgDrd_g_threadinfo[tid].sg_last = (struct segment *)sg;
  if ((unsigned int )vgDrd_g_threadinfo[tid].sg_first == (unsigned int )((void *)0)) {
    vgDrd_g_threadinfo[tid].sg_first = (struct segment *)sg;
  } else {

  }
  return;
}
}
static void thread_discard_segment(DrdThreadId const   tid ,
                                   Segment * const  sg ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 770,
                        (Char const   *)"thread_discard_segment", "");
  }
  if (sg->thr_prev) {
    (sg->thr_prev)->thr_next = sg->thr_next;
  } else {

  }
  if (sg->thr_next) {
    (sg->thr_next)->thr_prev = sg->thr_prev;
  } else {

  }
  if ((unsigned int )sg == (unsigned int )vgDrd_g_threadinfo[tid].sg_first) {
    vgDrd_g_threadinfo[tid].sg_first = sg->thr_next;
  } else {

  }
  if ((unsigned int )sg == (unsigned int )vgDrd_g_threadinfo[tid].sg_last) {
    vgDrd_g_threadinfo[tid].sg_last = sg->thr_prev;
  } else {

  }
  vgDrd_sg_put(sg);
  return;
}
}
VectorClock *vgDrd_thread_get_vc(DrdThreadId const   tid ) 
{ 
  Segment *latest_sg ;
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 800,
                        (Char const   *)"vgDrd_thread_get_vc", "");
  }
  latest_sg = vgDrd_g_threadinfo[tid].sg_last;
  tmp___1 = __builtin_expect((long )(! (! latest_sg)), 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"latest_sg",
                        (Char const   *)"drd_thread.c", 802,
                        (Char const   *)"vgDrd_thread_get_vc", "");
  }
  return (& latest_sg->vc);
}
}
void vgDrd_thread_get_latest_segment(Segment **sg , DrdThreadId const   tid ) 
{ 
  Segment *latest_sg ;
  long tmp ;
  int tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
  tmp = __builtin_expect((long )(! (! sg)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg",
                        (Char const   *)"drd_thread.c", 813,
                        (Char const   *)"vgDrd_thread_get_latest_segment", "");
  }
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 815,
                        (Char const   *)"vgDrd_thread_get_latest_segment", "");
  }
  latest_sg = vgDrd_g_threadinfo[tid].sg_last;
  tmp___2 = __builtin_expect((long )(! (! latest_sg)), 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"latest_sg",
                        (Char const   *)"drd_thread.c", 817,
                        (Char const   *)"vgDrd_thread_get_latest_segment", "");
  }
  vgDrd_sg_put((Segment */* const  */)*sg);
  *sg = vgDrd_sg_get((Segment */* const  */)latest_sg);
  return;
}
}
static void vgDrd_thread_compute_minimum_vc(VectorClock *vc ) 
{ 
  unsigned int i ;
  Bool first ;
  Segment *latest_sg ;

  {
  first = (Bool )1;
  i = 0U;
  while (i < 500U) {
    latest_sg = vgDrd_g_threadinfo[i].sg_last;
    if (latest_sg) {
      if (first) {
        vgDrd_vc_assign((VectorClock */* const  */)vc,
                        (VectorClock const   */* const  */)(& latest_sg->vc));
      } else {
        vgDrd_vc_min((VectorClock */* const  */)vc,
                     (VectorClock const   */* const  */)(& latest_sg->vc));
      }
      first = (Bool )0;
    } else {

    }
    i ++;
  }
  return;
}
}
static void vgDrd_thread_compute_maximum_vc(VectorClock *vc ) 
{ 
  unsigned int i ;
  Bool first ;
  Segment *latest_sg ;

  {
  first = (Bool )1;
  i = 0U;
  while (i < 500U) {
    latest_sg = vgDrd_g_threadinfo[i].sg_last;
    if (latest_sg) {
      if (first) {
        vgDrd_vc_assign((VectorClock */* const  */)vc,
                        (VectorClock const   */* const  */)(& latest_sg->vc));
      } else {
        vgDrd_vc_combine((VectorClock */* const  */)vc,
                         (VectorClock const   */* const  */)(& latest_sg->vc));
      }
      first = (Bool )0;
    } else {

    }
    i ++;
  }
  return;
}
}
static void thread_discard_ordered_segments(void) 
{ 
  unsigned int i ;
  VectorClock thread_vc_min ;
  char *vc_min ;
  char *vc_max ;
  VectorClock thread_vc_max ;
  Bool tmp ;
  Segment *sg ;
  Segment *sg_next ;
  Bool tmp___0 ;

  {
  s_discard_ordered_segments_count ++;
  vgDrd_vc_init((VectorClock */* const  */)(& thread_vc_min),
                (VCElem const   */* const  */)0, (unsigned int const   )0);
  vgDrd_thread_compute_minimum_vc(& thread_vc_min);
  tmp = vgDrd_sg_get_trace();
  if (tmp) {
    vgDrd_vc_init((VectorClock */* const  */)(& thread_vc_max),
                  (VCElem const   */* const  */)0, (unsigned int const   )0);
    vgDrd_thread_compute_maximum_vc(& thread_vc_max);
    vc_min = vgDrd_vc_aprint((VectorClock const   */* const  */)(& thread_vc_min));
    vc_max = vgDrd_vc_aprint((VectorClock const   */* const  */)(& thread_vc_max));
    vgPlain_message((VgMsgKind )2,
                    "Discarding ordered segments -- min vc is %s, max vc is %s\n",
                    vc_min, vc_max);
    vgPlain_free((void *)vc_min);
    vgPlain_free((void *)vc_max);
    vgDrd_vc_cleanup((VectorClock */* const  */)(& thread_vc_max));
  } else {

  }
  i = 0U;
  while (i < 500U) {
    sg = vgDrd_g_threadinfo[i].sg_first;
    while (1) {
      if (sg) {
        sg_next = sg->thr_next;
        if (sg_next) {
          tmp___0 = vgDrd_vc_lte((VectorClock const   */* const  */)(& sg->vc),
                                 (VectorClock const   */* const  */)(& thread_vc_min));
          if (tmp___0) {

          } else {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
      thread_discard_segment((DrdThreadId const   )i, (Segment */* const  */)sg);
      sg = sg_next;
    }
    i ++;
  }
  vgDrd_vc_cleanup((VectorClock */* const  */)(& thread_vc_min));
  return;
}
}
static Bool thread_consistent_segment_ordering(DrdThreadId const   tid ,
                                               Segment * const  sg1 ,
                                               Segment * const  sg2 ) 
{ 
  unsigned int i ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  Bool tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  Segment *sg ;
  Bool tmp___5 ;
  Bool tmp___6 ;
  int tmp___7 ;
  Bool tmp___8 ;
  Bool tmp___9 ;
  int tmp___10 ;

  {
  tmp = __builtin_expect((long )(! (! sg1->thr_next)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg1->thr_next",
                        (Char const   *)"drd_thread.c", 955,
                        (Char const   *)"thread_consistent_segment_ordering", "");
  }
  tmp___0 = __builtin_expect((long )(! (! sg2->thr_next)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg2->thr_next",
                        (Char const   *)"drd_thread.c", 956,
                        (Char const   *)"thread_consistent_segment_ordering", "");
  }
  tmp___1 = __builtin_expect((long )(! (! ((unsigned int )sg1->thr_next == (unsigned int )sg2))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg1->thr_next == sg2",
                        (Char const   *)"drd_thread.c", 957,
                        (Char const   *)"thread_consistent_segment_ordering", "");
  }
  tmp___2 = vgDrd_vc_lte((VectorClock const   */* const  */)(& sg1->vc),
                         (VectorClock const   */* const  */)(& sg2->vc));
  if (tmp___2) {
    tmp___3 = 1;
  } else {
    tmp___3 = 0;
  }
  tmp___4 = __builtin_expect((long )tmp___3, 1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(vc_lte)(&sg1->vc, &sg2->vc)",
                        (Char const   *)"drd_thread.c", 958,
                        (Char const   *)"thread_consistent_segment_ordering", "");
  }
  i = 0U;
  while (i < 500U) {
    sg = vgDrd_g_threadinfo[i].sg_first;
    while (sg) {
      if (! sg->thr_next) {
        goto _L;
      } else {
        tmp___7 = vgDrd_sg_get_refcnt((Segment const   */* const  */)sg);
        if (tmp___7 > 1) {
          _L: /* CIL Label */ 
          tmp___5 = vgDrd_vc_lte((VectorClock const   */* const  */)(& sg2->vc),
                                 (VectorClock const   */* const  */)(& sg->vc));
          if (tmp___5) {
            break;
          } else {

          }
          tmp___6 = vgDrd_vc_lte((VectorClock const   */* const  */)(& sg1->vc),
                                 (VectorClock const   */* const  */)(& sg->vc));
          if (tmp___6) {
            return ((Bool )0);
          } else {

          }
        } else {

        }
      }
      sg = sg->thr_next;
    }
    sg = vgDrd_g_threadinfo[i].sg_last;
    while (sg) {
      if (! sg->thr_next) {
        goto _L___0;
      } else {
        tmp___10 = vgDrd_sg_get_refcnt((Segment const   */* const  */)sg);
        if (tmp___10 > 1) {
          _L___0: /* CIL Label */ 
          tmp___8 = vgDrd_vc_lte((VectorClock const   */* const  */)(& sg->vc),
                                 (VectorClock const   */* const  */)(& sg1->vc));
          if (tmp___8) {
            break;
          } else {

          }
          tmp___9 = vgDrd_vc_lte((VectorClock const   */* const  */)(& sg->vc),
                                 (VectorClock const   */* const  */)(& sg2->vc));
          if (tmp___9) {
            return ((Bool )0);
          } else {

          }
        } else {

        }
      }
      sg = sg->thr_prev;
    }
    i ++;
  }
  return ((Bool )1);
}
}
static void thread_merge_segments(void) 
{ 
  unsigned int i ;
  Segment *sg ;
  Segment *sg_next ;
  int tmp ;
  Bool tmp___0 ;
  int tmp___1 ;

  {
  s_new_segments_since_last_merge = (Bool )0;
  i = 0U;
  while (i < 500U) {
    sg = vgDrd_g_threadinfo[i].sg_first;
    while (sg) {
      tmp___1 = vgDrd_sg_get_refcnt((Segment const   */* const  */)sg);
      if (tmp___1 == 1) {
        if (sg->thr_next) {
          sg_next = sg->thr_next;
          tmp = vgDrd_sg_get_refcnt((Segment const   */* const  */)sg_next);
          if (tmp == 1) {
            if (sg_next->thr_next) {
              tmp___0 = thread_consistent_segment_ordering((DrdThreadId const   )i,
                                                           (Segment */* const  */)sg,
                                                           (Segment */* const  */)sg_next);
              if (tmp___0) {
                vgDrd_sg_merge((Segment */* const  */)sg,
                               (Segment */* const  */)sg_next);
                thread_discard_segment((DrdThreadId const   )i,
                                       (Segment */* const  */)sg_next);
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
      sg = sg->thr_next;
    }
    i ++;
  }
  return;
}
}
void vgDrd_thread_new_segment(DrdThreadId const   tid ) 
{ 
  Segment *last_sg ;
  Segment *new_sg ;
  int tmp ;
  long tmp___0 ;
  Bool tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  Bool tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1047,
                        (Char const   *)"vgDrd_thread_new_segment", "");
  }
  tmp___1 = thread_conflict_set_up_to_date((DrdThreadId const   )vgDrd_g_drd_running_tid);
  if (tmp___1) {
    tmp___2 = 1;
  } else {
    tmp___2 = 0;
  }
  tmp___3 = __builtin_expect((long )tmp___2, 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"thread_conflict_set_up_to_date(DRD_(g_drd_running_tid))",
                        (Char const   *)"drd_thread.c", 1048,
                        (Char const   *)"vgDrd_thread_new_segment", "");
  }
  last_sg = vgDrd_g_threadinfo[tid].sg_last;
  new_sg = vgDrd_sg_new(tid, tid);
  thread_append_segment(tid, (Segment */* const  */)new_sg);
  if (tid == (DrdThreadId const   )vgDrd_g_drd_running_tid) {
    if (last_sg) {
      vgDrd_thread_update_conflict_set(tid,
                                       (VectorClock const   */* const  */)(& last_sg->vc));
      s_update_conflict_set_new_sg_count ++;
    } else {

    }
  } else {

  }
  tmp___4 = thread_conflict_set_up_to_date((DrdThreadId const   )vgDrd_g_drd_running_tid);
  if (tmp___4) {
    tmp___5 = 1;
  } else {
    tmp___5 = 0;
  }
  tmp___6 = __builtin_expect((long )tmp___5, 1L);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"thread_conflict_set_up_to_date(DRD_(g_drd_running_tid))",
                        (Char const   *)"drd_thread.c", 1059,
                        (Char const   *)"vgDrd_thread_new_segment", "");
  }
  if (s_segment_merging) {
    s_new_segments_since_last_merge = (Bool )((int )s_new_segments_since_last_merge + 1);
    if ((int )s_new_segments_since_last_merge >= s_segment_merge_interval) {
      thread_discard_ordered_segments();
      thread_merge_segments();
    } else {

    }
  } else {

  }
  return;
}
}
void vgDrd_thread_combine_vc_join(DrdThreadId const   joiner ,
                                  DrdThreadId const   joinee ) 
{ 
  long tmp ;
  int tmp___0 ;
  long tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  long tmp___5 ;
  long tmp___6 ;
  long tmp___7 ;
  char *str1 ;
  char *str2 ;
  VectorClock *tmp___8 ;
  VectorClock *tmp___9 ;
  Bool tmp___10 ;
  VectorClock old_vc ;
  VectorClock *tmp___11 ;
  VectorClock *tmp___12 ;
  VectorClock *tmp___13 ;
  VectorClock *tmp___14 ;
  VectorClock *tmp___15 ;
  char *str ;
  VectorClock *tmp___16 ;
  Bool tmp___17 ;

  {
  tmp = __builtin_expect((long )(! (! (joiner != joinee))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"joiner != joinee",
                        (Char const   *)"drd_thread.c", 1072,
                        (Char const   *)"vgDrd_thread_combine_vc_join", "");
  }
  if (0 <= (int )joiner) {
    if (joiner < 500U) {
      if (joiner != 0U) {
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
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)joiner && joiner < DRD_N_THREADS && joiner != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1074,
                        (Char const   *)"vgDrd_thread_combine_vc_join", "");
  }
  if (0 <= (int )joinee) {
    if (joinee < 500U) {
      if (joinee != 0U) {
        tmp___2 = 1;
      } else {
        tmp___2 = 0;
      }
    } else {
      tmp___2 = 0;
    }
  } else {
    tmp___2 = 0;
  }
  tmp___3 = __builtin_expect((long )tmp___2, 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)joinee && joinee < DRD_N_THREADS && joinee != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1076,
                        (Char const   *)"vgDrd_thread_combine_vc_join", "");
  }
  tmp___4 = __builtin_expect((long )(! (! vgDrd_g_threadinfo[joiner].sg_first)),
                             1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[joiner].sg_first",
                        (Char const   *)"drd_thread.c", 1077,
                        (Char const   *)"vgDrd_thread_combine_vc_join", "");
  }
  tmp___5 = __builtin_expect((long )(! (! vgDrd_g_threadinfo[joiner].sg_last)),
                             1L);
  if (tmp___5) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[joiner].sg_last",
                        (Char const   *)"drd_thread.c", 1078,
                        (Char const   *)"vgDrd_thread_combine_vc_join", "");
  }
  tmp___6 = __builtin_expect((long )(! (! vgDrd_g_threadinfo[joinee].sg_first)),
                             1L);
  if (tmp___6) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[joinee].sg_first",
                        (Char const   *)"drd_thread.c", 1079,
                        (Char const   *)"vgDrd_thread_combine_vc_join", "");
  }
  tmp___7 = __builtin_expect((long )(! (! vgDrd_g_threadinfo[joinee].sg_last)),
                             1L);
  if (tmp___7) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[joinee].sg_last",
                        (Char const   *)"drd_thread.c", 1080,
                        (Char const   *)"vgDrd_thread_combine_vc_join", "");
  }
  tmp___10 = vgDrd_sg_get_trace();
  if (tmp___10) {
    tmp___8 = vgDrd_thread_get_vc(joiner);
    str1 = vgDrd_vc_aprint((VectorClock const   */* const  */)tmp___8);
    tmp___9 = vgDrd_thread_get_vc(joinee);
    str2 = vgDrd_vc_aprint((VectorClock const   */* const  */)tmp___9);
    vgPlain_message((VgMsgKind )2, "Before join: joiner %s, joinee %s\n", str1,
                    str2);
    vgPlain_free((void *)str1);
    vgPlain_free((void *)str2);
  } else {

  }
  if (joiner == (DrdThreadId const   )vgDrd_g_drd_running_tid) {
    tmp___11 = vgDrd_thread_get_vc(joiner);
    vgDrd_vc_copy((VectorClock */* const  */)(& old_vc),
                  (VectorClock const   */* const  */)tmp___11);
    tmp___12 = vgDrd_thread_get_vc(joinee);
    tmp___13 = vgDrd_thread_get_vc(joiner);
    vgDrd_vc_combine((VectorClock */* const  */)tmp___13,
                     (VectorClock const   */* const  */)tmp___12);
    vgDrd_thread_update_conflict_set(joiner,
                                     (VectorClock const   */* const  */)(& old_vc));
    s_update_conflict_set_join_count ++;
    vgDrd_vc_cleanup((VectorClock */* const  */)(& old_vc));
  } else {
    tmp___14 = vgDrd_thread_get_vc(joinee);
    tmp___15 = vgDrd_thread_get_vc(joiner);
    vgDrd_vc_combine((VectorClock */* const  */)tmp___15,
                     (VectorClock const   */* const  */)tmp___14);
  }
  thread_discard_ordered_segments();
  tmp___17 = vgDrd_sg_get_trace();
  if (tmp___17) {
    tmp___16 = vgDrd_thread_get_vc(joiner);
    str = vgDrd_vc_aprint((VectorClock const   */* const  */)tmp___16);
    vgPlain_message((VgMsgKind )2, "After join: %s\n", str);
    vgPlain_free((void *)str);
  } else {

  }
  return;
}
}
static void thread_combine_vc_sync(DrdThreadId tid , Segment const   *sg ) 
{ 
  VectorClock const   *vc ;
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  VectorClock old_vc ;
  VectorClock *tmp___5 ;
  VectorClock *tmp___6 ;
  char *str1 ;
  char *str2 ;
  VectorClock *tmp___7 ;
  Bool tmp___8 ;
  VectorClock *tmp___9 ;
  Bool tmp___10 ;
  int tmp___11 ;
  long tmp___12 ;

  {
  vc = & sg->vc;
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1126,
                        (Char const   *)"thread_combine_vc_sync", "");
  }
  tmp___1 = __builtin_expect((long )(! (! vgDrd_g_threadinfo[tid].sg_first)), 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].sg_first",
                        (Char const   *)"drd_thread.c", 1127,
                        (Char const   *)"thread_combine_vc_sync", "");
  }
  tmp___2 = __builtin_expect((long )(! (! vgDrd_g_threadinfo[tid].sg_last)), 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(g_threadinfo)[tid].sg_last",
                        (Char const   *)"drd_thread.c", 1128,
                        (Char const   *)"thread_combine_vc_sync", "");
  }
  tmp___3 = __builtin_expect((long )(! (! sg)), 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg",
                        (Char const   *)"drd_thread.c", 1129,
                        (Char const   *)"thread_combine_vc_sync", "");
  }
  tmp___4 = __builtin_expect((long )(! (! vc)), 1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"vc",
                        (Char const   *)"drd_thread.c", 1130,
                        (Char const   *)"thread_combine_vc_sync", "");
  }
  if (tid != (DrdThreadId )sg->tid) {
    tmp___5 = vgDrd_thread_get_vc((DrdThreadId const   )tid);
    vgDrd_vc_copy((VectorClock */* const  */)(& old_vc),
                  (VectorClock const   */* const  */)tmp___5);
    tmp___6 = vgDrd_thread_get_vc((DrdThreadId const   )tid);
    vgDrd_vc_combine((VectorClock */* const  */)tmp___6,
                     (VectorClock const   */* const  */)vc);
    tmp___8 = vgDrd_sg_get_trace();
    if (tmp___8) {
      str1 = vgDrd_vc_aprint((VectorClock const   */* const  */)(& old_vc));
      tmp___7 = vgDrd_thread_get_vc((DrdThreadId const   )tid);
      str2 = vgDrd_vc_aprint((VectorClock const   */* const  */)tmp___7);
      vgPlain_message((VgMsgKind )2, "thread %d: vc %s -> %s\n", tid, str1, str2);
      vgPlain_free((void *)str1);
      vgPlain_free((void *)str2);
    } else {

    }
    thread_discard_ordered_segments();
    vgDrd_thread_update_conflict_set((DrdThreadId const   )tid,
                                     (VectorClock const   */* const  */)(& old_vc));
    s_update_conflict_set_sync_count ++;
    vgDrd_vc_cleanup((VectorClock */* const  */)(& old_vc));
  } else {
    tmp___9 = vgDrd_thread_get_vc((DrdThreadId const   )tid);
    tmp___10 = vgDrd_vc_lte((VectorClock const   */* const  */)vc,
                            (VectorClock const   */* const  */)tmp___9);
    if (tmp___10) {
      tmp___11 = 1;
    } else {
      tmp___11 = 0;
    }
    tmp___12 = __builtin_expect((long )tmp___11, 1L);
    if (tmp___12) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"DRD_(vc_lte)(vc, DRD_(thread_get_vc)(tid))",
                          (Char const   *)"drd_thread.c", 1153,
                          (Char const   *)"thread_combine_vc_sync", "");
    }
  }
  return;
}
}
void vgDrd_thread_new_segment_and_combine_vc(DrdThreadId tid ,
                                             Segment const   *sg ) 
{ 
  int tmp ;
  long tmp___0 ;
  Bool tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  long tmp___4 ;
  Segment *tmp___5 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1166,
                        (Char const   *)"vgDrd_thread_new_segment_and_combine_vc",
                        "");
  }
  tmp___1 = thread_conflict_set_up_to_date((DrdThreadId const   )vgDrd_g_drd_running_tid);
  if (tmp___1) {
    tmp___2 = 1;
  } else {
    tmp___2 = 0;
  }
  tmp___3 = __builtin_expect((long )tmp___2, 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"thread_conflict_set_up_to_date(DRD_(g_drd_running_tid))",
                        (Char const   *)"drd_thread.c", 1167,
                        (Char const   *)"vgDrd_thread_new_segment_and_combine_vc",
                        "");
  }
  tmp___4 = __builtin_expect((long )(! (! sg)), 1L);
  if (tmp___4) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"sg",
                        (Char const   *)"drd_thread.c", 1168,
                        (Char const   *)"vgDrd_thread_new_segment_and_combine_vc",
                        "");
  }
  tmp___5 = vgDrd_sg_new((DrdThreadId const   )tid, (DrdThreadId const   )tid);
  thread_append_segment((DrdThreadId const   )tid,
                        (Segment */* const  */)tmp___5);
  thread_combine_vc_sync(tid, sg);
  if (s_segment_merging) {
    s_new_segments_since_last_merge = (Bool )((int )s_new_segments_since_last_merge + 1);
    if ((int )s_new_segments_since_last_merge >= s_segment_merge_interval) {
      thread_discard_ordered_segments();
      thread_merge_segments();
    } else {

    }
  } else {

  }
  return;
}
}
void vgDrd_thread_stop_using_mem(Addr const   a1 , Addr const   a2 ) 
{ 
  Segment *p ;
  struct bitmap *tmp ;

  {
  p = vgDrd_g_sg_list;
  while (p) {
    tmp = vgDrd_sg_bm((Segment */* const  */)p);
    vgDrd_bm_clear((struct bitmap */* const  */)tmp, a1, a2);
    p = p->g_next;
  }
  vgDrd_bm_clear((struct bitmap */* const  */)vgDrd_g_conflict_set, a1, a2);
  return;
}
}
void vgDrd_thread_set_record_loads(DrdThreadId const   tid ,
                                   Bool const   enabled ) 
{ 
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1201,
                        (Char const   *)"vgDrd_thread_set_record_loads", "");
  }
  tmp___1 = __builtin_expect((long )(! (! ((int const   )enabled == (int const   )(! (! enabled))))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"enabled == !! enabled",
                        (Char const   *)"drd_thread.c", 1202,
                        (Char const   *)"vgDrd_thread_set_record_loads", "");
  }
  vgDrd_g_threadinfo[tid].is_recording_loads = (Bool )enabled;
  return;
}
}
void vgDrd_thread_set_record_stores(DrdThreadId const   tid ,
                                    Bool const   enabled ) 
{ 
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1211,
                        (Char const   *)"vgDrd_thread_set_record_stores", "");
  }
  tmp___1 = __builtin_expect((long )(! (! ((int const   )enabled == (int const   )(! (! enabled))))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"enabled == !! enabled",
                        (Char const   *)"drd_thread.c", 1212,
                        (Char const   *)"vgDrd_thread_set_record_stores", "");
  }
  vgDrd_g_threadinfo[tid].is_recording_stores = (Bool )enabled;
  return;
}
}
void vgDrd_thread_print_all(void) 
{ 
  unsigned int i ;
  Segment *p ;

  {
  i = 0U;
  while (i < 500U) {
    p = vgDrd_g_threadinfo[i].sg_first;
    if (p) {
      vgPlain_printf("**************\n* thread %3d (%d/%d/%d/%d/0x%lx/%d) *\n**************\n",
                     i, (int )vgDrd_g_threadinfo[i].valid,
                     (int )vgDrd_g_threadinfo[i].vg_thread_exists,
                     vgDrd_g_threadinfo[i].vg_threadid,
                     (int )vgDrd_g_threadinfo[i].posix_thread_exists,
                     vgDrd_g_threadinfo[i].pt_threadid,
                     (int )vgDrd_g_threadinfo[i].detached_posix_thread);
      while (p) {
        vgDrd_sg_print((Segment */* const  */)p);
        p = p->thr_next;
      }
    } else {

    }
    i ++;
  }
  return;
}
}
static void show_call_stack(DrdThreadId const   tid ,
                            ExeContext * const  callstack ) 
{ 
  ThreadId vg_tid ;
  ThreadId tmp ;

  {
  tmp = vgDrd_DrdThreadIdToVgThreadId(tid);
  vg_tid = tmp;
  if (vg_tid != 0U) {
    if (callstack) {
      vgPlain_pp_ExeContext((ExeContext *)callstack);
    } else {
      vgPlain_get_and_pp_StackTrace(vg_tid, (UInt )vgPlain_clo_backtrace_size);
    }
  } else
  if (! vgPlain_clo_xml) {
    vgPlain_message((VgMsgKind )1,
                    "   (thread finished, call stack no longer available)\n");
  } else {

  }
  return;
}
}
static void thread_report_conflicting_segments_segment(DrdThreadId const   tid ,
                                                       Addr const   addr ,
                                                       SizeT const   size ,
                                                       BmAccessTypeT const   access_type ,
                                                       Segment const   * const  p ) 
{ 
  unsigned int i ;
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  Segment *q ;
  Bool tmp___2 ;
  Segment *q_next ;
  long tmp___3 ;
  ExeContext *tmp___4 ;
  struct bitmap *tmp___5 ;
  Bool tmp___6 ;
  Bool tmp___7 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1275,
                        (Char const   *)"thread_report_conflicting_segments_segment",
                        "");
  }
  tmp___1 = __builtin_expect((long )(! (! p)), 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"p",
                        (Char const   *)"drd_thread.c", 1276,
                        (Char const   *)"thread_report_conflicting_segments_segment",
                        "");
  }
  i = 0U;
  while (i < 500U) {
    if (i != (unsigned int )tid) {
      q = vgDrd_g_threadinfo[i].sg_last;
      while (q) {
        tmp___2 = vgDrd_vc_lte((VectorClock const   */* const  */)(& q->vc),
                               (VectorClock const   */* const  */)(& p->vc));
        if (tmp___2) {
          break;
        } else {

        }
        tmp___7 = vgDrd_vc_lte((VectorClock const   */* const  */)(& p->vc),
                               (VectorClock const   */* const  */)(& q->vc));
        if (tmp___7) {

        } else {
          tmp___5 = vgDrd_sg_bm((Segment */* const  */)q);
          tmp___6 = vgDrd_bm_has_conflict_with((struct bitmap */* const  */)tmp___5,
                                               addr, addr + size, access_type);
          if (tmp___6) {
            tmp___3 = __builtin_expect((long )(! (! q->stacktrace)), 1L);
            if (tmp___3) {

            } else {
              vgPlain_assert_fail((Bool )0, (Char const   *)"q->stacktrace",
                                  (Char const   *)"drd_thread.c", 1296,
                                  (Char const   *)"thread_report_conflicting_segments_segment",
                                  "");
            }
            if (vgPlain_clo_xml) {
              vgPlain_printf_xml("  <other_segment_start>\n");
            } else {
              vgPlain_message((VgMsgKind )1,
                              "Other segment start (thread %d)\n", i);
            }
            show_call_stack((DrdThreadId const   )i,
                            (ExeContext */* const  */)q->stacktrace);
            if (vgPlain_clo_xml) {
              vgPlain_printf_xml("  </other_segment_start>\n  <other_segment_end>\n");
            } else {
              vgPlain_message((VgMsgKind )1, "Other segment end (thread %d)\n",
                              i);
            }
            q_next = q->thr_next;
            if (q_next) {
              tmp___4 = q_next->stacktrace;
            } else {
              tmp___4 = (ExeContext *)0;
            }
            show_call_stack((DrdThreadId const   )i,
                            (ExeContext */* const  */)tmp___4);
            if (vgPlain_clo_xml) {
              vgPlain_printf_xml("  </other_segment_end>\n");
            } else {

            }
          } else {

          }
        }
        q = q->thr_prev;
      }
    } else {

    }
    i ++;
  }
  return;
}
}
void vgDrd_thread_report_conflicting_segments(DrdThreadId const   tid ,
                                              Addr const   addr ,
                                              SizeT const   size ,
                                              BmAccessTypeT const   access_type ) 
{ 
  Segment *p ;
  int tmp ;
  long tmp___0 ;
  struct bitmap *tmp___1 ;
  Bool tmp___2 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1329,
                        (Char const   *)"vgDrd_thread_report_conflicting_segments",
                        "");
  }
  p = vgDrd_g_threadinfo[tid].sg_first;
  while (p) {
    tmp___1 = vgDrd_sg_bm((Segment */* const  */)p);
    tmp___2 = vgDrd_bm_has((struct bitmap */* const  */)tmp___1, addr,
                           addr + size, access_type);
    if (tmp___2) {
      thread_report_conflicting_segments_segment(tid, addr, size, access_type,
                                                 (Segment const   */* const  */)p);
    } else {

    }
    p = p->thr_next;
  }
  return;
}
}
static Bool thread_conflict_set_up_to_date(DrdThreadId const   tid ) ;
static int do_verify_conflict_set  =    -1;
static Bool thread_conflict_set_up_to_date(DrdThreadId const   tid ) 
{ 
  Bool result ;
  struct bitmap *computed_conflict_set ;
  Char *tmp ;

  {
  computed_conflict_set = (struct bitmap *)0;
  if (do_verify_conflict_set < 0) {
    tmp = vgPlain_getenv((Char *)"DRD_VERIFY_CONFLICT_SET");
    do_verify_conflict_set = (unsigned int )tmp != (unsigned int )((Char *)0);
  } else {

  }
  if (do_verify_conflict_set == 0) {
    return ((Bool )1);
  } else {

  }
  thread_compute_conflict_set(& computed_conflict_set, tid);
  result = vgDrd_bm_equal((struct bitmap */* const  */)vgDrd_g_conflict_set,
                          (struct bitmap */* const  */)computed_conflict_set);
  if (! result) {
    vgPlain_printf("actual conflict set:\n");
    vgDrd_bm_print((struct bitmap */* const  */)vgDrd_g_conflict_set);
    vgPlain_printf("\n");
    vgPlain_printf("computed conflict set:\n");
    vgDrd_bm_print((struct bitmap */* const  */)computed_conflict_set);
    vgPlain_printf("\n");
  } else {

  }
  vgDrd_bm_delete((struct bitmap */* const  */)computed_conflict_set);
  return (result);
}
}
static void thread_compute_conflict_set(struct bitmap **conflict_set ,
                                        DrdThreadId const   tid ) 
{ 
  Segment *p ;
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  ULong tmp___2 ;
  ULong tmp___3 ;
  char *str ;
  VectorClock *tmp___4 ;
  unsigned int j ;
  char *vc ;
  Segment *q ;
  char *str___0 ;
  struct bitmap *tmp___5 ;
  char *str___1 ;
  Bool tmp___6 ;
  Bool tmp___7 ;
  Bool tmp___8 ;
  ULong tmp___9 ;
  ULong tmp___10 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1380,
                        (Char const   *)"thread_compute_conflict_set", "");
  }
  tmp___1 = __builtin_expect((long )(! (! (tid == (DrdThreadId const   )vgDrd_g_drd_running_tid))),
                             1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"tid == DRD_(g_drd_running_tid)",
                        (Char const   *)"drd_thread.c", 1381,
                        (Char const   *)"thread_compute_conflict_set", "");
  }
  s_compute_conflict_set_count ++;
  tmp___2 = vgDrd_bm_get_bitmap_creation_count();
  s_conflict_set_bitmap_creation_count -= tmp___2;
  tmp___3 = vgDrd_bm_get_bitmap2_creation_count();
  s_conflict_set_bitmap2_creation_count -= tmp___3;
  if (*conflict_set) {
    vgDrd_bm_cleanup((struct bitmap */* const  */)*conflict_set);
    vgDrd_bm_init((struct bitmap */* const  */)*conflict_set);
  } else {
    *conflict_set = vgDrd_bm_new();
  }
  if (s_trace_conflict_set) {
    tmp___4 = vgDrd_thread_get_vc(tid);
    str = vgDrd_vc_aprint((VectorClock const   */* const  */)tmp___4);
    vgPlain_message((VgMsgKind )2,
                    "computing conflict set for thread %d with vc %s\n", tid,
                    str);
    vgPlain_free((void *)str);
  } else {

  }
  p = vgDrd_g_threadinfo[tid].sg_last;
  if (s_trace_conflict_set) {
    vc = vgDrd_vc_aprint((VectorClock const   */* const  */)(& p->vc));
    vgPlain_message((VgMsgKind )2, "conflict set: thread [%d] at vc %s\n", tid,
                    vc);
    vgPlain_free((void *)vc);
  } else {

  }
  j = 0U;
  while (j < 500U) {
    if (j != (unsigned int )tid) {
      tmp___8 = vgDrd_IsValidDrdThreadId((DrdThreadId const   )j);
      if (tmp___8) {
        q = vgDrd_g_threadinfo[j].sg_last;
        while (q) {
          tmp___6 = vgDrd_vc_lte((VectorClock const   */* const  */)(& q->vc),
                                 (VectorClock const   */* const  */)(& p->vc));
          if (tmp___6) {
            _L: /* CIL Label */ 
            if (s_trace_conflict_set) {
              str___1 = vgDrd_vc_aprint((VectorClock const   */* const  */)(& q->vc));
              vgPlain_message((VgMsgKind )2,
                              "conflict set: [%d] ignoring segment %s\n", j,
                              str___1);
              vgPlain_free((void *)str___1);
            } else {

            }
          } else {
            tmp___7 = vgDrd_vc_lte((VectorClock const   */* const  */)(& p->vc),
                                   (VectorClock const   */* const  */)(& q->vc));
            if (tmp___7) {
              goto _L;
            } else {
              if (s_trace_conflict_set) {
                str___0 = vgDrd_vc_aprint((VectorClock const   */* const  */)(& q->vc));
                vgPlain_message((VgMsgKind )2,
                                "conflict set: [%d] merging segment %s\n", j,
                                str___0);
                vgPlain_free((void *)str___0);
              } else {

              }
              tmp___5 = vgDrd_sg_bm((Segment */* const  */)q);
              vgDrd_bm_merge2((struct bitmap */* const  */)*conflict_set,
                              (struct bitmap */* const  */)tmp___5);
            }
          }
          q = q->thr_prev;
        }
      } else {

      }
    } else {

    }
    j ++;
  }
  tmp___9 = vgDrd_bm_get_bitmap_creation_count();
  s_conflict_set_bitmap_creation_count += tmp___9;
  tmp___10 = vgDrd_bm_get_bitmap2_creation_count();
  s_conflict_set_bitmap2_creation_count += tmp___10;
  if (s_trace_conflict_set_bm) {
    vgPlain_message((VgMsgKind )2, "[%d] new conflict set:\n", tid);
    vgDrd_bm_print((struct bitmap */* const  */)*conflict_set);
    vgPlain_message((VgMsgKind )2, "[%d] end of new conflict set.\n", tid);
  } else {

  }
  return;
}
}
void vgDrd_thread_update_conflict_set(DrdThreadId const   tid ,
                                      VectorClock const   * const  old_vc ) 
{ 
  VectorClock const   *new_vc ;
  Segment *p ;
  unsigned int j ;
  int tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;
  long tmp___3 ;
  char *str ;
  VectorClock *tmp___4 ;
  VectorClock *tmp___5 ;
  Bool tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  Segment *q ;
  Bool tmp___9 ;
  Bool included_in_old_conflict_set ;
  Bool tmp___10 ;
  int tmp___11 ;
  Bool included_in_new_conflict_set ;
  Bool tmp___12 ;
  int tmp___13 ;
  char *str___0 ;
  char const   *tmp___14 ;
  long tmp___15 ;
  struct bitmap *tmp___16 ;
  Bool tmp___17 ;
  Bool included_in_old_conflict_set___0 ;
  Bool tmp___18 ;
  int tmp___19 ;
  Bool included_in_new_conflict_set___0 ;
  Bool tmp___20 ;
  Bool tmp___21 ;
  int tmp___22 ;
  char *str___1 ;
  char const   *tmp___23 ;
  long tmp___24 ;
  struct bitmap *tmp___25 ;
  Bool tmp___26 ;
  Segment *q___0 ;
  struct bitmap *tmp___27 ;
  Bool tmp___28 ;
  Bool tmp___29 ;
  Bool tmp___30 ;
  Bool tmp___31 ;
  int tmp___32 ;
  long tmp___33 ;

  {
  if (0 <= (int )tid) {
    if (tid < 500U) {
      if (tid != 0U) {
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
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"0 <= (int)tid && tid < DRD_N_THREADS && tid != DRD_INVALID_THREADID",
                        (Char const   *)"drd_thread.c", 1477,
                        (Char const   *)"vgDrd_thread_update_conflict_set", "");
  }
  tmp___1 = __builtin_expect((long )(! (! old_vc)), 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"old_vc",
                        (Char const   *)"drd_thread.c", 1478,
                        (Char const   *)"vgDrd_thread_update_conflict_set", "");
  }
  tmp___2 = __builtin_expect((long )(! (! (tid == (DrdThreadId const   )vgDrd_g_drd_running_tid))),
                             1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"tid == DRD_(g_drd_running_tid)",
                        (Char const   *)"drd_thread.c", 1479,
                        (Char const   *)"vgDrd_thread_update_conflict_set", "");
  }
  tmp___3 = __builtin_expect((long )(! (! vgDrd_g_conflict_set)), 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"DRD_(g_conflict_set)",
                        (Char const   *)"drd_thread.c", 1480,
                        (Char const   *)"vgDrd_thread_update_conflict_set", "");
  }
  if (s_trace_conflict_set) {
    tmp___4 = vgDrd_thread_get_vc(tid);
    str = vgDrd_vc_aprint((VectorClock const   */* const  */)tmp___4);
    vgPlain_message((VgMsgKind )2,
                    "updating conflict set for thread %d with vc %s\n", tid, str);
    vgPlain_free((void *)str);
  } else {

  }
  tmp___5 = vgDrd_thread_get_vc(tid);
  new_vc = (VectorClock const   *)tmp___5;
  tmp___6 = vgDrd_vc_lte(old_vc, (VectorClock const   */* const  */)new_vc);
  if (tmp___6) {
    tmp___7 = 1;
  } else {
    tmp___7 = 0;
  }
  tmp___8 = __builtin_expect((long )tmp___7, 1L);
  if (tmp___8) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"DRD_(vc_lte)(old_vc, new_vc)",
                        (Char const   *)"drd_thread.c", 1493,
                        (Char const   *)"vgDrd_thread_update_conflict_set", "");
  }
  vgDrd_bm_unmark(vgDrd_g_conflict_set);
  j = 0U;
  while (j < 500U) {
    if (j == (unsigned int )tid) {
      goto __Cont;
    } else {
      tmp___9 = vgDrd_IsValidDrdThreadId((DrdThreadId const   )j);
      if (tmp___9) {

      } else {
        goto __Cont;
      }
    }
    q = vgDrd_g_threadinfo[j].sg_last;
    while (1) {
      if (q) {
        tmp___17 = vgDrd_vc_lte((VectorClock const   */* const  */)(& q->vc),
                                (VectorClock const   */* const  */)new_vc);
        if (tmp___17) {
          break;
        } else {

        }
      } else {
        break;
      }
      tmp___10 = vgDrd_vc_lte(old_vc,
                              (VectorClock const   */* const  */)(& q->vc));
      if (tmp___10) {
        tmp___11 = 0;
      } else {
        tmp___11 = 1;
      }
      included_in_old_conflict_set = (Bool )tmp___11;
      tmp___12 = vgDrd_vc_lte((VectorClock const   */* const  */)new_vc,
                              (VectorClock const   */* const  */)(& q->vc));
      if (tmp___12) {
        tmp___13 = 0;
      } else {
        tmp___13 = 1;
      }
      included_in_new_conflict_set = (Bool )tmp___13;
      tmp___15 = __builtin_expect((long )(! (! s_trace_conflict_set)), 0L);
      if (tmp___15) {
        str___0 = vgDrd_vc_aprint((VectorClock const   */* const  */)(& q->vc));
        if ((int )included_in_old_conflict_set != (int )included_in_new_conflict_set) {
          tmp___14 = "merging";
        } else {
          tmp___14 = "ignoring";
        }
        vgPlain_message((VgMsgKind )2, "conflict set: [%d] %s segment %s\n", j,
                        tmp___14, str___0);
        vgPlain_free((void *)str___0);
      } else {

      }
      if ((int )included_in_old_conflict_set != (int )included_in_new_conflict_set) {
        tmp___16 = vgDrd_sg_bm((Segment */* const  */)q);
        vgDrd_bm_mark(vgDrd_g_conflict_set, tmp___16);
      } else {

      }
      q = q->thr_prev;
    }
    while (1) {
      if (q) {
        tmp___26 = vgDrd_vc_lte((VectorClock const   */* const  */)(& q->vc),
                                old_vc);
        if (tmp___26) {
          break;
        } else {

        }
      } else {
        break;
      }
      tmp___18 = vgDrd_vc_lte(old_vc,
                              (VectorClock const   */* const  */)(& q->vc));
      if (tmp___18) {
        tmp___19 = 0;
      } else {
        tmp___19 = 1;
      }
      included_in_old_conflict_set___0 = (Bool )tmp___19;
      tmp___20 = vgDrd_vc_lte((VectorClock const   */* const  */)(& q->vc),
                              (VectorClock const   */* const  */)new_vc);
      if (tmp___20) {
        tmp___22 = 0;
      } else {
        tmp___21 = vgDrd_vc_lte((VectorClock const   */* const  */)new_vc,
                                (VectorClock const   */* const  */)(& q->vc));
        if (tmp___21) {
          tmp___22 = 0;
        } else {
          tmp___22 = 1;
        }
      }
      included_in_new_conflict_set___0 = (Bool )tmp___22;
      tmp___24 = __builtin_expect((long )(! (! s_trace_conflict_set)), 0L);
      if (tmp___24) {
        str___1 = vgDrd_vc_aprint((VectorClock const   */* const  */)(& q->vc));
        if ((int )included_in_old_conflict_set___0 != (int )included_in_new_conflict_set___0) {
          tmp___23 = "merging";
        } else {
          tmp___23 = "ignoring";
        }
        vgPlain_message((VgMsgKind )2, "conflict set: [%d] %s segment %s\n", j,
                        tmp___23, str___1);
        vgPlain_free((void *)str___1);
      } else {

      }
      if ((int )included_in_old_conflict_set___0 != (int )included_in_new_conflict_set___0) {
        tmp___25 = vgDrd_sg_bm((Segment */* const  */)q);
        vgDrd_bm_mark(vgDrd_g_conflict_set, tmp___25);
      } else {

      }
      q = q->thr_prev;
    }
    __Cont: /* CIL Label */ 
    j ++;
  }
  vgDrd_bm_clear_marked(vgDrd_g_conflict_set);
  p = vgDrd_g_threadinfo[tid].sg_last;
  j = 0U;
  while (j < 500U) {
    if (j != (unsigned int )tid) {
      tmp___30 = vgDrd_IsValidDrdThreadId((DrdThreadId const   )j);
      if (tmp___30) {
        q___0 = vgDrd_g_threadinfo[j].sg_last;
        while (1) {
          if (q___0) {
            tmp___29 = vgDrd_vc_lte((VectorClock const   */* const  */)(& q___0->vc),
                                    (VectorClock const   */* const  */)(& p->vc));
            if (tmp___29) {
              break;
            } else {

            }
          } else {
            break;
          }
          tmp___28 = vgDrd_vc_lte((VectorClock const   */* const  */)(& p->vc),
                                  (VectorClock const   */* const  */)(& q___0->vc));
          if (tmp___28) {

          } else {
            tmp___27 = vgDrd_sg_bm((Segment */* const  */)q___0);
            vgDrd_bm_merge2_marked((struct bitmap */* const  */)vgDrd_g_conflict_set,
                                   (struct bitmap */* const  */)tmp___27);
          }
          q___0 = q___0->thr_prev;
        }
      } else {

      }
    } else {

    }
    j ++;
  }
  vgDrd_bm_remove_cleared_marked(vgDrd_g_conflict_set);
  s_update_conflict_set_count ++;
  if (s_trace_conflict_set_bm) {
    vgPlain_message((VgMsgKind )2, "[%d] updated conflict set:\n", tid);
    vgDrd_bm_print((struct bitmap */* const  */)vgDrd_g_conflict_set);
    vgPlain_message((VgMsgKind )2, "[%d] end of updated conflict set.\n", tid);
  } else {

  }
  tmp___31 = thread_conflict_set_up_to_date((DrdThreadId const   )vgDrd_g_drd_running_tid);
  if (tmp___31) {
    tmp___32 = 1;
  } else {
    tmp___32 = 0;
  }
  tmp___33 = __builtin_expect((long )tmp___32, 1L);
  if (tmp___33) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"thread_conflict_set_up_to_date(DRD_(g_drd_running_tid))",
                        (Char const   *)"drd_thread.c", 1576,
                        (Char const   *)"vgDrd_thread_update_conflict_set", "");
  }
  return;
}
}
ULong vgDrd_thread_get_context_switch_count(void) 
{ 


  {
  return (s_context_switch_count);
}
}
ULong vgDrd_thread_get_discard_ordered_segments_count(void) 
{ 


  {
  return (s_discard_ordered_segments_count);
}
}
ULong vgDrd_thread_get_compute_conflict_set_count(void) 
{ 


  {
  return (s_compute_conflict_set_count);
}
}
ULong vgDrd_thread_get_update_conflict_set_count(void) 
{ 


  {
  return (s_update_conflict_set_count);
}
}
ULong vgDrd_thread_get_update_conflict_set_new_sg_count(void) 
{ 


  {
  return (s_update_conflict_set_new_sg_count);
}
}
ULong vgDrd_thread_get_update_conflict_set_sync_count(void) 
{ 


  {
  return (s_update_conflict_set_sync_count);
}
}
ULong vgDrd_thread_get_update_conflict_set_join_count(void) 
{ 


  {
  return (s_update_conflict_set_join_count);
}
}
ULong vgDrd_thread_get_conflict_set_bitmap_creation_count(void) 
{ 


  {
  return (s_conflict_set_bitmap_creation_count);
}
}
ULong vgDrd_thread_get_conflict_set_bitmap2_creation_count(void) 
{ 


  {
  return (s_conflict_set_bitmap2_creation_count);
}
}
static void vgDrd_vc_reserve(VectorClock * const  vc ,
                             unsigned int const   new_capacity ) ;
void vgDrd_vc_init(VectorClock * const  vc , VCElem const   * const  vcelem ,
                   unsigned int const   size ) 
{ 
  long tmp ;
  int tmp___0 ;
  long tmp___1 ;

  {
  tmp = __builtin_expect((long )(! (! vc)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"vc",
                        (Char const   *)"drd_vc.c", 50,
                        (Char const   *)"vgDrd_vc_init", "");
  }
  vc->size = 0U;
  vc->capacity = 0U;
  vc->vc = (VCElem *)0;
  vgDrd_vc_reserve(vc, size);
  if (size == 0U) {
    tmp___0 = 1;
  } else
  if ((unsigned int )vc->vc != (unsigned int )((VCElem *)0)) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"size == 0 || vc->vc != 0",
                        (Char const   *)"drd_vc.c", 55,
                        (Char const   *)"vgDrd_vc_init", "");
  }
  if (vcelem) {
    vgPlain_memcpy((void *)vc->vc, (void const   *)vcelem,
                   (SizeT )(size * (unsigned int const   )sizeof(*(vcelem + 0))));
    vc->size = (unsigned int )size;
  } else {

  }
  return;
}
}
void vgDrd_vc_cleanup(VectorClock * const  vc ) 
{ 


  {
  vgDrd_vc_reserve(vc, (unsigned int const   )0);
  return;
}
}
void vgDrd_vc_copy(VectorClock * const  new , VectorClock const   * const  rhs ) 
{ 


  {
  vgDrd_vc_init(new, (VCElem const   */* const  */)rhs->vc, rhs->size);
  return;
}
}
void vgDrd_vc_assign(VectorClock * const  lhs ,
                     VectorClock const   * const  rhs ) 
{ 


  {
  vgDrd_vc_cleanup(lhs);
  vgDrd_vc_copy(lhs, rhs);
  return;
}
}
void vgDrd_vc_increment(VectorClock * const  vc , DrdThreadId const   tid ) 
{ 
  unsigned int i ;
  UInt oldcount ;
  long tmp ;
  VCElem vcelem ;
  VectorClock vc2 ;

  {
  i = 0U;
  while (i < vc->size) {
    if ((vc->vc + i)->threadid == (DrdThreadId )tid) {
      oldcount = (vc->vc + i)->count;
      ((vc->vc + i)->count) ++;
      tmp = __builtin_expect((long )(! (! (oldcount < (vc->vc + i)->count))), 1L);
      if (tmp) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"oldcount < vc->vc[i].count",
                            (Char const   *)"drd_vc.c", 93,
                            (Char const   *)"vgDrd_vc_increment", "");
      }
      return;
    } else {

    }
    i ++;
  }
  vcelem.threadid = (DrdThreadId )tid;
  vcelem.count = (UInt )1;
  vgDrd_vc_init((VectorClock */* const  */)(& vc2),
                (VCElem const   */* const  */)(& vcelem),
                (unsigned int const   )1);
  vgDrd_vc_combine(vc, (VectorClock const   */* const  */)(& vc2));
  vgDrd_vc_cleanup((VectorClock */* const  */)(& vc2));
  return;
}
}
Bool vgDrd_vc_ordered(VectorClock const   * const  vc1 ,
                      VectorClock const   * const  vc2 ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  int tmp___1 ;

  {
  tmp = vgDrd_vc_lte(vc1, vc2);
  if (tmp) {
    tmp___1 = 1;
  } else {
    tmp___0 = vgDrd_vc_lte(vc2, vc1);
    if (tmp___0) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
  }
  return ((Bool )tmp___1);
}
}
void vgDrd_vc_min(VectorClock * const  result ,
                  VectorClock const   * const  rhs ) 
{ 
  unsigned int i ;
  unsigned int j ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;

  {
  tmp = __builtin_expect((long )(! (! result)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"result",
                        (Char const   *)"drd_vc.c", 127,
                        (Char const   *)"vgDrd_vc_min", "");
  }
  tmp___0 = __builtin_expect((long )(! (! rhs)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"rhs",
                        (Char const   *)"drd_vc.c", 128,
                        (Char const   *)"vgDrd_vc_min", "");
  }
  vgDrd_vc_check((VectorClock const   */* const  */)result);
  i = 0U;
  j = 0U;
  while (j < (unsigned int )rhs->size) {
    while (1) {
      if (i < result->size) {
        if ((result->vc + i)->threadid < (rhs->vc + j)->threadid) {

        } else {
          break;
        }
      } else {
        break;
      }
      (result->vc + i)->count = (UInt )0;
      i ++;
    }
    if (i >= result->size) {
      break;
    } else {

    }
    if ((result->vc + i)->threadid <= (rhs->vc + j)->threadid) {
      tmp___1 = __builtin_expect((long )(! (! ((result->vc + i)->threadid == (rhs->vc + j)->threadid))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"result->vc[i].threadid == rhs->vc[j].threadid",
                            (Char const   *)"drd_vc.c", 150,
                            (Char const   *)"vgDrd_vc_min", "");
      }
      if ((rhs->vc + j)->count < (result->vc + i)->count) {
        (result->vc + i)->count = (rhs->vc + j)->count;
      } else {

      }
    } else {

    }
    j ++;
  }
  vgDrd_vc_check((VectorClock const   */* const  */)result);
  return;
}
}
void vgDrd_vc_combine(VectorClock * const  result ,
                      VectorClock const   * const  rhs ) 
{ 
  unsigned int i ;
  unsigned int j ;
  unsigned int shared ;
  unsigned int new_size ;
  long tmp ;
  long tmp___0 ;
  unsigned int k ;
  long tmp___1 ;
  long tmp___2 ;

  {
  tmp = __builtin_expect((long )(! (! result)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"result",
                        (Char const   *)"drd_vc.c", 170,
                        (Char const   *)"vgDrd_vc_combine", "");
  }
  tmp___0 = __builtin_expect((long )(! (! rhs)), 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"rhs",
                        (Char const   *)"drd_vc.c", 171,
                        (Char const   *)"vgDrd_vc_combine", "");
  }
  j = 0U;
  shared = 0U;
  i = 0U;
  while (i < result->size) {
    while (1) {
      if (j < (unsigned int )rhs->size) {
        if ((rhs->vc + j)->threadid < (result->vc + i)->threadid) {

        } else {
          break;
        }
      } else {
        break;
      }
      j ++;
    }
    if (j >= (unsigned int )rhs->size) {
      break;
    } else {

    }
    if ((result->vc + i)->threadid == (rhs->vc + j)->threadid) {
      shared ++;
    } else {

    }
    i ++;
  }
  vgDrd_vc_check((VectorClock const   */* const  */)result);
  new_size = (result->size + (unsigned int )rhs->size) - shared;
  if (new_size > result->capacity) {
    vgDrd_vc_reserve(result, (unsigned int const   )new_size);
  } else {

  }
  vgDrd_vc_check((VectorClock const   */* const  */)result);
  i = 0U;
  j = 0U;
  while (j < (unsigned int )rhs->size) {
    while (1) {
      if (i < result->size) {
        if ((result->vc + i)->threadid < (rhs->vc + j)->threadid) {

        } else {
          break;
        }
      } else {
        break;
      }
      i ++;
    }
    if (i >= result->size) {
      (result->size) ++;
      *(result->vc + i) = *(rhs->vc + j);
    } else
    if ((result->vc + i)->threadid > (rhs->vc + j)->threadid) {
      k = result->size;
      while (k > i) {
        *(result->vc + k) = *(result->vc + (k - 1U));
        k --;
      }
      (result->size) ++;
      *(result->vc + i) = *(rhs->vc + j);
    } else {
      tmp___1 = __builtin_expect((long )(! (! ((result->vc + i)->threadid == (rhs->vc + j)->threadid))),
                                 1L);
      if (tmp___1) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"result->vc[i].threadid == rhs->vc[j].threadid",
                            (Char const   *)"drd_vc.c", 225,
                            (Char const   *)"vgDrd_vc_combine", "");
      }
      if ((rhs->vc + j)->count > (result->vc + i)->count) {
        (result->vc + i)->count = (rhs->vc + j)->count;
      } else {

      }
    }
    j ++;
  }
  vgDrd_vc_check((VectorClock const   */* const  */)result);
  tmp___2 = __builtin_expect((long )(! (! (result->size == new_size))), 1L);
  if (tmp___2) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"result->size == new_size",
                        (Char const   *)"drd_vc.c", 233,
                        (Char const   *)"vgDrd_vc_combine", "");
  }
  return;
}
}
void vgDrd_vc_print(VectorClock const   * const  vc ) 
{ 
  char *str ;

  {
  str = vgDrd_vc_aprint(vc);
  if ((unsigned int )str != (unsigned int )((void *)0)) {
    vgPlain_printf("%s", str);
    vgPlain_free((void *)str);
  } else {

  }
  return;
}
}
char *vgDrd_vc_aprint(VectorClock const   * const  vc ) 
{ 
  unsigned int i ;
  unsigned int reserved ;
  unsigned int size ;
  char *str ;
  long tmp ;
  void *tmp___0 ;
  UInt tmp___1 ;
  long tmp___2 ;
  void *tmp___3 ;
  SizeT tmp___4 ;
  char const   *tmp___5 ;
  UInt tmp___6 ;
  UInt tmp___7 ;

  {
  str = (char *)0;
  tmp = __builtin_expect((long )(! (! vc)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"vc",
                        (Char const   *)"drd_vc.c", 259,
                        (Char const   *)"vgDrd_vc_aprint", "");
  }
  reserved = 64U;
  size = 0U;
  tmp___0 = vgPlain_realloc((HChar *)"drd.vc.aprint.1", (void *)str,
                            (SizeT )reserved);
  str = (char *)tmp___0;
  if (! str) {
    return (str);
  } else {

  }
  tmp___1 = vgPlain_snprintf((Char *)str, (Int )reserved, "[");
  size += tmp___1;
  i = 0U;
  while (i < (unsigned int )vc->size) {
    tmp___2 = __builtin_expect((long )(! (! vc->vc)), 1L);
    if (tmp___2) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"vc->vc",
                          (Char const   *)"drd_vc.c", 268,
                          (Char const   *)"vgDrd_vc_aprint", "");
    }
    tmp___4 = vgPlain_strlen((Char const   *)str);
    if (tmp___4 + 32UL > (SizeT )reserved) {
      reserved *= 2U;
      tmp___3 = vgPlain_realloc((HChar *)"drd.vc.aprint.2", (void *)str,
                                (SizeT )reserved);
      str = (char *)tmp___3;
      if (! str) {
        return (str);
      } else {

      }
    } else {

    }
    if (i > 0U) {
      tmp___5 = ",";
    } else {
      tmp___5 = "";
    }
    tmp___6 = vgPlain_snprintf((Char *)(str + size), (Int )(reserved - size),
                               "%s %d: %d", tmp___5, (vc->vc + i)->threadid,
                               (vc->vc + i)->count);
    size += tmp___6;
    i ++;
  }
  tmp___7 = vgPlain_snprintf((Char *)(str + size), (Int )(reserved - size), " ]");
  size += tmp___7;
  return (str);
}
}
void vgDrd_vc_check(VectorClock const   * const  vc ) 
{ 
  unsigned int i ;
  long tmp ;
  long tmp___0 ;

  {
  tmp = __builtin_expect((long )(! (! (vc->size <= vc->capacity))), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"vc->size <= vc->capacity",
                        (Char const   *)"drd_vc.c", 298,
                        (Char const   *)"vgDrd_vc_check", "");
  }
  i = 1U;
  while (i < (unsigned int )vc->size) {
    tmp___0 = __builtin_expect((long )(! (! ((vc->vc + (i - 1U))->threadid < (vc->vc + i)->threadid))),
                               1L);
    if (tmp___0) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"vc->vc[i-1].threadid < vc->vc[i].threadid",
                          (Char const   *)"drd_vc.c", 301,
                          (Char const   *)"vgDrd_vc_check", "");
    }
    i ++;
  }
  return;
}
}
static void vgDrd_vc_reserve(VectorClock * const  vc ,
                             unsigned int const   new_capacity ) 
{ 
  long tmp ;
  int tmp___0 ;
  long tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  void *tmp___4 ;
  int tmp___5 ;
  long tmp___6 ;
  void *tmp___7 ;
  int tmp___8 ;
  long tmp___9 ;
  int tmp___10 ;
  long tmp___11 ;
  void *tmp___12 ;
  int tmp___13 ;
  long tmp___14 ;
  int tmp___15 ;
  long tmp___16 ;
  int tmp___17 ;
  long tmp___18 ;

  {
  tmp = __builtin_expect((long )(! (! vc)), 1L);
  if (tmp) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"vc",
                        (Char const   *)"drd_vc.c", 313,
                        (Char const   *)"vgDrd_vc_reserve", "");
  }
  if (vc->capacity > 8U) {
    tmp___0 = 1;
  } else
  if ((unsigned int )vc->vc == (unsigned int )((VCElem *)0)) {
    tmp___0 = 1;
  } else
  if ((unsigned int )vc->vc == (unsigned int )(vc->preallocated)) {
    tmp___0 = 1;
  } else {
    tmp___0 = 0;
  }
  tmp___1 = __builtin_expect((long )tmp___0, 1L);
  if (tmp___1) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"vc->capacity > VC_PREALLOCATED || vc->vc == 0 || vc->vc == vc->preallocated",
                        (Char const   *)"drd_vc.c", 316,
                        (Char const   *)"vgDrd_vc_reserve", "");
  }
  if (new_capacity > (unsigned int const   )vc->capacity) {
    if (vc->vc) {
      if (vc->capacity > 8U) {
        if (vc->vc) {
          if ((unsigned int )vc->vc != (unsigned int )(vc->preallocated)) {
            if (vc->capacity > 8U) {
              tmp___2 = 1;
            } else {
              tmp___2 = 0;
            }
          } else {
            tmp___2 = 0;
          }
        } else {
          tmp___2 = 0;
        }
        tmp___3 = __builtin_expect((long )tmp___2, 1L);
        if (tmp___3) {

        } else {
          vgPlain_assert_fail((Bool )0,
                              (Char const   *)"vc->vc && vc->vc != vc->preallocated && vc->capacity > VC_PREALLOCATED",
                              (Char const   *)"drd_vc.c", 324,
                              (Char const   *)"vgDrd_vc_reserve", "");
        }
        tmp___4 = vgPlain_realloc((HChar *)"drd.vc.vr.1", (void *)vc->vc,
                                  (SizeT )(new_capacity * (unsigned int const   )sizeof(*(vc->vc + 0))));
        vc->vc = (VCElem *)tmp___4;
      } else {
        goto _L___1;
      }
    } else
    _L___1: /* CIL Label */ 
    if (vc->vc) {
      if (new_capacity > 8U) {
        if ((unsigned int )vc->vc == (unsigned int )((VCElem *)0)) {
          goto _L;
        } else
        if ((unsigned int )vc->vc == (unsigned int )(vc->preallocated)) {
          _L: /* CIL Label */ 
          if (new_capacity > 8U) {
            if (vc->capacity <= 8U) {
              tmp___5 = 1;
            } else {
              tmp___5 = 0;
            }
          } else {
            tmp___5 = 0;
          }
        } else {
          tmp___5 = 0;
        }
        tmp___6 = __builtin_expect((long )tmp___5, 1L);
        if (tmp___6) {

        } else {
          vgPlain_assert_fail((Bool )0,
                              (Char const   *)"(vc->vc == 0 || vc->vc == vc->preallocated) && new_capacity > VC_PREALLOCATED && vc->capacity <= VC_PREALLOCATED",
                              (Char const   *)"drd_vc.c", 332,
                              (Char const   *)"vgDrd_vc_reserve", "");
        }
        tmp___7 = vgPlain_malloc((HChar *)"drd.vc.vr.2",
                                 (SizeT )(new_capacity * (unsigned int const   )sizeof(*(vc->vc + 0))));
        vc->vc = (VCElem *)tmp___7;
        vgPlain_memcpy((void *)vc->vc, (void const   *)(vc->preallocated),
                       (SizeT )(vc->capacity * sizeof(*(vc->vc + 0))));
      } else {
        goto _L___0;
      }
    } else
    _L___0: /* CIL Label */ 
    if (vc->vc) {
      if ((unsigned int )vc->vc == (unsigned int )(vc->preallocated)) {
        if (new_capacity <= 8U) {
          if (vc->capacity <= 8U) {
            tmp___8 = 1;
          } else {
            tmp___8 = 0;
          }
        } else {
          tmp___8 = 0;
        }
      } else {
        tmp___8 = 0;
      }
      tmp___9 = __builtin_expect((long )tmp___8, 1L);
      if (tmp___9) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"vc->vc == vc->preallocated && new_capacity <= VC_PREALLOCATED && vc->capacity <= VC_PREALLOCATED",
                            (Char const   *)"drd_vc.c", 342,
                            (Char const   *)"vgDrd_vc_reserve", "");
      }
    } else
    if (new_capacity > 8U) {
      if ((unsigned int )vc->vc == (unsigned int )((VCElem *)0)) {
        if (new_capacity > 8U) {
          if (vc->capacity == 0U) {
            tmp___10 = 1;
          } else {
            tmp___10 = 0;
          }
        } else {
          tmp___10 = 0;
        }
      } else {
        tmp___10 = 0;
      }
      tmp___11 = __builtin_expect((long )tmp___10, 1L);
      if (tmp___11) {

      } else {
        vgPlain_assert_fail((Bool )0,
                            (Char const   *)"vc->vc == 0 && new_capacity > VC_PREALLOCATED && vc->capacity == 0",
                            (Char const   *)"drd_vc.c", 348,
                            (Char const   *)"vgDrd_vc_reserve", "");
      }
      tmp___12 = vgPlain_malloc((HChar *)"drd.vc.vr.3",
                                (SizeT )(new_capacity * (unsigned int const   )sizeof(*(vc->vc + 0))));
      vc->vc = (VCElem *)tmp___12;
    } else {
      if ((unsigned int )vc->vc == (unsigned int )((VCElem *)0)) {
        if (new_capacity <= 8U) {
          if (vc->capacity == 0U) {
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
                            (Char const   *)"vc->vc == 0 && new_capacity <= VC_PREALLOCATED && vc->capacity == 0",
                            (Char const   *)"drd_vc.c", 356,
                            (Char const   *)"vgDrd_vc_reserve", "");
      }
      vc->vc = vc->preallocated;
    }
    vc->capacity = (unsigned int )new_capacity;
  } else
  if (new_capacity == 0U) {
    if (vc->vc) {
      if (vc->capacity > 8U) {
        vgPlain_free((void *)vc->vc);
      } else {

      }
      vc->vc = (VCElem *)0;
      vc->capacity = 0U;
    } else {

    }
  } else {

  }
  if (new_capacity == 0U) {
    tmp___15 = 1;
  } else
  if ((unsigned int )vc->vc != (unsigned int )((VCElem *)0)) {
    tmp___15 = 1;
  } else {
    tmp___15 = 0;
  }
  tmp___16 = __builtin_expect((long )tmp___15, 1L);
  if (tmp___16) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"new_capacity == 0 || vc->vc != 0",
                        (Char const   *)"drd_vc.c", 369,
                        (Char const   *)"vgDrd_vc_reserve", "");
  }
  if (vc->capacity > 8U) {
    tmp___17 = 1;
  } else
  if ((unsigned int )vc->vc == (unsigned int )((VCElem *)0)) {
    tmp___17 = 1;
  } else
  if ((unsigned int )vc->vc == (unsigned int )(vc->preallocated)) {
    tmp___17 = 1;
  } else {
    tmp___17 = 0;
  }
  tmp___18 = __builtin_expect((long )tmp___17, 1L);
  if (tmp___18) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"vc->capacity > VC_PREALLOCATED || vc->vc == 0 || vc->vc == vc->preallocated",
                        (Char const   *)"drd_vc.c", 372,
                        (Char const   *)"vgDrd_vc_reserve", "");
  }
  return;
}
}
static Bool s_check_stack_accesses  =    (Bool )0;
static Bool s_first_race_only  =    (Bool )0;
Bool vgDrd_get_check_stack_accesses(void) 
{ 


  {
  return (s_check_stack_accesses);
}
}
void vgDrd_set_check_stack_accesses(Bool const   c ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if ((int const   )c == 0) {
    tmp = 1;
  } else
  if ((int const   )c == 1) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"c == False || c == True",
                        (Char const   *)"drd_load_store.c", 72,
                        (Char const   *)"vgDrd_set_check_stack_accesses", "");
  }
  s_check_stack_accesses = (Bool )c;
  return;
}
}
Bool vgDrd_get_first_race_only(void) 
{ 


  {
  return (s_first_race_only);
}
}
void vgDrd_set_first_race_only(Bool const   fro ) 
{ 
  int tmp ;
  long tmp___0 ;

  {
  if ((int const   )fro == 0) {
    tmp = 1;
  } else
  if ((int const   )fro == 1) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0, (Char const   *)"fro == False || fro == True",
                        (Char const   *)"drd_load_store.c", 83,
                        (Char const   *)"vgDrd_set_first_race_only", "");
  }
  s_first_race_only = (Bool )fro;
  return;
}
}
void vgDrd_trace_mem_access(Addr const   addr , SizeT const   size ,
                            BmAccessTypeT const   access_type ,
                            HWord const   stored_value_hi ,
                            HWord const   stored_value_lo ) 
{ 
  char *vc ;
  DrdThreadId tmp ;
  VectorClock *tmp___0 ;
  DrdThreadId tmp___1 ;
  ULong sv ;
  long tmp___2 ;
  DrdThreadId tmp___3 ;
  DrdThreadId tmp___4 ;
  char const   *tmp___5 ;
  char const   *tmp___6 ;
  char const   *tmp___7 ;
  char const   *tmp___8 ;
  DrdThreadId tmp___9 ;
  ThreadId tmp___10 ;
  ThreadId tmp___11 ;
  int tmp___12 ;
  long tmp___13 ;
  Bool tmp___14 ;

  {
  tmp___14 = vgDrd_is_any_traced(addr, addr + size);
  if (tmp___14) {
    tmp = vgDrd_thread_get_running_tid();
    tmp___0 = vgDrd_thread_get_vc((DrdThreadId const   )tmp);
    vc = vgDrd_vc_aprint((VectorClock const   */* const  */)tmp___0);
    if ((unsigned int const   )access_type == 1U) {
      if (size <= (SizeT const   )sizeof(HWord )) {
        tmp___1 = vgDrd_thread_get_running_tid();
        vgDrd_trace_msg_w_bt("store 0x%lx size %ld val %ld/0x%lx (thread %d / vc %s)",
                             addr, size, stored_value_lo, stored_value_lo,
                             tmp___1, vc);
      } else {
        goto _L___0;
      }
    } else
    _L___0: /* CIL Label */ 
    if ((unsigned int const   )access_type == 1U) {
      if (size > (SizeT const   )sizeof(HWord )) {
        tmp___2 = __builtin_expect((long )(! (! (sizeof(HWord ) == 4U))), 1L);
        if (tmp___2) {

        } else {
          vgPlain_assert_fail((Bool )0, (Char const   *)"sizeof(HWord) == 4",
                              (Char const   *)"drd_load_store.c", 105,
                              (Char const   *)"vgDrd_trace_mem_access", "");
        }
        sv = ((ULong )stored_value_hi << 32) | (unsigned long long )stored_value_lo;
        tmp___3 = vgDrd_thread_get_running_tid();
        vgDrd_trace_msg_w_bt("store 0x%lx size %ld val %lld/0x%llx (thread %d / vc %s)",
                             addr, size, sv, sv, tmp___3, vc);
      } else {
        goto _L;
      }
    } else {
      _L: /* CIL Label */ 
      tmp___4 = vgDrd_thread_get_running_tid();
      if ((unsigned int const   )access_type == 0U) {
        tmp___8 = "load ";
      } else {
        if ((unsigned int const   )access_type == 1U) {
          tmp___7 = "store";
        } else {
          if ((unsigned int const   )access_type == 2U) {
            tmp___6 = "start";
          } else {
            if ((unsigned int const   )access_type == 3U) {
              tmp___5 = "end  ";
            } else {
              tmp___5 = "????";
            }
            tmp___6 = tmp___5;
          }
          tmp___7 = tmp___6;
        }
        tmp___8 = tmp___7;
      }
      vgDrd_trace_msg_w_bt("%s 0x%lx size %ld (thread %d / vc %s)", tmp___8,
                           addr, size, tmp___4, vc);
    }
    vgPlain_free((void *)vc);
    tmp___9 = vgDrd_thread_get_running_tid();
    tmp___10 = vgDrd_DrdThreadIdToVgThreadId((DrdThreadId const   )tmp___9);
    tmp___11 = vgPlain_get_running_tid();
    if (tmp___10 == tmp___11) {
      tmp___12 = 1;
    } else {
      tmp___12 = 0;
    }
    tmp___13 = __builtin_expect((long )tmp___12, 1L);
    if (tmp___13) {

    } else {
      vgPlain_assert_fail((Bool )0,
                          (Char const   *)"DRD_(DrdThreadIdToVgThreadId)(DRD_(thread_get_running_tid)()) == VG_(get_running_tid)()",
                          (Char const   *)"drd_load_store.c", 120,
                          (Char const   *)"vgDrd_trace_mem_access", "");
    }
  } else {

  }
  return;
}
}
static void ( __attribute__((__regparm__(2))) drd_trace_mem_load)(Addr const   addr ,
                                                                  SizeT const   size ) 
{ 


  {
  vgDrd_trace_mem_access(addr, size, (BmAccessTypeT const   )0,
                         (HWord const   )0, (HWord const   )0);
  return;
}
}
static void ( __attribute__((__regparm__(3))) drd_trace_mem_store)(Addr const   addr ,
                                                                   SizeT const   size ,
                                                                   HWord const   stored_value_hi ,
                                                                   HWord const   stored_value_lo ) 
{ 


  {
  vgDrd_trace_mem_access(addr, size, (BmAccessTypeT const   )1, stored_value_hi,
                         stored_value_lo);
  return;
}
}
static void drd_report_race(Addr const   addr , SizeT const   size ,
                            BmAccessTypeT const   access_type ) 
{ 
  ThreadId vg_tid ;
  DataRaceErrInfo drei ;
  DrdThreadId tmp ;
  Addr tmp___0 ;
  Bool tmp___1 ;

  {
  vg_tid = vgPlain_get_running_tid();
  tmp___1 = vgDrd_thread_address_on_any_stack(addr);
  if (tmp___1) {

  } else {
    tmp = vgDrd_thread_get_running_tid();
    drei.tid = tmp;
    drei.addr = (Addr )addr;
    drei.size = (SizeT )size;
    drei.access_type = (BmAccessTypeT )access_type;
    tmp___0 = vgPlain_get_IP(vg_tid);
    vgPlain_maybe_record_error(vg_tid, 1, tmp___0, (Char *)"Conflicting access",
                               (void *)(& drei));
    if (s_first_race_only) {
      vgDrd_start_suppression(addr, addr + size,
                              (char const   */* const  */)"first race only");
    } else {

    }
  }
  return;
}
}
void ( __attribute__((__regparm__(2))) vgDrd_trace_load)(Addr addr , SizeT size ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_is_recording_loads();
  if (tmp) {
    if (s_check_stack_accesses) {
      goto _L;
    } else {
      tmp___0 = vgDrd_thread_address_on_stack((Addr const   )addr);
      if (tmp___0) {

      } else {
        _L: /* CIL Label */ 
        tmp___1 = bm_access_load_triggers_conflict((Addr const   )addr,
                                                   (Addr const   )(addr + size));
        if (tmp___1) {
          tmp___2 = vgDrd_is_suppressed((Addr const   )addr,
                                        (Addr const   )(addr + size));
          if (tmp___2) {

          } else {
            drd_report_race((Addr const   )addr, (SizeT const   )size,
                            (BmAccessTypeT const   )0);
          }
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
static void ( __attribute__((__regparm__(1))) drd_trace_load_1)(Addr addr ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_is_recording_loads();
  if (tmp) {
    if (s_check_stack_accesses) {
      goto _L;
    } else {
      tmp___0 = vgDrd_thread_address_on_stack((Addr const   )addr);
      if (tmp___0) {

      } else {
        _L: /* CIL Label */ 
        tmp___1 = bm_access_load_1_triggers_conflict((Addr const   )addr);
        if (tmp___1) {
          tmp___2 = vgDrd_is_suppressed((Addr const   )addr,
                                        (Addr const   )(addr + 1UL));
          if (tmp___2) {

          } else {
            drd_report_race((Addr const   )addr, (SizeT const   )1,
                            (BmAccessTypeT const   )0);
          }
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
static void ( __attribute__((__regparm__(1))) drd_trace_load_2)(Addr addr ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_is_recording_loads();
  if (tmp) {
    if (s_check_stack_accesses) {
      goto _L;
    } else {
      tmp___0 = vgDrd_thread_address_on_stack((Addr const   )addr);
      if (tmp___0) {

      } else {
        _L: /* CIL Label */ 
        tmp___1 = bm_access_load_2_triggers_conflict((Addr const   )addr);
        if (tmp___1) {
          tmp___2 = vgDrd_is_suppressed((Addr const   )addr,
                                        (Addr const   )(addr + 2UL));
          if (tmp___2) {

          } else {
            drd_report_race((Addr const   )addr, (SizeT const   )2,
                            (BmAccessTypeT const   )0);
          }
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
static void ( __attribute__((__regparm__(1))) drd_trace_load_4)(Addr addr ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_is_recording_loads();
  if (tmp) {
    if (s_check_stack_accesses) {
      goto _L;
    } else {
      tmp___0 = vgDrd_thread_address_on_stack((Addr const   )addr);
      if (tmp___0) {

      } else {
        _L: /* CIL Label */ 
        tmp___1 = bm_access_load_4_triggers_conflict((Addr const   )addr);
        if (tmp___1) {
          tmp___2 = vgDrd_is_suppressed((Addr const   )addr,
                                        (Addr const   )(addr + 4UL));
          if (tmp___2) {

          } else {
            drd_report_race((Addr const   )addr, (SizeT const   )4,
                            (BmAccessTypeT const   )0);
          }
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
static void ( __attribute__((__regparm__(1))) drd_trace_load_8)(Addr addr ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_is_recording_loads();
  if (tmp) {
    if (s_check_stack_accesses) {
      goto _L;
    } else {
      tmp___0 = vgDrd_thread_address_on_stack((Addr const   )addr);
      if (tmp___0) {

      } else {
        _L: /* CIL Label */ 
        tmp___1 = bm_access_load_8_triggers_conflict((Addr const   )addr);
        if (tmp___1) {
          tmp___2 = vgDrd_is_suppressed((Addr const   )addr,
                                        (Addr const   )(addr + 8UL));
          if (tmp___2) {

          } else {
            drd_report_race((Addr const   )addr, (SizeT const   )8,
                            (BmAccessTypeT const   )0);
          }
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
void ( __attribute__((__regparm__(2))) vgDrd_trace_store)(Addr addr ,
                                                          SizeT size ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_is_recording_stores();
  if (tmp) {
    if (s_check_stack_accesses) {
      goto _L;
    } else {
      tmp___0 = vgDrd_thread_address_on_stack((Addr const   )addr);
      if (tmp___0) {

      } else {
        _L: /* CIL Label */ 
        tmp___1 = bm_access_store_triggers_conflict((Addr const   )addr,
                                                    (Addr const   )(addr + size));
        if (tmp___1) {
          tmp___2 = vgDrd_is_suppressed((Addr const   )addr,
                                        (Addr const   )(addr + size));
          if (tmp___2) {

          } else {
            drd_report_race((Addr const   )addr, (SizeT const   )size,
                            (BmAccessTypeT const   )1);
          }
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
static void ( __attribute__((__regparm__(1))) drd_trace_store_1)(Addr addr ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_is_recording_stores();
  if (tmp) {
    if (s_check_stack_accesses) {
      goto _L;
    } else {
      tmp___0 = vgDrd_thread_address_on_stack((Addr const   )addr);
      if (tmp___0) {

      } else {
        _L: /* CIL Label */ 
        tmp___1 = bm_access_store_1_triggers_conflict((Addr const   )addr);
        if (tmp___1) {
          tmp___2 = vgDrd_is_suppressed((Addr const   )addr,
                                        (Addr const   )(addr + 1UL));
          if (tmp___2) {

          } else {
            drd_report_race((Addr const   )addr, (SizeT const   )1,
                            (BmAccessTypeT const   )1);
          }
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
static void ( __attribute__((__regparm__(1))) drd_trace_store_2)(Addr addr ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_is_recording_stores();
  if (tmp) {
    if (s_check_stack_accesses) {
      goto _L;
    } else {
      tmp___0 = vgDrd_thread_address_on_stack((Addr const   )addr);
      if (tmp___0) {

      } else {
        _L: /* CIL Label */ 
        tmp___1 = bm_access_store_2_triggers_conflict((Addr const   )addr);
        if (tmp___1) {
          tmp___2 = vgDrd_is_suppressed((Addr const   )addr,
                                        (Addr const   )(addr + 2UL));
          if (tmp___2) {

          } else {
            drd_report_race((Addr const   )addr, (SizeT const   )2,
                            (BmAccessTypeT const   )1);
          }
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
static void ( __attribute__((__regparm__(1))) drd_trace_store_4)(Addr addr ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_is_recording_stores();
  if (tmp) {
    if (s_check_stack_accesses) {
      goto _L;
    } else {
      tmp___0 = vgDrd_thread_address_on_stack((Addr const   )addr);
      if (tmp___0) {

      } else {
        _L: /* CIL Label */ 
        tmp___1 = bm_access_store_4_triggers_conflict((Addr const   )addr);
        if (tmp___1) {
          tmp___2 = vgDrd_is_suppressed((Addr const   )addr,
                                        (Addr const   )(addr + 4UL));
          if (tmp___2) {

          } else {
            drd_report_race((Addr const   )addr, (SizeT const   )4,
                            (BmAccessTypeT const   )1);
          }
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
static void ( __attribute__((__regparm__(1))) drd_trace_store_8)(Addr addr ) 
{ 
  Bool tmp ;
  Bool tmp___0 ;
  Bool tmp___1 ;
  Bool tmp___2 ;

  {
  tmp = vgDrd_running_thread_is_recording_stores();
  if (tmp) {
    if (s_check_stack_accesses) {
      goto _L;
    } else {
      tmp___0 = vgDrd_thread_address_on_stack((Addr const   )addr);
      if (tmp___0) {

      } else {
        _L: /* CIL Label */ 
        tmp___1 = bm_access_store_8_triggers_conflict((Addr const   )addr);
        if (tmp___1) {
          tmp___2 = vgDrd_is_suppressed((Addr const   )addr,
                                        (Addr const   )(addr + 8UL));
          if (tmp___2) {

          } else {
            drd_report_race((Addr const   )addr, (SizeT const   )8,
                            (BmAccessTypeT const   )1);
          }
        } else {

        }
      }
    }
  } else {

  }
  return;
}
}
static Bool is_stack_access(IRSB * const  bb , IRExpr * const  addr_expr ) 
{ 
  Bool result ;
  int i ;
  IRExpr *e ;

  {
  result = (Bool )0;
  if ((unsigned int )addr_expr->tag == 86019U) {
    i = 0;
    while (i < bb->stmts_size) {
      if (*(bb->stmts + i)) {
        if ((unsigned int )(*(bb->stmts + i))->tag == 102405U) {
          if ((*(bb->stmts + i))->Ist.WrTmp.tmp == addr_expr->Iex.RdTmp.tmp) {
            e = (*(bb->stmts + i))->Ist.WrTmp.data;
            if ((unsigned int )e->tag == 86017U) {
              if (e->Iex.Get.offset == 16) {
                result = (Bool )1;
              } else {

              }
            } else {

            }
            break;
          } else {

          }
        } else {

        }
      } else {

      }
      i ++;
    }
  } else {

  }
  return (result);
}
}
static IROp const   u_widen_irop[5][9]  = { {        0,        0,        0,        0, 
            (IROp const   )82056,        0,        0,        0, 
            (IROp const   )82057}, 
   {        0,        0,        0,        0, 
            (IROp const   )82026,        0,        0,        0, 
            (IROp const   )82027}, 
   {        0,        0,        0,        0, 
            (IROp const   )82028,        0,        0,        0, 
            (IROp const   )82029}, 
   {        0,        0,        0,        0, 
            0,        0,        0,        0, 
            (IROp const   )82030}};
static IRExpr *instr_trace_mem_load(IRSB * const  bb , IRExpr *addr_expr ,
                                    HWord const   size ) 
{ 
  IRTemp tmp ;
  IRType tmp___0 ;
  IRStmt *tmp___1 ;
  IRExpr *tmp___2 ;
  IRExpr **tmp___3 ;
  void *tmp___4 ;
  IRDirty *tmp___5 ;
  IRStmt *tmp___6 ;

  {
  tmp___0 = typeOfIRExpr(bb->tyenv, addr_expr);
  tmp = newIRTemp(bb->tyenv, tmp___0);
  tmp___1 = IRStmt_WrTmp(tmp, addr_expr);
  addStmtToIRSB((IRSB *)bb, tmp___1);
  addr_expr = IRExpr_RdTmp(tmp);
  tmp___2 = mkIRExpr_HWord((HWord )size);
  tmp___3 = mkIRExprVec_2(addr_expr, tmp___2);
  tmp___4 = vgPlain_fnptr_to_fnentry((void *)(& drd_trace_mem_load));
  tmp___5 = unsafeIRDirty_0_N(2, (HChar *)"drd_trace_mem_load", tmp___4, tmp___3);
  tmp___6 = IRStmt_Dirty(tmp___5);
  addStmtToIRSB((IRSB *)bb, tmp___6);
  return (addr_expr);
}
}
static void instr_trace_mem_store(IRSB * const  bb , IRExpr * const  addr_expr ,
                                  IRExpr *data_expr_hi , IRExpr *data_expr_lo ) 
{ 
  IRType ty_data_expr ;
  HWord size ;
  int tmp ;
  long tmp___0 ;
  IRType tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  Int tmp___4 ;
  IRTemp tmp___5 ;
  IRTemp tmp___6 ;
  IRExpr *tmp___7 ;
  IRStmt *tmp___8 ;
  IRTemp tmp___9 ;
  IRTemp tmp___10 ;
  IRExpr *tmp___11 ;
  IRStmt *tmp___12 ;
  IROp widen_op ;
  IRTemp tmp___13 ;
  int tmp___14 ;
  IRExpr *tmp___15 ;
  IRStmt *tmp___16 ;
  IRTemp tmp___17 ;
  long tmp___18 ;
  long tmp___19 ;
  IRExpr *tmp___20 ;
  IRStmt *tmp___21 ;
  IRExpr *tmp___22 ;
  IRStmt *tmp___23 ;
  IRExpr *tmp___24 ;
  IRExpr *tmp___25 ;
  IRExpr *tmp___26 ;
  IRExpr **tmp___27 ;
  void *tmp___28 ;
  IRDirty *tmp___29 ;
  IRStmt *tmp___30 ;

  {
  if (sizeof(HWord ) == 4U) {
    tmp = 1;
  } else
  if (sizeof(HWord ) == 8U) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  tmp___0 = __builtin_expect((long )tmp, 1L);
  if (tmp___0) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"sizeof(HWord) == 4 || sizeof(HWord) == 8",
                        (Char const   *)"drd_load_store.c", 372,
                        (Char const   *)"instr_trace_mem_store", "");
  }
  if (! data_expr_hi) {
    tmp___2 = 1;
  } else {
    tmp___1 = typeOfIRExpr(bb->tyenv, data_expr_hi);
    if ((unsigned int )tmp___1 == 69636U) {
      tmp___2 = 1;
    } else {
      tmp___2 = 0;
    }
  }
  tmp___3 = __builtin_expect((long )tmp___2, 1L);
  if (tmp___3) {

  } else {
    vgPlain_assert_fail((Bool )0,
                        (Char const   *)"!data_expr_hi || typeOfIRExpr(bb->tyenv, data_expr_hi) == Ity_I32",
                        (Char const   *)"drd_load_store.c", 373,
                        (Char const   *)"instr_trace_mem_store", "");
  }
  ty_data_expr = typeOfIRExpr(bb->tyenv, data_expr_lo);
  tmp___4 = sizeofIRType(ty_data_expr);
  size = (HWord )tmp___4;
  if ((unsigned int )ty_data_expr == 69639U) {
    tmp___6 = newIRTemp(bb->tyenv, (IRType )69636);
    tmp___5 = tmp___6;
    tmp___7 = IRExpr_Unop((IROp )82105, data_expr_lo);
    tmp___8 = IRStmt_WrTmp(tmp___5, tmp___7);
    addStmtToIRSB((IRSB *)bb, tmp___8);
    data_expr_lo = IRExpr_RdTmp(tmp___5);
    ty_data_expr = (IRType )69636;
  } else
  if ((unsigned int )ty_data_expr == 69640U) {
    tmp___10 = newIRTemp(bb->tyenv, (IRType )69637);
    tmp___9 = tmp___10;
    tmp___11 = IRExpr_Unop((IROp )82103, data_expr_lo);
    tmp___12 = IRStmt_WrTmp(tmp___9, tmp___11);
    addStmtToIRSB((IRSB *)bb, tmp___12);
    data_expr_lo = IRExpr_RdTmp(tmp___9);
    ty_data_expr = (IRType )69637;
  } else {

  }
  if (size == (HWord )sizeof(HWord )) {
    if ((unsigned int )ty_data_expr == 69636U) {

    } else
    if ((unsigned int )ty_data_expr == 69637U) {

    } else {
      goto _L;
    }
  } else {
    _L: /* CIL Label */ 
    if (69633U <= (unsigned int )ty_data_expr) {
      if ((unsigned int )ty_data_expr < 69633U + sizeof(u_widen_irop) / sizeof(u_widen_irop[0])) {
        widen_op = (IROp )u_widen_irop[(unsigned int )ty_data_expr - 69633U][sizeof(HWord )];
        if (! widen_op) {
          widen_op = (IROp )81920;
        } else {

        }
      } else {
        widen_op = (IROp )81920;
      }
    } else {
      widen_op = (IROp )81920;
    }
    if ((unsigned int )widen_op != 81920U) {
      if (sizeof(HWord ) == 4U) {
        tmp___14 = 69636;
      } else {
        tmp___14 = 69637;
      }
      tmp___13 = newIRTemp(bb->tyenv, (IRType )tmp___14);
      tmp___15 = IRExpr_Unop(widen_op, data_expr_lo);
      tmp___16 = IRStmt_WrTmp(tmp___13, tmp___15);
      addStmtToIRSB((IRSB *)bb, tmp___16);
      data_expr_lo = IRExpr_RdTmp(tmp___13);
    } else
    if (size > (HWord )sizeof(HWord )) {
      if (! data_expr_hi) {
        if ((unsigned int )ty_data_expr == 69637U) {
          tmp___18 = __builtin_expect((long )(! (! (sizeof(HWord ) == 4U))), 1L);
          if (tmp___18) {

          } else {
            vgPlain_assert_fail((Bool )0, (Char const   *)"sizeof(HWord) == 4",
                                (Char const   *)"drd_load_store.c", 438,
                                (Char const   *)"instr_trace_mem_store", "");
          }
          tmp___19 = __builtin_expect((long )(! (! (size == 8UL))), 1L);
          if (tmp___19) {

          } else {
            vgPlain_assert_fail((Bool )0, (Char const   *)"size == 8",
                                (Char const   *)"drd_load_store.c", 439,
                                (Char const   *)"instr_trace_mem_store", "");
          }
          tmp___17 = newIRTemp(bb->tyenv, (IRType )69636);
          tmp___20 = IRExpr_Unop((IROp )82047, data_expr_lo);
          tmp___21 = IRStmt_WrTmp(tmp___17, tmp___20);
          addStmtToIRSB((IRSB *)bb, tmp___21);
          data_expr_hi = IRExpr_RdTmp(tmp___17);
          tmp___17 = newIRTemp(bb->tyenv, (IRType )69636);
          tmp___22 = IRExpr_Unop((IROp )82046, data_expr_lo);
          tmp___23 = IRStmt_WrTmp(tmp___17, tmp___22);
          addStmtToIRSB((IRSB *)bb, tmp___23);
          data_expr_lo = IRExpr_RdTmp(tmp___17);
        } else {
          data_expr_lo = mkIRExpr_HWord((HWord )0);
        }
      } else {
        data_expr_lo = mkIRExpr_HWord((HWord )0);
      }
    } else {
      data_expr_lo = mkIRExpr_HWord((HWord )0);
    }
  }
  if (data_expr_hi) {
    tmp___25 = data_expr_hi;
  } else {
    tmp___24 = mkIRExpr_HWord((HWord )0);
    tmp___25 = tmp___24;
  }
  tmp___26 = mkIRExpr_HWord(size);
  tmp___27 = mkIRExprVec_4((IRExpr *)addr_expr, tmp___26, tmp___25, data_expr_lo);
  tmp___28 = vgPlain_fnptr_to_fnentry((void *)(& drd_trace_mem_store));
  tmp___29 = unsafeIRDirty_0_N(3, (HChar *)"drd_trace_mem_store", tmp___28,
                               tmp___27);
  tmp___30 = IRStmt_Dirty(tmp___29);
  addStmtToIRSB((IRSB *)bb, tmp___30);
  return;
}
}
static void instrument_load(IRSB * const  bb , IRExpr * const  addr_expr ,
                            HWord const   size ) 
{ 
  IRExpr *size_expr ;
  IRExpr **argv ;
  IRDirty *di ;
  Bool tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  void *tmp___4 ;
  IRStmt *tmp___5 ;

  {
  if (! s_check_stack_accesses) {
    tmp = is_stack_access(bb, addr_expr);
    if (tmp) {
      return;
    } else {

    }
  } else {

  }
  switch (size) {
  case 1UL: 
  argv = mkIRExprVec_1((IRExpr *)addr_expr);
  tmp___0 = vgPlain_fnptr_to_fnentry((void *)(& drd_trace_load_1));
  di = unsafeIRDirty_0_N(1, (HChar *)"drd_trace_load_1", tmp___0, argv);
  break;
  case 2UL: 
  argv = mkIRExprVec_1((IRExpr *)addr_expr);
  tmp___1 = vgPlain_fnptr_to_fnentry((void *)(& drd_trace_load_2));
  di = unsafeIRDirty_0_N(1, (HChar *)"drd_trace_load_2", tmp___1, argv);
  break;
  case 4UL: 
  argv = mkIRExprVec_1((IRExpr *)addr_expr);
  tmp___2 = vgPlain_fnptr_to_fnentry((void *)(& drd_trace_load_4));
  di = unsafeIRDirty_0_N(1, (HChar *)"drd_trace_load_4", tmp___2, argv);
  break;
  case 8UL: 
  argv = mkIRExprVec_1((IRExpr *)addr_expr);
  tmp___3 = vgPlain_fnptr_to_fnentry((void *)(& drd_trace_load_8));
  di = unsafeIRDirty_0_N(1, (HChar *)"drd_trace_load_8", tmp___3, argv);
  break;
  default: 
  size_expr = mkIRExpr_HWord((HWord )size);
  argv = mkIRExprVec_2((IRExpr *)addr_expr, size_expr);
  tmp___4 = vgPlain_fnptr_to_fnentry((void *)(& vgDrd_trace_load));
  di = unsafeIRDirty_0_N(2, (HChar *)"drd_trace_load", tmp___4, argv);
  break;
  }
  tmp___5 = IRStmt_Dirty(di);
  addStmtToIRSB((IRSB *)bb, tmp___5);
  return;
}
}
static void instrument_store(IRSB * const  bb , IRExpr *addr_expr ,
                             IRExpr * const  data_expr ) 
{ 
  IRExpr *size_expr ;
  IRExpr **argv ;
  IRDirty *di ;
  HWord size ;
  IRType tmp ;
  Int tmp___0 ;
  IRTemp tmp___1 ;
  IRType tmp___2 ;
  IRTemp tmp___3 ;
  IRStmt *tmp___4 ;
  Bool tmp___5 ;
  int tmp___6 ;
  long tmp___7 ;
  Bool tmp___8 ;
  void *tmp___9 ;
  void *tmp___10 ;
  void *tmp___11 ;
  void *tmp___12 ;
  void *tmp___13 ;
  IRStmt *tmp___14 ;

  {
  tmp = typeOfIRExpr(bb->tyenv, (IRExpr *)data_expr);
  tmp___0 = sizeofIRType(tmp);
  size = (HWord )tmp___0;
  tmp___5 = vgDrd_any_address_is_traced();
  if (tmp___5) {
    tmp___6 = 1;
  } else {
    tmp___6 = 0;
  }
  tmp___7 = __builtin_expect((long )tmp___6, 0L);
  if (tmp___7) {
    tmp___2 = typeOfIRExpr(bb->tyenv, addr_expr);
    tmp___3 = newIRTemp(bb->tyenv, tmp___2);
    tmp___1 = tmp___3;
    tmp___4 = IRStmt_WrTmp(tmp___1, addr_expr);
    addStmtToIRSB((IRSB *)bb, tmp___4);
    addr_expr = IRExpr_RdTmp(tmp___1);
    instr_trace_mem_store(bb, (IRExpr */* const  */)addr_expr,
                          (IRExpr *)((void *)0), (IRExpr *)data_expr);
  } else {

  }
  if (! s_check_stack_accesses) {
    tmp___8 = is_stack_access(bb, (IRExpr */* const  */)addr_expr);
    if (tmp___8) {
      return;
    } else {

    }
  } else {

  }
  switch (size) {
  case 1UL: 
  argv = mkIRExprVec_1(addr_expr);
  tmp___9 = vgPlain_fnptr_to_fnentry((void *)(& drd_trace_store_1));
  di = unsafeIRDirty_0_N(1, (HChar *)"drd_trace_store_1", tmp___9, argv);
  break;
  case 2UL: 
  argv = mkIRExprVec_1(addr_expr);
  tmp___10 = vgPlain_fnptr_to_fnentry((void *)(& drd_trace_store_2));
  di = unsafeIRDirty_0_N(1, (HChar *)"drd_trace_store_2", tmp___10, argv);
  break;
  case 4UL: 
  argv = mkIRExprVec_1(addr_expr);
  tmp___11 = vgPlain_fnptr_to_fnentry((void *)(& drd_trace_store_4));
  di = unsafeIRDirty_0_N(1, (HChar *)"drd_trace_store_4", tmp___11, argv);
  break;
  case 8UL: 
  argv = mkIRExprVec_1(addr_expr);
  tmp___12 = vgPlain_fnptr_to_fnentry((void *)(& drd_trace_store_8));
  di = unsafeIRDirty_0_N(1, (HChar *)"drd_trace_store_8", tmp___12, argv);
  break;
  default: 
  size_expr = mkIRExpr_HWord(size);
  argv = mkIRExprVec_2(addr_expr, size_expr);
  tmp___13 = vgPlain_fnptr_to_fnentry((void *)(& vgDrd_trace_store));
  di = unsafeIRDirty_0_N(2, (HChar *)"drd_trace_store", tmp___13, argv);
  break;
  }
  tmp___14 = IRStmt_Dirty(di);
  addStmtToIRSB((IRSB *)bb, tmp___14);
  return;
}
}
IRSB *vgDrd_instrument(VgCallbackClosure * const  closure ,
                       IRSB * const  bb_in , VexGuestLayout * const  layout ,
                       VexGuestExtents * const  vge , IRType const   gWordTy ,
                       IRType const   hWordTy ) 
{ 
  IRDirty *di ;
  Int i ;
  IRSB *bb ;
  IRExpr **argv ;
  Bool instrument ;
  IRStmt *st ;
  long tmp ;
  Bool tmp___0 ;
  int tmp___1 ;
  long tmp___2 ;
  VgSectKind tmp___3 ;
  long tmp___4 ;
  IRExpr const   *data ;
  IRExpr *addr_expr ;
  Int tmp___5 ;
  Bool tmp___6 ;
  int tmp___7 ;
  long tmp___8 ;
  Int tmp___9 ;
  IRDirty *d ;
  IREffect mFx ;
  long tmp___10 ;
  long tmp___11 ;
  IRExpr *tmp___12 ;
  void *tmp___13 ;
  IRStmt *tmp___14 ;
  void *tmp___15 ;
  IRStmt *tmp___16 ;
  long tmp___17 ;
  Int dataSize ;
  IRCAS *cas ;
  long tmp___18 ;
  long tmp___19 ;
  IRType tmp___20 ;
  Bool tmp___21 ;
  int tmp___22 ;
  long tmp___23 ;
  IRType dataTy ;
  IRExpr *addr_expr___0 ;
  Int tmp___24 ;
  Bool tmp___25 ;
  int tmp___26 ;
  long tmp___27 ;
  Int tmp___28 ;
  long tmp___29 ;

  {
  instrument = (Bool )1;
  bb = emptyIRSB();
  bb->tyenv = deepCopyIRTypeEnv(bb_in->tyenv);
  bb->next = deepCopyIRExpr(bb_in->next);
  bb->jumpkind = bb_in->jumpkind;
  i = 0;
  while (i < bb_in->stmts_used) {
    st = *(bb_in->stmts + i);
    tmp = __builtin_expect((long )(! (! st)), 1L);
    if (tmp) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"st",
                          (Char const   *)"drd_load_store.c", 599,
                          (Char const   *)"vgDrd_instrument", "");
    }
    tmp___0 = isFlatIRStmt(st);
    if (tmp___0) {
      tmp___1 = 1;
    } else {
      tmp___1 = 0;
    }
    tmp___2 = __builtin_expect((long )tmp___1, 1L);
    if (tmp___2) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"isFlatIRStmt(st)",
                          (Char const   *)"drd_load_store.c", 600,
                          (Char const   *)"vgDrd_instrument", "");
    }
    switch ((unsigned int )st->tag) {
    case 102401U: 
    tmp___3 = vgPlain_DebugInfo_sect_kind((UChar *)((void *)0), (SizeT )0,
                                          (Addr )st->Ist.IMark.addr);
    instrument = (Bool )((unsigned int )tmp___3 != 5U);
    addStmtToIRSB(bb, st);
    break;
    case 102410U: 
    switch ((unsigned int )st->Ist.MBE.event) {
    case 98304U: 
    break;
    default: 
    tmp___4 = __builtin_expect(0L, 1L);
    if (tmp___4) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                          (Char const   *)"drd_load_store.c", 622,
                          (Char const   *)"vgDrd_instrument", "");
    }
    }
    addStmtToIRSB(bb, st);
    break;
    case 102406U: 
    if (instrument) {
      instrument_store((IRSB */* const  */)bb, st->Ist.Store.addr,
                       (IRExpr */* const  */)st->Ist.Store.data);
    } else {

    }
    addStmtToIRSB(bb, st);
    break;
    case 102405U: 
    if (instrument) {
      data = (IRExpr const   *)st->Ist.WrTmp.data;
      addr_expr = (IRExpr *)data->Iex.Load.addr;
      if ((unsigned int const   )data->tag == 86024U) {
        tmp___6 = vgDrd_any_address_is_traced();
        if (tmp___6) {
          tmp___7 = 1;
        } else {
          tmp___7 = 0;
        }
        tmp___8 = __builtin_expect((long )tmp___7, 0L);
        if (tmp___8) {
          tmp___5 = sizeofIRType((IRType )data->Iex.Load.ty);
          addr_expr = instr_trace_mem_load((IRSB */* const  */)bb, addr_expr,
                                           (HWord const   )tmp___5);
        } else {

        }
        tmp___9 = sizeofIRType((IRType )data->Iex.Load.ty);
        instrument_load((IRSB */* const  */)bb, data->Iex.Load.addr,
                        (HWord const   )tmp___9);
      } else {

      }
    } else {

    }
    addStmtToIRSB(bb, st);
    break;
    case 102409U: 
    if (instrument) {
      d = st->Ist.Dirty.details;
      mFx = d->mFx;
      switch ((unsigned int )mFx) {
      case 94208U: 
      break;
      case 94211U: 
      case 94210U: 
      case 94209U: 
      tmp___10 = __builtin_expect((long )(! (! d->mAddr)), 1L);
      if (tmp___10) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"d->mAddr",
                            (Char const   *)"drd_load_store.c", 659,
                            (Char const   *)"vgDrd_instrument", "");
      }
      tmp___11 = __builtin_expect((long )(! (! (d->mSize > 0))), 1L);
      if (tmp___11) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"d->mSize > 0",
                            (Char const   *)"drd_load_store.c", 660,
                            (Char const   *)"vgDrd_instrument", "");
      }
      tmp___12 = mkIRExpr_HWord((HWord )d->mSize);
      argv = mkIRExprVec_2(d->mAddr, tmp___12);
      if ((unsigned int )mFx == 94209U) {
        tmp___13 = vgPlain_fnptr_to_fnentry((void *)(& vgDrd_trace_load));
        di = unsafeIRDirty_0_N(2, (HChar *)"drd_trace_load", tmp___13, argv);
        tmp___14 = IRStmt_Dirty(di);
        addStmtToIRSB(bb, tmp___14);
      } else
      if ((unsigned int )mFx == 94211U) {
        tmp___13 = vgPlain_fnptr_to_fnentry((void *)(& vgDrd_trace_load));
        di = unsafeIRDirty_0_N(2, (HChar *)"drd_trace_load", tmp___13, argv);
        tmp___14 = IRStmt_Dirty(di);
        addStmtToIRSB(bb, tmp___14);
      } else {

      }
      if ((unsigned int )mFx == 94210U) {
        tmp___15 = vgPlain_fnptr_to_fnentry((void *)(& vgDrd_trace_store));
        di = unsafeIRDirty_0_N(2, (HChar *)"drd_trace_store", tmp___15, argv);
        tmp___16 = IRStmt_Dirty(di);
        addStmtToIRSB(bb, tmp___16);
      } else
      if ((unsigned int )mFx == 94211U) {
        tmp___15 = vgPlain_fnptr_to_fnentry((void *)(& vgDrd_trace_store));
        di = unsafeIRDirty_0_N(2, (HChar *)"drd_trace_store", tmp___15, argv);
        tmp___16 = IRStmt_Dirty(di);
        addStmtToIRSB(bb, tmp___16);
      } else {

      }
      break;
      default: 
      tmp___17 = __builtin_expect(0L, 1L);
      if (tmp___17) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                            (Char const   *)"drd_load_store.c", 681,
                            (Char const   *)"vgDrd_instrument", "");
      }
      }
    } else {

    }
    addStmtToIRSB(bb, st);
    break;
    case 102407U: 
    if (instrument) {
      cas = st->Ist.CAS.details;
      tmp___18 = __builtin_expect((long )(! (! ((unsigned int )cas->addr != (unsigned int )((void *)0)))),
                                  1L);
      if (tmp___18) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"cas->addr != NULL",
                            (Char const   *)"drd_load_store.c", 700,
                            (Char const   *)"vgDrd_instrument", "");
      }
      tmp___19 = __builtin_expect((long )(! (! ((unsigned int )cas->dataLo != (unsigned int )((void *)0)))),
                                  1L);
      if (tmp___19) {

      } else {
        vgPlain_assert_fail((Bool )0, (Char const   *)"cas->dataLo != NULL",
                            (Char const   *)"drd_load_store.c", 701,
                            (Char const   *)"vgDrd_instrument", "");
      }
      tmp___20 = typeOfIRExpr(bb->tyenv, cas->dataLo);
      dataSize = sizeofIRType(tmp___20);
      if ((unsigned int )cas->dataHi != (unsigned int )((void *)0)) {
        dataSize *= 2;
      } else {

      }
      tmp___21 = vgDrd_any_address_is_traced();
      if (tmp___21) {
        tmp___22 = 1;
      } else {
        tmp___22 = 0;
      }
      tmp___23 = __builtin_expect((long )tmp___22, 0L);
      if (tmp___23) {
        instr_trace_mem_store((IRSB */* const  */)bb,
                              (IRExpr */* const  */)cas->addr, cas->dataHi,
                              cas->dataLo);
      } else {

      }
      instrument_load((IRSB */* const  */)bb, (IRExpr */* const  */)cas->addr,
                      (HWord const   )dataSize);
    } else {

    }
    addStmtToIRSB(bb, st);
    break;
    case 102408U: 
    if ((unsigned int )st->Ist.LLSC.storedata == (unsigned int )((void *)0)) {
      dataTy = typeOfIRTemp(bb_in->tyenv, st->Ist.LLSC.result);
      if (instrument) {
        addr_expr___0 = st->Ist.LLSC.addr;
        tmp___25 = vgDrd_any_address_is_traced();
        if (tmp___25) {
          tmp___26 = 1;
        } else {
          tmp___26 = 0;
        }
        tmp___27 = __builtin_expect((long )tmp___26, 0L);
        if (tmp___27) {
          tmp___24 = sizeofIRType(dataTy);
          addr_expr___0 = instr_trace_mem_load((IRSB */* const  */)bb,
                                               addr_expr___0,
                                               (HWord const   )tmp___24);
        } else {

        }
        tmp___28 = sizeofIRType(dataTy);
        instrument_load((IRSB */* const  */)bb,
                        (IRExpr */* const  */)addr_expr___0,
                        (HWord const   )tmp___28);
      } else {

      }
    } else {
      instr_trace_mem_store((IRSB */* const  */)bb,
                            (IRExpr */* const  */)st->Ist.LLSC.addr,
                            (IRExpr *)((void *)0), st->Ist.LLSC.storedata);
    }
    addStmtToIRSB(bb, st);
    break;
    case 102411U: 
    case 102404U: 
    case 102403U: 
    case 102402U: 
    case 102400U: 
    addStmtToIRSB(bb, st);
    break;
    default: 
    ppIRStmt(st);
    tmp___29 = __builtin_expect(0L, 1L);
    if (tmp___29) {

    } else {
      vgPlain_assert_fail((Bool )0, (Char const   *)"0",
                          (Char const   *)"drd_load_store.c", 752,
                          (Char const   *)"vgDrd_instrument", "");
    }
    }
    i ++;
  }
  return (bb);
}
}
