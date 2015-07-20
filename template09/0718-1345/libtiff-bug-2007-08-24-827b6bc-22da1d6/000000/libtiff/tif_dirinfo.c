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
struct __anonstruct___fsid_t_1 {
   int __val[2] ;
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
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
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino64_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off64_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef unsigned int size_t;
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
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_2 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_2 __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef __suseconds_t suseconds_t;
typedef long __fd_mask;
struct __anonstruct_fd_set_3 {
   __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_3 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt64_t blkcnt_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __fsfilcnt64_t fsfilcnt_t;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_4 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_4 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_6 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_6 __annonCompField1 ;
};
union __anonunion_pthread_mutex_t_5 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_5 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_7 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_7 pthread_mutexattr_t;
struct __anonstruct___data_9 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_8 {
   struct __anonstruct___data_9 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_8 pthread_cond_t;
union __anonunion_pthread_condattr_t_10 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_10 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_12 {
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
union __anonunion_pthread_rwlock_t_11 {
   struct __anonstruct___data_12 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_11 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_13 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_13 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_14 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_14 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_15 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_15 pthread_barrierattr_t;
struct flock {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};
struct stat {
   __dev_t st_dev ;
   unsigned short __pad1 ;
   __ino_t __st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off64_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt64_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   __ino64_t st_ino ;
};
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
typedef int (*__compar_fn_t)(void const   * , void const   * );
enum __anonenum_ACTION_16 {
    FIND = 0,
    ENTER = 1
} ;
typedef enum __anonenum_ACTION_16 ACTION;
struct entry {
   char *key ;
   void *data ;
};
typedef struct entry ENTRY;
struct _ENTRY;
struct _ENTRY;
enum __anonenum_VISIT_17 {
    preorder = 0,
    postorder = 1,
    endorder = 2,
    leaf = 3
} ;
typedef enum __anonenum_VISIT_17 VISIT;
typedef void (*__action_fn_t)(void const   *__nodep , VISIT __value ,
                              int __level );
typedef signed char int8;
typedef unsigned char uint8;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef int uint16_vap;
struct __anonstruct_TIFFHeaderCommon_18 {
   uint16 tiff_magic ;
   uint16 tiff_version ;
};
typedef struct __anonstruct_TIFFHeaderCommon_18 TIFFHeaderCommon;
struct __anonstruct_TIFFHeaderClassic_19 {
   uint16 tiff_magic ;
   uint16 tiff_version ;
   uint32 tiff_diroff ;
};
typedef struct __anonstruct_TIFFHeaderClassic_19 TIFFHeaderClassic;
struct __anonstruct_TIFFHeaderBig_20 {
   uint16 tiff_magic ;
   uint16 tiff_version ;
   uint16 tiff_offsetsize ;
   uint16 tiff_unused ;
   uint64 tiff_diroff ;
};
typedef struct __anonstruct_TIFFHeaderBig_20 TIFFHeaderBig;
enum __anonenum_TIFFDataType_21 {
    TIFF_NOTYPE = 0,
    TIFF_BYTE = 1,
    TIFF_ASCII = 2,
    TIFF_SHORT = 3,
    TIFF_LONG = 4,
    TIFF_RATIONAL = 5,
    TIFF_SBYTE = 6,
    TIFF_UNDEFINED = 7,
    TIFF_SSHORT = 8,
    TIFF_SLONG = 9,
    TIFF_SRATIONAL = 10,
    TIFF_FLOAT = 11,
    TIFF_DOUBLE = 12,
    TIFF_IFD = 13,
    TIFF_LONG8 = 16,
    TIFF_SLONG8 = 17,
    TIFF_IFD8 = 18
} ;
typedef enum __anonenum_TIFFDataType_21 TIFFDataType;
struct tiff;
typedef struct tiff TIFF;
typedef long tmsize_t;
typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrile_t;
typedef tstrile_t tstrip_t;
typedef tstrile_t ttile_t;
typedef tmsize_t tsize_t;
typedef void *tdata_t;
typedef uint64 toff_t;
typedef void *thandle_t;
typedef unsigned char TIFFRGBValue;
struct __anonstruct_TIFFDisplay_22 {
   float d_mat[3][3] ;
   float d_YCR ;
   float d_YCG ;
   float d_YCB ;
   uint32 d_Vrwr ;
   uint32 d_Vrwg ;
   uint32 d_Vrwb ;
   float d_Y0R ;
   float d_Y0G ;
   float d_Y0B ;
   float d_gammaR ;
   float d_gammaG ;
   float d_gammaB ;
};
typedef struct __anonstruct_TIFFDisplay_22 TIFFDisplay;
struct __anonstruct_TIFFYCbCrToRGB_23 {
   TIFFRGBValue *clamptab ;
   int *Cr_r_tab ;
   int *Cb_b_tab ;
   int32 *Cr_g_tab ;
   int32 *Cb_g_tab ;
   int32 *Y_tab ;
};
typedef struct __anonstruct_TIFFYCbCrToRGB_23 TIFFYCbCrToRGB;
struct __anonstruct_TIFFCIELabToRGB_24 {
   int range ;
   float rstep ;
   float gstep ;
   float bstep ;
   float X0 ;
   float Y0 ;
   float Z0 ;
   TIFFDisplay display ;
   float Yr2r[1501] ;
   float Yg2g[1501] ;
   float Yb2b[1501] ;
};
typedef struct __anonstruct_TIFFCIELabToRGB_24 TIFFCIELabToRGB;
struct _TIFFRGBAImage;
typedef struct _TIFFRGBAImage TIFFRGBAImage;
typedef void (*tileContigRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                  uint32  , uint32  , uint32  , int32  ,
                                  int32  , unsigned char * );
typedef void (*tileSeparateRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                    uint32  , uint32  , uint32  , int32  ,
                                    int32  , unsigned char * , unsigned char * ,
                                    unsigned char * , unsigned char * );
union __anonunion_put_25 {
   void (*any)(TIFFRGBAImage * ) ;
   void (*contig)(TIFFRGBAImage * , uint32 * , uint32  , uint32  , uint32  ,
                  uint32  , int32  , int32  , unsigned char * ) ;
   void (*separate)(TIFFRGBAImage * , uint32 * , uint32  , uint32  , uint32  ,
                    uint32  , int32  , int32  , unsigned char * ,
                    unsigned char * , unsigned char * , unsigned char * ) ;
};
struct _TIFFRGBAImage {
   TIFF *tif ;
   int stoponerr ;
   int isContig ;
   int alpha ;
   uint32 width ;
   uint32 height ;
   uint16 bitspersample ;
   uint16 samplesperpixel ;
   uint16 orientation ;
   uint16 req_orientation ;
   uint16 photometric ;
   uint16 *redcmap ;
   uint16 *greencmap ;
   uint16 *bluecmap ;
   int (*get)(TIFFRGBAImage * , uint32 * , uint32  , uint32  ) ;
   union __anonunion_put_25 put ;
   TIFFRGBValue *Map ;
   uint32 **BWmap ;
   uint32 **PALmap ;
   TIFFYCbCrToRGB *ycbcr ;
   TIFFCIELabToRGB *cielab ;
   uint8 *UaToAa ;
   uint8 *Bitdepth16To8 ;
   int row_offset ;
   int col_offset ;
};
typedef int (*TIFFInitMethod)(TIFF * , int  );
struct __anonstruct_TIFFCodec_26 {
   char *name ;
   uint16 scheme ;
   int (*init)(TIFF * , int  ) ;
};
typedef struct __anonstruct_TIFFCodec_26 TIFFCodec;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_28 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_27 {
   int __count ;
   union __anonunion___value_28 __value ;
};
typedef struct __anonstruct___mbstate_t_27 __mbstate_t;
struct __anonstruct__G_fpos_t_29 {
   __off_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos_t_29 _G_fpos_t;
struct __anonstruct__G_fpos64_t_30 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos64_t_30 _G_fpos64_t;
typedef short _G_int16_t;
typedef int _G_int32_t;
typedef unsigned short _G_uint16_t;
typedef unsigned int _G_uint32_t;
typedef __builtin_va_list __gnuc_va_list;
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
typedef __gnuc_va_list va_list;
typedef _G_fpos64_t fpos_t;
typedef void (*TIFFErrorHandler)(char const   * , char const   * , va_list  );
typedef void (*TIFFErrorHandlerExt)(thandle_t  , char const   * ,
                                    char const   * , va_list  );
typedef tmsize_t (*TIFFReadWriteProc)(thandle_t  , void * , tmsize_t  );
typedef uint64 (*TIFFSeekProc)(thandle_t  , uint64  , int  );
typedef int (*TIFFCloseProc)(thandle_t  );
typedef uint64 (*TIFFSizeProc)(thandle_t  );
typedef int (*TIFFMapFileProc)(thandle_t  , void **base , toff_t *size );
typedef void (*TIFFUnmapFileProc)(thandle_t  , void *base , toff_t size );
typedef void (*TIFFExtendProc)(TIFF * );
struct _TIFFField;
typedef struct _TIFFField TIFFField;
struct _TIFFFieldArray;
typedef struct _TIFFFieldArray TIFFFieldArray;
typedef int (*TIFFVSetMethod)(TIFF * , uint32  , va_list  );
typedef int (*TIFFVGetMethod)(TIFF * , uint32  , va_list  );
typedef void (*TIFFPrintMethod)(TIFF * , FILE * , long  );
struct __anonstruct_TIFFTagMethods_31 {
   int (*vsetfield)(TIFF * , uint32  , va_list  ) ;
   int (*vgetfield)(TIFF * , uint32  , va_list  ) ;
   void (*printdir)(TIFF * , FILE * , long  ) ;
};
typedef struct __anonstruct_TIFFTagMethods_31 TIFFTagMethods;
struct __anonstruct_TIFFFieldInfo_32 {
   ttag_t field_tag ;
   short field_readcount ;
   short field_writecount ;
   TIFFDataType field_type ;
   unsigned short field_bit ;
   unsigned char field_oktochange ;
   unsigned char field_passcount ;
   char *field_name ;
};
typedef struct __anonstruct_TIFFFieldInfo_32 TIFFFieldInfo;
struct __anonstruct_TIFFTagValue_33 {
   TIFFField const   *info ;
   int count ;
   void *value ;
};
typedef struct __anonstruct_TIFFTagValue_33 TIFFTagValue;
struct __anonstruct_TIFFDirectory_34 {
   unsigned long td_fieldsset[4] ;
   uint32 td_imagewidth ;
   uint32 td_imagelength ;
   uint32 td_imagedepth ;
   uint32 td_tilewidth ;
   uint32 td_tilelength ;
   uint32 td_tiledepth ;
   uint32 td_subfiletype ;
   uint16 td_bitspersample ;
   uint16 td_sampleformat ;
   uint16 td_compression ;
   uint16 td_photometric ;
   uint16 td_threshholding ;
   uint16 td_fillorder ;
   uint16 td_orientation ;
   uint16 td_samplesperpixel ;
   uint32 td_rowsperstrip ;
   uint16 td_minsamplevalue ;
   uint16 td_maxsamplevalue ;
   double td_sminsamplevalue ;
   double td_smaxsamplevalue ;
   float td_xresolution ;
   float td_yresolution ;
   uint16 td_resolutionunit ;
   uint16 td_planarconfig ;
   float td_xposition ;
   float td_yposition ;
   uint16 td_pagenumber[2] ;
   uint16 *td_colormap[3] ;
   uint16 td_halftonehints[2] ;
   uint16 td_extrasamples ;
   uint16 *td_sampleinfo ;
   uint32 td_stripsperimage ;
   uint32 td_nstrips ;
   uint64 *td_stripoffset ;
   uint64 *td_stripbytecount ;
   int td_stripbytecountsorted ;
   uint16 td_nsubifd ;
   uint64 *td_subifd ;
   uint16 td_ycbcrsubsampling[2] ;
   uint16 td_ycbcrpositioning ;
   uint16 *td_transferfunction[3] ;
   int td_inknameslen ;
   char *td_inknames ;
   int td_customValueCount ;
   TIFFTagValue *td_customValues ;
};
typedef struct __anonstruct_TIFFDirectory_34 TIFFDirectory;
enum __anonenum_TIFFSetGetFieldType_35 {
    TIFF_SETGET_UNDEFINED = 0,
    TIFF_SETGET_ASCII = 1,
    TIFF_SETGET_UINT8 = 2,
    TIFF_SETGET_SINT8 = 3,
    TIFF_SETGET_UINT16 = 4,
    TIFF_SETGET_SINT16 = 5,
    TIFF_SETGET_UINT32 = 6,
    TIFF_SETGET_SINT32 = 7,
    TIFF_SETGET_UINT64 = 8,
    TIFF_SETGET_SINT64 = 9,
    TIFF_SETGET_FLOAT = 10,
    TIFF_SETGET_DOUBLE = 11,
    TIFF_SETGET_IFD8 = 12,
    TIFF_SETGET_INT = 13,
    TIFF_SETGET_UINT16_PAIR = 14,
    TIFF_SETGET_C0_ASCII = 15,
    TIFF_SETGET_C0_UINT8 = 16,
    TIFF_SETGET_C0_SINT8 = 17,
    TIFF_SETGET_C0_UINT16 = 18,
    TIFF_SETGET_C0_SINT16 = 19,
    TIFF_SETGET_C0_UINT32 = 20,
    TIFF_SETGET_C0_SINT32 = 21,
    TIFF_SETGET_C0_UINT64 = 22,
    TIFF_SETGET_C0_SINT64 = 23,
    TIFF_SETGET_C0_FLOAT = 24,
    TIFF_SETGET_C0_DOUBLE = 25,
    TIFF_SETGET_C0_IFD8 = 26,
    TIFF_SETGET_C16_ASCII = 27,
    TIFF_SETGET_C16_UINT8 = 28,
    TIFF_SETGET_C16_SINT8 = 29,
    TIFF_SETGET_C16_UINT16 = 30,
    TIFF_SETGET_C16_SINT16 = 31,
    TIFF_SETGET_C16_UINT32 = 32,
    TIFF_SETGET_C16_SINT32 = 33,
    TIFF_SETGET_C16_UINT64 = 34,
    TIFF_SETGET_C16_SINT64 = 35,
    TIFF_SETGET_C16_FLOAT = 36,
    TIFF_SETGET_C16_DOUBLE = 37,
    TIFF_SETGET_C16_IFD8 = 38,
    TIFF_SETGET_C32_ASCII = 39,
    TIFF_SETGET_C32_UINT8 = 40,
    TIFF_SETGET_C32_SINT8 = 41,
    TIFF_SETGET_C32_UINT16 = 42,
    TIFF_SETGET_C32_SINT16 = 43,
    TIFF_SETGET_C32_UINT32 = 44,
    TIFF_SETGET_C32_SINT32 = 45,
    TIFF_SETGET_C32_UINT64 = 46,
    TIFF_SETGET_C32_SINT64 = 47,
    TIFF_SETGET_C32_FLOAT = 48,
    TIFF_SETGET_C32_DOUBLE = 49,
    TIFF_SETGET_C32_IFD8 = 50,
    TIFF_SETGET_OTHER = 51
} ;
typedef enum __anonenum_TIFFSetGetFieldType_35 TIFFSetGetFieldType;
enum __anonenum_TIFFFieldArrayType_36 {
    tfiatImage = 0,
    tfiatExif = 1,
    tfiatOther = 2
} ;
typedef enum __anonenum_TIFFFieldArrayType_36 TIFFFieldArrayType;
struct _TIFFFieldArray {
   TIFFFieldArrayType type ;
   uint32 allocated_size ;
   uint32 count ;
   TIFFField *fields ;
};
struct _TIFFField {
   uint32 field_tag ;
   short field_readcount ;
   short field_writecount ;
   TIFFDataType field_type ;
   uint32 reserved ;
   TIFFSetGetFieldType set_field_type ;
   TIFFSetGetFieldType get_field_type ;
   unsigned short field_bit ;
   unsigned char field_oktochange ;
   unsigned char field_passcount ;
   char *field_name ;
   TIFFFieldArray *field_subfields ;
};
struct __anonstruct_TIFFDirEntry_37 {
   uint16 tdir_tag ;
   uint16 tdir_type ;
   uint64 tdir_count ;
   uint64 tdir_offset ;
};
typedef struct __anonstruct_TIFFDirEntry_37 TIFFDirEntry;
struct client_info {
   struct client_info *next ;
   void *data ;
   char *name ;
};
typedef struct client_info TIFFClientInfoLink;
typedef unsigned char tidataval_t;
typedef tidataval_t *tidata_t;
typedef void (*TIFFVoidMethod)(TIFF * );
typedef int (*TIFFBoolMethod)(TIFF * );
typedef int (*TIFFPreMethod)(TIFF * , uint16  );
typedef int (*TIFFCodeMethod)(TIFF *tif , uint8 *buf , tmsize_t size ,
                              uint16 sample );
typedef int (*TIFFSeekMethod)(TIFF * , uint32  );
typedef void (*TIFFPostMethod)(TIFF *tif , uint8 *buf , tmsize_t size );
typedef uint32 (*TIFFStripMethod)(TIFF * , uint32  );
typedef void (*TIFFTileMethod)(TIFF * , uint32 * , uint32 * );
union __anonunion_tif_header_38 {
   TIFFHeaderCommon common ;
   TIFFHeaderClassic classic ;
   TIFFHeaderBig big ;
};
struct tiff {
   char *tif_name ;
   int tif_fd ;
   int tif_mode ;
   uint32 tif_flags ;
   uint64 tif_diroff ;
   uint64 tif_nextdiroff ;
   uint64 *tif_dirlist ;
   uint16 tif_dirlistsize ;
   uint16 tif_dirnumber ;
   TIFFDirectory tif_dir ;
   TIFFDirectory tif_customdir ;
   union __anonunion_tif_header_38 tif_header ;
   uint16 tif_header_size ;
   uint32 tif_row ;
   uint16 tif_curdir ;
   uint32 tif_curstrip ;
   uint64 tif_curoff ;
   uint64 tif_dataoff ;
   uint16 tif_nsubifd ;
   uint64 tif_subifdoff ;
   uint32 tif_col ;
   uint32 tif_curtile ;
   tmsize_t tif_tilesize ;
   int tif_decodestatus ;
   int (*tif_fixuptags)(TIFF * ) ;
   int (*tif_setupdecode)(TIFF * ) ;
   int (*tif_predecode)(TIFF * , uint16  ) ;
   int (*tif_setupencode)(TIFF * ) ;
   int tif_encodestatus ;
   int (*tif_preencode)(TIFF * , uint16  ) ;
   int (*tif_postencode)(TIFF * ) ;
   int (*tif_decoderow)(TIFF *tif , uint8 *buf , tmsize_t size , uint16 sample ) ;
   int (*tif_encoderow)(TIFF *tif , uint8 *buf , tmsize_t size , uint16 sample ) ;
   int (*tif_decodestrip)(TIFF *tif , uint8 *buf , tmsize_t size ,
                          uint16 sample ) ;
   int (*tif_encodestrip)(TIFF *tif , uint8 *buf , tmsize_t size ,
                          uint16 sample ) ;
   int (*tif_decodetile)(TIFF *tif , uint8 *buf , tmsize_t size , uint16 sample ) ;
   int (*tif_encodetile)(TIFF *tif , uint8 *buf , tmsize_t size , uint16 sample ) ;
   void (*tif_close)(TIFF * ) ;
   int (*tif_seek)(TIFF * , uint32  ) ;
   void (*tif_cleanup)(TIFF * ) ;
   uint32 (*tif_defstripsize)(TIFF * , uint32  ) ;
   void (*tif_deftilesize)(TIFF * , uint32 * , uint32 * ) ;
   uint8 *tif_data ;
   tmsize_t tif_scanlinesize ;
   tmsize_t tif_scanlineskew ;
   uint8 *tif_rawdata ;
   tmsize_t tif_rawdatasize ;
   uint8 *tif_rawcp ;
   tmsize_t tif_rawcc ;
   uint8 *tif_base ;
   tmsize_t tif_size ;
   int (*tif_mapproc)(thandle_t  , void **base , toff_t *size ) ;
   void (*tif_unmapproc)(thandle_t  , void *base , toff_t size ) ;
   thandle_t tif_clientdata ;
   tmsize_t (*tif_readproc)(thandle_t  , void * , tmsize_t  ) ;
   tmsize_t (*tif_writeproc)(thandle_t  , void * , tmsize_t  ) ;
   uint64 (*tif_seekproc)(thandle_t  , uint64  , int  ) ;
   int (*tif_closeproc)(thandle_t  ) ;
   uint64 (*tif_sizeproc)(thandle_t  ) ;
   void (*tif_postdecode)(TIFF *tif , uint8 *buf , tmsize_t size ) ;
   TIFFField **tif_fields ;
   uint32 tif_nfields ;
   TIFFField const   *tif_foundfield ;
   TIFFTagMethods tif_tagmethods ;
   TIFFClientInfoLink *tif_clientinfo ;
   TIFFFieldArray *tif_fieldscompat ;
   uint32 tif_nfieldscompat ;
};
typedef long wchar_t;
struct __anonstruct___wait_terminated_39 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_40 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_39 __wait_terminated ;
   struct __anonstruct___wait_stopped_40 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_41 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_41  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_42 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_42 div_t;
struct __anonstruct_ldiv_t_43 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_43 ldiv_t;
struct __anonstruct_lldiv_t_44 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_44 lldiv_t;
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
extern int fcntl(int __fd , int __cmd  , ...) ;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file ,
                                                   int __oflag  , ...)  __asm__("open64")  ;
extern int ( __attribute__((__nonnull__(2))) openat)(int __fd ,
                                                     char const   *__file ,
                                                     int __oflag  , ...)  __asm__("openat64")  ;
extern int ( __attribute__((__nonnull__(1))) creat)(char const   *__file ,
                                                    __mode_t __mode )  __asm__("creat64")  ;
extern int lockf(int __fd , int __cmd , __off64_t __len )  __asm__("lockf64")  ;
extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off64_t __offset ,
                                                       __off64_t __len ,
                                                       int __advise )  __asm__("posix_fadvise64")  ;
extern int posix_fallocate(int __fd , __off64_t __offset , __off64_t __len )  __asm__("posix_fallocate64")  ;
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
extern  __attribute__((__nothrow__)) void insque(void *__elem , void *__prev ) ;
extern  __attribute__((__nothrow__)) void remque(void *__elem ) ;
extern  __attribute__((__nothrow__)) ENTRY *hsearch(ENTRY __item ,
                                                    ACTION __action ) ;
extern  __attribute__((__nothrow__)) int hcreate(size_t __nel ) ;
extern  __attribute__((__nothrow__)) void hdestroy(void) ;
extern void *tsearch(void const   *__key , void **__rootp ,
                     int (*__compar)(void const   * , void const   * ) ) ;
extern void *tfind(void const   *__key , void * const  *__rootp ,
                   int (*__compar)(void const   * , void const   * ) ) ;
extern void *tdelete(void const   * __restrict  __key ,
                     void ** __restrict  __rootp ,
                     int (*__compar)(void const   * , void const   * ) ) ;
extern void twalk(void const   *__root ,
                  void (*__action)(void const   *__nodep , VISIT __value ,
                                   int __level ) ) ;
extern void *lfind(void const   *__key , void const   *__base ,
                   size_t *__nmemb , size_t __size ,
                   int (*__compar)(void const   * , void const   * ) ) ;
extern void *lsearch(void const   *__key , void *__base , size_t *__nmemb ,
                     size_t __size , int (*__compar)(void const   * ,
                                                     void const   * ) ) ;
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
extern FILE *tmpfile(void)  __asm__("tmpfile64")  ;
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
extern int fclose(FILE *__stream ) ;
extern int fflush(FILE *__stream ) ;
extern int fflush_unlocked(FILE *__stream ) ;
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes )  __asm__("fopen64")  ;
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream )  __asm__("freopen64")  ;
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
extern int fseeko(FILE *__stream , __off64_t __off , int __whence )  __asm__("fseeko64")  ;
extern __off64_t ftello(FILE *__stream )  __asm__("ftello64")  ;
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos )  __asm__("fgetpos64")  ;
extern int fsetpos(FILE *__stream , fpos_t const   *__pos )  __asm__("fsetpos64")  ;
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
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
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
extern char const   *TIFFGetVersion(void) ;
extern TIFFCodec const   *TIFFFindCODEC(uint16  ) ;
extern TIFFCodec *TIFFRegisterCODEC(uint16  , char const   * ,
                                    int (*)(TIFF * , int  ) ) ;
extern void TIFFUnRegisterCODEC(TIFFCodec * ) ;
extern int TIFFIsCODECConfigured(uint16  ) ;
extern TIFFCodec *TIFFGetConfiguredCODECs(void) ;
extern void *_TIFFmalloc(tmsize_t s ) ;
extern void *_TIFFrealloc(void *p , tmsize_t s ) ;
extern void _TIFFmemset(void *p , int v , tmsize_t c ) ;
extern void _TIFFmemcpy(void *d , void const   *s , tmsize_t c ) ;
extern int _TIFFmemcmp(void const   *p1 , void const   *p2 , tmsize_t c ) ;
extern void _TIFFfree(void *p ) ;
extern int TIFFGetTagListCount(TIFF * ) ;
extern uint32 TIFFGetTagListEntry(TIFF * , int tag_index ) ;
TIFFField const   *TIFFFindField(TIFF *tif , uint32 tag , TIFFDataType dt ) ;
TIFFField const   *TIFFFieldWithTag(TIFF *tif , uint32 tag ) ;
TIFFField const   *TIFFFieldWithName(TIFF *tif , char const   *field_name ) ;
extern TIFFTagMethods *TIFFAccessTagMethods(TIFF * ) ;
extern void *TIFFGetClientInfo(TIFF * , char const   * ) ;
extern void TIFFSetClientInfo(TIFF * , void * , char const   * ) ;
extern void TIFFCleanup(TIFF *tif ) ;
extern void TIFFClose(TIFF *tif ) ;
extern int TIFFFlush(TIFF *tif ) ;
extern int TIFFFlushData(TIFF *tif ) ;
extern int TIFFGetField(TIFF *tif , uint32 tag  , ...) ;
extern int TIFFVGetField(TIFF *tif , uint32 tag , va_list ap ) ;
extern int TIFFGetFieldDefaulted(TIFF *tif , uint32 tag  , ...) ;
extern int TIFFVGetFieldDefaulted(TIFF *tif , uint32 tag , va_list ap ) ;
extern int TIFFReadDirectory(TIFF *tif ) ;
extern int TIFFReadCustomDirectory(TIFF *tif , uint64 diroff ,
                                   TIFFFieldArray const   *infoarray ) ;
extern int TIFFReadEXIFDirectory(TIFF *tif , uint64 diroff ) ;
extern uint64 TIFFScanlineSize64(TIFF *tif ) ;
extern tmsize_t TIFFScanlineSize(TIFF *tif ) ;
extern uint64 TIFFRasterScanlineSize64(TIFF *tif ) ;
extern tmsize_t TIFFRasterScanlineSize(TIFF *tif ) ;
extern uint64 TIFFStripSize64(TIFF *tif ) ;
extern tmsize_t TIFFStripSize(TIFF *tif ) ;
extern uint64 TIFFRawStripSize64(TIFF *tif , uint32 strip ) ;
extern tmsize_t TIFFRawStripSize(TIFF *tif , uint32 strip ) ;
extern uint64 TIFFVStripSize64(TIFF *tif , uint32 nrows ) ;
extern tmsize_t TIFFVStripSize(TIFF *tif , uint32 nrows ) ;
extern uint64 TIFFTileRowSize64(TIFF *tif ) ;
extern tmsize_t TIFFTileRowSize(TIFF *tif ) ;
extern uint64 TIFFTileSize64(TIFF *tif ) ;
extern tmsize_t TIFFTileSize(TIFF *tif ) ;
extern uint64 TIFFVTileSize64(TIFF *tif , uint32 nrows ) ;
extern tmsize_t TIFFVTileSize(TIFF *tif , uint32 nrows ) ;
extern uint32 TIFFDefaultStripSize(TIFF *tif , uint32 request ) ;
extern void TIFFDefaultTileSize(TIFF * , uint32 * , uint32 * ) ;
extern int TIFFFileno(TIFF * ) ;
extern int TIFFSetFileno(TIFF * , int  ) ;
extern thandle_t TIFFClientdata(TIFF * ) ;
extern thandle_t TIFFSetClientdata(TIFF * , thandle_t  ) ;
extern int TIFFGetMode(TIFF * ) ;
extern int TIFFSetMode(TIFF * , int  ) ;
extern int TIFFIsTiled(TIFF * ) ;
extern int TIFFIsByteSwapped(TIFF * ) ;
extern int TIFFIsUpSampled(TIFF * ) ;
extern int TIFFIsMSB2LSB(TIFF * ) ;
extern int TIFFIsBigEndian(TIFF * ) ;
extern TIFFReadWriteProc TIFFGetReadProc(TIFF * ) ;
extern TIFFReadWriteProc TIFFGetWriteProc(TIFF * ) ;
extern TIFFSeekProc TIFFGetSeekProc(TIFF * ) ;
extern TIFFCloseProc TIFFGetCloseProc(TIFF * ) ;
extern TIFFSizeProc TIFFGetSizeProc(TIFF * ) ;
extern TIFFMapFileProc TIFFGetMapFileProc(TIFF * ) ;
extern TIFFUnmapFileProc TIFFGetUnmapFileProc(TIFF * ) ;
extern uint32 TIFFCurrentRow(TIFF * ) ;
extern uint16 TIFFCurrentDirectory(TIFF * ) ;
extern uint16 TIFFNumberOfDirectories(TIFF * ) ;
extern uint64 TIFFCurrentDirOffset(TIFF * ) ;
extern uint32 TIFFCurrentStrip(TIFF * ) ;
extern uint32 TIFFCurrentTile(TIFF *tif ) ;
extern int TIFFReadBufferSetup(TIFF *tif , void *bp , tmsize_t size ) ;
extern int TIFFWriteBufferSetup(TIFF *tif , void *bp , tmsize_t size ) ;
extern int TIFFSetupStrips(TIFF * ) ;
extern int TIFFWriteCheck(TIFF * , int  , char const   * ) ;
extern void TIFFFreeDirectory(TIFF * ) ;
extern int TIFFCreateDirectory(TIFF * ) ;
extern int TIFFLastDirectory(TIFF * ) ;
extern int TIFFSetDirectory(TIFF * , uint16  ) ;
extern int TIFFSetSubDirectory(TIFF * , uint64  ) ;
extern int TIFFUnlinkDirectory(TIFF * , uint16  ) ;
extern int TIFFSetField(TIFF * , uint32   , ...) ;
extern int TIFFVSetField(TIFF * , uint32  , va_list  ) ;
extern int TIFFWriteDirectory(TIFF * ) ;
extern int TIFFCheckpointDirectory(TIFF * ) ;
extern int TIFFRewriteDirectory(TIFF * ) ;
extern void TIFFPrintDirectory(TIFF * , FILE * , long  ) ;
extern int TIFFReadScanline(TIFF *tif , void *buf , uint32 row , uint16 sample ) ;
extern int TIFFWriteScanline(TIFF *tif , void *buf , uint32 row , uint16 sample ) ;
extern int TIFFReadRGBAImage(TIFF * , uint32  , uint32  , uint32 * , int  ) ;
extern int TIFFReadRGBAImageOriented(TIFF * , uint32  , uint32  , uint32 * ,
                                     int  , int  ) ;
extern int TIFFReadRGBAStrip(TIFF * , uint32  , uint32 * ) ;
extern int TIFFReadRGBATile(TIFF * , uint32  , uint32  , uint32 * ) ;
extern int TIFFRGBAImageOK(TIFF * , char * ) ;
extern int TIFFRGBAImageBegin(TIFFRGBAImage * , TIFF * , int  , char * ) ;
extern int TIFFRGBAImageGet(TIFFRGBAImage * , uint32 * , uint32  , uint32  ) ;
extern void TIFFRGBAImageEnd(TIFFRGBAImage * ) ;
extern TIFF *TIFFOpen(char const   * , char const   * ) ;
extern TIFF *TIFFFdOpen(int  , char const   * , char const   * ) ;
extern TIFF *TIFFClientOpen(char const   * , char const   * , thandle_t  ,
                            tmsize_t (*)(thandle_t  , void * , tmsize_t  ) ,
                            tmsize_t (*)(thandle_t  , void * , tmsize_t  ) ,
                            uint64 (*)(thandle_t  , uint64  , int  ) ,
                            int (*)(thandle_t  ) , uint64 (*)(thandle_t  ) ,
                            int (*)(thandle_t  , void **base , toff_t *size ) ,
                            void (*)(thandle_t  , void *base , toff_t size ) ) ;
extern char const   *TIFFFileName(TIFF * ) ;
extern char const   *TIFFSetFileName(TIFF * , char const   * ) ;
extern void TIFFError(char const   * , char const   *  , ...) ;
extern void TIFFErrorExt(thandle_t  , char const   * , char const   *  , ...) ;
extern void TIFFWarning(char const   * , char const   *  , ...) ;
extern void TIFFWarningExt(thandle_t  , char const   * , char const   *  , ...) ;
extern TIFFErrorHandler TIFFSetErrorHandler(void (*)(char const   * ,
                                                     char const   * , va_list  ) ) ;
extern TIFFErrorHandlerExt TIFFSetErrorHandlerExt(void (*)(thandle_t  ,
                                                           char const   * ,
                                                           char const   * ,
                                                           va_list  ) ) ;
extern TIFFErrorHandler TIFFSetWarningHandler(void (*)(char const   * ,
                                                       char const   * ,
                                                       va_list  ) ) ;
extern TIFFErrorHandlerExt TIFFSetWarningHandlerExt(void (*)(thandle_t  ,
                                                             char const   * ,
                                                             char const   * ,
                                                             va_list  ) ) ;
extern TIFFExtendProc TIFFSetTagExtender(void (*)(TIFF * ) ) ;
extern uint32 TIFFComputeTile(TIFF *tif , uint32 x , uint32 y , uint32 z ,
                              uint16 s ) ;
extern int TIFFCheckTile(TIFF *tif , uint32 x , uint32 y , uint32 z , uint16 s ) ;
extern uint32 TIFFNumberOfTiles(TIFF * ) ;
extern tmsize_t TIFFReadTile(TIFF *tif , void *buf , uint32 x , uint32 y ,
                             uint32 z , uint16 s ) ;
extern tmsize_t TIFFWriteTile(TIFF *tif , void *buf , uint32 x , uint32 y ,
                              uint32 z , uint16 s ) ;
extern uint32 TIFFComputeStrip(TIFF * , uint32  , uint16  ) ;
extern uint32 TIFFNumberOfStrips(TIFF * ) ;
extern tmsize_t TIFFReadEncodedStrip(TIFF *tif , uint32 strip , void *buf ,
                                     tmsize_t size ) ;
extern tmsize_t TIFFReadRawStrip(TIFF *tif , uint32 strip , void *buf ,
                                 tmsize_t size ) ;
extern tmsize_t TIFFReadEncodedTile(TIFF *tif , uint32 tile , void *buf ,
                                    tmsize_t size ) ;
extern tmsize_t TIFFReadRawTile(TIFF *tif , uint32 tile , void *buf ,
                                tmsize_t size ) ;
extern tmsize_t TIFFWriteEncodedStrip(TIFF *tif , uint32 strip , void *data ,
                                      tmsize_t cc ) ;
extern tmsize_t TIFFWriteRawStrip(TIFF *tif , uint32 strip , void *data ,
                                  tmsize_t cc ) ;
extern tmsize_t TIFFWriteEncodedTile(TIFF *tif , uint32 tile , void *data ,
                                     tmsize_t cc ) ;
extern tmsize_t TIFFWriteRawTile(TIFF *tif , uint32 tile , void *data ,
                                 tmsize_t cc ) ;
int TIFFDataWidth(TIFFDataType type ) ;
extern void TIFFSetWriteOffset(TIFF *tif , uint64 off ) ;
extern void TIFFSwabShort(uint16 * ) ;
extern void TIFFSwabLong(uint32 * ) ;
extern void TIFFSwabLong8(uint64 * ) ;
extern void TIFFSwabFloat(float * ) ;
extern void TIFFSwabDouble(double * ) ;
extern void TIFFSwabArrayOfShort(uint16 *wp , tmsize_t n ) ;
extern void TIFFSwabArrayOfTriples(uint8 *tp , tmsize_t n ) ;
extern void TIFFSwabArrayOfLong(uint32 *lp , tmsize_t n ) ;
extern void TIFFSwabArrayOfLong8(uint64 *lp , tmsize_t n ) ;
extern void TIFFSwabArrayOfFloat(float *fp , tmsize_t n ) ;
extern void TIFFSwabArrayOfDouble(double *dp , tmsize_t n ) ;
extern void TIFFReverseBits(uint8 *cp , tmsize_t n ) ;
extern unsigned char const   *TIFFGetBitRevTable(int  ) ;
extern double LogL16toY(int  ) ;
extern double LogL10toY(int  ) ;
extern void XYZtoRGB24(float * , uint8 * ) ;
extern int uv_decode(double * , double * , int  ) ;
extern void LogLuv24toXYZ(uint32  , float * ) ;
extern void LogLuv32toXYZ(uint32  , float * ) ;
extern int LogL16fromY(double  , int  ) ;
extern int LogL10fromY(double  , int  ) ;
extern int uv_encode(double  , double  , int  ) ;
extern uint32 LogLuv24fromXYZ(float * , int  ) ;
extern uint32 LogLuv32fromXYZ(float * , int  ) ;
extern int TIFFCIELabToRGBInit(TIFFCIELabToRGB * , TIFFDisplay * , float * ) ;
extern void TIFFCIELabToXYZ(TIFFCIELabToRGB * , uint32  , int32  , int32  ,
                            float * , float * , float * ) ;
extern void TIFFXYZToRGB(TIFFCIELabToRGB * , float  , float  , float  ,
                         uint32 * , uint32 * , uint32 * ) ;
extern int TIFFYCbCrToRGBInit(TIFFYCbCrToRGB * , float * , float * ) ;
extern void TIFFYCbCrtoRGB(TIFFYCbCrToRGB * , uint32  , int32  , int32  ,
                           uint32 * , uint32 * , uint32 * ) ;
int TIFFMergeFieldInfo(TIFF *tif , TIFFFieldInfo const   *info , uint32 n ) ;
TIFFFieldInfo const   *TIFFFindFieldInfo(TIFF *tif , uint32 tag ,
                                         TIFFDataType dt ) ;
TIFFFieldInfo const   *TIFFFindFieldInfoByName(TIFF *tif ,
                                               char const   *field_name ,
                                               TIFFDataType dt ) ;
TIFFFieldArray const   *_TIFFGetFields(void) ;
TIFFFieldArray const   *_TIFFGetExifFields(void) ;
void _TIFFSetupFields(TIFF *tif , TIFFFieldArray const   *fieldarray ) ;
void _TIFFPrintFieldInfo(TIFF *tif , FILE *fd ) ;
int _TIFFMergeFields(TIFF *tif , TIFFField const   *info , uint32 n ) ;
TIFFField const   *_TIFFFindOrRegisterField(TIFF *tif , uint32 tag ,
                                            TIFFDataType dt ) ;
TIFFField *_TIFFCreateAnonField(TIFF *tif , uint32 tag ,
                                TIFFDataType field_type ) ;
extern int _TIFFgetMode(char const   *mode , char const   *module ) ;
extern int _TIFFNoRowEncode(TIFF *tif , uint8 *pp , tmsize_t cc , uint16 s ) ;
extern int _TIFFNoStripEncode(TIFF *tif , uint8 *pp , tmsize_t cc , uint16 s ) ;
extern int _TIFFNoTileEncode(TIFF * , uint8 *pp , tmsize_t cc , uint16 s ) ;
extern int _TIFFNoRowDecode(TIFF *tif , uint8 *pp , tmsize_t cc , uint16 s ) ;
extern int _TIFFNoStripDecode(TIFF *tif , uint8 *pp , tmsize_t cc , uint16 s ) ;
extern int _TIFFNoTileDecode(TIFF * , uint8 *pp , tmsize_t cc , uint16 s ) ;
extern void _TIFFNoPostDecode(TIFF *tif , uint8 *buf , tmsize_t cc ) ;
extern int _TIFFNoPreCode(TIFF *tif , uint16 s ) ;
extern int _TIFFNoSeek(TIFF *tif , uint32 off ) ;
extern void _TIFFSwab16BitData(TIFF *tif , uint8 *buf , tmsize_t cc ) ;
extern void _TIFFSwab24BitData(TIFF *tif , uint8 *buf , tmsize_t cc ) ;
extern void _TIFFSwab32BitData(TIFF *tif , uint8 *buf , tmsize_t cc ) ;
extern void _TIFFSwab64BitData(TIFF *tif , uint8 *buf , tmsize_t cc ) ;
extern int TIFFFlushData1(TIFF *tif ) ;
extern int TIFFDefaultDirectory(TIFF *tif ) ;
extern void _TIFFSetDefaultCompressionState(TIFF *tif ) ;
extern int TIFFSetCompressionScheme(TIFF *tif , int scheme ) ;
extern int TIFFSetDefaultCompressionState(TIFF *tif ) ;
extern uint32 _TIFFDefaultStripSize(TIFF *tif , uint32 s ) ;
extern void _TIFFDefaultTileSize(TIFF *tif , uint32 *tw , uint32 *th ) ;
int _TIFFDataSize(TIFFDataType type ) ;
extern void _TIFFsetByteArray(void ** , void * , uint32  ) ;
extern void _TIFFsetString(char ** , char * ) ;
extern void _TIFFsetShortArray(uint16 ** , uint16 * , uint32  ) ;
extern void _TIFFsetLongArray(uint32 ** , uint32 * , uint32  ) ;
extern void _TIFFsetFloatArray(float ** , float * , uint32  ) ;
extern void _TIFFsetDoubleArray(double ** , double * , uint32  ) ;
extern void _TIFFprintAscii(FILE * , char const   * ) ;
extern void _TIFFprintAsciiTag(FILE * , char const   * , char const   * ) ;
extern void (*_TIFFwarningHandler)(char const   * , char const   * , va_list  ) ;
extern void (*_TIFFerrorHandler)(char const   * , char const   * , va_list  ) ;
extern void (*_TIFFwarningHandlerExt)(thandle_t  , char const   * ,
                                      char const   * , va_list  ) ;
extern void (*_TIFFerrorHandlerExt)(thandle_t  , char const   * ,
                                    char const   * , va_list  ) ;
extern void *_TIFFCheckMalloc(TIFF *tif , tmsize_t nmemb , tmsize_t elem_size ,
                              char const   *what ) ;
extern void *_TIFFCheckRealloc(TIFF *tif , void *buffer , tmsize_t nmemb ,
                               tmsize_t elem_size , char const   *what ) ;
extern double _TIFFUInt64ToDouble(uint64  ) ;
extern float _TIFFUInt64ToFloat(uint64  ) ;
extern int TIFFInitDumpMode(TIFF * , int  ) ;
extern int TIFFInitPackBits(TIFF * , int  ) ;
extern int TIFFInitCCITTRLE(TIFF * , int  ) ;
extern int TIFFInitCCITTRLEW(TIFF * , int  ) ;
extern int TIFFInitCCITTFax3(TIFF * , int  ) ;
extern int TIFFInitCCITTFax4(TIFF * , int  ) ;
extern int TIFFInitThunderScan(TIFF * , int  ) ;
extern int TIFFInitNeXT(TIFF * , int  ) ;
extern int TIFFInitLZW(TIFF * , int  ) ;
extern int TIFFInitZIP(TIFF * , int  ) ;
extern int TIFFInitPixarLog(TIFF * , int  ) ;
extern int TIFFInitSGILog(TIFF * , int  ) ;
extern TIFFCodec _TIFFBuiltinCODECS[] ;
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
extern int ( __attribute__((__nonnull__(1))) mkstemp)(char *__template )  __asm__("mkstemp64")  ;
extern int ( __attribute__((__nonnull__(1))) mkstemps)(char *__template ,
                                                       int __suffixlen )  __asm__("mkstemps64")  ;
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
static struct _TIFFFieldArray  const  tiffFieldArray ;
static struct _TIFFFieldArray  const  exifFieldArray ;
static TIFFField const   tiffFields[138]  = 
  {      {(uint32 )254, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)5,
      (unsigned char)1, (unsigned char)0, (char *)"SubfileType",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )255, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)5,
      (unsigned char)1, (unsigned char)0, (char *)"OldSubfileType",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )256, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)1,
      (unsigned char)0, (unsigned char)0, (char *)"ImageWidth",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )257, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)1,
      (unsigned char)1, (unsigned char)0, (char *)"ImageLength",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )258, (short)-1, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)6,
      (unsigned char)0, (unsigned char)0, (char *)"BitsPerSample",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )259, (short)-1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)7,
      (unsigned char)0, (unsigned char)0, (char *)"Compression",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )262, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)8,
      (unsigned char)0, (unsigned char)0, (char *)"PhotometricInterpretation",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )263, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)9,
      (unsigned char)1, (unsigned char)0, (char *)"Threshholding",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )264, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)0,
      (unsigned char)1, (unsigned char)0, (char *)"CellWidth",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )265, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)0,
      (unsigned char)1, (unsigned char)0, (char *)"CellLength",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )266, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)10,
      (unsigned char)0, (unsigned char)0, (char *)"FillOrder",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )269, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"DocumentName",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )270, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ImageDescription",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )271, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"Make",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )272, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"Model",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )273, (short)-1, (short)-1, (TIFFDataType )16, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)25,
      (unsigned char)0, (unsigned char)0, (char *)"StripOffsets",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )274, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)15,
      (unsigned char)0, (unsigned char)0, (char *)"Orientation",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )277, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)16,
      (unsigned char)0, (unsigned char)0, (char *)"SamplesPerPixel",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )278, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)17,
      (unsigned char)0, (unsigned char)0, (char *)"RowsPerStrip",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )279, (short)-1, (short)-1, (TIFFDataType )16, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)24,
      (unsigned char)0, (unsigned char)0, (char *)"StripByteCounts",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )280, (short)-2, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)18,
      (unsigned char)1, (unsigned char)0, (char *)"MinSampleValue",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )281, (short)-2, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)19,
      (unsigned char)1, (unsigned char)0, (char *)"MaxSampleValue",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )282, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)3,
      (unsigned char)1, (unsigned char)0, (char *)"XResolution",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )283, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)3,
      (unsigned char)1, (unsigned char)0, (char *)"YResolution",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )284, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)20,
      (unsigned char)0, (unsigned char)0, (char *)"PlanarConfiguration",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )285, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"PageName",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )286, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)4,
      (unsigned char)1, (unsigned char)0, (char *)"XPosition",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )287, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)4,
      (unsigned char)1, (unsigned char)0, (char *)"YPosition",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )288, (short)-1, (short)-1, (TIFFDataType )16, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)0,
      (unsigned char)0, (unsigned char)0, (char *)"FreeOffsets",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )289, (short)-1, (short)-1, (TIFFDataType )16, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)0,
      (unsigned char)0, (unsigned char)0, (char *)"FreeByteCounts",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )290, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)0,
      (unsigned char)1, (unsigned char)0, (char *)"GrayResponseUnit",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )291, (short)-1, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)0,
      (unsigned char)1, (unsigned char)0, (char *)"GrayResponseCurve",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )296, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)22,
      (unsigned char)1, (unsigned char)0, (char *)"ResolutionUnit",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )297, (short)2, (short)2, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )14, (TIFFSetGetFieldType )0, (unsigned short)23,
      (unsigned char)1, (unsigned char)0, (char *)"PageNumber",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )300, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)0,
      (unsigned char)1, (unsigned char)0, (char *)"ColorResponseUnit",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )301, (short)-1, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )51, (TIFFSetGetFieldType )0, (unsigned short)44,
      (unsigned char)1, (unsigned char)0, (char *)"TransferFunction",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )305, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"Software",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )306, (short)20, (short)20, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"DateTime",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )315, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"Artist",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )316, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"HostComputer",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )318, (short)2, (short)2, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )24, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"WhitePoint",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )319, (short)6, (short)6, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )24, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"PrimaryChromaticities",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )320, (short)-1, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )51, (TIFFSetGetFieldType )0, (unsigned short)26,
      (unsigned char)1, (unsigned char)0, (char *)"ColorMap",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )321, (short)2, (short)2, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )14, (TIFFSetGetFieldType )0, (unsigned short)37,
      (unsigned char)1, (unsigned char)0, (char *)"HalftoneHints",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )322, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)2,
      (unsigned char)0, (unsigned char)0, (char *)"TileWidth",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )323, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)2,
      (unsigned char)0, (unsigned char)0, (char *)"TileLength",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )324, (short)-1, (short)1, (TIFFDataType )16, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)25,
      (unsigned char)0, (unsigned char)0, (char *)"TileOffsets",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )325, (short)-1, (short)1, (TIFFDataType )16, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)24,
      (unsigned char)0, (unsigned char)0, (char *)"TileByteCounts",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )330, (short)-1, (short)-1, (TIFFDataType )18, (uint32 )0,
      (TIFFSetGetFieldType )38, (TIFFSetGetFieldType )0, (unsigned short)49,
      (unsigned char)1, (unsigned char)1, (char *)"SubIFD",
      (TIFFFieldArray *)(& tiffFieldArray)}, 
        {(uint32 )332, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"InkSet",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )333, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )27, (TIFFSetGetFieldType )0, (unsigned short)46,
      (unsigned char)1, (unsigned char)1, (char *)"InkNames",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )334, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"NumberOfInks",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )336, (short)2, (short)2, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )14, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"DotRange",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )337, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"TargetPrinter",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )338, (short)-1, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )30, (TIFFSetGetFieldType )0, (unsigned short)31,
      (unsigned char)0, (unsigned char)1, (char *)"ExtraSamples",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )339, (short)-1, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)32,
      (unsigned char)0, (unsigned char)0, (char *)"SampleFormat",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )340, (short)-2, (short)-1, (TIFFDataType )0, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)33,
      (unsigned char)1, (unsigned char)0, (char *)"SMinSampleValue",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )341, (short)-2, (short)-1, (TIFFDataType )0, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)34,
      (unsigned char)1, (unsigned char)0, (char *)"SMaxSampleValue",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )343, (short)-1, (short)-3, (TIFFDataType )1, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"ClipPath",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )344, (short)1, (short)1, (TIFFDataType )9, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"XClipPathUnits",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )344, (short)1, (short)1, (TIFFDataType )6, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"XClipPathUnits",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )345, (short)1, (short)1, (TIFFDataType )9, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"YClipPathUnits",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )529, (short)3, (short)3, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )24, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"YCbCrCoefficients",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )530, (short)2, (short)2, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )14, (TIFFSetGetFieldType )0, (unsigned short)39,
      (unsigned char)0, (unsigned char)0, (char *)"YCbCrSubsampling",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )531, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)40,
      (unsigned char)0, (unsigned char)0, (char *)"YCbCrPositioning",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )532, (short)6, (short)6, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )24, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ReferenceBlackWhite",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )700, (short)-3, (short)-3, (TIFFDataType )1, (uint32 )0,
      (TIFFSetGetFieldType )40, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"XMLPacket",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )32995, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)31,
      (unsigned char)0, (unsigned char)0, (char *)"Matteing",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )32996, (short)-2, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)32,
      (unsigned char)0, (unsigned char)0, (char *)"DataType",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )32997, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)35,
      (unsigned char)0, (unsigned char)0, (char *)"ImageDepth",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )32998, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)36,
      (unsigned char)0, (unsigned char)0, (char *)"TileDepth",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )33300, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ImageFullWidth",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )33301, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ImageFullLength",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )33302, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"TextureFormat",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )33303, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"TextureWrapModes",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )33304, (short)1, (short)1, (TIFFDataType )11, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FieldOfViewCotangent",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )33305, (short)16, (short)16, (TIFFDataType )11, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"MatrixWorldToScreen",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )33306, (short)16, (short)16, (TIFFDataType )11, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"MatrixWorldToCamera",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )33432, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"Copyright",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )33723, (short)-3, (short)-3, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )44, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"RichTIFFIPTC",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34377, (short)-3, (short)-3, (TIFFDataType )1, (uint32 )0,
      (TIFFSetGetFieldType )40, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"Photoshop",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34665, (short)1, (short)1, (TIFFDataType )18, (uint32 )0,
      (TIFFSetGetFieldType )12, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"EXIFIFDOffset",
      (TIFFFieldArray *)(& exifFieldArray)}, 
        {(uint32 )34675, (short)-3, (short)-3, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )40, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"ICC Profile",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34853, (short)1, (short)1, (TIFFDataType )18, (uint32 )0,
      (TIFFSetGetFieldType )12, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"GPSIFDOffset",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34908, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )6, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FaxRecvParams",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34909, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )1, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FaxSubAddress",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34910, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )6, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FaxRecvTime",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34911, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )1, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FaxDcs",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37439, (short)1, (short)1, (TIFFDataType )12, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"StoNits",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )40965, (short)1, (short)1, (TIFFDataType )18, (uint32 )0,
      (TIFFSetGetFieldType )0, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"InteroperabilityIFDOffset",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50706, (short)4, (short)4, (TIFFDataType )1, (uint32 )0,
      (TIFFSetGetFieldType )16, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"DNGVersion",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50707, (short)4, (short)4, (TIFFDataType )1, (uint32 )0,
      (TIFFSetGetFieldType )16, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"DNGBackwardVersion",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50708, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"UniqueCameraModel",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50709, (short)-1, (short)-1, (TIFFDataType )1, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)1, (char *)"LocalizedCameraModel",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50710, (short)-1, (short)-1, (TIFFDataType )1, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"CFAPlaneColor",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50711, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"CFALayout",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50712, (short)-1, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )30, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"LinearizationTable",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50713, (short)2, (short)2, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )18, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"BlackLevelRepeatDim",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50714, (short)-1, (short)-1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"BlackLevel",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50715, (short)-1, (short)-1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"BlackLevelDeltaH",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50716, (short)-1, (short)-1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"BlackLevelDeltaV",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50717, (short)-1, (short)-1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )32, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"WhiteLevel",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50718, (short)2, (short)2, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )24, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"DefaultScale",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50780, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"BestQualityScale",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50719, (short)2, (short)2, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )24, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"DefaultCropOrigin",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50720, (short)2, (short)2, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )24, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"DefaultCropSize",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50721, (short)-1, (short)-1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"ColorMatrix1",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50722, (short)-1, (short)-1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"ColorMatrix2",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50723, (short)-1, (short)-1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"CameraCalibration1",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50724, (short)-1, (short)-1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"CameraCalibration2",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50725, (short)-1, (short)-1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"ReductionMatrix1",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50726, (short)-1, (short)-1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"ReductionMatrix2",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50727, (short)-1, (short)-1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"AnalogBalance",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50728, (short)-1, (short)-1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"AsShotNeutral",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50729, (short)2, (short)2, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )24, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"AsShotWhiteXY",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50730, (short)1, (short)1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"BaselineExposure",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50731, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"BaselineNoise",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50732, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"BaselineSharpness",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50733, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"BayerGreenSplit",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50734, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"LinearResponseLimit",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50735, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"CameraSerialNumber",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50736, (short)4, (short)4, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )24, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"LensInfo",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50737, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"ChromaBlurRadius",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50738, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"AntiAliasStrength",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50739, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"ShadowScale",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50740, (short)-1, (short)-1, (TIFFDataType )1, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"DNGPrivateData",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50741, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"MakerNoteSafety",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50778, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"CalibrationIlluminant1",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50779, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"CalibrationIlluminant2",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50781, (short)16, (short)16, (TIFFDataType )1, (uint32 )0,
      (TIFFSetGetFieldType )16, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"RawDataUniqueID",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50827, (short)-1, (short)-1, (TIFFDataType )1, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)1, (char *)"OriginalRawFileName",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50828, (short)-1, (short)-1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"OriginalRawFileData",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50829, (short)4, (short)4, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )20, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)0, (char *)"ActiveArea",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50830, (short)-1, (short)-1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )32, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"MaskedAreas",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50831, (short)-1, (short)-1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"AsShotICCProfile",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50832, (short)-1, (short)-1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"AsShotPreProfileMatrix",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50833, (short)-1, (short)-1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"CurrentICCProfile",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )50834, (short)-1, (short)-1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )36, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)0, (unsigned char)1, (char *)"CurrentPreProfileMatrix",
      (TIFFFieldArray *)((void *)0)}};
static TIFFField const   exifFields[56]  = 
  {      {(uint32 )33434, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ExposureTime",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )33437, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FNumber",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34850, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ExposureProgram",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34852, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"SpectralSensitivity",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34855, (short)-1, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )30, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)1, (char *)"ISOSpeedRatings",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )34856, (short)-1, (short)-1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)1,
      (char *)"OptoelectricConversionFactor", (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )36864, (short)4, (short)4, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )16, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ExifVersion",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )36867, (short)20, (short)20, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"DateTimeOriginal",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )36868, (short)20, (short)20, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"DateTimeDigitized",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37121, (short)4, (short)4, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )16, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ComponentsConfiguration",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37122, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"CompressedBitsPerPixel",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37377, (short)1, (short)1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ShutterSpeedValue",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37378, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ApertureValue",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37379, (short)1, (short)1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"BrightnessValue",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37380, (short)1, (short)1, (TIFFDataType )10, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ExposureBiasValue",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37381, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"MaxApertureValue",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37382, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"SubjectDistance",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37383, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"MeteringMode",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37384, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"LightSource",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37385, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"Flash",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37386, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FocalLength",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37396, (short)-1, (short)-1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )30, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)1, (char *)"SubjectArea",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37500, (short)-1, (short)-1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)1, (char *)"MakerNote",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37510, (short)-1, (short)-1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)1, (char *)"UserComment",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37520, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"SubSecTime",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37521, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"SubSecTimeOriginal",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )37522, (short)-1, (short)-1, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"SubSecTimeDigitized",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )40960, (short)4, (short)4, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )16, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FlashpixVersion",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )40961, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ColorSpace",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )40962, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"PixelXDimension",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )40963, (short)1, (short)1, (TIFFDataType )4, (uint32 )0,
      (TIFFSetGetFieldType )6, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"PixelYDimension",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )40964, (short)13, (short)13, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"RelatedSoundFile",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41483, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FlashEnergy",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41484, (short)-1, (short)-1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)1, (char *)"SpatialFrequencyResponse",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41486, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FocalPlaneXResolution",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41487, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FocalPlaneYResolution",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41488, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FocalPlaneResolutionUnit",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41492, (short)2, (short)2, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )18, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"SubjectLocation",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41493, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ExposureIndex",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41495, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"SensingMethod",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41728, (short)1, (short)1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )2, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FileSource",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41729, (short)1, (short)1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )2, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"SceneType",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41730, (short)-1, (short)-1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)1, (char *)"CFAPattern",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41985, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"CustomRendered",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41986, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ExposureMode",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41987, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"WhiteBalance",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41988, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"DigitalZoomRatio",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41989, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"FocalLengthIn35mmFilm",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41990, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"SceneCaptureType",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41991, (short)1, (short)1, (TIFFDataType )5, (uint32 )0,
      (TIFFSetGetFieldType )11, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"GainControl",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41992, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"Contrast",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41993, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"Saturation",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41994, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"Sharpness",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41995, (short)-1, (short)-1, (TIFFDataType )7, (uint32 )0,
      (TIFFSetGetFieldType )28, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)1, (char *)"DeviceSettingDescription",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )41996, (short)1, (short)1, (TIFFDataType )3, (uint32 )0,
      (TIFFSetGetFieldType )4, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"SubjectDistanceRange",
      (TIFFFieldArray *)((void *)0)}, 
        {(uint32 )42016, (short)33, (short)33, (TIFFDataType )2, (uint32 )0,
      (TIFFSetGetFieldType )1, (TIFFSetGetFieldType )0, (unsigned short)65,
      (unsigned char)1, (unsigned char)0, (char *)"ImageUniqueID",
      (TIFFFieldArray *)((void *)0)}};
static struct _TIFFFieldArray  const  tiffFieldArray  =    {(TIFFFieldArrayType )0, (uint32 )0,
    sizeof(tiffFields) / sizeof(tiffFields[0]), (TIFFField *)(tiffFields)};
static struct _TIFFFieldArray  const  exifFieldArray  =    {(TIFFFieldArrayType )1, (uint32 )0,
    sizeof(exifFields) / sizeof(exifFields[0]), (TIFFField *)(exifFields)};
TIFFFieldArray const   *_TIFFGetFields(void) 
{ 


  {
  return (& tiffFieldArray);
}
}
TIFFFieldArray const   *_TIFFGetExifFields(void) 
{ 


  {
  return (& exifFieldArray);
}
}
void _TIFFSetupFields(TIFF *tif , TIFFFieldArray const   *fieldarray ) 
{ 
  uint32 i ;
  TIFFField *fld ;
  size_t tmp ;
  size_t tmp___0 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___4 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  size_t tmp___10 ;
  size_t tmp___11 ;
  int tmp___12 ;

  {
  if (((tif->tif_fields && tif->tif_nfields > 0) && tif->tif_nfields > 0) && tif->tif_nfields > 0) {
    if (tif->tif_nfields > 0U) {
      i = (uint32 )0;
      while (i < tif->tif_nfields) {
        fld = *(tif->tif_fields + i);
        if ((int )fld->field_bit == 65) {
          if (0) {
            if (0) {
              __s1_len = strlen("Tag ");
              __s2_len = strlen((char const   *)fld->field_name);
              if (! ((size_t )((void const   *)("Tag " + 1)) - (size_t )((void const   *)"Tag ") == 1U)) {
                goto _L___0;
              } else
              if (__s1_len >= 4U) {
                _L___0: /* CIL Label */ 
                if (! ((size_t )((void const   *)(fld->field_name + 1)) - (size_t )((void const   *)fld->field_name) == 1U)) {
                  tmp___7 = 1;
                } else
                if (__s2_len >= 4U) {
                  tmp___7 = 1;
                } else {
                  tmp___7 = 0;
                }
              } else {
                tmp___7 = 0;
              }
              if (tmp___7) {
                tmp___2 = __builtin_strcmp("Tag ",
                                           (char const   *)fld->field_name);
                tmp___6 = tmp___2;
              } else {
                tmp___5 = __builtin_strcmp("Tag ",
                                           (char const   *)fld->field_name);
                tmp___6 = tmp___5;
              }
            } else {
              tmp___5 = __builtin_strcmp("Tag ", (char const   *)fld->field_name);
              tmp___6 = tmp___5;
            }
            tmp___9 = tmp___6;
          } else {
            tmp___8 = strncmp("Tag ", (char const   *)fld->field_name,
                              (size_t )4);
            tmp___9 = tmp___8;
          }
          if (tmp___9 == 0) {
            _TIFFfree((void *)fld->field_name);
            _TIFFfree((void *)fld);
          } else {

          }
        } else {

        }
        i ++;
      }
      _TIFFfree((void *)tif->tif_fields);
      tif->tif_fields = (TIFFField **)((void *)0);
      tif->tif_nfields = (uint32 )0;
    } else {

    }
  } else {

  }
  tmp___12 = _TIFFMergeFields(tif, (TIFFField const   *)fieldarray->fields,
                              (uint32 )fieldarray->count);
  if (tmp___12) {

  } else {
    TIFFErrorExt(tif->tif_clientdata, "_TIFFSetupFields",
                 "Setting up field info failed");
  }
  return;
}
}
static int tagCompare(void const   *a , void const   *b ) 
{ 
  TIFFField const   *ta ;
  TIFFField const   *tb ;
  int tmp ;

  {
  ta = *((TIFFField const   **)a);
  tb = *((TIFFField const   **)b);
  if (ta->field_tag != tb->field_tag) {
    return ((int )ta->field_tag - (int )tb->field_tag);
  } else {
    if ((unsigned int const   )ta->field_type == 0U) {
      tmp = 0;
    } else {
      tmp = (int )tb->field_type - (int )ta->field_type;
    }
    return (tmp);
  }
}
}
static int tagNameCompare(void const   *a , void const   *b ) 
{ 
  TIFFField const   *ta ;
  TIFFField const   *tb ;
  int ret ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___2 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

  {
  ta = *((TIFFField const   **)a);
  tb = *((TIFFField const   **)b);
  if (0) {
    __s1_len = strlen((char const   *)ta->field_name);
    __s2_len = strlen((char const   *)tb->field_name);
    if (! ((size_t )((void const   *)(ta->field_name + 1)) - (size_t )((void const   *)ta->field_name) == 1U)) {
      goto _L___0;
    } else
    if (__s1_len >= 4U) {
      _L___0: /* CIL Label */ 
      if (! ((size_t )((void const   *)(tb->field_name + 1)) - (size_t )((void const   *)tb->field_name) == 1U)) {
        tmp___5 = 1;
      } else
      if (__s2_len >= 4U) {
        tmp___5 = 1;
      } else {
        tmp___5 = 0;
      }
    } else {
      tmp___5 = 0;
    }
    if (tmp___5) {
      tmp___0 = __builtin_strcmp((char const   *)ta->field_name,
                                 (char const   *)tb->field_name);
      tmp___4 = tmp___0;
    } else {
      tmp___3 = __builtin_strcmp((char const   *)ta->field_name,
                                 (char const   *)tb->field_name);
      tmp___4 = tmp___3;
    }
  } else {
    tmp___3 = __builtin_strcmp((char const   *)ta->field_name,
                               (char const   *)tb->field_name);
    tmp___4 = tmp___3;
  }
  ret = tmp___4;
  if (ret) {
    return (ret);
  } else {
    if ((unsigned int const   )ta->field_type == 0U) {
      tmp___6 = 0;
    } else {
      tmp___6 = (int )tb->field_type - (int )ta->field_type;
    }
    return (tmp___6);
  }
}
}
int _TIFFMergeFields(TIFF *tif , TIFFField const   *info , uint32 n ) 
{ 
  char module[17] ;
  char reason[17] ;
  TIFFField **tp ;
  uint32 i ;
  TIFFField const   *fip ;
  TIFFField const   *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  TIFFField **tmp___2 ;
  uint32 tmp___3 ;

  {
  module[0] = (char )'_';
  module[1] = (char )'T';
  module[2] = (char )'I';
  module[3] = (char )'F';
  module[4] = (char )'F';
  module[5] = (char )'M';
  module[6] = (char )'e';
  module[7] = (char )'r';
  module[8] = (char )'g';
  module[9] = (char )'e';
  module[10] = (char )'F';
  module[11] = (char )'i';
  module[12] = (char )'e';
  module[13] = (char )'l';
  module[14] = (char )'d';
  module[15] = (char )'s';
  module[16] = (char )'\000';
  reason[0] = (char )'f';
  reason[1] = (char )'o';
  reason[2] = (char )'r';
  reason[3] = (char )' ';
  reason[4] = (char )'f';
  reason[5] = (char )'i';
  reason[6] = (char )'e';
  reason[7] = (char )'l';
  reason[8] = (char )'d';
  reason[9] = (char )'s';
  reason[10] = (char )' ';
  reason[11] = (char )'a';
  reason[12] = (char )'r';
  reason[13] = (char )'r';
  reason[14] = (char )'a';
  reason[15] = (char )'y';
  reason[16] = (char )'\000';
  i = (uint32 )0;
  while (i < n) {
    tmp = TIFFFindField(tif, (uint32 )(info + i)->field_tag, (TIFFDataType )0);
    fip = tmp;
    if (fip) {
      TIFFErrorExt(tif->tif_clientdata, (char const   *)(module),
                   "Field with tag %lu is already registered as \"%s\"",
                   (unsigned int )(info + i)->field_tag, fip->field_name);
      return (0);
    } else {

    }
    i ++;
  }
  tif->tif_foundfield = (TIFFField const   *)((void *)0);
  if ((tif->tif_fields && tif->tif_nfields > 0) && tif->tif_nfields > 0) {
    if (tif->tif_nfields > 0U) {
      tmp___0 = _TIFFCheckRealloc(tif, (void *)tif->tif_fields,
                                  (tmsize_t )(tif->tif_nfields + n),
                                  (tmsize_t )sizeof(TIFFField *),
                                  (char const   *)(reason));
      tif->tif_fields = (TIFFField **)tmp___0;
    } else {
      tmp___1 = _TIFFCheckMalloc(tif, (tmsize_t )n,
                                 (tmsize_t )sizeof(TIFFField *),
                                 (char const   *)(reason));
      tif->tif_fields = (TIFFField **)tmp___1;
    }
  } else {
    tmp___1 = _TIFFCheckMalloc(tif, (tmsize_t )n,
                               (tmsize_t )sizeof(TIFFField *),
                               (char const   *)(reason));
    tif->tif_fields = (TIFFField **)tmp___1;
  }
  if (! tif->tif_fields) {
    TIFFErrorExt(tif->tif_clientdata, (char const   *)(module),
                 "Failed to allocate fields array");
    return (0);
  } else {

  }
  tp = tif->tif_fields + tif->tif_nfields;
  i = (uint32 )0;
  while (i < n) {
    tmp___2 = tp;
    tp ++;
    *tmp___2 = (TIFFField *)(info + i);
    i ++;
  }
  tmp___3 = tif->tif_nfields + n;
  tif->tif_nfields = tmp___3;
  qsort((void *)tif->tif_fields, tmp___3, sizeof(TIFFField *), & tagCompare);
  return ((int )n);
}
}
void _TIFFPrintFieldInfo(TIFF *tif , FILE *fd ) 
{ 
  uint32 i ;
  TIFFField const   *fip ;
  char const   *tmp ;
  char const   *tmp___0 ;

  {
  fprintf((FILE */* __restrict  */)fd,
          (char const   */* __restrict  */)"%s: \n", tif->tif_name);
  i = (uint32 )0;
  while (i < tif->tif_nfields) {
    fip = (TIFFField const   *)*(tif->tif_fields + i);
    if (fip->field_passcount) {
      tmp = "TRUE";
    } else {
      tmp = "FALSE";
    }
    if (fip->field_oktochange) {
      tmp___0 = "TRUE";
    } else {
      tmp___0 = "FALSE";
    }
    fprintf((FILE */* __restrict  */)fd,
            (char const   */* __restrict  */)"field[%2d] %5lu, %2d, %2d, %d, %2d, %5s, %5s, %s\n",
            (int )i, (unsigned long )fip->field_tag,
            (int const   )fip->field_readcount,
            (int const   )fip->field_writecount,
            (unsigned int const   )fip->field_type,
            (int const   )fip->field_bit, tmp___0, tmp, fip->field_name);
    i ++;
  }
  return;
}
}
int TIFFDataWidth(TIFFDataType type ) 
{ 


  {
  switch ((unsigned int )type) {
  case 7U: 
  case 6U: 
  case 2U: 
  case 1U: 
  case 0U: 
  return (1);
  case 8U: 
  case 3U: 
  return (2);
  case 13U: 
  case 11U: 
  case 9U: 
  case 4U: 
  return (4);
  case 18U: 
  case 17U: 
  case 16U: 
  case 12U: 
  case 10U: 
  case 5U: 
  return (8);
  default: 
  return (0);
  }
}
}
int _TIFFDataSize(TIFFDataType type ) 
{ 


  {
  switch ((unsigned int )type) {
  case 7U: 
  case 2U: 
  case 6U: 
  case 1U: 
  return (1);
  case 8U: 
  case 3U: 
  return (2);
  case 10U: 
  case 5U: 
  case 13U: 
  case 11U: 
  case 9U: 
  case 4U: 
  return (4);
  case 18U: 
  case 17U: 
  case 16U: 
  case 12U: 
  return (8);
  default: 
  return (0);
  }
}
}
TIFFField const   *TIFFFindField(TIFF *tif , uint32 tag , TIFFDataType dt ) 
{ 
  TIFFField key ;
  TIFFField *pkey ;
  TIFFField const   **ret ;
  void *tmp ;
  TIFFField const   *tmp___0 ;

  {
  key.field_tag = (uint32 )0;
  key.field_readcount = (short)0;
  key.field_writecount = (short)0;
  key.field_type = (TIFFDataType )0;
  key.reserved = (uint32 )0;
  key.set_field_type = (TIFFSetGetFieldType )0;
  key.get_field_type = (TIFFSetGetFieldType )0;
  key.field_bit = (unsigned short)0;
  key.field_oktochange = (unsigned char)0;
  key.field_passcount = (unsigned char)0;
  key.field_name = (char *)((void *)0);
  key.field_subfields = (TIFFFieldArray *)((void *)0);
  pkey = & key;
  if (tif->tif_foundfield) {
    if ((tif->tif_foundfield)->field_tag == (uint32 const   )tag) {
      if ((unsigned int )dt == 0U) {
        return (tif->tif_foundfield);
      } else
      if ((unsigned int )dt == (unsigned int )(tif->tif_foundfield)->field_type) {
        return (tif->tif_foundfield);
      } else {

      }
    } else {

    }
  } else {

  }
  if (! tif->tif_fields) {
    return ((TIFFField const   *)((void *)0));
  } else {

  }
  key.field_tag = tag;
  key.field_type = dt;
  tmp = bsearch((void const   *)(& pkey), (void const   *)tif->tif_fields,
                tif->tif_nfields, sizeof(TIFFField *), & tagCompare);
  ret = (TIFFField const   **)tmp;
  if (ret) {
    tmp___0 = *ret;
  } else {
    tmp___0 = (TIFFField const   *)((void *)0);
  }
  tif->tif_foundfield = tmp___0;
  return (tmp___0);
}
}
TIFFField const   *_TIFFFindFieldByName(TIFF *tif , char const   *field_name ,
                                        TIFFDataType dt ) 
{ 
  TIFFField key ;
  TIFFField *pkey ;
  TIFFField const   **ret ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___2 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  void *tmp___6 ;
  TIFFField const   *tmp___7 ;

  {
  key.field_tag = (uint32 )0;
  key.field_readcount = (short)0;
  key.field_writecount = (short)0;
  key.field_type = (TIFFDataType )0;
  key.reserved = (uint32 )0;
  key.set_field_type = (TIFFSetGetFieldType )0;
  key.get_field_type = (TIFFSetGetFieldType )0;
  key.field_bit = (unsigned short)0;
  key.field_oktochange = (unsigned char)0;
  key.field_passcount = (unsigned char)0;
  key.field_name = (char *)((void *)0);
  key.field_subfields = (TIFFFieldArray *)((void *)0);
  pkey = & key;
  if (tif->tif_foundfield) {
    if (0) {
      __s1_len = strlen((char const   *)(tif->tif_foundfield)->field_name);
      __s2_len = strlen(field_name);
      if (! ((size_t )((void const   *)((tif->tif_foundfield)->field_name + 1)) - (size_t )((void const   *)(tif->tif_foundfield)->field_name) == 1U)) {
        goto _L___0;
      } else
      if (__s1_len >= 4U) {
        _L___0: /* CIL Label */ 
        if (! ((size_t )((void const   *)(field_name + 1)) - (size_t )((void const   *)field_name) == 1U)) {
          tmp___5 = 1;
        } else
        if (__s2_len >= 4U) {
          tmp___5 = 1;
        } else {
          tmp___5 = 0;
        }
      } else {
        tmp___5 = 0;
      }
      if (tmp___5) {
        tmp___0 = __builtin_strcmp((char const   *)(tif->tif_foundfield)->field_name,
                                   field_name);
        tmp___4 = tmp___0;
      } else {
        tmp___3 = __builtin_strcmp((char const   *)(tif->tif_foundfield)->field_name,
                                   field_name);
        tmp___4 = tmp___3;
      }
    } else {
      tmp___3 = __builtin_strcmp((char const   *)(tif->tif_foundfield)->field_name,
                                 field_name);
      tmp___4 = tmp___3;
    }
    if (tmp___4 == 0) {
      if ((unsigned int )dt == 0U) {
        return (tif->tif_foundfield);
      } else
      if ((unsigned int )dt == (unsigned int )(tif->tif_foundfield)->field_type) {
        return (tif->tif_foundfield);
      } else {

      }
    } else {

    }
  } else {

  }
  if (! tif->tif_fields) {
    return ((TIFFField const   *)((void *)0));
  } else {

  }
  key.field_name = (char *)field_name;
  key.field_type = dt;
  tmp___6 = lfind((void const   *)(& pkey), (void const   *)tif->tif_fields,
                  & tif->tif_nfields, sizeof(TIFFField *), & tagNameCompare);
  ret = (TIFFField const   **)tmp___6;
  if (ret) {
    tmp___7 = *ret;
  } else {
    tmp___7 = (TIFFField const   *)((void *)0);
  }
  tif->tif_foundfield = tmp___7;
  return (tmp___7);
}
}
TIFFField const   *TIFFFieldWithTag(TIFF *tif , uint32 tag ) 
{ 
  TIFFField const   *fip ;
  TIFFField const   *tmp ;

  {
  tmp = TIFFFindField(tif, tag, (TIFFDataType )0);
  fip = tmp;
  if (! fip) {
    TIFFErrorExt(tif->tif_clientdata, "TIFFFieldWithTag",
                 "Internal error, unknown tag 0x%x", tag);
    if ((unsigned int )fip != (unsigned int )((void *)0)) {

    } else {
      __assert_fail("fip != ((void *)0)", "tif_dirinfo.c", 524U,
                    "TIFFFieldWithTag");
    }
  } else {

  }
  return (fip);
}
}
TIFFField const   *TIFFFieldWithName(TIFF *tif , char const   *field_name ) 
{ 
  TIFFField const   *fip ;
  TIFFField const   *tmp ;

  {
  tmp = _TIFFFindFieldByName(tif, field_name, (TIFFDataType )0);
  fip = tmp;
  if (! fip) {
    TIFFErrorExt(tif->tif_clientdata, "TIFFFieldWithName",
                 "Internal error, unknown tag %s", field_name);
    if ((unsigned int )fip != (unsigned int )((void *)0)) {

    } else {
      __assert_fail("fip != ((void *)0)", "tif_dirinfo.c", 538U,
                    "TIFFFieldWithName");
    }
  } else {

  }
  return (fip);
}
}
TIFFField const   *_TIFFFindOrRegisterField(TIFF *tif , uint32 tag ,
                                            TIFFDataType dt ) 
{ 
  TIFFField const   *fld ;
  TIFFField *tmp ;
  int tmp___0 ;

  {
  fld = TIFFFindField(tif, tag, dt);
  if ((unsigned int )fld == (unsigned int )((void *)0)) {
    tmp = _TIFFCreateAnonField(tif, tag, dt);
    fld = (TIFFField const   *)tmp;
    tmp___0 = _TIFFMergeFields(tif, fld, (uint32 )1);
    if (tmp___0) {

    } else {
      return ((TIFFField const   *)((void *)0));
    }
  } else {

  }
  return (fld);
}
}
TIFFField *_TIFFCreateAnonField(TIFF *tif , uint32 tag ,
                                TIFFDataType field_type ) 
{ 
  TIFFField *fld ;
  void *tmp ;
  void *tmp___0 ;

  {
  tmp = _TIFFmalloc((tmsize_t )sizeof(TIFFField ));
  fld = (TIFFField *)tmp;
  if ((unsigned int )fld == (unsigned int )((void *)0)) {
    return ((TIFFField *)((void *)0));
  } else {

  }
  _TIFFmemset((void *)fld, 0, (tmsize_t )sizeof(TIFFField ));
  fld->field_tag = tag;
  fld->field_readcount = (short)-3;
  fld->field_writecount = (short)-3;
  fld->field_type = field_type;
  fld->reserved = (uint32 )0;
  switch ((unsigned int )field_type) {
  case 7U: 
  case 1U: 
  fld->set_field_type = (TIFFSetGetFieldType )40;
  fld->get_field_type = (TIFFSetGetFieldType )40;
  break;
  case 2U: 
  fld->set_field_type = (TIFFSetGetFieldType )39;
  fld->get_field_type = (TIFFSetGetFieldType )39;
  break;
  case 3U: 
  fld->set_field_type = (TIFFSetGetFieldType )42;
  fld->get_field_type = (TIFFSetGetFieldType )42;
  break;
  case 4U: 
  fld->set_field_type = (TIFFSetGetFieldType )44;
  fld->get_field_type = (TIFFSetGetFieldType )44;
  break;
  case 11U: 
  case 10U: 
  case 5U: 
  fld->set_field_type = (TIFFSetGetFieldType )48;
  fld->get_field_type = (TIFFSetGetFieldType )48;
  break;
  case 6U: 
  fld->set_field_type = (TIFFSetGetFieldType )41;
  fld->get_field_type = (TIFFSetGetFieldType )41;
  break;
  case 8U: 
  fld->set_field_type = (TIFFSetGetFieldType )43;
  fld->get_field_type = (TIFFSetGetFieldType )43;
  break;
  case 9U: 
  fld->set_field_type = (TIFFSetGetFieldType )45;
  fld->get_field_type = (TIFFSetGetFieldType )45;
  break;
  case 12U: 
  fld->set_field_type = (TIFFSetGetFieldType )49;
  fld->get_field_type = (TIFFSetGetFieldType )49;
  break;
  case 18U: 
  case 13U: 
  fld->set_field_type = (TIFFSetGetFieldType )50;
  fld->get_field_type = (TIFFSetGetFieldType )50;
  break;
  case 16U: 
  fld->set_field_type = (TIFFSetGetFieldType )46;
  fld->get_field_type = (TIFFSetGetFieldType )46;
  break;
  case 17U: 
  fld->set_field_type = (TIFFSetGetFieldType )47;
  fld->get_field_type = (TIFFSetGetFieldType )47;
  break;
  default: 
  fld->set_field_type = (TIFFSetGetFieldType )0;
  fld->get_field_type = (TIFFSetGetFieldType )0;
  break;
  }
  fld->field_bit = (unsigned short)65;
  fld->field_oktochange = (unsigned char)1;
  fld->field_passcount = (unsigned char)1;
  tmp___0 = _TIFFmalloc((tmsize_t )32);
  fld->field_name = (char *)tmp___0;
  if ((unsigned int )fld->field_name == (unsigned int )((void *)0)) {
    _TIFFfree((void *)fld);
    return ((TIFFField *)((void *)0));
  } else {

  }
  fld->field_subfields = (TIFFFieldArray *)((void *)0);
  sprintf((char */* __restrict  */)fld->field_name,
          (char const   */* __restrict  */)"Tag %d", (int )tag);
  return (fld);
}
}
static TIFFSetGetFieldType _TIFFSetGetType(TIFFDataType type , short count ,
                                           unsigned char passcount ) 
{ 


  {
  if ((unsigned int )type == 2U) {
    if ((int )count == -1) {
      if ((int )passcount == 0) {
        return ((TIFFSetGetFieldType )1);
      } else {
        goto _L___3;
      }
    } else {
      goto _L___3;
    }
  } else
  _L___3: /* CIL Label */ 
  _L___2: /* CIL Label */ 
  if ((int )count == 1) {
    if ((int )passcount == 0) {
      switch ((unsigned int )type) {
      case 7U: 
      case 1U: 
      return ((TIFFSetGetFieldType )2);
      case 2U: 
      return ((TIFFSetGetFieldType )1);
      case 3U: 
      return ((TIFFSetGetFieldType )4);
      case 4U: 
      return ((TIFFSetGetFieldType )6);
      case 11U: 
      case 10U: 
      case 5U: 
      return ((TIFFSetGetFieldType )10);
      case 6U: 
      return ((TIFFSetGetFieldType )3);
      case 8U: 
      return ((TIFFSetGetFieldType )5);
      case 9U: 
      return ((TIFFSetGetFieldType )7);
      case 12U: 
      return ((TIFFSetGetFieldType )11);
      case 18U: 
      case 13U: 
      return ((TIFFSetGetFieldType )12);
      case 16U: 
      return ((TIFFSetGetFieldType )8);
      case 17U: 
      return ((TIFFSetGetFieldType )9);
      default: 
      return ((TIFFSetGetFieldType )0);
      }
    } else {
      goto _L___1;
    }
  } else
  _L___1: /* CIL Label */ 
  if ((int )count >= 1) {
    if ((int )passcount == 0) {
      switch ((unsigned int )type) {
      case 7U: 
      case 1U: 
      return ((TIFFSetGetFieldType )16);
      case 2U: 
      return ((TIFFSetGetFieldType )15);
      case 3U: 
      return ((TIFFSetGetFieldType )18);
      case 4U: 
      return ((TIFFSetGetFieldType )20);
      case 11U: 
      case 10U: 
      case 5U: 
      return ((TIFFSetGetFieldType )24);
      case 6U: 
      return ((TIFFSetGetFieldType )17);
      case 8U: 
      return ((TIFFSetGetFieldType )19);
      case 9U: 
      return ((TIFFSetGetFieldType )21);
      case 12U: 
      return ((TIFFSetGetFieldType )25);
      case 18U: 
      case 13U: 
      return ((TIFFSetGetFieldType )26);
      case 16U: 
      return ((TIFFSetGetFieldType )22);
      case 17U: 
      return ((TIFFSetGetFieldType )23);
      default: 
      return ((TIFFSetGetFieldType )0);
      }
    } else {
      goto _L___0;
    }
  } else
  _L___0: /* CIL Label */ 
  if ((int )count == -1) {
    if ((int )passcount == 1) {
      switch ((unsigned int )type) {
      case 7U: 
      case 1U: 
      return ((TIFFSetGetFieldType )28);
      case 2U: 
      return ((TIFFSetGetFieldType )27);
      case 3U: 
      return ((TIFFSetGetFieldType )30);
      case 4U: 
      return ((TIFFSetGetFieldType )32);
      case 11U: 
      case 10U: 
      case 5U: 
      return ((TIFFSetGetFieldType )36);
      case 6U: 
      return ((TIFFSetGetFieldType )29);
      case 8U: 
      return ((TIFFSetGetFieldType )31);
      case 9U: 
      return ((TIFFSetGetFieldType )33);
      case 12U: 
      return ((TIFFSetGetFieldType )37);
      case 18U: 
      case 13U: 
      return ((TIFFSetGetFieldType )38);
      case 16U: 
      return ((TIFFSetGetFieldType )34);
      case 17U: 
      return ((TIFFSetGetFieldType )35);
      default: 
      return ((TIFFSetGetFieldType )0);
      }
    } else {
      goto _L;
    }
  } else
  _L: /* CIL Label */ 
  if ((int )count == -3) {
    if ((int )passcount == 1) {
      switch ((unsigned int )type) {
      case 7U: 
      case 1U: 
      return ((TIFFSetGetFieldType )40);
      case 2U: 
      return ((TIFFSetGetFieldType )39);
      case 3U: 
      return ((TIFFSetGetFieldType )42);
      case 4U: 
      return ((TIFFSetGetFieldType )44);
      case 11U: 
      case 10U: 
      case 5U: 
      return ((TIFFSetGetFieldType )48);
      case 6U: 
      return ((TIFFSetGetFieldType )41);
      case 8U: 
      return ((TIFFSetGetFieldType )43);
      case 9U: 
      return ((TIFFSetGetFieldType )45);
      case 12U: 
      return ((TIFFSetGetFieldType )49);
      case 18U: 
      case 13U: 
      return ((TIFFSetGetFieldType )50);
      case 16U: 
      return ((TIFFSetGetFieldType )46);
      case 17U: 
      return ((TIFFSetGetFieldType )47);
      default: 
      return ((TIFFSetGetFieldType )0);
      }
    } else {

    }
  } else {

  }
  return ((TIFFSetGetFieldType )0);
}
}
int TIFFMergeFieldInfo(TIFF *tif , TIFFFieldInfo const   *info , uint32 n ) 
{ 
  char module[19] ;
  char reason[17] ;
  TIFFField *tp ;
  uint32 i ;
  uint32 nfields ;
  void *tmp ;
  void *tmp___0 ;
  uint32 tmp___1 ;
  void *tmp___2 ;
  int tmp___3 ;

  {
  module[0] = (char )'T';
  module[1] = (char )'I';
  module[2] = (char )'F';
  module[3] = (char )'F';
  module[4] = (char )'M';
  module[5] = (char )'e';
  module[6] = (char )'r';
  module[7] = (char )'g';
  module[8] = (char )'e';
  module[9] = (char )'F';
  module[10] = (char )'i';
  module[11] = (char )'e';
  module[12] = (char )'l';
  module[13] = (char )'d';
  module[14] = (char )'I';
  module[15] = (char )'n';
  module[16] = (char )'f';
  module[17] = (char )'o';
  module[18] = (char )'\000';
  reason[0] = (char )'f';
  reason[1] = (char )'o';
  reason[2] = (char )'r';
  reason[3] = (char )' ';
  reason[4] = (char )'f';
  reason[5] = (char )'i';
  reason[6] = (char )'e';
  reason[7] = (char )'l';
  reason[8] = (char )'d';
  reason[9] = (char )'s';
  reason[10] = (char )' ';
  reason[11] = (char )'a';
  reason[12] = (char )'r';
  reason[13] = (char )'r';
  reason[14] = (char )'a';
  reason[15] = (char )'y';
  reason[16] = (char )'\000';
  if (tif->tif_nfieldscompat > 0U) {
    tmp = _TIFFCheckRealloc(tif, (void *)tif->tif_fieldscompat,
                            (tmsize_t )(tif->tif_nfieldscompat + 1U),
                            (tmsize_t )sizeof(TIFFFieldArray ),
                            (char const   *)(reason));
    tif->tif_fieldscompat = (TIFFFieldArray *)tmp;
  } else {
    tmp___0 = _TIFFCheckMalloc(tif, (tmsize_t )1,
                               (tmsize_t )sizeof(TIFFFieldArray ),
                               (char const   *)(reason));
    tif->tif_fieldscompat = (TIFFFieldArray *)tmp___0;
  }
  if (! tif->tif_fieldscompat) {
    TIFFErrorExt(tif->tif_clientdata, (char const   *)(module),
                 "Failed to allocate fields array");
    return (-1);
  } else {

  }
  tmp___1 = tif->tif_nfieldscompat;
  (tif->tif_nfieldscompat) ++;
  nfields = tmp___1;
  (tif->tif_fieldscompat + nfields)->type = (TIFFFieldArrayType )2;
  (tif->tif_fieldscompat + nfields)->allocated_size = n;
  (tif->tif_fieldscompat + nfields)->count = n;
  tmp___2 = _TIFFCheckMalloc(tif, (tmsize_t )n, (tmsize_t )sizeof(TIFFField ),
                             (char const   *)(reason));
  (tif->tif_fieldscompat + nfields)->fields = (TIFFField *)tmp___2;
  if (! (tif->tif_fieldscompat + nfields)->fields) {
    TIFFErrorExt(tif->tif_clientdata, (char const   *)(module),
                 "Failed to allocate fields array");
    return (-1);
  } else {

  }
  tp = (tif->tif_fieldscompat + nfields)->fields;
  i = (uint32 )0;
  while (i < n) {
    tp->field_tag = (uint32 )(info + i)->field_tag;
    tp->field_readcount = (short )(info + i)->field_readcount;
    tp->field_writecount = (short )(info + i)->field_writecount;
    tp->field_type = (TIFFDataType )(info + i)->field_type;
    tp->reserved = (uint32 )0;
    tp->set_field_type = _TIFFSetGetType((TIFFDataType )(info + i)->field_type,
                                         (short )(info + i)->field_readcount,
                                         (unsigned char )(info + i)->field_passcount);
    tp->get_field_type = _TIFFSetGetType((TIFFDataType )(info + i)->field_type,
                                         (short )(info + i)->field_readcount,
                                         (unsigned char )(info + i)->field_passcount);
    tp->field_bit = (unsigned short )(info + i)->field_bit;
    tp->field_oktochange = (unsigned char )(info + i)->field_oktochange;
    tp->field_passcount = (unsigned char )(info + i)->field_passcount;
    tp->field_name = (char *)(info + i)->field_name;
    tp->field_subfields = (TIFFFieldArray *)((void *)0);
    tp ++;
    i ++;
  }
  tmp___3 = _TIFFMergeFields(tif,
                             (TIFFField const   *)(tif->tif_fieldscompat + nfields)->fields,
                             n);
  if (tmp___3) {

  } else {
    TIFFErrorExt(tif->tif_clientdata, (char const   *)(module),
                 "Setting up field info failed");
    return (-1);
  }
  return (0);
}
}
TIFFFieldInfo const   *TIFFFindFieldInfoByName(TIFF *tif ,
                                               char const   *field_name ,
                                               TIFFDataType dt ) 
{ 


  {
  return ((TIFFFieldInfo const   *)((void *)0));
}
}
TIFFFieldInfo const   *TIFFFindFieldInfo(TIFF *tif , uint32 tag ,
                                         TIFFDataType dt ) 
{ 


  {
  return ((TIFFFieldInfo const   *)((void *)0));
}
}
